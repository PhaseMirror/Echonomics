import Echonomics.Core

/-!
# Echonomics.WardMonitor — ADR-0029: WardMonitor Universal Thresholds and Interlock Duty Cycle

Formal implementation and proofs for the WardMonitor hardware-level interlock:

- Universal thresholds, scaled ×10 for exact integer arithmetic:
  - Embodied energy interlock: `E < -0.7` (i.e. `E_scaled < -7`).
  - Triadic Discrepancy Index (TDI): Green `≤ 0.8`, Amber `≤ 1.8`,
    Red (interlock) `> 1.8` (`8`, `18` scaled).
  - Masking frequency: `≥ 2` masking flags in the last `3` consecutive
    check-ins is Red (sustained masking, never a single transient).
  - Aggregated autonomic drift (HRV log-deviation): Red when
    `Avg Drift < -1.5σ` (`-15` scaled).
- Composite `SIG_GOV_KILL` interlock — no single metric except extreme
  energy collapse triggers it:
  `E < -0.7 OR (TDI > 1.8 AND AvgDrift < -1.5σ) OR (masking ≥ 2/3)`.
- The duty cycle: the monitor recomputes the cryptographic chain
  (`prev_hash`/`entry_hash`); a broken link fails closed to interlock.

All constructions are zero-Mathlib, zero-sorry, and decidable-equality
capable, following the Echonomics canonical core.
-/

namespace Echonomics.WardMonitor

open Echonomics.Core

/-! ## ADR Record -/

/-- ADR-0029 declaration: WardMonitor Universal Thresholds and Interlock Duty Cycle. -/
def adr0029 : ADR := {
  id := 29,
  title := "WardMonitor Universal Thresholds and Interlock Duty Cycle",
  status := ADRStatus.Accepted,
  context := "Formal specification of WardMonitor universal thresholds, invariant envelopes (Embodied Capacity, TDI, Masking Frequency, HRV Drift), and SIG_GOV_KILL interlock logic.",
  decision := "Enforce composite SIG_GOV_KILL interlocks with locked universal thresholds and a fail-closed cryptographic chain duty cycle.",
  consequences := ["Hardware-level interlock", "Fail-closed chain verification"],
  supersedes := none,
  links := []
}

/-! ## Universal Thresholds (×10 scaled) -/

/-- Embodied energy interlock bound: `E < -0.7`, scaled ×10. -/
def ENERGY_RED_BOUND : Int := -7

/-- TDI green ceiling: `TDI ≤ 0.8`, scaled ×10. -/
def TDI_GREEN_BOUND : Nat := 8

/-- TDI amber ceiling: `TDI ≤ 1.8`, scaled ×10 (above this is Red). -/
def TDI_AMBER_BOUND : Nat := 18

/-- HRV drift amber floor: `AvgDrift ≥ -1.5σ`, scaled ×10 (below this is Red). -/
def HRV_AMBER_BOUND : Int := -15

/-- Masking window: the last 3 consecutive check-ins. -/
def MASKING_WINDOW : Nat := 3

/-- Sustained-masking interlock count: `≥ 2` masking flags in the window. -/
def MASKING_RED_COUNT : Nat := 2

/-- The universal thresholds are locked to the ADR-0029 constants. -/
theorem thresholds_locked :
    ENERGY_RED_BOUND = -7 ∧ TDI_GREEN_BOUND = 8 ∧ TDI_AMBER_BOUND = 18 ∧
      HRV_AMBER_BOUND = -15 ∧ MASKING_WINDOW = 3 ∧ MASKING_RED_COUNT = 2 := by
  decide

/-! ## Ward State -/

/-- Observed triad state: embodied energy and HRV drift (signed, ×10) plus the
    TDI score and the masking-flag count over the last 3 check-ins. -/
structure WardState where
  energyScaled : Int    -- embodied energy E × 10
  tdiScaled : Nat       -- triadic discrepancy index × 10
  hrvDriftScaled : Int  -- mean HRV log-deviation × 10 (σ units)
  maskingLastN : Nat    -- masking flags in the last 3 check-ins
  deriving Repr, DecidableEq

/-- Embodied-energy interlock: `E < -0.7`. -/
def isEnergyRed (st : WardState) : Bool :=
  st.energyScaled < ENERGY_RED_BOUND

/-- TDI interlock: `TDI > 1.8`. -/
def isTdiRed (st : WardState) : Bool :=
  st.tdiScaled > TDI_AMBER_BOUND

/-- TDI amber band: `0.8 < TDI ≤ 1.8` (warning, not interlock). -/
def isTdiAmber (st : WardState) : Bool :=
  st.tdiScaled > TDI_GREEN_BOUND ∧ st.tdiScaled ≤ TDI_AMBER_BOUND

/-- HRV-drift interlock: `AvgDrift < -1.5σ`. -/
def isHrvRed (st : WardState) : Bool :=
  st.hrvDriftScaled < HRV_AMBER_BOUND

/-- Sustained-masking interlock: `≥ 2` masking flags in the last 3 check-ins. -/
def isMaskingRed (st : WardState) : Bool :=
  st.maskingLastN ≥ MASKING_RED_COUNT

/-! ## Threshold Boundary Theorems -/

/-- Energy below -0.7 is Red. -/
theorem energy_red_below_minus07 : isEnergyRed ⟨-8, 0, 0, 0⟩ = true := by
  decide

/-- Energy at exactly -0.7 is not Red (strict inequality). -/
theorem energy_green_at_minus07 : isEnergyRed ⟨-7, 0, 0, 0⟩ = false := by
  decide

/-- TDI above 1.8 is Red. -/
theorem tdi_red_above_18 : isTdiRed ⟨0, 19, 0, 0⟩ = true := by
  decide

/-- TDI at the green ceiling (0.8) is not Red. -/
theorem tdi_green_at_08 : isTdiRed ⟨0, 8, 0, 0⟩ = false := by
  decide

/-- TDI bands: strictly between green and amber is amber; the band edges are
    green and red respectively. -/
theorem tdi_amber_strictly_between :
    isTdiAmber ⟨0, 10, 0, 0⟩ = true ∧
      isTdiAmber ⟨0, 8, 0, 0⟩ = false ∧
      isTdiAmber ⟨0, 19, 0, 0⟩ = false := by
  decide

/-- HRV drift below -1.5σ is Red. -/
theorem hrv_red_below_minus15 : isHrvRed ⟨0, 0, -16, 0⟩ = true := by
  decide

/-- HRV drift at exactly -1.5σ is not Red (strict inequality). -/
theorem hrv_green_at_minus15 : isHrvRed ⟨0, 0, -15, 0⟩ = false := by
  decide

/-- Two masking flags in the window are Red (sustained masking). -/
theorem masking_red_at_two : isMaskingRed ⟨0, 0, 0, 2⟩ = true := by
  decide

/-- A single masking flag is not Red (transient artifact, amber). -/
theorem masking_green_below_two : isMaskingRed ⟨0, 0, 0, 1⟩ = false := by
  decide

/-- Red masking is exactly `≥ 2` flags. -/
theorem masking_red_implies_two_flags (st : WardState) (h : isMaskingRed st = true) :
    st.maskingLastN ≥ 2 := by
  unfold isMaskingRed at h
  unfold MASKING_RED_COUNT at h
  exact of_decide_eq_true h

/-- A masking count is valid only within the 3-check-in window. -/
def isMaskingCountInWindow (n : Nat) : Bool :=
  n ≤ MASKING_WINDOW

/-- A valid masking count never exceeds the 3-check-in window. -/
theorem masking_count_in_window_bounded (n : Nat) (h : isMaskingCountInWindow n = true) :
    n ≤ 3 := by
  unfold isMaskingCountInWindow at h
  unfold MASKING_WINDOW at h
  exact of_decide_eq_true h

/-- A Red masking state within the window is exactly 2 or 3 flags. -/
theorem red_masking_within_window (st : WardState)
    (hv : isMaskingCountInWindow st.maskingLastN = true) (hr : isMaskingRed st = true) :
    st.maskingLastN = 2 ∨ st.maskingLastN = 3 := by
  have hb : st.maskingLastN ≥ 2 := masking_red_implies_two_flags st hr
  have ht : st.maskingLastN ≤ 3 := masking_count_in_window_bounded st.maskingLastN hv
  omega

/-! ## Composite Interlock (SIG_GOV_KILL) -/

/-- `SIG_GOV_KILL` composite condition:
    `E < -0.7` OR `(TDI > 1.8 AND AvgDrift < -1.5σ)` OR `masking ≥ 2/3`. -/
def sigGovKill (st : WardState) : Bool :=
  isEnergyRed st || (isTdiRed st && isHrvRed st) || isMaskingRed st

/-- The interlock condition is exactly the composite disjunction. -/
theorem sig_gov_kill_iff (st : WardState) :
    sigGovKill st = true ↔
      isEnergyRed st = true ∨ (isTdiRed st = true ∧ isHrvRed st = true) ∨ isMaskingRed st = true := by
  unfold sigGovKill
  simp [Bool.or_eq_true, Bool.and_eq_true, or_assoc]

/-- Extreme energy collapse alone triggers the interlock (the single-metric
    exception in ADR-0029). -/
theorem extreme_energy_collapse_alone_triggers (st : WardState) (h : isEnergyRed st = true) :
    sigGovKill st = true := by
  unfold sigGovKill
  simp [h]

/-- The dissonance–drift conjunction triggers the interlock even when energy
    and masking are green. -/
theorem tdi_and_hrv_triggers (st : WardState) (ht : isTdiRed st = true) (hh : isHrvRed st = true) :
    sigGovKill st = true := by
  unfold sigGovKill
  simp [ht, hh]

/-- Sustained masking alone triggers the interlock. -/
theorem sustained_masking_alone_triggers (st : WardState) (h : isMaskingRed st = true) :
    sigGovKill st = true := by
  unfold sigGovKill
  simp [h]

/-- No false positive: high TDI alone (e.g. a new member joining) never
    triggers the interlock while every other metric is green. -/
theorem tdi_alone_not_enough (st : WardState)
    (ht : isTdiRed st = true) (he : isEnergyRed st = false)
    (hh : isHrvRed st = false) (hm : isMaskingRed st = false) :
    sigGovKill st = false := by
  unfold sigGovKill
  simp [ht, he, hh, hm]

/-- No false positive: low HRV drift alone never triggers the interlock. -/
theorem hrv_alone_not_enough (st : WardState)
    (hh : isHrvRed st = true) (he : isEnergyRed st = false)
    (ht : isTdiRed st = false) (hm : isMaskingRed st = false) :
    sigGovKill st = false := by
  unfold sigGovKill
  simp [hh, he, ht, hm]

/-- A fully green state never triggers the interlock. -/
theorem green_state_no_interlock (st : WardState)
    (he : isEnergyRed st = false) (ht : isTdiRed st = false)
    (hh : isHrvRed st = false) (hm : isMaskingRed st = false) :
    sigGovKill st = false := by
  unfold sigGovKill
  simp [he, ht, hh, hm]

/-- The interlock is monotone in masking: a state that already interlocks
    keeps interlocking when the masking count rises (all else equal). -/
theorem interlock_persists_with_more_masking (st st2 : WardState)
    (hm : st.maskingLastN ≤ st2.maskingLastN)
    (he : st.energyScaled = st2.energyScaled)
    (ht : st.tdiScaled = st2.tdiScaled)
    (hh : st.hrvDriftScaled = st2.hrvDriftScaled)
    (hk : sigGovKill st = true) :
    sigGovKill st2 = true := by
  rw [sig_gov_kill_iff] at hk ⊢
  rcases hk with h | h | h
  · left
    unfold isEnergyRed at h ⊢
    have h' : st2.energyScaled < ENERGY_RED_BOUND := by
      rw [he] at h
      exact of_decide_eq_true h
    exact decide_eq_true h'
  · right; left
    rcases h with ⟨hT, hH⟩
    constructor
    · unfold isTdiRed at hT ⊢
      have h' : st2.tdiScaled > TDI_AMBER_BOUND := by
        rw [ht] at hT
        exact of_decide_eq_true hT
      exact decide_eq_true h'
    · unfold isHrvRed at hH ⊢
      have h' : st2.hrvDriftScaled < HRV_AMBER_BOUND := by
        rw [hh] at hH
        exact of_decide_eq_true hH
      exact decide_eq_true h'
  · right; right
    unfold isMaskingRed at h ⊢
    have h' : MASKING_RED_COUNT ≤ st2.maskingLastN := by
      exact Nat.le_trans (of_decide_eq_true h) hm
    exact decide_eq_true h'

/-! ## Duty Cycle: Cryptographic Chain Verification -/

/-- A monitor entry: the hash of the current check-in plus the hash of the
    previous entry, forming the tamper-evident chain. -/
structure MonitorEntry where
  entryHash : Nat
  prevHash : Nat
  deriving Repr, DecidableEq

/-- Chain validity: every successor's `prevHash` equals its predecessor's
    `entryHash` (recomputed by the monitor each duty cycle). -/
def isChainValid : List MonitorEntry → Bool
  | [] => true
  | [_] => true
  | e1 :: e2 :: rest => (e2.prevHash = e1.entryHash) && isChainValid (e2 :: rest)

/-- A chain violation: the recomputation failed. -/
def isChainBroken (entries : List MonitorEntry) : Bool :=
  ! isChainValid entries

/-- The WardMonitor interlock: threshold breach OR chain violation
    (fail-closed duty cycle). -/
def monitorInterlock (entries : List MonitorEntry) (st : WardState) : Bool :=
  sigGovKill st || isChainBroken entries

/-- A genesis chain (single entry) is trivially valid. -/
theorem genesis_entry_chain_valid (e : MonitorEntry) : isChainValid [e] = true := by
  unfold isChainValid
  rfl

/-- A two-entry chain is valid exactly when the link is intact. -/
theorem two_entry_chain_valid_iff (e1 e2 : MonitorEntry) :
    isChainValid [e1, e2] = true ↔ e2.prevHash = e1.entryHash := by
  unfold isChainValid
  simp [genesis_entry_chain_valid]

/-- Fail-closed: a broken link is detected as an invalid chain. -/
theorem broken_link_chain_invalid (e1 e2 : MonitorEntry) (h : e2.prevHash ≠ e1.entryHash) :
    isChainValid [e1, e2] = false := by
  unfold isChainValid
  cases hc : decide (e2.prevHash = e1.entryHash) with
  | true =>
      have heq : e2.prevHash = e1.entryHash := of_decide_eq_true hc
      exact False.elim (h heq)
  | false => rfl

/-- The monitor interlock is exactly threshold-breach or chain-violation. -/
theorem monitor_interlock_iff (entries : List MonitorEntry) (st : WardState) :
    monitorInterlock entries st = true ↔ sigGovKill st = true ∨ isChainBroken entries = true := by
  unfold monitorInterlock
  simp [Bool.or_eq_true]

/-- Duty cycle: a threshold breach forces `SIG_GOV_KILL` regardless of the
    chain state. -/
theorem threshold_breach_triggers_interlock (entries : List MonitorEntry) (st : WardState)
    (h : sigGovKill st = true) :
    monitorInterlock entries st = true := by
  unfold monitorInterlock
  rw [h]
  simp

/-- Duty cycle: a tampered chain forces `SIG_GOV_KILL` regardless of the
    threshold state (potential tampering ⇒ IMMEDIATE INTERLOCK). -/
theorem tampered_chain_triggers_interlock (e1 e2 : MonitorEntry) (st : WardState)
    (h : e2.prevHash ≠ e1.entryHash) :
    monitorInterlock [e1, e2] st = true := by
  unfold monitorInterlock isChainBroken
  rw [broken_link_chain_invalid e1 e2 h]
  simp

/-- Duty cycle: an intact chain with a green threshold state produces no
    interlock (the nominal operating zone). -/
theorem intact_chain_and_green_state_no_interlock (e1 e2 : MonitorEntry) (st : WardState)
    (h : e2.prevHash = e1.entryHash) (hk : sigGovKill st = false) :
    monitorInterlock [e1, e2] st = false := by
  unfold monitorInterlock isChainBroken
  rw [hk]
  have hv : isChainValid [e1, e2] = true := (two_entry_chain_valid_iff e1 e2).mpr h
  rw [hv]
  simp

end Echonomics.WardMonitor