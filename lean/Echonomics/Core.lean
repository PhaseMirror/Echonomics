/-!
# Echonomics.Core — ADR Lifecycle Types & Social Physics Primitives

Formal types for ADR governance, Pauli key structure, spin tags, gate results,
and ADR lifecycle invariants. Every type is decidable-equality-capable to
support machine-checked proofs without external axioms.

ADR-0001 mandates:
- Pauli key K = (role_class, slot_id, period_id)
- person_id is particle label only (not part of the key)
- 5-stage gate priority: G0→G1→G2→G3→G4/G5
- Multiplicity M = n_unpaired + 1
-/
namespace Echonomics.Core

/-- ADR identifier. Natural numbers provide decidability and ordering. -/
abbrev ADRId := Nat

/-- ADR lifecycle status. -/
inductive ADRStatus where
  | Proposed
  | Accepted
  | Deprecated
  | Superseded
  deriving Repr, DecidableEq

/-- Artifact link connecting an ADR to external references. -/
structure ArtifactLink where
  uri : String
  label : String
  deriving Repr, DecidableEq

/-- Architecture Decision Record — the core governance artifact. -/
structure ADR where
  id : ADRId
  title : String
  status : ADRStatus
  context : String
  decision : String
  consequences : List String
  supersedes : Option ADRId
  links : List ArtifactLink
  deriving Repr, DecidableEq

/-- Pauli key K = (role_class, slot_id, period_id).
    person_id is a particle label only — NOT part of the key. -/
structure PauliKey where
  roleClass : String
  slotId : String
  periodId : String
  deriving Repr, DecidableEq

/-- Spin tag following Hund's first rule: Alpha (first occupant), Beta (paired). -/
inductive SpinTag where
  | Alpha
  | Beta
  deriving Repr, DecidableEq

/-- Gate result from the 5-stage Hundian occupancy evaluation. -/
inductive GateResult where
  | OkSingle (sigma : SpinTag)
  | OkPair (sigma : SpinTag)
  | OkHierarchy
  | OkDualHatWaiver (sigma : Option SpinTag)
  | RejUnknownClass
  | RejDualHat
  | RejPauli
  | RejTermOrder
  deriving Repr, DecidableEq

/-- ADR status transition event for traceability. -/
structure ADRTransition where
  adrId : ADRId
  fromStatus : ADRStatus
  toStatus : ADRStatus
  deriving Repr, DecidableEq

/-- A single entry in the ADR decision history. -/
structure ADREntry where
  adr : ADR
  supersededBy : Option ADRId
  deriving Repr, DecidableEq

end Echonomics.Core
