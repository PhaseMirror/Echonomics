// Lean compiler output
// Module: Echonomics.HlixInfrastructure
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "HLIX Compute Infrastructure Clearinghouse and UOR Reference Model"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 184, .m_capacity = 184, .m_length = 183, .m_data = "Comprehensive specification for HLIX post-trade compute clearinghouse, Universal Object Reference (UOR) prime-indexed storage, Holotrade pricing, and Flux Core failover orchestration."};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 141, .m_capacity = 141, .m_length = 140, .m_data = "Bind compute identity to deterministic prime-indexed UOR roots, clear trades only when bid meets ask, and charge a bounded 10% exchange fee."};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Zero-drift UOR identity"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Fail-closed clearing gate"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_adr0028 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_adr0028___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "primeIndex"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__6_value;
static lean_once_cell_t lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__7;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exponent"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__11_value;
static lean_once_cell_t lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__13_value;
static lean_once_cell_t lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__14;
static lean_once_cell_t lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__16 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__16_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__13_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__17 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_isValidUorReference(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_isValidUorReference___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_uorRoot(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_uorRoot___boxed(lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "bidPrice"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "askPrice"};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState = (const lean_object*)&lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_clears(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_clears___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_clearingPrice(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_clearingPrice___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_EXCHANGE__FEE__BASIS;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_exchangeFee(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_exchangeFee___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_isAllocationWithinCapacity(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_isAllocationWithinCapacity___boxed(lean_object*, lean_object*);
static lean_object* _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(14u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(12u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_46_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__0));
v___x_47_ = lean_string_length(v___x_46_);
return v___x_47_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_obj_once(&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__14, &lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__14_once, _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__14);
v___x_49_ = lean_nat_to_int(v___x_48_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg(lean_object* v_x_54_){
_start:
{
lean_object* v_primeIndex_55_; lean_object* v_exponent_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_91_; 
v_primeIndex_55_ = lean_ctor_get(v_x_54_, 0);
v_exponent_56_ = lean_ctor_get(v_x_54_, 1);
v_isSharedCheck_91_ = !lean_is_exclusive(v_x_54_);
if (v_isSharedCheck_91_ == 0)
{
v___x_58_ = v_x_54_;
v_isShared_59_ = v_isSharedCheck_91_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_exponent_56_);
lean_inc(v_primeIndex_55_);
lean_dec(v_x_54_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_91_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_60_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__5));
v___x_61_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__6));
v___x_62_ = lean_obj_once(&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__7, &lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__7);
v___x_63_ = l_Nat_reprFast(v_primeIndex_55_);
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
v___x_70_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__9));
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_69_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_box(1);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__11));
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_60_);
v___x_77_ = lean_obj_once(&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12, &lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12);
v___x_78_ = l_Nat_reprFast(v_exponent_56_);
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
v___x_83_ = lean_obj_once(&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15, &lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15);
v___x_84_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__16));
v___x_85_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set(v___x_85_, 1, v___x_82_);
v___x_86_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__17));
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
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr(lean_object* v_x_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg(v_x_92_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___boxed(lean_object* v_x_95_, lean_object* v_prec_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr(v_x_95_, v_prec_96_);
lean_dec(v_prec_96_);
return v_res_97_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference_decEq(lean_object* v_x_100_, lean_object* v_x_101_){
_start:
{
lean_object* v_primeIndex_102_; lean_object* v_exponent_103_; lean_object* v_primeIndex_104_; lean_object* v_exponent_105_; uint8_t v___x_106_; 
v_primeIndex_102_ = lean_ctor_get(v_x_100_, 0);
v_exponent_103_ = lean_ctor_get(v_x_100_, 1);
v_primeIndex_104_ = lean_ctor_get(v_x_101_, 0);
v_exponent_105_ = lean_ctor_get(v_x_101_, 1);
v___x_106_ = lean_nat_dec_eq(v_primeIndex_102_, v_primeIndex_104_);
if (v___x_106_ == 0)
{
return v___x_106_;
}
else
{
uint8_t v___x_107_; 
v___x_107_ = lean_nat_dec_eq(v_exponent_103_, v_exponent_105_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference_decEq___boxed(lean_object* v_x_108_, lean_object* v_x_109_){
_start:
{
uint8_t v_res_110_; lean_object* v_r_111_; 
v_res_110_ = lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference_decEq(v_x_108_, v_x_109_);
lean_dec_ref(v_x_109_);
lean_dec_ref(v_x_108_);
v_r_111_ = lean_box(v_res_110_);
return v_r_111_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference(lean_object* v_x_112_, lean_object* v_x_113_){
_start:
{
uint8_t v___x_114_; 
v___x_114_ = lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference_decEq(v_x_112_, v_x_113_);
return v___x_114_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference___boxed(lean_object* v_x_115_, lean_object* v_x_116_){
_start:
{
uint8_t v_res_117_; lean_object* v_r_118_; 
v_res_117_ = lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqUorReference(v_x_115_, v_x_116_);
lean_dec_ref(v_x_116_);
lean_dec_ref(v_x_115_);
v_r_118_ = lean_box(v_res_117_);
return v_r_118_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_isValidUorReference(lean_object* v_ref_119_){
_start:
{
lean_object* v_primeIndex_120_; lean_object* v_exponent_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v_primeIndex_120_ = lean_ctor_get(v_ref_119_, 0);
v_exponent_121_ = lean_ctor_get(v_ref_119_, 1);
v___x_122_ = lean_unsigned_to_nat(2u);
v___x_123_ = lean_nat_dec_le(v___x_122_, v_primeIndex_120_);
if (v___x_123_ == 0)
{
return v___x_123_;
}
else
{
lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_124_ = lean_unsigned_to_nat(1u);
v___x_125_ = lean_nat_dec_le(v___x_124_, v_exponent_121_);
return v___x_125_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_isValidUorReference___boxed(lean_object* v_ref_126_){
_start:
{
uint8_t v_res_127_; lean_object* v_r_128_; 
v_res_127_ = lp_Echonomics_Echonomics_HlixInfrastructure_isValidUorReference(v_ref_126_);
lean_dec_ref(v_ref_126_);
v_r_128_ = lean_box(v_res_127_);
return v_r_128_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_uorRoot(lean_object* v_ref_129_){
_start:
{
lean_object* v_primeIndex_130_; lean_object* v_exponent_131_; lean_object* v___x_132_; 
v_primeIndex_130_ = lean_ctor_get(v_ref_129_, 0);
v_exponent_131_ = lean_ctor_get(v_ref_129_, 1);
v___x_132_ = lean_nat_pow(v_primeIndex_130_, v_exponent_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_uorRoot___boxed(lean_object* v_ref_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = lp_Echonomics_Echonomics_HlixInfrastructure_uorRoot(v_ref_133_);
lean_dec_ref(v_ref_133_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg(lean_object* v_x_147_){
_start:
{
lean_object* v_bidPrice_148_; lean_object* v_askPrice_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_183_; 
v_bidPrice_148_ = lean_ctor_get(v_x_147_, 0);
v_askPrice_149_ = lean_ctor_get(v_x_147_, 1);
v_isSharedCheck_183_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_183_ == 0)
{
v___x_151_ = v_x_147_;
v_isShared_152_ = v_isSharedCheck_183_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_askPrice_149_);
lean_inc(v_bidPrice_148_);
lean_dec(v_x_147_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_183_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
v___x_153_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__5));
v___x_154_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__3));
v___x_155_ = lean_obj_once(&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12, &lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__12);
v___x_156_ = l_Nat_reprFast(v_bidPrice_148_);
v___x_157_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
if (v_isShared_152_ == 0)
{
lean_ctor_set_tag(v___x_151_, 4);
lean_ctor_set(v___x_151_, 1, v___x_157_);
lean_ctor_set(v___x_151_, 0, v___x_155_);
v___x_159_ = v___x_151_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v___x_155_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v___x_157_);
v___x_159_ = v_reuseFailAlloc_182_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_160_ = 0;
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_160_);
v___x_162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_154_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__9));
v___x_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = lean_box(1);
v___x_166_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg___closed__5));
v___x_168_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_168_, 0, v___x_166_);
lean_ctor_set(v___x_168_, 1, v___x_167_);
v___x_169_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_153_);
v___x_170_ = l_Nat_reprFast(v_askPrice_149_);
v___x_171_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
v___x_172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_155_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_173_, 0, v___x_172_);
lean_ctor_set_uint8(v___x_173_, sizeof(void*)*1, v___x_160_);
v___x_174_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_169_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = lean_obj_once(&lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15, &lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__15);
v___x_176_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__16));
v___x_177_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v___x_174_);
v___x_178_ = ((lean_object*)(lp_Echonomics_Echonomics_HlixInfrastructure_instReprUorReference_repr___redArg___closed__17));
v___x_179_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_179_, 0, v___x_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_175_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_181_, 0, v___x_180_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*1, v___x_160_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr(lean_object* v_x_184_, lean_object* v_prec_185_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___redArg(v_x_184_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr___boxed(lean_object* v_x_187_, lean_object* v_prec_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = lp_Echonomics_Echonomics_HlixInfrastructure_instReprClearingState_repr(v_x_187_, v_prec_188_);
lean_dec(v_prec_188_);
return v_res_189_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState_decEq(lean_object* v_x_192_, lean_object* v_x_193_){
_start:
{
lean_object* v_bidPrice_194_; lean_object* v_askPrice_195_; lean_object* v_bidPrice_196_; lean_object* v_askPrice_197_; uint8_t v___x_198_; 
v_bidPrice_194_ = lean_ctor_get(v_x_192_, 0);
v_askPrice_195_ = lean_ctor_get(v_x_192_, 1);
v_bidPrice_196_ = lean_ctor_get(v_x_193_, 0);
v_askPrice_197_ = lean_ctor_get(v_x_193_, 1);
v___x_198_ = lean_nat_dec_eq(v_bidPrice_194_, v_bidPrice_196_);
if (v___x_198_ == 0)
{
return v___x_198_;
}
else
{
uint8_t v___x_199_; 
v___x_199_ = lean_nat_dec_eq(v_askPrice_195_, v_askPrice_197_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState_decEq___boxed(lean_object* v_x_200_, lean_object* v_x_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState_decEq(v_x_200_, v_x_201_);
lean_dec_ref(v_x_201_);
lean_dec_ref(v_x_200_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState(lean_object* v_x_204_, lean_object* v_x_205_){
_start:
{
uint8_t v___x_206_; 
v___x_206_ = lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState_decEq(v_x_204_, v_x_205_);
return v___x_206_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState___boxed(lean_object* v_x_207_, lean_object* v_x_208_){
_start:
{
uint8_t v_res_209_; lean_object* v_r_210_; 
v_res_209_ = lp_Echonomics_Echonomics_HlixInfrastructure_instDecidableEqClearingState(v_x_207_, v_x_208_);
lean_dec_ref(v_x_208_);
lean_dec_ref(v_x_207_);
v_r_210_ = lean_box(v_res_209_);
return v_r_210_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_clears(lean_object* v_st_211_){
_start:
{
lean_object* v_bidPrice_212_; lean_object* v_askPrice_213_; uint8_t v___x_214_; 
v_bidPrice_212_ = lean_ctor_get(v_st_211_, 0);
v_askPrice_213_ = lean_ctor_get(v_st_211_, 1);
v___x_214_ = lean_nat_dec_le(v_askPrice_213_, v_bidPrice_212_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_clears___boxed(lean_object* v_st_215_){
_start:
{
uint8_t v_res_216_; lean_object* v_r_217_; 
v_res_216_ = lp_Echonomics_Echonomics_HlixInfrastructure_clears(v_st_215_);
lean_dec_ref(v_st_215_);
v_r_217_ = lean_box(v_res_216_);
return v_r_217_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_clearingPrice(lean_object* v_st_218_){
_start:
{
lean_object* v_askPrice_219_; 
v_askPrice_219_ = lean_ctor_get(v_st_218_, 1);
lean_inc(v_askPrice_219_);
return v_askPrice_219_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_clearingPrice___boxed(lean_object* v_st_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = lp_Echonomics_Echonomics_HlixInfrastructure_clearingPrice(v_st_220_);
lean_dec_ref(v_st_220_);
return v_res_221_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HlixInfrastructure_EXCHANGE__FEE__BASIS(void){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = lean_unsigned_to_nat(10u);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_exchangeFee(lean_object* v_price_223_){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = lean_unsigned_to_nat(10u);
v___x_225_ = lean_nat_div(v_price_223_, v___x_224_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_exchangeFee___boxed(lean_object* v_price_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = lp_Echonomics_Echonomics_HlixInfrastructure_exchangeFee(v_price_226_);
lean_dec(v_price_226_);
return v_res_227_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HlixInfrastructure_isAllocationWithinCapacity(lean_object* v_allocated_228_, lean_object* v_total_229_){
_start:
{
uint8_t v___x_230_; 
v___x_230_ = lean_nat_dec_le(v_allocated_228_, v_total_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HlixInfrastructure_isAllocationWithinCapacity___boxed(lean_object* v_allocated_231_, lean_object* v_total_232_){
_start:
{
uint8_t v_res_233_; lean_object* v_r_234_; 
v_res_233_ = lp_Echonomics_Echonomics_HlixInfrastructure_isAllocationWithinCapacity(v_allocated_231_, v_total_232_);
lean_dec(v_total_232_);
lean_dec(v_allocated_231_);
v_r_234_ = lean_box(v_res_233_);
return v_r_234_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_HlixInfrastructure(uint8_t builtin) {
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
lp_Echonomics_Echonomics_HlixInfrastructure_EXCHANGE__FEE__BASIS = _init_lp_Echonomics_Echonomics_HlixInfrastructure_EXCHANGE__FEE__BASIS();
lean_mark_persistent(lp_Echonomics_Echonomics_HlixInfrastructure_EXCHANGE__FEE__BASIS);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
