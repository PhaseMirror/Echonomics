---
id: ADR-0009
title: "ADR-0009: Hundian Revision and Forbidden Terms Deprecation"
status: Completed
date: 2026-09-03
author: Phase Mirror Formal Methods Engineering & Echonomics Group
decider: Echonomics Architectural Review Board
lean_module: Echonomics.HundianCodebookRunbook
rust_module: echonomics_engine::hundian_codebook
tags:
  - echonomics
  - social-physics
  - formal-verification
---

# ADR-0009: Hundian Revision and Forbidden Terms Deprecation

- **Status**: Completed
- **Date**: 2026-09-03
- **Author**: Phase Mirror Formal Methods Engineering & Echonomics Group
- **Decider**: Echonomics Architectural Review Board

## Executive Summary

Retire unearned terms (MSC, 1+2R, reciprocity) and enforce strict zero-drift codebook alignment.

## Design Rationale & Context

This Architecture Decision Record formally incorporates the domain specifications, governance rules, and verification bounds from the underlying source specification.

## Core Formal Model & Invariants

```text
Status: Accepted
ID: ADR-0009
Title: Hundian Revision and Forbidden Terms Deprecation
Verifiable Invariants:
1. Fail-Closed Gate Enforcement
2. Zero-Surveillance Compliance
3. Machine-Checked Audit Trail
```

## Specification Body

HUNDIAN REVISION v1
Operational constraints that replace the Multiplicity Social Physics heuristic
Status: PROPOSED operating rules. Parent: phase-mirror-hund-multiplicity-social-physics-v1.docx. Classification: specification. Not a proof. Not an isomorphism claim. PhaseMirror judges labels. This document does not speak for Citizen Gardens or any token issuer.
Accepted from the operator: state vector, Pauli gate, degeneracy gate, spectroscopic S and M, single-occupancy-before-pair, split ledgers. One correction is mandatory. The Pauli key cannot include person. Two different people never share a 4-tuple that contains their ids. As written, the gate never fires.
# 0. Verdict
The listed constraints retire the heuristic if they run as gates on a log, not as prose in a paper.
They implement Map B (role-exclusion / term order) and the ledger split from Map C. Map A (crowding quadratic) remains the control model. Mean reciprocity is retired as S. V_MSC stays parked.
One operator sentence is malformed. Fix it before code. Particle identity is not a quantum number.
# 1. Mirror
Stated intent: replace the MSP Hund map with verifiable occupancy rules.
Operator text: system index (person, role-class, slot, period); reject shared full index arrays; register role-classes inside an entry-cost band ε; S = unpaired/2; M = 2S+1; single-occupancy of degenerate slots before dual-occupancy; track V_pair and V_nuc apart; ground state = occupancy pattern that minimizes their sum at fixed headcount.
Operating incentive to watch: calling the current roster “ground state” so a later token can read a high M. M is now an integer from the roster. That closes D4 from v1 if the roster is the only input.
# 2. Correction that makes the Pauli gate fire
## 2.1 Defect
Index_full = (person, role-class, slot, period). Person is unique. Two participants produce two different Index_full values even when they claim the same seat in the same period. “Share a full index array” is then impossible. The reject path is dead.
## 2.2 Binding
Split the tuple.
- Particle label P: person. Not part of the Pauli key.
- Pauli key K: (role-class, slot, period).
- Occupancy record R: (P, K) = (person, role-class, slot, period).
- Spin seat σ ∈ {α, β}. Capacity of one K is 1 before pairing is legal, 2 after, never 3.
Pauli Gate: reject a proposed R if K already holds its legal capacity for that period. Log the reject. Do not write the row.
Person-capacity gate (not Pauli, still required): reject a proposed R if P already occupies another K in the same period, unless a dual-hat waiver is open. Dual-hat is a social overload rule. It is not Hund pairing. Keep the codes separate.
## 2.3 Pairing versus dual-hat

| Event | What moves | Hund analogue | Code |
| --- | --- | --- | --- |
| Single fill | Empty K gets first P | First electron in an orbital | OK_SINGLE |
| Pair fill | Second P on the same K after all degenerate K in the set are singly filled | Opposite-spin pair in one orbital | OK_PAIR |
| Illegal pair | Second P on K while any degenerate K remains empty | Pairing before max multiplicity | REJ_TERM_ORDER |
| Overfill | Third P on K | Three electrons in one orbital | REJ_PAULI |
| Dual-hat | Same P on two K in one period | One particle in two orbitals | REJ_DUALHAT or OK_DUALHAT_WAIVER |
| Non-degenerate fill | K whose role-class is outside ε | Different configuration / different subshell | OK_HIERARCHY |


# 3. State vector
A period snapshot is the set of accepted occupancy records plus the role-class register.

| Field | Type | Rule | Owner |
| --- | --- | --- | --- |
| person | stable id | One human. Not a quantum number. | roster |
| role-class | pre-registered name | Must exist in the register before any fill | register |
| slot | id inside a role-class | Seat, shift, or post. Unique inside class+period | register |
| period | closed time interval | Configuration label. Do not mix periods in one M | clock |
| σ | α or β | Assigned by fill order. α first, β on pair | gate |
| degenerate | bool | True iff role-class inside ε-band | register |


Configuration C(period) = the multiset of occupied K inside one period, restricted to one degenerate set. Hund term-ordering compares occupancy patterns of the same C, not a 3-person triad against a 243-person village.
# 4. Gates
## 4.1 Degeneracy Gate
Before the period opens, publish the role-class register: name, entry-cost instrument, entry-cost value, ε-band, degenerate flag.
Entry-cost instrument is chosen once per trial and not changed mid-period. Allowed instruments: scheduled hours, stipend, required credential-hours. Status gossip is not an instrument.
Role-class i is degenerate with the set D if |c_i − median(c_D)| ≤ ε. Classes outside D fill by ordinary hierarchy (seniority, hire order, or other written non-Hund rule). Those fills do not increment unpaired count for M of D.
If ε is missing, D is empty. Hund rules are then off. Hierarchy is the only legal fill.
## 4.2 Pauli Gate
On each proposed transaction (P, role-class, slot, period):
- Resolve K. If role-class is unknown: REJ_UNKNOWN_CLASS.
- If period is open and K already has 2 occupants: REJ_PAULI.
- If K already has 1 occupant and pairing is not yet legal: REJ_TERM_ORDER.
- If K already has 1 occupant and pairing is legal: accept as σ = β, code OK_PAIR.
- If K is empty: accept as σ = α, code OK_SINGLE.
Every reject is an append-only row: timestamp, proposer, K, code, current occupants of K. Silence is a fail.
## 4.3 Term-order Gate
Let D be the degenerate set for this period. Let U be the number of K in D with occupancy 0. Pairing on any K in D is legal only when U = 0.
That is the whole of Hund’s first rule as an occupancy constraint. No survey. No reciprocity mean.
## 4.4 Person-capacity Gate
Default: one K per person per period. A dual-hat waiver, if used, is a named exception with an expiry inside the period. Waivers do not increase M. They are social debt, logged under OK_DUALHAT_WAIVER.
# 5. Multiplicity calculation
Retire S_reciprocity. Retire 1+2R = M as a Hund formula. If a three-phase token still needs 1, 2, 3, name it a phase token and keep it off this ledger.
For degenerate set D in period t:
- n_unpaired(t) = number of K in D with occupancy exactly 1.
- S(t) = n_unpaired(t) / 2.
- M(t) = 2S(t) + 1 = n_unpaired(t) + 1.
S is a half-integer or integer. M is a positive integer. Both are functions of the roster. If the roster and M disagree, the roster wins and M is recomputed.
Closed analogue inside D: every K in D has occupancy 2. Then n_unpaired = 0, S = 0, M = 1. That is a filled subshell of D. It is not “Stage 3” and it is not 243.
# 6. Worked filling table
D has 3 degenerate slots (p-subshell analogue). Capacity 6. Headcount N rises from 0 to 6. Term order enforced.

| N | occ pattern | n_unpaired | S | M | Legal next fill |
| --- | --- | --- | --- | --- | --- |
| 0 | 0 0 0 | 0 | 0 | 1 | any empty K, OK_SINGLE |
| 1 | 1 0 0 | 1 | 1/2 | 2 | an empty K only |
| 2 | 1 1 0 | 2 | 1 | 3 | the last empty K only |
| 3 | 1 1 1 | 3 | 3/2 | 4 | pair now legal on any K |
| 4 | 2 1 1 | 2 | 1 | 3 | pair a remaining single |
| 5 | 2 2 1 | 1 | 1/2 | 2 | pair the last single |
| 6 | 2 2 2 | 0 | 0 | 1 | REJ_PAULI on every K in D |


Maximum multiplicity is at N = 3, M = 4, half-filled. That is where Hund’s first rule says the high-spin term sits. It is not where a token wants saturation. If public copy calls N = 6 the “Hundian ground state” because the shell is full, it is using “ground” as “full,” which is chemistry slang for a closed shell and not the high-multiplicity term. Keep the words apart.
Ground in this revision is not max M. Ground is min E at fixed N. Max M is a constraint on how the N particles were seated, not the definition of lowest E.
# 7. Ledger split and ground state
## 7.1 Sign convention
The operator text says minimize the sum of V_pair and V_nuc. If both are recorded as positive magnitudes, that formula rewards less nucleus attraction. That inverts Map C and inverts Boyd’s surviving account.
Bind signs.
- V_pair ≥ 0. Pairwise friction. Conflict hours, blocked tasks, recorded interpersonal cost. Higher is worse.
- V_nuc ≥ 0. Nucleus attraction magnitude. Attendance to the written purpose artifacts, completed purpose-linked tasks. Higher is better.
- E = V_pair − V_nuc.
Ground state at fixed N, fixed D, fixed period: occupancy pattern that minimizes E among patterns that passed the gates. If the operator insists on a raw sum, V_nuc must be stored negative. Do not mix the two conventions in one trial.
## 7.2 Instruments
V_pair and V_nuc instruments are pre-registered before the period. Changing the scale after seeing E is a fail. Minimum viable instruments:
- V_pair: count of logged blockages + hours spent on interpersonal repair, same period.
- V_nuc: count of purpose-artifact touches that a second person can confirm.
Survey cohesion is not V_nuc. Survey cohesion is the retired S.
## 7.3 What ground is not
- Not M maximized.
- Not V_MSC = 3.
- Not Stage 3 equilibrium.
- Not unique by convexity assertion.
If two legal patterns tie on E, report both. Uniqueness is a result, not a theorem in this file.
# 8. Transaction schema
One append-only log. No updates in place. Corrections are reversing rows.

| Column | Required | Notes |
| --- | --- | --- |
| ts | yes | UTC |
| period_id | yes | Matches register |
| person_id | yes | Particle label |
| role_class | yes | Must be in register |
| slot_id | yes | Pauli key component |
| proposed_op | yes | FILL or VACATE |
| result | yes | OK_* or REJ_* |
| sigma | if OK | α or β |
| n_unpaired_after | if OK | Recomputed for D |
| S_after | if OK | n_unpaired/2 |
| M_after | if OK | n_unpaired+1 |
| occupants_before | yes | Ids already on K |


M is a derived column. A human-typed M that disagrees with n_unpaired is invalid and must be overwritten by recompute.
# 9. Claim hygiene for this revision

| Claim | Allowed now | Still forbidden |
| --- | --- | --- |
| S from unpaired slots | Yes, from the log | S from reciprocity surveys |
| M = 2S+1 | Yes, integer from the log | M as token phase 1/2/3 |
| Hund first-rule occupancy | Yes, as Term-order Gate | “Isomorphism with atomic physics” |
| Ground = min E at fixed N | Yes, after instruments exist | Ground = full shell or MSC = 3 |
| Degenerate set D | Yes, if ε published | All civic domains treated as one subshell |
| Lean / “zero sorry” | No | Any verification sentence without SHA + statement |
| Map A crowding | Control only | Calling Σ N_j² Hund |


# 10. Residual dissonance
R1. ε and the entry-cost instrument are still operator-chosen. A motivated operator can declare every role degenerate. Mitigation: freeze the register before T5 assignment. PhaseMirror scores whether ε was frozen, not whether ε is “true.”
R2. V_pair and V_nuc remain crude. The revision is verifiable as a seating rule even if the energy ledgers are weak. Do not advertise Boyd correspondence until the two series can move independently (v1 H2).
R3. Rules 2 and 3 (max L, J = |L±S|) are not in this revision. They stay unbound. Do not reprint them as Foundry law.
R4. 3^k grouping is not a subshell capacity. If Lifebushido continues, it continues as a grouping rule with its own tests.
R5. A closed D (M = 1, all paired) is stable in the chemistry slogan and low-multiplicity in the spectroscopic sense. Public copy that wants both “maximum multiplicity” and “full saturation” as the same virtue is still incoherent. Pick which state the operating group is optimizing.
# 11. Mapping to v1 tests

| v1 id | This revision | Pass metric |
| --- | --- | --- |
| T1 | §3 state vector + §8 log | Log columns exist and are used |
| T2 | §4.1 register with ε | ≥1 published D or explicit D empty |
| T3 | §5 derived S, M | M equals n_unpaired+1 on every OK row |
| T4 | §7 two instruments + E sign | Convention written once |
| T5 | Gates on live N∈{6,9,12} | Zero silent rejects. Term-order rejects visible |
| T6 | H2 on V_pair vs V_nuc | Series stored apart |
| T7 | Fill outside D uses OK_HIERARCHY | Those fills excluded from M(D) |
| T8 | Still closed | No Lean sentence in this file |


# 12. Owners and next actions

| Action | Owner | Metric | Due |
| --- | --- | --- | --- |
| Accept Pauli key K = (role-class, slot, period), person excluded | Ryan Van Gelder | Written yes/no | 7 days |
| Accept E = V_pair − V_nuc, or store V_nuc negative | Ryan Van Gelder | One convention, written | 7 days |
| State which target the group optimizes: max M at half-fill, or min E at fixed N | Operating group | One sentence | 7 days |
| Publish period-0 role-class register with ε | Operating group | File with costs and flags | 14 days |
| Open the occupancy log with reject codes from §4 | Operating group | First REJ or OK row written | 14 days |
| Judge public MSP copy against §9 forbidden column | PhaseMirror | Pass/fail list | After register exists |
| MSC / 1+2R language in Hund pages | Both | Removed or relabeled as phase token | Immediate |


# 13. Record
Parent protocol: artifacts/phase-mirror-hund-multiplicity-social-physics-v1.docx. Heuristic being replaced: MSP parts 1–3 Foundry State chapter, S as mean reciprocity, E_repulsion = Σ N_j² as “Theorem 1,” V_MSC = 1+S+C as ground-state meter.
This file binds occupancy and labels. It does not bind L, J, Lean, or a token.
Next artifact if the Pauli-key correction is accepted: occupancy codebook + period-0 register template.

## Machine-Checked Verification Requirements

All operations governed by this ADR must satisfy:
1. Lean 4 formal verification suite (`lake test` / `lake build`)
2. Rust Kani model-checking harnesses (`cargo test`)
3. Zero-Mathlib Sedona Spine core compatibility (`lean/Core/`)
