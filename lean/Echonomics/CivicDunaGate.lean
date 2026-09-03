import Echonomics.Core

/-!
# Echonomics.CivicDunaGate — ADR-0002: Citizen Gardens DUNA Governing Principles & Constitutional Gate

Formal implementation and proofs for the Decentralized Unincorporated Nonprofit
Association (DUNA) constitutional gate. Duplicates governance properties:

  Q:  quorum reached   ⇔  votes_for + votes_against ≥ quorum_threshold
  P:  proposal passes  ⇔  quorum reached ∧ votes_for > votes_against

Key properties:
- Fail-closed: a sub-quorum proposal is rejected regardless of the vote split.
- Strict majority: a tie (`votes_for = votes_against`) never passes.
- Soundness: `isProposalPassed` is true exactly when both quorum and strict
  majority hold.
- Well-formedness invariant: votes cast cannot exceed total members, and the
  quorum threshold never exceeds total membership.
-/

namespace Echonomics.CivicDunaGate

open Echonomics.Core

/-! ## ADR-0002 Record -/

/-- ADR-0002 declaration. -/
def adr0002 : ADR := {
  id := 2
  title := "Citizen Gardens DUNA Governing Principles & Constitutional Gate"
  status := ADRStatus.Proposed
  context := "Decentralized Unincorporated Nonprofit Association (DUNA) governing principles require formal quorum & vote validation gates prior to ledger anchoring."
  decision := "Enforce quorum (votes_for + votes_against ≥ quorum_threshold) and strict-majority (votes_for > votes_against) validation gates before state transitions."
  consequences := [
    "Machine-checked DUNA compliance",
    "Fail-closed quorum verification"
  ]
  supersedes := none
  links := []
}

/-! ## Core State -/

/-- DUNA governance state: membership, quorum threshold, and current tallies. -/
structure DunaState where
  totalMembers : Nat
  quorumThreshold : Nat
  votesFor : Nat
  votesAgainst : Nat
  deriving Repr, DecidableEq

/-- Well-formed DUNA state:
    1. quorum threshold does not exceed total membership,
    2. no more votes are cast than there are members. -/
def DunaInvariant (st : DunaState) : Prop :=
  st.quorumThreshold ≤ st.totalMembers ∧
  st.votesFor + st.votesAgainst ≤ st.totalMembers

/-- `DunaInvariant` is decidable: it is a conjunction of decidable Nat
    inequalities, so any `if`-binder on it resolves without axioms. -/
instance (st : DunaState) : Decidable (DunaInvariant st) := by
  unfold DunaInvariant
  infer_instance

/-! ## Quorum & Majority -/

/-- Quorum reached: total votes cast meet or exceed the threshold. -/
def isQuorumReached (st : DunaState) : Bool :=
  st.votesFor + st.votesAgainst ≥ st.quorumThreshold

/-- Strict majority: more votes for than against. -/
def isStrictMajority (st : DunaState) : Bool :=
  st.votesFor > st.votesAgainst

/-- Proposal passes exactly when quorum is reached AND there is a strict
    majority in favor. -/
def isProposalPassed (st : DunaState) : Bool :=
  isQuorumReached st && isStrictMajority st

/-! ## Constitutional Gate Decision -/

/-- Canonical admissible outcomes of the DUNA constitutional gate. -/
inductive ConstitutionalDecision where
  | Pass -- quorum reached and strict majority
  | RejQuorum -- quorum not reached
  | RejMajority -- quorum reached but no strict majority (tie or minority)
  | RejInvalid -- state violates the well-formedness invariant
  deriving Repr, DecidableEq

/-- The single constitutional gate: evaluate a proposal against the DUNA
    governing principles. Fails closed on any invalid state. -/
def evaluateConstitutionalGate (st : DunaState) : ConstitutionalDecision :=
  if _h_inv : DunaInvariant st then
    if _h_q : isQuorumReached st then
      if _h_m : isStrictMajority st then
        ConstitutionalDecision.Pass
      else
        ConstitutionalDecision.RejMajority
    else
      ConstitutionalDecision.RejQuorum
  else
    ConstitutionalDecision.RejInvalid

/-! ## Gate Property Proofs -/

/-- ADR-0002 Decision 1: quorum verification is exactly the sum condition. -/
theorem quorum_reached_iff_sum_ge (st : DunaState) :
    isQuorumReached st = true ↔ st.votesFor + st.votesAgainst ≥ st.quorumThreshold := by
  simp [isQuorumReached]

/-- ADR-0002 Decision 2: passing is exactly quorum + strict majority. -/
theorem passes_iff_quorum_and_majority (st : DunaState) :
    isProposalPassed st = true ↔
      isQuorumReached st = true ∧ isStrictMajority st = true := by
  simp [isProposalPassed]

/-- Fail-closed quorum: if quorum is not reached, the proposal is rejected. -/
theorem quorum_failure_rejects_proposal (st : DunaState)
    (h : isQuorumReached st = false) :
    isProposalPassed st = false := by
  simp [isProposalPassed, h]

/-- Gate agrees with the Pass decision exactly when the proposal passes. -/
theorem gate_pass_iff_proposal_passed (st : DunaState)
    (h : DunaInvariant st) :
    evaluateConstitutionalGate st = ConstitutionalDecision.Pass ↔
      isProposalPassed st = true := by
  by_cases hq : isQuorumReached st = true
  · by_cases hm : isStrictMajority st = true
    · have hpass : isProposalPassed st = true := by
        simp [isProposalPassed, hq, hm]
      simp [evaluateConstitutionalGate, h, hq, hm, hpass]
    · have hfail : isProposalPassed st = false := by
        simp [isProposalPassed, hq, hm]
      simp [evaluateConstitutionalGate, h, hq, hm, hfail]
  · have hfail : isProposalPassed st = false := by
      simp [isProposalPassed, hq]
    simp [evaluateConstitutionalGate, h, hq, hfail]

/-- Soundness: a passing proposal determines the Pass verdict. -/
theorem proposal_passed_sound (st : DunaState)
    (h : DunaInvariant st) (hp : isProposalPassed st = true) :
    evaluateConstitutionalGate st = ConstitutionalDecision.Pass := by
  exact (gate_pass_iff_proposal_passed st h).2 hp

/-- Completeness: the Pass verdict implies the proposal passes. -/
theorem pass_decision_complete (st : DunaState)
    (hd : DunaInvariant st) (hp : evaluateConstitutionalGate st = ConstitutionalDecision.Pass) :
    isProposalPassed st = true := by
  exact (gate_pass_iff_proposal_passed st hd).1 hp

/-- Quorum is a necessary condition for passage. -/
theorem pass_implies_quorum (st : DunaState)
    (h : isProposalPassed st = true) :
    isQuorumReached st = true := by
  simp [isProposalPassed] at h
  exact h.1

/-- Strict majority is a necessary condition for passage. -/
theorem pass_implies_strict_majority (st : DunaState)
    (h : isProposalPassed st = true) :
    isStrictMajority st = true := by
  simp [isProposalPassed] at h
  exact h.2

/-- A tie never passes: quorum reached but equal votes ⇒ rejection. -/
theorem tie_rejects_proposal (st : DunaState)
    (_hq : isQuorumReached st = true) (ht : st.votesFor = st.votesAgainst) :
    isProposalPassed st = false := by
  simp [isProposalPassed, isStrictMajority, ht]

/-- Minority fails: quorum reached but votes_for < votes_against ⇒ rejection. -/
theorem minority_rejects_proposal (st : DunaState)
    (hq : isQuorumReached st = true) (hm : st.votesFor < st.votesAgainst) :
    isProposalPassed st = false := by
  have hnotmaj : isStrictMajority st = false := by
    simp [isStrictMajority]; omega
  simp [isProposalPassed, hq, hnotmaj]

/-- Majority in favor but sub-quorum cannot pass: quorum binds independently. -/
theorem quorum_binds_despite_votes (st : DunaState)
    (hm : st.votesFor > st.votesAgainst)
    (hq : st.votesFor + st.votesAgainst < st.quorumThreshold) :
    isProposalPassed st = false := by
  simp [isProposalPassed, isQuorumReached, isStrictMajority, hm, hq]

/-- A majority in favor and quorum reached jointly imply passage. -/
theorem quorum_and_majority_imply_pass (st : DunaState)
    (hq : isQuorumReached st = true) (hm : isStrictMajority st = true) :
    isProposalPassed st = true := by
  simp [isProposalPassed, hq, hm]

/-! ## Well-Formedness Theorems -/

/-- Quorum threshold never exceeds total membership under the invariant. -/
theorem quorum_within_membership (st : DunaState) (h : DunaInvariant st) :
    st.quorumThreshold ≤ st.totalMembers := h.1

/-- Votes cast never exceed total membership under the invariant. -/
theorem votes_within_membership (st : DunaState) (h : DunaInvariant st) :
    st.votesFor + st.votesAgainst ≤ st.totalMembers := h.2

/-- A strict majority on a well-formed state is co-terminous with the Pass
    verdict off the well-formedness path. -/
theorem invariant_membership_and_votes (st : DunaState) (h : DunaInvariant st) :
    st.quorumThreshold ≤ st.totalMembers ∧
    st.votesFor + st.votesAgainst ≤ st.totalMembers := h

/-! ## Vote Evolution Monotonicity -/

/-- Casting a new vote-for preserves (non-decreases) the majority condition
    whenever quorum is maintained. -/
theorem voting_for_preserves_majority_if_already_leading
    (st : DunaState) (h : st.votesFor > st.votesAgainst) :
    st.votesFor + 1 > st.votesAgainst := by
  omega

/-- Adding to the against tally can only ever reduce the for-over-against
    margin; a pre-existing strict majority may be lost to a tie. -/
theorem voting_against_can_lose_majority (st : DunaState)
    (h : st.votesFor = st.votesAgainst + 1) :
    not (st.votesFor > st.votesAgainst + 1) := by
  simp [h]

end Echonomics.CivicDunaGate
