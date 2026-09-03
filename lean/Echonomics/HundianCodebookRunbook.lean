import Echonomics.Core

namespace Echonomics.HundianCodebookRunbook

open Echonomics.Core

def adr0007 : ADR := {
  id := 7,
  title := "Hundian Occupancy Codebook v1 Specification",
  status := ADRStatus.Accepted,
  context := "Freeze Pauli key K = (role_class, slot_id, period_id), G0-G5 gate priority, and period-0 log schema.",
  decision := "Standardize Pauli key allocation and derived multiplicity calculations M = n_unpaired + 1.",
  consequences := ["Deterministic gate evaluation", "Machine-checked period-0 log validity"],
  supersedes := none,
  links := []
}

def adr0008 : ADR := {
  id := 8,
  title := "Hundian Period-0 Occupancy Runbook v1 Execution",
  status := ADRStatus.Accepted,
  context := "Formally bind Period-0 seat proposals, vacate operations, and period lifecycle status transitions.",
  decision := "Enforce exact result code execution across all period-0 log transactions.",
  consequences := ["Period status gate enforcement", "Replay validation"],
  supersedes := none,
  links := []
}

def adr0009 : ADR := {
  id := 9,
  title := "Hundian Revision and Forbidden Terms Deprecation",
  status := ADRStatus.Accepted,
  context := "Retire unearned terms (MSC, 1+2R, reciprocity) and enforce strict zero-drift codebook alignment.",
  decision := "Deprecate retired terminology and strike them from ledgers.",
  consequences := ["Zero semantic drift", "Strict codebook compliance"],
  supersedes := none,
  links := []
}

/-- Codebook result codes from ADR-0007 §4 -/
inductive CodebookResultCode where
  | OkSingle
  | OkPair
  | OkHierarchy
  | OkDualHatWaiver
  | OkVacate
  | RejUnknownClass
  | RejPauli
  | RejTermOrder
  | RejDualHat
  | RejNotOccupant
  deriving Repr, DecidableEq

/-- Spin tag assigned by fill order -/
inductive SpinTag where
  | Alpha
  | Beta
  deriving Repr, DecidableEq

structure CodebookState where
  unpairedCount : Nat
  degenerateSetSize : Nat
  deriving Repr, DecidableEq

def calculateSpin (st : CodebookState) : Rat :=
  (st.unpairedCount : Rat) / 2

def calculateMultiplicity (st : CodebookState) : Nat :=
  st.unpairedCount + 1

theorem half_fill_max_multiplicity (d : Nat) :
    calculateMultiplicity ⟨d, d⟩ = d + 1 := by
  rfl

theorem closed_shell_singlet_multiplicity :
    calculateMultiplicity ⟨0, 5⟩ = 1 := by
  rfl

/-- Pure gate priority decision logic matching ADR-0007 §3 -/
def evaluateGate (isRegistered : Bool) (personHoldsOtherK : Bool) (hasWaiver : Bool)
    (occupantsCount : Nat) (isDegenerate : Bool) (emptyInD : Nat) : CodebookResultCode :=
  if !isRegistered then
    CodebookResultCode.RejUnknownClass
  else if personHoldsOtherK && !hasWaiver then
    CodebookResultCode.RejDualHat
  else if occupantsCount >= 2 then
    CodebookResultCode.RejPauli
  else if isDegenerate && occupantsCount == 1 && emptyInD > 0 then
    CodebookResultCode.RejTermOrder
  else if personHoldsOtherK && hasWaiver then
    CodebookResultCode.OkDualHatWaiver
  else if !isDegenerate then
    CodebookResultCode.OkHierarchy
  else if occupantsCount == 0 then
    CodebookResultCode.OkSingle
  else
    CodebookResultCode.OkPair

/-- Formal proof of Gate G0 priority: unregistered class is rejected first -/
theorem gate_priority_g0 (p w d e : Bool) (c n : Nat) :
    evaluateGate false p w c d n = CodebookResultCode.RejUnknownClass := by
  rfl

/-- Formal proof of Gate G1 priority: dual-hat without waiver is rejected before Pauli/TermOrder -/
theorem gate_priority_g1 (w d : Bool) (c n : Nat) :
    evaluateGate true true false c d n = CodebookResultCode.RejDualHat := by
  rfl

/-- Formal proof of Gate G2 priority: Pauli capacity overflow (count >= 2) -/
theorem gate_priority_g2 (w d : Bool) (n : Nat) :
    evaluateGate true false w 2 d n = CodebookResultCode.RejPauli := by
  rfl

/-- Formal proof of Gate G3 priority: Term-order gate rejection when U > 0 -/
theorem gate_priority_g3 (w : Bool) :
    evaluateGate true false w 1 true 2 = CodebookResultCode.RejTermOrder := by
  rfl

/-- Formal proof of Canonical §8 sequence row 2 rejection (bob at 10:05Z on fac-1) -/
theorem section_8_bob_term_order_rejection :
    evaluateGate true false false 1 true 2 = CodebookResultCode.RejTermOrder := by
  rfl

/-- Formal proof of Canonical §8 sequence row 5 pairing success (dave at 10:08Z on fac-1 after U=0) -/
theorem section_8_dave_pairing_success :
    evaluateGate true false false 1 true 0 = CodebookResultCode.OkPair := by
  rfl

/-- Formal proof of Canonical §8 sequence row 7 dual-hat rejection (bob at 10:10Z on fac-1 while holding fac-2) -/
theorem section_8_bob_dualhat_rejection :
    evaluateGate true true false 1 true 0 = CodebookResultCode.RejDualHat := by
  rfl

end Echonomics.HundianCodebookRunbook
