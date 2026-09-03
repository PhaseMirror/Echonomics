use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct TrifectaGovernanceEngine {
    pub exec_signed: bool,
    pub legis_signed: bool,
    pub judic_signed: bool,
}

impl TrifectaGovernanceEngine {
    pub fn is_consensus_reached(&self) -> bool {
        self.exec_signed && self.legis_signed && self.judic_signed
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_trifecta_consensus() {
        let tri = TrifectaGovernanceEngine {
            exec_signed: true,
            legis_signed: true,
            judic_signed: true,
        };
        assert!(tri.is_consensus_reached());
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_trifecta_3_chamber_consensus() {
        let exec_signed: bool = kani::any();
        let legis_signed: bool = kani::any();
        let judic_signed: bool = kani::any();

        let tri = TrifectaGovernanceEngine { exec_signed, legis_signed, judic_signed };
        if !exec_signed || !legis_signed || !judic_signed {
            kani::assert(!tri.is_consensus_reached(), "Tripartite consensus requires all 3 chamber signatures");
        }
    }
}
