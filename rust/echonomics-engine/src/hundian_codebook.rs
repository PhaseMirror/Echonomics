//! # echonomics_engine::hundian_codebook — ADR-0007: Hundian Occupancy Codebook v1 Specification
//!
//! Production-grade implementation of the Hundian Occupancy Codebook v1:
//! - Pauli key K = (role_class, slot_id, period_id)
//! - G0-G5 gate priority (G0 REJ_UNKNOWN_CLASS -> G1 REJ_DUALHAT -> G2 REJ_PAULI -> G3 REJ_TERM_ORDER -> G4/G5 OK_*)
//! - Append-only Log Schema with derived n_unpaired, S, M tracking
//! - Canonical Period-0 register rules and log validation

use serde::{Deserialize, Serialize};
use std::collections::{HashMap, HashSet};

/// Pauli Key K = (role_class, slot_id, period_id).
/// Note: person_id is particle label only and MUST NOT be a component of K.
#[derive(Debug, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub struct PauliKey {
    pub role_class: String,
    pub slot_id: String,
    pub period_id: String,
}

impl PauliKey {
    pub fn new(role_class: impl Into<String>, slot_id: impl Into<String>, period_id: impl Into<String>) -> Self {
        Self {
            role_class: role_class.into(),
            slot_id: slot_id.into(),
            period_id: period_id.into(),
        }
    }
}

/// Spin Tag assigned by fill order: Alpha for first occupant, Beta for second occupant.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub enum SpinTag {
    Alpha,
    Beta,
}

/// Proposed operation type on a seat.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub enum ProposedOp {
    Fill,
    Vacate,
}

/// Result codes specified in §4 of ADR-0007.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub enum CodebookResultCode {
    OkSingle,
    OkPair,
    OkHierarchy,
    OkDualHatWaiver,
    OkVacate,
    RejUnknownClass,
    RejPauli,
    RejTermOrder,
    RejDualHat,
    RejNotOccupant,
}

impl CodebookResultCode {
    pub fn is_ok(&self) -> bool {
        matches!(
            self,
            CodebookResultCode::OkSingle
                | CodebookResultCode::OkPair
                | CodebookResultCode::OkHierarchy
                | CodebookResultCode::OkDualHatWaiver
                | CodebookResultCode::OkVacate
        )
    }

    pub fn writes_seat(&self) -> bool {
        matches!(
            self,
            CodebookResultCode::OkSingle
                | CodebookResultCode::OkPair
                | CodebookResultCode::OkHierarchy
                | CodebookResultCode::OkDualHatWaiver
        )
    }
}

/// A registered role-class within a frozen period register (§2 & §9).
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct RoleClassRegistration {
    pub role_class: String,
    pub slot_ids: HashSet<String>,
    pub degenerate: bool,
}

/// Period Register freezing registered role-classes before the first FILL (§9).
#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub struct PeriodRegister {
    pub period_id: String,
    pub classes: HashMap<String, RoleClassRegistration>,
    pub frozen: bool,
}

impl PeriodRegister {
    pub fn new(period_id: impl Into<String>) -> Self {
        Self {
            period_id: period_id.into(),
            classes: HashMap::new(),
            frozen: false,
        }
    }

    pub fn register_class(&mut self, role_class: impl Into<String>, slot_ids: Vec<String>, degenerate: bool) -> Result<(), String> {
        if self.frozen {
            return Err("Cannot modify period register after freeze".to_string());
        }
        let rc = role_class.into();
        let slots: HashSet<String> = slot_ids.into_iter().collect();
        if slots.is_empty() {
            return Err("Blank slot_id is not allowed (ADR-0007 §9)".to_string());
        }
        self.classes.insert(rc.clone(), RoleClassRegistration {
            role_class: rc,
            slot_ids: slots,
            degenerate,
        });
        Ok(())
    }

    pub fn freeze(&mut self) {
        self.frozen = true;
    }

    pub fn is_registered(&self, role_class: &str, slot_id: &str) -> bool {
        if let Some(reg) = self.classes.get(role_class) {
            reg.slot_ids.contains(slot_id)
        } else {
            false
        }
    }

    pub fn is_degenerate(&self, role_class: &str) -> bool {
        self.classes.get(role_class).map(|r| r.degenerate).unwrap_or(false)
    }

    /// Returns the complete set of Pauli keys in degenerate set D.
    pub fn get_d_keys(&self) -> Vec<PauliKey> {
        let mut d_keys = Vec::new();
        for (rc, reg) in &self.classes {
            if reg.degenerate {
                for slot_id in &reg.slot_ids {
                    d_keys.push(PauliKey::new(rc.clone(), slot_id.clone(), self.period_id.clone()));
                }
            }
        }
        d_keys
    }
}

/// Log Row Schema defined in §5 of ADR-0007.
#[derive(Debug, Clone, PartialEq, Serialize, Deserialize)]
#[allow(non_snake_case)]
pub struct LogRow {
    pub ts: String,
    pub period_id: String,
    pub person_id: String,
    pub role_class: String,
    pub slot_id: String,
    pub proposed_op: ProposedOp,
    pub result: CodebookResultCode,
    pub sigma: Option<SpinTag>,
    pub n_unpaired_after: Option<usize>,
    pub S_after: Option<f64>,
    pub M_after: Option<usize>,
    pub occupants_before: Vec<String>,
    pub waiver_id: Option<String>,
}

/// State representation of the Hundian Occupancy Codebook.
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CodebookState {
    pub unpaired_count: usize,
    pub degenerate_set_size: usize,
}

impl CodebookState {
    pub fn new(unpaired_count: usize, degenerate_set_size: usize) -> Self {
        Self { unpaired_count, degenerate_set_size }
    }

    pub fn calculate_spin(&self) -> f64 {
        self.unpaired_count as f64 / 2.0
    }

    pub fn calculate_multiplicity(&self) -> usize {
        self.unpaired_count + 1
    }
}

/// Codebook Engine implementing G0-G5 gate priority (§3) and log state derivation (§7).
#[derive(Debug, Clone)]
pub struct CodebookEngine {
    pub register: PeriodRegister,
    pub occupancy: HashMap<PauliKey, Vec<(String, SpinTag)>>,
    pub person_seats: HashMap<String, HashSet<PauliKey>>,
    pub waivers: HashSet<(String, PauliKey)>,
    pub log: Vec<LogRow>,
}

impl CodebookEngine {
    pub fn new(mut register: PeriodRegister) -> Self {
        register.freeze();
        Self {
            register,
            occupancy: HashMap::new(),
            person_seats: HashMap::new(),
            waivers: HashSet::new(),
            log: Vec::new(),
        }
    }

    pub fn grant_waiver(&mut self, person_id: &str, key: PauliKey) {
        self.waivers.insert((person_id.to_string(), key));
    }

    /// Count of un-occupied K in D (U in §6).
    pub fn count_empty_slots_in_d(&self) -> usize {
        let d_keys = self.register.get_d_keys();
        d_keys.iter().filter(|k| {
            self.occupancy.get(k).map(|occ| occ.is_empty()).unwrap_or(true)
        }).count()
    }

    /// Count of K in D with occupancy exactly 1 (n_unpaired in §7).
    pub fn count_unpaired_in_d(&self) -> usize {
        let d_keys = self.register.get_d_keys();
        d_keys.iter().filter(|k| {
            self.occupancy.get(k).map(|occ| occ.len() == 1).unwrap_or(false)
        }).count()
    }

    pub fn current_spin(&self) -> f64 {
        self.count_unpaired_in_d() as f64 / 2.0
    }

    pub fn current_multiplicity(&self) -> usize {
        self.count_unpaired_in_d() + 1
    }

    pub fn get_occupants(&self, key: &PauliKey) -> Vec<String> {
        self.occupancy.get(key)
            .map(|list| list.iter().map(|(p, _)| p.clone()).collect())
            .unwrap_or_default()
    }

    /// Evaluate G0-G5 gate logic for a proposed FILL (§3).
    pub fn propose_fill(
        &mut self,
        ts: impl Into<String>,
        person_id: impl Into<String>,
        role_class: impl Into<String>,
        slot_id: impl Into<String>,
        waiver_id: Option<String>,
    ) -> LogRow {
        let ts_str = ts.into();
        let person = person_id.into();
        let rc = role_class.into();
        let slot = slot_id.into();
        let key = PauliKey::new(rc.clone(), slot.clone(), self.register.period_id.clone());
        let occupants_before = self.get_occupants(&key);

        // G0: role_class & slot registered for this period_id
        if !self.register.is_registered(&rc, &slot) {
            let row = LogRow {
                ts: ts_str,
                period_id: self.register.period_id.clone(),
                person_id: person,
                role_class: rc,
                slot_id: slot,
                proposed_op: ProposedOp::Fill,
                result: CodebookResultCode::RejUnknownClass,
                sigma: None,
                n_unpaired_after: None,
                S_after: None,
                M_after: None,
                occupants_before,
                waiver_id,
            };
            self.log.push(row.clone());
            return row;
        }

        let is_deg = self.register.is_degenerate(&rc);

        // G1: person_id does not already occupy a different K in this period, unless waiver open
        let person_holds_other_k = self.person_seats.get(&person)
            .map(|seats| seats.iter().any(|k| k != &key))
            .unwrap_or(false);
        let has_waiver = waiver_id.is_some() || self.waivers.contains(&(person.clone(), key.clone()));

        if person_holds_other_k && !has_waiver {
            let row = LogRow {
                ts: ts_str,
                period_id: self.register.period_id.clone(),
                person_id: person,
                role_class: rc,
                slot_id: slot,
                proposed_op: ProposedOp::Fill,
                result: CodebookResultCode::RejDualHat,
                sigma: None,
                n_unpaired_after: None,
                S_after: None,
                M_after: None,
                occupants_before,
                waiver_id,
            };
            self.log.push(row.clone());
            return row;
        }

        // G2: occupants(K) < 2
        let current_count = occupants_before.len();
        if current_count >= 2 {
            let row = LogRow {
                ts: ts_str,
                period_id: self.register.period_id.clone(),
                person_id: person,
                role_class: rc,
                slot_id: slot,
                proposed_op: ProposedOp::Fill,
                result: CodebookResultCode::RejPauli,
                sigma: None,
                n_unpaired_after: None,
                S_after: None,
                M_after: None,
                occupants_before,
                waiver_id,
            };
            self.log.push(row.clone());
            return row;
        }

        // G3: if occupants(K) == 1, then U == 0 in D (only applies if degenerate)
        let empty_in_d = self.count_empty_slots_in_d();
        if is_deg && current_count == 1 && empty_in_d > 0 {
            let row = LogRow {
                ts: ts_str,
                period_id: self.register.period_id.clone(),
                person_id: person,
                role_class: rc,
                slot_id: slot,
                proposed_op: ProposedOp::Fill,
                result: CodebookResultCode::RejTermOrder,
                sigma: None,
                n_unpaired_after: None,
                S_after: None,
                M_after: None,
                occupants_before,
                waiver_id,
            };
            self.log.push(row.clone());
            return row;
        }

        // G4: non-degenerate role_class -> OK_HIERARCHY or OK_DUALHAT_WAIVER
        let (result_code, sigma) = if person_holds_other_k && has_waiver {
            (CodebookResultCode::OkDualHatWaiver, if current_count == 0 { Some(SpinTag::Alpha) } else { Some(SpinTag::Beta) })
        } else if !is_deg {
            (CodebookResultCode::OkHierarchy, if current_count == 0 { Some(SpinTag::Alpha) } else { Some(SpinTag::Beta) })
        } else if current_count == 0 {
            (CodebookResultCode::OkSingle, Some(SpinTag::Alpha))
        } else {
            (CodebookResultCode::OkPair, Some(SpinTag::Beta))
        };

        // Write seat
        let sig = sigma.expect("Accepted fill must have assigned spin tag");
        self.occupancy.entry(key.clone()).or_default().push((person.clone(), sig));
        self.person_seats.entry(person.clone()).or_default().insert(key);

        let n_unpaired = self.count_unpaired_in_d();
        let s_val = self.current_spin();
        let m_val = self.current_multiplicity();

        let row = LogRow {
            ts: ts_str,
            period_id: self.register.period_id.clone(),
            person_id: person,
            role_class: rc,
            slot_id: slot,
            proposed_op: ProposedOp::Fill,
            result: result_code,
            sigma: Some(sig),
            n_unpaired_after: Some(n_unpaired),
            S_after: Some(s_val),
            M_after: Some(m_val),
            occupants_before,
            waiver_id,
        };
        self.log.push(row.clone());
        row
    }

    /// Vacate a seat (§4).
    pub fn propose_vacate(
        &mut self,
        ts: impl Into<String>,
        person_id: impl Into<String>,
        role_class: impl Into<String>,
        slot_id: impl Into<String>,
    ) -> LogRow {
        let ts_str = ts.into();
        let person = person_id.into();
        let rc = role_class.into();
        let slot = slot_id.into();
        let key = PauliKey::new(rc.clone(), slot.clone(), self.register.period_id.clone());
        let occupants_before = self.get_occupants(&key);

        let mut removed = false;
        if let Some(list) = self.occupancy.get_mut(&key) {
            if let Some(pos) = list.iter().position(|(p, _)| p == &person) {
                list.remove(pos);
                removed = true;
            }
        }

        if removed {
            if let Some(seats) = self.person_seats.get_mut(&person) {
                seats.remove(&key);
            }
            let n_unpaired = self.count_unpaired_in_d();
            let s_val = self.current_spin();
            let m_val = self.current_multiplicity();

            let row = LogRow {
                ts: ts_str,
                period_id: self.register.period_id.clone(),
                person_id: person,
                role_class: rc,
                slot_id: slot,
                proposed_op: ProposedOp::Vacate,
                result: CodebookResultCode::OkVacate,
                sigma: None,
                n_unpaired_after: Some(n_unpaired),
                S_after: Some(s_val),
                M_after: Some(m_val),
                occupants_before,
                waiver_id: None,
            };
            self.log.push(row.clone());
            row
        } else {
            let row = LogRow {
                ts: ts_str,
                period_id: self.register.period_id.clone(),
                person_id: person,
                role_class: rc,
                slot_id: slot,
                proposed_op: ProposedOp::Vacate,
                result: CodebookResultCode::RejNotOccupant,
                sigma: None,
                n_unpaired_after: None,
                S_after: None,
                M_after: None,
                occupants_before,
                waiver_id: None,
            };
            self.log.push(row.clone());
            row
        }
    }
}

/// Pure helper for Kani symbolic model-checking of gate priority G0-G3.
pub const fn evaluate_gate_pure(
    is_registered: bool,
    person_holds_other_k: bool,
    has_waiver: bool,
    occupants_count: usize,
    is_degenerate: bool,
    empty_in_d: usize,
) -> CodebookResultCode {
    if !is_registered {
        CodebookResultCode::RejUnknownClass
    } else if person_holds_other_k && !has_waiver {
        CodebookResultCode::RejDualHat
    } else if occupants_count >= 2 {
        CodebookResultCode::RejPauli
    } else if is_degenerate && occupants_count == 1 && empty_in_d > 0 {
        CodebookResultCode::RejTermOrder
    } else if person_holds_other_k && has_waiver {
        CodebookResultCode::OkDualHatWaiver
    } else if !is_degenerate {
        CodebookResultCode::OkHierarchy
    } else if occupants_count == 0 {
        CodebookResultCode::OkSingle
    } else {
        CodebookResultCode::OkPair
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_codebook_multiplicity_basic() {
        let st = CodebookState::new(3, 3);
        assert_eq!(st.calculate_spin(), 1.5);
        assert_eq!(st.calculate_multiplicity(), 4);
    }

    /// Exact test of ADR-0007 §8 Canonical Period-0 Example Log
    #[test]
    fn test_adr0007_section_8_canonical_period_0_example() {
        let mut reg = PeriodRegister::new("period-0");
        reg.register_class("facilitation", vec!["fac-1".into(), "fac-2".into(), "fac-3".into()], true).unwrap();
        reg.register_class("logistics", vec!["log-1".into()], false).unwrap();

        let mut engine = CodebookEngine::new(reg);

        // 10:00Z | alice | facilitation/fac-1 -> OK_SINGLE. U: 3->2, M=2
        let r1 = engine.propose_fill("10:00Z", "alice", "facilitation", "fac-1", None);
        assert_eq!(r1.result, CodebookResultCode::OkSingle);
        assert_eq!(r1.sigma, Some(SpinTag::Alpha));
        assert_eq!(r1.M_after, Some(2));
        assert_eq!(engine.count_empty_slots_in_d(), 2);

        // 10:05Z | bob | facilitation/fac-1 -> REJ_TERM_ORDER (fac-2 and fac-3 empty)
        let r2 = engine.propose_fill("10:05Z", "bob", "facilitation", "fac-1", None);
        assert_eq!(r2.result, CodebookResultCode::RejTermOrder);

        // 10:06Z | bob | facilitation/fac-2 -> OK_SINGLE. U: 2->1, M=3
        let r3 = engine.propose_fill("10:06Z", "bob", "facilitation", "fac-2", None);
        assert_eq!(r3.result, CodebookResultCode::OkSingle);
        assert_eq!(r3.M_after, Some(3));
        assert_eq!(engine.count_empty_slots_in_d(), 1);

        // 10:07Z | carol | facilitation/fac-3 -> OK_SINGLE. U: 1->0, M=4. Pairing now legal
        let r4 = engine.propose_fill("10:07Z", "carol", "facilitation", "fac-3", None);
        assert_eq!(r4.result, CodebookResultCode::OkSingle);
        assert_eq!(r4.M_after, Some(4));
        assert_eq!(engine.count_empty_slots_in_d(), 0);

        // 10:08Z | dave | facilitation/fac-1 -> OK_PAIR. Not bob. M=3
        let r5 = engine.propose_fill("10:08Z", "dave", "facilitation", "fac-1", None);
        assert_eq!(r5.result, CodebookResultCode::OkPair);
        assert_eq!(r5.sigma, Some(SpinTag::Beta));
        assert_eq!(r5.M_after, Some(3)); // 2 unpaired left (fac-2, fac-3) -> M = 2 + 1 = 3

        // 10:09Z | eve | facilitation/fac-1 -> REJ_PAULI (alice and dave already on K)
        let r6 = engine.propose_fill("10:09Z", "eve", "facilitation", "fac-1", None);
        assert_eq!(r6.result, CodebookResultCode::RejPauli);

        // 10:10Z | bob | facilitation/fac-1 -> REJ_DUALHAT (bob already holds fac-2)
        let r7 = engine.propose_fill("10:10Z", "bob", "facilitation", "fac-1", None);
        assert_eq!(r7.result, CodebookResultCode::RejDualHat);
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_codebook_multiplicity_bound() {
        let unpaired: usize = kani::any();
        kani::assume(unpaired < usize::MAX - 10);

        let st = CodebookState::new(unpaired, unpaired);
        kani::assert(st.calculate_multiplicity() == unpaired + 1, "Multiplicity must equal unpaired + 1");
    }

    #[kani::proof]
    fn verify_gate_priority_soundness() {
        let is_reg: bool = kani::any();
        let person_other: bool = kani::any();
        let has_waiver: bool = kani::any();
        let count: usize = kani::any();
        let is_deg: bool = kani::any();
        let empty_in_d: usize = kani::any();

        let res = evaluate_gate_pure(is_reg, person_other, has_waiver, count, is_deg, empty_in_d);

        if !is_reg {
            kani::assert(res == CodebookResultCode::RejUnknownClass, "G0 must trigger first");
        } else if person_other && !has_waiver {
            kani::assert(res == CodebookResultCode::RejDualHat, "G1 must trigger before G2/G3");
        } else if count >= 2 {
            kani::assert(res == CodebookResultCode::RejPauli, "G2 must trigger before G3");
        } else if is_deg && count == 1 && empty_in_d > 0 {
            kani::assert(res == CodebookResultCode::RejTermOrder, "G3 must trigger when U > 0");
        }
    }
}
