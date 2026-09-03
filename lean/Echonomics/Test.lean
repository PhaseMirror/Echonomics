import Echonomics.Core
import Echonomics.Proofs
import Echonomics.HundianOccupancy
import Echonomics.CivicDunaGate
import Echonomics.UorPrimeGeometry
import Echonomics.EnergyLedger

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

  IO.println "=== All Echonomics Formal Lean 4 Tests Passed Cleanly ==="
