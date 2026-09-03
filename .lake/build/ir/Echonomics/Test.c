// Lean compiler output
// Module: Echonomics.Test
// Imports: public import Init public meta import Init public import Echonomics.Core public import Echonomics.Proofs public import Echonomics.HundianOccupancy public import Echonomics.CivicDunaGate public import Echonomics.UorPrimeGeometry public import Echonomics.EnergyLedger public import Echonomics.XiConstitutionLicense
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
uint8_t lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
uint8_t lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(lean_object*);
uint8_t lp_Echonomics_Echonomics_EnergyLedger_isGroundState(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_isLawfulRecursion(lean_object*);
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
static const lean_string_object lp_Echonomics_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 77, .m_data = "✓ [PASS] Echonomics ADR-0001: Half-fill max multiplicity M = |D| + 1 verified"};
static const lean_object* lp_Echonomics_main___closed__5 = (const lean_object*)&lp_Echonomics_main___closed__5_value;
static lean_once_cell_t lp_Echonomics_main___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__6;
static lean_once_cell_t lp_Echonomics_main___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__7;
static const lean_string_object lp_Echonomics_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 40, .m_data = "✗ [FAIL] ADR-0001 Pauli gate test failed"};
static const lean_object* lp_Echonomics_main___closed__8 = (const lean_object*)&lp_Echonomics_main___closed__8_value;
static const lean_ctor_object lp_Echonomics_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__8_value)}};
static const lean_object* lp_Echonomics_main___closed__9 = (const lean_object*)&lp_Echonomics_main___closed__9_value;
static const lean_string_object lp_Echonomics_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 77, .m_data = "✓ [PASS] Echonomics ADR-0001: Pauli exclusion 3rd occupant rejection verified"};
static const lean_object* lp_Echonomics_main___closed__10 = (const lean_object*)&lp_Echonomics_main___closed__10_value;
static lean_once_cell_t lp_Echonomics_main___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__11;
static lean_once_cell_t lp_Echonomics_main___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__12;
static const lean_string_object lp_Echonomics_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0001 Non-degenerate gate test failed"};
static const lean_object* lp_Echonomics_main___closed__13 = (const lean_object*)&lp_Echonomics_main___closed__13_value;
static const lean_ctor_object lp_Echonomics_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__13_value)}};
static const lean_object* lp_Echonomics_main___closed__14 = (const lean_object*)&lp_Echonomics_main___closed__14_value;
static const lean_string_object lp_Echonomics_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 82, .m_data = "✓ [PASS] Echonomics ADR-0001: Non-degenerate second occupant OK_HIERARCHY verified"};
static const lean_object* lp_Echonomics_main___closed__15 = (const lean_object*)&lp_Echonomics_main___closed__15_value;
static const lean_ctor_object lp_Echonomics_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__16 = (const lean_object*)&lp_Echonomics_main___closed__16_value;
static lean_once_cell_t lp_Echonomics_main___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__17;
static const lean_string_object lp_Echonomics_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 39, .m_data = "✗ [FAIL] ADR-0002 DUNA Gate test failed"};
static const lean_object* lp_Echonomics_main___closed__18 = (const lean_object*)&lp_Echonomics_main___closed__18_value;
static const lean_ctor_object lp_Echonomics_main___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__18_value)}};
static const lean_object* lp_Echonomics_main___closed__19 = (const lean_object*)&lp_Echonomics_main___closed__19_value;
static const lean_string_object lp_Echonomics_main___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 77, .m_data = "✓ [PASS] Echonomics ADR-0002: DUNA Constitutional Quorum & Vote Gate verified"};
static const lean_object* lp_Echonomics_main___closed__20 = (const lean_object*)&lp_Echonomics_main___closed__20_value;
static const lean_ctor_object lp_Echonomics_main___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__21 = (const lean_object*)&lp_Echonomics_main___closed__21_value;
static lean_once_cell_t lp_Echonomics_main___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__22;
static const lean_string_object lp_Echonomics_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0003 UOR Prime Geometry test failed"};
static const lean_object* lp_Echonomics_main___closed__23 = (const lean_object*)&lp_Echonomics_main___closed__23_value;
static const lean_ctor_object lp_Echonomics_main___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__23_value)}};
static const lean_object* lp_Echonomics_main___closed__24 = (const lean_object*)&lp_Echonomics_main___closed__24_value;
static const lean_string_object lp_Echonomics_main___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 76, .m_data = "✓ [PASS] Echonomics ADR-0003: UOR Prime Geometry Conservation Bound verified"};
static const lean_object* lp_Echonomics_main___closed__25 = (const lean_object*)&lp_Echonomics_main___closed__25_value;
static const lean_ctor_object lp_Echonomics_main___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__26 = (const lean_object*)&lp_Echonomics_main___closed__26_value;
static const lean_ctor_object lp_Echonomics_main___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__27 = (const lean_object*)&lp_Echonomics_main___closed__27_value;
static lean_once_cell_t lp_Echonomics_main___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__28;
static const lean_string_object lp_Echonomics_main___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 43, .m_data = "✗ [FAIL] ADR-0004 Energy Ledger test failed"};
static const lean_object* lp_Echonomics_main___closed__29 = (const lean_object*)&lp_Echonomics_main___closed__29_value;
static const lean_ctor_object lp_Echonomics_main___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__29_value)}};
static const lean_object* lp_Echonomics_main___closed__30 = (const lean_object*)&lp_Echonomics_main___closed__30_value;
static const lean_string_object lp_Echonomics_main___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 97, .m_data = "✓ [PASS] Echonomics ADR-0004: Energy Ledger E = V_pair - V_nuc Ground State Minimization verified"};
static const lean_object* lp_Echonomics_main___closed__31 = (const lean_object*)&lp_Echonomics_main___closed__31_value;
static const lean_string_object lp_Echonomics_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 44, .m_data = "✗ [FAIL] ADR-0005 Ξ-Constitution test failed"};
static const lean_object* lp_Echonomics_main___closed__32 = (const lean_object*)&lp_Echonomics_main___closed__32_value;
static const lean_ctor_object lp_Echonomics_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__32_value)}};
static const lean_object* lp_Echonomics_main___closed__33 = (const lean_object*)&lp_Echonomics_main___closed__33_value;
static lean_once_cell_t lp_Echonomics_main___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__34;
static lean_once_cell_t lp_Echonomics_main___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__35;
static const lean_ctor_object lp_Echonomics_main___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__36 = (const lean_object*)&lp_Echonomics_main___closed__36_value;
static lean_once_cell_t lp_Echonomics_main___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__37;
static const lean_string_object lp_Echonomics_main___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 91, .m_data = "✓ [PASS] Echonomics ADR-0005: Ξ-Constitution CSL Gate (N, B, S) & Lawful Recursion verified"};
static const lean_object* lp_Echonomics_main___closed__38 = (const lean_object*)&lp_Echonomics_main___closed__38_value;
static const lean_string_object lp_Echonomics_main___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "=== All Echonomics Formal Lean 4 Tests Passed Cleanly ==="};
static const lean_object* lp_Echonomics_main___closed__39 = (const lean_object*)&lp_Echonomics_main___closed__39_value;
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
static uint8_t _init_lp_Echonomics_main___closed__17(void){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = ((lean_object*)(lp_Echonomics_main___closed__16));
v___x_54_ = lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(v___x_53_);
return v___x_54_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__22(void){
_start:
{
lean_object* v___x_62_; uint8_t v___x_63_; 
v___x_62_ = ((lean_object*)(lp_Echonomics_main___closed__21));
v___x_63_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(v___x_62_);
return v___x_63_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__28(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_74_ = ((lean_object*)(lp_Echonomics_main___closed__27));
v___x_75_ = ((lean_object*)(lp_Echonomics_main___closed__26));
v___x_76_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v___x_75_, v___x_74_);
return v___x_76_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__34(void){
_start:
{
uint8_t v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
v___x_85_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_85_, 0, v___x_84_);
lean_ctor_set_uint8(v___x_85_, 1, v___x_84_);
lean_ctor_set_uint8(v___x_85_, 2, v___x_84_);
return v___x_85_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__35(void){
_start:
{
lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_86_ = lean_obj_once(&lp_Echonomics_main___closed__34, &lp_Echonomics_main___closed__34_once, _init_lp_Echonomics_main___closed__34);
v___x_87_ = lp_Echonomics_Echonomics_XiConstitutionLicense_evaluateCslGate(v___x_86_);
return v___x_87_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__37(void){
_start:
{
lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_91_ = ((lean_object*)(lp_Echonomics_main___closed__36));
v___x_92_ = lp_Echonomics_Echonomics_XiConstitutionLicense_isLawfulRecursion(v___x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = ((lean_object*)(lp_Echonomics_main___closed__0));
v___x_97_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_96_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_184_; 
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_184_ == 0)
{
lean_object* v_unused_185_; 
v_unused_185_ = lean_ctor_get(v___x_97_, 0);
lean_dec(v_unused_185_);
v___x_99_ = v___x_97_;
v_isShared_100_ = v_isSharedCheck_184_;
goto v_resetjp_98_;
}
else
{
lean_dec(v___x_97_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_184_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
uint8_t v___x_101_; 
v___x_101_ = lean_uint8_once(&lp_Echonomics_main___closed__2, &lp_Echonomics_main___closed__2_once, _init_lp_Echonomics_main___closed__2);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = ((lean_object*)(lp_Echonomics_main___closed__4));
if (v_isShared_100_ == 0)
{
lean_ctor_set_tag(v___x_99_, 1);
lean_ctor_set(v___x_99_, 0, v___x_102_);
v___x_104_ = v___x_99_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
else
{
lean_object* v___x_106_; lean_object* v___x_107_; 
lean_del_object(v___x_99_);
v___x_106_ = ((lean_object*)(lp_Echonomics_main___closed__5));
v___x_107_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_106_);
if (lean_obj_tag(v___x_107_) == 0)
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_182_; 
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_182_ == 0)
{
lean_object* v_unused_183_; 
v_unused_183_ = lean_ctor_get(v___x_107_, 0);
lean_dec(v_unused_183_);
v___x_109_ = v___x_107_;
v_isShared_110_ = v_isSharedCheck_182_;
goto v_resetjp_108_;
}
else
{
lean_dec(v___x_107_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_182_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
uint8_t v___x_111_; 
v___x_111_ = lean_uint8_once(&lp_Echonomics_main___closed__7, &lp_Echonomics_main___closed__7_once, _init_lp_Echonomics_main___closed__7);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_112_ = ((lean_object*)(lp_Echonomics_main___closed__9));
if (v_isShared_110_ == 0)
{
lean_ctor_set_tag(v___x_109_, 1);
lean_ctor_set(v___x_109_, 0, v___x_112_);
v___x_114_ = v___x_109_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
else
{
lean_object* v___x_116_; lean_object* v___x_117_; 
lean_del_object(v___x_109_);
v___x_116_ = ((lean_object*)(lp_Echonomics_main___closed__10));
v___x_117_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_116_);
if (lean_obj_tag(v___x_117_) == 0)
{
lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_180_; 
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_117_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; 
v_unused_181_ = lean_ctor_get(v___x_117_, 0);
lean_dec(v_unused_181_);
v___x_119_ = v___x_117_;
v_isShared_120_ = v_isSharedCheck_180_;
goto v_resetjp_118_;
}
else
{
lean_dec(v___x_117_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_180_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
uint8_t v___x_121_; 
v___x_121_ = lean_uint8_once(&lp_Echonomics_main___closed__12, &lp_Echonomics_main___closed__12_once, _init_lp_Echonomics_main___closed__12);
if (v___x_121_ == 0)
{
lean_object* v___x_122_; lean_object* v___x_124_; 
v___x_122_ = ((lean_object*)(lp_Echonomics_main___closed__14));
if (v_isShared_120_ == 0)
{
lean_ctor_set_tag(v___x_119_, 1);
lean_ctor_set(v___x_119_, 0, v___x_122_);
v___x_124_ = v___x_119_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_122_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
else
{
lean_object* v___x_126_; lean_object* v___x_127_; 
lean_del_object(v___x_119_);
v___x_126_ = ((lean_object*)(lp_Echonomics_main___closed__15));
v___x_127_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_126_);
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v___x_129_; uint8_t v_isShared_130_; uint8_t v_isSharedCheck_178_; 
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_178_ == 0)
{
lean_object* v_unused_179_; 
v_unused_179_ = lean_ctor_get(v___x_127_, 0);
lean_dec(v_unused_179_);
v___x_129_ = v___x_127_;
v_isShared_130_ = v_isSharedCheck_178_;
goto v_resetjp_128_;
}
else
{
lean_dec(v___x_127_);
v___x_129_ = lean_box(0);
v_isShared_130_ = v_isSharedCheck_178_;
goto v_resetjp_128_;
}
v_resetjp_128_:
{
uint8_t v___x_131_; 
v___x_131_ = lean_uint8_once(&lp_Echonomics_main___closed__17, &lp_Echonomics_main___closed__17_once, _init_lp_Echonomics_main___closed__17);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; lean_object* v___x_134_; 
v___x_132_ = ((lean_object*)(lp_Echonomics_main___closed__19));
if (v_isShared_130_ == 0)
{
lean_ctor_set_tag(v___x_129_, 1);
lean_ctor_set(v___x_129_, 0, v___x_132_);
v___x_134_ = v___x_129_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
else
{
lean_object* v___x_136_; lean_object* v___x_137_; 
lean_del_object(v___x_129_);
v___x_136_ = ((lean_object*)(lp_Echonomics_main___closed__20));
v___x_137_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_136_);
if (lean_obj_tag(v___x_137_) == 0)
{
lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_176_; 
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_137_);
if (v_isSharedCheck_176_ == 0)
{
lean_object* v_unused_177_; 
v_unused_177_ = lean_ctor_get(v___x_137_, 0);
lean_dec(v_unused_177_);
v___x_139_ = v___x_137_;
v_isShared_140_ = v_isSharedCheck_176_;
goto v_resetjp_138_;
}
else
{
lean_dec(v___x_137_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_176_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
uint8_t v___x_141_; 
v___x_141_ = lean_uint8_once(&lp_Echonomics_main___closed__22, &lp_Echonomics_main___closed__22_once, _init_lp_Echonomics_main___closed__22);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_142_ = ((lean_object*)(lp_Echonomics_main___closed__24));
if (v_isShared_140_ == 0)
{
lean_ctor_set_tag(v___x_139_, 1);
lean_ctor_set(v___x_139_, 0, v___x_142_);
v___x_144_ = v___x_139_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v___x_142_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
else
{
lean_object* v___x_146_; lean_object* v___x_147_; 
lean_del_object(v___x_139_);
v___x_146_ = ((lean_object*)(lp_Echonomics_main___closed__25));
v___x_147_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_146_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_174_; 
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_174_ == 0)
{
lean_object* v_unused_175_; 
v_unused_175_ = lean_ctor_get(v___x_147_, 0);
lean_dec(v_unused_175_);
v___x_149_ = v___x_147_;
v_isShared_150_ = v_isSharedCheck_174_;
goto v_resetjp_148_;
}
else
{
lean_dec(v___x_147_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_174_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
uint8_t v___x_151_; 
v___x_151_ = lean_uint8_once(&lp_Echonomics_main___closed__28, &lp_Echonomics_main___closed__28_once, _init_lp_Echonomics_main___closed__28);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; lean_object* v___x_154_; 
v___x_152_ = ((lean_object*)(lp_Echonomics_main___closed__30));
if (v_isShared_150_ == 0)
{
lean_ctor_set_tag(v___x_149_, 1);
lean_ctor_set(v___x_149_, 0, v___x_152_);
v___x_154_ = v___x_149_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
else
{
lean_object* v___x_156_; lean_object* v___x_157_; 
lean_del_object(v___x_149_);
v___x_156_ = ((lean_object*)(lp_Echonomics_main___closed__31));
v___x_157_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_156_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_172_; 
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_172_ == 0)
{
lean_object* v_unused_173_; 
v_unused_173_ = lean_ctor_get(v___x_157_, 0);
lean_dec(v_unused_173_);
v___x_159_ = v___x_157_;
v_isShared_160_ = v_isSharedCheck_172_;
goto v_resetjp_158_;
}
else
{
lean_dec(v___x_157_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_172_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
uint8_t v___x_166_; 
v___x_166_ = lean_uint8_once(&lp_Echonomics_main___closed__35, &lp_Echonomics_main___closed__35_once, _init_lp_Echonomics_main___closed__35);
if (v___x_166_ == 0)
{
goto v___jp_161_;
}
else
{
uint8_t v___x_167_; 
v___x_167_ = lean_uint8_once(&lp_Echonomics_main___closed__37, &lp_Echonomics_main___closed__37_once, _init_lp_Echonomics_main___closed__37);
if (v___x_167_ == 0)
{
goto v___jp_161_;
}
else
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_del_object(v___x_159_);
v___x_168_ = ((lean_object*)(lp_Echonomics_main___closed__38));
v___x_169_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_168_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v___x_170_; lean_object* v___x_171_; 
lean_dec_ref_known(v___x_169_, 1);
v___x_170_ = ((lean_object*)(lp_Echonomics_main___closed__39));
v___x_171_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_170_);
return v___x_171_;
}
else
{
return v___x_169_;
}
}
}
v___jp_161_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = ((lean_object*)(lp_Echonomics_main___closed__33));
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 1);
lean_ctor_set(v___x_159_, 0, v___x_162_);
v___x_164_ = v___x_159_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
else
{
return v___x_157_;
}
}
}
}
else
{
return v___x_147_;
}
}
}
}
else
{
return v___x_137_;
}
}
}
}
else
{
return v___x_127_;
}
}
}
}
else
{
return v___x_117_;
}
}
}
}
else
{
return v___x_107_;
}
}
}
}
else
{
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_main___boxed(lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = _lean_main();
return v_res_187_;
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
