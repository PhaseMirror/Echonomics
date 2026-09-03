use serde::{Deserialize, Serialize};
use std::collections::{HashMap, HashSet};

#[derive(Debug, Clone, PartialEq, Eq, Hash, Serialize, Deserialize)]
pub struct PauliKey {
    pub role_class: String,
    pub slot_id: String,
    pub period_id: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub enum SpinTag {
    Alpha,
    Beta,
}

#[derive(Debug, Clone, PartialEq, Eq, Serialize, Deserialize)]
pub enum GateResult {
    OkSingle { sigma: SpinTag },
    OkPair { sigma: SpinTag },
    OkHierarchy,
    OkDualHatWaiver { sigma: Option<SpinTag> },
    RejUnknownClass,
    RejDualHat,
    RejPauli,
    RejTermOrder,
}

#[derive(Debug, Clone, Default)]
pub struct HundianState {
    pub degenerate_classes: HashSet<String>,
    pub registered_slots: HashMap<PauliKey, Vec<String>>,
    pub person_occupancies: HashMap<(String, String), HashSet<PauliKey>>,
}

impl HundianState {
    pub fn new() -> Self {
        Self::default()
    }

    pub fn register_degenerate_class(&mut self, role_class: impl Into<String>) {
        self.degenerate_classes.insert(role_class.into());
    }

    pub fn register_slot(&mut self, key: PauliKey) {
        self.registered_slots.entry(key).or_default();
    }

    pub fn count_empty_degenerate_slots(&self, period_id: &str) -> usize {
        self.registered_slots
            .iter()
            .filter(|(k, occ)| k.period_id == period_id && self.degenerate_classes.contains(&k.role_class) && occ.is_empty())
            .count()
    }

    pub fn count_unpaired_degenerate_slots(&self, period_id: &str) -> usize {
        self.registered_slots
            .iter()
            .filter(|(k, occ)| k.period_id == period_id && self.degenerate_classes.contains(&k.role_class) && occ.len() == 1)
            .count()
    }

    pub fn calculate_multiplicity(&self, period_id: &str) -> (usize, f64, usize) {
        let n_unpaired = self.count_unpaired_degenerate_slots(period_id);
        let s = n_unpaired as f64 / 2.0;
        let m = n_unpaired + 1;
        (n_unpaired, s, m)
    }

    pub fn propose_fill(
        &mut self,
        person_id: &str,
        role_class: &str,
        slot_id: &str,
        period_id: &str,
        waiver_id: Option<&str>,
    ) -> GateResult {
        let key = PauliKey {
            role_class: role_class.to_string(),
            slot_id: slot_id.to_string(),
            period_id: period_id.to_string(),
        };

        // G0: Register check
        if !self.registered_slots.contains_key(&key) {
            return GateResult::RejUnknownClass;
        }

        // G1: Dual-hat check
        let is_user_has_other_keys = self
            .person_occupancies
            .get(&(person_id.to_string(), period_id.to_string()))
            .map(|keys| !keys.is_empty() && !keys.contains(&key))
            .unwrap_or(false);

        let used_waiver = if is_user_has_other_keys {
            if waiver_id.is_none() {
                return GateResult::RejDualHat;
            }
            true
        } else {
            false
        };

        let occupants = self.registered_slots.get(&key).unwrap();

        // G2: Pauli capacity
        if occupants.len() >= 2 {
            return GateResult::RejPauli;
        }

        let is_degenerate = self.degenerate_classes.contains(role_class);

        // G3: Term order & fill acceptance
        let result = if occupants.len() == 1 {
            if is_degenerate {
                let u = self.count_empty_degenerate_slots(period_id);
                if u > 0 {
                    return GateResult::RejTermOrder;
                }
                if used_waiver {
                    GateResult::OkDualHatWaiver { sigma: Some(SpinTag::Beta) }
                } else {
                    GateResult::OkPair { sigma: SpinTag::Beta }
                }
            } else {
                if used_waiver {
                    GateResult::OkDualHatWaiver { sigma: None }
                } else {
                    GateResult::OkHierarchy
                }
            }
        } else {
            if used_waiver {
                GateResult::OkDualHatWaiver { sigma: if is_degenerate { Some(SpinTag::Alpha) } else { None } }
            } else if is_degenerate {
                GateResult::OkSingle { sigma: SpinTag::Alpha }
            } else {
                GateResult::OkHierarchy
            }
        };

        self.registered_slots.get_mut(&key).unwrap().push(person_id.to_string());
        self.person_occupancies.entry((person_id.to_string(), period_id.to_string())).or_default().insert(key);
        result
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_echonomics_hundian_occupancy() {
        let mut state = HundianState::new();
        state.register_degenerate_class("facilitation");

        let k1 = PauliKey { role_class: "facilitation".into(), slot_id: "fac-1".into(), period_id: "P0".into() };
        let k2 = PauliKey { role_class: "facilitation".into(), slot_id: "fac-2".into(), period_id: "P0".into() };
        let k_nondeg = PauliKey { role_class: "documentation".into(), slot_id: "doc-1".into(), period_id: "P0".into() };
        let k_nondeg2 = PauliKey { role_class: "documentation".into(), slot_id: "doc-2".into(), period_id: "P0".into() };

        state.register_slot(k1);
        state.register_slot(k2);
        state.register_slot(k_nondeg);
        state.register_slot(k_nondeg2);

        let r1 = state.propose_fill("alice", "facilitation", "fac-1", "P0", None);
        assert_eq!(r1, GateResult::OkSingle { sigma: SpinTag::Alpha });

        let r2 = state.propose_fill("bob", "facilitation", "fac-1", "P0", None);
        assert_eq!(r2, GateResult::RejTermOrder);

        // Test non-degenerate OK_HIERARCHY
        let r3 = state.propose_fill("carol", "documentation", "doc-1", "P0", None);
        assert_eq!(r3, GateResult::OkHierarchy);

        let r4 = state.propose_fill("dave", "documentation", "doc-1", "P0", None);
        assert_eq!(r4, GateResult::OkHierarchy);

        // Test OK_DUALHAT_WAIVER on available non-degenerate slot doc-2
        let r5 = state.propose_fill("alice", "documentation", "doc-2", "P0", Some("waiver-123"));
        assert_eq!(r5, GateResult::OkDualHatWaiver { sigma: None });
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_echonomics_pauli_bound() {
        let mut state = HundianState::new();
        state.register_degenerate_class("fac");
        let key = PauliKey { role_class: "fac".into(), slot_id: "slot1".into(), period_id: "P0".into() };
        state.register_slot(key.clone());
        state.registered_slots.get_mut(&key).unwrap().push("p1".into());
        state.registered_slots.get_mut(&key).unwrap().push("p2".into());

        let res = state.propose_fill("p3", "fac", "slot1", "P0", None);
        kani::assert(res == GateResult::RejPauli, "Third occupant must be rejected");
    }
}
