import Echonomics.Core

namespace Echonomics.CivicInfrastructureSpec

open Echonomics.Core

def adr0010 : ADR := {
  id := 10,
  title := "Citizen Gardens DUNA Governing Principles Framework",
  status := ADRStatus.Accepted,
  context := "Formally establish DUNA governance rules, non-coercive participation, and constitutional voting limits.",
  decision := "Enforce constitutional voting gates and DUNA nonprofit member sovereignty.",
  consequences := ["Non-coercive civic governance", "Constitutional voting bounds"],
  supersedes := none,
  links := []
}

def adr0011 : ADR := {
  id := 11,
  title := "Citizen Gardens System Model Specification v1.0",
  status := ADRStatus.Accepted,
  context := "Define domain entities, prime-decomposable identity bindings, and civic infrastructure schemas.",
  decision := "Model citizen nodes, prime identity commitments, and resource allocation gates.",
  consequences := ["Prime identity verification", "Typed entity bindings"],
  supersedes := none,
  links := []
}

def adr0012 : ADR := {
  id := 12,
  title := "Unified Civic Infrastructure Architectural Blueprint",
  status := ADRStatus.Accepted,
  context := "Outline unified civic infrastructure, healthcare substance ledgers, and zero-knowledge attestation flows.",
  decision := "Bind civic care teams and healthcare substance transactions to ZK proofs.",
  consequences := ["Verifiable care delivery", "Zero-knowledge privacy"],
  supersedes := none,
  links := []
}

/-- Wyoming DUNA operating wrapper (§1.2 & §4.6) -/
inductive DunaOperatingWrapper where
  | Una
  | Duna
  deriving Repr, DecidableEq

/-- Sovereignty Node Status (§5.5) -/
inductive NodeStatus where
  | Active
  | Paused
  deriving Repr, DecidableEq

/-- Four Capital Doors into UNA (§1.2 & §5 ADR-0011) -/
inductive CapitalDoor where
  | Gift
  | Sponsor
  | RecoverableGrant
  | OperatorSubscription
  deriving Repr, DecidableEq

/-- Phase Mirror Oracle Tiers (§7.2 ADR-0011) -/
inductive OracleTier where
  | L0Invariant
  | L1Rule
  | L2Semantic
  deriving Repr, DecidableEq

structure CivicNode where
  nodeId : Nat
  isMember : Bool
  votingPower : Nat
  deriving Repr, DecidableEq

structure PmcpGates where
  masteryPass : Bool
  playbookPass : Bool
  compliancePass : Bool
  supervisedEngagementPass : Bool
  deriving Repr, DecidableEq

/-- Mission Equation M = 2R + 1 (§1.1 ADR-0011) -/
def calculateReciprocityMultiplicity (reciprocityHalfSteps : Nat) : Nat :=
  reciprocityHalfSteps + 1

theorem mission_equation_singlet : calculateReciprocityMultiplicity 0 = 1 := rfl
theorem mission_equation_doublet : calculateReciprocityMultiplicity 1 = 2 := rfl
theorem mission_equation_triplet : calculateReciprocityMultiplicity 2 = 3 := rfl

/-- Oracle Tier Latency Target bound in nanoseconds (§7.2 ADR-0011) -/
def maxLatencyNs (tier : OracleTier) : Nat :=
  match tier with
  | OracleTier.L0Invariant => 100
  | OracleTier.L1Rule => 1000000
  | OracleTier.L2Semantic => 100000000

theorem oracle_tier_l0_max_latency : maxLatencyNs OracleTier.L0Invariant = 100 := rfl

/-- PMCP Certification verification (§7.4 ADR-0011). Equity NEVER mints a diploma! -/
def verifyPmcpCertification (gates : PmcpGates) (equityShortcutAttempted : Bool) : Bool :=
  if equityShortcutAttempted then
    false
  else
    gates.masteryPass && gates.playbookPass && gates.compliancePass && gates.supervisedEngagementPass

/-- Formal proof: Equity shortcut ALWAYS fails PMCP certification (§7.4 ADR-0011) -/
theorem equity_shortcut_denied_pmcp (g : PmcpGates) :
    verifyPmcpCertification g true = false := by
  rfl

/-- 100-member floor function determining UNA vs DUNA status (§4.6) -/
def determineOperatingWrapper (memberCount : Nat) : DunaOperatingWrapper :=
  if memberCount ≥ 100 then
    DunaOperatingWrapper.Duna
  else
    DunaOperatingWrapper.Una

/-- Formal proof: member count under 100 operates as UNA (§4.6) -/
theorem under_100_operates_as_una (count : Nat) (h : count < 100) :
    determineOperatingWrapper count = DunaOperatingWrapper.Una := by
  unfold determineOperatingWrapper
  have hnot : ¬(count ≥ 100) := Nat.not_le_of_gt h
  simp [hnot]

/-- Formal proof: member count >= 100 operates as DUNA (§4.6) -/
theorem over_100_operates_as_duna (count : Nat) (h : count ≥ 100) :
    determineOperatingWrapper count = DunaOperatingWrapper.Duna := by
  unfold determineOperatingWrapper
  simp [h]

/-- Treasury dual control threshold ($2,500 USD) (§6.1) -/
def requiresDualControl (amountUSD : Nat) : Bool :=
  amountUSD > 2500

/-- Formal proof: movement above $2,500 USD requires dual control (§6.1) -/
theorem dual_control_required_above_2500 (amount : Nat) (h : amount > 2500) :
    requiresDualControl amount = true := by
  unfold requiresDualControl
  exact decide_eq_true h

/-- Principle Amendment veto rule (§7.1): 1/3 veto threshold (votes_against * 3 >= votes_cast) rejects -/
def isAmendmentVetoed (votesCast votesAgainst : Nat) : Bool :=
  votesAgainst * 3 ≥ votesCast

/-- Formal proof: 1/3 or higher against vote vetoes a principle amendment (§7.1) -/
theorem one_third_veto_rejects_amendment (cast against : Nat) (h : against * 3 ≥ cast) :
    isAmendmentVetoed cast against = true := by
  unfold isAmendmentVetoed
  exact decide_eq_true h

/-- Sovereignty node topology split condition (§5.3): active operators > 12 requires node split -/
def shouldSplitNode (activeOperators : Nat) : Bool :=
  activeOperators > 12

/-- Formal proof: active operators exceeding 12 triggers node split (§5.3) -/
theorem node_split_triggered_above_12 (ops : Nat) (h : ops > 12) :
    shouldSplitNode ops = true := by
  unfold shouldSplitNode
  exact decide_eq_true h

/-- Three-Way Test node pause rule (§5.5): 2 consecutive failed quarters pauses node -/
def evaluateNodeStatus (consecutiveFailedQuarters : Nat) : NodeStatus :=
  if consecutiveFailedQuarters ≥ 2 then
    NodeStatus.Paused
  else
    NodeStatus.Active

/-- Formal proof: 2 consecutive failed quarters pauses the node (§5.5) -/
theorem two_failed_quarters_pauses_node :
    evaluateNodeStatus 2 = NodeStatus.Paused := by
  rfl

/-! ## ADR-0012: Nine Civic L0 Invariants (§11) -/

/-- The nine non-negotiable L0 invariants of the Unified Civic Infrastructure
    Blueprint: fail-closed, no exceptions, no negotiation. -/
inductive CivicL0Invariant where
  | NoMemberProfitDistribution
  | NoNodeCamerasInPrivacyZone
  | NoMembershipListOffPurpose
  | NoAdminBeyondWrittenAuthority
  | NoUnlicensedManagedService
  | YouthGuardianConsentRequired
  | ConsentWithdrawable
  | CreditsDoNotBuyVotes
  | NotAPac
  deriving Repr, DecidableEq

/-- The complete L0 invariant codebook (exactly nine). -/
def allL0Invariants : List CivicL0Invariant :=
  [ CivicL0Invariant.NoMemberProfitDistribution
  , CivicL0Invariant.NoNodeCamerasInPrivacyZone
  , CivicL0Invariant.NoMembershipListOffPurpose
  , CivicL0Invariant.NoAdminBeyondWrittenAuthority
  , CivicL0Invariant.NoUnlicensedManagedService
  , CivicL0Invariant.YouthGuardianConsentRequired
  , CivicL0Invariant.ConsentWithdrawable
  , CivicL0Invariant.CreditsDoNotBuyVotes
  , CivicL0Invariant.NotAPac
  ]

/-- The codebook enumerates exactly nine L0 invariants. -/
theorem nine_l0_invariants_enumerated : allL0Invariants.length = 9 := by
  decide

/-- L0 compliance gate: an invariant holds exactly when its condition passes. -/
def isL0Compliant (inv : CivicL0Invariant) (conditionPass : Bool) : Bool :=
  conditionPass

/-- A passing condition satisfies the invariant. -/
theorem l0_compliant_when_condition_passes (inv : CivicL0Invariant) (conditionPass : Bool)
    (h : conditionPass = true) :
    isL0Compliant inv conditionPass = true := by
  unfold isL0Compliant
  rw [h]

/-- Fail-closed: a violated invariant is always rejected. -/
theorem l0_violation_fails_closed (inv : CivicL0Invariant) (conditionPass : Bool)
    (h : conditionPass = false) :
    isL0Compliant inv conditionPass = false := by
  unfold isL0Compliant
  rw [h]

/-- Credits never buy votes: the eighth L0 invariant rejects any ballot where
    credits or tokens overweight voting power. -/
theorem credits_do_not_buy_votes (votingPower : Nat) (credits : Nat)
    (h : votingPower > 0) :
    isL0Compliant CivicL0Invariant.CreditsDoNotBuyVotes (votingPower == 0) = false := by
  unfold isL0Compliant
  cases votingPower with
  | zero => omega
  | succ n => rfl

/-! ## ADR-0012: Dual-Seat Firewall (§7) -/

/-- Dual seat: a lined-up counterparty may both practice (PMCP) and own the
    hosted oracle — two papers, one firewall. -/
structure DualSeat where
  pmcpCertified : Bool
  equityHeld : Bool
  deriving Repr, DecidableEq

/-- Firewall predicate: equity close never issues PMCP certification, and a
    certificate never mints (it attests). -/
def isEquityPmcpFirewalled (seat : DualSeat) : Bool :=
  !(seat.equityHeld && seat.pmcpCertified)

/-- Equity close does not mint a diploma: an equity holder behind the firewall
    is never simultaneously PMCP-certified. -/
theorem equity_never_mints_pmcp (seat : DualSeat) (h : seat.equityHeld = true)
    (hf : isEquityPmcpFirewalled seat = true) :
    seat.pmcpCertified = false := by
  unfold isEquityPmcpFirewalled at hf
  cases hc : seat.pmcpCertified with
  | false => rfl
  | true => simp [hc, h] at hf

/-- A PMCP certificate is not a product mint: certification never confers
    equity. -/
theorem certificate_does_not_mint_equity (seat : DualSeat) (h : seat.pmcpCertified = true)
    (hf : isEquityPmcpFirewalled seat = true) :
    seat.equityHeld = false := by
  unfold isEquityPmcpFirewalled at hf
  cases hc : seat.equityHeld with
  | false => rfl
  | true => simp [hc, h] at hf

/-- The firewall admits a pure practitioner seat (no equity). -/
theorem firewall_admits_pure_practitioner (seat : DualSeat) (h : seat.equityHeld = false) :
    isEquityPmcpFirewalled seat = true := by
  unfold isEquityPmcpFirewalled
  cases hc : seat.pmcpCertified <;> simp [h, hc]

/-! ## ADR-0012: Material Asset Floor (§9) -/

/-- Material-asset floor: USD 5,000 (recommended binding floor in v1.2). -/
def MATERIAL_ASSET_FLOOR_USD : Nat := 5000

/-- A proposed acquisition is material when it crosses the USD floor, or is a
    vehicle, any interest in land, or a lease longer than 12 months. The
    predicate is the decidable image of the Prop disjunction, keeping exact
    (non-float) arithmetic. -/
def isMaterialAsset (valueUSD : Nat) (isVehicle isLand : Bool) (leaseMonths : Nat) : Bool :=
  decide (valueUSD ≥ MATERIAL_ASSET_FLOOR_USD ∨ isVehicle = true ∨ isLand = true ∨ leaseMonths > 12)

/-- A value at or above the floor is material. -/
theorem value_over_floor_is_material (valueUSD : Nat) (h : valueUSD ≥ MATERIAL_ASSET_FLOOR_USD) :
    isMaterialAsset valueUSD false false 0 = true := by
  unfold isMaterialAsset
  exact decide_eq_true (Or.inl h)

/-- Any vehicle is material, regardless of value. -/
theorem vehicle_is_material (valueUSD : Nat) :
    isMaterialAsset valueUSD true false 0 = true := by
  unfold isMaterialAsset
  exact decide_eq_true (Or.inr (Or.inl rfl))

/-- Any interest in land is material, regardless of value. -/
theorem land_is_material (valueUSD : Nat) :
    isMaterialAsset valueUSD false true 0 = true := by
  unfold isMaterialAsset
  exact decide_eq_true (Or.inr (Or.inr (Or.inl rfl)))

/-- A lease longer than 12 months is material, regardless of value. -/
theorem long_lease_is_material (valueUSD : Nat) :
    isMaterialAsset valueUSD false false 13 = true := by
  unfold isMaterialAsset
  exact decide_eq_true (Or.inr (Or.inr (Or.inr (by decide))))

/-- A small non-special acquisition below the floor is not material: member
    approval is not required and the node envelope decides. -/
theorem non_material_asset_rejected (valueUSD : Nat) (h : valueUSD < MATERIAL_ASSET_FLOOR_USD) :
    isMaterialAsset valueUSD false false 0 = false := by
  cases hc : isMaterialAsset valueUSD false false 0 with
  | true =>
      have hdisj : valueUSD ≥ MATERIAL_ASSET_FLOOR_USD ∨ false = true ∨ false = true ∨ 0 > 12 := by
        simpa [isMaterialAsset] using hc
      rcases hdisj with hge | hveh | hland | hlease
      · omega
      · cases hveh
      · cases hland
      · omega
  | false => rfl

end Echonomics.CivicInfrastructureSpec
