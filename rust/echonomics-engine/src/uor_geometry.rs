use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct PrimeGeometry {
    pub prime_factor_sum: u64,
    pub conservation_bound: u64,
}

impl PrimeGeometry {
    pub fn new(prime_factor_sum: u64, conservation_bound: u64) -> Self {
        Self {
            prime_factor_sum,
            conservation_bound,
        }
    }

    pub fn is_conserved(&self) -> bool {
        self.prime_factor_sum <= self.conservation_bound
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_prime_geometry_conservation() {
        let pg = PrimeGeometry::new(12, 20);
        assert!(pg.is_conserved());
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_prime_conservation_bound() {
        let pg = PrimeGeometry {
            prime_factor_sum: 25,
            conservation_bound: 20,
        };
        kani::assert(!pg.is_conserved(), "Excess prime factor sum must fail conservation");
    }
}
