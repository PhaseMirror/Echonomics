import Lake
open Lake DSL

package Echonomics where
  version := v!"0.1.0"

@[default_target]
lean_lib Echonomics where
  srcDir := "lean"
  roots := #[`Echonomics.Core, `Echonomics.Proofs, `Echonomics.HundianOccupancy, `Echonomics.CivicDunaGate, `Echonomics.UorPrimeGeometry, `Echonomics.EnergyLedger, `Echonomics.XiConstitutionLicense]

lean_exe TestDriver where
  srcDir := "lean"
  root := `Echonomics.Test
