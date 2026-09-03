namespace Echonomics.Core

abbrev ADRId := Nat

inductive ADRStatus where
  | Proposed
  | Accepted
  | Deprecated
  | Superseded
  deriving Repr, DecidableEq

structure ArtifactLink where
  uri : String
  label : String
  deriving Repr, DecidableEq

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

structure PauliKey where
  roleClass : String
  slotId : String
  periodId : String
  deriving Repr, DecidableEq

inductive SpinTag where
  | Alpha
  | Beta
  deriving Repr, DecidableEq

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

end Echonomics.Core
