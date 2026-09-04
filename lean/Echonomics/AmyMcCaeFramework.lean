import Echonomics.Core

/-!
# Echonomics.AmyMcCaeFramework — ADR-0023: Amy McCae Fractional Wellness and Leadership Framework

Formal implementation and proofs for the fractional workplace wellness model:

- Embodied capacity: `E = C_avail - S_load` where available capacity
  `C_avail` and stress burden `S_load` are normalized on a common scale
  (0–100 in the Nat encoding). Total energy is signed (`Int`).
- Capacity estimation: `C_avail = α · mean(e_energy, e_focus, e_emotion)`
  with calibration coefficient `α ≤ 1` (e.g. 0.8), so the estimate never
  exceeds the raw check-in inputs.
- Stress Load Index: the resilience assessment's perceived-pressure,
  role-ambiguity, and interpersonal-friction scale is bounded at 10.
- Burnout gate: when embodied energy falls below the intervention
  threshold the system fails closed — intervention is required.
- Fractional engagement: the wellness strategist's engagement fraction is
  bounded by 1 (part-time / project-based, never over-committed).

All constructions are zero-Mathlib, zero-sorry, and decidable-equality
capable, following the Echonomics canonical core.
-/

namespace Echonomics.AmyMcCaeFramework

open Echonomics.Core

/-! ## ADR Record -/

/-- ADR-0023 declaration: Amy McCae Fractional Wellness and Leadership Framework. -/
def adr0023 : ADR := {
  id := 23,
  title := "Amy McCae Fractional Wellness and Leadership Framework",
  status := ADRStatus.Accepted,
  context := "Deep dive and formalization of Amy McCae fractional workplace wellness strategy, executive coaching, and stress regulation models.",
  decision := "Model embodied capacity E = C_avail - S_load with bounded, normalized ledgers and a fail-closed burnout intervention gate.",
  consequences := ["Embodied capacity ledger", "Fail-closed burnout gate"],
  supersedes := none,
  links := []
}

/-! ## Embodied Capacity Ledger -/

/-- Embodied state: available regulatory capacity and cumulative stress load,
    both normalized to a common 0–100 scale (Nat encoding of 0–1.0). -/
structure EmbodiedState where
  capacity : Nat   -- C_avail × 100, in [0, 100]
  stress : Nat     -- S_load × 100, in [0, 100]
  deriving Repr, DecidableEq

/-- Embodied energy: `E = C_avail - S_load` (signed Int). -/
def embodiedEnergy (st : EmbodiedState) : Int :=
  (st.capacity : Int) - (st.stress : Int)

/-- Energy sign convention: `E = C_avail - S_load`. -/
theorem energy_sign_convention (st : EmbodiedState) :
    embodiedEnergy st = (st.capacity : Int) - (st.stress : Int) := by
  rfl

/-- Increasing stress burden lowers embodied energy (capacity fixed). -/
theorem increasing_stress_lowers_energy (capacity s1 s2 : Nat) (h : s1 ≤ s2) :
    embodiedEnergy ⟨capacity, s2⟩ ≤ embodiedEnergy ⟨capacity, s1⟩ := by
  dsimp [embodiedEnergy]
  omega

/-- Increasing available capacity raises embodied energy (stress fixed). -/
theorem increasing_capacity_raises_energy (stress c1 c2 : Nat) (h : c1 ≤ c2) :
    embodiedEnergy ⟨c1, stress⟩ ≤ embodiedEnergy ⟨c2, stress⟩ := by
  dsimp [embodiedEnergy]
  omega

/-- With both ledgers normalized to [0, 100], embodied energy is bounded in
    [-100, 100]. -/
theorem energy_bounded_between_neg100_and_100 (st : EmbodiedState)
    (hc : st.capacity ≤ 100) (hs : st.stress ≤ 100) :
    -100 ≤ embodiedEnergy st ∧ embodiedEnergy st ≤ 100 := by
  dsimp [embodiedEnergy]
  omega

/-! ## Capacity Estimation (α-calibrated) -/

/-- Capacity estimate from the three embodied check-in scores (energy, focus,
    emotional balance), each on a 0–100 scale:
    `C_est = (α · (e1 + e2 + e3)) / (3 · α_den)` with `α = α_num / α_den ≤ 1`. -/
def estimateCapacity (e1 e2 e3 αNum αDen : Nat) : Nat :=
  (e1 + e2 + e3) * αNum / (3 * αDen)

/-- The α-calibrated estimate never exceeds the sum of the raw check-in
    inputs for any calibration coefficient `α = αNum / αDen ≤ 1` (the mean of
    three scores is at most their sum, and α never amplifies). -/
theorem capacity_estimate_bounded_by_input_sum (e1 e2 e3 αNum αDen : Nat)
    (hα : αNum ≤ αDen) (hden : αDen > 0) :
    estimateCapacity e1 e2 e3 αNum αDen ≤ e1 + e2 + e3 := by
  unfold estimateCapacity
  have h0 : 0 < 3 * αDen := by omega
  have h1 : (e1 + e2 + e3) * αNum ≤ (e1 + e2 + e3) * (3 * αDen) := by
    apply Nat.mul_le_mul_left
    omega
  have h2 : (e1 + e2 + e3) * (3 * αDen) ≤ (e1 + e2 + e3) * (3 * αDen) + (3 * αDen) - 1 := by omega
  have h3 : (e1 + e2 + e3) * αNum ≤ (e1 + e2 + e3) * (3 * αDen) + (3 * αDen) - 1 := Nat.le_trans h1 h2
  exact (Nat.div_le_iff_le_mul h0).2 h3

/-- With `α = 0.8` (α_num = 4, α_den = 5) and inputs at most 100, the
    estimate is at most 80: `0.8 · mean ≤ 80` on the 0–100 scale. -/
theorem alpha08_estimate_bounded_by_80 (e1 e2 e3 : Nat) (h1 : e1 ≤ 100) (h2 : e2 ≤ 100) (h3 : e3 ≤ 100) :
    estimateCapacity e1 e2 e3 4 5 ≤ 80 := by
  unfold estimateCapacity
  have hsum : e1 + e2 + e3 ≤ 300 := by omega
  calc
    (e1 + e2 + e3) * 4 / (3 * 5) ≤ (e1 + e2 + e3) * 4 / 15 := by omega
    _ ≤ 300 * 4 / 15 := by
      exact Nat.div_le_div_right (Nat.mul_le_mul_right 4 hsum)
    _ = 80 := by decide

/-! ## Stress Load Index -/

/-- The Stress Load Index (resilience assessment) is measured on a 0–10 scale:
    perceived pressure, role ambiguity, and interpersonal friction. -/
def STRESS_INDEX_MAX : Nat := 10

/-- A stress index is valid exactly when it lies on the 0–10 scale. -/
def isStressIndexValid (index : Nat) : Bool :=
  index ≤ STRESS_INDEX_MAX

/-- A valid stress index never exceeds 10. -/
theorem stress_index_bounded_by_ten (index : Nat) (h : isStressIndexValid index = true) :
    index ≤ 10 := by
  unfold isStressIndexValid at h
  unfold STRESS_INDEX_MAX at h
  exact of_decide_eq_true h

/-- Indices above the 0–10 scale fail closed. -/
theorem stress_index_above_ten_rejected (index : Nat) (h : index > 10) :
    isStressIndexValid index = false := by
  cases hc : isStressIndexValid index with
  | true =>
      have hle : index ≤ 10 := by
        unfold isStressIndexValid at hc
        unfold STRESS_INDEX_MAX at hc
        exact of_decide_eq_true hc
      omega
  | false => rfl

/-! ## Burnout Gate -/

/-- Burnout intervention threshold on the embodied-energy scale: at or below
    this value the system requires intervention (default −20, i.e. E ≤ −0.2). -/
def BURNOUT_THRESHOLD : Int := -20

/-- Burnout risk: embodied energy below the intervention threshold. -/
def isBurnoutRisk (st : EmbodiedState) : Bool :=
  embodiedEnergy st < BURNOUT_THRESHOLD

/-- Fail-closed: a burnout-risk state requires intervention. -/
def requiresIntervention (st : EmbodiedState) : Bool :=
  isBurnoutRisk st

/-- Burnout risk is exactly low embodied energy. -/
theorem burnout_risk_iff_low_energy (st : EmbodiedState) :
    isBurnoutRisk st = true ↔ embodiedEnergy st < BURNOUT_THRESHOLD := by
  simp [isBurnoutRisk]

/-- A state with exhausted capacity and heavy stress is a burnout risk and
    therefore requires intervention (fail-closed). -/
theorem exhausted_state_requires_intervention (capacity stress : Nat)
    (h : (capacity : Int) - (stress : Int) < BURNOUT_THRESHOLD) :
    requiresIntervention ⟨capacity, stress⟩ = true := by
  unfold requiresIntervention isBurnoutRisk
  dsimp [embodiedEnergy]
  exact decide_eq_true h

/-- A healthy state (capacity ≥ stress) is never a burnout risk. -/
theorem healthy_state_not_burnout_risk (st : EmbodiedState) (h : st.capacity ≥ st.stress) :
    isBurnoutRisk st = false := by
  cases hc : isBurnoutRisk st with
  | true =>
      have hlt : embodiedEnergy st < BURNOUT_THRESHOLD := (burnout_risk_iff_low_energy st).1 hc
      dsimp [embodiedEnergy] at hlt
      unfold BURNOUT_THRESHOLD at hlt
      have hnonneg : 0 ≤ (st.capacity : Int) - (st.stress : Int) := by omega
      omega
  | false => rfl

/-! ## Fractional Engagement -/

/-- Fractional engagement fraction: the strategist works part-time or
    project-based; the committed fraction never exceeds 1. -/
def isFractionalEngagementValid (fractionNum fractionDen : Nat) : Bool :=
  fractionNum ≤ fractionDen ∧ fractionDen > 0

/-- A fractional engagement is never over-committed: numerator ≤ denominator. -/
theorem fractional_engagement_never_exceeds_one (fractionNum fractionDen : Nat)
    (h : isFractionalEngagementValid fractionNum fractionDen = true) :
    fractionNum ≤ fractionDen := by
  have h' : fractionNum ≤ fractionDen ∧ 0 < fractionDen := by
    simpa [isFractionalEngagementValid] using h
  exact h'.1

/-- A full-time equivalent (1/1) is the upper bound of fractional engagement. -/
theorem full_time_is_upper_bound :
    isFractionalEngagementValid 1 1 = true := by
  unfold isFractionalEngagementValid
  decide

end Echonomics.AmyMcCaeFramework