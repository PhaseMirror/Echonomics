PERIOD-0 OCCUPANCY RUNBOOK v1
Status: OPERATING RUNBOOK. Not a proof. Not a token spec. Not an energy ledger. PhaseMirror judges labels.
Companions: phase-mirror-hundian-revision-v1.docx; phase-mirror-hundian-occupancy-codebook-v1.docx; phase-mirror-hundian-period-0-register-v1.xlsx.
Canonical seating sequence is the corrected P0 log. The bob-pair row stays struck. dave is the pair occupant.
# 0. Bindings that do not move
- Pauli key K = (role_class, slot_id, period_id). person_id is not in K.
- Gate order: G0 UNKNOWN_CLASS → G1 DUALHAT → G2 PAULI → G3 TERM_ORDER → G4/G5 OK_*.
- First reject wins. Rejects write a log row. Silence is a fail.
- S = n_unpaired / 2. M = n_unpaired + 1. Both derived from accepted seats on D.
- Register freeze ≠ period close. Frozen register still accepts FILL and VACATE. Closed period accepts neither.
- OK_DUALHAT_WAIVER writes a seat. Occupancy changes. M is recomputed from occupancy. The waiver is not an M exemption.
# 1. Endpoints
Base path: /api/hund/period-0. Content-Type: application/json.

| Method | Path | Purpose |
| --- | --- | --- |
| POST | /propose_fill | Submit a FILL. Always appends a log row. |
| POST | /propose_vacate | Submit a VACATE reversing row. Always appends a log row. |
| GET | /log?period_id=P0 | Read append-only log for one period. |
| GET | /derived/{period_id} | Current n_unpaired, S, M, U for D. |


Authentication and rate limits are out of scope. An implementation may add them. They are not Hundian gates.
# 2. POST /propose_fill
## 2.1 Request
{
"period_id": "P0",
"person_id": "bob",
"role_class": "facilitation",
"slot_id": "fac-1",
"proposed_op": "FILL",
"waiver_id": null
}

| Field | Required | Rule |
| --- | --- | --- |
| period_id | yes | Must name a period that exists. Writes only if status is open. |
| person_id | yes | Particle label. Must exist in roster. |
| role_class | yes | Must exist in the frozen register for this period. |
| slot_id | yes | Must be attached to that role_class in this period. |
| proposed_op | yes | Must equal FILL. |
| waiver_id | no | Required only when G1 would otherwise reject and a waiver is open. |


## 2.2 Response, accept
{
"result": "OK_SINGLE",
"sigma": "ALPHA",
"ts": "2026-09-03T10:06:00Z",
"occupants_before": [],
"n_unpaired_after": 2,
"S_after": 1.0,
"M_after": 3,
"log_entry_id": "a1b2c3d4"
}
## 2.3 Response, reject
{
"result": "REJ_TERM_ORDER",
"sigma": null,
"ts": "2026-09-03T10:05:00Z",
"occupants_before": ["alice"],
"n_unpaired_after": null,
"S_after": null,
"M_after": null,
"reason": "Pairing illegal: degenerate slots fac-2, fac-3 empty",
"log_entry_id": "e5f6g7h8"
}
Every response includes log_entry_id. A request that is not logged did not happen.
# 3. Gate evaluation for propose_fill
Execute in this order. Stop at the first fail. Log that fail. Do not write a seat.

| Gate | Test | Fail | Notes |
| --- | --- | --- | --- |
| G0a | proposed_op is FILL | REJ_BAD_OP | Wrong verb on this path. |
| G0b | period exists and status is open | REJ_PERIOD_CLOSED | Frozen register is still open for seats. |
| G0c | person_id in roster | REJ_UNKNOWN_PERSON | Roster is not the Pauli key. |
| G0d | role_class and slot_id in register for this period | REJ_UNKNOWN_CLASS | Unknown slot uses the same code. |
| G1 | person does not already occupy a different K this period, unless waiver_id matches an open waiver | REJ_DUALHAT | Same K retry is not dual-hat; it falls to G2/G3. |
| G2 | occupants(K) < 2 | REJ_PAULI | Applies to D and non-D. Capacity is 2. |
| G3 | if K in D and occupants(K)=1 then U=0 | REJ_TERM_ORDER | U counts empty K in D from accepted rows only. |
| G4 | if K not in D, accept | — | Code OK_HIERARCHY. sigma null. Not a Hund pair. |
| G5 | if K in D and occupants=0 → OK_SINGLE ALPHA; occupants=1 and U=0 → OK_PAIR BETA | — | If G1 passed only because of waiver, code is OK_DUALHAT_WAIVER. Seat is still written. |


## 3.1 Dual-hat waiver versus M
Draft text said a waiver writes a seat but does not affect M. That is incoherent if the seat is on a K in D. Occupancy of that K changes. n_unpaired is a function of occupancy. M follows n_unpaired.
Bound rule: recompute n_unpaired, S, M after every accepted seat, including OK_DUALHAT_WAIVER. The waiver does not add a bonus M term. It also does not freeze M.
## 3.2 Non-degenerate second occupant
A second person on a non-D slot is OK_HIERARCHY with sigma null. It is not OK_PAIR. It does not change M(D). G2 still caps that slot at 2.
# 4. POST /propose_vacate
## 4.1 Request
{
"period_id": "P0",
"person_id": "alice",
"role_class": "facilitation",
"slot_id": "fac-1",
"proposed_op": "VACATE",
"reason": "correction"
}

| Field | Required | Rule |
| --- | --- | --- |
| period_id | yes | Period must be open. |
| person_id | yes | Must currently occupy K. |
| role_class | yes | Register name. |
| slot_id | yes | Pauli key component. |
| proposed_op | yes | Must equal VACATE. |
| reason | no | Free text. Logged. Not a gate. |


## 4.2 Vacate gates

| Gate | Test | Fail |
| --- | --- | --- |
| V0 | proposed_op is VACATE | REJ_BAD_OP |
| V1 | period open | REJ_PERIOD_CLOSED |
| V2 | K exists in register | REJ_UNKNOWN_CLASS |
| V3 | person_id is in occupants(K) | REJ_NOT_OCCUPANT |


Success code: OK_VACATE. sigma null. Seat removed. n_unpaired, S, M recomputed. If the vacated person was ALPHA and BETA remains, the remaining occupant keeps their written sigma. Do not reshuffle ALPHA/BETA after the fact.
## 4.3 Accept response
{
"result": "OK_VACATE",
"sigma": null,
"ts": "2026-09-03T11:00:00Z",
"occupants_before": ["alice", "dave"],
"n_unpaired_after": 3,
"S_after": 1.5,
"M_after": 4,
"log_entry_id": "i9j0k1l2"
}
The numbers above are an illustration for vacating alice from a 2-1-1 pattern (fac-1 loses alice, occ becomes 1-1-1). Implementers must recompute from the live log, not copy this block.
# 5. GET /derived/{period_id}
{
"period_id": "P0",
"degenerate_set": [
{"role_class": "facilitation", "slot_id": "fac-1"},
{"role_class": "facilitation", "slot_id": "fac-2"},
{"role_class": "facilitation", "slot_id": "fac-3"}
],
"n_unpaired": 2,
"S": 1.0,
"M": 3,
"U": 0,
"closed_shell": false,
"pairing_legal": true,
"max_M_value": 4,
"max_M_reached_at": "2026-09-03T10:07:00Z"
}
Current M is authoritative. max_M_* is diagnostic history. Do not treat max_M as the live state. Do not treat closed_shell as ground state.
# 6. Canonical P0 sequence
QA target. Live endpoint must reproduce these results in order.

| # | person → K | result | after | why |
| --- | --- | --- | --- | --- |
| 1 | alice → fac-1 | OK_SINGLE | U=2 M=2 | empty K, σ=ALPHA |
| 2 | bob → fac-1 | REJ_TERM_ORDER | unchanged | U=2, pair illegal |
| 3 | bob → fac-2 | OK_SINGLE | U=1 M=3 | empty K |
| 4 | carol → fac-3 | OK_SINGLE | U=0 M=4 | half-fill. pairing now legal |
| 5 | dave → fac-1 | OK_PAIR | U=0 M=3 | second person on fac-1, σ=BETA |
| 6 | eve → fac-1 | REJ_PAULI | unchanged | fac-1 already alice+dave |
| 7 | bob → fac-1 | REJ_DUALHAT | unchanged | bob already holds fac-2 |


Fail the build if row 5 codes OK_PAIR for bob, or if row 7 codes OK_PAIR.
# 7. Log entry
One object per request, accept or reject.

| Field | On accept | On reject |
| --- | --- | --- |
| log_entry_id | uuid | uuid |
| ts | UTC | UTC |
| period_id, person_id, role_class, slot_id, proposed_op | echo | echo |
| result | OK_* | REJ_* |
| sigma | ALPHA, BETA, or null | null |
| occupants_before | ids already on K | ids already on K |
| n_unpaired_after, S_after, M_after | recomputed | null |
| waiver_id | echo or null | echo or null |
| reason | optional | required for REJ_* |


Append-only. No UPDATE. No DELETE. A correction is a VACATE plus a new FILL.
# 8. Period status

| Status | Register edits | FILL / VACATE |
| --- | --- | --- |
| draft | allowed | forbidden |
| open | forbidden (frozen) | allowed |
| closed | forbidden | forbidden |


P0 moves draft → open before the first live FILL. Open is the freeze the codebook required. Closed is a later operator act. Do not name both “frozen.”
# 9. Exclusions
- V_pair, V_nuc, E. Next artifact only after this sequence is reproduced on a live log.
- MSC, 1+2R, token phases.
- L and J.
- Lean.
- Authn, authz, rate limits.
# 10. Owners

| Action | Owner | Metric | Due |
| --- | --- | --- | --- |
| Implement propose_fill and propose_vacate with §3 / §4 order | Engineering | Codes match codebook on the 7-row sequence | 14 days |
| Move P0 register draft → open before first write | Operating group | No register edits after first FILL | 14 days |
| Replay rows 1–7 against the live endpoint | QA | Byte-level result codes match §6 | 14 days |
| Confirm row 7 is REJ_DUALHAT | QA | Logged reason names fac-2 | 14 days |
| Judge public copy that still treats dual-hat as pair | PhaseMirror | Pass/fail | After first live period |


Next artifact if requested: period-0 energy ledger schema. Not before the seating log is stable.