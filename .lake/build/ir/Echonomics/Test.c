// Lean compiler output
// Module: Echonomics.Test
// Imports: public import Init public meta import Init public import Echonomics.Core public import Echonomics.Proofs public import Echonomics.HundianOccupancy public import Echonomics.CivicDunaGate public import Echonomics.UorPrimeGeometry public import Echonomics.EnergyLedger public import Echonomics.XiConstitutionLicense public import Echonomics.LambdaProof public import Echonomics.HundianCodebookRunbook public import Echonomics.CivicInfrastructureSpec public import Echonomics.SocialPhysicsParts public import Echonomics.BuurtzorgModel public import Echonomics.TrifectaProtocolReview
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_evaluateCslGate(lean_object*);
lean_object* lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(lean_object*, lean_object*, uint8_t);
uint8_t lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_TrifectaProtocolReview_isTripartiteConsensus(lean_object*);
uint8_t lp_Echonomics_Echonomics_CivicInfrastructureSpec_isQuorumReached(lean_object*, lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_Proofs_isGateRej(lean_object*);
uint8_t lp_Echonomics_Echonomics_Proofs_isGateOk(lean_object*);
lean_object* lp_Echonomics_Echonomics_HundianOccupancy_gateMultiplicityDelta(lean_object*);
uint8_t lp_Echonomics_Echonomics_Proofs_isValidTransition(uint8_t, uint8_t);
uint8_t lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(lean_object*);
uint8_t lp_Echonomics_Echonomics_EnergyLedger_isGroundState(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_isLawfulRecursion(lean_object*);
uint8_t lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(lean_object*);
lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(lean_object*);
uint8_t lp_Echonomics_Echonomics_SocialPhysicsParts_isPairingLegal(lean_object*);
uint8_t lp_Echonomics_Echonomics_BuurtzorgModel_isTeamCapacityValid(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "=== Executing Echonomics Lean 4 Formal Test Suite ==="};
static const lean_object* lp_Echonomics_main___closed__0 = (const lean_object*)&lp_Echonomics_main___closed__0_value;
static lean_once_cell_t lp_Echonomics_main___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__1;
static lean_once_cell_t lp_Echonomics_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__2;
static const lean_string_object lp_Echonomics_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "✗ [FAIL] ADR-0001 Multiplicity test failed"};
static const lean_object* lp_Echonomics_main___closed__3 = (const lean_object*)&lp_Echonomics_main___closed__3_value;
static const lean_ctor_object lp_Echonomics_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__3_value)}};
static const lean_object* lp_Echonomics_main___closed__4 = (const lean_object*)&lp_Echonomics_main___closed__4_value;
static const lean_string_object lp_Echonomics_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Half-fill max multiplicity M = |D| + 1 verified"};
static const lean_object* lp_Echonomics_main___closed__5 = (const lean_object*)&lp_Echonomics_main___closed__5_value;
static lean_once_cell_t lp_Echonomics_main___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__6;
static lean_once_cell_t lp_Echonomics_main___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__7;
static const lean_string_object lp_Echonomics_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 40, .m_data = "✗ [FAIL] ADR-0001 Pauli gate test failed"};
static const lean_object* lp_Echonomics_main___closed__8 = (const lean_object*)&lp_Echonomics_main___closed__8_value;
static const lean_ctor_object lp_Echonomics_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__8_value)}};
static const lean_object* lp_Echonomics_main___closed__9 = (const lean_object*)&lp_Echonomics_main___closed__9_value;
static const lean_string_object lp_Echonomics_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Pauli exclusion 3rd occupant rejection verified"};
static const lean_object* lp_Echonomics_main___closed__10 = (const lean_object*)&lp_Echonomics_main___closed__10_value;
static lean_once_cell_t lp_Echonomics_main___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__11;
static lean_once_cell_t lp_Echonomics_main___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__12;
static const lean_string_object lp_Echonomics_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0001 Non-degenerate gate test failed"};
static const lean_object* lp_Echonomics_main___closed__13 = (const lean_object*)&lp_Echonomics_main___closed__13_value;
static const lean_ctor_object lp_Echonomics_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__13_value)}};
static const lean_object* lp_Echonomics_main___closed__14 = (const lean_object*)&lp_Echonomics_main___closed__14_value;
static const lean_string_object lp_Echonomics_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 71, .m_data = "✓ [PASS] ADR-0001: Non-degenerate second occupant OK_HIERARCHY verified"};
static const lean_object* lp_Echonomics_main___closed__15 = (const lean_object*)&lp_Echonomics_main___closed__15_value;
static lean_once_cell_t lp_Echonomics_main___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__16;
static lean_once_cell_t lp_Echonomics_main___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__17;
static const lean_string_object lp_Echonomics_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 45, .m_data = "✗ [FAIL] ADR-0001 Term-order gate test failed"};
static const lean_object* lp_Echonomics_main___closed__18 = (const lean_object*)&lp_Echonomics_main___closed__18_value;
static const lean_ctor_object lp_Echonomics_main___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__18_value)}};
static const lean_object* lp_Echonomics_main___closed__19 = (const lean_object*)&lp_Echonomics_main___closed__19_value;
static const lean_string_object lp_Echonomics_main___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 69, .m_data = "✓ [PASS] ADR-0001: Term-order gate blocks pairing when U > 0 verified"};
static const lean_object* lp_Echonomics_main___closed__20 = (const lean_object*)&lp_Echonomics_main___closed__20_value;
static lean_once_cell_t lp_Echonomics_main___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__21;
static const lean_ctor_object lp_Echonomics_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_main___closed__22 = (const lean_object*)&lp_Echonomics_main___closed__22_value;
static lean_once_cell_t lp_Echonomics_main___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__23;
static const lean_string_object lp_Echonomics_main___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 43, .m_data = "✗ [FAIL] ADR-0001 Term-order OK test failed"};
static const lean_object* lp_Echonomics_main___closed__24 = (const lean_object*)&lp_Echonomics_main___closed__24_value;
static const lean_ctor_object lp_Echonomics_main___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__24_value)}};
static const lean_object* lp_Echonomics_main___closed__25 = (const lean_object*)&lp_Echonomics_main___closed__25_value;
static const lean_string_object lp_Echonomics_main___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 64, .m_data = "✓ [PASS] ADR-0001: Term-order allows pairing when U = 0 verified"};
static const lean_object* lp_Echonomics_main___closed__26 = (const lean_object*)&lp_Echonomics_main___closed__26_value;
static lean_once_cell_t lp_Echonomics_main___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__27;
static const lean_ctor_object lp_Echonomics_main___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_main___closed__28 = (const lean_object*)&lp_Echonomics_main___closed__28_value;
static lean_once_cell_t lp_Echonomics_main___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__29;
static const lean_string_object lp_Echonomics_main___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 51, .m_data = "✗ [FAIL] ADR-0001 Empty degenerate gate test failed"};
static const lean_object* lp_Echonomics_main___closed__30 = (const lean_object*)&lp_Echonomics_main___closed__30_value;
static const lean_ctor_object lp_Echonomics_main___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__30_value)}};
static const lean_object* lp_Echonomics_main___closed__31 = (const lean_object*)&lp_Echonomics_main___closed__31_value;
static const lean_string_object lp_Echonomics_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Empty degenerate slot → OkSingle Alpha verified"};
static const lean_object* lp_Echonomics_main___closed__32 = (const lean_object*)&lp_Echonomics_main___closed__32_value;
static lean_once_cell_t lp_Echonomics_main___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__33;
static lean_once_cell_t lp_Echonomics_main___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__34;
static const lean_string_object lp_Echonomics_main___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "✗ [FAIL] ADR-0001 Empty non-degenerate gate test failed"};
static const lean_object* lp_Echonomics_main___closed__35 = (const lean_object*)&lp_Echonomics_main___closed__35_value;
static const lean_ctor_object lp_Echonomics_main___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__35_value)}};
static const lean_object* lp_Echonomics_main___closed__36 = (const lean_object*)&lp_Echonomics_main___closed__36_value;
static const lean_string_object lp_Echonomics_main___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 67, .m_data = "✓ [PASS] ADR-0001: Empty non-degenerate slot → OkHierarchy verified"};
static const lean_object* lp_Echonomics_main___closed__37 = (const lean_object*)&lp_Echonomics_main___closed__37_value;
static lean_once_cell_t lp_Echonomics_main___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__38;
static lean_once_cell_t lp_Echonomics_main___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__39;
static const lean_string_object lp_Echonomics_main___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0001 Closed shell singlet test failed"};
static const lean_object* lp_Echonomics_main___closed__40 = (const lean_object*)&lp_Echonomics_main___closed__40_value;
static const lean_ctor_object lp_Echonomics_main___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__40_value)}};
static const lean_object* lp_Echonomics_main___closed__41 = (const lean_object*)&lp_Echonomics_main___closed__41_value;
static const lean_string_object lp_Echonomics_main___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 54, .m_data = "✓ [PASS] ADR-0001: Closed shell singlet M = 1 verified"};
static const lean_object* lp_Echonomics_main___closed__42 = (const lean_object*)&lp_Echonomics_main___closed__42_value;
static lean_once_cell_t lp_Echonomics_main___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__43;
static lean_once_cell_t lp_Echonomics_main___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__44;
static const lean_string_object lp_Echonomics_main___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0001 Pauli 4th occupant test failed"};
static const lean_object* lp_Echonomics_main___closed__45 = (const lean_object*)&lp_Echonomics_main___closed__45_value;
static const lean_ctor_object lp_Echonomics_main___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__45_value)}};
static const lean_object* lp_Echonomics_main___closed__46 = (const lean_object*)&lp_Echonomics_main___closed__46_value;
static const lean_string_object lp_Echonomics_main___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Pauli exclusion 4th occupant rejection verified"};
static const lean_object* lp_Echonomics_main___closed__47 = (const lean_object*)&lp_Echonomics_main___closed__47_value;
static lean_once_cell_t lp_Echonomics_main___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__48;
static lean_once_cell_t lp_Echonomics_main___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__49;
static const lean_string_object lp_Echonomics_main___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "✗ [FAIL] ADR-0001 Multiplicity monotonicity test failed"};
static const lean_object* lp_Echonomics_main___closed__50 = (const lean_object*)&lp_Echonomics_main___closed__50_value;
static const lean_ctor_object lp_Echonomics_main___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__50_value)}};
static const lean_object* lp_Echonomics_main___closed__51 = (const lean_object*)&lp_Echonomics_main___closed__51_value;
static const lean_string_object lp_Echonomics_main___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 65, .m_data = "✓ [PASS] ADR-0001: Multiplicity monotonicity M(5) > M(3) verified"};
static const lean_object* lp_Echonomics_main___closed__52 = (const lean_object*)&lp_Echonomics_main___closed__52_value;
static lean_once_cell_t lp_Echonomics_main___closed__53_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__53;
static lean_once_cell_t lp_Echonomics_main___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__54;
static const lean_string_object lp_Echonomics_main___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 46, .m_data = "✗ [FAIL] ADR-0001 Multiplicity > n test failed"};
static const lean_object* lp_Echonomics_main___closed__55 = (const lean_object*)&lp_Echonomics_main___closed__55_value;
static const lean_ctor_object lp_Echonomics_main___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__55_value)}};
static const lean_object* lp_Echonomics_main___closed__56 = (const lean_object*)&lp_Echonomics_main___closed__56_value;
static const lean_string_object lp_Echonomics_main___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 60, .m_data = "✓ [PASS] ADR-0001: Multiplicity always > n_unpaired verified"};
static const lean_object* lp_Echonomics_main___closed__57 = (const lean_object*)&lp_Echonomics_main___closed__57_value;
static lean_once_cell_t lp_Echonomics_main___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__58;
static const lean_string_object lp_Echonomics_main___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0001 Gate classification test failed"};
static const lean_object* lp_Echonomics_main___closed__59 = (const lean_object*)&lp_Echonomics_main___closed__59_value;
static const lean_ctor_object lp_Echonomics_main___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__59_value)}};
static const lean_object* lp_Echonomics_main___closed__60 = (const lean_object*)&lp_Echonomics_main___closed__60_value;
static const lean_string_object lp_Echonomics_main___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 60, .m_data = "✓ [PASS] ADR-0001: RejPauli classified as rejection verified"};
static const lean_object* lp_Echonomics_main___closed__61 = (const lean_object*)&lp_Echonomics_main___closed__61_value;
static lean_once_cell_t lp_Echonomics_main___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__62;
static const lean_string_object lp_Echonomics_main___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 52, .m_data = "✗ [FAIL] ADR-0001 Gate Ok classification test failed"};
static const lean_object* lp_Echonomics_main___closed__63 = (const lean_object*)&lp_Echonomics_main___closed__63_value;
static const lean_ctor_object lp_Echonomics_main___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__63_value)}};
static const lean_object* lp_Echonomics_main___closed__64 = (const lean_object*)&lp_Echonomics_main___closed__64_value;
static const lean_string_object lp_Echonomics_main___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 61, .m_data = "✓ [PASS] ADR-0001: OkSingle classified as acceptance verified"};
static const lean_object* lp_Echonomics_main___closed__65 = (const lean_object*)&lp_Echonomics_main___closed__65_value;
static lean_once_cell_t lp_Echonomics_main___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__66;
static lean_once_cell_t lp_Echonomics_main___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__67;
static const lean_string_object lp_Echonomics_main___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0001 Multiplicity delta test failed"};
static const lean_object* lp_Echonomics_main___closed__68 = (const lean_object*)&lp_Echonomics_main___closed__68_value;
static const lean_ctor_object lp_Echonomics_main___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__68_value)}};
static const lean_object* lp_Echonomics_main___closed__69 = (const lean_object*)&lp_Echonomics_main___closed__69_value;
static const lean_string_object lp_Echonomics_main___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 59, .m_data = "✓ [PASS] ADR-0001: OkSingle multiplicity delta = 1 verified"};
static const lean_object* lp_Echonomics_main___closed__70 = (const lean_object*)&lp_Echonomics_main___closed__70_value;
static lean_once_cell_t lp_Echonomics_main___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__71;
static lean_once_cell_t lp_Echonomics_main___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__72;
static const lean_string_object lp_Echonomics_main___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0001 RejPauli delta test failed"};
static const lean_object* lp_Echonomics_main___closed__73 = (const lean_object*)&lp_Echonomics_main___closed__73_value;
static const lean_ctor_object lp_Echonomics_main___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__73_value)}};
static const lean_object* lp_Echonomics_main___closed__74 = (const lean_object*)&lp_Echonomics_main___closed__74_value;
static const lean_string_object lp_Echonomics_main___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 59, .m_data = "✓ [PASS] ADR-0001: RejPauli multiplicity delta = 0 verified"};
static const lean_object* lp_Echonomics_main___closed__75 = (const lean_object*)&lp_Echonomics_main___closed__75_value;
static lean_once_cell_t lp_Echonomics_main___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__76;
static const lean_string_object lp_Echonomics_main___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0001 Lifecycle transition test failed"};
static const lean_object* lp_Echonomics_main___closed__77 = (const lean_object*)&lp_Echonomics_main___closed__77_value;
static const lean_ctor_object lp_Echonomics_main___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__77_value)}};
static const lean_object* lp_Echonomics_main___closed__78 = (const lean_object*)&lp_Echonomics_main___closed__78_value;
static const lean_string_object lp_Echonomics_main___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 61, .m_data = "✓ [PASS] ADR-0001: Lifecycle Proposed→Accepted valid verified"};
static const lean_object* lp_Echonomics_main___closed__79 = (const lean_object*)&lp_Echonomics_main___closed__79_value;
static lean_once_cell_t lp_Echonomics_main___closed__80_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__80;
static const lean_string_object lp_Echonomics_main___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 78, .m_data = "✓ [PASS] ADR-0001: Lifecycle Deprecated→Accepted invalid (no revival) verified"};
static const lean_object* lp_Echonomics_main___closed__81 = (const lean_object*)&lp_Echonomics_main___closed__81_value;
static lean_once_cell_t lp_Echonomics_main___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__82;
static const lean_string_object lp_Echonomics_main___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 78, .m_data = "✓ [PASS] ADR-0001: Lifecycle Superseded→Accepted invalid (no revival) verified"};
static const lean_object* lp_Echonomics_main___closed__83 = (const lean_object*)&lp_Echonomics_main___closed__83_value;
static const lean_string_object lp_Echonomics_main___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_Echonomics_main___closed__84 = (const lean_object*)&lp_Echonomics_main___closed__84_value;
static const lean_string_object lp_Echonomics_main___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 46, .m_data = "── ADR-0001 Formal Test Suite: 18/18 passed ──"};
static const lean_object* lp_Echonomics_main___closed__85 = (const lean_object*)&lp_Echonomics_main___closed__85_value;
static const lean_ctor_object lp_Echonomics_main___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__86 = (const lean_object*)&lp_Echonomics_main___closed__86_value;
static lean_once_cell_t lp_Echonomics_main___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__87;
static const lean_string_object lp_Echonomics_main___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 39, .m_data = "✗ [FAIL] ADR-0002 DUNA Gate test failed"};
static const lean_object* lp_Echonomics_main___closed__88 = (const lean_object*)&lp_Echonomics_main___closed__88_value;
static const lean_ctor_object lp_Echonomics_main___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__88_value)}};
static const lean_object* lp_Echonomics_main___closed__89 = (const lean_object*)&lp_Echonomics_main___closed__89_value;
static const lean_string_object lp_Echonomics_main___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0002: DUNA Constitutional Quorum & Vote Gate verified"};
static const lean_object* lp_Echonomics_main___closed__90 = (const lean_object*)&lp_Echonomics_main___closed__90_value;
static const lean_ctor_object lp_Echonomics_main___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__91 = (const lean_object*)&lp_Echonomics_main___closed__91_value;
static lean_once_cell_t lp_Echonomics_main___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__92;
static const lean_string_object lp_Echonomics_main___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0003 UOR Prime Geometry test failed"};
static const lean_object* lp_Echonomics_main___closed__93 = (const lean_object*)&lp_Echonomics_main___closed__93_value;
static const lean_ctor_object lp_Echonomics_main___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__93_value)}};
static const lean_object* lp_Echonomics_main___closed__94 = (const lean_object*)&lp_Echonomics_main___closed__94_value;
static const lean_string_object lp_Echonomics_main___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 65, .m_data = "✓ [PASS] ADR-0003: UOR Prime Geometry Conservation Bound verified"};
static const lean_object* lp_Echonomics_main___closed__95 = (const lean_object*)&lp_Echonomics_main___closed__95_value;
static const lean_ctor_object lp_Echonomics_main___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__96 = (const lean_object*)&lp_Echonomics_main___closed__96_value;
static const lean_ctor_object lp_Echonomics_main___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__97 = (const lean_object*)&lp_Echonomics_main___closed__97_value;
static lean_once_cell_t lp_Echonomics_main___closed__98_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__98;
static const lean_string_object lp_Echonomics_main___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 43, .m_data = "✗ [FAIL] ADR-0004 Energy Ledger test failed"};
static const lean_object* lp_Echonomics_main___closed__99 = (const lean_object*)&lp_Echonomics_main___closed__99_value;
static const lean_ctor_object lp_Echonomics_main___closed__100_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__99_value)}};
static const lean_object* lp_Echonomics_main___closed__100 = (const lean_object*)&lp_Echonomics_main___closed__100_value;
static const lean_string_object lp_Echonomics_main___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 86, .m_data = "✓ [PASS] ADR-0004: Energy Ledger E = V_pair - V_nuc Ground State Minimization verified"};
static const lean_object* lp_Echonomics_main___closed__101 = (const lean_object*)&lp_Echonomics_main___closed__101_value;
static const lean_string_object lp_Echonomics_main___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 44, .m_data = "✗ [FAIL] ADR-0005 Ξ-Constitution test failed"};
static const lean_object* lp_Echonomics_main___closed__102 = (const lean_object*)&lp_Echonomics_main___closed__102_value;
static const lean_ctor_object lp_Echonomics_main___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__102_value)}};
static const lean_object* lp_Echonomics_main___closed__103 = (const lean_object*)&lp_Echonomics_main___closed__103_value;
static lean_once_cell_t lp_Echonomics_main___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__104;
static lean_once_cell_t lp_Echonomics_main___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__105;
static const lean_ctor_object lp_Echonomics_main___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__106 = (const lean_object*)&lp_Echonomics_main___closed__106_value;
static lean_once_cell_t lp_Echonomics_main___closed__107_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__107;
static const lean_string_object lp_Echonomics_main___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 80, .m_data = "✓ [PASS] ADR-0005: Ξ-Constitution CSL Gate (N, B, S) & Lawful Recursion verified"};
static const lean_object* lp_Echonomics_main___closed__108 = (const lean_object*)&lp_Echonomics_main___closed__108_value;
static lean_once_cell_t lp_Echonomics_main___closed__109_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__109;
static lean_once_cell_t lp_Echonomics_main___closed__110_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__110;
static const lean_string_object lp_Echonomics_main___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "✗ [FAIL] ADR-0006 Lambda-Proof test failed"};
static const lean_object* lp_Echonomics_main___closed__111 = (const lean_object*)&lp_Echonomics_main___closed__111_value;
static const lean_ctor_object lp_Echonomics_main___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__111_value)}};
static const lean_object* lp_Echonomics_main___closed__112 = (const lean_object*)&lp_Echonomics_main___closed__112_value;
static const lean_string_object lp_Echonomics_main___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 82, .m_data = "✓ [PASS] ADR-0006: Lambda-Proof Smart Contracts & ZK Circuits Integration verified"};
static const lean_object* lp_Echonomics_main___closed__113 = (const lean_object*)&lp_Echonomics_main___closed__113_value;
static const lean_ctor_object lp_Echonomics_main___closed__114_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__114 = (const lean_object*)&lp_Echonomics_main___closed__114_value;
static lean_once_cell_t lp_Echonomics_main___closed__115_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__115;
static lean_once_cell_t lp_Echonomics_main___closed__116_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__116;
static const lean_string_object lp_Echonomics_main___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0007..0009 Codebook test failed"};
static const lean_object* lp_Echonomics_main___closed__117 = (const lean_object*)&lp_Echonomics_main___closed__117_value;
static const lean_ctor_object lp_Echonomics_main___closed__118_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__117_value)}};
static const lean_object* lp_Echonomics_main___closed__118 = (const lean_object*)&lp_Echonomics_main___closed__118_value;
static const lean_string_object lp_Echonomics_main___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 77, .m_data = "✓ [PASS] ADR-0007..0009: Codebook & Runbook Multiplicity M = |D| + 1 verified"};
static const lean_object* lp_Echonomics_main___closed__119 = (const lean_object*)&lp_Echonomics_main___closed__119_value;
static lean_once_cell_t lp_Echonomics_main___closed__120_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__120;
static const lean_string_object lp_Echonomics_main___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 46, .m_data = "✗ [FAIL] ADR-0010..0012 Civic Spec test failed"};
static const lean_object* lp_Echonomics_main___closed__121 = (const lean_object*)&lp_Echonomics_main___closed__121_value;
static const lean_ctor_object lp_Echonomics_main___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__121_value)}};
static const lean_object* lp_Echonomics_main___closed__122 = (const lean_object*)&lp_Echonomics_main___closed__122_value;
static const lean_string_object lp_Echonomics_main___closed__123_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = "✓ [PASS] ADR-0010..0012: DUNA & Civic Infrastructure Quorum verified"};
static const lean_object* lp_Echonomics_main___closed__123 = (const lean_object*)&lp_Echonomics_main___closed__123_value;
static const lean_ctor_object lp_Echonomics_main___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__124 = (const lean_object*)&lp_Echonomics_main___closed__124_value;
static lean_once_cell_t lp_Echonomics_main___closed__125_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__125;
static const lean_string_object lp_Echonomics_main___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0013..0015 Social Physics test failed"};
static const lean_object* lp_Echonomics_main___closed__126 = (const lean_object*)&lp_Echonomics_main___closed__126_value;
static const lean_ctor_object lp_Echonomics_main___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__126_value)}};
static const lean_object* lp_Echonomics_main___closed__127 = (const lean_object*)&lp_Echonomics_main___closed__127_value;
static const lean_string_object lp_Echonomics_main___closed__128_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 75, .m_data = "✓ [PASS] ADR-0013..0015: Term-Order Gate pairing condition (U = 0) verified"};
static const lean_object* lp_Echonomics_main___closed__128 = (const lean_object*)&lp_Echonomics_main___closed__128_value;
static const lean_ctor_object lp_Echonomics_main___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__129 = (const lean_object*)&lp_Echonomics_main___closed__129_value;
static lean_once_cell_t lp_Echonomics_main___closed__130_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__130;
static const lean_string_object lp_Echonomics_main___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 45, .m_data = "✗ [FAIL] ADR-0016..0018 Buurtzorg test failed"};
static const lean_object* lp_Echonomics_main___closed__131 = (const lean_object*)&lp_Echonomics_main___closed__131_value;
static const lean_ctor_object lp_Echonomics_main___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__131_value)}};
static const lean_object* lp_Echonomics_main___closed__132 = (const lean_object*)&lp_Echonomics_main___closed__132_value;
static const lean_string_object lp_Echonomics_main___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 78, .m_data = "✓ [PASS] ADR-0016..0018: Buurtzorg Self-Governing Team Capacity Bound verified"};
static const lean_object* lp_Echonomics_main___closed__133 = (const lean_object*)&lp_Echonomics_main___closed__133_value;
static lean_once_cell_t lp_Echonomics_main___closed__134_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__134;
static lean_once_cell_t lp_Echonomics_main___closed__135_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__135;
static const lean_string_object lp_Echonomics_main___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0019..0021 Trifecta test failed"};
static const lean_object* lp_Echonomics_main___closed__136 = (const lean_object*)&lp_Echonomics_main___closed__136_value;
static const lean_ctor_object lp_Echonomics_main___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__136_value)}};
static const lean_object* lp_Echonomics_main___closed__137 = (const lean_object*)&lp_Echonomics_main___closed__137_value;
static const lean_string_object lp_Echonomics_main___closed__138_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 72, .m_data = "✓ [PASS] ADR-0019..0021: Trifecta Tripartite Consensus & Review verified"};
static const lean_object* lp_Echonomics_main___closed__138 = (const lean_object*)&lp_Echonomics_main___closed__138_value;
static const lean_string_object lp_Echonomics_main___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "=== All Echonomics Formal Lean 4 Tests Passed Cleanly ==="};
static const lean_object* lp_Echonomics_main___closed__139 = (const lean_object*)&lp_Echonomics_main___closed__139_value;
static const lean_string_object lp_Echonomics_main___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 61, .m_data = "✗ [FAIL] ADR-0001 Lifecycle superseded no-revival test failed"};
static const lean_object* lp_Echonomics_main___closed__140 = (const lean_object*)&lp_Echonomics_main___closed__140_value;
static const lean_ctor_object lp_Echonomics_main___closed__141_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__140_value)}};
static const lean_object* lp_Echonomics_main___closed__141 = (const lean_object*)&lp_Echonomics_main___closed__141_value;
static const lean_string_object lp_Echonomics_main___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0001 Lifecycle no-revival test failed"};
static const lean_object* lp_Echonomics_main___closed__142 = (const lean_object*)&lp_Echonomics_main___closed__142_value;
static const lean_ctor_object lp_Echonomics_main___closed__143_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__142_value)}};
static const lean_object* lp_Echonomics_main___closed__143 = (const lean_object*)&lp_Echonomics_main___closed__143_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_Echonomics_main___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object* v_s_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_putStr_4_; lean_object* v___x_5_; 
v___x_3_ = lean_get_stdout();
v_putStr_4_ = lean_ctor_get(v___x_3_, 4);
lean_inc_ref(v_putStr_4_);
lean_dec_ref(v___x_3_);
v___x_5_ = lean_apply_2(v_putStr_4_, v_s_1_, lean_box(0));
return v___x_5_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object* v_s_6_, lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v_s_6_);
return v_res_8_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0(lean_object* v_s_9_){
_start:
{
uint32_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_11_ = 10;
v___x_12_ = lean_string_push(v_s_9_, v___x_11_);
v___x_13_ = lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v___x_12_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0___boxed(lean_object* v_s_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = lp_Echonomics_IO_println___at___00main_spec__0(v_s_14_);
return v_res_16_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__1(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_unsigned_to_nat(3u);
v___x_19_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_18_);
return v___x_19_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__2(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_20_ = lean_unsigned_to_nat(4u);
v___x_21_ = lean_obj_once(&lp_Echonomics_main___closed__1, &lp_Echonomics_main___closed__1_once, _init_lp_Echonomics_main___closed__1);
v___x_22_ = lean_nat_dec_eq(v___x_21_, v___x_20_);
return v___x_22_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__6(void){
_start:
{
uint8_t v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_27_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_28_ = lean_unsigned_to_nat(0u);
v___x_29_ = lean_unsigned_to_nat(2u);
v___x_30_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_29_, v___x_28_, v___x_27_);
return v___x_30_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__7(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_31_ = lean_box(6);
v___x_32_ = lean_obj_once(&lp_Echonomics_main___closed__6, &lp_Echonomics_main___closed__6_once, _init_lp_Echonomics_main___closed__6);
v___x_33_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_32_, v___x_31_);
return v___x_33_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__11(void){
_start:
{
uint8_t v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = 0;
v___x_39_ = lean_unsigned_to_nat(1u);
v___x_40_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_39_, v___x_39_, v___x_38_);
return v___x_40_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__12(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; 
v___x_41_ = lean_box(2);
v___x_42_ = lean_obj_once(&lp_Echonomics_main___closed__11, &lp_Echonomics_main___closed__11_once, _init_lp_Echonomics_main___closed__11);
v___x_43_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_42_, v___x_41_);
return v___x_43_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__16(void){
_start:
{
uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_48_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_49_ = lean_unsigned_to_nat(3u);
v___x_50_ = lean_unsigned_to_nat(1u);
v___x_51_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_50_, v___x_49_, v___x_48_);
return v___x_51_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__17(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_52_ = lean_box(7);
v___x_53_ = lean_obj_once(&lp_Echonomics_main___closed__16, &lp_Echonomics_main___closed__16_once, _init_lp_Echonomics_main___closed__16);
v___x_54_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__21(void){
_start:
{
uint8_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_60_ = lean_unsigned_to_nat(0u);
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_61_, v___x_60_, v___x_59_);
return v___x_62_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__23(void){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; 
v___x_65_ = ((lean_object*)(lp_Echonomics_main___closed__22));
v___x_66_ = lean_obj_once(&lp_Echonomics_main___closed__21, &lp_Echonomics_main___closed__21_once, _init_lp_Echonomics_main___closed__21);
v___x_67_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_66_, v___x_65_);
return v___x_67_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__27(void){
_start:
{
uint8_t v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_72_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_73_ = lean_unsigned_to_nat(5u);
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_74_, v___x_73_, v___x_72_);
return v___x_75_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__29(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; uint8_t v___x_80_; 
v___x_78_ = ((lean_object*)(lp_Echonomics_main___closed__28));
v___x_79_ = lean_obj_once(&lp_Echonomics_main___closed__27, &lp_Echonomics_main___closed__27_once, _init_lp_Echonomics_main___closed__27);
v___x_80_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__33(void){
_start:
{
uint8_t v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_85_ = 0;
v___x_86_ = lean_unsigned_to_nat(5u);
v___x_87_ = lean_unsigned_to_nat(0u);
v___x_88_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_87_, v___x_86_, v___x_85_);
return v___x_88_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__34(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; 
v___x_89_ = lean_box(2);
v___x_90_ = lean_obj_once(&lp_Echonomics_main___closed__33, &lp_Echonomics_main___closed__33_once, _init_lp_Echonomics_main___closed__33);
v___x_91_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_90_, v___x_89_);
return v___x_91_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__38(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_unsigned_to_nat(0u);
v___x_97_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_96_);
return v___x_97_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__39(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_98_ = lean_unsigned_to_nat(1u);
v___x_99_ = lean_obj_once(&lp_Echonomics_main___closed__38, &lp_Echonomics_main___closed__38_once, _init_lp_Echonomics_main___closed__38);
v___x_100_ = lean_nat_dec_eq(v___x_99_, v___x_98_);
return v___x_100_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__43(void){
_start:
{
uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_105_ = 0;
v___x_106_ = lean_unsigned_to_nat(0u);
v___x_107_ = lean_unsigned_to_nat(4u);
v___x_108_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_107_, v___x_106_, v___x_105_);
return v___x_108_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__44(void){
_start:
{
lean_object* v___x_109_; lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_109_ = lean_box(6);
v___x_110_ = lean_obj_once(&lp_Echonomics_main___closed__43, &lp_Echonomics_main___closed__43_once, _init_lp_Echonomics_main___closed__43);
v___x_111_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_110_, v___x_109_);
return v___x_111_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__48(void){
_start:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_unsigned_to_nat(5u);
v___x_117_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_116_);
return v___x_117_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__49(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v___x_118_ = lean_obj_once(&lp_Echonomics_main___closed__48, &lp_Echonomics_main___closed__48_once, _init_lp_Echonomics_main___closed__48);
v___x_119_ = lean_obj_once(&lp_Echonomics_main___closed__1, &lp_Echonomics_main___closed__1_once, _init_lp_Echonomics_main___closed__1);
v___x_120_ = lean_nat_dec_lt(v___x_119_, v___x_118_);
return v___x_120_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__53(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(10u);
v___x_126_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_125_);
return v___x_126_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__54(void){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_127_ = lean_obj_once(&lp_Echonomics_main___closed__53, &lp_Echonomics_main___closed__53_once, _init_lp_Echonomics_main___closed__53);
v___x_128_ = lean_unsigned_to_nat(10u);
v___x_129_ = lean_nat_dec_lt(v___x_128_, v___x_127_);
return v___x_129_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__58(void){
_start:
{
lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_134_ = lean_box(6);
v___x_135_ = lp_Echonomics_Echonomics_Proofs_isGateRej(v___x_134_);
return v___x_135_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__62(void){
_start:
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = ((lean_object*)(lp_Echonomics_main___closed__28));
v___x_141_ = lp_Echonomics_Echonomics_Proofs_isGateOk(v___x_140_);
return v___x_141_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__66(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(lp_Echonomics_main___closed__28));
v___x_147_ = lp_Echonomics_Echonomics_HundianOccupancy_gateMultiplicityDelta(v___x_146_);
return v___x_147_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__67(void){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_148_ = lean_unsigned_to_nat(1u);
v___x_149_ = lean_obj_once(&lp_Echonomics_main___closed__66, &lp_Echonomics_main___closed__66_once, _init_lp_Echonomics_main___closed__66);
v___x_150_ = lean_nat_dec_eq(v___x_149_, v___x_148_);
return v___x_150_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__71(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_155_ = lean_box(6);
v___x_156_ = lp_Echonomics_Echonomics_HundianOccupancy_gateMultiplicityDelta(v___x_155_);
return v___x_156_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__72(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = lean_unsigned_to_nat(0u);
v___x_158_ = lean_obj_once(&lp_Echonomics_main___closed__71, &lp_Echonomics_main___closed__71_once, _init_lp_Echonomics_main___closed__71);
v___x_159_ = lean_nat_dec_eq(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__76(void){
_start:
{
uint8_t v___x_164_; uint8_t v___x_165_; uint8_t v___x_166_; 
v___x_164_ = 1;
v___x_165_ = 0;
v___x_166_ = lp_Echonomics_Echonomics_Proofs_isValidTransition(v___x_165_, v___x_164_);
return v___x_166_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__80(void){
_start:
{
uint8_t v___x_171_; uint8_t v___x_172_; uint8_t v___x_173_; 
v___x_171_ = 1;
v___x_172_ = 2;
v___x_173_ = lp_Echonomics_Echonomics_Proofs_isValidTransition(v___x_172_, v___x_171_);
return v___x_173_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__82(void){
_start:
{
uint8_t v___x_175_; uint8_t v___x_176_; uint8_t v___x_177_; 
v___x_175_ = 1;
v___x_176_ = 3;
v___x_177_ = lp_Echonomics_Echonomics_Proofs_isValidTransition(v___x_176_, v___x_175_);
return v___x_177_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__87(void){
_start:
{
lean_object* v___x_186_; uint8_t v___x_187_; 
v___x_186_ = ((lean_object*)(lp_Echonomics_main___closed__86));
v___x_187_ = lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(v___x_186_);
return v___x_187_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__92(void){
_start:
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = ((lean_object*)(lp_Echonomics_main___closed__91));
v___x_196_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(v___x_195_);
return v___x_196_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__98(void){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_207_ = ((lean_object*)(lp_Echonomics_main___closed__97));
v___x_208_ = ((lean_object*)(lp_Echonomics_main___closed__96));
v___x_209_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v___x_208_, v___x_207_);
return v___x_209_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__104(void){
_start:
{
uint8_t v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_218_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_218_, 0, v___x_217_);
lean_ctor_set_uint8(v___x_218_, 1, v___x_217_);
lean_ctor_set_uint8(v___x_218_, 2, v___x_217_);
return v___x_218_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__105(void){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = lean_obj_once(&lp_Echonomics_main___closed__104, &lp_Echonomics_main___closed__104_once, _init_lp_Echonomics_main___closed__104);
v___x_220_ = lp_Echonomics_Echonomics_XiConstitutionLicense_evaluateCslGate(v___x_219_);
return v___x_220_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__107(void){
_start:
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = ((lean_object*)(lp_Echonomics_main___closed__106));
v___x_225_ = lp_Echonomics_Echonomics_XiConstitutionLicense_isLawfulRecursion(v___x_224_);
return v___x_225_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__109(void){
_start:
{
uint8_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_227_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_228_ = lean_unsigned_to_nat(1009u);
v___x_229_ = lean_unsigned_to_nat(42u);
v___x_230_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_230_, 0, v___x_229_);
lean_ctor_set(v___x_230_, 1, v___x_228_);
lean_ctor_set_uint8(v___x_230_, sizeof(void*)*2, v___x_227_);
return v___x_230_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__110(void){
_start:
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = lean_obj_once(&lp_Echonomics_main___closed__109, &lp_Echonomics_main___closed__109_once, _init_lp_Echonomics_main___closed__109);
v___x_232_ = lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(v___x_231_);
return v___x_232_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__115(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = ((lean_object*)(lp_Echonomics_main___closed__114));
v___x_240_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(v___x_239_);
return v___x_240_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__116(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_241_ = lean_unsigned_to_nat(4u);
v___x_242_ = lean_obj_once(&lp_Echonomics_main___closed__115, &lp_Echonomics_main___closed__115_once, _init_lp_Echonomics_main___closed__115);
v___x_243_ = lean_nat_dec_eq(v___x_242_, v___x_241_);
return v___x_243_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__120(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_248_ = lean_unsigned_to_nat(50u);
v___x_249_ = lean_unsigned_to_nat(6u);
v___x_250_ = lean_unsigned_to_nat(10u);
v___x_251_ = lp_Echonomics_Echonomics_CivicInfrastructureSpec_isQuorumReached(v___x_250_, v___x_249_, v___x_248_);
return v___x_251_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__125(void){
_start:
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = ((lean_object*)(lp_Echonomics_main___closed__124));
v___x_261_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isPairingLegal(v___x_260_);
return v___x_261_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__130(void){
_start:
{
lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_269_ = ((lean_object*)(lp_Echonomics_main___closed__129));
v___x_270_ = lp_Echonomics_Echonomics_BuurtzorgModel_isTeamCapacityValid(v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__134(void){
_start:
{
uint8_t v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_276_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_276_, 0, v___x_275_);
lean_ctor_set_uint8(v___x_276_, 1, v___x_275_);
lean_ctor_set_uint8(v___x_276_, 2, v___x_275_);
return v___x_276_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__135(void){
_start:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_obj_once(&lp_Echonomics_main___closed__134, &lp_Echonomics_main___closed__134_once, _init_lp_Echonomics_main___closed__134);
v___x_278_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isTripartiteConsensus(v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(lp_Echonomics_main___closed__0));
v___x_292_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_291_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_637_; 
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_637_ == 0)
{
lean_object* v_unused_638_; 
v_unused_638_ = lean_ctor_get(v___x_292_, 0);
lean_dec(v_unused_638_);
v___x_294_ = v___x_292_;
v_isShared_295_ = v_isSharedCheck_637_;
goto v_resetjp_293_;
}
else
{
lean_dec(v___x_292_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_637_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
uint8_t v___x_296_; 
v___x_296_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_297_ = ((lean_object*)(lp_Echonomics_main___closed__4));
if (v_isShared_295_ == 0)
{
lean_ctor_set_tag(v___x_294_, 1);
lean_ctor_set(v___x_294_, 0, v___x_297_);
v___x_299_ = v___x_294_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
else
{
lean_object* v___x_301_; lean_object* v___x_302_; 
lean_del_object(v___x_294_);
v___x_301_ = ((lean_object*)(lp_Echonomics_main___closed__5));
v___x_302_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_635_; 
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; 
v_unused_636_ = lean_ctor_get(v___x_302_, 0);
lean_dec(v_unused_636_);
v___x_304_ = v___x_302_;
v_isShared_305_ = v_isSharedCheck_635_;
goto v_resetjp_303_;
}
else
{
lean_dec(v___x_302_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_635_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
uint8_t v___x_306_; 
v___x_306_ = lean_uint8_once(&lp_Echonomics_main___closed__7, &lp_Echonomics_main___closed__7_once, _init_lp_Echonomics_main___closed__7);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_307_ = ((lean_object*)(lp_Echonomics_main___closed__9));
if (v_isShared_305_ == 0)
{
lean_ctor_set_tag(v___x_304_, 1);
lean_ctor_set(v___x_304_, 0, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
else
{
lean_object* v___x_311_; lean_object* v___x_312_; 
lean_del_object(v___x_304_);
v___x_311_ = ((lean_object*)(lp_Echonomics_main___closed__10));
v___x_312_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_311_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_633_; 
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_633_ == 0)
{
lean_object* v_unused_634_; 
v_unused_634_ = lean_ctor_get(v___x_312_, 0);
lean_dec(v_unused_634_);
v___x_314_ = v___x_312_;
v_isShared_315_ = v_isSharedCheck_633_;
goto v_resetjp_313_;
}
else
{
lean_dec(v___x_312_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_633_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
uint8_t v___x_316_; 
v___x_316_ = lean_uint8_once(&lp_Echonomics_main___closed__12, &lp_Echonomics_main___closed__12_once, _init_lp_Echonomics_main___closed__12);
if (v___x_316_ == 0)
{
lean_object* v___x_317_; lean_object* v___x_319_; 
v___x_317_ = ((lean_object*)(lp_Echonomics_main___closed__14));
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 1);
lean_ctor_set(v___x_314_, 0, v___x_317_);
v___x_319_ = v___x_314_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
else
{
lean_object* v___x_321_; lean_object* v___x_322_; 
lean_del_object(v___x_314_);
v___x_321_ = ((lean_object*)(lp_Echonomics_main___closed__15));
v___x_322_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_321_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_631_; 
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_322_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v___x_322_, 0);
lean_dec(v_unused_632_);
v___x_324_ = v___x_322_;
v_isShared_325_ = v_isSharedCheck_631_;
goto v_resetjp_323_;
}
else
{
lean_dec(v___x_322_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_631_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
uint8_t v___x_326_; 
v___x_326_ = lean_uint8_once(&lp_Echonomics_main___closed__17, &lp_Echonomics_main___closed__17_once, _init_lp_Echonomics_main___closed__17);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_329_; 
v___x_327_ = ((lean_object*)(lp_Echonomics_main___closed__19));
if (v_isShared_325_ == 0)
{
lean_ctor_set_tag(v___x_324_, 1);
lean_ctor_set(v___x_324_, 0, v___x_327_);
v___x_329_ = v___x_324_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v___x_327_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
else
{
lean_object* v___x_331_; lean_object* v___x_332_; 
lean_del_object(v___x_324_);
v___x_331_ = ((lean_object*)(lp_Echonomics_main___closed__20));
v___x_332_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_629_; 
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_629_ == 0)
{
lean_object* v_unused_630_; 
v_unused_630_ = lean_ctor_get(v___x_332_, 0);
lean_dec(v_unused_630_);
v___x_334_ = v___x_332_;
v_isShared_335_ = v_isSharedCheck_629_;
goto v_resetjp_333_;
}
else
{
lean_dec(v___x_332_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_629_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
uint8_t v___x_336_; 
v___x_336_ = lean_uint8_once(&lp_Echonomics_main___closed__23, &lp_Echonomics_main___closed__23_once, _init_lp_Echonomics_main___closed__23);
if (v___x_336_ == 0)
{
lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_337_ = ((lean_object*)(lp_Echonomics_main___closed__25));
if (v_isShared_335_ == 0)
{
lean_ctor_set_tag(v___x_334_, 1);
lean_ctor_set(v___x_334_, 0, v___x_337_);
v___x_339_ = v___x_334_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
else
{
lean_object* v___x_341_; lean_object* v___x_342_; 
lean_del_object(v___x_334_);
v___x_341_ = ((lean_object*)(lp_Echonomics_main___closed__26));
v___x_342_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_341_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_627_; 
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_627_ == 0)
{
lean_object* v_unused_628_; 
v_unused_628_ = lean_ctor_get(v___x_342_, 0);
lean_dec(v_unused_628_);
v___x_344_ = v___x_342_;
v_isShared_345_ = v_isSharedCheck_627_;
goto v_resetjp_343_;
}
else
{
lean_dec(v___x_342_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_627_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
uint8_t v___x_346_; 
v___x_346_ = lean_uint8_once(&lp_Echonomics_main___closed__29, &lp_Echonomics_main___closed__29_once, _init_lp_Echonomics_main___closed__29);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_347_ = ((lean_object*)(lp_Echonomics_main___closed__31));
if (v_isShared_345_ == 0)
{
lean_ctor_set_tag(v___x_344_, 1);
lean_ctor_set(v___x_344_, 0, v___x_347_);
v___x_349_ = v___x_344_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
else
{
lean_object* v___x_351_; lean_object* v___x_352_; 
lean_del_object(v___x_344_);
v___x_351_ = ((lean_object*)(lp_Echonomics_main___closed__32));
v___x_352_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_351_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_625_; 
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_625_ == 0)
{
lean_object* v_unused_626_; 
v_unused_626_ = lean_ctor_get(v___x_352_, 0);
lean_dec(v_unused_626_);
v___x_354_ = v___x_352_;
v_isShared_355_ = v_isSharedCheck_625_;
goto v_resetjp_353_;
}
else
{
lean_dec(v___x_352_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_625_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
uint8_t v___x_356_; 
v___x_356_ = lean_uint8_once(&lp_Echonomics_main___closed__34, &lp_Echonomics_main___closed__34_once, _init_lp_Echonomics_main___closed__34);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; lean_object* v___x_359_; 
v___x_357_ = ((lean_object*)(lp_Echonomics_main___closed__36));
if (v_isShared_355_ == 0)
{
lean_ctor_set_tag(v___x_354_, 1);
lean_ctor_set(v___x_354_, 0, v___x_357_);
v___x_359_ = v___x_354_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v___x_357_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
else
{
lean_object* v___x_361_; lean_object* v___x_362_; 
lean_del_object(v___x_354_);
v___x_361_ = ((lean_object*)(lp_Echonomics_main___closed__37));
v___x_362_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_361_);
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_623_; 
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_623_ == 0)
{
lean_object* v_unused_624_; 
v_unused_624_ = lean_ctor_get(v___x_362_, 0);
lean_dec(v_unused_624_);
v___x_364_ = v___x_362_;
v_isShared_365_ = v_isSharedCheck_623_;
goto v_resetjp_363_;
}
else
{
lean_dec(v___x_362_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_623_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
uint8_t v___x_366_; 
v___x_366_ = lean_uint8_once(&lp_Echonomics_main___closed__39, &lp_Echonomics_main___closed__39_once, _init_lp_Echonomics_main___closed__39);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_367_ = ((lean_object*)(lp_Echonomics_main___closed__41));
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 1);
lean_ctor_set(v___x_364_, 0, v___x_367_);
v___x_369_ = v___x_364_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_367_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
else
{
lean_object* v___x_371_; lean_object* v___x_372_; 
lean_del_object(v___x_364_);
v___x_371_ = ((lean_object*)(lp_Echonomics_main___closed__42));
v___x_372_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_371_);
if (lean_obj_tag(v___x_372_) == 0)
{
lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_621_; 
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_621_ == 0)
{
lean_object* v_unused_622_; 
v_unused_622_ = lean_ctor_get(v___x_372_, 0);
lean_dec(v_unused_622_);
v___x_374_ = v___x_372_;
v_isShared_375_ = v_isSharedCheck_621_;
goto v_resetjp_373_;
}
else
{
lean_dec(v___x_372_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_621_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
uint8_t v___x_376_; 
v___x_376_ = lean_uint8_once(&lp_Echonomics_main___closed__44, &lp_Echonomics_main___closed__44_once, _init_lp_Echonomics_main___closed__44);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_377_ = ((lean_object*)(lp_Echonomics_main___closed__46));
if (v_isShared_375_ == 0)
{
lean_ctor_set_tag(v___x_374_, 1);
lean_ctor_set(v___x_374_, 0, v___x_377_);
v___x_379_ = v___x_374_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; 
lean_del_object(v___x_374_);
v___x_381_ = ((lean_object*)(lp_Echonomics_main___closed__47));
v___x_382_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_381_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_619_; 
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_619_ == 0)
{
lean_object* v_unused_620_; 
v_unused_620_ = lean_ctor_get(v___x_382_, 0);
lean_dec(v_unused_620_);
v___x_384_ = v___x_382_;
v_isShared_385_ = v_isSharedCheck_619_;
goto v_resetjp_383_;
}
else
{
lean_dec(v___x_382_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_619_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
uint8_t v___x_386_; 
v___x_386_ = lean_uint8_once(&lp_Echonomics_main___closed__49, &lp_Echonomics_main___closed__49_once, _init_lp_Echonomics_main___closed__49);
if (v___x_386_ == 0)
{
lean_object* v___x_387_; lean_object* v___x_389_; 
v___x_387_ = ((lean_object*)(lp_Echonomics_main___closed__51));
if (v_isShared_385_ == 0)
{
lean_ctor_set_tag(v___x_384_, 1);
lean_ctor_set(v___x_384_, 0, v___x_387_);
v___x_389_ = v___x_384_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
else
{
lean_object* v___x_391_; lean_object* v___x_392_; 
lean_del_object(v___x_384_);
v___x_391_ = ((lean_object*)(lp_Echonomics_main___closed__52));
v___x_392_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_391_);
if (lean_obj_tag(v___x_392_) == 0)
{
lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_617_; 
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_392_);
if (v_isSharedCheck_617_ == 0)
{
lean_object* v_unused_618_; 
v_unused_618_ = lean_ctor_get(v___x_392_, 0);
lean_dec(v_unused_618_);
v___x_394_ = v___x_392_;
v_isShared_395_ = v_isSharedCheck_617_;
goto v_resetjp_393_;
}
else
{
lean_dec(v___x_392_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_617_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
uint8_t v___x_396_; 
v___x_396_ = lean_uint8_once(&lp_Echonomics_main___closed__54, &lp_Echonomics_main___closed__54_once, _init_lp_Echonomics_main___closed__54);
if (v___x_396_ == 0)
{
lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_397_ = ((lean_object*)(lp_Echonomics_main___closed__56));
if (v_isShared_395_ == 0)
{
lean_ctor_set_tag(v___x_394_, 1);
lean_ctor_set(v___x_394_, 0, v___x_397_);
v___x_399_ = v___x_394_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
else
{
lean_object* v___x_401_; lean_object* v___x_402_; 
lean_del_object(v___x_394_);
v___x_401_ = ((lean_object*)(lp_Echonomics_main___closed__57));
v___x_402_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_401_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_615_; 
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_615_ == 0)
{
lean_object* v_unused_616_; 
v_unused_616_ = lean_ctor_get(v___x_402_, 0);
lean_dec(v_unused_616_);
v___x_404_ = v___x_402_;
v_isShared_405_ = v_isSharedCheck_615_;
goto v_resetjp_403_;
}
else
{
lean_dec(v___x_402_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_615_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
uint8_t v___x_406_; 
v___x_406_ = lean_uint8_once(&lp_Echonomics_main___closed__58, &lp_Echonomics_main___closed__58_once, _init_lp_Echonomics_main___closed__58);
if (v___x_406_ == 0)
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = ((lean_object*)(lp_Echonomics_main___closed__60));
if (v_isShared_405_ == 0)
{
lean_ctor_set_tag(v___x_404_, 1);
lean_ctor_set(v___x_404_, 0, v___x_407_);
v___x_409_ = v___x_404_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
else
{
lean_object* v___x_411_; lean_object* v___x_412_; 
lean_del_object(v___x_404_);
v___x_411_ = ((lean_object*)(lp_Echonomics_main___closed__61));
v___x_412_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_411_);
if (lean_obj_tag(v___x_412_) == 0)
{
lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_613_; 
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_412_);
if (v_isSharedCheck_613_ == 0)
{
lean_object* v_unused_614_; 
v_unused_614_ = lean_ctor_get(v___x_412_, 0);
lean_dec(v_unused_614_);
v___x_414_ = v___x_412_;
v_isShared_415_ = v_isSharedCheck_613_;
goto v_resetjp_413_;
}
else
{
lean_dec(v___x_412_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_613_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
uint8_t v___x_416_; 
v___x_416_ = lean_uint8_once(&lp_Echonomics_main___closed__62, &lp_Echonomics_main___closed__62_once, _init_lp_Echonomics_main___closed__62);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_419_; 
v___x_417_ = ((lean_object*)(lp_Echonomics_main___closed__64));
if (v_isShared_415_ == 0)
{
lean_ctor_set_tag(v___x_414_, 1);
lean_ctor_set(v___x_414_, 0, v___x_417_);
v___x_419_ = v___x_414_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v___x_417_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
else
{
lean_object* v___x_421_; lean_object* v___x_422_; 
lean_del_object(v___x_414_);
v___x_421_ = ((lean_object*)(lp_Echonomics_main___closed__65));
v___x_422_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_421_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_611_; 
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_611_ == 0)
{
lean_object* v_unused_612_; 
v_unused_612_ = lean_ctor_get(v___x_422_, 0);
lean_dec(v_unused_612_);
v___x_424_ = v___x_422_;
v_isShared_425_ = v_isSharedCheck_611_;
goto v_resetjp_423_;
}
else
{
lean_dec(v___x_422_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_611_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
uint8_t v___x_426_; 
v___x_426_ = lean_uint8_once(&lp_Echonomics_main___closed__67, &lp_Echonomics_main___closed__67_once, _init_lp_Echonomics_main___closed__67);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = ((lean_object*)(lp_Echonomics_main___closed__69));
if (v_isShared_425_ == 0)
{
lean_ctor_set_tag(v___x_424_, 1);
lean_ctor_set(v___x_424_, 0, v___x_427_);
v___x_429_ = v___x_424_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
else
{
lean_object* v___x_431_; lean_object* v___x_432_; 
lean_del_object(v___x_424_);
v___x_431_ = ((lean_object*)(lp_Echonomics_main___closed__70));
v___x_432_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_609_; 
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_609_ == 0)
{
lean_object* v_unused_610_; 
v_unused_610_ = lean_ctor_get(v___x_432_, 0);
lean_dec(v_unused_610_);
v___x_434_ = v___x_432_;
v_isShared_435_ = v_isSharedCheck_609_;
goto v_resetjp_433_;
}
else
{
lean_dec(v___x_432_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_609_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
uint8_t v___x_436_; 
v___x_436_ = lean_uint8_once(&lp_Echonomics_main___closed__72, &lp_Echonomics_main___closed__72_once, _init_lp_Echonomics_main___closed__72);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_437_ = ((lean_object*)(lp_Echonomics_main___closed__74));
if (v_isShared_435_ == 0)
{
lean_ctor_set_tag(v___x_434_, 1);
lean_ctor_set(v___x_434_, 0, v___x_437_);
v___x_439_ = v___x_434_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_437_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
else
{
lean_object* v___x_441_; lean_object* v___x_442_; 
lean_del_object(v___x_434_);
v___x_441_ = ((lean_object*)(lp_Echonomics_main___closed__75));
v___x_442_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_441_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_607_; 
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_607_ == 0)
{
lean_object* v_unused_608_; 
v_unused_608_ = lean_ctor_get(v___x_442_, 0);
lean_dec(v_unused_608_);
v___x_444_ = v___x_442_;
v_isShared_445_ = v_isSharedCheck_607_;
goto v_resetjp_443_;
}
else
{
lean_dec(v___x_442_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_607_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
uint8_t v___x_446_; 
v___x_446_ = lean_uint8_once(&lp_Echonomics_main___closed__76, &lp_Echonomics_main___closed__76_once, _init_lp_Echonomics_main___closed__76);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; lean_object* v___x_449_; 
v___x_447_ = ((lean_object*)(lp_Echonomics_main___closed__78));
if (v_isShared_445_ == 0)
{
lean_ctor_set_tag(v___x_444_, 1);
lean_ctor_set(v___x_444_, 0, v___x_447_);
v___x_449_ = v___x_444_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_447_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
else
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_del_object(v___x_444_);
v___x_451_ = ((lean_object*)(lp_Echonomics_main___closed__79));
v___x_452_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_451_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_605_; 
v_isSharedCheck_605_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_605_ == 0)
{
lean_object* v_unused_606_; 
v_unused_606_ = lean_ctor_get(v___x_452_, 0);
lean_dec(v_unused_606_);
v___x_454_ = v___x_452_;
v_isShared_455_ = v_isSharedCheck_605_;
goto v_resetjp_453_;
}
else
{
lean_dec(v___x_452_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_605_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
uint8_t v___x_456_; 
v___x_456_ = lean_uint8_once(&lp_Echonomics_main___closed__80, &lp_Echonomics_main___closed__80_once, _init_lp_Echonomics_main___closed__80);
if (v___x_456_ == 0)
{
lean_object* v___x_457_; lean_object* v___x_458_; 
lean_del_object(v___x_454_);
v___x_457_ = ((lean_object*)(lp_Echonomics_main___closed__81));
v___x_458_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_599_; 
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_599_ == 0)
{
lean_object* v_unused_600_; 
v_unused_600_ = lean_ctor_get(v___x_458_, 0);
lean_dec(v_unused_600_);
v___x_460_ = v___x_458_;
v_isShared_461_ = v_isSharedCheck_599_;
goto v_resetjp_459_;
}
else
{
lean_dec(v___x_458_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_599_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
uint8_t v___x_462_; 
v___x_462_ = lean_uint8_once(&lp_Echonomics_main___closed__82, &lp_Echonomics_main___closed__82_once, _init_lp_Echonomics_main___closed__82);
if (v___x_462_ == 0)
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_del_object(v___x_460_);
v___x_463_ = ((lean_object*)(lp_Echonomics_main___closed__83));
v___x_464_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_463_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec_ref_known(v___x_464_, 1);
v___x_465_ = ((lean_object*)(lp_Echonomics_main___closed__84));
v___x_466_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec_ref_known(v___x_466_, 1);
v___x_467_ = ((lean_object*)(lp_Echonomics_main___closed__85));
v___x_468_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_467_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v___x_469_; 
lean_dec_ref_known(v___x_468_, 1);
v___x_469_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_465_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_593_; 
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_593_ == 0)
{
lean_object* v_unused_594_; 
v_unused_594_ = lean_ctor_get(v___x_469_, 0);
lean_dec(v_unused_594_);
v___x_471_ = v___x_469_;
v_isShared_472_ = v_isSharedCheck_593_;
goto v_resetjp_470_;
}
else
{
lean_dec(v___x_469_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_593_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
uint8_t v___x_473_; 
v___x_473_ = lean_uint8_once(&lp_Echonomics_main___closed__87, &lp_Echonomics_main___closed__87_once, _init_lp_Echonomics_main___closed__87);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; lean_object* v___x_476_; 
v___x_474_ = ((lean_object*)(lp_Echonomics_main___closed__89));
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 1);
lean_ctor_set(v___x_471_, 0, v___x_474_);
v___x_476_ = v___x_471_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
else
{
lean_object* v___x_478_; lean_object* v___x_479_; 
lean_del_object(v___x_471_);
v___x_478_ = ((lean_object*)(lp_Echonomics_main___closed__90));
v___x_479_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_591_; 
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_591_ == 0)
{
lean_object* v_unused_592_; 
v_unused_592_ = lean_ctor_get(v___x_479_, 0);
lean_dec(v_unused_592_);
v___x_481_ = v___x_479_;
v_isShared_482_ = v_isSharedCheck_591_;
goto v_resetjp_480_;
}
else
{
lean_dec(v___x_479_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_591_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
uint8_t v___x_483_; 
v___x_483_ = lean_uint8_once(&lp_Echonomics_main___closed__92, &lp_Echonomics_main___closed__92_once, _init_lp_Echonomics_main___closed__92);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = ((lean_object*)(lp_Echonomics_main___closed__94));
if (v_isShared_482_ == 0)
{
lean_ctor_set_tag(v___x_481_, 1);
lean_ctor_set(v___x_481_, 0, v___x_484_);
v___x_486_ = v___x_481_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_del_object(v___x_481_);
v___x_488_ = ((lean_object*)(lp_Echonomics_main___closed__95));
v___x_489_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_488_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_589_; 
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_589_ == 0)
{
lean_object* v_unused_590_; 
v_unused_590_ = lean_ctor_get(v___x_489_, 0);
lean_dec(v_unused_590_);
v___x_491_ = v___x_489_;
v_isShared_492_ = v_isSharedCheck_589_;
goto v_resetjp_490_;
}
else
{
lean_dec(v___x_489_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_589_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
uint8_t v___x_493_; 
v___x_493_ = lean_uint8_once(&lp_Echonomics_main___closed__98, &lp_Echonomics_main___closed__98_once, _init_lp_Echonomics_main___closed__98);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; lean_object* v___x_496_; 
v___x_494_ = ((lean_object*)(lp_Echonomics_main___closed__100));
if (v_isShared_492_ == 0)
{
lean_ctor_set_tag(v___x_491_, 1);
lean_ctor_set(v___x_491_, 0, v___x_494_);
v___x_496_ = v___x_491_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
else
{
lean_object* v___x_498_; lean_object* v___x_499_; 
lean_del_object(v___x_491_);
v___x_498_ = ((lean_object*)(lp_Echonomics_main___closed__101));
v___x_499_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_498_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v___x_501_; uint8_t v_isShared_502_; uint8_t v_isSharedCheck_587_; 
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_587_ == 0)
{
lean_object* v_unused_588_; 
v_unused_588_ = lean_ctor_get(v___x_499_, 0);
lean_dec(v_unused_588_);
v___x_501_ = v___x_499_;
v_isShared_502_ = v_isSharedCheck_587_;
goto v_resetjp_500_;
}
else
{
lean_dec(v___x_499_);
v___x_501_ = lean_box(0);
v_isShared_502_ = v_isSharedCheck_587_;
goto v_resetjp_500_;
}
v_resetjp_500_:
{
uint8_t v___x_508_; 
v___x_508_ = lean_uint8_once(&lp_Echonomics_main___closed__105, &lp_Echonomics_main___closed__105_once, _init_lp_Echonomics_main___closed__105);
if (v___x_508_ == 0)
{
goto v___jp_503_;
}
else
{
uint8_t v___x_509_; 
v___x_509_ = lean_uint8_once(&lp_Echonomics_main___closed__107, &lp_Echonomics_main___closed__107_once, _init_lp_Echonomics_main___closed__107);
if (v___x_509_ == 0)
{
goto v___jp_503_;
}
else
{
lean_object* v___x_510_; lean_object* v___x_511_; 
lean_del_object(v___x_501_);
v___x_510_ = ((lean_object*)(lp_Echonomics_main___closed__108));
v___x_511_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_510_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_585_; 
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_585_ == 0)
{
lean_object* v_unused_586_; 
v_unused_586_ = lean_ctor_get(v___x_511_, 0);
lean_dec(v_unused_586_);
v___x_513_ = v___x_511_;
v_isShared_514_ = v_isSharedCheck_585_;
goto v_resetjp_512_;
}
else
{
lean_dec(v___x_511_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_585_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
uint8_t v___x_515_; 
v___x_515_ = lean_uint8_once(&lp_Echonomics_main___closed__110, &lp_Echonomics_main___closed__110_once, _init_lp_Echonomics_main___closed__110);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_518_; 
v___x_516_ = ((lean_object*)(lp_Echonomics_main___closed__112));
if (v_isShared_514_ == 0)
{
lean_ctor_set_tag(v___x_513_, 1);
lean_ctor_set(v___x_513_, 0, v___x_516_);
v___x_518_ = v___x_513_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v___x_516_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
return v___x_518_;
}
}
else
{
lean_object* v___x_520_; lean_object* v___x_521_; 
lean_del_object(v___x_513_);
v___x_520_ = ((lean_object*)(lp_Echonomics_main___closed__113));
v___x_521_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_520_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_583_; 
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; 
v_unused_584_ = lean_ctor_get(v___x_521_, 0);
lean_dec(v_unused_584_);
v___x_523_ = v___x_521_;
v_isShared_524_ = v_isSharedCheck_583_;
goto v_resetjp_522_;
}
else
{
lean_dec(v___x_521_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_583_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
uint8_t v___x_525_; 
v___x_525_ = lean_uint8_once(&lp_Echonomics_main___closed__116, &lp_Echonomics_main___closed__116_once, _init_lp_Echonomics_main___closed__116);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; lean_object* v___x_528_; 
v___x_526_ = ((lean_object*)(lp_Echonomics_main___closed__118));
if (v_isShared_524_ == 0)
{
lean_ctor_set_tag(v___x_523_, 1);
lean_ctor_set(v___x_523_, 0, v___x_526_);
v___x_528_ = v___x_523_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v___x_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; 
lean_del_object(v___x_523_);
v___x_530_ = ((lean_object*)(lp_Echonomics_main___closed__119));
v___x_531_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_530_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_581_; 
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v___x_531_, 0);
lean_dec(v_unused_582_);
v___x_533_ = v___x_531_;
v_isShared_534_ = v_isSharedCheck_581_;
goto v_resetjp_532_;
}
else
{
lean_dec(v___x_531_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_581_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
uint8_t v___x_535_; 
v___x_535_ = lean_uint8_once(&lp_Echonomics_main___closed__120, &lp_Echonomics_main___closed__120_once, _init_lp_Echonomics_main___closed__120);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_538_; 
v___x_536_ = ((lean_object*)(lp_Echonomics_main___closed__122));
if (v_isShared_534_ == 0)
{
lean_ctor_set_tag(v___x_533_, 1);
lean_ctor_set(v___x_533_, 0, v___x_536_);
v___x_538_ = v___x_533_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v___x_536_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
else
{
lean_object* v___x_540_; lean_object* v___x_541_; 
lean_del_object(v___x_533_);
v___x_540_ = ((lean_object*)(lp_Echonomics_main___closed__123));
v___x_541_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_540_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_579_; 
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; 
v_unused_580_ = lean_ctor_get(v___x_541_, 0);
lean_dec(v_unused_580_);
v___x_543_ = v___x_541_;
v_isShared_544_ = v_isSharedCheck_579_;
goto v_resetjp_542_;
}
else
{
lean_dec(v___x_541_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_579_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
uint8_t v___x_545_; 
v___x_545_ = lean_uint8_once(&lp_Echonomics_main___closed__125, &lp_Echonomics_main___closed__125_once, _init_lp_Echonomics_main___closed__125);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_546_ = ((lean_object*)(lp_Echonomics_main___closed__127));
if (v_isShared_544_ == 0)
{
lean_ctor_set_tag(v___x_543_, 1);
lean_ctor_set(v___x_543_, 0, v___x_546_);
v___x_548_ = v___x_543_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
else
{
lean_object* v___x_550_; lean_object* v___x_551_; 
lean_del_object(v___x_543_);
v___x_550_ = ((lean_object*)(lp_Echonomics_main___closed__128));
v___x_551_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_550_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_577_; 
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_577_ == 0)
{
lean_object* v_unused_578_; 
v_unused_578_ = lean_ctor_get(v___x_551_, 0);
lean_dec(v_unused_578_);
v___x_553_ = v___x_551_;
v_isShared_554_ = v_isSharedCheck_577_;
goto v_resetjp_552_;
}
else
{
lean_dec(v___x_551_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_577_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
uint8_t v___x_555_; 
v___x_555_ = lean_uint8_once(&lp_Echonomics_main___closed__130, &lp_Echonomics_main___closed__130_once, _init_lp_Echonomics_main___closed__130);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_558_; 
v___x_556_ = ((lean_object*)(lp_Echonomics_main___closed__132));
if (v_isShared_554_ == 0)
{
lean_ctor_set_tag(v___x_553_, 1);
lean_ctor_set(v___x_553_, 0, v___x_556_);
v___x_558_ = v___x_553_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
else
{
lean_object* v___x_560_; lean_object* v___x_561_; 
lean_del_object(v___x_553_);
v___x_560_ = ((lean_object*)(lp_Echonomics_main___closed__133));
v___x_561_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_560_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_575_; 
v_isSharedCheck_575_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; 
v_unused_576_ = lean_ctor_get(v___x_561_, 0);
lean_dec(v_unused_576_);
v___x_563_ = v___x_561_;
v_isShared_564_ = v_isSharedCheck_575_;
goto v_resetjp_562_;
}
else
{
lean_dec(v___x_561_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_575_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
uint8_t v___x_565_; 
v___x_565_ = lean_uint8_once(&lp_Echonomics_main___closed__135, &lp_Echonomics_main___closed__135_once, _init_lp_Echonomics_main___closed__135);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_568_; 
v___x_566_ = ((lean_object*)(lp_Echonomics_main___closed__137));
if (v_isShared_564_ == 0)
{
lean_ctor_set_tag(v___x_563_, 1);
lean_ctor_set(v___x_563_, 0, v___x_566_);
v___x_568_ = v___x_563_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v___x_566_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
else
{
lean_object* v___x_570_; lean_object* v___x_571_; 
lean_del_object(v___x_563_);
v___x_570_ = ((lean_object*)(lp_Echonomics_main___closed__138));
v___x_571_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v___x_572_; 
lean_dec_ref_known(v___x_571_, 1);
v___x_572_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_465_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v___x_573_; lean_object* v___x_574_; 
lean_dec_ref_known(v___x_572_, 1);
v___x_573_ = ((lean_object*)(lp_Echonomics_main___closed__139));
v___x_574_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_573_);
return v___x_574_;
}
else
{
return v___x_572_;
}
}
else
{
return v___x_571_;
}
}
}
}
else
{
return v___x_561_;
}
}
}
}
else
{
return v___x_551_;
}
}
}
}
else
{
return v___x_541_;
}
}
}
}
else
{
return v___x_531_;
}
}
}
}
else
{
return v___x_521_;
}
}
}
}
else
{
return v___x_511_;
}
}
}
v___jp_503_:
{
lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_504_ = ((lean_object*)(lp_Echonomics_main___closed__103));
if (v_isShared_502_ == 0)
{
lean_ctor_set_tag(v___x_501_, 1);
lean_ctor_set(v___x_501_, 0, v___x_504_);
v___x_506_ = v___x_501_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
else
{
return v___x_499_;
}
}
}
}
else
{
return v___x_489_;
}
}
}
}
else
{
return v___x_479_;
}
}
}
}
else
{
return v___x_469_;
}
}
else
{
return v___x_468_;
}
}
else
{
return v___x_466_;
}
}
else
{
return v___x_464_;
}
}
else
{
lean_object* v___x_595_; lean_object* v___x_597_; 
v___x_595_ = ((lean_object*)(lp_Echonomics_main___closed__141));
if (v_isShared_461_ == 0)
{
lean_ctor_set_tag(v___x_460_, 1);
lean_ctor_set(v___x_460_, 0, v___x_595_);
v___x_597_ = v___x_460_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v___x_595_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
else
{
return v___x_458_;
}
}
else
{
lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_601_ = ((lean_object*)(lp_Echonomics_main___closed__143));
if (v_isShared_455_ == 0)
{
lean_ctor_set_tag(v___x_454_, 1);
lean_ctor_set(v___x_454_, 0, v___x_601_);
v___x_603_ = v___x_454_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
return v___x_603_;
}
}
}
}
else
{
return v___x_452_;
}
}
}
}
else
{
return v___x_442_;
}
}
}
}
else
{
return v___x_432_;
}
}
}
}
else
{
return v___x_422_;
}
}
}
}
else
{
return v___x_412_;
}
}
}
}
else
{
return v___x_402_;
}
}
}
}
else
{
return v___x_392_;
}
}
}
}
else
{
return v___x_382_;
}
}
}
}
else
{
return v___x_372_;
}
}
}
}
else
{
return v___x_362_;
}
}
}
}
else
{
return v___x_352_;
}
}
}
}
else
{
return v___x_342_;
}
}
}
}
else
{
return v___x_332_;
}
}
}
}
else
{
return v___x_322_;
}
}
}
}
else
{
return v___x_312_;
}
}
}
}
else
{
return v___x_302_;
}
}
}
}
else
{
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_main___boxed(lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = _lean_main();
return v_res_640_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Proofs(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_HundianOccupancy(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_CivicDunaGate(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_UorPrimeGeometry(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_EnergyLedger(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_XiConstitutionLicense(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_LambdaProof(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_HundianCodebookRunbook(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_CivicInfrastructureSpec(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_SocialPhysicsParts(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_BuurtzorgModel(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_TrifectaProtocolReview(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_Test(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_Proofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_HundianOccupancy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_CivicDunaGate(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_UorPrimeGeometry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_EnergyLedger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_XiConstitutionLicense(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_LambdaProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_HundianCodebookRunbook(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_CivicInfrastructureSpec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_SocialPhysicsParts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_BuurtzorgModel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_TrifectaProtocolReview(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
void lean_initialize_runtime_module();
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    return _lean_main();
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  lean_initialize_runtime_module();
  res = initialize_Echonomics_Echonomics_Test(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = 0;
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
