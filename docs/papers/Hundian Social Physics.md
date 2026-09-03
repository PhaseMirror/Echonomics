The request is a research question. The text already on disk is not a bound model.
Multiplicity Social Physics (Citizen Gardens, 2026-08-30) already writes Hund onto Foundry occupancy and calls the map an isomorphism. In the same volume it calls the Socio-Atomic Model a heuristic. Social spin S(t) is mean reciprocity, not 2S+1. The first-rule “proof” is E = Σ N_j². That is crowding. It is not Hund.
Physics constraint the paper does not carry: Hund orders terms of one configuration on degenerate orbitals under Pauli exclusion. Parallel spin carves a Fermi hole. Occupants with the same spin index avoid the same region. The surviving energy account (Boyd, 1984) is not “less pairwise repulsion.” High-spin states often have more V_ee. They sit lower because the nucleus is less screened.
The paper maps parallel spin to cohesion. That is the opposite mechanism.
Protocol is saved.
phase-mirror-hund-multiplicity-social-physics-v1.docxView Preview
Verdict. Analogy until B1–B6 bind. Token V = 1+S+C is out of scope.
Three maps, not one name.

Map A: crowding. Control. Do not call it Hund.
Map B: role-exclusion. Fill equal-rank roles singly before dual-hat. M = unpaired slots + 1.
Map C: nucleus-unscreening. Pairwise friction and attraction to a written purpose on separate ledgers.

Bindings that restore the word Hund.

B1 Pauli: written index (person, role-class, slot, period). Collision logged and forbidden.
B2 Degeneracy: entry-cost within a pre-registered ε.
B3 Multiplicity: integer unpaired count, not a survey mean.
B4 Same configuration: compare occupancy patterns at fixed N and fixed role set.
B5 Split ledgers: V_pair ≠ V_nucleus.
B6 Ground: lowest measured cost, not “token reads 3.”

Owners.

You: accept or reject Maps A/B/C in one page. 7 days.
Operating group: T1 index page and T2 role register. 14 days.
PhaseMirror: judge whether public MSP copy still says isomorphism.

3^k may be a grouping rule. It is not a closed shell. Lean Hundian verification is unverified until a SHA and a statement exist.
Next artifact, if T1–T2 arrive: occupancy codebook, then the T5 design sheet.Add to chat21 sourcesA verifiable Hundian revision requires the following operational constraints to replace the previous heuristic.

State Vector: Define the system index as (person, role-class, slot, period).
Pauli Gate: The system must log and reject any transaction where two participants attempt to share a full index array.
Degeneracy Gate: Register role-classes with a predefined entry-cost band $\epsilon$. Roles falling outside this variance are non-degenerate and must fill via standard hierarchy.
Multiplicity Calculation: Retire mean survey reciprocity. Calculate spin strictly as $S = (\text{unpaired role slots}) / 2$. Calculate system multiplicity as $M = 2S + 1$.
Term Ordering: Force single-occupancy of degenerate slots before permitting dual-occupancy.
Ledger Split: Track pairwise friction ($V_{pair}$) separately from nucleus attraction ($V_{nuc}$). The true ground state is the occupancy pattern that minimizes the sum of these ledgers at a fixed headcount.
Worked for 2m 34sThe constraints can replace the heuristic. One of them cannot run as written.
Pauli gate as stated uses index (person, role-class, slot, period). Person is unique. Two people never share that 4-tuple. The reject path is dead. Particle identity is not a quantum number.
Bound key:

Particle label: person
Pauli key K: (role-class, slot, period)
Capacity of K: 1 before term-order allows pairing, 2 after, never 3

Revision is saved.
phase-mirror-hundian-revision-v1.docxView Preview
What was accepted.

Reciprocity mean retired. S = n_unpaired / 2. M = 2S + 1 = n_unpaired + 1. Roster is the only input.
Degenerate set D only inside published ε. Outside D: hierarchy, and those fills do not count toward M(D).
Term-order gate: no pair on any K in D while any K in D is empty.
Pairing and dual-hat are different codes. Pairing is a second person on one K. Dual-hat is one person on two K. Only the first is Hund.

Sign convention.
Minimize V_pair + V_nuc with both positive inverts attraction. Bound E = V_pair − V_nuc. Ground is min E at fixed N, fixed D, fixed period. Ground is not max M. Ground is not a token reading 3.
Filling fact the old copy fused.
On a 3-slot degenerate set, max M is at half-fill (N=3, M=4). Full shell (N=6, M=1) is closed and low-multiplicity. “Maximum multiplicity” and “full saturation” are not the same state. The operating group has to pick which one it is optimizing.
Due.

You: accept or reject the Pauli-key correction, and pick the E convention. 7 days.
Operating group: period-0 role-class register with ε, then an append-only log that writes REJ_* instead of failing silent. 14 days.
MSC / 1+2R language stays off this ledger.

Next artifact if the key correction is accepted: occupancy codebook plus period-0 register template.Accepted. The Pauli-key correction is mandatory and now binds:

**Pauli key K** = (role_class, slot_id, period_id)
**person_id** is particle label only, never part of K

This makes the reject path live. Below are the next artifacts: occupancy codebook and period-0 register template.

## 1. Occupancy Codebook
### 1.1 State vector fields
textCopyCopied| Field        | Type                  | Rule                              |
| ------------ | --------------------- | --------------------------------- |
| `person_id`  | stable id             | Particle label; not in Pauli key  |
| `role_class` | pre-registered name   | Must exist in register            |
| `slot_id`    | id inside role-class  | Unique inside class + period      |
| `period_id`  | closed interval label | Do not mix periods in one `M`     |
| `sigma`      | `ALPHA` or `BETA`     | Assigned by fill order            |
| `degenerate` | bool                  | True iff role-class inside ε-band |
### 1.2 Append-only log schema
textCopyCopied| Column             | Required | Notes                             |
| ------------------ | -------- | --------------------------------- |
| `ts`               | yes      | UTC                               |
| `period_id`        | yes      | Matches register                  |
| `person_id`        | yes      | Particle label                    |
| `role_class`       | yes      | Must be in register               |
| `slot_id`          | yes      | Pauli key component               |
| `proposed_op`      | yes      | `FILL` or `VACATE`                |
| `result`           | yes      | `OK_*` or `REJ_*`                 |
| `sigma`            | if OK    | `ALPHA` or `BETA`                 |
| `n_unpaired_after` | if OK    | Recomputed for degenerate set `D` |
| `S_after`          | if OK    | `n_unpaired / 2`                  |
| `M_after`          | if OK    | `n_unpaired + 1`                  |
| `occupants_before` | yes      | Ids already on `K`                |
### 1.3 Reject / accept codes
textCopyCopied| Code                | Meaning                                                                   |
| ------------------- | ------------------------------------------------------------------------- |
| `OK_SINGLE`         | First occupant on empty `K`; σ = ALPHA                                    |
| `OK_PAIR`           | Second occupant on `K` after all degenerate slots singly filled; σ = BETA |
| `OK_HIERARCHY`      | Fill outside degenerate set, normal hierarchy                             |
| `OK_DUALHAT_WAIVER` | Same person on second `K` with named waiver                               |
| `REJ_UNKNOWN_CLASS` | Role-class not in register                                                |
| `REJ_PAULI`         | Third occupant on `K`                                                     |
| `REJ_TERM_ORDER`    | Second occupant on `K` while any degenerate slot is empty                 |
| `REJ_DUALHAT`       | Person already occupies another `K` in same period, no waiver             |
### 1.4 Pauli Gate pseudocode (corrected key)
textCopyCopiedfunction propose_fill(P, role_class, slot_id, period_id):
K = (role_class, slot_id, period_id)

if role_class not in register:
return REJ_UNKNOWN_CLASS

occupants = log.occupants_of(K, period_id)
D = register.degenerate_set(period_id)
U = count_empty_slots_in_D(D, period_id)

if occupants.length >= 2:
log_reject(P, K, REJ_PAULI)
return REJ_PAULI

if occupants.length == 1:
if U == 0:
log_accept(P, K, OK_PAIR, sigma=BETA)
return OK_PAIR
else:
log_reject(P, K, REJ_TERM_ORDER)
return REJ_TERM_ORDER

# occupants.length == 0
log_accept(P, K, OK_SINGLE, sigma=ALPHA)
return OK_SINGLE
**Person-capacity gate separately:**
textCopyCopiedif P already occupies another K in same period_id:
if dual_hat_waiver_open(P, period_id):
return OK_DUALHAT_WAIVER
else:
log_reject(P, K, REJ_DUALHAT)
return REJ_DUALHAT

## 2. Period-0 Register Template
textCopyCopied| role_class      | slot_id | entry_cost_instrument     | entry_cost_value | epsilon | degenerate | notes                     |
| --------------- | ------- | ------------------------- | ---------------- | ------- | ---------- | ------------------------- |
| `facilitation`  | `fac-1` | scheduled_hours           | 4.0              | 0.5     | true       | Degenerate set D          |
| `facilitation`  | `fac-2` | scheduled_hours           | 4.2              | 0.5     | true       | Degenerate set D          |
| `facilitation`  | `fac-3` | scheduled_hours           | 3.9              | 0.5     | true       | Degenerate set D          |
| `documentation` | `doc-1` | required_credential_hours | 12.0             | 0.5     | false      | Outside D; hierarchy fill |
| `logistics`     | `log-1` | stipend                   | 100.0            | 5.0     | false      | Outside D; hierarchy fill |
**Rules:**

Degenerate set D = all roles with degenerate = true in this period.
U = number of K in D with occupancy 0.
Pairing on any K in D is legal **only when U = 0**.
Occupancy pattern that maximizes M is at half-fill: n_unpaired = |D|, M = |D| + 1.
Closed shell (all occupancy 2) gives n_unpaired = 0, S = 0, M = 1.


## 3. Example rejection log
textCopyCopied| ts                   | period_id | person_id | role_class   | slot_id | proposed_op | result         | sigma | occupants_before |
| -------------------- | --------- | --------- | ------------ | ------- | ----------- | -------------- | ----- | ---------------- |
| 2026-09-03T10:00:00Z | P0        | alice     | facilitation | fac-1   | FILL        | OK_SINGLE      | ALPHA | []               |
| 2026-09-03T10:05:00Z | P0        | bob       | facilitation | fac-1   | FILL        | REJ_TERM_ORDER | —     | [alice]          |
| 2026-09-03T10:06:00Z | P0        | bob       | facilitation | fac-2   | FILL        | OK_SINGLE      | ALPHA | []               |
| 2026-09-03T10:07:00Z | P0        | carol     | facilitation | fac-3   | FILL        | OK_SINGLE      | ALPHA | []               |
| 2026-09-03T10:08:00Z | P0        | bob       | facilitation | fac-1   | FILL        | OK_PAIR        | BETA  | [alice]          |
| 2026-09-03T10:09:00Z | P0        | dave      | facilitation | fac-1   | FILL        | REJ_PAULI      | —     | [alice, bob]     |
This satisfies the metric: an index collision on K is automatically rejected with the appropriate code.

## 4. Derived values from the log
For any OK row:
textCopyCopiedn_unpaired = number of K in D with occupancy exactly 1
S = n_unpaired / 2
M = n_unpaired + 1
These are derived columns; any human-typed value that disagrees must be overwritten by recompute.

Next artifact ready when needed: **period-0 occupancy runbook** with exact API endpoint shapes for propose_fill and propose_vacate.Worked for 4m 37sAccepted. K = (role_class, slot_id, period_id). person_id stays off the key. The reject path is live.
One submitted row is struck. bob FILL fac-1 OK_PAIR while bob already holds fac-2 is dual-hat. Pairing is a second person on the same K. The pair occupant is dave. Bob’s later attempt on fac-1 is REJ_DUALHAT.
Gate order is now frozen. First reject wins: UNKNOWN_CLASS → DUALHAT → PAULI → TERM_ORDER → OK_*.
Artifacts:
phase-mirror-hundian-occupancy-codebook-v1.docxView Preview
phase-mirror-hundian-period-0-register-v1.xlsxPHASE MIRROR      Hundian Period-0 Register Template v1      Pauli key K = (role_class, slot_id, period_id). person_id is particle label only.      FieldValue     StatusACCEPTED Pauli-key correction     Period idP0     Companion codebookphase-mirror-hundian-occupancy-codebook-v1.docx     View Preview
Workbook check after the corrected example:

occupancy of D: fac-1=2, fac-2=1, fac-3=1
U = 0
n_unpaired = 2
S = 1
M = 3
pairing legal: yes
closed shell: no
max M was 4 on the carol row (half-fill). That state is past.

documentation and logistics stay outside D. Different instruments do not share an ε.
Freeze the Register sheet before the first live FILL. M and S are formulas. Do not type them.
Runbook with propose_fill / propose_vacate shapes is next if you want it. Energy ledgers and MSC stay off this log.Accepted. The corrected period-0 example is now the canonical seating log:

10:00Z alice → fac-1 OK_SINGLE (M=2)
10:05Z bob → fac-1 REJ_TERM_ORDER
10:06Z bob → fac-2 OK_SINGLE (M=3)
10:07Z carol → fac-3 OK_SINGLE (M=4, pairing now legal)
10:08Z dave → fac-1 OK_PAIR (M=3)
10:09Z eve → fac-1 REJ_PAULI
10:10Z bob → fac-1 REJ_DUALHAT

The bob-pair row is struck; dave is the pair occupant. Gate order is frozen. All future artifacts bind to this codebook.
The next artifact is the **Period-0 Occupancy Runbook** with propose_fill and propose_vacate request/response shapes.

## PERIOD-0 OCCUPANCY RUNBOOK v1
Companion to:

phase-mirror-hundian-revision-v1.docx
phase-mirror-hundian-occupancy-codebook-v1.docx
Workbook: phase-mirror-hundian-period-0-register-v1.xlsx

**Status:** OPERATING RUNBOOK — not a proof, not a token spec.
**Scope:** API shapes for seating log transactions against the frozen period-0 register.
**Gate order:** UNKNOWN_CLASS → DUALHAT → PAULI → TERM_ORDER → OK_* (from codebook v1 §3).

### 1. Endpoints
Base path: /api/hund/period-0
textCopyCopied| Method | Path                   | Purpose                                           |
| ------ | ---------------------- | ------------------------------------------------- |
| POST   | `/propose_fill`        | Submit a FILL transaction                         |
| POST   | `/propose_vacate`      | Submit a VACATE transaction (reversing row)       |
| GET    | `/log`                 | Read append-only log, filtered by period          |
| GET    | `/derived/{period_id}` | Current `n_unpaired`, `S`, `M` for degenerate set |
All requests and responses are JSON. Content-Type: application/json.

### 2. POST /propose_fill
#### Request body
JSONCopyCopied{
"period_id": "P0",
"person_id": "bob",
"role_class": "facilitation",
"slot_id": "fac-1",
"proposed_op": "FILL",
"waiver_id": null
}
textCopyCopied| Field       | Type        | Required | Notes                                                                            |
| ----------- | ----------- | -------- | -------------------------------------------------------------------------------- |
| period_id   | string      | yes      | Must match a frozen period in register                                           |
| person_id   | string      | yes      | Particle label; must exist in roster                                             |
| role_class  | string      | yes      | Must exist in register for this period                                           |
| slot_id     | string      | yes      | Must exist inside role_class for this period                                     |
| proposed_op | string      | yes      | Must be `"FILL"`                                                                 |
| waiver_id   | string/null | no       | Required only if person already occupies another K and a dual-hat waiver is open |
#### Response body
On success (one of OK_SINGLE, OK_PAIR, OK_HIERARCHY, OK_DUALHAT_WAIVER):
JSONCopyCopied{
"result": "OK_SINGLE",
"sigma": "ALPHA",
"ts": "2026-09-03T10:06:00Z",
"occupants_before": [],
"n_unpaired_after": 2,
"S_after": 1.0,
"M_after": 3,
"log_entry_id": "a1b2c3d4"
}
On rejection:
JSONCopyCopied{
"result": "REJ_TERM_ORDER",
"ts": "2026-09-03T10:05:00Z",
"occupants_before": ["alice"],
"reason": "Pairing illegal: degenerate slots fac-2, fac-3 empty",
"log_entry_id": "e5f6g7h8"
}
All responses include a log_entry_id because every request is logged, even rejections.

### 3. Gate evaluation for propose_fill
The server executes the following sequence exactly. First reject wins; if a gate fails, the transaction is logged as a reject and no seat is written.

**G0 — Register check**


role_class must exist in period register.
slot_id must be attached to that role_class for that period.
period_id must be open or frozen (no writes after close).
Fail → REJ_UNKNOWN_CLASS.


**G1 — Dual-hat check**


If person_id already occupies any K (role_class, slot_id) in this period_id, and that K is different from the proposed K:
If waiver_id is provided and matches an open waiver for that person and period → continue.
Otherwise → REJ_DUALHAT.
If person_id does not occupy any other K, proceed.


**G2 — Pauli capacity**


Look up occupants of proposed K = (role_class, slot_id, period_id).
If occupants.length >= 2 → REJ_PAULI.


**G3 — Term-order (only for degenerate K)**


If role_class is in degenerate set D for this period:
Let U = number of K in D with occupancy 0 (based on accepted rows only).
If occupants.length == 1 and U > 0 → REJ_TERM_ORDER.
If role_class is not in D → skip this gate (go to G4).


**G4 — Hierarchy fill (non-degenerate)**


If role_class is not in D:
Still subject to G1–G2.
Accept as OK_HIERARCHY. No sigma assignment (or sigma = null).


**G5 — Accept fill**


If occupants.length == 0 → OK_SINGLE, sigma = "ALPHA".
If occupants.length == 1 and role_class in D and U == 0 → OK_PAIR, sigma = "BETA".
If occupants.length == 1 and role_class not in D → OK_HIERARCHY (or OK_SINGLE? No, second person on non-degenerate slot is still a seat, but not a Hund pair; treat as hierarchy; code OK_HIERARCHY with sigma = null).
*Clarification from codebook: non-degenerate fills are OK_HIERARCHY even if second occupant. That is not a Hund pair.*
If dual-hat waiver was used, result code is OK_DUALHAT_WAIVER (still writes a seat but does not affect M).


### 4. POST /propose_vacate
#### Request body
JSONCopyCopied{
"period_id": "P0",
"person_id": "alice",
"role_class": "facilitation",
"slot_id": "fac-1",
"proposed_op": "VACATE",
"reason": "correction"
}
#### Response body
On success:
JSONCopyCopied{
"result": "OK_VACATE",
"ts": "2026-09-03T11:00:00Z",
"occupants_before": ["alice", "dave"],
"n_unpaired_after": 1,
"S_after": 0.5,
"M_after": 2,
"log_entry_id": "i9j0k1l2"
}
On rejection (if person not on K, or period closed, or other):
JSONCopyCopied{
"result": "REJ_NOT_OCCUPANT",
"ts": "2026-09-03T11:01:00Z",
"occupants_before": ["alice", "dave"],
"log_entry_id": "m3n4o5p6"
}
Additional reject codes for vacate:

REJ_NOT_OCCUPANT — person_id not in occupants_before.
REJ_PERIOD_CLOSED — period no longer accepting writes.
REJ_UNKNOWN_CLASS — if K invalid.

VACATE writes a row that removes the seat. It does not count as a FILL. It updates derived values after removal.

### 5. Derived values endpoint
GET /derived/P0 returns:
JSONCopyCopied{
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
"max_M_reached_at": "2026-09-03T10:07:00Z",
"max_M_value": 4
}
n_unpaired, S, M are recomputed from accepted rows in the log for D. U is count of empty K in D. max_M_* is derived from the historical log and may be shown for diagnostics, but current M is authoritative.

### 6. Example sequence using the corrected log
All requests hit POST /propose_fill.
textCopyCopied1. alice fills fac-1 → OK_SINGLE
occupants_before: []
n_unpaired_after: 1, M: 2

2. bob fills fac-1 → REJ_TERM_ORDER
occupants_before: ["alice"]
U = 2 (fac-2, fac-3 empty)

3. bob fills fac-2 → OK_SINGLE
occupants_before: []
n_unpaired_after: 2, M: 3

4. carol fills fac-3 → OK_SINGLE
occupants_before: []
n_unpaired_after: 3, M: 4
U = 0

5. dave fills fac-1 → OK_PAIR
occupants_before: ["alice"]
n_unpaired_after: 2, M: 3
sigma: BETA

6. eve fills fac-1 → REJ_PAULI
occupants_before: ["alice", "dave"]

7. bob fills fac-1 → REJ_DUALHAT
occupants_before: ["alice", "dave"]
reason: bob already occupies fac-2 this period

### 7. Log entry shape (appended for every request)
JSONCopyCopied{
"log_entry_id": "uuid",
"ts": "ISO-8601 UTC",
"period_id": "P0",
"person_id": "alice",
"role_class": "facilitation",
"slot_id": "fac-1",
"proposed_op": "FILL",
"result": "OK_SINGLE",
"sigma": "ALPHA",
"n_unpaired_after": 1,
"S_after": 0.5,
"M_after": 2,
"occupants_before": [],
"waiver_id": null
}
Rejects include the same fields but sigma null, n_unpaired_after null, S_after null, M_after null, and occupants_before shows the state that caused the rejection.

### 8. Runbook exclusions
This runbook does **not** define:

Energy ledgers (V_pair, V_nuc, E) — those live in the revision doc, not the seating log.
MSC, Lean, token phases, or any non-Hund claims.
L and J rules (Hund’s second and third rules) — still unbound.
API authentication or rate limiting — operational security is outside this spec.


### 9. Immediate actions
textCopyCopied| Action                                                                  | Owner           | Metric                                   | Due     |
| ----------------------------------------------------------------------- | --------------- | ---------------------------------------- | ------- |
| Implement `/propose_fill` and `/propose_vacate` with gate order from §3 | Engineering     | Endpoints return codes matching codebook | 14 days |
| Freeze period-0 register before first write                             | Operating group | No edits to register after first `FILL`  | 14 days |
| Run the corrected 7-row sequence against live endpoint                  | QA              | Log matches the runbook example          | 14 days |
| Confirm dual-hat rejection appears for bob’s second K attempt           | QA              | `REJ_DUALHAT` logged                     | 14 days |
Next artifact if requested: period-0 energy ledger schema (but only after seating log is stable).Worked for 1m 50sRunbook is bound to the corrected seven-row log. Two operator sentences were tightened so the API cannot implement a contradiction.

Register freeze is not period close. Frozen register still accepts FILL and VACATE. Closed period accepts neither.
OK_DUALHAT_WAIVER writes a seat. Occupancy changes. M is recomputed from occupancy. A waiver is not an M exemption.

Saved.
phase-mirror-hundian-period-0-occupancy-runbook-v1.docxView Preview
Paths. Base /api/hund/period-0

POST /propose_fill
POST /propose_vacate
GET /log
GET /derived/{period_id}

Every request appends a row, including rejects. No log_entry_id means the request did not happen.
QA gate. Live endpoint fails if row 5 codes OK_PAIR for bob, or if row 7 codes anything other than REJ_DUALHAT.
Period status. draft = register editable, no seats. open = register frozen, seats allowed. closed = no writes.
Energy ledger stays next, and only after this sequence reproduces on a live log. MSC stays off.Accepted. Period-0 Occupancy Runbook v1 is received and binds as the operational API spec for the seating log.
Key bindings confirmed:

K = (role_class, slot_id, period_id). person_id remains off the Pauli key.
Gate order: G0 UNKNOWN_CLASS → G1 DUALHAT → G2 PAULI → G3 TERM_ORDER → G4/G5 OK_*.
Dual-hat waiver **does** affect M because it writes a seat. The earlier draft's "waiver does not affect M" is struck.
Non-degenerate second occupant is OK_HIERARCHY, sigma null, not OK_PAIR.
Vacate does not reshuffle ALPHA/BETA after the fact.
Period status: draft → open (register frozen) → closed. Open still accepts FILL/VACATE.
Canonical P0 sequence is locked as the QA target. Row 5 must be dave (not bob), row 7 must be REJ_DUALHAT.
No further corrections required at this time.
Next artifact, when requested: period-0 energy ledger schema (V_pair, V_nuc, E) — only after the seating log is stable and the canonical sequence is reproduced on a live endpoint.
Worked for 27sLocked. No further corrections on the seating spec.
Bound.

K = (role_class, slot_id, period_id)
Gate order G0 → G1 → G2 → G3 → G4/G5
Waiver writes a seat. M recomputes
Non-D second occupant is OK_HIERARCHY
Vacate does not reshuffle ALPHA/BETA
draft → open → closed
QA: row 5 dave OK_PAIR, row 7 bob REJ_DUALHAT

Parked.

V_pair, V_nuc, E
MSC
L, J, Lean

Energy ledger is not opened on this message. Open it after the seven-row sequence exists on a live log, not before.