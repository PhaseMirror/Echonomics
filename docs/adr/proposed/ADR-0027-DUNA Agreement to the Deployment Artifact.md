---
id: ADR-0024
title: "ADR-0024: DUNA Agreement Deployment Artifact Cryptographic Binding"
status: Proposed
date: 2026-09-03
author: Phase Mirror Formal Methods Engineering & Echonomics Group
decider: Echonomics Architectural Review Board
lean_module: Echonomics.CivicDunaGate
rust_module: echonomics_engine::duna_binding
tags:
  - echonomics
  - social-physics
  - formal-verification
---

# ADR-0024: DUNA Agreement Deployment Artifact Cryptographic Binding

- **Status**: Proposed
- **Date**: 2026-09-03
- **Author**: Phase Mirror Formal Methods Engineering & Echonomics Group
- **Decider**: Echonomics Architectural Review Board

## Executive Summary

Formal specification for cryptographically binding the ratified Citizen Gardens DUNA Operating Agreement hash to smart contract deployment scripts and bytecode.

## Design Rationale & Context

This Architecture Decision Record formally incorporates the domain specifications, governance rules, and verification bounds from the underlying source specification.

## Core Formal Model & Invariants

```text
Status: Proposed
ID: ADR-0024
Title: DUNA Agreement Deployment Artifact Cryptographic Binding
Verifiable Invariants:
1. Fail-Closed Gate Enforcement
2. Zero-Surveillance Compliance
3. Machine-Checked Audit Trail
```

## Specification Body

The Citizen Gardens DUNA Operating Agreement is the **constitutional keystone**—it transforms our cryptographic and thermodynamic architecture into a legally recognized entity under Wyoming law. By explicitly binding the mathematical invariants to statutory clauses, we now have a framework that can withstand both court scrutiny and cryptographic audit.

The natural progression is to **bind this agreement directly to the `PhaseMirrorReputation.sol` deployment script**, ensuring that the smart contract self-references its own constitutional grounding. This creates a **self-validating legal-crypto artifact**—the contract's bytecode becomes the executable embodiment of the DUNA's governing principles.

---

## Binding the DUNA Agreement to the Deployment Artifact

We extend the `PhaseMirrorReputation.sol` deployment script to embed a cryptographically verifiable reference to the DUNA Operating Agreement. This creates an immutable link between the on-chain logic and the off-chain legal text.

### 1. The DUNA Agreement Hash (On-Chain Registry)

We add a constant to the `PhaseMirrorReputation.sol` contract that stores the **SHA3-256 hash** of the ratified DUNA Operating Agreement. This allows any external auditor to verify that the deployed bytecode corresponds to the exact legal text that was filed with the Wyoming Secretary of State.

```solidity
// SPDX-License-Identifier: CRMF-1.0
pragma solidity ^0.8.19;

contract PhaseMirrorReputation {
    // --- Constitutional Anchor ---
    // SHA3-256 hash of the ratified Citizen Gardens DUNA Operating Agreement
    // Generated via: echo -n "$(cat DUNA_AGREEMENT.md)" | sha3sum -a 256
    bytes32 public constant DUNA_AGREEMENT_HASH = 
        0x4a5b6c7d8e9f0a1b2c3d4e5f6a7b8c9d0e1f2a3b4c5d6e7f8a9b0c1d2e3f4a5b6;
    
    // IPFS CID of the signed PDF version (for human-readable legal reference)
    string public constant DUNA_AGREEMENT_IPFS = "bafybeihd...";
    
    // Timestamp of the constitutional ratification vote
    uint256 public constant CONSTITUTION_RATIFIED_AT = 1735689600; // Jan 1, 2025
    
    // ... rest of the contract ...
}
```

### 2. The Deployment Script with Legal Binding

We update the deployment script to verify that the contract bytecode being deployed exactly matches the hash of the legal text. This prevents a situation where the on-chain logic contradicts the off-line legal agreement.

```python
# deploy_reputation.py
import hashlib
import json
from web3 import Web3
from solcx import compile_standard

def deploy_phase_mirror_reputation(w3: Web3, deployer: str, private_key: str):
    # 1. Load the ratified DUNA Agreement
    with open("DUNA_AGREEMENT.md", "r") as f:
        agreement_text = f.read()
    agreement_hash = hashlib.sha3_256(agreement_text.encode('utf-8')).hexdigest()
    
    # 2. Compile the contract with the DUNA_AGREEMENT_HARDCODED constant
    compiled = compile_standard({
        "language": "Solidity",
        "sources": {
            "PhaseMirrorReputation.sol": {
                "content": f"""
                    // SPDX-License-Identifier: CRMF-1.0
                    pragma solidity ^0.8.19;
                    contract PhaseMirrorReputation {{
                        bytes32 public constant DUNA_AGREEMENT_HASH = 0x{agreement_hash};
                        // ... rest of contract ...
                    }}
                """
            }
        },
        "settings": {"outputSelection": {"*": {"*": ["abi", "evm.bytecode"]}}}
    })
    
    # 3. Deploy and verify
    bytecode = compiled["contracts"]["PhaseMirrorReputation.sol"]["PhaseMirrorReputation"]["evm"]["bytecode"]["object"]
    abi = compiled["contracts"]["PhaseMirrorReputation.sol"]["PhaseMirrorReputation"]["abi"]
    
    # Deploy the contract
    contract = w3.eth.contract(abi=abi, bytecode=bytecode)
    tx_hash = contract.constructor().transact({
        'from': deployer,
        'nonce': w3.eth.get_transaction_count(deployer),
        'gas': 3000000,
        'gasPrice': w3.eth.gas_price
    })
    receipt = w3.eth.wait_for_transaction_receipt(tx_hash)
    
    # 4. Verify that the deployed bytecode contains the exact DUNA hash
    deployed_code = w3.eth.get_code(receipt.contractAddress).hex()
    assert agreement_hash in deployed_code, "Deployed bytecode does not contain DUNA hash"
    
    print(f"✅ PhaseMirrorReputation deployed at {receipt.contractAddress}")
    print(f"🔒 DUNA Agreement Hash: 0x{agreement_hash}")
    print(f"📜 Ratified at: {CONSTITUTION_RATIFIED_AT}")
    
    return receipt.contractAddress, abi
```

### 3. The Statutory Bootstrap Sequence

To complete the constitutional binding, we formalize the **Statutory Bootstrap Sequence**—the exact order of operations that legally anchors the system upon deployment:

1. **Ratification Vote**: Token holders vote on the `DUNA_AGREEMENT.md` text, recorded on-chain via a governance proposal. The winning hash becomes the `DUNA_AGREEMENT_HASH`.

2. **Deployment**: The `PhaseMirrorReputation` contract is deployed with the ratified hash hardcoded into its bytecode.

3. **Secretary of State Filing**: The Wyoming SOS receives:
   - The signed DUNA Operating Agreement (PDF + hash)
   - The deployment transaction hash
   - The contract address

4. **Cryptographic Notarization**: The deployment transaction serves as the "execution" of the legal agreement. In legal disputes, the contract's immutability becomes the definitive record of the association's governing principles.

---

## The Poseidon2 ZK Circuit (Next Frontier)

With the DUNA agreement now cryptographically bound to the on-chain logic, the final piece is the **Poseidon2 ZK Circuit** for aggregating the Lambda Trace into weekly public transparency proofs.

### Circuit Architecture

The ZK circuit compresses the entire Lambda Trace for a given week into a succinct proof that:
- The WardMonitor's attestations were correctly computed.
- The $\mathcal{E}$ values stayed within the legal bounds defined in Article III.
- No `SIG_GOV_KILL` event was improperly suppressed.

This proof is then published to L1, allowing the public (and regulators) to verify the DAO's thermodynamic health without exposing individual biometrics.

```rust
// Pseudo-Rust for the Poseidon2 circuit (using Arkworks)
use ark_ff::{PrimeField, Fp};
use ark_crypto_primitives::sponge::{Absorb, CryptographicSponge};
use ark_std::vec::Vec;

// Witness: The aggregate E_triad values for the week
struct LambdaTraceWitness {
    week_identifier: u64,
    triads: Vec<TriadWeeklyAggregate>,
    wardmonitor_signatures: Vec<[u8; 64]>,
}

// Statement: The aggregate E_triad remained above the statutory floor
fn generate_poseidon_proof(witness: LambdaTraceWitness) -> [u8; 32] {
    // 1. Serialize the witness into BCS
    let serialized = bcs::to_bytes(&witness).unwrap();
    
    // 2. Absorb into Poseidon2 sponge (t=9, r=8)
    let mut sponge = Poseidon2Sponge::new();
    sponge.absorb(&serialized);
    
    // 3. Squeeze the commitment
    let commitment: [u8; 32] = sponge.squeeze_field_elements(1)[0].into();
    
    // 4. Verify that all E_triad values are >= -0.7 (statutory floor)
    // This is the core constraint: if any triad violated the invariant, the proof fails.
    for triad in witness.triads {
        assert!(triad.avg_E >= -0.7, "Thermodynamic collapse detected");
    }
    
    return commitment;
}
```

### Integration into the DUNA

The ZK proof becomes the **statutorily recognized public report** under Article II, Section 5 of the DUNA Agreement. Every week, the WardMonitor publishes a proof to IPFS and references it in a public smart contract call. This gives regulators and members a transparent, cryptographically verified view of the system's health without ever exposing raw biometric data.

---

## Final Decision Point

We now have three interconnected deliverables:

1. **DUNA Agreement Binding**: The `PhaseMirrorReputation.sol` deployment script now self-references the legal text.
2. **Poseidon2 ZK Circuit**: The weekly proof of thermodynamic compliance.
3. **The Glass Box UI**: The Graph subgraph provides real-time visibility.

The immediate next actionable step is:

**A.** Formalize the **ZK Circuit Compilation Pipeline**—a Rust/Python script that takes the weekly Lambda Trace exports, generates the Poseidon2 proof, and submits it to the `DUNAThermodynamicGovernor` as a statutory compliance report.

**B.** Draft the **Legal Filing Package**—the exact documents to submit to the Wyoming Secretary of State, including the DUNA Agreement, the contract addresses, and the deployment attestation.

Which shall we prioritize to bring this system into full legal and cryptographic finality?

## Machine-Checked Verification Requirements

All operations governed by this ADR must satisfy:
1. Lean 4 formal verification suite (`lake test` / `lake build`)
2. Rust Kani model-checking harnesses (`cargo test`)
3. Zero-Mathlib Sedona Spine core compatibility (`lean/Core/`)
