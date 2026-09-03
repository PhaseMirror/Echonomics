import Echonomics.Core

namespace Echonomics.HundianOccupancy

open Echonomics.Core

def adr0001 : ADR := {
  id := 1,
  title := "Hundian Social Physics Occupancy Governance & Term-Order Gate",
  status := ADRStatus.Proposed,
  context := "Echonomics social physics models participant role allocations onto degenerate role-class sets.",
  decision := "Enforce Pauli key capacity, 5-stage gate priority, and exact multiplicity M = n_unpaired + 1.",
  consequences := ["Eliminates heuristic survey reciprocity", "Fail-closed term-ordering gate"],
  supersedes := none,
  links := []
}

def calculateMultiplicity (nUnpaired : Nat) : Nat :=
  nUnpaired + 1

theorem half_fill_max_multiplicity (numSlots : Nat) :
    calculateMultiplicity numSlots = numSlots + 1 := by
  rfl

theorem closed_shell_singlet_multiplicity :
    calculateMultiplicity 0 = 1 := by
  rfl

def evaluatePauliGate (occupantsCount : Nat) (emptySlotsInD : Nat) (isDegenerate : Bool) : GateResult :=
  if occupantsCount >= 2 then
    GateResult.RejPauli
  else if occupantsCount == 1 then
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

theorem pauli_exclusion_rejects_third_occupant (emptySlots : Nat) (isDeg : Bool) :
    evaluatePauliGate 2 emptySlots isDeg = GateResult.RejPauli := by
  rfl

theorem term_order_allows_pairing_when_all_slots_filled :
    evaluatePauliGate 1 0 true = GateResult.OkPair SpinTag.Beta := by
  rfl

theorem non_degenerate_second_occupant_returns_hierarchy (emptySlots : Nat) :
    evaluatePauliGate 1 emptySlots false = GateResult.OkHierarchy := by
  rfl

end Echonomics.HundianOccupancy
