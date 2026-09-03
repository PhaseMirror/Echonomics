# Ξchonomics: Social Physics, Governance & Financial Geometry Platform

![Build Status](https://img.shields.io/badge/Lean_4-v4.33.0--rc2-blue.svg)
![Rust Verification](https://img.shields.io/badge/Kani-Verified-brightgreen.svg)
![License](https://img.shields.io/badge/License-Lawful-purple.svg)

## Overview

**Ξchonomics** is a machine-checked social physics, civic governance, and financial geometry platform built within the Multiplicity Sovereign Core ecosystem. It formally converts empirical social physics and DUNA governance principles into machine-verifiable Architecture Decision Records (ADRs), canonical zero-Mathlib Lean 4 formal models, and high-performance Rust/Kani verification engines.

---

## Architectural Principles & Core Pillars

### 1. Hundian Social Physics & Occupancy Governance (ADR-0001)
- **Pauli Key Capacity**: Slots are capacity-bound by key $K = (\text{role\_class}, \text{slot\_id}, \text{period\_id})$. `person_id` acts strictly as a particle label.
- **Fail-Closed Gate Priority**: Evaluated strictly through a 5-stage pipeline:
  $$\text{G0 (UNKNOWN\_CLASS)} \to \text{G1 (DUALHAT)} \to \text{G2 (PAULI)} \to \text{G3 (TERM\_ORDER)} \to \text{G4/G5 (OK\_*)}$$
- **Term-Order Gate (Hund's First Rule)**: Degenerate role pairing ($\beta$ spin) is permitted **if and only if** all empty slots $U$ in degenerate set $D$ equal 0 ($U = 0$). Attempting a second occupant when $U > 0$ returns `REJ_TERM_ORDER`.
- **Derived Multiplicity**: Multiplicity $M = n_{\text{unpaired}} + 1$. Half-fill ($N = |D|$) yields maximum multiplicity $M = |D| + 1$; full-fill closed shell yields $M = 1$ (singlet state).

### 2. Citizen Gardens DUNA Constitutional Gate (ADR-0002)
- Formally enforces Decentralized Unincorporated Nonprofit Association (DUNA) quorum validation $(\text{votes\_for} + \text{votes\_against} \ge \text{quorum\_threshold})$ and constitutional vote checks $(\text{votes\_for} > \text{votes\_against})$ prior to state transaction anchoring.

### 3. UOR Healthcare Nexus & L0 Prime Geometry (ADR-0003)
- Binds asset transfers and healthcare substance ledgers to prime-factor conservation predicates ($\text{prime\_factor\_sum} \le \text{conservation\_bound}$).

### 4. Period-0 Energy Ledger Schema (ADR-0004)
- **Separated Ledgers**: Pairwise friction $V_{\text{pair}} \ge 0$ and nuclear purpose attraction $V_{\text{nuc}} \ge 0$ are maintained on independent, uncombined ledgers.
- **Energy Formulation**: Total system energy $E = V_{\text{pair}} - V_{\text{nuc}}$.
- **Ground State Principle**: Ground state is the occupancy pattern minimizing total energy $E$ at fixed headcount $N$, degenerate set $D$, and period $P$.

---

## Repository Structure

```text
packages/Echonomics/
├── Cargo.toml                         # Cargo workspace manifest
├── lakefile.lean                      # Lean 4 Lake build specification
├── lean-toolchain                     # Toolchain pin (v4.33.0-rc2)
├── docs/
│   └── adr/
│       └── proposed/
│           ├── ADR-0001-Hundian-Occupancy-Governance.md
│           ├── ADR-0002-Civic-Infrastructure-DUNA-Constitutional-Gate.md
│           ├── ADR-0003-UOR-Prime-Geometry-Substance-Nexus.md
│           └── ADR-0004-Period-0-Energy-Ledger-Schema.md
├── lean/
│   └── Echonomics/
│       ├── Core.lean                  # Core inductive types & ADR structures
│       ├── Proofs.lean                # Immutability & entailment theorems
│       ├── HundianOccupancy.lean      # Lean 4 formal proofs for ADR-0001
│       ├── CivicDunaGate.lean         # Lean 4 formal proofs for ADR-0002
│       ├── UorPrimeGeometry.lean      # Lean 4 formal proofs for ADR-0003
│       ├── EnergyLedger.lean          # Lean 4 formal proofs for ADR-0004
│       └── Test.lean                  # Lake test driver
└── rust/
    └── echonomics-engine/
        ├── Cargo.toml
        └── src/
            ├── lib.rs                 # Engine crate root
            ├── hundian.rs             # HundianState gate evaluation & Kani proofs
            ├── duna.rs                # DunaGovernance quorum engine & Kani proofs
            ├── uor_geometry.rs        # PrimeGeometry conservation engine & Kani proofs
            └── energy.rs              # EnergyLedgerState minimization & Kani proofs
```

---

## Build & Test Instructions

### 1. Prerequisites
- Lean 4 toolchain (`elan` / `leanprover/lean4:v4.33.0-rc2`)
- Rust toolchain (`cargo` 1.75+)

### 2. Compile & Test Lean 4 Formal Proofs
```bash
cd packages/Echonomics
lake build
lake exe TestDriver
```

### 3. Compile & Run Rust Engine Unit/Kani Tests
```bash
cd packages/Echonomics
cargo test
```

---

## Verification Evidence

```text
=== Executing Echonomics Lean 4 Formal Test Suite ===
✓ [PASS] Echonomics ADR-0001: Half-fill max multiplicity M = |D| + 1 verified
✓ [PASS] Echonomics ADR-0001: Pauli exclusion 3rd occupant rejection verified
✓ [PASS] Echonomics ADR-0001: Non-degenerate second occupant OK_HIERARCHY verified
✓ [PASS] Echonomics ADR-0002: DUNA Constitutional Quorum & Vote Gate verified
✓ [PASS] Echonomics ADR-0003: UOR Prime Geometry Conservation Bound verified
✓ [PASS] Echonomics ADR-0004: Energy Ledger E = V_pair - V_nuc Ground State Minimization verified
=== All Echonomics Formal Lean 4 Tests Passed Cleanly ===

running 5 tests
test duna::tests::test_duna_governance_pass ... ok
test energy::tests::test_energy_ledger_ground_state ... ok
test hundian::tests::test_canonical_seven_row_sequence ... ok
test hundian::tests::test_propose_vacate_and_closed_period ... ok
test uor_geometry::tests::test_prime_geometry_conservation ... ok

test result: ok. 5 passed; 0 failed; 0 ignored; 0 measured; 0 filtered out; finished in 0.00s
```
