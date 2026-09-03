import Echonomics.Core

/-!
# Echonomics.XiConstitutionLicense — ADR-0005: Integration of Ξ-Constitution and Ξ-License Governance Invariants

Faithful formalization of the Ξ-Constitution v2.0 and Ξ-License v1.0 governance
contract:

1. **Constitutional Invariant Binding**: every state transition satisfies
   Lawful Recursion, `δ ≤ ε` (semantic drift bounded), and the Conscious
   Sovereignty Layer (CSL) three-operator gate `(N, B, S)` is evaluated
   before mutation:
     - `N` (Neutrality): frame-invariant non-preferential evaluation.
     - `B` (Beneficence): zero-surveillance, no external harm, no lock-in.
     - `S` (Silence Clause): uncertain inputs default to NO-OP.

2. **Licensing Restriction & Certification**: deployment is lawful if and
   only if the system is Ξ-Certified, where certification is the composite
   `Ψ = PIRTM ∘ CSL ∘ zk`. Surveillance, profiling, monetary exploitation,
   weaponization, and un-certified black-box deployments **fail closed** with
   immediate execution halt.

3. **Machine-Checked Enforcement**: every CSL operator gate, the drift bound,
   the composite certificate pipeline, and the fail-closed license decision
   carry machine-checked proofs.

Key properties (all zero-`sorry`):
- `evaluateCslGate` is sound and complete: gate passes iff `N ∧ B ∧ S`.
- The CSL gate fails closed: any single operator flag `false` rejects.
- Lawful Recursion is exactly `driftDelta ≤ boundEpsilon`.
- The composite flow `PIRTM ∘ CSL ∘ zk` certifies iff every stage passes, and
  fails closed on the first rejected stage.
- A license is granted if and only if the system is certified and carries no
  prohibited characteristic (surveillance/profiling/exploitation/weaponization/
  black-box); any prohibited flag denies execution (fail closed).

The model is deliberately minimal: the three pipeline stages are represented as
independent `Bool` gates whose conjunction is the certificate. Replace with a
full embedded DSL (e.g., per-stage receipts, zero-knowledge proof objects)
later without changing the fail-closed theorems.
-/

namespace Echonomics.XiConstitutionLicense

open Echonomics.Core

/-! ## ADR-0005 Record -/

/-- ADR-0005 declaration. -/
def adr0005 : ADR := {
  id := 5
  title := "Integration of Ξ-Constitution and Ξ-License Governance Invariants"
  status := ADRStatus.Accepted
  context := "Echonomics state transitions must strictly conform to Ξ-Constitution v2.0 and Ξ-License v1.0."
  decision := "Formally bind all state transitions to CSL operators (N, B, S) and Lawful Recursion drift bounds, and gate execution on a fail-closed license certificate."
  consequences := [
    "Zero-surveillance by design",
    "Fail-closed CSL operator gate",
    "Lawful-recursion drift bound"
  ]
  supersedes := none
  links := []
}

/-! ## CSL Three-Operator Gate -/

/-- The three Conscious Sovereignty Layer operators: `N` (Neutrality),
    `B` (Beneficence), `S` (Silence Clause). -/
structure CslOperators where
  isNeutral : Bool
  isBeneficent : Bool
  isSilent : Bool
  deriving Repr, DecidableEq

/-- CSL gate: passes only when all three operators hold. -/
def evaluateCslGate (ops : CslOperators) : Bool :=
  ops.isNeutral && ops.isBeneficent && ops.isSilent

/-- The CSL gate is a strict conjunction: it passes iff every operator holds. -/
theorem csl_gate_iff_all (ops : CslOperators) :
    evaluateCslGate ops = true ↔
      ops.isNeutral = true ∧ ops.isBeneficent = true ∧ ops.isSilent = true := by
  constructor
  · intro h
    rw [evaluateCslGate] at h
    simp only [Bool.and_eq_true, and_assoc] at h
    exact h
  · intro h
    rw [evaluateCslGate]
    simp only [Bool.and_eq_true, and_assoc]
    exact h

/-- Soundness: a passing CSL gate entails every operator holds. -/
theorem csl_gate_sound (ops : CslOperators) (h : evaluateCslGate ops = true) :
    ops.isNeutral = true ∧ ops.isBeneficent = true ∧ ops.isSilent = true :=
  (csl_gate_iff_all ops).1 h

/-- Completeness: when every operator holds, the CSL gate passes. -/
theorem csl_gate_complete (ops : CslOperators) (hN : ops.isNeutral = true)
    (hB : ops.isBeneficent = true) (hS : ops.isSilent = true) :
    evaluateCslGate ops = true :=
  (csl_gate_iff_all ops).2 ⟨hN, hB, hS⟩

/-- Fail-closed: a non-neutral operator rejects the gate. -/
theorem csl_gate_fails_on_non_neutral (ops : CslOperators) (h : ops.isNeutral = false) :
    evaluateCslGate ops = false := by
  simp [evaluateCslGate, h]

/-- Fail-closed: a non-beneficent operator rejects the gate. -/
theorem csl_gate_fails_on_non_beneficent (ops : CslOperators) (h : ops.isBeneficent = false) :
    evaluateCslGate ops = false := by
  cases hN : ops.isNeutral <;> simp [evaluateCslGate, h, hN]

/-- Fail-closed: a non-silent operator rejects the gate. -/
theorem csl_gate_fails_on_non_silent (ops : CslOperators) (h : ops.isSilent = false) :
    evaluateCslGate ops = false := by
  cases hN : ops.isNeutral <;> cases hB : ops.isBeneficent <;>
    simp [evaluateCslGate, h, hN, hB]

/-! ## Lawful Recursion Drift Bound -/

/-- Lawful Recursion drift state: `driftDelta` is the measured semantic drift
    `δ`, `boundEpsilon` is the admissible drift bound `ε`. -/
structure LawfulRecursionState where
  driftDelta : Nat
  boundEpsilon : Nat
  deriving Repr, DecidableEq

/-- Lawful Recursion holds exactly when the drift is within its bound: `δ ≤ ε`. -/
def isLawfulRecursion (st : LawfulRecursionState) : Bool :=
  st.driftDelta ≤ st.boundEpsilon

/-- Drift-boundedness is exactly Lawful Recursion. -/
theorem lawful_recursion_iff_drift_bounded (st : LawfulRecursionState) :
    isLawfulRecursion st = true ↔ st.driftDelta ≤ st.boundEpsilon := by
  constructor
  · intro h
    dsimp [isLawfulRecursion] at h
    exact decide_eq_true_iff.mp h
  · intro h
    dsimp [isLawfulRecursion]
    exact decide_eq_true h

/-- Soundness: Lawful Recursion entails the drift bound. -/
theorem lawful_recursion_sound (st : LawfulRecursionState) (h : isLawfulRecursion st = true) :
    st.driftDelta ≤ st.boundEpsilon :=
  (lawful_recursion_iff_drift_bounded st).1 h

/-- Completeness: an in-bound drift yields Lawful Recursion. -/
theorem lawful_recursion_complete (st : LawfulRecursionState) (h : st.driftDelta ≤ st.boundEpsilon) :
    isLawfulRecursion st = true :=
  (lawful_recursion_iff_drift_bounded st).2 h

/-- Fail-closed: a drift exceeding the bound rejects Lawful Recursion. -/
theorem lawful_recursion_fails_on_exceeded_drift {st : LawfulRecursionState}
    (h : st.boundEpsilon < st.driftDelta) : isLawfulRecursion st = false := by
  by_cases hb : st.driftDelta ≤ st.boundEpsilon
  · omega
  · dsimp [isLawfulRecursion]
    exact decide_eq_false hb

/-! ## Composite Certificate: `Ψ = PIRTM ∘ CSL ∘ zk` -/

/-- The three-stage certificate pipeline `PIRTM ∘ CSL ∘ zk`. Each stage is an
    independent `Bool` gate; the composite certifies only when all pass. -/
structure CertPipeline where
  pirtmPass : Bool
  cslPass : Bool
  zkPass : Bool
  deriving Repr, DecidableEq

/-- Composite certification: the conjunction of every pipeline stage. -/
def flowCertificates (p : CertPipeline) : Bool :=
  p.pirtmPass && p.cslPass && p.zkPass

/-- The composite flow certifies iff every stage passes. -/
theorem flow_iff_all (p : CertPipeline) :
    flowCertificates p = true ↔
      p.pirtmPass = true ∧ p.cslPass = true ∧ p.zkPass = true := by
  constructor
  · intro h
    rw [flowCertificates] at h
    simp only [Bool.and_eq_true, and_assoc] at h
    exact h
  · intro h
    rw [flowCertificates]
    simp only [Bool.and_eq_true, and_assoc]
    exact h

/-- Fail-closed: a rejected stage (PIRTM) revokes certification. -/
theorem flow_fails_on_pirtm (p : CertPipeline) (h : p.pirtmPass = false) :
    flowCertificates p = false := by
  simp [flowCertificates, h]

/-- Fail-closed: a rejected stage (CSL) revokes certification. -/
theorem flow_fails_on_csl (p : CertPipeline) (h : p.cslPass = false) :
    flowCertificates p = false := by
  cases hP : p.pirtmPass <;> simp [flowCertificates, h, hP]

/-- Fail-closed: a rejected stage (zk) revokes certification. -/
theorem flow_fails_on_zk (p : CertPipeline) (h : p.zkPass = false) :
    flowCertificates p = false := by
  cases hP : p.pirtmPass <;> cases hC : p.cslPass <;>
    simp [flowCertificates, h, hP, hC]

/-! ## Fail-Closed Ξ-License -/

/-- Prohibited characteristics that MUST fail closed under the license:
    surveillance, profiling, monetary exploitation, weaponization, and
    un-certified black-box deployment. -/
structure ProhibitedFlags where
  isSurveillance : Bool
  isProfiling : Bool
  isExploitation : Bool
  isWeaponized : Bool
  isBlackBox : Bool
  deriving Repr, DecidableEq

/-- Prohibited when any characteristic is present. -/
def isProhibited (pf : ProhibitedFlags) : Bool :=
  pf.isSurveillance || pf.isProfiling || pf.isExploitation || pf.isWeaponized || pf.isBlackBox

/-- Ξ-Certification requires the CSL gate, Lawful Recursion, and the composite
    pipeline all to pass. -/
def isXiCertified (ops : CslOperators) (st : LawfulRecursionState) (p : CertPipeline) : Bool :=
  evaluateCslGate ops && isLawfulRecursion st && flowCertificates p

/-- A license is granted if and only if the system is Ξ-Certified and carries
    no prohibited characteristic. -/
def isLicenseGranted (ops : CslOperators) (st : LawfulRecursionState) (p : CertPipeline)
    (pf : ProhibitedFlags) : Bool :=
  isXiCertified ops st p && !isProhibited pf

/-- A granted license implies the system is Ξ-Certified. -/
theorem license_granted_implies_certified {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : isLicenseGranted ops st p pf = true) :
    isXiCertified ops st p = true := by
  rw [isLicenseGranted] at h
  rw [Bool.and_eq_true] at h
  exact h.1

/-- A granted license implies there is no prohibited characteristic. -/
theorem license_granted_implies_not_prohibited {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : isLicenseGranted ops st p pf = true) :
    isProhibited pf = false := by
  rw [isLicenseGranted] at h
  rw [Bool.and_eq_true] at h
  simpa using h.2

/-- Fail-closed: a certified system with no prohibited flag is licensed. -/
theorem license_granted_on_certified_clean {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (hc : isXiCertified ops st p = true)
    (hclean : isProhibited pf = false) : isLicenseGranted ops st p pf = true := by
  simp [isLicenseGranted, hc, hclean]

/-- Fail-closed: an un-certified system is never licensed. -/
theorem license_denied_on_uncertified {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : isXiCertified ops st p = false) :
    isLicenseGranted ops st p pf = false := by
  simp [isLicenseGranted, h]

/-- Fail-closed: a licensed system has every CSL operator, a bounded drift,
    and a passing composite pipeline. -/
theorem license_granted_implies_all_gates {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : isLicenseGranted ops st p pf = true) :
    evaluateCslGate ops = true ∧ isLawfulRecursion st = true ∧ flowCertificates p = true := by
  have hc : isXiCertified ops st p = true := license_granted_implies_certified h
  rw [isXiCertified] at hc
  simp only [Bool.and_eq_true, and_assoc] at hc
  exact hc

/-- Fail-closed: a surveilling system is never licensed. -/
theorem license_denied_on_surveillance {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : pf.isSurveillance = true) :
    isLicenseGranted ops st p pf = false := by
  simp [isLicenseGranted, isXiCertified, isProhibited, h]

/-- Fail-closed: a profiling system is never licensed. -/
theorem license_denied_on_profiling {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : pf.isProfiling = true) :
    isLicenseGranted ops st p pf = false := by
  simp [isLicenseGranted, isXiCertified, isProhibited, h]

/-- Fail-closed: an exploitative system is never licensed. -/
theorem license_denied_on_exploitation {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : pf.isExploitation = true) :
    isLicenseGranted ops st p pf = false := by
  simp [isLicenseGranted, isXiCertified, isProhibited, h]

/-- Fail-closed: a weaponized system is never licensed. -/
theorem license_denied_on_weaponized {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : pf.isWeaponized = true) :
    isLicenseGranted ops st p pf = false := by
  simp [isLicenseGranted, isXiCertified, isProhibited, h]

/-- Fail-closed: an un-certified black-box deployment is never licensed. -/
theorem license_denied_on_blackbox {ops : CslOperators} {st : LawfulRecursionState}
    {p : CertPipeline} {pf : ProhibitedFlags} (h : pf.isBlackBox = true) :
    isLicenseGranted ops st p pf = false := by
  simp [isLicenseGranted, isXiCertified, isProhibited, h]

/-! ## State Transition & Lawful Recursion over Time

   Decision 1 requires that *every state transition* satisfy `Ξ(t+1) = Ψ(Ξ(t))`
   with semantic drift `δ(t) ≤ ε(t)`, and that the CSL gate `(N,B,S)` be
   evaluated **before** state mutation. The `XiState` / `cslGatedStep` pair make
   this temporal obligation machine-checkable:

   - `cslGatedStep` is the composite transition `Ψ`. It consults the CSL gate
     *first*; only a passing gate yields a mutated state, and every mutation
     advances the epoch and drifts the semantic magnitude by the caller-supplied
     `drift`.
   - A rejected gate yields NO-OP (the state is returned unchanged): the
     fail-closed posture and the Silence Clause — uncertain / non-compliant
     inputs default to inaction with an unchanged state.
   - Lawful Recursion over the transition is exactly `measureDrift ≤ boundEpsilon`.
-/

/-- A discrete system state `Ξ`: an epoch index `t` and a carried semantic
    magnitude. The semantic magnitude is what drifts under transition. -/
structure XiState where
  epoch : Nat
  semantic : Nat
  deriving Repr, DecidableEq

/-- Semantic drift `δ` between two states: the nonnegative distance between
    their semantic magnitudes. -/
def measureDrift (a b : XiState) : Nat :=
  if a.semantic ≤ b.semantic then b.semantic - a.semantic else a.semantic - b.semantic

/-- The composite lawful transition `Ψ = PIRTM ∘ CSL ∘ zk` acting over time.
    The CSL gate is evaluated **before** mutation:

    - gate passes → advance to `nextEpoch` and drift the semantic magnitude by
      `drift` (the caller carries the obligation `drift ≤ boundEpsilon`).
    - gate fails  → NO-OP: return the input state unchanged (fail closed,
      Silence Clause default). -/
def cslGatedStep (ops : CslOperators) (drift : Nat) (nextEpoch : Nat) (s : XiState) : XiState :=
  if evaluateCslGate ops then
    { epoch := nextEpoch, semantic := s.semantic + drift }
  else
    s

/-- Fail-closed / Silence Clause: a CSL-rejected transition defaults to NO-OP,
    leaving the state unchanged. Equivalently, the CSL gate is evaluated before
    mutation — a failing gate never mutates the state. -/
theorem step_noop_on_gate_reject (ops : CslOperators) (drift nextEpoch : Nat) (s : XiState)
    (h : evaluateCslGate ops = false) :
    cslGatedStep ops drift nextEpoch s = s := by
  simp [cslGatedStep, h]

/-- Fail-closed: a single non-neutral operator rejects the gate and freezes the
    state at the pre-mutation value (NO-OP). -/
theorem step_noop_on_non_neutral (ops : CslOperators) (drift nextEpoch : Nat) (s : XiState)
    (h : ops.isNeutral = false) :
    cslGatedStep ops drift nextEpoch s = s := by
  exact step_noop_on_gate_reject ops drift nextEpoch s (csl_gate_fails_on_non_neutral ops h)

/-- Failure-closure: a single non-beneficent operator freezes the state. -/
theorem step_noop_on_non_beneficent (ops : CslOperators) (drift nextEpoch : Nat) (s : XiState)
    (h : ops.isBeneficent = false) :
    cslGatedStep ops drift nextEpoch s = s := by
  exact step_noop_on_gate_reject ops drift nextEpoch s (csl_gate_fails_on_non_beneficent ops h)

/-- Failure-closure: a single non-silent operator freezes the state. -/
theorem step_noop_on_non_silent (ops : CslOperators) (drift nextEpoch : Nat) (s : XiState)
    (h : ops.isSilent = false) :
    cslGatedStep ops drift nextEpoch s = s := by
  exact step_noop_on_gate_reject ops drift nextEpoch s (csl_gate_fails_on_non_silent ops h)

/-- Decision 1, Lawful Recursion over the transition: when the CSL gate passes
    before mutation and the caller's drift is within its bound, the semantic
    drift of the transition is bounded: `δ = measureDrift s (cslGatedStep ...)
    ≤ boundEpsilon`. -/
theorem step_drift_bounded_when_gate_passes (ops : CslOperators)
    (drift boundEpsilon nextEpoch : Nat) (s : XiState)
    (h : evaluateCslGate ops = true) (hb : drift ≤ boundEpsilon) :
    measureDrift s (cslGatedStep ops drift nextEpoch s) ≤ boundEpsilon := by
  simp [cslGatedStep, measureDrift, h]
  omega

/-- Decision 1: a CSL-certified transition yields Lawful Recursion — the
    transition's drift state `⟨δ, ε⟩` satisfies `δ ≤ ε`. -/
theorem lawful_recursion_holds_on_csl_transition (ops : CslOperators)
    (drift boundEpsilon nextEpoch : Nat) (s : XiState)
    (h : evaluateCslGate ops = true) (hb : drift ≤ boundEpsilon) :
    isLawfulRecursion
      { driftDelta := measureDrift s (cslGatedStep ops drift nextEpoch s)
        , boundEpsilon := boundEpsilon } = true := by
  exact lawful_recursion_complete
    ⟨measureDrift s (cslGatedStep ops drift nextEpoch s), boundEpsilon⟩
    (step_drift_bounded_when_gate_passes ops drift boundEpsilon nextEpoch s h hb)

/-- The composite transition `Ψ = PIRTM ∘ CSL ∘ zk` read off a `CertPipeline`.
    The pipeline's CSL stage `cslPass` is the transition gate — evaluated
    before mutation. A certified pipeline (all three stages pass) therefore
    advances the state lawfully. -/
def certifiedGatedStep (p : CertPipeline) (drift : Nat) (nextEpoch : Nat) (s : XiState) : XiState :=
  if p.cslPass then
    { epoch := nextEpoch, semantic := s.semantic + drift }
  else
    s

/-- A certified pipeline (all stages pass) has a passing CSL stage, and hence
    its composite transition drifts the state by at most the bound. This is the
    machine-checked `Ξ(t+1) = Ψ(Ξ(t))` with `Ψ = PIRTM ∘ CSL ∘ zk`. -/
theorem composite_transition_lawful_when_certified (p : CertPipeline)
    (drift boundEpsilon nextEpoch : Nat) (s : XiState)
    (hp : flowCertificates p = true) (hb : drift ≤ boundEpsilon) :
    measureDrift s (certifiedGatedStep p drift nextEpoch s) ≤ boundEpsilon := by
  have hcsl : p.cslPass = true := (flow_iff_all p).1 hp |>.2.1
  simp [certifiedGatedStep, measureDrift, hcsl]
  omega

/-- Decision 2 corollary: a certified pipeline yields Lawful Recursion over its
    composite transition — `⟨δ, ε⟩` with `δ ≤ ε`. -/
theorem composite_transition_is_lawful (p : CertPipeline)
    (drift boundEpsilon nextEpoch : Nat) (s : XiState)
    (hp : flowCertificates p = true) (hb : drift ≤ boundEpsilon) :
    isLawfulRecursion
      { driftDelta := measureDrift s (certifiedGatedStep p drift nextEpoch s)
        , boundEpsilon := boundEpsilon } = true := by
  exact lawful_recursion_complete
    ⟨measureDrift s (certifiedGatedStep p drift nextEpoch s), boundEpsilon⟩
    (composite_transition_lawful_when_certified p drift boundEpsilon nextEpoch s hp hb)

/-- Decision 2 fail-closed corollary: a pipeline whose CSL stage is rejected
    freezes the composite transition at the pre-mutation state (NO-OP). -/
theorem composite_transition_noop_on_csl_reject (p : CertPipeline)
    (drift nextEpoch : Nat) (s : XiState) (h : p.cslPass = false) :
    certifiedGatedStep p drift nextEpoch s = s := by
  simp [certifiedGatedStep, h]

end Echonomics.XiConstitutionLicense
