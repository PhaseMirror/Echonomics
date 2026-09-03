// Lean compiler output
// Module: Echonomics.EnergyLedger
// Imports: public import Init public meta import Init public import Echonomics.Core
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Period-0 Energy Ledger Schema & Ground State Minimization"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "Separated tracking of pairwise friction V_pair and nuclear attraction V_nuc."};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "Define E = V_pair - V_nuc and select ground state via energy minimization at fixed N, D, P."};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Separate ledger tracking"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Machine-checked ground state energy bound"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vPair"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__6_value;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__7;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "vNuc"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__11_value;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__12;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__13_value;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__14;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__16 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__16_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__13_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__17 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_isGroundState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_isGroundState___boxed(lean_object*, lean_object*);
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(9u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(8u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__0));
v___x_47_ = lean_string_length(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__14, &lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__14_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__14);
v___x_49_ = lean_nat_to_int(v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg(lean_object* v_x_54_){
_start:
{
lean_object* v_vPair_55_; lean_object* v_vNuc_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_91_; 
v_vPair_55_ = lean_ctor_get(v_x_54_, 0);
v_vNuc_56_ = lean_ctor_get(v_x_54_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_x_54_);
if (v_isSharedCheck_91_ == 0)
{
v___x_58_ = v_x_54_;
v_isShared_59_ = v_isSharedCheck_91_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_vNuc_56_);
lean_inc(v_vPair_55_);
lean_dec(v_x_54_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_91_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_60_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5));
v___x_61_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__6));
v___x_62_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__7, &lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__7);
v___x_63_ = l_Nat_reprFast(v_vPair_55_);
v___x_64_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 4);
lean_ctor_set(v___x_58_, 1, v___x_64_);
lean_ctor_set(v___x_58_, 0, v___x_62_);
v___x_66_ = v___x_58_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v___x_62_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v___x_64_);
v___x_66_ = v_reuseFailAlloc_90_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_67_ = 0;
v___x_68_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_68_, sizeof(void*)*1, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_61_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__9));
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_69_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_box(1);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__11));
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_60_);
v___x_77_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__12, &lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__12);
v___x_78_ = l_Nat_reprFast(v_vNuc_56_);
v___x_79_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
v___x_80_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_77_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set_uint8(v___x_81_, sizeof(void*)*1, v___x_67_);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_76_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15, &lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15);
v___x_84_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__16));
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_82_);
v___x_86_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__17));
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_85_);
lean_ctor_set(v___x_87_, 1, v___x_86_);
v___x_88_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_83_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_89_, 0, v___x_88_);
lean_ctor_set_uint8(v___x_89_, sizeof(void*)*1, v___x_67_);
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr(lean_object* v_x_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg(v_x_92_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___boxed(lean_object* v_x_95_, lean_object* v_prec_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr(v_x_95_, v_prec_96_);
lean_dec(v_prec_96_);
return v_res_97_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState_decEq(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
lean_object* v_vPair_102_; lean_object* v_vNuc_103_; lean_object* v_vPair_104_; lean_object* v_vNuc_105_; uint8_t v___x_106_; 
v_vPair_102_ = lean_ctor_get(v_x_100_, 0);
v_vNuc_103_ = lean_ctor_get(v_x_100_, 1);
v_vPair_104_ = lean_ctor_get(v_x_101_, 0);
v_vNuc_105_ = lean_ctor_get(v_x_101_, 1);
v___x_106_ = lean_nat_dec_eq(v_vPair_102_, v_vPair_104_);
if (v___x_106_ == 0)
{
return v___x_106_;
}
else
{
uint8_t v___x_107_; 
v___x_107_ = lean_nat_dec_eq(v_vNuc_103_, v_vNuc_105_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState_decEq___boxed(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState_decEq(v_x_108_, v_x_109_);
lean_dec_ref(v_x_109_);
lean_dec_ref(v_x_108_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState(lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
uint8_t v___x_114_; 
v___x_114_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState_decEq(v_x_112_, v_x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState___boxed(lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
uint8_t v_res_117_; lean_object* v_r_118_; 
v_res_117_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState(v_x_115_, v_x_116_);
lean_dec_ref(v_x_116_);
lean_dec_ref(v_x_115_);
v_r_118_ = lean_box(v_res_117_);
return v_r_118_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(lean_object* v_st_119_){
_start:
{
lean_object* v_vPair_120_; lean_object* v_vNuc_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_vPair_120_ = lean_ctor_get(v_st_119_, 0);
lean_inc(v_vPair_120_);
v_vNuc_121_ = lean_ctor_get(v_st_119_, 1);
lean_inc(v_vNuc_121_);
lean_dec_ref(v_st_119_);
v___x_122_ = lean_nat_to_int(v_vPair_120_);
v___x_123_ = lean_nat_to_int(v_vNuc_121_);
v___x_124_ = lean_int_sub(v___x_122_, v___x_123_);
lean_dec(v___x_123_);
lean_dec(v___x_122_);
return v___x_124_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_isGroundState(lean_object* v_stBest_125_, lean_object* v_stOther_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_127_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_stBest_125_);
v___x_128_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_stOther_126_);
v___x_129_ = lean_int_dec_le(v___x_127_, v___x_128_);
lean_dec(v___x_128_);
lean_dec(v___x_127_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_isGroundState___boxed(lean_object* v_stBest_130_, lean_object* v_stOther_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v_stBest_130_, v_stOther_131_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_EnergyLedger(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
