use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_codebook_multiplicity() {
        let st = CodebookState::new(3, 3);
        assert_eq!(st.calculate_spin(), 1.5);
        assert_eq!(st.calculate_multiplicity(), 4);
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
}
