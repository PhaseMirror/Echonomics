OCCUPANCY CODEBOOK v1
Companion to phase-mirror-hundian-revision-v1.docx. Workbook: phase-mirror-hundian-period-0-register-v1.xlsx. Status: ACCEPTED Pauli-key correction. Classification: operating codebook. Not a proof. Not a token spec.
Operator accepted: K = (role_class, slot_id, period_id). person_id is particle label only. This file freezes field names, codes, gate order, and the period-0 example after one correction.
# 0. Verdict
The codebook is usable. The submitted example log is not. Row “bob FILL fac-1 OK_PAIR” while bob already holds fac-2 is dual-hat, not pairing. Pairing is a second person on the same K. The workbook uses dave for that pair. A later bob attempt on fac-1 is REJ_DUALHAT.
# 1. Bindings that do not move
- Pauli key K = (role_class, slot_id, period_id).
- person_id is not a component of K.
- S = n_unpaired / 2. M = n_unpaired + 1. Both derived from the log.
- Pairing on any K in D is legal only when U = 0.
- Fills outside D are OK_HIERARCHY and do not change M(D).
- E = V_pair − V_nuc. Not in this codebook. Energy instruments stay on the revision, not on the seating log.
# 2. State vector

| Field | Type | Rule | In K? |
| --- | --- | --- | --- |
| person_id | stable id | Particle label | NO |
| role_class | pre-registered name | Must exist in register before any FILL | YES |
| slot_id | id inside role-class | Unique inside class + period | YES |
| period_id | closed interval label | Do not mix periods in one M | YES |
| sigma | ALPHA or BETA | Assigned by fill order. ALPHA first | NO |
| degenerate | bool | True iff role-class inside published ε-band | NO |


# 3. Gate order
Evaluate in this order. First reject wins. Do not skip to a later OK.

| Step | Test | Fail code |
| --- | --- | --- |
| G0 | role_class in register for this period_id | REJ_UNKNOWN_CLASS |
| G1 | person_id does not already occupy a different K in this period, unless waiver open | REJ_DUALHAT |
| G2 | occupants(K) < 2 | REJ_PAULI |
| G3 | if occupants(K) = 1, then U = 0 in D | REJ_TERM_ORDER |
| G4 | if role_class not in D, code OK_HIERARCHY (still subject to G1–G2) | — |
| G5 | occupants(K) = 0 → OK_SINGLE, σ = ALPHA; occupants(K) = 1 and U = 0 → OK_PAIR, σ = BETA | — |


G1 before G3. A person already seated in D who aims at a second K is dual-hat even if pairing is legal on the target K. Mixing those codes hides overload as multiplicity.
# 4. Codes

| Code | Meaning | Writes a seat? |
| --- | --- | --- |
| OK_SINGLE | First occupant on empty K. σ = ALPHA | YES |
| OK_PAIR | Second occupant on K after U = 0. σ = BETA | YES |
| OK_HIERARCHY | Fill of a non-degenerate K | YES |
| OK_DUALHAT_WAIVER | Same person, second K, named waiver with expiry | YES; does not raise M |
| OK_VACATE | Remove this person from K | Removes seat |
| REJ_UNKNOWN_CLASS | role_class not in register | NO |
| REJ_PAULI | K already has two occupants | NO |
| REJ_TERM_ORDER | Second occupant while any K in D is empty | NO |
| REJ_DUALHAT | Person already on another K this period, no waiver | NO |


# 5. Log schema

| Column | Required | Rule |
| --- | --- | --- |
| ts | yes | UTC |
| period_id | yes | Matches register period |
| person_id | yes | Particle label |
| role_class | yes | Register name |
| slot_id | yes | Pauli key component |
| proposed_op | yes | FILL or VACATE |
| result | yes | Code from §4 |
| sigma | if OK_SINGLE or OK_PAIR | ALPHA or BETA |
| n_unpaired_after | if writes a seat | Recomputed for D |
| S_after | if writes a seat | n_unpaired / 2 |
| M_after | if writes a seat | n_unpaired + 1 |
| occupants_before | yes | person_ids already on K |
| waiver_id | if OK_DUALHAT_WAIVER | Named exception |


Append-only. Corrections are reversing VACATE rows, not edits. M and S are derived. A typed M that disagrees with n_unpaired is invalid.
# 6. Degenerate set
D is the set of K whose role_class has degenerate = true in the frozen period register.
One instrument per D. Hours and stipend are not comparable. A class with a different instrument cannot join D by sharing an ε number.
U = count of K in D with occupancy 0 after accepted rows only. Rejects do not change occupancy.
If the register has no degenerate = true rows, D is empty, U is undefined, Term-order Gate is off, every fill is hierarchy or reject.
# 7. Derived values
After each accepted row, recompute on D only:
- n_unpaired = number of K in D with occupancy exactly 1
- S = n_unpaired / 2
- M = n_unpaired + 1
Half-fill of D: occupancy 1 on every K in D. n_unpaired = |D|. M = |D| + 1. This is maximum multiplicity for that configuration.
Closed D: occupancy 2 on every K in D. n_unpaired = 0. S = 0. M = 1. This is not maximum multiplicity.
# 8. Corrected period-0 example
D = {facilitation/fac-1, facilitation/fac-2, facilitation/fac-3}. |D| = 3. documentation and logistics are outside D.

| ts | person | K | result |
| --- | --- | --- | --- |
| 10:00Z | alice | facilitation/fac-1 | OK_SINGLE. U: 3→2. M=2 |
| 10:05Z | bob | facilitation/fac-1 | REJ_TERM_ORDER. fac-2 and fac-3 empty |
| 10:06Z | bob | facilitation/fac-2 | OK_SINGLE. U: 2→1. M=3 |
| 10:07Z | carol | facilitation/fac-3 | OK_SINGLE. U: 1→0. M=4. Pairing now legal |
| 10:08Z | dave | facilitation/fac-1 | OK_PAIR. Not bob. M=3 |
| 10:09Z | eve | facilitation/fac-1 | REJ_PAULI. alice and dave already on K |
| 10:10Z | bob | facilitation/fac-1 | REJ_DUALHAT. bob already holds fac-2 |


Submitted draft used bob at 10:08 as OK_PAIR. That row is struck. It would have written a dual-hat as a pair and inflated coverage while hiding overload.
# 9. Period-0 register rules
- Freeze the register before the first FILL of the period.
- ε and entry_cost_instrument do not change mid-period.
- degenerate flag is computed from |cost − median(costs in instrument group)| ≤ ε, then written. Do not hand-toggle against the arithmetic.
- Blank slot_id is not a K. No FILL until slot_id exists.
# 10. What this codebook does not contain
- API shapes for propose_fill / propose_vacate. That is the runbook, not this file.
- V_pair, V_nuc, E. Seating log first.
- L, J, Lean, MSC, 1+2R.
# 11. Owners

| Action | Owner | Metric | Due |
| --- | --- | --- | --- |
| Use corrected example, not the bob-pair row | Operating group | Log matches §8 | Immediate |
| Fill period-0 register sheet and freeze | Operating group | No blank required cells on live classes | 14 days |
| Write first live row, including a reject if one occurs | Operating group | Append-only log non-empty | 14 days |
| Judge whether public MSP copy still treats bob-style dual-hat as multiplicity | PhaseMirror | Pass/fail | After first live period |


Next artifact if asked: period-0 occupancy runbook with propose_fill and propose_vacate request and response shapes.