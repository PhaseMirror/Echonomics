// Lean compiler output
// Module: Echonomics.HundianCodebookRunbook
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_cast___at___00Dyadic_toRat_spec__0(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Hundian Occupancy Codebook v1 Specification"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 101, .m_capacity = 101, .m_length = 100, .m_data = "Freeze Pauli key K = (role_class, slot_id, period_id), G0-G5 gate priority, and period-0 log schema."};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "Standardize Pauli key allocation and derived multiplicity calculations M = n_unpaired + 1."};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Deterministic gate evaluation"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Machine-checked period-0 log validity"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Hundian Period-0 Occupancy Runbook v1 Execution"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "Formally bind Period-0 seat proposals, vacate operations, and period lifecycle status transitions."};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Enforce exact result code execution across all period-0 log transactions."};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Period status gate enforcement"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Replay validation"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Hundian Revision and Forbidden Terms Deprecation"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 97, .m_capacity = 97, .m_length = 96, .m_data = "Retire unearned terms (MSC, 1+2R, reciprocity) and enforce strict zero-drift codebook alignment."};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Deprecate retired terminology and strike them from ledgers."};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Zero semantic drift"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Strict codebook compliance"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unpairedCount"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__6_value;
static lean_once_cell_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "degenerateSetSize"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__11_value;
static lean_once_cell_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__13_value;
static lean_once_cell_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14;
static lean_once_cell_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__16 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__16_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__13_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__17 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__17_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity___boxed(lean_object*);
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_77_ = lean_unsigned_to_nat(17u);
v___x_78_ = lean_nat_to_int(v___x_77_);
return v___x_78_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(21u);
v___x_86_ = lean_nat_to_int(v___x_85_);
return v___x_86_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__0));
v___x_89_ = lean_string_length(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14);
v___x_91_ = lean_nat_to_int(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg(lean_object* v_x_96_){
_start:
{
lean_object* v_unpairedCount_97_; lean_object* v_degenerateSetSize_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_133_; 
v_unpairedCount_97_ = lean_ctor_get(v_x_96_, 0);
v_degenerateSetSize_98_ = lean_ctor_get(v_x_96_, 1);
v_isSharedCheck_133_ = !lean_is_exclusive(v_x_96_);
if (v_isSharedCheck_133_ == 0)
{
v___x_100_ = v_x_96_;
v_isShared_101_ = v_isSharedCheck_133_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_degenerateSetSize_98_);
lean_inc(v_unpairedCount_97_);
lean_dec(v_x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_133_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_102_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__5));
v___x_103_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__6));
v___x_104_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7);
v___x_105_ = l_Nat_reprFast(v_unpairedCount_97_);
v___x_106_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
if (v_isShared_101_ == 0)
{
lean_ctor_set_tag(v___x_100_, 4);
lean_ctor_set(v___x_100_, 1, v___x_106_);
lean_ctor_set(v___x_100_, 0, v___x_104_);
v___x_108_ = v___x_100_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_104_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v___x_106_);
v___x_108_ = v_reuseFailAlloc_132_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_109_ = 0;
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_109_);
v___x_111_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_103_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__9));
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = lean_box(1);
v___x_115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
v___x_116_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__11));
v___x_117_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_117_);
lean_ctor_set(v___x_118_, 1, v___x_102_);
v___x_119_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12);
v___x_120_ = l_Nat_reprFast(v_degenerateSetSize_98_);
v___x_121_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
v___x_122_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set_uint8(v___x_123_, sizeof(void*)*1, v___x_109_);
v___x_124_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_118_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15);
v___x_126_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__16));
v___x_127_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___x_124_);
v___x_128_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__17));
v___x_129_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_127_);
lean_ctor_set(v___x_129_, 1, v___x_128_);
v___x_130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_130_, 0, v___x_125_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set_uint8(v___x_131_, sizeof(void*)*1, v___x_109_);
return v___x_131_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr(lean_object* v_x_134_, lean_object* v_prec_135_){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg(v_x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___boxed(lean_object* v_x_137_, lean_object* v_prec_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr(v_x_137_, v_prec_138_);
lean_dec(v_prec_138_);
return v_res_139_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq(lean_object* v_x_142_, lean_object* v_x_143_){
_start:
{
lean_object* v_unpairedCount_144_; lean_object* v_degenerateSetSize_145_; lean_object* v_unpairedCount_146_; lean_object* v_degenerateSetSize_147_; uint8_t v___x_148_; 
v_unpairedCount_144_ = lean_ctor_get(v_x_142_, 0);
v_degenerateSetSize_145_ = lean_ctor_get(v_x_142_, 1);
v_unpairedCount_146_ = lean_ctor_get(v_x_143_, 0);
v_degenerateSetSize_147_ = lean_ctor_get(v_x_143_, 1);
v___x_148_ = lean_nat_dec_eq(v_unpairedCount_144_, v_unpairedCount_146_);
if (v___x_148_ == 0)
{
return v___x_148_;
}
else
{
uint8_t v___x_149_; 
v___x_149_ = lean_nat_dec_eq(v_degenerateSetSize_145_, v_degenerateSetSize_147_);
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq___boxed(lean_object* v_x_150_, lean_object* v_x_151_){
_start:
{
uint8_t v_res_152_; lean_object* v_r_153_; 
v_res_152_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq(v_x_150_, v_x_151_);
lean_dec_ref(v_x_151_);
lean_dec_ref(v_x_150_);
v_r_153_ = lean_box(v_res_152_);
return v_r_153_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState(lean_object* v_x_154_, lean_object* v_x_155_){
_start:
{
uint8_t v___x_156_; 
v___x_156_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq(v_x_154_, v_x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState___boxed(lean_object* v_x_157_, lean_object* v_x_158_){
_start:
{
uint8_t v_res_159_; lean_object* v_r_160_; 
v_res_159_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState(v_x_157_, v_x_158_);
lean_dec_ref(v_x_158_);
lean_dec_ref(v_x_157_);
v_r_160_ = lean_box(v_res_159_);
return v_r_160_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(2u);
v___x_162_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin(lean_object* v_st_163_){
_start:
{
lean_object* v_unpairedCount_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_unpairedCount_164_ = lean_ctor_get(v_st_163_, 0);
lean_inc(v_unpairedCount_164_);
lean_dec_ref(v_st_163_);
v___x_165_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v_unpairedCount_164_);
v___x_166_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0, &lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0);
v___x_167_ = l_Rat_div(v___x_165_, v___x_166_);
lean_dec_ref(v___x_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(lean_object* v_st_168_){
_start:
{
lean_object* v_unpairedCount_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_unpairedCount_169_ = lean_ctor_get(v_st_168_, 0);
v___x_170_ = lean_unsigned_to_nat(1u);
v___x_171_ = lean_nat_add(v_unpairedCount_169_, v___x_170_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity___boxed(lean_object* v_st_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(v_st_172_);
lean_dec_ref(v_st_172_);
return v_res_173_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_HundianCodebookRunbook(uint8_t builtin) {
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
