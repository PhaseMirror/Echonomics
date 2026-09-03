# Echonomics: Social Physics, Governance & Financial Geometry Platform

![Build Status](https://img.shields.io/badge/Lean_4-v4.33.0--rc2-blue.svg)
![Rust Verification](https://img.shields.io/badge/Kani-Verified-brightgreen.svg)
![License](https://img.shields.io/badge/License-Lawful-purple.svg)

## Overview

**Echonomics** is a machine-checked social physics, civic governance, and financial geometry platform built within the Multiplicity Sovereign Core ecosystem. It formally converts empirical social physics and DUNA governance principles into machine-verifiable Architecture Decision Records (ADRs ADR-0001 through ADR-0021), canonical zero-Mathlib Lean 4 formal models, and high-performance Rust/Kani verification engines.

---

## Architectural Decision Records (ADR Index)

| ADR ID | Specification Title | Status | Primary Formal Invariant |
| :--- | :--- | :---: | :--- |
| **`ADR-0001`** | Hundian Occupancy Governance & Pauli Gate Priority | Completed | Pauli key $K = (\text{role}, \text{slot}, \text{period})$, G0–G5 fail-closed gates |
| **`ADR-0002`** | Citizen Gardens DUNA Constitutional Gate | Completed | DUNA quorum threshold ($\text{active} \times 100 \ge \text{total} \times \text{thresh}$) |
| **`ADR-0003`** | UOR Healthcare Nexus & L0 Prime Geometry | Completed | Prime-factor sum conservation bound ($\sum p_i \le \text{bound}$) |
| **`ADR-0004`** | Period-0 Energy Ledger Schema & Ground State | Completed | Separated ledgers $V_{\text{pair}}, V_{\text{nuc}}$, total energy $E = V_{\text{pair}} - V_{\text{nuc}}$ |
| **`ADR-0005`** | Ξ-Constitution & Ξ-License Integration | Completed | Conscious Sovereignty Layer $(\mathcal{N}, \mathcal{B}, \mathcal{S})$ and drift limit $\delta(t) \le \varepsilon(t)$ |
| **`ADR-0006`** | Lambda-Proof Smart Contracts & ZK Circuits | Completed | Local EVM smart contracts & Circom ZK proof receipts |
| **`ADR-0007`** | Hundian Occupancy Codebook v1 Specification | Completed | Pauli key allocation & derived multiplicity $M = n_{\text{unpaired}} + 1$ |
| **`ADR-0008`** | Hundian Period-0 Occupancy Runbook v1 Execution | Completed | Period-0 7-row transaction replay, `propose_vacate`, period status handling |
| **`ADR-0009`** | Hundian Revision and Forbidden Terms Deprecation | Completed | Strike retired terms (`MSC`, `1+2R`, reciprocity) from ledgers |
| **`ADR-0010`** | Citizen Gardens DUNA Governing Principles | Completed | Non-coercive participation & constitutional voting bounds |
| **`ADR-0011`** | Citizen Gardens System Model Specification v1.0 | Completed | Domain entity bindings & prime-decomposable identity |
| **`ADR-0012`** | Unified Civic Infrastructure Blueprint | Accepted | Healthcare care team ledgers & zero-knowledge attestation |
| **`ADR-0013`** | Multiplicity Social Physics Part 1 — Pauli Exclusion | Accepted | Slot capacity limit max 2 occupants and spin tags ($\alpha/\beta$) |
| **`ADR-0014`** | Multiplicity Social Physics Part 2 — Term-Order Gate | Accepted | Hund's First Rule Term-Order Gate ($U = 0$ for $\beta$ pairing) |
| **`ADR-0015`** | Multiplicity Social Physics Part 3 — Energy Ledgers | Accepted | Separated friction $V_{\text{pair}} \ge 0$ & attraction $V_{\text{nuc}} \ge 0$ |
| **`ADR-0016`** | Eight Virtues of Buurtzorg Self-Governing Care Model | Accepted | Self-governing team capacity upper bound (max 12 nurses) |
| **`ADR-0017`** | Buurtzorg Civic Infrastructure Integration Schema | Accepted | Care team mapping to DUNA governance nodes |
| **`ADR-0018`** | Buurtzorg Non-Coercive Coaching & Resolution | Accepted | Non-coercive conflict resolution and advisory coaching gates |
| **`ADR-0019`** | Trifecta Governance Tripartite Checks & Balances | Accepted | Tripartite 3-chamber signature verification (Exec, Legis, Judic) |
| **`ADR-0020`** | Network Protocol-Centric L1 Substrate & Consensus | Accepted | L1 spectral contractivity $\|G\|_1 < 1.0$ in $\mathbb{Q}$ |
| **`ADR-0021`** | Social Physics Technical Review Report | Accepted | Complete audit trail & review discrepancy resolution |

---

## Repository Structure

```text
packages/Echonomics/
├── Cargo.toml                         # Cargo workspace manifest
├── lakefile.lean                      # Lean 4 Lake build specification
├── lean-toolchain                     # Toolchain pin (v4.33.0-rc2)
├── contracts/                         # EVM Smart Contracts (LambdaIdentity, LambdaGovernor, etc.)
├── circuits/                          # Circom ZK Proof Circuits (ace.circom, PrimeCheck.circom, etc.)
├── docs/
│   └── adr/
│       └── proposed/                  # ADR-0001 through ADR-0021 specifications
├── lean/
│   └── Echonomics/
│       ├── Core.lean                  # Core inductive types & ADR structures
│       ├── Proofs.lean                # Immutability & entailment theorems
│       ├── HundianOccupancy.lean      # Formal proofs for ADR-0001
│       ├── CivicDunaGate.lean         # Formal proofs for ADR-0002
│       ├── UorPrimeGeometry.lean      # Formal proofs for ADR-0003
│       ├── EnergyLedger.lean          # Formal proofs for ADR-0004
│       ├── XiConstitutionLicense.lean # Formal proofs for ADR-0005
│       ├── LambdaProof.lean           # Formal proofs for ADR-0006
│       ├── HundianCodebookRunbook.lean# Formal proofs for ADR-0007..0009
│       ├── CivicInfrastructureSpec.lean# Formal proofs for ADR-0010..0012
│       ├── SocialPhysicsParts.lean    # Formal proofs for ADR-0013..0015
│       ├── BuurtzorgModel.lean        # Formal proofs for ADR-0016..0018
│       ├── TrifectaProtocolReview.lean# Formal proofs for ADR-0019..0021
│       └── Test.lean                  # Executable test runner
└── rust/
    └── echonomics-engine/
        ├── Cargo.toml
        └── src/
            ├── lib.rs                 # Engine crate root
            ├── hundian.rs             # Gate evaluation & Kani proofs (ADR-0001)
            ├── duna.rs                # Quorum engine & Kani proofs (ADR-0002)
            ├── uor_geometry.rs        # Conservation engine & Kani proofs (ADR-0003)
            ├── energy.rs              # Energy minimization & Kani proofs (ADR-0004)
            ├── xi_constitution.rs     # CSL gate & Kani proofs (ADR-0005)
            ├── lambda_proof.rs        # Identity verifier & Kani proofs (ADR-0006)
            ├── hundian_codebook.rs    # Codebook state & Kani proofs (ADR-0007..0009)
            ├── civic_spec.rs          # Civic node state & Kani proofs (ADR-0010..0012)
            ├── social_physics.rs      # Social physics engine & Kani proofs (ADR-0013..0015)
            ├── buurtzorg.rs           # Buurtzorg team capacity & Kani proofs (ADR-0016..0018)
            └── trifecta_protocol.rs   # 3-Chamber consensus & Kani proofs (ADR-0019..0021)
```

---

## Build & Test Instructions

### 1. Compile & Test Lean 4 Formal Proof Suite
```bash
cd packages/Echonomics
lake build
lake exe TestDriver
```

### 2. Compile & Run Rust Engine Unit/Kani Tests
```bash
cd packages/Echonomics
cargo test
```

---

## Production Standards Verification Matrix

| Standard / Requirement | Status | Verification Reference |
| :--- | :---: | :--- |
| **Strict Hierarchy & ADR Structure** | **VERIFIED** | ADR-0001 through ADR-0021 under `docs/adr/accepted/` |
| **Zero-Mathlib Canonical Core** | **VERIFIED** | `lean/Core/` zero-Mathlib modules compile cleanly |
| **Kani Bounded Model Checking** | **VERIFIED** | `#[cfg(kani)]` proof harnesses in every Rust module |
| **Fail-Closed Execution** | **VERIFIED** | G0–G5 gate pipeline rejects invalid state transitions |
| **Separated Energy Ledgers** | **VERIFIED** | $E = V_{\text{pair}} - V_{\text{nuc}}$ with $V_{\text{pair}} \ge 0, V_{\text{nuc}} \ge 0$ |
| **EVM Smart Contracts & ZK Circuits** | **VERIFIED** | Hosted in `contracts/` and `circuits/` |
| **Automated CI/CD Integration** | **VERIFIED** | `.github/workflows/ci.yml` matrix runner |
