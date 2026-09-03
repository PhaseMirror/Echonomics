import Echonomics.Core
import Echonomics.HundianOccupancy

/-!
# Echonomics.SocialPhysicsParts — ADR-0013, ADR-0014, ADR-0015: Multiplicity Social Physics

Formal implementation and proofs for the Multiplicity Social Physics series:

- ADR-0013 (Part 1): Pauli Exclusion & Spin Tags — every slot bound by a Pauli
  key admits **at most two occupants** (capacity bound `occupants ≤ 2`) and
  spin-tag assignment is deterministic: the first occupant receives `Alpha`,
  the second `Beta`, and a third occupant violates exclusion.
- ADR-0014 (Part 2): Term-Order Gate & Ground State — Hund's First Rule gate
  requires the empty-degenerate-slot count `U = 0` before a second occupant
  may pair; the ground state maximizes multiplicity `M = n_unpaired + 1` at
  half-fill (`M = |D| + 1`) and collapses to the closed-shell singlet `M = 1`.
- ADR-0015 (Part 3): Separated Energy Ledgers — pairwise friction `V_pair`
  and nuclear purpose attraction `V_nuc` are tracked on independent,
  non-negative ledgers; total energy is `E = V_pair - V_nuc` and the ground
  state minimizes `E` (increasing attraction lowers energy; increasing
  friction raises energy).

All constructions are zero-Mathlib, zero-sorry, and decidable-equality
capable, following the Echonomics canonical core.
-/

namespace Echonomics.SocialPhysicsParts

open Echonomics.Core
open Echonomics.HundianOccupancy

/-! ## ADR Records -/

/-- ADR-0013 declaration: Pauli Exclusion & Spin Tags (Part 1). -/
def adr0013 : ADR := {
  id := 13,
  title := "Multiplicity Social Physics Part 1 - Pauli Exclusion & Spin Tags",
  status := ADRStatus.Accepted,
  context := "Establish Pauli exclusion capacity, spin tag assignments (alpha/beta), and role class degeneracy.",
  decision := "Limit slot capacity to max 2 occupants per key and assign spin tags ALPHA/BETA.",
  consequences := ["Pauli exclusion capacity bound", "Spin tag determinism"],
  supersedes := none,
  links := []
}

/-- ADR-0014 declaration: Term-Order Gate & Ground State (Part 2). -/
def adr0014 : ADR := {
  id := 14,
  title := "Multiplicity Social Physics Part 2 - Term-Order Gate & Ground State",
  status := ADRStatus.Accepted,
  context := "Establish Hund's 1st Rule Term-Order Gate and ground state multiplicity bounds.",
  decision := "Require empty slot count U = 0 before allowing second occupant pairing.",
  consequences := ["Term-order gate enforcement", "Maximum multiplicity ground state"],
  supersedes := none,
  links := []
}

/-- ADR-0015 declaration: Separated Energy Ledgers (Part 3). -/
def adr0015 : ADR := {
  id := 15,
  title := "Multiplicity Social Physics Part 3 - Separated Energy Ledgers",
  status := ADRStatus.Accepted,
  context := "Formally separate pairwise friction V_pair and nuclear attraction V_nuc on independent ledgers.",
  decision := "Maintain V_pair and V_nuc on independent ledgers and compute E = V_pair - V_nuc.",
  consequences := ["Independent energy ledgers", "Ground state energy minimization"],
  supersedes := none,
  links := []
}

/-! ## ADR-0013: Pauli Exclusion & Spin Tags -/

/-- A role-class slot bound by a Pauli key `K = (role, slot, period)`.
    `occupants` counts the occupants of the slot; `isDegenerate` marks the
    role class as degenerate (spin-pairable) per Hundian occupancy. -/
structure OccupancySlot where
  occupants : Nat
  isDegenerate : Bool
  deriving Repr, DecidableEq

/-- Pauli capacity bound: a slot admits at most two occupants. -/
def isSlotCapacityValid (slot : OccupancySlot) : Bool :=
  slot.occupants ≤ 2

/-- Deterministic spin-tag assignment by occupancy count:
    `0` occupants → no tag yet, `1` occupant → `Alpha`, `2` occupants → `Beta`.
    Occupancy above the Pauli bound yields no tag (exclusion violation). -/
def spinTagForOccupant (occupants : Nat) : Option SpinTag :=
  match occupants with
  | 0 => none
  | 1 => some SpinTag.Alpha
  | 2 => some SpinTag.Beta
  | _ => none

/-- First occupant of a slot receives the `Alpha` spin tag. -/
theorem spin_tag_first_occupant_alpha :
    spinTagForOccupant 1 = some SpinTag.Alpha := by
  rfl

/-- Second occupant of a slot receives the `Beta` spin tag. -/
theorem spin_tag_second_occupant_beta :
    spinTagForOccupant 2 = some SpinTag.Beta := by
  rfl

/-- An empty slot carries no spin tag yet. -/
theorem spin_tag_empty_slot_none :
    spinTagForOccupant 0 = none := by
  rfl

/-- A valid slot never exceeds the Pauli capacity of two occupants. -/
theorem pauli_capacity_max_two (slot : OccupancySlot) (h : isSlotCapacityValid slot = true) :
    slot.occupants ≤ 2 := by
  simpa [isSlotCapacityValid] using h

/-- A slot with three or more occupants violates Pauli exclusion. -/
theorem third_occupant_violates_pauli (slot : OccupancySlot) (h : slot.occupants ≥ 3) :
    isSlotCapacityValid slot = false := by
  cases hc : isSlotCapacityValid slot with
  | true =>
      have hle : slot.occupants ≤ 2 := pauli_capacity_max_two slot hc
      omega
  | false => rfl

/-- Pauli gate rejects a third occupant on any slot (G2 priority). -/
theorem pauli_rejects_third_occupant (u : Nat) (deg : Bool) :
    evaluatePauliGate 2 u deg = GateResult.RejPauli := by
  exact Echonomics.HundianOccupancy.pauli_exclusion_rejects_third_occupant u deg

/-- Spin-tag assignment is deterministic: the tag depends only on the
    occupant count, never on the degenerate flag. -/
theorem spin_tag_deterministic (slot1 slot2 : OccupancySlot)
    (h : slot1.occupants = slot2.occupants) :
    spinTagForOccupant slot1.occupants = spinTagForOccupant slot2.occupants := by
  rw [h]

/-- Any occupancy with a defined spin tag is within the Pauli bound: a tag
    exists exactly for one or two occupants. -/
theorem spin_tag_implies_capacity_bound (occupants : Nat)
    (h : spinTagForOccupant occupants ≠ none) :
    occupants = 1 ∨ occupants = 2 := by
  unfold spinTagForOccupant at h
  cases occupants with
  | zero => simp at h
  | succ n =>
      cases n with
      | zero => simp
      | succ m =>
          cases m with
          | zero => simp
          | succ k => simp at h

/-! ## ADR-0014: Term-Order Gate & Ground State -/

/-- Term-order state: `emptySlotsInD` is the count `U` of still-empty
    degenerate slots; `occupiedDegenerate` is the count of half-filled
    degenerate slots eligible for pairing. -/
structure TermOrderState where
  emptySlotsInD : Nat
  occupiedDegenerate : Nat
  deriving Repr, DecidableEq

/-- Hund's First Rule gate: pairing a half-filled degenerate slot is legal
    exactly when no empty degenerate slots remain (`U = 0`). -/
def isPairingLegalSt (st : TermOrderState) : Bool :=
  st.emptySlotsInD == 0

/-- Pairing is legal exactly when the empty-degenerate count `U` is zero. -/
theorem pairing_legal_iff_u_zero (st : TermOrderState) :
    isPairingLegalSt st = true ↔ st.emptySlotsInD = 0 := by
  unfold isPairingLegalSt
  cases st.emptySlotsInD with
  | zero => simp
  | succ n => simp

/-- Fail-closed: with empty degenerate slots remaining (`U > 0`), pairing is
    rejected. -/
theorem pairing_blocked_while_u_positive (st : TermOrderState) (h : st.emptySlotsInD > 0) :
    isPairingLegalSt st = false := by
  unfold isPairingLegalSt
  cases hc : st.emptySlotsInD with
  | zero => omega
  | succ n => rfl

/-- G3 gate: with `U > 0`, the gate rejects pairing on a degenerate slot. -/
theorem term_order_rejects_pairing_while_u_positive (u : Nat) (hu : u > 0) :
    evaluatePauliGate 1 u true = GateResult.RejTermOrder := by
  exact Echonomics.HundianOccupancy.term_order_blocks_degenerate u hu

/-- G3 gate: with `U = 0`, pairing on a degenerate slot is accepted with the
    `Beta` spin tag (second occupant). -/
theorem term_order_allows_pairing_when_u_zero :
    evaluatePauliGate 1 0 true = GateResult.OkPair SpinTag.Beta := by
  exact Echonomics.HundianOccupancy.term_order_allows_pairing_when_all_slots_filled

/-- Ground-state multiplicity: at half-fill the maximum multiplicity is
    `M = |D| + 1` for a degenerate set of size `|D|`. -/
def groundStateMultiplicity (degenerateSetSize : Nat) : Nat :=
  degenerateSetSize + 1

/-- Half-fill maximizes multiplicity: `M = |D| + 1`. -/
theorem half_fill_max_multiplicity (d : Nat) :
    groundStateMultiplicity d = d + 1 := by
  rfl

/-- Closed-shell ground state: with no degenerate roles, `M = 1` (singlet). -/
theorem closed_shell_singlet_ground_state :
    groundStateMultiplicity 0 = 1 := by
  rfl

/-- Multiplicity never exceeds `|D| + 1` for any unpaired count within the
    degenerate set: `M = n_unpaired + 1 ≤ |D| + 1`. -/
theorem multiplicity_never_exceeds_d_plus_one (nUnpaired d : Nat) (h : nUnpaired ≤ d) :
    calculateMultiplicity nUnpaired ≤ groundStateMultiplicity d := by
  unfold calculateMultiplicity groundStateMultiplicity
  omega

/-- Half-fill achieves the ground-state maximum: `M(|D|) = |D| + 1`. -/
theorem half_fill_achieves_ground_state_max (d : Nat) :
    calculateMultiplicity d = groundStateMultiplicity d := by
  rfl

/-! ## ADR-0015: Separated Energy Ledgers -/

/-- Social-physics state with separated energy ledgers and the term-order
    occupancy bookkeeping. `vPair` is pairwise friction (`V_pair`),
    `vNuc` is nuclear purpose attraction (`V_nuc`), `emptySlots` is the
    term-order count `U`. -/
structure SocialPhysicsState where
  vPair : Nat
  vNuc : Nat
  emptySlots : Nat
  deriving Repr, DecidableEq

/-- Term-order pairing legality over the ledger state: `U = 0`. -/
def isPairingLegal (st : SocialPhysicsState) : Bool :=
  st.emptySlots == 0

/-- Pairing is legal on the ledger state exactly when `U = 0`. -/
theorem pairing_legal_when_u_zero (st : SocialPhysicsState) (h : st.emptySlots = 0) :
    isPairingLegal st = true := by
  dsimp [isPairingLegal]
  rw [h]
  rfl

/-- Total system energy: `E = V_pair - V_nuc` (Int sign convention). -/
def totalEnergy (st : SocialPhysicsState) : Int :=
  (st.vPair : Int) - (st.vNuc : Int)

/-- Separated-ledger mandate: the two ledgers are independent (`V_pair ≠ V_nuc`). -/
def areLedgersSeparated (st : SocialPhysicsState) : Prop :=
  st.vPair ≠ st.vNuc

/-- Executable separated-ledger check. -/
def areLedgersSeparatedBool (st : SocialPhysicsState) : Bool :=
  st.vPair != st.vNuc

/-- Pairwise friction is non-negative by construction (Nat encoding). -/
theorem pair_friction_nonneg (st : SocialPhysicsState) : st.vPair ≥ 0 := by
  omega

/-- Nuclear purpose attraction is non-negative by construction (Nat encoding). -/
theorem nuc_attraction_nonneg (st : SocialPhysicsState) : st.vNuc ≥ 0 := by
  omega

/-- Energy sign convention: `E = V_pair - V_nuc`. -/
theorem energy_sign_convention (st : SocialPhysicsState) :
    totalEnergy st = (st.vPair : Int) - (st.vNuc : Int) := by
  rfl

/-- Separated ledgers never cancel: `V_pair ≠ V_nuc` forces `E ≠ 0`. -/
theorem separated_ledgers_avoid_cancellation (st : SocialPhysicsState)
    (h : areLedgersSeparated st) :
    totalEnergy st ≠ 0 := by
  unfold areLedgersSeparated at h
  intro hz
  unfold totalEnergy at hz
  apply h
  omega

/-- Increasing `V_nuc` attraction lowers total energy (friction fixed). -/
theorem increasing_nuc_lowers_energy (vPair vN1 vN2 : Nat) (h : vN1 ≤ vN2) :
    totalEnergy ⟨vPair, vN2, 0⟩ ≤ totalEnergy ⟨vPair, vN1, 0⟩ := by
  dsimp [totalEnergy]
  omega

/-- Increasing `V_pair` friction raises total energy (attraction fixed). -/
theorem increasing_pair_raises_energy (vN vP1 vP2 : Nat) (h : vP1 ≤ vP2) :
    totalEnergy ⟨vP1, vN, 0⟩ ≤ totalEnergy ⟨vP2, vN, 0⟩ := by
  dsimp [totalEnergy]
  omega

/-- Ground-state predicate: `a` is a ground state over `b` iff `E(a) ≤ E(b)`. -/
def isGroundState (stBest stOther : SocialPhysicsState) : Bool :=
  totalEnergy stBest ≤ totalEnergy stOther

/-- Ground state is exactly energy minimization. -/
theorem ground_state_iff_energy_le (a b : SocialPhysicsState) :
    isGroundState a b = true ↔ totalEnergy a ≤ totalEnergy b := by
  simp [isGroundState]

/-- Ground state minimizes energy: `E(a) ≤ E(b)` witnesses `a` as ground state. -/
theorem ground_state_minimizes_energy (stBest stOther : SocialPhysicsState)
    (h : totalEnergy stBest ≤ totalEnergy stOther) :
    isGroundState stBest stOther = true := by
  exact (ground_state_iff_energy_le stBest stOther).2 h

/-- Ground-state reflexivity: every state is its own ground state. -/
theorem ground_state_refl (a : SocialPhysicsState) :
    isGroundState a a = true := by
  simp [isGroundState]

/-- Ground-state antisymmetry: mutually-ground states share identical energy. -/
theorem ground_state_antisymm (a b : SocialPhysicsState)
    (h1 : isGroundState a b = true) (h2 : isGroundState b a = true) :
    totalEnergy a = totalEnergy b := by
  have h1' : totalEnergy a ≤ totalEnergy b := (ground_state_iff_energy_le a b).1 h1
  have h2' : totalEnergy b ≤ totalEnergy a := (ground_state_iff_energy_le b a).1 h2
  omega

/-- Binding energy of the ground state is non-positive when attraction
    dominates friction (`V_nuc ≥ V_pair`): the sign convention reports
    `E ≤ 0` for the binding ground state. -/
theorem ground_state_binding_energy_nonpositive (st : SocialPhysicsState)
    (h : st.vNuc ≥ st.vPair) :
    totalEnergy st ≤ 0 := by
  unfold totalEnergy
  omega

end Echonomics.SocialPhysicsParts