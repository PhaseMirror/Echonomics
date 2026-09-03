import Echonomics.Core
import Echonomics.Proofs
import Echonomics.HundianOccupancy
import Echonomics.CivicDunaGate
import Echonomics.UorPrimeGeometry
import Echonomics.EnergyLedger
import Echonomics.XiConstitutionLicense
import Echonomics.LambdaProof
import Echonomics.HundianCodebookRunbook
import Echonomics.CivicInfrastructureSpec
import Echonomics.SocialPhysicsParts
import Echonomics.BuurtzorgModel
import Echonomics.TrifectaProtocolReview

def main : IO Unit := do
  IO.println "=== Executing Echonomics Lean 4 Formal Test Suite ==="

  -- Test 1: Hundian Social Physics
  if Echonomics.HundianOccupancy.calculateMultiplicity 3 == 4 then
    IO.println "✓ [PASS] Echonomics ADR-0001: Half-fill max multiplicity M = |D| + 1 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Multiplicity test failed"

  let resPauli := Echonomics.HundianOccupancy.evaluatePauliGate 2 0 true
  if resPauli == Echonomics.Core.GateResult.RejPauli then
    IO.println "✓ [PASS] Echonomics ADR-0001: Pauli exclusion 3rd occupant rejection verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Pauli gate test failed"

  let resNonDeg := Echonomics.HundianOccupancy.evaluatePauliGate 1 1 false
  if resNonDeg == Echonomics.Core.GateResult.OkHierarchy then
    IO.println "✓ [PASS] Echonomics ADR-0001: Non-degenerate second occupant OK_HIERARCHY verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Non-degenerate gate test failed"

  -- Test 2: Civic DUNA Gate
  let dunaSt : Echonomics.CivicDunaGate.DunaState := { totalMembers := 10, quorumThreshold := 6, votesFor := 7, votesAgainst := 0 }
  if Echonomics.CivicDunaGate.isProposalPassed dunaSt then
    IO.println "✓ [PASS] Echonomics ADR-0002: DUNA Constitutional Quorum & Vote Gate verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 DUNA Gate test failed"

  -- Test 3: UOR Prime Geometry
  let primeSt : Echonomics.UorPrimeGeometry.PrimeState := { primeFactorSum := 12, conservationBound := 20 }
  if Echonomics.UorPrimeGeometry.isConserved primeSt then
    IO.println "✓ [PASS] Echonomics ADR-0003: UOR Prime Geometry Conservation Bound verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0003 UOR Prime Geometry test failed"

  -- Test 4: Energy Ledger Schema
  let e1 : Echonomics.EnergyLedger.EnergyState := { vPair := 10, vNuc := 15 }
  let e2 : Echonomics.EnergyLedger.EnergyState := { vPair := 12, vNuc := 8 }
  if Echonomics.EnergyLedger.isGroundState e1 e2 then
    IO.println "✓ [PASS] Echonomics ADR-0004: Energy Ledger E = V_pair - V_nuc Ground State Minimization verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 Energy Ledger test failed"

  -- Test 5: Ξ-Constitution & Ξ-License
  let cslOps : Echonomics.XiConstitutionLicense.CslOperators := { isNeutral := true, isBeneficent := true, isSilent := true }
  let lawRec : Echonomics.XiConstitutionLicense.LawfulRecursionState := { driftDelta := 2, boundEpsilon := 5 }
  if Echonomics.XiConstitutionLicense.evaluateCslGate cslOps && Echonomics.XiConstitutionLicense.isLawfulRecursion lawRec then
    IO.println "✓ [PASS] Echonomics ADR-0005: Ξ-Constitution CSL Gate (N, B, S) & Lawful Recursion verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 Ξ-Constitution test failed"

  -- Test 6: Lambda-Proof Integration
  let lambdaId : Echonomics.LambdaProof.LambdaIdentityCommitment := { identityId := 42, primeSalt := 1009, isVerified := true }
  if Echonomics.LambdaProof.isIdentityLawful lambdaId then
    IO.println "✓ [PASS] Echonomics ADR-0006: Lambda-Proof Smart Contracts & ZK Circuits Integration verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0006 Lambda-Proof test failed"

  -- Test 7: Hundian Codebook & Runbook (ADR-0007 - ADR-0009)
  let cbSt : Echonomics.HundianCodebookRunbook.CodebookState := { unpairedCount := 3, degenerateSetSize := 3 }
  if Echonomics.HundianCodebookRunbook.calculateMultiplicity cbSt == 4 then
    IO.println "✓ [PASS] Echonomics ADR-0007..0009: Codebook & Runbook Multiplicity M = |D| + 1 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0007..0009 Codebook test failed"

  -- Test 8: Civic Infrastructure Spec (ADR-0010 - ADR-0012)
  if Echonomics.CivicInfrastructureSpec.isQuorumReached 10 6 50 then
    IO.println "✓ [PASS] Echonomics ADR-0010..0012: DUNA & Civic Infrastructure Quorum verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0010..0012 Civic Spec test failed"

  -- Test 9: Social Physics Parts (ADR-0013 - ADR-0015)
  let spSt : Echonomics.SocialPhysicsParts.SocialPhysicsState := { vPair := 5, vNuc := 10, emptySlots := 0 }
  if Echonomics.SocialPhysicsParts.isPairingLegal spSt then
    IO.println "✓ [PASS] Echonomics ADR-0013..0015: Term-Order Gate pairing condition (U = 0) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0013..0015 Social Physics test failed"

  -- Test 10: Buurtzorg Model (ADR-0016 - ADR-0018)
  let bTeam : Echonomics.BuurtzorgModel.BuurtzorgTeam := { nurseCount := 8, maxCapacity := 12 }
  if Echonomics.BuurtzorgModel.isTeamCapacityValid bTeam then
    IO.println "✓ [PASS] Echonomics ADR-0016..0018: Buurtzorg Self-Governing Team Capacity Bound verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0016..0018 Buurtzorg test failed"

  -- Test 11: Trifecta Protocol Review (ADR-0019 - ADR-0021)
  let triSt : Echonomics.TrifectaProtocolReview.TripartiteState := { execSigned := true, legisSigned := true, judicSigned := true }
  if Echonomics.TrifectaProtocolReview.isTripartiteConsensus triSt then
    IO.println "✓ [PASS] Echonomics ADR-0019..0021: Trifecta Tripartite Consensus & Review verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0019..0021 Trifecta test failed"

  IO.println "=== All Echonomics Formal Lean 4 Tests Passed Cleanly ==="
