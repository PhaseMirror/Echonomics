import Echonomics.Core

/-!
# Echonomics.BuurtzorgModel — ADR-0016, ADR-0017, ADR-0018: Buurtzorg Self-Governing Care

Formal implementation and proofs for the Buurtzorg care-model series:

- ADR-0016 (Eight Virtues & Self-Governing Teams): the eight Bushidō virtues
  (Gi, Yū, Jin, Rei, Makoto, Meiyo, Chūgi, Jisei) are formalized as duties
  rather than costumes; self-governing care teams are capacity-bounded
  (`nurse_count ≤ max_capacity ≤ 12`), split when exceeding 12, and keep
  overhead at or under 15%.
- ADR-0017 (Civic Infrastructure Integration Schema): care teams map onto DUNA
  governance nodes only when the node capacity fits the team
  (`nurse_count ≤ team_capacity ≤ 12`); local resource allocations must be
  covered by the node envelope (90-day burn coverage).
- ADR-0018 (Non-Coercive Coaching & Resolution): conflict coaching is
  voluntary, advisory-only, and never command-bearing; formal dispute
  escalation is gated on prior non-coercive coaching.

All constructions are zero-Mathlib, zero-sorry, and decidable-equality
capable, following the Echonomics canonical core.
-/

namespace Echonomics.BuurtzorgModel

open Echonomics.Core

/-! ## ADR Records -/

/-- ADR-0016 declaration: Eight Virtues of Buurtzorg Self-Governing Care Model. -/
def adr0016 : ADR := {
  id := 16,
  title := "Eight Virtues of Buurtzorg Self-Governing Care Model",
  status := ADRStatus.Accepted,
  context := "Integrate Buurtzorg self-governing team principles into non-hierarchical civic infrastructure.",
  decision := "Formally bind self-governing care team sizes (max 12 nurses) and autonomous decision gates.",
  consequences := ["Autonomous care team operation", "Zero administrative bloat"],
  supersedes := none,
  links := []
}

/-- ADR-0017 declaration: Buurtzorg Civic Infrastructure Integration Schema. -/
def adr0017 : ADR := {
  id := 17,
  title := "Buurtzorg Civic Infrastructure Integration Schema",
  status := ADRStatus.Accepted,
  context := "Map Buurtzorg nursing teams to DUNA governance nodes and local resource allocation gates.",
  decision := "Connect care teams to DUNA constitutional voting gates and local asset routers.",
  consequences := ["Direct healthcare resource routing", "Civic governance integration"],
  supersedes := none,
  links := []
}

/-- ADR-0018 declaration: Buurtzorg Non-Coercive Coaching & Resolution Model. -/
def adr0018 : ADR := {
  id := 18,
  title := "Buurtzorg Non-Coercive Coaching & Resolution Model",
  status := ADRStatus.Accepted,
  context := "Establish non-coercive conflict resolution and advisory coaching gates.",
  decision := "Enforce non-coercive coaching protocols prior to formal dispute escalation.",
  consequences := ["Non-coercive resolution", "Restorative civic harmony"],
  supersedes := none,
  links := []
}

/-- ADR-0022 declaration (renumbered ADR-0016): Eight Virtues of Buurtzorg
    Self-Governing Care Model. -/
def adr0022 : ADR := {
  id := 22,
  title := "Eight Virtues of Buurtzorg Self-Governing Care Model",
  status := ADRStatus.Accepted,
  context := "Integrate Buurtzorg self-governing team principles into non-hierarchical civic infrastructure.",
  decision := "Formally bind self-governing care team sizes (max 12 nurses) and autonomous decision gates.",
  consequences := ["Autonomous care team operation", "Zero administrative bloat"],
  supersedes := none,
  links := []
}

/-- ADR-0024 declaration (renumbered ADR-0017): Buurtzorg Civic Infrastructure
    Integration Schema. -/
def adr0024 : ADR := {
  id := 24,
  title := "Buurtzorg Civic Infrastructure Integration Schema",
  status := ADRStatus.Accepted,
  context := "Map Buurtzorg nursing teams to DUNA governance nodes and local resource allocation gates.",
  decision := "Connect care teams to DUNA constitutional voting gates and local asset routers.",
  consequences := ["Direct healthcare resource routing", "Civic governance integration"],
  supersedes := none,
  links := []
}

/-- ADR-0025 declaration (renumbered ADR-0018): Buurtzorg Non-Coercive Coaching
    & Resolution Model. -/
def adr0025 : ADR := {
  id := 25,
  title := "Buurtzorg Non-Coercive Coaching & Resolution Model",
  status := ADRStatus.Accepted,
  context := "Establish non-coercive conflict resolution and advisory coaching gates.",
  decision := "Enforce non-coercive coaching protocols prior to formal dispute escalation.",
  consequences := ["Non-coercive resolution", "Restorative civic harmony"],
  supersedes := none,
  links := []
}

/-! ## ADR-0016: Eight Virtues & Self-Governing Teams -/

/-- The eight Bushidō virtues formalized as duty code for people who hold
    power over neighbors, data, and treasuries (ADR-0012 §2): Gi (Rectitude),
    Yū (Courage), Jin (Benevolence), Rei (Respect), Makoto (Honesty),
    Meiyo (Honor), Chūgi (Loyalty), Jisei (Self-Control). -/
inductive Virtue where
  | Gi
  | Yu
  | Jin
  | Rei
  | Makoto
  | Meiyo
  | Chugi
  | Jisei
  deriving Repr, DecidableEq

/-- The complete eight-virtue codebook. -/
def allVirtues : List Virtue :=
  [ Virtue.Gi, Virtue.Yu, Virtue.Jin, Virtue.Rei, Virtue.Makoto,
    Virtue.Meiyo, Virtue.Chugi, Virtue.Jisei ]

/-- The codebook enumerates exactly eight virtues. -/
theorem eight_virtues_fully_enumerated : allVirtues.length = 8 := by
  decide

/-- Every virtue is a duty: the codebook carries no optional virtues. -/
def isVirtueDuty (v : Virtue) : Bool :=
  true

/-- All eight virtues are duties (fail-closed duty code). -/
theorem all_virtues_are_duties (v : Virtue) : isVirtueDuty v = true := by
  cases v <;> rfl

/-- Every virtue appears in the canonical codebook. -/
theorem every_virtue_in_codebook (v : Virtue) : v ∈ allVirtues := by
  cases v <;> simp [allVirtues]

/-- A self-governing care team: `nurseCount` active nurses within a
    `maxCapacity` ceiling. -/
structure BuurtzorgTeam where
  nurseCount : Nat
  maxCapacity : Nat
  deriving Repr, DecidableEq

/-- Team capacity validity: the active team fits its ceiling and the ceiling
    never exceeds the Buurtzorg bound of 12 nurses. -/
def isTeamCapacityValid (team : BuurtzorgTeam) : Bool :=
  team.nurseCount ≤ team.maxCapacity ∧ team.maxCapacity ≤ 12

/-- The Buurtzorg ceiling: at most 12 nurses per self-governing team. -/
theorem team_capacity_bound_twelve (team : BuurtzorgTeam) (h : isTeamCapacityValid team = true) :
    team.maxCapacity ≤ 12 := by
  have h' : team.nurseCount ≤ team.maxCapacity ∧ team.maxCapacity ≤ 12 := by
    simpa [isTeamCapacityValid] using h
  exact h'.2

/-- Active nurses never exceed the team's declared capacity. -/
theorem nurse_count_within_capacity (team : BuurtzorgTeam) (h : isTeamCapacityValid team = true) :
    team.nurseCount ≤ team.maxCapacity := by
  have h' : team.nurseCount ≤ team.maxCapacity ∧ team.maxCapacity ≤ 12 := by
    simpa [isTeamCapacityValid] using h
  exact h'.1

/-- A 13-nurse team is invalid and must split (topology split rule). -/
theorem thirteen_nurses_requires_split (team : BuurtzorgTeam) (h : team.nurseCount = 13) :
    isTeamCapacityValid team = false := by
  cases hc : isTeamCapacityValid team with
  | true =>
      have h' : team.nurseCount ≤ team.maxCapacity ∧ team.maxCapacity ≤ 12 := by
        simpa [isTeamCapacityValid] using hc
      omega
  | false => rfl

/-- Capacity bound witness: a team at or under 10 nurses with a 12-nurse
    ceiling is valid (executable example from the runbook). -/
theorem buurtzorg_team_size_bound (team : BuurtzorgTeam) (h1 : team.nurseCount ≤ 10) (h2 : team.maxCapacity = 12) :
    isTeamCapacityValid team = true := by
  dsimp [isTeamCapacityValid]
  rw [h2]
  exact decide_eq_true (And.intro (by omega) (by decide))

/-- Overhead target: commons overhead must stay at or under 15%. -/
def isOverheadWithinTarget (overheadPct : Nat) : Bool :=
  overheadPct ≤ 15

/-- Overhead within the 15% target is admitted. -/
theorem overhead_within_15_percent_target (p : Nat) (h : p ≤ 15) :
    isOverheadWithinTarget p = true := by
  unfold isOverheadWithinTarget
  exact decide_eq_true h

/-- Overhead above 15% fails closed. -/
theorem overhead_above_target_fails_closed (p : Nat) (h : p > 15) :
    isOverheadWithinTarget p = false := by
  cases hc : isOverheadWithinTarget p with
  | true =>
      have hp : p ≤ 15 := by simpa [isOverheadWithinTarget] using hc
      omega
  | false => rfl

/-! ## ADR-0017: Civic Infrastructure Integration Schema -/

/-- A care team mapped onto civic infrastructure. -/
structure CareTeam where
  teamId : Nat
  nurseCount : Nat
  deriving Repr, DecidableEq

/-- A DUNA governance node hosting care-team capacity. -/
structure GovernanceNode where
  nodeId : Nat
  teamCapacity : Nat
  deriving Repr, DecidableEq

/-- Mapping validity: the care team fits the node capacity and the node
    capacity itself respects the Buurtzorg ceiling (≤ 12). -/
def isMappingValid (team : CareTeam) (node : GovernanceNode) : Bool :=
  team.nurseCount ≤ node.teamCapacity ∧ node.teamCapacity ≤ 12

/-- A valid mapping always fits the team into the node capacity. -/
theorem mapping_requires_team_capacity (team : CareTeam) (node : GovernanceNode)
    (h : isMappingValid team node = true) :
    team.nurseCount ≤ node.teamCapacity := by
  have h' : team.nurseCount ≤ node.teamCapacity ∧ node.teamCapacity ≤ 12 := by
    simpa [isMappingValid] using h
  exact h'.1

/-- A valid mapping never gives a node more than 12 seats. -/
theorem mapping_requires_node_capacity_at_most_twelve (team : CareTeam) (node : GovernanceNode)
    (h : isMappingValid team node = true) :
    node.teamCapacity ≤ 12 := by
  have h' : team.nurseCount ≤ node.teamCapacity ∧ node.teamCapacity ≤ 12 := by
    simpa [isMappingValid] using h
  exact h'.2

/-- A standard team (≤ 12 nurses) maps cleanly onto a full 12-seat node. -/
theorem mapping_valid_for_standard_team (team : CareTeam) (node : GovernanceNode)
    (h1 : team.nurseCount ≤ 12) (h2 : node.teamCapacity = 12) :
    isMappingValid team node = true := by
  unfold isMappingValid
  exact decide_eq_true (And.intro (by omega) (by omega))

/-- Envelope coverage: a resource allocation is admitted exactly when it fits
    the node's named envelope. -/
def envelopeCoversAllocation (envelopeUSD allocationUSD : Nat) : Bool :=
  allocationUSD ≤ envelopeUSD

/-- Envelope coverage is exactly the allocation ≤ envelope relation. -/
theorem envelope_covers_allocation_iff (envelopeUSD allocationUSD : Nat) :
    envelopeCoversAllocation envelopeUSD allocationUSD = true ↔ allocationUSD ≤ envelopeUSD := by
  simp [envelopeCoversAllocation]

/-- Allocation within the envelope is admitted. -/
theorem allocation_within_envelope (envelopeUSD allocationUSD : Nat)
    (h : allocationUSD ≤ envelopeUSD) :
    envelopeCoversAllocation envelopeUSD allocationUSD = true := by
  exact (envelope_covers_allocation_iff envelopeUSD allocationUSD).2 h

/-- Allocation over the envelope fails closed. -/
theorem allocation_over_envelope_rejected (envelopeUSD allocationUSD : Nat)
    (h : allocationUSD > envelopeUSD) :
    envelopeCoversAllocation envelopeUSD allocationUSD = false := by
  cases hc : envelopeCoversAllocation envelopeUSD allocationUSD with
  | true =>
      have ha : allocationUSD ≤ envelopeUSD := by simpa [envelopeCoversAllocation] using hc
      omega
  | false => rfl

/-- Ninety-day envelope coverage: the envelope must fund 90 days of burn. -/
def envelopeCovers90Days (envelopeUSD dailyBurnUSD : Nat) : Bool :=
  envelopeUSD ≥ dailyBurnUSD * 90

/-- An envelope funding 90 days of burn is admitted. -/
theorem envelope_covers_90_days (envelopeUSD dailyBurnUSD : Nat)
    (h : envelopeUSD ≥ dailyBurnUSD * 90) :
    envelopeCovers90Days envelopeUSD dailyBurnUSD = true := by
  unfold envelopeCovers90Days
  exact decide_eq_true h

/-- An envelope that cannot fund 90 days fails closed (no hire before the
    envelope exists). -/
theorem envelope_fails_before_90_days (envelopeUSD dailyBurnUSD : Nat)
    (h : envelopeUSD < dailyBurnUSD * 90) :
    envelopeCovers90Days envelopeUSD dailyBurnUSD = false := by
  cases hc : envelopeCovers90Days envelopeUSD dailyBurnUSD with
  | true =>
      have hc' : envelopeUSD ≥ dailyBurnUSD * 90 := by simpa [envelopeCovers90Days] using hc
      omega
  | false => rfl

/-! ## ADR-0018: Non-Coercive Coaching & Resolution -/

/-- A coaching session: participation is `voluntary`, the coach advises
    (`advisoryOnly`) without command authority (`coachHasCommand` must be
    false), and `coachingAttempted` records that the protocol ran. -/
structure CoachingSession where
  voluntary : Bool
  advisoryOnly : Bool
  coachHasCommand : Bool
  coachingAttempted : Bool
  deriving Repr, DecidableEq

/-- Non-coercion: voluntary, advisory-only, and free of command authority. -/
def isNonCoercive (s : CoachingSession) : Bool :=
  s.voluntary && s.advisoryOnly && !s.coachHasCommand

/-- Escalation gate: formal dispute escalation requires prior non-coercive
    coaching. -/
def isEscalationAllowed (s : CoachingSession) : Bool :=
  isNonCoercive s && s.coachingAttempted

/-- Non-coercive coaching is never forced: participation is voluntary. -/
theorem non_coercive_requires_voluntary (s : CoachingSession) (h : isNonCoercive s = true) :
    s.voluntary = true := by
  unfold isNonCoercive at h
  cases hc : s.voluntary with
  | false => simp [hc] at h
  | true => rfl

/-- Non-coercive coaching is advisory, never prescriptive. -/
theorem non_coercive_requires_advisory (s : CoachingSession) (h : isNonCoercive s = true) :
    s.advisoryOnly = true := by
  unfold isNonCoercive at h
  cases hc : s.advisoryOnly with
  | false => simp [hc] at h
  | true => rfl

/-- Coaches have no command: non-coercive coaching never carries authority. -/
theorem non_coercive_denies_coach_command (s : CoachingSession) (h : isNonCoercive s = true) :
    s.coachHasCommand = false := by
  unfold isNonCoercive at h
  cases hc : s.coachHasCommand with
  | true => simp [hc] at h
  | false => rfl

/-- Self-governing teams operate without a manager's command. -/
def isSelfGoverning (s : CoachingSession) : Bool :=
  !s.coachHasCommand

/-- A self-governing team has no command-bearing coach. -/
theorem self_governing_team_has_no_manager_command (s : CoachingSession)
    (h : isSelfGoverning s = true) :
    s.coachHasCommand = false := by
  unfold isSelfGoverning at h
  cases hc : s.coachHasCommand with
  | true => simp [hc] at h
  | false => rfl

/-- Escalation is gated on prior coaching: allowed escalation implies the
    coaching protocol was attempted. -/
theorem escalation_requires_prior_coaching (s : CoachingSession) (h : isEscalationAllowed s = true) :
    s.coachingAttempted = true := by
  unfold isEscalationAllowed isNonCoercive at h
  cases hc : s.coachingAttempted with
  | false => simp [hc] at h
  | true => rfl

/-- Escalation is blocked when coaching has not been attempted. -/
theorem escalation_blocked_without_coaching (s : CoachingSession) (h : s.coachingAttempted = false) :
    isEscalationAllowed s = false := by
  unfold isEscalationAllowed
  simp [isNonCoercive, h]

/-- Escalation is blocked when coaching is coercive (command-bearing). -/
theorem escalation_blocked_if_coercive (s : CoachingSession) (h : s.coachHasCommand = true) :
    isEscalationAllowed s = false := by
  unfold isEscalationAllowed
  simp [isNonCoercive, h]

/-- Allowed escalation never carries coach command authority. -/
theorem coercive_coaching_rejected (s : CoachingSession) (h : isEscalationAllowed s = true) :
    s.coachHasCommand = false := by
  unfold isEscalationAllowed isNonCoercive at h
  cases hc : s.coachHasCommand with
  | true => simp [hc] at h
  | false => rfl

end Echonomics.BuurtzorgModel