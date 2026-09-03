import Echonomics.Core

/-!
# Echonomics.UorPrimeGeometry — ADR-0003: UOR Healthcare Nexus & L0 Prime Geometry Substance Protocol

Formal implementation and proofs for the UOR Healthcare Nexus prime-locked
geometry and exact rational conservation bounds. The ADR mandates:

  P:  prime_factor_sum ≤ conservation_bound

Key properties:
- `isPrime`: a structural (trial-division) primality predicate with verified
  small-prime results and positivity bounds.
- `isConserved`: the ADR conservation predicate, decidable and monotone in
  both the factor sum and the conservation bound.
- `evaluateConservationGate`: a single fail-closed gate producing a `Seal`
  decision exactly when conservation holds (sound and complete).
- Fail-closed: an over-bound factor sum is always rejected; a zero bound with
  positive factor sum is always rejected.
-/

namespace Echonomics.UorPrimeGeometry

open Echonomics.Core

/-! ## ADR-0003 Record -/

/-- ADR-0003 declaration. -/
def adr0003 : ADR := {
  id := 3
  title := "UOR Healthcare Nexus and L0 Prime Geometry Substance Protocol"
  status := ADRStatus.Proposed
  context := "UOR Healthcare Nexus requires prime-locked geometry and exact rational conservation bounds."
  decision := "Formally bind Healthcare Nexus transactions to the prime-indexed conservation predicate prime_factor_sum ≤ conservation_bound, and seal only when it holds."
  consequences := [
    "Machine-checked healthcare ledger integrity",
    "Prime-locked asset conservation"
  ]
  supersedes := none
  links := []
}

/-! ## Core State -/

/-- UOR prime-geometry state: the prime factor sum of transferred substance,
    and the exact rational conservation bound. -/
structure PrimeState where
  primeFactorSum : Nat
  conservationBound : Nat
  deriving Repr, DecidableEq

/-! ## Primality -/

/-- Whether `d` divides `n`. -/
def divides (n d : Nat) : Bool :=
  n % d == 0

/-- Structural trial-division: whether `n` has any proper divisor in the range
    `[2, i]`. Recurses downward on `i`, so it terminates structurally. -/
def hasDivisorBelow (n i : Nat) : Bool :=
  if i < 2 then
    false
  else if divides n i then
    true
  else
    hasDivisorBelow n (i - 1)

/-- Primality: `n` is prime iff `n ≥ 2` and it has no proper divisor in
    `[2, n - 1]`. -/
def isPrime (n : Nat) : Bool :=
  if n < 2 then
    false
  else
    not (hasDivisorBelow n (n - 1))

/-- `2` is prime. -/
theorem two_is_prime : isPrime 2 = true := by
  native_decide

/-- `3` is prime. -/
theorem three_is_prime : isPrime 3 = true := by
  native_decide

/-- `5` is prime. -/
theorem five_is_prime : isPrime 5 = true := by
  native_decide

/-- `4` is composite. -/
theorem four_is_composite : isPrime 4 = false := by
  native_decide

/-- `1` is not prime. -/
theorem one_is_not_prime : isPrime 1 = false := by
  native_decide

/-- `0` is not prime. -/
theorem zero_is_not_prime : isPrime 0 = false := by
  native_decide

/-- A prime is at least `2`. -/
theorem prime_ge_two (n : Nat) (h : isPrime n = true) : n ≥ 2 := by
  unfold isPrime at h
  by_cases hlt : n < 2
  · simp [hlt] at h
  · omega

/-- A prime is positive. -/
theorem prime_positive (n : Nat) (h : isPrime n = true) : n > 0 := by
  have hg : n ≥ 2 := prime_ge_two n h
  omega

/-! ## Conservation -/

/-- ADR Decision 1: conservation holds exactly when the prime factor sum does
    not exceed the conservation bound. -/
def isConserved (st : PrimeState) : Bool :=
  st.primeFactorSum ≤ st.conservationBound

/-- Conservation is exactly the bound predicate. -/
theorem conservation_iff_le (st : PrimeState) :
    isConserved st = true ↔ st.primeFactorSum ≤ st.conservationBound := by
  simp [isConserved]

/-- A factor sum within the bound is conserved. -/
theorem conservation_bound_verified (st : PrimeState)
    (h : st.primeFactorSum ≤ st.conservationBound) :
    isConserved st = true := by
  exact (conservation_iff_le st).2 h

/-- Exact conservation (sum equals bound) implies conserved. -/
theorem exact_conservation_implies_conserved (st : PrimeState)
    (h : st.primeFactorSum = st.conservationBound) :
    isConserved st = true := by
  simp [isConserved, h]

/-- Raising the conservation bound preserves conservation (monotone in bound). -/
theorem increasing_bound_preserves_conservation (st : PrimeState)
    (h : isConserved st = true) (b2 : Nat) (hb : st.conservationBound ≤ b2) :
    isConserved { st with conservationBound := b2 } = true := by
  simp [isConserved] at h ⊢
  omega

/-- Lowering the factor sum preserves conservation (anti-monotone in sum). -/
theorem decreasing_sum_preserves_conservation (st : PrimeState)
    (h : isConserved st = true) (s2 : Nat) (hs : s2 ≤ st.primeFactorSum) :
    isConserved { st with primeFactorSum := s2 } = true := by
  simp [isConserved] at h ⊢
  omega

/-- A zero conservation bound rejects any positive factor sum. -/
theorem zero_bound_rejects_positive_sum (st : PrimeState) (h : st.primeFactorSum > 0) :
    isConserved { st with conservationBound := 0 } = false := by
  simp [isConserved]
  omega

/-! ## Conservation Gate Decision -/

/-- Canonical outcomes of the UOR conservation gate. -/
inductive ConservationDecision where
  | Seal -- prime factor sum within bound; asset transfer sealed
  | RejOverBound -- prime factor sum exceeds bound; transfer refused
  deriving Repr, DecidableEq

/-- The single conservation gate: seal exactly when the substance is within the
    conservation bound; otherwise fail closed with `RejOverBound`. -/
def evaluateConservationGate (st : PrimeState) : ConservationDecision :=
  if _h : isConserved st then
    ConservationDecision.Seal
  else
    ConservationDecision.RejOverBound

/-- The gate returns `Seal` exactly when conservation holds. -/
theorem gate_seal_iff_conserved (st : PrimeState) :
    evaluateConservationGate st = ConservationDecision.Seal ↔
      isConserved st = true := by
  by_cases h : isConserved st = true
  · simp [evaluateConservationGate, h]
  · have hf : isConserved st = false := by
      simp at h; exact h
    simp [evaluateConservationGate, hf]

/-- Soundness: a sealed transfer is conserved. -/
theorem seal_implies_conserved (st : PrimeState)
    (h : evaluateConservationGate st = ConservationDecision.Seal) :
    isConserved st = true := by
  exact (gate_seal_iff_conserved st).1 h

/-- Completeness: any conserved transfer is sealed. -/
theorem conserved_implies_seal (st : PrimeState) (h : isConserved st = true) :
    evaluateConservationGate st = ConservationDecision.Seal := by
  exact (gate_seal_iff_conserved st).2 h

/-- Fail-closed: an unconserved (over-bound) state is always rejected. -/
theorem over_bound_rejects_seal (st : PrimeState) (h : isConserved st = false) :
    evaluateConservationGate st = ConservationDecision.RejOverBound := by
  simp [evaluateConservationGate, h]

/-- A state with prime factor sum strictly above the bound is rejected. -/
theorem strict_over_bound_rejected (st : PrimeState)
    (h : st.conservationBound < st.primeFactorSum) :
    evaluateConservationGate st = ConservationDecision.RejOverBound := by
  have hnot : isConserved st = false := by
    simp [isConserved]; omega
  exact over_bound_rejects_seal st hnot

/-- Exact conservation yields a `Seal`. -/
theorem exact_conservation_seals (st : PrimeState)
    (h : st.primeFactorSum = st.conservationBound) :
    evaluateConservationGate st = ConservationDecision.Seal := by
  exact conserved_implies_seal st (exact_conservation_implies_conserved st h)

/-! ## Prime-Locked Geometry -/

/-- A state is prime-locked when its prime factor sum is itself prime.
    This ties L0 substance geometry to the prime index (ADR Computer of
    Trust linkage). -/
def isPrimeLocked (st : PrimeState) : Bool :=
  isPrime st.primeFactorSum

/-- A prime-locked state has positive substance. -/
theorem prime_locked_implies_positive (st : PrimeState)
    (h : isPrimeLocked st = true) :
    st.primeFactorSum > 0 := by
  unfold isPrimeLocked at h
  exact prime_positive st.primeFactorSum h

/-- A prime-locked state with a sufficient bound is conserved. -/
theorem prime_locked_and_sufficient_bound_conserved (st : PrimeState)
    (_hlock : isPrimeLocked st = true)
    (hb : st.primeFactorSum ≤ st.conservationBound) :
    isConserved st = true := by
  exact conservation_bound_verified st hb

/-- A prime factor sum of the prime `2` is conserved under any non-zero bound. -/
theorem prime_two_locked_conserved (st : PrimeState)
    (hb : 2 ≤ st.conservationBound) :
    isConserved { st with primeFactorSum := 2 } = true := by
  simp [isConserved]; omega

end Echonomics.UorPrimeGeometry
