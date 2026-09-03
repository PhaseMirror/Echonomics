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

/-- Period Lifecycle Status from ADR-0008 §8 -/
inductive PeriodLifecycleStatus where
  | Draft
  | Open
  | Closed
  deriving Repr, DecidableEq

/-- Codebook result codes from ADR-0007 §4 & ADR-0008 §3/§4 -/
inductive CodebookResultCode where
  | OkSingle
  | OkPair
  | OkHierarchy
  | OkDualHatWaiver
  | OkVacate
  | RejBadOp
  | RejPeriodClosed
  | RejUnknownPerson
  | RejUnknownClass
  | RejPauli
  | RejTermOrder
  | RejDualHat
  | RejNotOccupant
  deriving Repr, DecidableEq

/-- Deprecated terms from ADR-0009 §9 -/
inductive DeprecatedTerm where
  | VMSC
  | OnePlusTwoR
  | SReciprocity
  | AtomicPhysicsIsomorphism
  | GroundStateFullShell
  | GroundStateMaxM
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

/-- System Energy Sign Convention from ADR-0009 §7.1: E = V_pair - V_nuc -/
def calculateSystemEnergy (vPair vNuc : Int) : Int :=
  vPair - vNuc

/-- Deprecated claim detection matching ADR-0009 §9 -/
def isForbiddenClaim (t : DeprecatedTerm) : Bool :=
  match t with
  | DeprecatedTerm.VMSC => true
  | DeprecatedTerm.OnePlusTwoR => true
  | DeprecatedTerm.SReciprocity => true
  | DeprecatedTerm.AtomicPhysicsIsomorphism => true
  | DeprecatedTerm.GroundStateFullShell => true
  | DeprecatedTerm.GroundStateMaxM => true

/-- Formal proof: all deprecated terms in ADR-0009 §9 evaluate to forbidden -/
theorem vmsc_deprecated_claim_rejected : isForbiddenClaim DeprecatedTerm.VMSC = true := rfl
theorem one_plus_two_r_deprecated_claim_rejected : isForbiddenClaim DeprecatedTerm.OnePlusTwoR = true := rfl
theorem s_reciprocity_deprecated_claim_rejected : isForbiddenClaim DeprecatedTerm.SReciprocity = true := rfl
theorem atomic_isomorphism_deprecated_claim_rejected : isForbiddenClaim DeprecatedTerm.AtomicPhysicsIsomorphism = true := rfl
theorem ground_full_shell_deprecated_claim_rejected : isForbiddenClaim DeprecatedTerm.GroundStateFullShell = true := rfl
theorem ground_max_m_deprecated_claim_rejected : isForbiddenClaim DeprecatedTerm.GroundStateMaxM = true := rfl

/-- Formal proof: System energy adheres to E = V_pair - V_nuc -/
theorem energy_sign_convention_subtraction (vp vn : Int) :
    calculateSystemEnergy vp vn = vp - vn := rfl

/-- Pure gate priority decision logic for propose_fill matching ADR-0008 §3 -/
def evaluateFillGate (isOpen : Bool) (isRegistered : Bool) (isKnownPerson : Bool)
    (personHoldsOtherK : Bool) (hasWaiver : Bool) (occupantsCount : Nat)
    (isDegenerate : Bool) (emptyInD : Nat) : CodebookResultCode :=
  if !isOpen then
    CodebookResultCode.RejPeriodClosed
  else if !isKnownPerson then
    CodebookResultCode.RejUnknownPerson
  else if !isRegistered then
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

/-- Pure gate priority decision logic for propose_vacate matching ADR-0008 §4.2 -/
def evaluateVacateGate (isOpen : Bool) (isRegistered : Bool) (isOccupant : Bool) : CodebookResultCode :=
  if !isOpen then
    CodebookResultCode.RejPeriodClosed
  else if !isRegistered then
    CodebookResultCode.RejUnknownClass
  else if !isOccupant then
    CodebookResultCode.RejNotOccupant
  else
    CodebookResultCode.OkVacate

/-- Formal proof: fill rejected when period is not open (G0b) -/
theorem fill_rejected_when_not_open (reg pOther w deg : Bool) (pCount u : Nat) :
    evaluateFillGate false reg true pOther w pCount deg u = CodebookResultCode.RejPeriodClosed := by
  rfl

/-- Formal proof: vacate rejected when period is not open (V1) -/
theorem vacate_rejected_when_not_open (reg occ : Bool) :
    evaluateVacateGate false reg occ = CodebookResultCode.RejPeriodClosed := by
  rfl

/-- Formal proof: vacate rejected when person is not occupant (V3) -/
theorem vacate_rejected_when_not_occupant :
    evaluateVacateGate true true false = CodebookResultCode.RejNotOccupant := by
  rfl

/-- Formal proof: vacate succeeds when open, registered, and occupant (OK_VACATE) -/
theorem vacate_success :
    evaluateVacateGate true true true = CodebookResultCode.OkVacate := by
  rfl

/-- Formal proof of Gate G0 priority: unregistered class is rejected first -/
theorem gate_priority_g0 (p w d e : Bool) (c n : Nat) :
    evaluateFillGate true false true p w c d n = CodebookResultCode.RejUnknownClass := by
  rfl

/-- Formal proof of Gate G1 priority: dual-hat without waiver is rejected before Pauli/TermOrder -/
theorem gate_priority_g1 (w d : Bool) (c n : Nat) :
    evaluateFillGate true true true true false c d n = CodebookResultCode.RejDualHat := by
  rfl

/-- Formal proof of Gate G2 priority: Pauli capacity overflow (count >= 2) -/
theorem gate_priority_g2 (w d : Bool) (n : Nat) :
    evaluateFillGate true true true false w 2 d n = CodebookResultCode.RejPauli := by
  rfl

/-- Formal proof of Gate G3 priority: Term-order gate rejection when U > 0 -/
theorem gate_priority_g3 (w : Bool) :
    evaluateFillGate true true true false w 1 true 2 = CodebookResultCode.RejTermOrder := by
  rfl

/-- Formal proof of Canonical ADR-0008 §6 sequence row 2 rejection (bob at 10:05Z on fac-1) -/
theorem section_6_bob_term_order_rejection :
    evaluateFillGate true true true false false 1 true 2 = CodebookResultCode.RejTermOrder := by
  rfl

/-- Formal proof of Canonical ADR-0008 §6 sequence row 5 pairing success (dave at 10:08Z on fac-1 after U=0) -/
theorem section_6_dave_pairing_success :
    evaluateFillGate true true true false false 1 true 0 = CodebookResultCode.OkPair := by
  rfl

/-- Formal proof of Canonical ADR-0008 §6 sequence row 7 dual-hat rejection (bob at 10:10Z on fac-1 while holding fac-2) -/
theorem section_6_bob_dualhat_rejection :
    evaluateFillGate true true true true false 1 true 0 = CodebookResultCode.RejDualHat := by
  rfl

end Echonomics.HundianCodebookRunbook
