use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct SocialPhysicsEngine {
    pub v_pair: u64,
    pub v_nuc: u64,
    pub empty_slots: u64,
}

impl SocialPhysicsEngine {
    pub fn is_pairing_legal(&self) -> bool {
        self.empty_slots == 0
    }

    pub fn calculate_net_energy(&self) -> i64 {
        self.v_pair as i64 - self.v_nuc as i64
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_social_physics_term_order() {
        let sp = SocialPhysicsEngine {
            v_pair: 5,
            v_nuc: 10,
            empty_slots: 0,
        };
        assert!(sp.is_pairing_legal());
        assert_eq!(sp.calculate_net_energy(), -5);
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_term_order_pairing_gate() {
        let empty_slots: u64 = kani::any();
        let sp = SocialPhysicsEngine { v_pair: 0, v_nuc: 0, empty_slots };

        if empty_slots > 0 {
            kani::assert(!sp.is_pairing_legal(), "Pairing must be rejected if empty slots exist");
        }
    }
}
