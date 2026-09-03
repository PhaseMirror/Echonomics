use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct CivicNodeState {
    pub total_nodes: u64,
    pub active_nodes: u64,
    pub quorum_percentage: u64,
}

impl CivicNodeState {
    pub fn is_quorum_reached(&self) -> bool {
        self.active_nodes * 100 >= self.total_nodes * self.quorum_percentage
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_civic_quorum_reached() {
        let st = CivicNodeState {
            total_nodes: 10,
            active_nodes: 6,
            quorum_percentage: 50,
        };
        assert!(st.is_quorum_reached());
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_quorum_calculation() {
        let total: u64 = kani::any();
        let active: u64 = kani::any();
        kani::assume(total > 0 && total < 1000);
        kani::assume(active <= total);

        let st = CivicNodeState { total_nodes: total, active_nodes: active, quorum_percentage: 50 };
        if active * 2 >= total {
            kani::assert(st.is_quorum_reached(), "Quorum must pass if active >= 50%");
        }
    }
}
