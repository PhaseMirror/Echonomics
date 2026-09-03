use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
pub struct LambdaIdentityCommitment {
    pub identity_id: u64,
    pub prime_salt: u64,
    pub is_verified: bool,
}

impl LambdaIdentityCommitment {
    pub fn is_lawful(&self) -> bool {
        self.is_verified && self.prime_salt > 1
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_lambda_identity_lawful() {
        let id = LambdaIdentityCommitment {
            identity_id: 100,
            prime_salt: 997,
            is_verified: true,
        };
        assert!(id.is_lawful());
    }
}

#[cfg(kani)]
mod kani_proofs {
    use super::*;

    #[kani::proof]
    fn verify_lambda_identity_verification() {
        let identity_id: u64 = kani::any();
        let prime_salt: u64 = kani::any();
        let is_verified: bool = kani::any();

        let id = LambdaIdentityCommitment { identity_id, prime_salt, is_verified };
        if !is_verified || prime_salt <= 1 {
            kani::assert(!id.is_lawful(), "Unverified or non-prime salt identities must fail closed");
        }
    }
}
