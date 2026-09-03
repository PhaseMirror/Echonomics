import Echonomics.Core

/-!
# Echonomics.LambdaProof — ADR-0006: Lambda-Proof Smart Contracts & ZK Circuits

Faithful, machine-checked formalization of ADR-0006's Decision 3 (binding
Lambda identity commitments and ZK verification predicates), grounded in the
physically hosted artifacts:

- The on-tree **PrimeCheck.circom** circuit accepts a `prime` as "prime enough"
  when it is *odd and greater than three* (`isPrime = gt3.out * isOdd`). We
  formalize exactly that predicate (`primeCandidate`), and call out its
  documented limitation: it is a demo circuit and accepts composites such as
  `9, 15, 21`; production deployments must use Miller–Rabin
  (`circuits/` NOTE, and `UorPrimeGeometry.isPrime`).
- The on-tree **DriftBound.circom** circuit enforces
  `10·δ ≤ 3·ξ` (equivalently `δ ≤ 0.3·ξ`, implemented as `10·δ < 3·ξ + 1`).
  This is the in-circuit realization of ADR-0005's Lawful Recursion drift
  bound with `ε = 0.3`.
- The composite **LambdaProof** certificate binds an identity commitment, a
  bounded drift, an anchored seat-log hash, and a ZK attestation. Verification
  is fail-closed: any missing ingredient rejects the proof.

The model is deliberately minimal yet extensible: the ZK circuit constraints
are represented by their mathematical deciding predicates (parity, order,
linear bound) rather than a full Circom AST interpreter, matching the
production mandate to bind proof *outcomes* while keeping soundness proofs
tractable.
-/

namespace Echonomics.LambdaProof

open Echonomics.Core

/-! ## ADR-0006 Record -/

/-- ADR-0006 declaration. -/
def adr0006 : ADR := {
  id := 6,
  title := "Integration of Lambda-Proof Smart Contracts and ZK Circuits",
  status := ADRStatus.Accepted,
  context := "Echonomics requires local integration of EVM smart contracts and Circom ZK proof circuits.",
  decision := "Locally host contracts and circuits under Echonomics while binding identity and proof predicates in Lean and Rust/Kani.",
  consequences := ["Machine-checked ZK receipt verification", "EVM anchoring for seating logs",
    "Fail-closed identity and drift predicates"],
  supersedes := none,
  links := []
}

/-! ## Lambda Identity Commitment -/

/-- A Lambda identity commitment. `primeSalt` is the prime candidate committed
    by the identity; `isVerified` records whether it has been vetted. -/
structure LambdaIdentityCommitment where
  identityId : Nat
  primeSalt : Nat
  isVerified : Bool
  deriving Repr, DecidableEq

/-! ## PrimeCheck.circom Predicate -/

/-- The on-tree `PrimeCheck.circom` deciding predicate: `n` is odd. This is
    the demo circuit's LSB check (`bits.out[0] == 1`). -/
def isOdd (n : Nat) : Bool := decide (n % 2 = 1)

/-- The on-tree `PrimeCheck.circom` "prime candidate" predicate:
    `isPrime = gt3.out * isOdd`, i.e. `n > 3` and `n` odd.

    ⚠️ Documented limitation (mirrors the circuit): this is NOT cryptographically
    secure — composites such as `9, 15, 21` pass. Production deployments use
    Miller–Rabin (`isPrime` in `Echonomics.UorPrimeGeometry`). -/
def primeCandidate (n : Nat) : Bool :=
  decide (3 < n) && isOdd n

/-- `primeCandidate` is exactly "odd and greater than three". -/
theorem prime_candidate_iff (n : Nat) :
    primeCandidate n = true ↔ 3 < n ∧ n % 2 = 1 := by
  simp [primeCandidate, isOdd]

/-- Soundness: a passing `PrimeCheck` entails the candidate is odd and > 3. -/
theorem prime_candidate_sound (n : Nat) (h : primeCandidate n = true) :
    3 < n ∧ n % 2 = 1 :=
  (prime_candidate_iff n).1 h

/-- Completeness: an odd value greater than three passes `PrimeCheck`. -/
theorem prime_candidate_complete (n : Nat) (hgt : 3 < n) (hodd : n % 2 = 1) :
    primeCandidate n = true :=
  (prime_candidate_iff n).2 ⟨hgt, hodd⟩

/-- Fail-closed: a value at most three never passes `PrimeCheck`. -/
theorem prime_candidate_fail_closed_on_small (n : Nat) (h : n ≤ 3) :
    primeCandidate n = false := by
  have hnot : ¬ 3 < n := by omega
  simp [primeCandidate, isOdd, decide_eq_false hnot]

/-- Fail-closed: an even value never passes `PrimeCheck`. -/
theorem prime_candidate_fail_closed_on_even (n : Nat) (h : n % 2 = 0) :
    primeCandidate n = false := by
  simp [primeCandidate, isOdd, h]

/-- Concrete fail-closed: `2` is never a `PrimeCheck` candidate. -/
theorem prime_candidate_of_2_false : primeCandidate 2 = false := by
  native_decide

/-- Concrete fail-closed: `4` is never a `PrimeCheck` candidate (not odd). -/
theorem prime_candidate_of_4_false : primeCandidate 4 = false := by
  native_decide

/-- Documented limitation of the demo `PrimeCheck.circom`: the odd composite
    `9` passes. This matches the circuit's own warning and motivates the
    Miller–Rabin upgrade for production. Presented as a *known acceptance of
    a composite*, not a soundness claim. -/
theorem prime_candidate_of_9_true : primeCandidate 9 = true := by
  native_decide

/-- Concrete positive: an odd prime above three passes `PrimeCheck`. -/
theorem prime_candidate_of_1009_true : primeCandidate 1009 = true := by
  native_decide

/-! ## DriftBound.circom Predicate -/

/-- The on-tree `DriftBound.circom` deciding predicate: `10·δ ≤ 3·ξ`
    (equiv. `δ ≤ 0.3·ξ`, `ε = 0.3`). Heads off temporal-manipulation / drift
    attacks by bounding drift relative to the state norm proxy `ξ`. -/
def driftBoundOk (delta xi : Nat) : Bool := decide (10 * delta ≤ 3 * xi)

/-- `driftBoundOk` is exactly the linear bound `10·δ ≤ 3·ξ`. -/
theorem drift_bound_ok_iff (delta xi : Nat) :
    driftBoundOk delta xi = true ↔ 10 * delta ≤ 3 * xi := by
  simp [driftBoundOk]

/-- Soundness: a passing `DriftBound` entails `10·δ ≤ 3·ξ`. -/
theorem drift_bound_ok_sound (delta xi : Nat) (h : driftBoundOk delta xi = true) :
    10 * delta ≤ 3 * xi :=
  (drift_bound_ok_iff delta xi).1 h

/-- Completeness: a drift within `10·δ ≤ 3·ξ` passes `DriftBound`. -/
theorem drift_bound_ok_complete (delta xi : Nat) (h : 10 * delta ≤ 3 * xi) :
    driftBoundOk delta xi = true :=
  (drift_bound_ok_iff delta xi).2 h

/-- The circuit implements the bound as `10·δ < 3·ξ + 1`, which in ℕ equals
    `10·δ ≤ 3·ξ`. -/
theorem drift_bound_ok_iff_lt_succ (delta xi : Nat) :
    driftBoundOk delta xi = true ↔ 10 * delta < 3 * xi + 1 := by
  rw [drift_bound_ok_iff]
  omega

/-- Fail-closed: a drift exceeding `10·δ ≤ 3·ξ` is rejected by the circuit. -/
theorem drift_bound_ok_fail_closed (delta xi : Nat) (h : 3 * xi < 10 * delta) :
    driftBoundOk delta xi = false := by
  have hnot : ¬ 10 * delta ≤ 3 * xi := by omega
  simp [driftBoundOk, decide_eq_false hnot]

/-- Concrete pass: `δ = 1, ξ = 10` satisfies `10 ≤ 30`. -/
theorem drift_bound_ok_1_10_true : driftBoundOk 1 10 = true := by
  native_decide

/-- Concrete fail: `δ = 5, ξ = 2` violates `50 ≤ 6` and is rejected. -/
theorem drift_bound_ok_5_2_false : driftBoundOk 5 2 = false := by
  native_decide

/-! ## Composite LambdaProof Certificate -/

/-- A certified Lambda identity must be vetted and carry a `PrimeCheck`-valid
    salt (reusing the on-tree circuit predicate). -/
def isIdentityLawful (idCommit : LambdaIdentityCommitment) : Bool :=
  idCommit.isVerified && primeCandidate idCommit.primeSalt

/-- Identity lawfulness entails vetting and a `PrimeCheck`-valid salt. -/
theorem identity_lawful_sound (idC : LambdaIdentityCommitment) (h : isIdentityLawful idC = true) :
    idC.isVerified = true ∧ primeCandidate idC.primeSalt = true := by
  simp [isIdentityLawful] at h
  exact h

/-- A vetted identity with a `PrimeCheck`-valid salt is lawful. -/
theorem identity_lawful_complete (idC : LambdaIdentityCommitment)
    (hv : idC.isVerified = true) (hp : primeCandidate idC.primeSalt = true) :
    isIdentityLawful idC = true := by
  simp [isIdentityLawful, hv, hp]

/-- Fail-closed: an un-vetted identity is not lawful. -/
theorem identity_lawful_fails_on_unverified (idC : LambdaIdentityCommitment) (h : idC.isVerified = false) :
    isIdentityLawful idC = false := by
  simp [isIdentityLawful, h]

/-- Fail-closed: an even salt (rejected by `PrimeCheck`) is not lawful. -/
theorem identity_lawful_fails_on_even_salt (idC : LambdaIdentityCommitment) (h : idC.primeSalt % 2 = 0) :
    isIdentityLawful idC = false := by
  have hnc : primeCandidate idC.primeSalt = false :=
    prime_candidate_fail_closed_on_even idC.primeSalt h
  simp [isIdentityLawful, hnc]

/-- Fail-closed: a salt at most three (rejected by `PrimeCheck`) is not lawful. -/
theorem identity_lawful_fails_on_small_salt (idC : LambdaIdentityCommitment) (h : idC.primeSalt ≤ 3) :
    isIdentityLawful idC = false := by
  have hnc : primeCandidate idC.primeSalt = false :=
    prime_candidate_fail_closed_on_small idC.primeSalt h
  simp [isIdentityLawful, hnc]

/-- A composite Lambda proof: the identity commitment, the drift pair feeding
    `DriftBound`, the seat-log hash anchored to an EVM anchor, and a ZK
    attestation flag. -/
structure LambdaProof where
  identity : LambdaIdentityCommitment
  driftDelta : Nat
  driftXi : Nat
  seatLogHash : Nat
  zkAttested : Bool
  deriving Repr, DecidableEq

/-- A Lambda proof verifies if and only if the identity is lawful, the drift is
    circuit-bounded, the seat log is anchored (non-zero hash), and the ZK
    attestation is present — all binding requirements of ADR-0006 Decision 3. -/
def isLambdaProofVerified (pf : LambdaProof) : Bool :=
  isIdentityLawful pf.identity && driftBoundOk pf.driftDelta pf.driftXi &&
    decide (0 < pf.seatLogHash) && pf.zkAttested

/-- Soundness: a verified proof has a lawful identity. -/
theorem lambda_proof_verified_implies_identity_lawful {pf : LambdaProof}
    (h : isLambdaProofVerified pf = true) : isIdentityLawful pf.identity = true := by
  simp [isLambdaProofVerified] at h
  exact h.1.1.1

/-- Soundness: a verified proof has a `DriftBound`-bounded drift. -/
theorem lambda_proof_verified_implies_drift_bounded {pf : LambdaProof}
    (h : isLambdaProofVerified pf = true) : driftBoundOk pf.driftDelta pf.driftXi = true := by
  simp [isLambdaProofVerified] at h
  exact h.1.1.2

/-- Soundness: a verified proof anchors a non-zero seat-log hash. -/
theorem lambda_proof_verified_implies_seat_log_anchored {pf : LambdaProof}
    (h : isLambdaProofVerified pf = true) : 0 < pf.seatLogHash := by
  simp [isLambdaProofVerified] at h
  exact h.1.2

/-- Soundness: a verified proof carries a ZK attestation. -/
theorem lambda_proof_verified_requires_zk_attestation {pf : LambdaProof}
    (h : isLambdaProofVerified pf = true) : pf.zkAttested = true := by
  simp [isLambdaProofVerified] at h
  exact h.2

/-- Fail-closed: an unlawful identity denies proof verification. -/
theorem lambda_proof_denied_on_unlawful_identity {pf : LambdaProof}
    (h : isIdentityLawful pf.identity = false) : isLambdaProofVerified pf = false := by
  simp [isLambdaProofVerified, h]

/-- Fail-closed: an un-vetted identity denies proof verification. -/
theorem lambda_proof_denied_on_unverified_identity {pf : LambdaProof}
    (h : pf.identity.isVerified = false) : isLambdaProofVerified pf = false := by
  exact lambda_proof_denied_on_unlawful_identity (identity_lawful_fails_on_unverified pf.identity h)

/-- Fail-closed: a drift violating `DriftBound` denies proof verification. -/
theorem lambda_proof_denied_on_drift_violation {pf : LambdaProof}
    (h : driftBoundOk pf.driftDelta pf.driftXi = false) : isLambdaProofVerified pf = false := by
  simp [isLambdaProofVerified, h]

/-- Fail-closed: a missing ZK attestation denies proof verification. -/
theorem lambda_proof_denied_without_zk_attestation {pf : LambdaProof}
    (h : pf.zkAttested = false) : isLambdaProofVerified pf = false := by
  simp [isLambdaProofVerified, h]

/-- Completeness: a lawful identity with a bounded drift, an anchored seat log,
    and a ZK attestation yields a verified Lambda proof. -/
theorem lambda_proof_verified_when_all_present (idC : LambdaIdentityCommitment)
    (delta xi seatLog : Nat) (hId : isIdentityLawful idC = true)
    (hDr : driftBoundOk delta xi = true) (hLog : 0 < seatLog) :
    isLambdaProofVerified
      { identity := idC, driftDelta := delta, driftXi := xi,
        seatLogHash := seatLog, zkAttested := true } = true := by
  simp [isLambdaProofVerified, hId, hDr, hLog]

end Echonomics.LambdaProof
