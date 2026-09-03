# ADR-0001: Hundian Social Physics Occupancy Governance & Term-Order Gate

- **Status**: Proposed
- **Date**: 2026-09-03
- **Author**: Phase Mirror Formal Methods Engineering & Echonomics Group
- **Decider**: Echonomics Architectural Review Board

## Context

Echonomics social physics models participant role allocations onto degenerate role-class sets. Naive heuristics conflated mean survey reciprocity with spin $S$, allowed unconstrained multi-occupancy, and misidentified full-shell saturation as maximum multiplicity.

## Decision

1. Pauli key $K = (\text{role\_class}, \text{slot\_id}, \text{period\_id})$. `person_id` is particle label only.
2. 5-stage gate priority: G0 UNKNOWN_CLASS -> G1 DUALHAT -> G2 PAULI -> G3 TERM_ORDER -> G4/G5 OK_*.
3. Multiplicity $M = n_{\text{unpaired}} + 1$. Half-fill maximum multiplicity $M = |D| + 1$, full-fill closed shell singlet $M = 1$.

## Consequences

- Formally eliminates heuristic survey reciprocity.
- Machine-checked term-ordering gate.
