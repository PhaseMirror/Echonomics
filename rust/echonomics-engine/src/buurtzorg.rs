use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct BuurtzorgTeamEngine {
    pub nurse_count: u64,
    pub max_capacity: u64,
}

impl BuurtzorgTeamEngine {
    pub fn is_team_size_valid(&self) -> bool {
        self.nurse_count <= self.max_capacity && self.max_capacity <= 12
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_buurtzorg_team_capacity() {
        let team = BuurtzorgTeamEngine {
            nurse_count: 8,
            max_capacity: 12,
        };
        assert!(team.is_team_size_valid());
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_buurtzorg_team_capacity_bound() {
        let nurse_count: u64 = kani::any();
        let max_capacity: u64 = kani::any();

        let team = BuurtzorgTeamEngine { nurse_count, max_capacity };
        if max_capacity > 12 {
            kani::assert(!team.is_team_size_valid(), "Buurtzorg teams must not exceed 12 nurses");
        }
    }
}
