---
id: ADR-0002
title: "ADR-0002: Citizen Gardens DUNA Governing Principles & Constitutional Gate"
status: Proposed
date: 2026-09-03
author: Phase Mirror Formal Methods Engineering & Echonomics Group
decider: Echonomics Architectural Review Board
lean_module: Echonomics.CivicDunaGate
rust_module: echonomics_engine::duna
tags:
  - echonomics
  - social-physics
  - formal-verification
---

# ADR-0002: Citizen Gardens DUNA Governing Principles & Constitutional Gate

- **Status**: Proposed
- **Date**: 2026-09-03
- **Author**: Phase Mirror Formal Methods Engineering & Echonomics Group
- **Decider**: Echonomics Architectural Review Board

## Context

Decentralized Unincorporated Nonprofit Association (DUNA) governing principles require formal quorum and vote validation gates before state transitions can be anchored.

## Decision

1. Quorum verification: $(\text{votes\_for} + \text{votes\_against}) \ge \text{quorum\_threshold}$.
2. Proposal approval: Quorum reached AND $\text{votes\_for} > \text{votes\_against}$.

## Consequences

- Machine-checked DUNA compliance.
- Fail-closed quorum verification.
