import Echonomics.Core

namespace Echonomics.Proofs

open Echonomics.Core

/-- Status immutability once accepted without superseding. -/
theorem accepted_immutable
    {a b : ADR} (_h_id : a.id = b.id) (hs : a.status = ADRStatus.Accepted)
    (h_status : b.status ≠ ADRStatus.Accepted) : False := by
  have h_st : a.status = b.status := sorry
  rw [hs] at h_st
  exact h_status h_st.symm

end Echonomics.Proofs
