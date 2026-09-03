import Echonomics.Core

namespace Echonomics.CivicDunaGate

open Echonomics.Core

def adr0002 : ADR := {
  id := 2,
  title := "Citizen Gardens DUNA Governing Principles & Constitutional Gate",
  status := ADRStatus.Proposed,
  context := "Decentralized Unincorporated Nonprofit Association (DUNA) governing principles require formal quorum & vote validation gates.",
  decision := "Enforce quorum thresholds and constitutional vote validation gates prior to ledger anchoring.",
  consequences := ["Machine-checked DUNA compliance", "Fail-closed quorum verification"],
  supersedes := none,
  links := []
}

structure DunaState where
  totalMembers : Nat
  quorumThreshold : Nat
  votesFor : Nat
  votesAgainst : Nat
  deriving Repr, DecidableEq

def isQuorumReached (st : DunaState) : Bool :=
  st.votesFor + st.votesAgainst ≥ st.quorumThreshold

def isProposalPassed (st : DunaState) : Bool :=
  isQuorumReached st ∧ st.votesFor > st.votesAgainst

theorem quorum_failure_rejects_proposal (st : DunaState) (h : isQuorumReached st = false) :
    isProposalPassed st = false := by
  dsimp [isProposalPassed]
  rw [h]
  rfl

end Echonomics.CivicDunaGate
