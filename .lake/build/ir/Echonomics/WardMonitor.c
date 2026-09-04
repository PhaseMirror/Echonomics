// Lean compiler output
// Module: Echonomics.WardMonitor
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "WardMonitor Universal Thresholds and Interlock Duty Cycle"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 168, .m_capacity = 168, .m_length = 167, .m_data = "Formal specification of WardMonitor universal thresholds, invariant envelopes (Embodied Capacity, TDI, Masking Frequency, HRV Drift), and SIG_GOV_KILL interlock logic."};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 125, .m_capacity = 125, .m_length = 124, .m_data = "Enforce composite SIG_GOV_KILL interlocks with locked universal thresholds and a fail-closed cryptographic chain duty cycle."};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Hardware-level interlock"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Fail-closed chain verification"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(29) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_WardMonitor_adr0029 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_adr0029___closed__7_value;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__0;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__1;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_TDI__GREEN__BOUND;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_TDI__AMBER__BOUND;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__0;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__1;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_MASKING__WINDOW;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_MASKING__RED__COUNT;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "energyScaled"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__6_value;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__7;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "maskingLastN"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__10_value;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__11;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__13_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__14 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__14_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__15 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__15_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__15_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__16 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__16_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tdiScaled"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__17 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__17_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__17_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__18 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__18_value;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hrvDriftScaled"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__20 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__20_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__20_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__21 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__21_value;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__22;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_WardMonitor_instReprWardState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isEnergyRed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isEnergyRed___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isTdiRed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isTdiRed___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isTdiAmber(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isTdiAmber___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isHrvRed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isHrvRed___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isMaskingRed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isMaskingRed___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isMaskingCountInWindow(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isMaskingCountInWindow___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_sigGovKill(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_sigGovKill___boxed(lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "entryHash"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "prevHash"};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__5_value;
static lean_once_cell_t lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__6;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry = (const lean_object*)&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isChainValid(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isChainValid___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isChainBroken(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isChainBroken___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_monitorInterlock(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_monitorInterlock___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_WardMonitor_0__Echonomics_WardMonitor_isChainValid_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_WardMonitor_0__Echonomics_WardMonitor_isChainValid_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__0(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(7u);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__1(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__0, &lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__0_once, _init_lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__0);
v___x_25_ = lean_int_neg(v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__1, &lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__1_once, _init_lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND___closed__1);
return v___x_26_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_TDI__GREEN__BOUND(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(8u);
return v___x_27_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_TDI__AMBER__BOUND(void){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(18u);
return v___x_28_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__0(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_unsigned_to_nat(15u);
v___x_30_ = lean_nat_to_int(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__1(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__0, &lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__0_once, _init_lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__0);
v___x_32_ = lean_int_neg(v___x_31_);
return v___x_32_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND(void){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__1, &lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__1_once, _init_lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND___closed__1);
return v___x_33_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_MASKING__WINDOW(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_unsigned_to_nat(3u);
return v___x_34_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_MASKING__RED__COUNT(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_unsigned_to_nat(2u);
return v___x_35_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_unsigned_to_nat(16u);
v___x_50_ = lean_nat_to_int(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__0));
v___x_56_ = lean_string_length(v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__11, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__11_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__11);
v___x_58_ = lean_nat_to_int(v___x_57_);
return v___x_58_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_unsigned_to_nat(13u);
v___x_70_ = lean_nat_to_int(v___x_69_);
return v___x_70_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__22(void){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(18u);
v___x_75_ = lean_nat_to_int(v___x_74_);
return v___x_75_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23(void){
_start:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(0u);
v___x_77_ = lean_nat_to_int(v___x_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg(lean_object* v_x_78_){
_start:
{
lean_object* v_energyScaled_79_; lean_object* v_tdiScaled_80_; lean_object* v_hrvDriftScaled_81_; lean_object* v_maskingLastN_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___y_87_; lean_object* v___y_88_; lean_object* v___y_89_; lean_object* v___y_90_; lean_object* v___y_91_; uint8_t v___y_92_; lean_object* v___y_93_; lean_object* v___y_115_; lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v_energyScaled_79_ = lean_ctor_get(v_x_78_, 0);
lean_inc(v_energyScaled_79_);
v_tdiScaled_80_ = lean_ctor_get(v_x_78_, 1);
lean_inc(v_tdiScaled_80_);
v_hrvDriftScaled_81_ = lean_ctor_get(v_x_78_, 2);
lean_inc(v_hrvDriftScaled_81_);
v_maskingLastN_82_ = lean_ctor_get(v_x_78_, 3);
lean_inc(v_maskingLastN_82_);
lean_dec_ref(v_x_78_);
v___x_83_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__5));
v___x_84_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__6));
v___x_85_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__7, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__7);
v___x_147_ = lean_unsigned_to_nat(0u);
v___x_148_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23);
v___x_149_ = lean_int_dec_lt(v_energyScaled_79_, v___x_148_);
if (v___x_149_ == 0)
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = l_Int_repr(v_energyScaled_79_);
lean_dec(v_energyScaled_79_);
v___x_151_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
v___y_115_ = v___x_151_;
goto v___jp_114_;
}
else
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = l_Int_repr(v_energyScaled_79_);
lean_dec(v_energyScaled_79_);
v___x_153_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
v___x_154_ = l_Repr_addAppParen(v___x_153_, v___x_147_);
v___y_115_ = v___x_154_;
goto v___jp_114_;
}
v___jp_86_:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
lean_inc(v___y_90_);
v___x_94_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_94_, 0, v___y_90_);
lean_ctor_set(v___x_94_, 1, v___y_93_);
v___x_95_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set_uint8(v___x_95_, sizeof(void*)*1, v___y_92_);
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___y_89_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
lean_inc(v___y_87_);
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___y_87_);
lean_inc(v___y_88_);
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___y_88_);
v___x_99_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__9));
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
lean_ctor_set(v___x_101_, 1, v___x_83_);
v___x_102_ = l_Nat_reprFast(v___y_91_);
v___x_103_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
v___x_104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_104_, 0, v___x_85_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_105_, 0, v___x_104_);
lean_ctor_set_uint8(v___x_105_, sizeof(void*)*1, v___y_92_);
v___x_106_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_101_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12);
v___x_108_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__13));
v___x_109_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
lean_ctor_set(v___x_109_, 1, v___x_106_);
v___x_110_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__14));
v___x_111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_109_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_112_, 0, v___x_107_);
lean_ctor_set(v___x_112_, 1, v___x_111_);
v___x_113_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set_uint8(v___x_113_, sizeof(void*)*1, v___y_92_);
return v___x_113_;
}
v___jp_114_:
{
lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_85_);
lean_ctor_set(v___x_116_, 1, v___y_115_);
v___x_117_ = 0;
v___x_118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set_uint8(v___x_118_, sizeof(void*)*1, v___x_117_);
v___x_119_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_84_);
lean_ctor_set(v___x_119_, 1, v___x_118_);
v___x_120_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__16));
v___x_121_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_box(1);
v___x_123_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_121_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__18));
v___x_125_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set(v___x_125_, 1, v___x_124_);
v___x_126_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
lean_ctor_set(v___x_126_, 1, v___x_83_);
v___x_127_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19);
v___x_128_ = l_Nat_reprFast(v_tdiScaled_80_);
v___x_129_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___x_130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_127_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_117_);
v___x_132_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_126_);
lean_ctor_set(v___x_132_, 1, v___x_131_);
v___x_133_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_133_, 0, v___x_132_);
lean_ctor_set(v___x_133_, 1, v___x_120_);
v___x_134_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_122_);
v___x_135_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__21));
v___x_136_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_134_);
lean_ctor_set(v___x_136_, 1, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_136_);
lean_ctor_set(v___x_137_, 1, v___x_83_);
v___x_138_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__22, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__22_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__22);
v___x_139_ = lean_unsigned_to_nat(0u);
v___x_140_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__23);
v___x_141_ = lean_int_dec_lt(v_hrvDriftScaled_81_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = l_Int_repr(v_hrvDriftScaled_81_);
lean_dec(v_hrvDriftScaled_81_);
v___x_143_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
v___y_87_ = v___x_120_;
v___y_88_ = v___x_122_;
v___y_89_ = v___x_137_;
v___y_90_ = v___x_138_;
v___y_91_ = v_maskingLastN_82_;
v___y_92_ = v___x_117_;
v___y_93_ = v___x_143_;
goto v___jp_86_;
}
else
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = l_Int_repr(v_hrvDriftScaled_81_);
lean_dec(v_hrvDriftScaled_81_);
v___x_145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
v___x_146_ = l_Repr_addAppParen(v___x_145_, v___x_139_);
v___y_87_ = v___x_120_;
v___y_88_ = v___x_122_;
v___y_89_ = v___x_137_;
v___y_90_ = v___x_138_;
v___y_91_ = v_maskingLastN_82_;
v___y_92_ = v___x_117_;
v___y_93_ = v___x_146_;
goto v___jp_86_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr(lean_object* v_x_155_, lean_object* v_prec_156_){
_start:
{
lean_object* v___x_157_; 
v___x_157_ = lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg(v_x_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___boxed(lean_object* v_x_158_, lean_object* v_prec_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr(v_x_158_, v_prec_159_);
lean_dec(v_prec_159_);
return v_res_160_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState_decEq(lean_object* v_x_163_, lean_object* v_x_164_){
_start:
{
lean_object* v_energyScaled_165_; lean_object* v_tdiScaled_166_; lean_object* v_hrvDriftScaled_167_; lean_object* v_maskingLastN_168_; lean_object* v_energyScaled_169_; lean_object* v_tdiScaled_170_; lean_object* v_hrvDriftScaled_171_; lean_object* v_maskingLastN_172_; uint8_t v___x_173_; 
v_energyScaled_165_ = lean_ctor_get(v_x_163_, 0);
v_tdiScaled_166_ = lean_ctor_get(v_x_163_, 1);
v_hrvDriftScaled_167_ = lean_ctor_get(v_x_163_, 2);
v_maskingLastN_168_ = lean_ctor_get(v_x_163_, 3);
v_energyScaled_169_ = lean_ctor_get(v_x_164_, 0);
v_tdiScaled_170_ = lean_ctor_get(v_x_164_, 1);
v_hrvDriftScaled_171_ = lean_ctor_get(v_x_164_, 2);
v_maskingLastN_172_ = lean_ctor_get(v_x_164_, 3);
v___x_173_ = lean_int_dec_eq(v_energyScaled_165_, v_energyScaled_169_);
if (v___x_173_ == 0)
{
return v___x_173_;
}
else
{
uint8_t v___x_174_; 
v___x_174_ = lean_nat_dec_eq(v_tdiScaled_166_, v_tdiScaled_170_);
if (v___x_174_ == 0)
{
return v___x_174_;
}
else
{
uint8_t v___x_175_; 
v___x_175_ = lean_int_dec_eq(v_hrvDriftScaled_167_, v_hrvDriftScaled_171_);
if (v___x_175_ == 0)
{
return v___x_175_;
}
else
{
uint8_t v___x_176_; 
v___x_176_ = lean_nat_dec_eq(v_maskingLastN_168_, v_maskingLastN_172_);
return v___x_176_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState_decEq___boxed(lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
uint8_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState_decEq(v_x_177_, v_x_178_);
lean_dec_ref(v_x_178_);
lean_dec_ref(v_x_177_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState(lean_object* v_x_181_, lean_object* v_x_182_){
_start:
{
uint8_t v___x_183_; 
v___x_183_ = lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState_decEq(v_x_181_, v_x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState___boxed(lean_object* v_x_184_, lean_object* v_x_185_){
_start:
{
uint8_t v_res_186_; lean_object* v_r_187_; 
v_res_186_ = lp_Echonomics_Echonomics_WardMonitor_instDecidableEqWardState(v_x_184_, v_x_185_);
lean_dec_ref(v_x_185_);
lean_dec_ref(v_x_184_);
v_r_187_ = lean_box(v_res_186_);
return v_r_187_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isEnergyRed(lean_object* v_st_188_){
_start:
{
lean_object* v_energyScaled_189_; lean_object* v___x_190_; uint8_t v___x_191_; 
v_energyScaled_189_ = lean_ctor_get(v_st_188_, 0);
v___x_190_ = lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND;
v___x_191_ = lean_int_dec_lt(v_energyScaled_189_, v___x_190_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isEnergyRed___boxed(lean_object* v_st_192_){
_start:
{
uint8_t v_res_193_; lean_object* v_r_194_; 
v_res_193_ = lp_Echonomics_Echonomics_WardMonitor_isEnergyRed(v_st_192_);
lean_dec_ref(v_st_192_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isTdiRed(lean_object* v_st_195_){
_start:
{
lean_object* v_tdiScaled_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v_tdiScaled_196_ = lean_ctor_get(v_st_195_, 1);
v___x_197_ = lean_unsigned_to_nat(18u);
v___x_198_ = lean_nat_dec_lt(v___x_197_, v_tdiScaled_196_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isTdiRed___boxed(lean_object* v_st_199_){
_start:
{
uint8_t v_res_200_; lean_object* v_r_201_; 
v_res_200_ = lp_Echonomics_Echonomics_WardMonitor_isTdiRed(v_st_199_);
lean_dec_ref(v_st_199_);
v_r_201_ = lean_box(v_res_200_);
return v_r_201_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isTdiAmber(lean_object* v_st_202_){
_start:
{
lean_object* v_tdiScaled_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_tdiScaled_203_ = lean_ctor_get(v_st_202_, 1);
v___x_204_ = lean_unsigned_to_nat(8u);
v___x_205_ = lean_nat_dec_lt(v___x_204_, v_tdiScaled_203_);
if (v___x_205_ == 0)
{
return v___x_205_;
}
else
{
lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_206_ = lean_unsigned_to_nat(18u);
v___x_207_ = lean_nat_dec_le(v_tdiScaled_203_, v___x_206_);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isTdiAmber___boxed(lean_object* v_st_208_){
_start:
{
uint8_t v_res_209_; lean_object* v_r_210_; 
v_res_209_ = lp_Echonomics_Echonomics_WardMonitor_isTdiAmber(v_st_208_);
lean_dec_ref(v_st_208_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isHrvRed(lean_object* v_st_211_){
_start:
{
lean_object* v_hrvDriftScaled_212_; lean_object* v___x_213_; uint8_t v___x_214_; 
v_hrvDriftScaled_212_ = lean_ctor_get(v_st_211_, 2);
v___x_213_ = lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND;
v___x_214_ = lean_int_dec_lt(v_hrvDriftScaled_212_, v___x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isHrvRed___boxed(lean_object* v_st_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = lp_Echonomics_Echonomics_WardMonitor_isHrvRed(v_st_215_);
lean_dec_ref(v_st_215_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isMaskingRed(lean_object* v_st_218_){
_start:
{
lean_object* v_maskingLastN_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v_maskingLastN_219_ = lean_ctor_get(v_st_218_, 3);
v___x_220_ = lean_unsigned_to_nat(2u);
v___x_221_ = lean_nat_dec_le(v___x_220_, v_maskingLastN_219_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isMaskingRed___boxed(lean_object* v_st_222_){
_start:
{
uint8_t v_res_223_; lean_object* v_r_224_; 
v_res_223_ = lp_Echonomics_Echonomics_WardMonitor_isMaskingRed(v_st_222_);
lean_dec_ref(v_st_222_);
v_r_224_ = lean_box(v_res_223_);
return v_r_224_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isMaskingCountInWindow(lean_object* v_n_225_){
_start:
{
lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(3u);
v___x_227_ = lean_nat_dec_le(v_n_225_, v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isMaskingCountInWindow___boxed(lean_object* v_n_228_){
_start:
{
uint8_t v_res_229_; lean_object* v_r_230_; 
v_res_229_ = lp_Echonomics_Echonomics_WardMonitor_isMaskingCountInWindow(v_n_228_);
lean_dec(v_n_228_);
v_r_230_ = lean_box(v_res_229_);
return v_r_230_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_sigGovKill(lean_object* v_st_231_){
_start:
{
uint8_t v___y_233_; uint8_t v___x_235_; 
v___x_235_ = lp_Echonomics_Echonomics_WardMonitor_isEnergyRed(v_st_231_);
if (v___x_235_ == 0)
{
uint8_t v___x_236_; 
v___x_236_ = lp_Echonomics_Echonomics_WardMonitor_isTdiRed(v_st_231_);
if (v___x_236_ == 0)
{
v___y_233_ = v___x_236_;
goto v___jp_232_;
}
else
{
uint8_t v___x_237_; 
v___x_237_ = lp_Echonomics_Echonomics_WardMonitor_isHrvRed(v_st_231_);
v___y_233_ = v___x_237_;
goto v___jp_232_;
}
}
else
{
v___y_233_ = v___x_235_;
goto v___jp_232_;
}
v___jp_232_:
{
if (v___y_233_ == 0)
{
uint8_t v___x_234_; 
v___x_234_ = lp_Echonomics_Echonomics_WardMonitor_isMaskingRed(v_st_231_);
return v___x_234_;
}
else
{
return v___y_233_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_sigGovKill___boxed(lean_object* v_st_238_){
_start:
{
uint8_t v_res_239_; lean_object* v_r_240_; 
v_res_239_ = lp_Echonomics_Echonomics_WardMonitor_sigGovKill(v_st_238_);
lean_dec_ref(v_st_238_);
v_r_240_ = lean_box(v_res_239_);
return v_r_240_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_unsigned_to_nat(12u);
v___x_254_ = lean_nat_to_int(v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg(lean_object* v_x_255_){
_start:
{
lean_object* v_entryHash_256_; lean_object* v_prevHash_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_292_; 
v_entryHash_256_ = lean_ctor_get(v_x_255_, 0);
v_prevHash_257_ = lean_ctor_get(v_x_255_, 1);
v_isSharedCheck_292_ = !lean_is_exclusive(v_x_255_);
if (v_isSharedCheck_292_ == 0)
{
v___x_259_ = v_x_255_;
v_isShared_260_ = v_isSharedCheck_292_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_prevHash_257_);
lean_inc(v_entryHash_256_);
lean_dec(v_x_255_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_292_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_261_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__5));
v___x_262_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__3));
v___x_263_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__19);
v___x_264_ = l_Nat_reprFast(v_entryHash_256_);
v___x_265_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_265_, 0, v___x_264_);
if (v_isShared_260_ == 0)
{
lean_ctor_set_tag(v___x_259_, 4);
lean_ctor_set(v___x_259_, 1, v___x_265_);
lean_ctor_set(v___x_259_, 0, v___x_263_);
v___x_267_ = v___x_259_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_263_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v___x_265_);
v___x_267_ = v_reuseFailAlloc_291_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
uint8_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_268_ = 0;
v___x_269_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set_uint8(v___x_269_, sizeof(void*)*1, v___x_268_);
v___x_270_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_262_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___x_271_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__16));
v___x_272_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_272_, 0, v___x_270_);
lean_ctor_set(v___x_272_, 1, v___x_271_);
v___x_273_ = lean_box(1);
v___x_274_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_274_, 0, v___x_272_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__5));
v___x_276_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_274_);
lean_ctor_set(v___x_276_, 1, v___x_275_);
v___x_277_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_261_);
v___x_278_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__6, &lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__6_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg___closed__6);
v___x_279_ = l_Nat_reprFast(v_prevHash_257_);
v___x_280_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
v___x_281_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_278_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_282_, 0, v___x_281_);
lean_ctor_set_uint8(v___x_282_, sizeof(void*)*1, v___x_268_);
v___x_283_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_277_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
v___x_284_ = lean_obj_once(&lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12, &lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__12);
v___x_285_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__13));
v___x_286_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___x_283_);
v___x_287_ = ((lean_object*)(lp_Echonomics_Echonomics_WardMonitor_instReprWardState_repr___redArg___closed__14));
v___x_288_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_288_, 0, v___x_286_);
lean_ctor_set(v___x_288_, 1, v___x_287_);
v___x_289_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_289_, 0, v___x_284_);
lean_ctor_set(v___x_289_, 1, v___x_288_);
v___x_290_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set_uint8(v___x_290_, sizeof(void*)*1, v___x_268_);
return v___x_290_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr(lean_object* v_x_293_, lean_object* v_prec_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___redArg(v_x_293_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr___boxed(lean_object* v_x_296_, lean_object* v_prec_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = lp_Echonomics_Echonomics_WardMonitor_instReprMonitorEntry_repr(v_x_296_, v_prec_297_);
lean_dec(v_prec_297_);
return v_res_298_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry_decEq(lean_object* v_x_301_, lean_object* v_x_302_){
_start:
{
lean_object* v_entryHash_303_; lean_object* v_prevHash_304_; lean_object* v_entryHash_305_; lean_object* v_prevHash_306_; uint8_t v___x_307_; 
v_entryHash_303_ = lean_ctor_get(v_x_301_, 0);
v_prevHash_304_ = lean_ctor_get(v_x_301_, 1);
v_entryHash_305_ = lean_ctor_get(v_x_302_, 0);
v_prevHash_306_ = lean_ctor_get(v_x_302_, 1);
v___x_307_ = lean_nat_dec_eq(v_entryHash_303_, v_entryHash_305_);
if (v___x_307_ == 0)
{
return v___x_307_;
}
else
{
uint8_t v___x_308_; 
v___x_308_ = lean_nat_dec_eq(v_prevHash_304_, v_prevHash_306_);
return v___x_308_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry_decEq___boxed(lean_object* v_x_309_, lean_object* v_x_310_){
_start:
{
uint8_t v_res_311_; lean_object* v_r_312_; 
v_res_311_ = lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry_decEq(v_x_309_, v_x_310_);
lean_dec_ref(v_x_310_);
lean_dec_ref(v_x_309_);
v_r_312_ = lean_box(v_res_311_);
return v_r_312_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry(lean_object* v_x_313_, lean_object* v_x_314_){
_start:
{
uint8_t v___x_315_; 
v___x_315_ = lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry_decEq(v_x_313_, v_x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry___boxed(lean_object* v_x_316_, lean_object* v_x_317_){
_start:
{
uint8_t v_res_318_; lean_object* v_r_319_; 
v_res_318_ = lp_Echonomics_Echonomics_WardMonitor_instDecidableEqMonitorEntry(v_x_316_, v_x_317_);
lean_dec_ref(v_x_317_);
lean_dec_ref(v_x_316_);
v_r_319_ = lean_box(v_res_318_);
return v_r_319_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isChainValid(lean_object* v_x_320_){
_start:
{
if (lean_obj_tag(v_x_320_) == 0)
{
uint8_t v___x_321_; 
v___x_321_ = 1;
return v___x_321_;
}
else
{
lean_object* v_tail_322_; 
v_tail_322_ = lean_ctor_get(v_x_320_, 1);
if (lean_obj_tag(v_tail_322_) == 0)
{
uint8_t v___x_323_; 
v___x_323_ = 1;
return v___x_323_;
}
else
{
lean_object* v_head_324_; lean_object* v_head_325_; lean_object* v_prevHash_326_; lean_object* v_entryHash_327_; uint8_t v___x_328_; 
v_head_324_ = lean_ctor_get(v_tail_322_, 0);
v_head_325_ = lean_ctor_get(v_x_320_, 0);
v_prevHash_326_ = lean_ctor_get(v_head_324_, 1);
v_entryHash_327_ = lean_ctor_get(v_head_325_, 0);
v___x_328_ = lean_nat_dec_eq(v_prevHash_326_, v_entryHash_327_);
if (v___x_328_ == 0)
{
return v___x_328_;
}
else
{
v_x_320_ = v_tail_322_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isChainValid___boxed(lean_object* v_x_330_){
_start:
{
uint8_t v_res_331_; lean_object* v_r_332_; 
v_res_331_ = lp_Echonomics_Echonomics_WardMonitor_isChainValid(v_x_330_);
lean_dec(v_x_330_);
v_r_332_ = lean_box(v_res_331_);
return v_r_332_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_isChainBroken(lean_object* v_entries_333_){
_start:
{
uint8_t v___x_334_; 
v___x_334_ = lp_Echonomics_Echonomics_WardMonitor_isChainValid(v_entries_333_);
if (v___x_334_ == 0)
{
uint8_t v___x_335_; 
v___x_335_ = 1;
return v___x_335_;
}
else
{
uint8_t v___x_336_; 
v___x_336_ = 0;
return v___x_336_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_isChainBroken___boxed(lean_object* v_entries_337_){
_start:
{
uint8_t v_res_338_; lean_object* v_r_339_; 
v_res_338_ = lp_Echonomics_Echonomics_WardMonitor_isChainBroken(v_entries_337_);
lean_dec(v_entries_337_);
v_r_339_ = lean_box(v_res_338_);
return v_r_339_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_WardMonitor_monitorInterlock(lean_object* v_entries_340_, lean_object* v_st_341_){
_start:
{
uint8_t v___x_342_; 
v___x_342_ = lp_Echonomics_Echonomics_WardMonitor_sigGovKill(v_st_341_);
if (v___x_342_ == 0)
{
uint8_t v___x_343_; 
v___x_343_ = lp_Echonomics_Echonomics_WardMonitor_isChainBroken(v_entries_340_);
return v___x_343_;
}
else
{
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_WardMonitor_monitorInterlock___boxed(lean_object* v_entries_344_, lean_object* v_st_345_){
_start:
{
uint8_t v_res_346_; lean_object* v_r_347_; 
v_res_346_ = lp_Echonomics_Echonomics_WardMonitor_monitorInterlock(v_entries_344_, v_st_345_);
lean_dec_ref(v_st_345_);
lean_dec(v_entries_344_);
v_r_347_ = lean_box(v_res_346_);
return v_r_347_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_WardMonitor_0__Echonomics_WardMonitor_isChainValid_match__1_splitter___redArg(lean_object* v_x_348_, lean_object* v_h__1_349_, lean_object* v_h__2_350_, lean_object* v_h__3_351_){
_start:
{
if (lean_obj_tag(v_x_348_) == 0)
{
lean_object* v___x_352_; lean_object* v___x_353_; 
lean_dec(v_h__3_351_);
lean_dec(v_h__2_350_);
v___x_352_ = lean_box(0);
v___x_353_ = lean_apply_1(v_h__1_349_, v___x_352_);
return v___x_353_;
}
else
{
lean_object* v_tail_354_; 
lean_dec(v_h__1_349_);
v_tail_354_ = lean_ctor_get(v_x_348_, 1);
if (lean_obj_tag(v_tail_354_) == 0)
{
lean_object* v_head_355_; lean_object* v___x_356_; 
lean_dec(v_h__3_351_);
v_head_355_ = lean_ctor_get(v_x_348_, 0);
lean_inc(v_head_355_);
lean_dec_ref_known(v_x_348_, 2);
v___x_356_ = lean_apply_1(v_h__2_350_, v_head_355_);
return v___x_356_;
}
else
{
lean_object* v_head_357_; lean_object* v_head_358_; lean_object* v_tail_359_; lean_object* v___x_360_; 
lean_inc_ref(v_tail_354_);
lean_dec(v_h__2_350_);
v_head_357_ = lean_ctor_get(v_x_348_, 0);
lean_inc(v_head_357_);
lean_dec_ref_known(v_x_348_, 2);
v_head_358_ = lean_ctor_get(v_tail_354_, 0);
lean_inc(v_head_358_);
v_tail_359_ = lean_ctor_get(v_tail_354_, 1);
lean_inc(v_tail_359_);
lean_dec_ref_known(v_tail_354_, 2);
v___x_360_ = lean_apply_3(v_h__3_351_, v_head_357_, v_head_358_, v_tail_359_);
return v___x_360_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_WardMonitor_0__Echonomics_WardMonitor_isChainValid_match__1_splitter(lean_object* v_motive_361_, lean_object* v_x_362_, lean_object* v_h__1_363_, lean_object* v_h__2_364_, lean_object* v_h__3_365_){
_start:
{
if (lean_obj_tag(v_x_362_) == 0)
{
lean_object* v___x_366_; lean_object* v___x_367_; 
lean_dec(v_h__3_365_);
lean_dec(v_h__2_364_);
v___x_366_ = lean_box(0);
v___x_367_ = lean_apply_1(v_h__1_363_, v___x_366_);
return v___x_367_;
}
else
{
lean_object* v_tail_368_; 
lean_dec(v_h__1_363_);
v_tail_368_ = lean_ctor_get(v_x_362_, 1);
if (lean_obj_tag(v_tail_368_) == 0)
{
lean_object* v_head_369_; lean_object* v___x_370_; 
lean_dec(v_h__3_365_);
v_head_369_ = lean_ctor_get(v_x_362_, 0);
lean_inc(v_head_369_);
lean_dec_ref_known(v_x_362_, 2);
v___x_370_ = lean_apply_1(v_h__2_364_, v_head_369_);
return v___x_370_;
}
else
{
lean_object* v_head_371_; lean_object* v_head_372_; lean_object* v_tail_373_; lean_object* v___x_374_; 
lean_inc_ref(v_tail_368_);
lean_dec(v_h__2_364_);
v_head_371_ = lean_ctor_get(v_x_362_, 0);
lean_inc(v_head_371_);
lean_dec_ref_known(v_x_362_, 2);
v_head_372_ = lean_ctor_get(v_tail_368_, 0);
lean_inc(v_head_372_);
v_tail_373_ = lean_ctor_get(v_tail_368_, 1);
lean_inc(v_tail_373_);
lean_dec_ref_known(v_tail_368_, 2);
v___x_374_ = lean_apply_3(v_h__3_365_, v_head_371_, v_head_372_, v_tail_373_);
return v___x_374_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_WardMonitor(uint8_t builtin) {
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
lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND = _init_lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND();
lean_mark_persistent(lp_Echonomics_Echonomics_WardMonitor_ENERGY__RED__BOUND);
lp_Echonomics_Echonomics_WardMonitor_TDI__GREEN__BOUND = _init_lp_Echonomics_Echonomics_WardMonitor_TDI__GREEN__BOUND();
lean_mark_persistent(lp_Echonomics_Echonomics_WardMonitor_TDI__GREEN__BOUND);
lp_Echonomics_Echonomics_WardMonitor_TDI__AMBER__BOUND = _init_lp_Echonomics_Echonomics_WardMonitor_TDI__AMBER__BOUND();
lean_mark_persistent(lp_Echonomics_Echonomics_WardMonitor_TDI__AMBER__BOUND);
lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND = _init_lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND();
lean_mark_persistent(lp_Echonomics_Echonomics_WardMonitor_HRV__AMBER__BOUND);
lp_Echonomics_Echonomics_WardMonitor_MASKING__WINDOW = _init_lp_Echonomics_Echonomics_WardMonitor_MASKING__WINDOW();
lean_mark_persistent(lp_Echonomics_Echonomics_WardMonitor_MASKING__WINDOW);
lp_Echonomics_Echonomics_WardMonitor_MASKING__RED__COUNT = _init_lp_Echonomics_Echonomics_WardMonitor_MASKING__RED__COUNT();
lean_mark_persistent(lp_Echonomics_Echonomics_WardMonitor_MASKING__RED__COUNT);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
