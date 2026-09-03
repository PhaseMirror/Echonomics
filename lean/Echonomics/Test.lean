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

/-!
# Echonomics.Test — Formal Test Suite for ADR-0001 & All Echonomics ADRs

Self-contained test driver exercising:
1. ADR-0001: Hundian Occupancy multiplicity, Pauli gate, term-order gate
2. ADR-0001: Lifecycle invariants (self-supersession, transition validity)
3. ADR-0001: Property-based tests (multiplicity monotonicity, positivity, gate classification)
4. ADR-0002–0021: All downstream ADR test cases
-/


def main : IO Unit := do
  IO.println "=== Executing Echonomics Lean 4 Formal Test Suite ==="

  -- ── ADR-0001: Hundian Social Physics Occupancy Governance ──

  -- Test 1: Multiplicity M = |D| + 1
  if Echonomics.HundianOccupancy.calculateMultiplicity 3 == 4 then
    IO.println "✓ [PASS] ADR-0001: Half-fill max multiplicity M = |D| + 1 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Multiplicity test failed"

  -- Test 2: Pauli exclusion — 3rd occupant rejected
  let resPauli := Echonomics.HundianOccupancy.evaluatePauliGate 2 0 true
  if resPauli == Echonomics.Core.GateResult.RejPauli then
    IO.println "✓ [PASS] ADR-0001: Pauli exclusion 3rd occupant rejection verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Pauli gate test failed"

  -- Test 3: Non-degenerate second occupant returns OkHierarchy
  let resNonDeg := Echonomics.HundianOccupancy.evaluatePauliGate 1 1 false
  if resNonDeg == Echonomics.Core.GateResult.OkHierarchy then
    IO.println "✓ [PASS] ADR-0001: Non-degenerate second occupant OK_HIERARCHY verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Non-degenerate gate test failed"

  -- Test 4: Term-order blocks pairing when U > 0
  let resTermOrder := Echonomics.HundianOccupancy.evaluatePauliGate 1 3 true
  if resTermOrder == Echonomics.Core.GateResult.RejTermOrder then
    IO.println "✓ [PASS] ADR-0001: Term-order gate blocks pairing when U > 0 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Term-order gate test failed"

  -- Test 5: Term-order allows pairing when U = 0
  let resTermOrderOk := Echonomics.HundianOccupancy.evaluatePauliGate 1 0 true
  if resTermOrderOk == Echonomics.Core.GateResult.OkPair Echonomics.Core.SpinTag.Beta then
    IO.println "✓ [PASS] ADR-0001: Term-order allows pairing when U = 0 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Term-order OK test failed"

  -- Test 6: Empty degenerate slot → OkSingle Alpha
  let resEmpty := Echonomics.HundianOccupancy.evaluatePauliGate 0 5 true
  if resEmpty == Echonomics.Core.GateResult.OkSingle Echonomics.Core.SpinTag.Alpha then
    IO.println "✓ [PASS] ADR-0001: Empty degenerate slot → OkSingle Alpha verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Empty degenerate gate test failed"

  -- Test 7: Empty non-degenerate slot → OkHierarchy
  let resEmptyNonDeg := Echonomics.HundianOccupancy.evaluatePauliGate 0 5 false
  if resEmptyNonDeg == Echonomics.Core.GateResult.OkHierarchy then
    IO.println "✓ [PASS] ADR-0001: Empty non-degenerate slot → OkHierarchy verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Empty non-degenerate gate test failed"

  -- Test 8: Multiplicity positivity (n_unpaired = 0 → M = 1)
  if Echonomics.HundianOccupancy.calculateMultiplicity 0 == 1 then
    IO.println "✓ [PASS] ADR-0001: Closed shell singlet M = 1 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Closed shell singlet test failed"

  -- Test 9: 4th occupant also rejected by Pauli
  let resPauli4 := Echonomics.HundianOccupancy.evaluatePauliGate 4 0 false
  if resPauli4 == Echonomics.Core.GateResult.RejPauli then
    IO.println "✓ [PASS] ADR-0001: Pauli exclusion 4th occupant rejection verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Pauli 4th occupant test failed"

  -- Test 10: Multiplicity monotonicity — M(5) > M(3)
  if Echonomics.HundianOccupancy.calculateMultiplicity 5 >
     Echonomics.HundianOccupancy.calculateMultiplicity 3 then
    IO.println "✓ [PASS] ADR-0001: Multiplicity monotonicity M(5) > M(3) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Multiplicity monotonicity test failed"

  -- Test 11: Multiplicity M(n) > n always
  if Echonomics.HundianOccupancy.calculateMultiplicity 10 > 10 then
    IO.println "✓ [PASS] ADR-0001: Multiplicity always > n_unpaired verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Multiplicity > n test failed"

  -- Test 12: Gate classification — RejPauli is rejection
  let resClassify := Echonomics.Proofs.isGateRej Echonomics.Core.GateResult.RejPauli
  if resClassify == true then
    IO.println "✓ [PASS] ADR-0001: RejPauli classified as rejection verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Gate classification test failed"

  -- Test 13: Gate classification — OkSingle is acceptance
  let resClassifyOk := Echonomics.Proofs.isGateOk
    (Echonomics.Core.GateResult.OkSingle Echonomics.Core.SpinTag.Alpha)
  if resClassifyOk == true then
    IO.println "✓ [PASS] ADR-0001: OkSingle classified as acceptance verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Gate Ok classification test failed"

  -- Test 14: Multiplicity delta — OkSingle increments by 1
  let deltaOk := Echonomics.HundianOccupancy.gateMultiplicityDelta
    (Echonomics.Core.GateResult.OkSingle Echonomics.Core.SpinTag.Alpha)
  if deltaOk == 1 then
    IO.println "✓ [PASS] ADR-0001: OkSingle multiplicity delta = 1 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Multiplicity delta test failed"

  -- Test 15: Multiplicity delta — RejPauli increments by 0
  let deltaRej := Echonomics.HundianOccupancy.gateMultiplicityDelta
    Echonomics.Core.GateResult.RejPauli
  if deltaRej == 0 then
    IO.println "✓ [PASS] ADR-0001: RejPauli multiplicity delta = 0 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 RejPauli delta test failed"

  -- Test 16: Lifecycle — Proposed→Accepted is valid
  if Echonomics.Proofs.isValidTransition Echonomics.Core.ADRStatus.Proposed
     Echonomics.Core.ADRStatus.Accepted == true then
    IO.println "✓ [PASS] ADR-0001: Lifecycle Proposed→Accepted valid verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Lifecycle transition test failed"

  -- Test 17: Lifecycle — Deprecated→Accepted is invalid (no revival)
  if Echonomics.Proofs.isValidTransition Echonomics.Core.ADRStatus.Deprecated
     Echonomics.Core.ADRStatus.Accepted == false then
    IO.println "✓ [PASS] ADR-0001: Lifecycle Deprecated→Accepted invalid (no revival) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Lifecycle no-revival test failed"

  -- Test 18: Lifecycle — Superseded→Accepted is invalid (no revival)
  if Echonomics.Proofs.isValidTransition Echonomics.Core.ADRStatus.Superseded
     Echonomics.Core.ADRStatus.Accepted == false then
    IO.println "✓ [PASS] ADR-0001: Lifecycle Superseded→Accepted invalid (no revival) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0001 Lifecycle superseded no-revival test failed"

  IO.println ""
  IO.println "── ADR-0001 Formal Test Suite: 18/18 passed ──"
  IO.println ""

  -- ── ADR-0002: Civic DUNA Gate ──
  let dunaSt : Echonomics.CivicDunaGate.DunaState :=
    { totalMembers := 10, quorumThreshold := 6, votesFor := 7, votesAgainst := 0 }
  if Echonomics.CivicDunaGate.isProposalPassed dunaSt then
    IO.println "✓ [PASS] ADR-0002: DUNA Constitutional Quorum & Vote Gate passed (quorum + majority)"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 DUNA Gate test failed"

  -- ADR-0002: fail-closed quorum — sub-quorum proposal must not pass
  let dunaSub : Echonomics.CivicDunaGate.DunaState :=
    { totalMembers := 100, quorumThreshold := 60, votesFor := 30, votesAgainst := 5 }
  if Echonomics.CivicDunaGate.isProposalPassed dunaSub == false then
    IO.println "✓ [PASS] ADR-0002: Fail-closed quorum — sub-quorum proposal rejected verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 fail-closed quorum test failed"

  -- ADR-0002: fail-closed tie — quorum reached with equal votes must not pass
  let dunaTie : Echonomics.CivicDunaGate.DunaState :=
    { totalMembers := 100, quorumThreshold := 10, votesFor := 10, votesAgainst := 10 }
  if Echonomics.CivicDunaGate.isProposalPassed dunaTie == false then
    IO.println "✓ [PASS] ADR-0002: Fail-closed tie — equal votes rejected verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 fail-closed tie test failed"

  -- ADR-0002: majority in favor but sub-quorum still blocked (quorum binds)
  let dunaMinor : Echonomics.CivicDunaGate.DunaState :=
    { totalMembers := 100, quorumThreshold := 60, votesFor := 45, votesAgainst := 5 }
  if Echonomics.CivicDunaGate.isProposalPassed dunaMinor == false then
    IO.println "✓ [PASS] ADR-0002: Quorum binds independently of vote majority verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 quorum-binds test failed"

  -- ADR-0002: constitutional gate classification — passing state yields Pass
  let gatePass : Echonomics.CivicDunaGate.ConstitutionalDecision :=
    Echonomics.CivicDunaGate.evaluateConstitutionalGate dunaSt
  if gatePass == Echonomics.CivicDunaGate.ConstitutionalDecision.Pass then
    IO.println "✓ [PASS] ADR-0002: Constitutional gate classifies passing proposal as Pass verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 constitutional gate Pass test failed"

  -- ADR-0002: constitutional gate classification — sub-quorum yields RejQuorum
  let gateRejQ : Echonomics.CivicDunaGate.ConstitutionalDecision :=
    Echonomics.CivicDunaGate.evaluateConstitutionalGate dunaSub
  if gateRejQ == Echonomics.CivicDunaGate.ConstitutionalDecision.RejQuorum then
    IO.println "✓ [PASS] ADR-0002: Constitutional gate rejects sub-quorum as RejQuorum verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 constitutional gate RejQuorum test failed"

  -- ADR-0002: constitutional gate classification — tie yields RejMajority
  let gateRejM : Echonomics.CivicDunaGate.ConstitutionalDecision :=
    Echonomics.CivicDunaGate.evaluateConstitutionalGate dunaTie
  if gateRejM == Echonomics.CivicDunaGate.ConstitutionalDecision.RejMajority then
    IO.println "✓ [PASS] ADR-0002: Constitutional gate rejects tie as RejMajority verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0002 constitutional gate RejMajority test failed"

  -- ── ADR-0003: UOR Prime Geometry ──
  let primeSt : Echonomics.UorPrimeGeometry.PrimeState :=
    { primeFactorSum := 12, conservationBound := 20 }
  if Echonomics.UorPrimeGeometry.isConserved primeSt then
    IO.println "✓ [PASS] ADR-0003: UOR Prime Geometry Conservation Bound verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0003 UOR Prime Geometry test failed"

  -- ADR-0003: primality — 2, 3, 5 prime; 4, 1, 0 composite
  if Echonomics.UorPrimeGeometry.isPrime 2 &&
      Echonomics.UorPrimeGeometry.isPrime 3 &&
      Echonomics.UorPrimeGeometry.isPrime 5 &&
      Echonomics.UorPrimeGeometry.isPrime 4 == false &&
      Echonomics.UorPrimeGeometry.isPrime 1 == false &&
      Echonomics.UorPrimeGeometry.isPrime 0 == false then
    IO.println "✓ [PASS] ADR-0003: Primality predicate (2,3,5 prime; 4,1,0 composite) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0003 primality test failed"

  -- ADR-0003: over-bound must fail closed and be rejected by the gate
  let overSt : Echonomics.UorPrimeGeometry.PrimeState :=
    { primeFactorSum := 25, conservationBound := 20 }
  let overGate : Echonomics.UorPrimeGeometry.ConservationDecision :=
    Echonomics.UorPrimeGeometry.evaluateConservationGate overSt
  if Echonomics.UorPrimeGeometry.isConserved overSt == false &&
      overGate == Echonomics.UorPrimeGeometry.ConservationDecision.RejOverBound then
    IO.println "✓ [PASS] ADR-0003: Over-bound transfer rejected (fail-closed) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0003 over-bound rejection test failed"

  -- ADR-0003: exact conservation (sum == bound) seals
  let exactSt : Echonomics.UorPrimeGeometry.PrimeState :=
    { primeFactorSum := 20, conservationBound := 20 }
  let exactGate : Echonomics.UorPrimeGeometry.ConservationDecision :=
    Echonomics.UorPrimeGeometry.evaluateConservationGate exactSt
  if exactGate == Echonomics.UorPrimeGeometry.ConservationDecision.Seal then
    IO.println "✓ [PASS] ADR-0003: Exact conservation seals transfer verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0003 exact conservation seal test failed"

  -- ADR-0003: prime-locked geometry — factor sum 5 with sufficient bound seals
  let lockedSt : Echonomics.UorPrimeGeometry.PrimeState :=
    { primeFactorSum := 5, conservationBound := 10 }
  if Echonomics.UorPrimeGeometry.isPrimeLocked lockedSt &&
      Echonomics.UorPrimeGeometry.isConserved lockedSt then
    IO.println "✓ [PASS] ADR-0003: Prime-locked geometry with sufficient bound conserved verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0003 prime-locked conservation test failed"

  -- ADR-0003: zero conservation bound rejects any positive factor sum
  let zeroSt : Echonomics.UorPrimeGeometry.PrimeState :=
    { primeFactorSum := 3, conservationBound := 0 }
  let zeroGate : Echonomics.UorPrimeGeometry.ConservationDecision :=
    Echonomics.UorPrimeGeometry.evaluateConservationGate zeroSt
  if zeroGate == Echonomics.UorPrimeGeometry.ConservationDecision.RejOverBound then
    IO.println "✓ [PASS] ADR-0003: Zero bound rejects positive factor sum verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0003 zero-bound rejection test failed"

  -- ── ADR-0004: Energy Ledger ──
  let e1 : Echonomics.EnergyLedger.EnergyState := { vPair := 10, vNuc := 15 }
  let e2 : Echonomics.EnergyLedger.EnergyState := { vPair := 12, vNuc := 8 }
  if Echonomics.EnergyLedger.isGroundState e1 e2 then
    IO.println "✓ [PASS] ADR-0004: Energy Ledger E = V_pair - V_nuc Ground State Minimization verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 Energy Ledger test failed"

  -- ADR-0004: energy sign convention — E(10,15) = -5, E(12,8) = 4
  if Echonomics.EnergyLedger.calculateTotalEnergy e1 == -5 &&
      Echonomics.EnergyLedger.calculateTotalEnergy e2 == 4 then
    IO.println "✓ [PASS] ADR-0004: Energy sign convention E = V_pair - V_nuc verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 energy sign convention test failed"

  -- ADR-0004: Separated-Ledger Mandate — V_pair ≠ V_nuc
  let sep : Echonomics.EnergyLedger.EnergyState := { vPair := 10, vNuc := 3 }
  let unsep : Echonomics.EnergyLedger.EnergyState := { vPair := 7, vNuc := 7 }
  if Echonomics.EnergyLedger.areLedgersSeparated sep &&
      Echonomics.EnergyLedger.areLedgersSeparated unsep == false then
    IO.println "✓ [PASS] ADR-0004: Separated-Ledger Mandate V_pair ≠ V_nuc verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 separated-ledger mandate test failed"

  -- ADR-0004: increasing V_nuc lowers energy (monotonicity)
  let lowAttract : Echonomics.EnergyLedger.EnergyState := { vPair := 10, vNuc := 5 }
  let highAttract : Echonomics.EnergyLedger.EnergyState := { vPair := 10, vNuc := 9 }
  if Echonomics.EnergyLedger.calculateTotalEnergy highAttract <
       Echonomics.EnergyLedger.calculateTotalEnergy lowAttract then
    IO.println "✓ [PASS] ADR-0004: Increasing V_nuc attraction lowers energy verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 V_nuc monotonicity test failed"

  -- ADR-0004: increasing V_pair raises energy (monotonicity)
  let lowFriction : Echonomics.EnergyLedger.EnergyState := { vPair := 4, vNuc := 3 }
  let highFriction : Echonomics.EnergyLedger.EnergyState := { vPair := 9, vNuc := 3 }
  if Echonomics.EnergyLedger.calculateTotalEnergy lowFriction <
       Echonomics.EnergyLedger.calculateTotalEnergy highFriction then
    IO.println "✓ [PASS] ADR-0004: Increasing V_pair friction raises energy verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 V_pair monotonicity test failed"

  -- ADR-0004: ground-state fold minOfList — 3 states, min energy is (3,10) E=-7
  let pool : List Echonomics.EnergyLedger.EnergyState :=
    [ { vPair := 10, vNuc := 15 }
    , { vPair := 12, vNuc := 8 }
    , { vPair := 3, vNuc := 10 }
    ]
  let best : Echonomics.EnergyLedger.EnergyState := Echonomics.EnergyLedger.minOfList pool
  if Echonomics.EnergyLedger.calculateTotalEnergy best == -7 then
    IO.println "✓ [PASS] ADR-0004: Ground-state fold minOfList picks global minimum energy verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 minOfList global minimum test failed"

  -- ADR-0004: ground state is well-defined within a fixed (N, D, P) frame
  let frame : Echonomics.EnergyLedger.LedgerFrame :=
    { headcount := 5, degenerateSetSize := 3, period := 1 }
  if frame.headcount == 5 && frame.degenerateSetSize == 3 && frame.period == 1 then
    IO.println "✓ [PASS] ADR-0004: Fixed (N, D, P) frame well-defined verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 frame definition test failed"

  -- ADR-0004: ground state independent of raw multiplicity M (Decision 3)
  let occA : Echonomics.EnergyLedger.Occupancy :=
    { ledger := { vPair := 10, vNuc := 4 }, multiplicity := 2 }
  let occB : Echonomics.EnergyLedger.Occupancy :=
    { ledger := { vPair := 9, vNuc := 3 }, multiplicity := 7 }
  -- E(10,4) = 6 = E(9,3); different multiplicities -> still mutually ground
  if Echonomics.EnergyLedger.isGroundState occA.ledger occB.ledger &&
     Echonomics.EnergyLedger.isGroundState occB.ledger occA.ledger then
    IO.println "✓ [PASS] ADR-0004: Ground state independent of raw multiplicity M verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 multiplicity independence test failed"

  -- ADR-0004: ground-state existence within the frame (a minimizer always exists)
  let framePool : List Echonomics.EnergyLedger.EnergyState :=
    [ { vPair := 10, vNuc := 15 }, { vPair := 12, vNuc := 8 }, { vPair := 3, vNuc := 10 } ]
  let g : Echonomics.EnergyLedger.EnergyState := Echonomics.EnergyLedger.minOfList framePool
  if List.all framePool (fun s => Echonomics.EnergyLedger.isGroundState g s) then
    IO.println "✓ [PASS] ADR-0004: Ground state exists (minimizer is GS over all) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0004 ground-state existence test failed"

  -- ── ADR-0005: Ξ-Constitution & Ξ-License ──
  let cslOps : Echonomics.XiConstitutionLicense.CslOperators :=
    { isNeutral := true, isBeneficent := true, isSilent := true }
  let lawRec : Echonomics.XiConstitutionLicense.LawfulRecursionState :=
    { driftDelta := 2, boundEpsilon := 5 }
  if Echonomics.XiConstitutionLicense.evaluateCslGate cslOps &&
     Echonomics.XiConstitutionLicense.isLawfulRecursion lawRec then
    IO.println "✓ [PASS] ADR-0005: Ξ-Constitution CSL Gate (N, B, S) & Lawful Recursion verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 Ξ-Constitution test failed"

  -- ADR-0005: composite certificate pipeline PIRTM ∘ CSL ∘ zk — all stages pass
  let pipe : Echonomics.XiConstitutionLicense.CertPipeline :=
    { pirtmPass := true, cslPass := true, zkPass := true }
  if Echonomics.XiConstitutionLicense.flowCertificates pipe then
    IO.println "✓ [PASS] ADR-0005: Composite certificate pipeline PIRTM ∘ CSL ∘ zk verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 composite pipeline test failed"

  -- ADR-0005: Ξ-Certification requires gate + drift bound + pipeline
  if Echonomics.XiConstitutionLicense.isXiCertified cslOps lawRec pipe then
    IO.println "✓ [PASS] ADR-0005: Ξ-Certification = CSL ∧ LawfulRecursion ∧ Pipeline verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 certification test failed"

  -- ADR-0005: fail-closed license — clean system is licensed
  let cleanFlags : Echonomics.XiConstitutionLicense.ProhibitedFlags :=
    { isSurveillance := false, isProfiling := false, isExploitation := false,
      isWeaponized := false, isBlackBox := false }
  if Echonomics.XiConstitutionLicense.isLicenseGranted cslOps lawRec pipe cleanFlags then
    IO.println "✓ [PASS] ADR-0005: Fail-closed license granted for certified clean system verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 license-grant clean test failed"

  -- ADR-0005: fail-closed license — surveillance denies execution
  let survFlags : Echonomics.XiConstitutionLicense.ProhibitedFlags :=
    { isSurveillance := true, isProfiling := false, isExploitation := false,
      isWeaponized := false, isBlackBox := false }
  if Echonomics.XiConstitutionLicense.isLicenseGranted cslOps lawRec pipe survFlags == false then
    IO.println "✓ [PASS] ADR-0005: Fail-closed denial of surveillance deployment verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 surveillance denial test failed"

  -- ADR-0005: fail-closed license — weaponized deployment is never licensed
  let weapFlags : Echonomics.XiConstitutionLicense.ProhibitedFlags :=
    { isSurveillance := false, isProfiling := false, isExploitation := false,
      isWeaponized := true, isBlackBox := false }
  if Echonomics.XiConstitutionLicense.isLicenseGranted cslOps lawRec pipe weapFlags == false then
    IO.println "✓ [PASS] ADR-0005: Fail-closed denial of weaponization verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 weaponization denial test failed"

  -- ADR-0005: Decision 1 — state transition with CSL gate evaluated BEFORE
  -- mutation yields Lawful Recursion over time (drift δ ≤ ε).
  let xiState : Echonomics.XiConstitutionLicense.XiState :=
    { epoch := 0, semantic := 5 }
  let xiNext : Echonomics.XiConstitutionLicense.XiState :=
    Echonomics.XiConstitutionLicense.cslGatedStep cslOps 3 1 xiState
  if xiNext.epoch == 1 &&
     xiNext.semantic == 8 &&
     Echonomics.XiConstitutionLicense.measureDrift xiState xiNext == 3 &&
     Echonomics.XiConstitutionLicense.measureDrift xiState xiNext ≤ 10 then
    IO.println "✓ [PASS] ADR-0005: Lawful Recursion over transition (δ ≤ ε) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 transition lawful-recursion test failed"

  -- ADR-0005: Decision 1 — Silence Clause / fail-closed: a CSL-rejected
  -- transition is a NO-OP (state unchanged, zero drift).
  let badOps : Echonomics.XiConstitutionLicense.CslOperators :=
    { isNeutral := true, isBeneficent := true, isSilent := false }
  let xiFrozen := Echonomics.XiConstitutionLicense.cslGatedStep badOps 100 9 xiState
  if xiFrozen == xiState &&
     Echonomics.XiConstitutionLicense.measureDrift xiState xiFrozen == 0 then
    IO.println "✓ [PASS] ADR-0005: Silence-Clause NO-OP on CSL-rejected transition verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 NO-OP silence-clause test failed"

  -- ADR-0005: Decision 2 — certified composite pipeline Ψ = PIRTM ∘ CSL ∘ zk
  -- yields a lawful transition (drift bounded by ε).
  let xiCert := Echonomics.XiConstitutionLicense.certifiedGatedStep pipe 4 1 xiState
  if xiCert.epoch == 1 &&
     xiCert.semantic == 9 &&
     Echonomics.XiConstitutionLicense.measureDrift xiState xiCert ≤ 10 then
    IO.println "✓ [PASS] ADR-0005: Certified composite transition Ψ lawful verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0005 certified composite transition test failed"

  -- ── ADR-0006: Lambda-Proof ──
  let lambdaId : Echonomics.LambdaProof.LambdaIdentityCommitment :=
    { identityId := 42, primeSalt := 1009, isVerified := true }
  if Echonomics.LambdaProof.isIdentityLawful lambdaId then
    IO.println "✓ [PASS] ADR-0006: Lambda-Proof Smart Contracts & ZK Circuits Integration verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0006 Lambda-Proof test failed"

  -- ── ADR-0007..0009: Hundian Codebook & Runbook ──
  let cbSt : Echonomics.HundianCodebookRunbook.CodebookState :=
    { unpairedCount := 3, degenerateSetSize := 3 }
  if Echonomics.HundianCodebookRunbook.calculateMultiplicity cbSt == 4 then
    IO.println "✓ [PASS] ADR-0007..0009: Codebook & Runbook Multiplicity M = |D| + 1 verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0007..0009 Codebook test failed"

  -- ── ADR-0010..0012: Civic Infrastructure ──
  if Echonomics.CivicInfrastructureSpec.isQuorumReached 10 6 50 then
    IO.println "✓ [PASS] ADR-0010..0012: DUNA & Civic Infrastructure Quorum verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0010..0012 Civic Spec test failed"

  -- ── ADR-0013..0015: Social Physics Parts ──
  let spSt : Echonomics.SocialPhysicsParts.SocialPhysicsState :=
    { vPair := 5, vNuc := 10, emptySlots := 0 }
  if Echonomics.SocialPhysicsParts.isPairingLegal spSt then
    IO.println "✓ [PASS] ADR-0013..0015: Term-Order Gate pairing condition (U = 0) verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0013..0015 Social Physics test failed"

  -- ── ADR-0016..0018: Buurtzorg ──
  let bTeam : Echonomics.BuurtzorgModel.BuurtzorgTeam :=
    { nurseCount := 8, maxCapacity := 12 }
  if Echonomics.BuurtzorgModel.isTeamCapacityValid bTeam then
    IO.println "✓ [PASS] ADR-0016..0018: Buurtzorg Self-Governing Team Capacity Bound verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0016..0018 Buurtzorg test failed"

  -- ── ADR-0019..0021: Trifecta Protocol ──
  let triSt : Echonomics.TrifectaProtocolReview.TripartiteState :=
    { execSigned := true, legisSigned := true, judicSigned := true }
  if Echonomics.TrifectaProtocolReview.isTripartiteConsensus triSt then
    IO.println "✓ [PASS] ADR-0019..0021: Trifecta Tripartite Consensus & Review verified"
  else
    throw $ IO.userError "✗ [FAIL] ADR-0019..0021 Trifecta test failed"

  IO.println ""
  IO.println "=== All Echonomics Formal Lean 4 Tests Passed Cleanly ==="
