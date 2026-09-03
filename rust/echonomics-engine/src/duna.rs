use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct DunaGovernance {
    pub total_members: usize,
    pub quorum_threshold: usize,
    pub votes_for: usize,
    pub votes_against: usize,
}

impl DunaGovernance {
    pub fn new(total_members: usize, quorum_threshold: usize) -> Self {
        Self {
            total_members,
            quorum_threshold,
            votes_for: 0,
            votes_against: 0,
        }
    }

    pub fn cast_vote(&mut self, approve: bool) {
        if approve {
            self.votes_for += 1;
        } else {
            self.votes_against += 1;
        }
    }

    pub fn is_quorum_reached(&self) -> bool {
        self.votes_for + self.votes_against >= self.quorum_threshold
    }

    pub fn is_proposal_passed(&self) -> bool {
        self.is_quorum_reached() && self.votes_for > self.votes_against
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_duna_governance_pass() {
        let mut gov = DunaGovernance::new(10, 6);
        for _ in 0..7 {
            gov.cast_vote(true);
        }
        assert!(gov.is_proposal_passed());
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_duna_quorum_bound() {
        let gov = DunaGovernance {
            total_members: 10,
            quorum_threshold: 6,
            votes_for: 3,
            votes_against: 1,
        };
        kani::assert(!gov.is_proposal_passed(), "Sub-quorum proposal must not pass");
    }
}
