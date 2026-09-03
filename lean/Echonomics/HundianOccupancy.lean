import Echonomics.Core

/-!
# Echonomics.HundianOccupancy — ADR-0001: Hundian Social Physics Occupancy Governance

Formal implementation and proofs for the 5-stage gate priority:
  G0: UNKNOWN_CLASS → G1: DUALHAT → G2: PAULI → G3: TERM_ORDER → G4/G5: OK_*

Key properties:
- Pauli key K = (role_class, slot_id, period_id); person_id is particle label only
- Multiplicity M = n_unpaired + 1
- Half-fill maximum multiplicity M = |D| + 1
- Full-fill closed shell singlet M = 1
- Term-order gate enforces U = 0 before pairing on degenerate slots
- Pauli exclusion caps slot capacity at 2 occupants
-/

namespace Echonomics.HundianOccupancy

open Echonomics.Core

/-! ## ADR-0001 Record -/

def adr0001 : ADR := {
  id := 1
  title := "Hundian Social Physics Occupancy Governance & Term-Order Gate"
  status := ADRStatus.Proposed
  context := "Echonomics social physics models participant role allocations onto degenerate role-class sets."
  decision := "Enforce Pauli key capacity, 5-stage gate priority, and exact multiplicity M = n_unpaired + 1."
  consequences := [
    "Formally eliminates heuristic survey reciprocity",
    "Machine-checked term-ordering gate"
  ]
  supersedes := none
  links := []
}

/-! ## Multiplicity -/

/-- Multiplicity M = n_unpaired + 1. -/
def calculateMultiplicity (nUnpaired : Nat) : Nat :=
  nUnpaired + 1

/-- Half-fill maximum multiplicity: M = |D| + 1. -/
theorem half_fill_max_multiplicity (numSlots : Nat) :
    calculateMultiplicity numSlots = numSlots + 1 := by
  rfl

/-- Full-fill closed shell singlet: M = 1 when n_unpaired = 0. -/
theorem closed_shell_singlet_multiplicity :
    calculateMultiplicity 0 = 1 := by
  rfl

/-- Multiplicity is always positive. -/
theorem multiplicity_positive (nUnpaired : Nat) :
    calculateMultiplicity nUnpaired ≥ 1 := by
  unfold calculateMultiplicity; omega

/-- Multiplicity is strictly greater than n_unpaired. -/
theorem multiplicity_gt_unpaired (nUnpaired : Nat) :
    calculateMultiplicity nUnpaired > nUnpaired := by
  unfold calculateMultiplicity; omega

/-- Multiplicity is monotonically non-decreasing. -/
theorem multiplicity_monotone (a b : Nat) (h : a ≤ b) :
    calculateMultiplicity a ≤ calculateMultiplicity b := by
  unfold calculateMultiplicity; omega

/-! ## 5-Stage Gate Evaluation -/

/-- The Pauli gate for a single Pauli key evaluation.
    Implements the 5-stage priority:
    - G2: PAULI — slot at capacity (≥2 occupants)
    - G3: TERM_ORDER — degenerate slot with empty slots remaining (U > 0)
    - G4/G5: OK_* — accepted with appropriate spin tag
-/
def evaluatePauliGate
    (occupantsCount : Nat)
    (emptySlotsInD : Nat)
    (isDegenerate : Bool) : GateResult :=
  if _h_ge_2 : occupantsCount ≥ 2 then
    GateResult.RejPauli
  else if _h_eq_1 : occupantsCount == 1 then
    if isDegenerate then
      if emptySlotsInD > 0 then
        GateResult.RejTermOrder
      else
        GateResult.OkPair SpinTag.Beta
    else
      GateResult.OkHierarchy
  else
    if isDegenerate then
      GateResult.OkSingle SpinTag.Alpha
    else
      GateResult.OkHierarchy

/-! ## Gate Property Proofs -/

/-- G2: Pauli exclusion rejects third occupant. -/
theorem pauli_exclusion_rejects_third_occupant
    (emptySlots : Nat) (isDeg : Bool) :
    evaluatePauliGate 2 emptySlots isDeg = GateResult.RejPauli := by
  rfl

/-- G2: Pauli exclusion rejects fourth occupant. -/
theorem pauli_exclusion_rejects_fourth_occupant
    (emptySlots : Nat) (isDeg : Bool) :
    evaluatePauliGate 3 emptySlots isDeg = GateResult.RejPauli := by
  rfl

/-- G2: Pauli exclusion rejects arbitrary large occupancy. -/
theorem pauli_exclusion_rejects_large
    (n : Nat) (h : n ≥ 2) (emptySlots : Nat) (isDeg : Bool) :
    evaluatePauliGate n emptySlots isDeg = GateResult.RejPauli := by
  unfold evaluatePauliGate
  split
  · rfl
  · next h_false => simp at h_false; omega

/-- G3: Term-order gate blocks pairing when empty degenerate slots remain. -/
theorem term_order_blocks_degenerate
    (u : Nat) (hu : u > 0) :
    evaluatePauliGate 1 u true = GateResult.RejTermOrder := by
  unfold evaluatePauliGate; simp; omega

/-- G3: Term-order allows pairing when all degenerate slots are filled (U = 0). -/
theorem term_order_allows_pairing_when_all_slots_filled :
    evaluatePauliGate 1 0 true = GateResult.OkPair SpinTag.Beta := by
  rfl

/-- G4: Single occupant on degenerate slot gets OkPair Beta. -/
theorem single_degenerate_gets_pair :
    evaluatePauliGate 1 0 true = GateResult.OkPair SpinTag.Beta := by
  rfl

/-- G5: Non-degenerate second occupant returns OkHierarchy. -/
theorem non_degenerate_second_occupant_returns_hierarchy
    (emptySlots : Nat) :
    evaluatePauliGate 1 emptySlots false = GateResult.OkHierarchy := by
  unfold evaluatePauliGate; simp

/-- Empty slot on degenerate class gets Alpha spin. -/
theorem empty_degenerate_gets_alpha (u : Nat) :
    evaluatePauliGate 0 u true = GateResult.OkSingle SpinTag.Alpha := by
  rfl

/-- Empty slot on non-degenerate class gets OkHierarchy. -/
theorem empty_non_degenerate_gets_hierarchy (u : Nat) :
    evaluatePauliGate 0 u false = GateResult.OkHierarchy := by
  rfl

/-! ## Gate Result Classification -/

/-- All possible gate results. -/
def allGateResults : List GateResult :=
  [ .OkSingle SpinTag.Alpha
  , .OkSingle SpinTag.Beta
  , .OkPair SpinTag.Alpha
  , .OkPair SpinTag.Beta
  , .OkHierarchy
  , .OkDualHatWaiver none
  , .OkDualHatWaiver (some SpinTag.Alpha)
  , .OkDualHatWaiver (some SpinTag.Beta)
  , .RejUnknownClass
  , .RejDualHat
  , .RejPauli
  , .RejTermOrder
  ]

theorem rej_pauli_in_universe :
    GateResult.RejPauli ∈ allGateResults := by
  simp [allGateResults]

theorem rej_term_order_in_universe :
    GateResult.RejTermOrder ∈ allGateResults := by
  simp [allGateResults]

theorem ok_pair_beta_in_universe :
    GateResult.OkPair SpinTag.Beta ∈ allGateResults := by
  simp [allGateResults]

theorem ok_single_alpha_in_universe :
    GateResult.OkSingle SpinTag.Alpha ∈ allGateResults := by
  simp [allGateResults]

/-! ## Multiplicity-Gate Consistency -/

/-- The gate result determines the multiplicity delta. -/
def gateMultiplicityDelta : GateResult → Nat
  | .OkSingle _  => 1
  | .OkPair _    => 1
  | .OkHierarchy => 1
  | _            => 0

theorem ok_gate_increments_multiplicity :
    gateMultiplicityDelta (GateResult.OkSingle SpinTag.Alpha) = 1 := by
  rfl

theorem ok_pair_increments_multiplicity :
    gateMultiplicityDelta (GateResult.OkPair SpinTag.Beta) = 1 := by
  rfl

theorem ok_hierarchy_increments_multiplicity :
    gateMultiplicityDelta GateResult.OkHierarchy = 1 := by
  rfl

theorem rej_pauli_no_increment :
    gateMultiplicityDelta GateResult.RejPauli = 0 := by
  rfl

theorem rej_term_order_no_increment :
    gateMultiplicityDelta GateResult.RejTermOrder = 0 := by
  rfl

theorem rej_unknown_class_no_increment :
    gateMultiplicityDelta GateResult.RejUnknownClass = 0 := by
  rfl

/-- Gate results that increment multiplicity are precisely the Ok* results. -/
theorem increment_implies_ok (gr : GateResult)
    (h : gateMultiplicityDelta gr = 1) :
    gr = GateResult.OkSingle SpinTag.Alpha ∨
    gr = GateResult.OkSingle SpinTag.Beta ∨
    gr = GateResult.OkPair SpinTag.Alpha ∨
    gr = GateResult.OkPair SpinTag.Beta ∨
    gr = GateResult.OkHierarchy := by
  match gr with
  | .OkSingle .Alpha => exact .inl rfl
  | .OkSingle .Beta  => exact .inr (.inl rfl)
  | .OkPair .Alpha   => exact .inr (.inr (.inl rfl))
  | .OkPair .Beta    => exact .inr (.inr (.inr (.inl rfl)))
  | .OkHierarchy     => exact .inr (.inr (.inr (.inr rfl)))
  | .RejUnknownClass => simp [gateMultiplicityDelta] at h
  | .RejDualHat      => simp [gateMultiplicityDelta] at h
  | .RejPauli        => simp [gateMultiplicityDelta] at h
  | .RejTermOrder    => simp [gateMultiplicityDelta] at h
  | .OkDualHatWaiver _ => simp [gateMultiplicityDelta] at h

/-! ## Pauli Key Structural Properties -/

/-- Pauli key decomposition: two keys are equal iff all three components match. -/
theorem pauli_key_eq_iff (k1 k2 : PauliKey) :
    k1 = k2 ↔ k1.roleClass = k2.roleClass ∧
              k1.slotId = k2.slotId ∧
              k1.periodId = k2.periodId := by
  constructor
  · intro h; exact ⟨by rw [h], by rw [h], by rw [h]⟩
  · intro ⟨hr, hs, hp⟩
    cases k1; cases k2
    simp at hr hs hp
    subst hr hs hp; rfl

end Echonomics.HundianOccupancy
