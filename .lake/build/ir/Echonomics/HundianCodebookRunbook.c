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
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_cast___at___00Dyadic_toRat_spec__0(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
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
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0007___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
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
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0008___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
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
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_adr0009___closed__7_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Echonomics.HundianCodebookRunbook.PeriodLifecycleStatus.Draft"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Echonomics.HundianCodebookRunbook.PeriodLifecycleStatus.Open"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Echonomics.HundianCodebookRunbook.PeriodLifecycleStatus.Closed"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__5_value;
static lean_once_cell_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6;
static lean_once_cell_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqPeriodLifecycleStatus(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqPeriodLifecycleStatus___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.OkSingle"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.OkPair"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.OkHierarchy"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__5_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.OkDualHatWaiver"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__6_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.OkVacate"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejBadOp"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__11_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejPeriodClosed"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__12 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__12_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__12_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__13_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejUnknownPerson"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__14 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__14_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__14_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__15 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__15_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejUnknownClass"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__16 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__16_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__16_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__17 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__17_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejPauli"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__18 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__18_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__18_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__19 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__19_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejTermOrder"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__20 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__20_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__20_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__21 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__21_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejDualHat"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__22 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__22_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__22_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__23 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__23_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Echonomics.HundianCodebookRunbook.CodebookResultCode.RejNotOccupant"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__24 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__24_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__24_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__25 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__25_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookResultCode(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookResultCode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "Echonomics.HundianCodebookRunbook.DeprecatedTerm.VMSC"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Echonomics.HundianCodebookRunbook.DeprecatedTerm.OnePlusTwoR"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "Echonomics.HundianCodebookRunbook.DeprecatedTerm.SReciprocity"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__5_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Echonomics.HundianCodebookRunbook.DeprecatedTerm.AtomicPhysicsIsomorphism"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__6_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "Echonomics.HundianCodebookRunbook.DeprecatedTerm.GroundStateFullShell"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Echonomics.HundianCodebookRunbook.DeprecatedTerm.GroundStateMaxM"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__11_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqDeprecatedTerm(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqDeprecatedTerm___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Echonomics.HundianCodebookRunbook.SpinTag.Alpha"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Echonomics.HundianCodebookRunbook.SpinTag.Beta"};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__3_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag = (const lean_object*)&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqSpinTag(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqSpinTag___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSystemEnergy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSystemEnergy___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_isForbiddenClaim(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_isForbiddenClaim___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateFillGate(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateFillGate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateVacateGate(uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateVacateGate___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx(uint8_t v_x_64_){
_start:
{
switch(v_x_64_)
{
case 0:
{
lean_object* v___x_65_; 
v___x_65_ = lean_unsigned_to_nat(0u);
return v___x_65_;
}
case 1:
{
lean_object* v___x_66_; 
v___x_66_ = lean_unsigned_to_nat(1u);
return v___x_66_;
}
default: 
{
lean_object* v___x_67_; 
v___x_67_ = lean_unsigned_to_nat(2u);
return v___x_67_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx___boxed(lean_object* v_x_68_){
_start:
{
uint8_t v_x_boxed_69_; lean_object* v_res_70_; 
v_x_boxed_69_ = lean_unbox(v_x_68_);
v_res_70_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx(v_x_boxed_69_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_toCtorIdx(uint8_t v_x_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx(v_x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_toCtorIdx___boxed(lean_object* v_x_73_){
_start:
{
uint8_t v_x_4__boxed_74_; lean_object* v_res_75_; 
v_x_4__boxed_74_ = lean_unbox(v_x_73_);
v_res_75_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_toCtorIdx(v_x_4__boxed_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim___redArg(lean_object* v_k_76_){
_start:
{
lean_inc(v_k_76_);
return v_k_76_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim___redArg___boxed(lean_object* v_k_77_){
_start:
{
lean_object* v_res_78_; 
v_res_78_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim___redArg(v_k_77_);
lean_dec(v_k_77_);
return v_res_78_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim(lean_object* v_motive_79_, lean_object* v_ctorIdx_80_, uint8_t v_t_81_, lean_object* v_h_82_, lean_object* v_k_83_){
_start:
{
lean_inc(v_k_83_);
return v_k_83_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim___boxed(lean_object* v_motive_84_, lean_object* v_ctorIdx_85_, lean_object* v_t_86_, lean_object* v_h_87_, lean_object* v_k_88_){
_start:
{
uint8_t v_t_boxed_89_; lean_object* v_res_90_; 
v_t_boxed_89_ = lean_unbox(v_t_86_);
v_res_90_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorElim(v_motive_84_, v_ctorIdx_85_, v_t_boxed_89_, v_h_87_, v_k_88_);
lean_dec(v_k_88_);
lean_dec(v_ctorIdx_85_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim___redArg(lean_object* v_Draft_91_){
_start:
{
lean_inc(v_Draft_91_);
return v_Draft_91_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim___redArg___boxed(lean_object* v_Draft_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim___redArg(v_Draft_92_);
lean_dec(v_Draft_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim(lean_object* v_motive_94_, uint8_t v_t_95_, lean_object* v_h_96_, lean_object* v_Draft_97_){
_start:
{
lean_inc(v_Draft_97_);
return v_Draft_97_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim___boxed(lean_object* v_motive_98_, lean_object* v_t_99_, lean_object* v_h_100_, lean_object* v_Draft_101_){
_start:
{
uint8_t v_t_boxed_102_; lean_object* v_res_103_; 
v_t_boxed_102_ = lean_unbox(v_t_99_);
v_res_103_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Draft_elim(v_motive_98_, v_t_boxed_102_, v_h_100_, v_Draft_101_);
lean_dec(v_Draft_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim___redArg(lean_object* v_Open_104_){
_start:
{
lean_inc(v_Open_104_);
return v_Open_104_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim___redArg___boxed(lean_object* v_Open_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim___redArg(v_Open_105_);
lean_dec(v_Open_105_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim(lean_object* v_motive_107_, uint8_t v_t_108_, lean_object* v_h_109_, lean_object* v_Open_110_){
_start:
{
lean_inc(v_Open_110_);
return v_Open_110_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim___boxed(lean_object* v_motive_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_Open_114_){
_start:
{
uint8_t v_t_boxed_115_; lean_object* v_res_116_; 
v_t_boxed_115_ = lean_unbox(v_t_112_);
v_res_116_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Open_elim(v_motive_111_, v_t_boxed_115_, v_h_113_, v_Open_114_);
lean_dec(v_Open_114_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim___redArg(lean_object* v_Closed_117_){
_start:
{
lean_inc(v_Closed_117_);
return v_Closed_117_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim___redArg___boxed(lean_object* v_Closed_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim___redArg(v_Closed_118_);
lean_dec(v_Closed_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim(lean_object* v_motive_120_, uint8_t v_t_121_, lean_object* v_h_122_, lean_object* v_Closed_123_){
_start:
{
lean_inc(v_Closed_123_);
return v_Closed_123_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim___boxed(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_Closed_127_){
_start:
{
uint8_t v_t_boxed_128_; lean_object* v_res_129_; 
v_t_boxed_128_ = lean_unbox(v_t_125_);
v_res_129_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_Closed_elim(v_motive_124_, v_t_boxed_128_, v_h_126_, v_Closed_127_);
lean_dec(v_Closed_127_);
return v_res_129_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; 
v___x_139_ = lean_unsigned_to_nat(2u);
v___x_140_ = lean_nat_to_int(v___x_139_);
return v___x_140_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_nat_to_int(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr(uint8_t v_x_143_, lean_object* v_prec_144_){
_start:
{
lean_object* v___y_146_; lean_object* v___y_153_; lean_object* v___y_160_; 
switch(v_x_143_)
{
case 0:
{
lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = lean_unsigned_to_nat(1024u);
v___x_167_ = lean_nat_dec_le(v___x_166_, v_prec_144_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
v___x_168_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_146_ = v___x_168_;
goto v___jp_145_;
}
else
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_146_ = v___x_169_;
goto v___jp_145_;
}
}
case 1:
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = lean_unsigned_to_nat(1024u);
v___x_171_ = lean_nat_dec_le(v___x_170_, v_prec_144_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_153_ = v___x_172_;
goto v___jp_152_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_153_ = v___x_173_;
goto v___jp_152_;
}
}
default: 
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(1024u);
v___x_175_ = lean_nat_dec_le(v___x_174_, v_prec_144_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; 
v___x_176_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_160_ = v___x_176_;
goto v___jp_159_;
}
else
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_160_ = v___x_177_;
goto v___jp_159_;
}
}
}
v___jp_145_:
{
lean_object* v___x_147_; lean_object* v___x_148_; uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_147_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__1));
lean_inc(v___y_146_);
v___x_148_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_148_, 0, v___y_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = 0;
v___x_150_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_150_, 0, v___x_148_);
lean_ctor_set_uint8(v___x_150_, sizeof(void*)*1, v___x_149_);
v___x_151_ = l_Repr_addAppParen(v___x_150_, v_prec_144_);
return v___x_151_;
}
v___jp_152_:
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_154_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__3));
lean_inc(v___y_153_);
v___x_155_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_155_, 0, v___y_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = 0;
v___x_157_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_157_, 0, v___x_155_);
lean_ctor_set_uint8(v___x_157_, sizeof(void*)*1, v___x_156_);
v___x_158_ = l_Repr_addAppParen(v___x_157_, v_prec_144_);
return v___x_158_;
}
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_161_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__5));
lean_inc(v___y_160_);
v___x_162_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_162_, 0, v___y_160_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = 0;
v___x_164_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*1, v___x_163_);
v___x_165_ = l_Repr_addAppParen(v___x_164_, v_prec_144_);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___boxed(lean_object* v_x_178_, lean_object* v_prec_179_){
_start:
{
uint8_t v_x_177__boxed_180_; lean_object* v_res_181_; 
v_x_177__boxed_180_ = lean_unbox(v_x_178_);
v_res_181_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr(v_x_177__boxed_180_, v_prec_179_);
lean_dec(v_prec_179_);
return v_res_181_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ofNat(lean_object* v_n_184_){
_start:
{
lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = lean_nat_dec_le(v_n_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_object* v___x_187_; uint8_t v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = lean_nat_dec_le(v_n_184_, v___x_187_);
if (v___x_188_ == 0)
{
uint8_t v___x_189_; 
v___x_189_ = 2;
return v___x_189_;
}
else
{
uint8_t v___x_190_; 
v___x_190_ = 1;
return v___x_190_;
}
}
else
{
uint8_t v___x_191_; 
v___x_191_ = 0;
return v___x_191_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ofNat___boxed(lean_object* v_n_192_){
_start:
{
uint8_t v_res_193_; lean_object* v_r_194_; 
v_res_193_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ofNat(v_n_192_);
lean_dec(v_n_192_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqPeriodLifecycleStatus(uint8_t v_x_195_, uint8_t v_y_196_){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; uint8_t v___x_199_; 
v___x_197_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx(v_x_195_);
v___x_198_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_PeriodLifecycleStatus_ctorIdx(v_y_196_);
v___x_199_ = lean_nat_dec_eq(v___x_197_, v___x_198_);
lean_dec(v___x_198_);
lean_dec(v___x_197_);
return v___x_199_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqPeriodLifecycleStatus___boxed(lean_object* v_x_200_, lean_object* v_y_201_){
_start:
{
uint8_t v_x_13__boxed_202_; uint8_t v_y_14__boxed_203_; uint8_t v_res_204_; lean_object* v_r_205_; 
v_x_13__boxed_202_ = lean_unbox(v_x_200_);
v_y_14__boxed_203_ = lean_unbox(v_y_201_);
v_res_204_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqPeriodLifecycleStatus(v_x_13__boxed_202_, v_y_14__boxed_203_);
v_r_205_ = lean_box(v_res_204_);
return v_r_205_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx(uint8_t v_x_206_){
_start:
{
switch(v_x_206_)
{
case 0:
{
lean_object* v___x_207_; 
v___x_207_ = lean_unsigned_to_nat(0u);
return v___x_207_;
}
case 1:
{
lean_object* v___x_208_; 
v___x_208_ = lean_unsigned_to_nat(1u);
return v___x_208_;
}
case 2:
{
lean_object* v___x_209_; 
v___x_209_ = lean_unsigned_to_nat(2u);
return v___x_209_;
}
case 3:
{
lean_object* v___x_210_; 
v___x_210_ = lean_unsigned_to_nat(3u);
return v___x_210_;
}
case 4:
{
lean_object* v___x_211_; 
v___x_211_ = lean_unsigned_to_nat(4u);
return v___x_211_;
}
case 5:
{
lean_object* v___x_212_; 
v___x_212_ = lean_unsigned_to_nat(5u);
return v___x_212_;
}
case 6:
{
lean_object* v___x_213_; 
v___x_213_ = lean_unsigned_to_nat(6u);
return v___x_213_;
}
case 7:
{
lean_object* v___x_214_; 
v___x_214_ = lean_unsigned_to_nat(7u);
return v___x_214_;
}
case 8:
{
lean_object* v___x_215_; 
v___x_215_ = lean_unsigned_to_nat(8u);
return v___x_215_;
}
case 9:
{
lean_object* v___x_216_; 
v___x_216_ = lean_unsigned_to_nat(9u);
return v___x_216_;
}
case 10:
{
lean_object* v___x_217_; 
v___x_217_ = lean_unsigned_to_nat(10u);
return v___x_217_;
}
case 11:
{
lean_object* v___x_218_; 
v___x_218_ = lean_unsigned_to_nat(11u);
return v___x_218_;
}
default: 
{
lean_object* v___x_219_; 
v___x_219_ = lean_unsigned_to_nat(12u);
return v___x_219_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx___boxed(lean_object* v_x_220_){
_start:
{
uint8_t v_x_boxed_221_; lean_object* v_res_222_; 
v_x_boxed_221_ = lean_unbox(v_x_220_);
v_res_222_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx(v_x_boxed_221_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_toCtorIdx(uint8_t v_x_223_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx(v_x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_toCtorIdx___boxed(lean_object* v_x_225_){
_start:
{
uint8_t v_x_4__boxed_226_; lean_object* v_res_227_; 
v_x_4__boxed_226_ = lean_unbox(v_x_225_);
v_res_227_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_toCtorIdx(v_x_4__boxed_226_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim___redArg(lean_object* v_k_228_){
_start:
{
lean_inc(v_k_228_);
return v_k_228_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim___redArg___boxed(lean_object* v_k_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim___redArg(v_k_229_);
lean_dec(v_k_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim(lean_object* v_motive_231_, lean_object* v_ctorIdx_232_, uint8_t v_t_233_, lean_object* v_h_234_, lean_object* v_k_235_){
_start:
{
lean_inc(v_k_235_);
return v_k_235_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim___boxed(lean_object* v_motive_236_, lean_object* v_ctorIdx_237_, lean_object* v_t_238_, lean_object* v_h_239_, lean_object* v_k_240_){
_start:
{
uint8_t v_t_boxed_241_; lean_object* v_res_242_; 
v_t_boxed_241_ = lean_unbox(v_t_238_);
v_res_242_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorElim(v_motive_236_, v_ctorIdx_237_, v_t_boxed_241_, v_h_239_, v_k_240_);
lean_dec(v_k_240_);
lean_dec(v_ctorIdx_237_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim___redArg(lean_object* v_OkSingle_243_){
_start:
{
lean_inc(v_OkSingle_243_);
return v_OkSingle_243_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim___redArg___boxed(lean_object* v_OkSingle_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim___redArg(v_OkSingle_244_);
lean_dec(v_OkSingle_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim(lean_object* v_motive_246_, uint8_t v_t_247_, lean_object* v_h_248_, lean_object* v_OkSingle_249_){
_start:
{
lean_inc(v_OkSingle_249_);
return v_OkSingle_249_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim___boxed(lean_object* v_motive_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_OkSingle_253_){
_start:
{
uint8_t v_t_boxed_254_; lean_object* v_res_255_; 
v_t_boxed_254_ = lean_unbox(v_t_251_);
v_res_255_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkSingle_elim(v_motive_250_, v_t_boxed_254_, v_h_252_, v_OkSingle_253_);
lean_dec(v_OkSingle_253_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim___redArg(lean_object* v_OkPair_256_){
_start:
{
lean_inc(v_OkPair_256_);
return v_OkPair_256_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim___redArg___boxed(lean_object* v_OkPair_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim___redArg(v_OkPair_257_);
lean_dec(v_OkPair_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim(lean_object* v_motive_259_, uint8_t v_t_260_, lean_object* v_h_261_, lean_object* v_OkPair_262_){
_start:
{
lean_inc(v_OkPair_262_);
return v_OkPair_262_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim___boxed(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_OkPair_266_){
_start:
{
uint8_t v_t_boxed_267_; lean_object* v_res_268_; 
v_t_boxed_267_ = lean_unbox(v_t_264_);
v_res_268_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkPair_elim(v_motive_263_, v_t_boxed_267_, v_h_265_, v_OkPair_266_);
lean_dec(v_OkPair_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim___redArg(lean_object* v_OkHierarchy_269_){
_start:
{
lean_inc(v_OkHierarchy_269_);
return v_OkHierarchy_269_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim___redArg___boxed(lean_object* v_OkHierarchy_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim___redArg(v_OkHierarchy_270_);
lean_dec(v_OkHierarchy_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim(lean_object* v_motive_272_, uint8_t v_t_273_, lean_object* v_h_274_, lean_object* v_OkHierarchy_275_){
_start:
{
lean_inc(v_OkHierarchy_275_);
return v_OkHierarchy_275_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim___boxed(lean_object* v_motive_276_, lean_object* v_t_277_, lean_object* v_h_278_, lean_object* v_OkHierarchy_279_){
_start:
{
uint8_t v_t_boxed_280_; lean_object* v_res_281_; 
v_t_boxed_280_ = lean_unbox(v_t_277_);
v_res_281_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkHierarchy_elim(v_motive_276_, v_t_boxed_280_, v_h_278_, v_OkHierarchy_279_);
lean_dec(v_OkHierarchy_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim___redArg(lean_object* v_OkDualHatWaiver_282_){
_start:
{
lean_inc(v_OkDualHatWaiver_282_);
return v_OkDualHatWaiver_282_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim___redArg___boxed(lean_object* v_OkDualHatWaiver_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim___redArg(v_OkDualHatWaiver_283_);
lean_dec(v_OkDualHatWaiver_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim(lean_object* v_motive_285_, uint8_t v_t_286_, lean_object* v_h_287_, lean_object* v_OkDualHatWaiver_288_){
_start:
{
lean_inc(v_OkDualHatWaiver_288_);
return v_OkDualHatWaiver_288_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim___boxed(lean_object* v_motive_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_OkDualHatWaiver_292_){
_start:
{
uint8_t v_t_boxed_293_; lean_object* v_res_294_; 
v_t_boxed_293_ = lean_unbox(v_t_290_);
v_res_294_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkDualHatWaiver_elim(v_motive_289_, v_t_boxed_293_, v_h_291_, v_OkDualHatWaiver_292_);
lean_dec(v_OkDualHatWaiver_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim___redArg(lean_object* v_OkVacate_295_){
_start:
{
lean_inc(v_OkVacate_295_);
return v_OkVacate_295_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim___redArg___boxed(lean_object* v_OkVacate_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim___redArg(v_OkVacate_296_);
lean_dec(v_OkVacate_296_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim(lean_object* v_motive_298_, uint8_t v_t_299_, lean_object* v_h_300_, lean_object* v_OkVacate_301_){
_start:
{
lean_inc(v_OkVacate_301_);
return v_OkVacate_301_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim___boxed(lean_object* v_motive_302_, lean_object* v_t_303_, lean_object* v_h_304_, lean_object* v_OkVacate_305_){
_start:
{
uint8_t v_t_boxed_306_; lean_object* v_res_307_; 
v_t_boxed_306_ = lean_unbox(v_t_303_);
v_res_307_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_OkVacate_elim(v_motive_302_, v_t_boxed_306_, v_h_304_, v_OkVacate_305_);
lean_dec(v_OkVacate_305_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim___redArg(lean_object* v_RejBadOp_308_){
_start:
{
lean_inc(v_RejBadOp_308_);
return v_RejBadOp_308_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim___redArg___boxed(lean_object* v_RejBadOp_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim___redArg(v_RejBadOp_309_);
lean_dec(v_RejBadOp_309_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim(lean_object* v_motive_311_, uint8_t v_t_312_, lean_object* v_h_313_, lean_object* v_RejBadOp_314_){
_start:
{
lean_inc(v_RejBadOp_314_);
return v_RejBadOp_314_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim___boxed(lean_object* v_motive_315_, lean_object* v_t_316_, lean_object* v_h_317_, lean_object* v_RejBadOp_318_){
_start:
{
uint8_t v_t_boxed_319_; lean_object* v_res_320_; 
v_t_boxed_319_ = lean_unbox(v_t_316_);
v_res_320_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejBadOp_elim(v_motive_315_, v_t_boxed_319_, v_h_317_, v_RejBadOp_318_);
lean_dec(v_RejBadOp_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim___redArg(lean_object* v_RejPeriodClosed_321_){
_start:
{
lean_inc(v_RejPeriodClosed_321_);
return v_RejPeriodClosed_321_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim___redArg___boxed(lean_object* v_RejPeriodClosed_322_){
_start:
{
lean_object* v_res_323_; 
v_res_323_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim___redArg(v_RejPeriodClosed_322_);
lean_dec(v_RejPeriodClosed_322_);
return v_res_323_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim(lean_object* v_motive_324_, uint8_t v_t_325_, lean_object* v_h_326_, lean_object* v_RejPeriodClosed_327_){
_start:
{
lean_inc(v_RejPeriodClosed_327_);
return v_RejPeriodClosed_327_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim___boxed(lean_object* v_motive_328_, lean_object* v_t_329_, lean_object* v_h_330_, lean_object* v_RejPeriodClosed_331_){
_start:
{
uint8_t v_t_boxed_332_; lean_object* v_res_333_; 
v_t_boxed_332_ = lean_unbox(v_t_329_);
v_res_333_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPeriodClosed_elim(v_motive_328_, v_t_boxed_332_, v_h_330_, v_RejPeriodClosed_331_);
lean_dec(v_RejPeriodClosed_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim___redArg(lean_object* v_RejUnknownPerson_334_){
_start:
{
lean_inc(v_RejUnknownPerson_334_);
return v_RejUnknownPerson_334_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim___redArg___boxed(lean_object* v_RejUnknownPerson_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim___redArg(v_RejUnknownPerson_335_);
lean_dec(v_RejUnknownPerson_335_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim(lean_object* v_motive_337_, uint8_t v_t_338_, lean_object* v_h_339_, lean_object* v_RejUnknownPerson_340_){
_start:
{
lean_inc(v_RejUnknownPerson_340_);
return v_RejUnknownPerson_340_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim___boxed(lean_object* v_motive_341_, lean_object* v_t_342_, lean_object* v_h_343_, lean_object* v_RejUnknownPerson_344_){
_start:
{
uint8_t v_t_boxed_345_; lean_object* v_res_346_; 
v_t_boxed_345_ = lean_unbox(v_t_342_);
v_res_346_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownPerson_elim(v_motive_341_, v_t_boxed_345_, v_h_343_, v_RejUnknownPerson_344_);
lean_dec(v_RejUnknownPerson_344_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim___redArg(lean_object* v_RejUnknownClass_347_){
_start:
{
lean_inc(v_RejUnknownClass_347_);
return v_RejUnknownClass_347_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim___redArg___boxed(lean_object* v_RejUnknownClass_348_){
_start:
{
lean_object* v_res_349_; 
v_res_349_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim___redArg(v_RejUnknownClass_348_);
lean_dec(v_RejUnknownClass_348_);
return v_res_349_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim(lean_object* v_motive_350_, uint8_t v_t_351_, lean_object* v_h_352_, lean_object* v_RejUnknownClass_353_){
_start:
{
lean_inc(v_RejUnknownClass_353_);
return v_RejUnknownClass_353_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim___boxed(lean_object* v_motive_354_, lean_object* v_t_355_, lean_object* v_h_356_, lean_object* v_RejUnknownClass_357_){
_start:
{
uint8_t v_t_boxed_358_; lean_object* v_res_359_; 
v_t_boxed_358_ = lean_unbox(v_t_355_);
v_res_359_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejUnknownClass_elim(v_motive_354_, v_t_boxed_358_, v_h_356_, v_RejUnknownClass_357_);
lean_dec(v_RejUnknownClass_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim___redArg(lean_object* v_RejPauli_360_){
_start:
{
lean_inc(v_RejPauli_360_);
return v_RejPauli_360_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim___redArg___boxed(lean_object* v_RejPauli_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim___redArg(v_RejPauli_361_);
lean_dec(v_RejPauli_361_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim(lean_object* v_motive_363_, uint8_t v_t_364_, lean_object* v_h_365_, lean_object* v_RejPauli_366_){
_start:
{
lean_inc(v_RejPauli_366_);
return v_RejPauli_366_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim___boxed(lean_object* v_motive_367_, lean_object* v_t_368_, lean_object* v_h_369_, lean_object* v_RejPauli_370_){
_start:
{
uint8_t v_t_boxed_371_; lean_object* v_res_372_; 
v_t_boxed_371_ = lean_unbox(v_t_368_);
v_res_372_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejPauli_elim(v_motive_367_, v_t_boxed_371_, v_h_369_, v_RejPauli_370_);
lean_dec(v_RejPauli_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim___redArg(lean_object* v_RejTermOrder_373_){
_start:
{
lean_inc(v_RejTermOrder_373_);
return v_RejTermOrder_373_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim___redArg___boxed(lean_object* v_RejTermOrder_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim___redArg(v_RejTermOrder_374_);
lean_dec(v_RejTermOrder_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim(lean_object* v_motive_376_, uint8_t v_t_377_, lean_object* v_h_378_, lean_object* v_RejTermOrder_379_){
_start:
{
lean_inc(v_RejTermOrder_379_);
return v_RejTermOrder_379_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim___boxed(lean_object* v_motive_380_, lean_object* v_t_381_, lean_object* v_h_382_, lean_object* v_RejTermOrder_383_){
_start:
{
uint8_t v_t_boxed_384_; lean_object* v_res_385_; 
v_t_boxed_384_ = lean_unbox(v_t_381_);
v_res_385_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejTermOrder_elim(v_motive_380_, v_t_boxed_384_, v_h_382_, v_RejTermOrder_383_);
lean_dec(v_RejTermOrder_383_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim___redArg(lean_object* v_RejDualHat_386_){
_start:
{
lean_inc(v_RejDualHat_386_);
return v_RejDualHat_386_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim___redArg___boxed(lean_object* v_RejDualHat_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim___redArg(v_RejDualHat_387_);
lean_dec(v_RejDualHat_387_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim(lean_object* v_motive_389_, uint8_t v_t_390_, lean_object* v_h_391_, lean_object* v_RejDualHat_392_){
_start:
{
lean_inc(v_RejDualHat_392_);
return v_RejDualHat_392_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim___boxed(lean_object* v_motive_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_RejDualHat_396_){
_start:
{
uint8_t v_t_boxed_397_; lean_object* v_res_398_; 
v_t_boxed_397_ = lean_unbox(v_t_394_);
v_res_398_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejDualHat_elim(v_motive_393_, v_t_boxed_397_, v_h_395_, v_RejDualHat_396_);
lean_dec(v_RejDualHat_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim___redArg(lean_object* v_RejNotOccupant_399_){
_start:
{
lean_inc(v_RejNotOccupant_399_);
return v_RejNotOccupant_399_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim___redArg___boxed(lean_object* v_RejNotOccupant_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim___redArg(v_RejNotOccupant_400_);
lean_dec(v_RejNotOccupant_400_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim(lean_object* v_motive_402_, uint8_t v_t_403_, lean_object* v_h_404_, lean_object* v_RejNotOccupant_405_){
_start:
{
lean_inc(v_RejNotOccupant_405_);
return v_RejNotOccupant_405_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim___boxed(lean_object* v_motive_406_, lean_object* v_t_407_, lean_object* v_h_408_, lean_object* v_RejNotOccupant_409_){
_start:
{
uint8_t v_t_boxed_410_; lean_object* v_res_411_; 
v_t_boxed_410_ = lean_unbox(v_t_407_);
v_res_411_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_RejNotOccupant_elim(v_motive_406_, v_t_boxed_410_, v_h_408_, v_RejNotOccupant_409_);
lean_dec(v_RejNotOccupant_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr(uint8_t v_x_451_, lean_object* v_prec_452_){
_start:
{
lean_object* v___y_454_; lean_object* v___y_461_; lean_object* v___y_468_; lean_object* v___y_475_; lean_object* v___y_482_; lean_object* v___y_489_; lean_object* v___y_496_; lean_object* v___y_503_; lean_object* v___y_510_; lean_object* v___y_517_; lean_object* v___y_524_; lean_object* v___y_531_; lean_object* v___y_538_; 
switch(v_x_451_)
{
case 0:
{
lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_544_ = lean_unsigned_to_nat(1024u);
v___x_545_ = lean_nat_dec_le(v___x_544_, v_prec_452_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; 
v___x_546_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_454_ = v___x_546_;
goto v___jp_453_;
}
else
{
lean_object* v___x_547_; 
v___x_547_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_454_ = v___x_547_;
goto v___jp_453_;
}
}
case 1:
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = lean_unsigned_to_nat(1024u);
v___x_549_ = lean_nat_dec_le(v___x_548_, v_prec_452_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_461_ = v___x_550_;
goto v___jp_460_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_461_ = v___x_551_;
goto v___jp_460_;
}
}
case 2:
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = lean_unsigned_to_nat(1024u);
v___x_553_ = lean_nat_dec_le(v___x_552_, v_prec_452_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; 
v___x_554_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_468_ = v___x_554_;
goto v___jp_467_;
}
else
{
lean_object* v___x_555_; 
v___x_555_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_468_ = v___x_555_;
goto v___jp_467_;
}
}
case 3:
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_unsigned_to_nat(1024u);
v___x_557_ = lean_nat_dec_le(v___x_556_, v_prec_452_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; 
v___x_558_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_475_ = v___x_558_;
goto v___jp_474_;
}
else
{
lean_object* v___x_559_; 
v___x_559_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_475_ = v___x_559_;
goto v___jp_474_;
}
}
case 4:
{
lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_560_ = lean_unsigned_to_nat(1024u);
v___x_561_ = lean_nat_dec_le(v___x_560_, v_prec_452_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; 
v___x_562_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_482_ = v___x_562_;
goto v___jp_481_;
}
else
{
lean_object* v___x_563_; 
v___x_563_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_482_ = v___x_563_;
goto v___jp_481_;
}
}
case 5:
{
lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_564_ = lean_unsigned_to_nat(1024u);
v___x_565_ = lean_nat_dec_le(v___x_564_, v_prec_452_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; 
v___x_566_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_489_ = v___x_566_;
goto v___jp_488_;
}
else
{
lean_object* v___x_567_; 
v___x_567_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_489_ = v___x_567_;
goto v___jp_488_;
}
}
case 6:
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = lean_unsigned_to_nat(1024u);
v___x_569_ = lean_nat_dec_le(v___x_568_, v_prec_452_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; 
v___x_570_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_496_ = v___x_570_;
goto v___jp_495_;
}
else
{
lean_object* v___x_571_; 
v___x_571_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_496_ = v___x_571_;
goto v___jp_495_;
}
}
case 7:
{
lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_572_ = lean_unsigned_to_nat(1024u);
v___x_573_ = lean_nat_dec_le(v___x_572_, v_prec_452_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; 
v___x_574_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_503_ = v___x_574_;
goto v___jp_502_;
}
else
{
lean_object* v___x_575_; 
v___x_575_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_503_ = v___x_575_;
goto v___jp_502_;
}
}
case 8:
{
lean_object* v___x_576_; uint8_t v___x_577_; 
v___x_576_ = lean_unsigned_to_nat(1024u);
v___x_577_ = lean_nat_dec_le(v___x_576_, v_prec_452_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; 
v___x_578_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_510_ = v___x_578_;
goto v___jp_509_;
}
else
{
lean_object* v___x_579_; 
v___x_579_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_510_ = v___x_579_;
goto v___jp_509_;
}
}
case 9:
{
lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_580_ = lean_unsigned_to_nat(1024u);
v___x_581_ = lean_nat_dec_le(v___x_580_, v_prec_452_);
if (v___x_581_ == 0)
{
lean_object* v___x_582_; 
v___x_582_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_517_ = v___x_582_;
goto v___jp_516_;
}
else
{
lean_object* v___x_583_; 
v___x_583_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_517_ = v___x_583_;
goto v___jp_516_;
}
}
case 10:
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(1024u);
v___x_585_ = lean_nat_dec_le(v___x_584_, v_prec_452_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; 
v___x_586_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_524_ = v___x_586_;
goto v___jp_523_;
}
else
{
lean_object* v___x_587_; 
v___x_587_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_524_ = v___x_587_;
goto v___jp_523_;
}
}
case 11:
{
lean_object* v___x_588_; uint8_t v___x_589_; 
v___x_588_ = lean_unsigned_to_nat(1024u);
v___x_589_ = lean_nat_dec_le(v___x_588_, v_prec_452_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; 
v___x_590_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_531_ = v___x_590_;
goto v___jp_530_;
}
else
{
lean_object* v___x_591_; 
v___x_591_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_531_ = v___x_591_;
goto v___jp_530_;
}
}
default: 
{
lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_592_ = lean_unsigned_to_nat(1024u);
v___x_593_ = lean_nat_dec_le(v___x_592_, v_prec_452_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; 
v___x_594_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_538_ = v___x_594_;
goto v___jp_537_;
}
else
{
lean_object* v___x_595_; 
v___x_595_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_538_ = v___x_595_;
goto v___jp_537_;
}
}
}
v___jp_453_:
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_455_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__1));
lean_inc(v___y_454_);
v___x_456_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_456_, 0, v___y_454_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___x_457_ = 0;
v___x_458_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_458_, 0, v___x_456_);
lean_ctor_set_uint8(v___x_458_, sizeof(void*)*1, v___x_457_);
v___x_459_ = l_Repr_addAppParen(v___x_458_, v_prec_452_);
return v___x_459_;
}
v___jp_460_:
{
lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_462_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__3));
lean_inc(v___y_461_);
v___x_463_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_463_, 0, v___y_461_);
lean_ctor_set(v___x_463_, 1, v___x_462_);
v___x_464_ = 0;
v___x_465_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set_uint8(v___x_465_, sizeof(void*)*1, v___x_464_);
v___x_466_ = l_Repr_addAppParen(v___x_465_, v_prec_452_);
return v___x_466_;
}
v___jp_467_:
{
lean_object* v___x_469_; lean_object* v___x_470_; uint8_t v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_469_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__5));
lean_inc(v___y_468_);
v___x_470_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_470_, 0, v___y_468_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = 0;
v___x_472_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set_uint8(v___x_472_, sizeof(void*)*1, v___x_471_);
v___x_473_ = l_Repr_addAppParen(v___x_472_, v_prec_452_);
return v___x_473_;
}
v___jp_474_:
{
lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_476_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__7));
lean_inc(v___y_475_);
v___x_477_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_477_, 0, v___y_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = 0;
v___x_479_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set_uint8(v___x_479_, sizeof(void*)*1, v___x_478_);
v___x_480_ = l_Repr_addAppParen(v___x_479_, v_prec_452_);
return v___x_480_;
}
v___jp_481_:
{
lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_483_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__9));
lean_inc(v___y_482_);
v___x_484_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_484_, 0, v___y_482_);
lean_ctor_set(v___x_484_, 1, v___x_483_);
v___x_485_ = 0;
v___x_486_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_486_, 0, v___x_484_);
lean_ctor_set_uint8(v___x_486_, sizeof(void*)*1, v___x_485_);
v___x_487_ = l_Repr_addAppParen(v___x_486_, v_prec_452_);
return v___x_487_;
}
v___jp_488_:
{
lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_490_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__11));
lean_inc(v___y_489_);
v___x_491_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_491_, 0, v___y_489_);
lean_ctor_set(v___x_491_, 1, v___x_490_);
v___x_492_ = 0;
v___x_493_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set_uint8(v___x_493_, sizeof(void*)*1, v___x_492_);
v___x_494_ = l_Repr_addAppParen(v___x_493_, v_prec_452_);
return v___x_494_;
}
v___jp_495_:
{
lean_object* v___x_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_497_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__13));
lean_inc(v___y_496_);
v___x_498_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_498_, 0, v___y_496_);
lean_ctor_set(v___x_498_, 1, v___x_497_);
v___x_499_ = 0;
v___x_500_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_500_, 0, v___x_498_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*1, v___x_499_);
v___x_501_ = l_Repr_addAppParen(v___x_500_, v_prec_452_);
return v___x_501_;
}
v___jp_502_:
{
lean_object* v___x_504_; lean_object* v___x_505_; uint8_t v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_504_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__15));
lean_inc(v___y_503_);
v___x_505_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_505_, 0, v___y_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
v___x_506_ = 0;
v___x_507_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_507_, 0, v___x_505_);
lean_ctor_set_uint8(v___x_507_, sizeof(void*)*1, v___x_506_);
v___x_508_ = l_Repr_addAppParen(v___x_507_, v_prec_452_);
return v___x_508_;
}
v___jp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__17));
lean_inc(v___y_510_);
v___x_512_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_512_, 0, v___y_510_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = 0;
v___x_514_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1, v___x_513_);
v___x_515_ = l_Repr_addAppParen(v___x_514_, v_prec_452_);
return v___x_515_;
}
v___jp_516_:
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_518_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__19));
lean_inc(v___y_517_);
v___x_519_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_519_, 0, v___y_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = 0;
v___x_521_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_521_, 0, v___x_519_);
lean_ctor_set_uint8(v___x_521_, sizeof(void*)*1, v___x_520_);
v___x_522_ = l_Repr_addAppParen(v___x_521_, v_prec_452_);
return v___x_522_;
}
v___jp_523_:
{
lean_object* v___x_525_; lean_object* v___x_526_; uint8_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_525_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__21));
lean_inc(v___y_524_);
v___x_526_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_526_, 0, v___y_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = 0;
v___x_528_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_528_, 0, v___x_526_);
lean_ctor_set_uint8(v___x_528_, sizeof(void*)*1, v___x_527_);
v___x_529_ = l_Repr_addAppParen(v___x_528_, v_prec_452_);
return v___x_529_;
}
v___jp_530_:
{
lean_object* v___x_532_; lean_object* v___x_533_; uint8_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_532_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__23));
lean_inc(v___y_531_);
v___x_533_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_533_, 0, v___y_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
v___x_534_ = 0;
v___x_535_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_535_, 0, v___x_533_);
lean_ctor_set_uint8(v___x_535_, sizeof(void*)*1, v___x_534_);
v___x_536_ = l_Repr_addAppParen(v___x_535_, v_prec_452_);
return v___x_536_;
}
v___jp_537_:
{
lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_539_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___closed__25));
lean_inc(v___y_538_);
v___x_540_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_540_, 0, v___y_538_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = 0;
v___x_542_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_542_, 0, v___x_540_);
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*1, v___x_541_);
v___x_543_ = l_Repr_addAppParen(v___x_542_, v_prec_452_);
return v___x_543_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr___boxed(lean_object* v_x_596_, lean_object* v_prec_597_){
_start:
{
uint8_t v_x_733__boxed_598_; lean_object* v_res_599_; 
v_x_733__boxed_598_ = lean_unbox(v_x_596_);
v_res_599_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookResultCode_repr(v_x_733__boxed_598_, v_prec_597_);
lean_dec(v_prec_597_);
return v_res_599_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ofNat(lean_object* v_n_602_){
_start:
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(5u);
v___x_604_ = lean_nat_dec_le(v_n_602_, v___x_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(8u);
v___x_606_ = lean_nat_dec_le(v_n_602_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_607_ = lean_unsigned_to_nat(10u);
v___x_608_ = lean_nat_dec_le(v_n_602_, v___x_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = lean_unsigned_to_nat(11u);
v___x_610_ = lean_nat_dec_le(v_n_602_, v___x_609_);
if (v___x_610_ == 0)
{
uint8_t v___x_611_; 
v___x_611_ = 12;
return v___x_611_;
}
else
{
uint8_t v___x_612_; 
v___x_612_ = 11;
return v___x_612_;
}
}
else
{
lean_object* v___x_613_; uint8_t v___x_614_; 
v___x_613_ = lean_unsigned_to_nat(9u);
v___x_614_ = lean_nat_dec_le(v_n_602_, v___x_613_);
if (v___x_614_ == 0)
{
uint8_t v___x_615_; 
v___x_615_ = 10;
return v___x_615_;
}
else
{
uint8_t v___x_616_; 
v___x_616_ = 9;
return v___x_616_;
}
}
}
else
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = lean_unsigned_to_nat(6u);
v___x_618_ = lean_nat_dec_le(v_n_602_, v___x_617_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; uint8_t v___x_620_; 
v___x_619_ = lean_unsigned_to_nat(7u);
v___x_620_ = lean_nat_dec_le(v_n_602_, v___x_619_);
if (v___x_620_ == 0)
{
uint8_t v___x_621_; 
v___x_621_ = 8;
return v___x_621_;
}
else
{
uint8_t v___x_622_; 
v___x_622_ = 7;
return v___x_622_;
}
}
else
{
uint8_t v___x_623_; 
v___x_623_ = 6;
return v___x_623_;
}
}
}
else
{
lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = lean_unsigned_to_nat(2u);
v___x_625_ = lean_nat_dec_le(v_n_602_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(3u);
v___x_627_ = lean_nat_dec_le(v_n_602_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; uint8_t v___x_629_; 
v___x_628_ = lean_unsigned_to_nat(4u);
v___x_629_ = lean_nat_dec_le(v_n_602_, v___x_628_);
if (v___x_629_ == 0)
{
uint8_t v___x_630_; 
v___x_630_ = 5;
return v___x_630_;
}
else
{
uint8_t v___x_631_; 
v___x_631_ = 4;
return v___x_631_;
}
}
else
{
uint8_t v___x_632_; 
v___x_632_ = 3;
return v___x_632_;
}
}
else
{
lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = lean_nat_dec_le(v_n_602_, v___x_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_635_ = lean_unsigned_to_nat(1u);
v___x_636_ = lean_nat_dec_le(v_n_602_, v___x_635_);
if (v___x_636_ == 0)
{
uint8_t v___x_637_; 
v___x_637_ = 2;
return v___x_637_;
}
else
{
uint8_t v___x_638_; 
v___x_638_ = 1;
return v___x_638_;
}
}
else
{
uint8_t v___x_639_; 
v___x_639_ = 0;
return v___x_639_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ofNat___boxed(lean_object* v_n_640_){
_start:
{
uint8_t v_res_641_; lean_object* v_r_642_; 
v_res_641_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ofNat(v_n_640_);
lean_dec(v_n_640_);
v_r_642_ = lean_box(v_res_641_);
return v_r_642_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookResultCode(uint8_t v_x_643_, uint8_t v_y_644_){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_645_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx(v_x_643_);
v___x_646_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_CodebookResultCode_ctorIdx(v_y_644_);
v___x_647_ = lean_nat_dec_eq(v___x_645_, v___x_646_);
lean_dec(v___x_646_);
lean_dec(v___x_645_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookResultCode___boxed(lean_object* v_x_648_, lean_object* v_y_649_){
_start:
{
uint8_t v_x_13__boxed_650_; uint8_t v_y_14__boxed_651_; uint8_t v_res_652_; lean_object* v_r_653_; 
v_x_13__boxed_650_ = lean_unbox(v_x_648_);
v_y_14__boxed_651_ = lean_unbox(v_y_649_);
v_res_652_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookResultCode(v_x_13__boxed_650_, v_y_14__boxed_651_);
v_r_653_ = lean_box(v_res_652_);
return v_r_653_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx(uint8_t v_x_654_){
_start:
{
switch(v_x_654_)
{
case 0:
{
lean_object* v___x_655_; 
v___x_655_ = lean_unsigned_to_nat(0u);
return v___x_655_;
}
case 1:
{
lean_object* v___x_656_; 
v___x_656_ = lean_unsigned_to_nat(1u);
return v___x_656_;
}
case 2:
{
lean_object* v___x_657_; 
v___x_657_ = lean_unsigned_to_nat(2u);
return v___x_657_;
}
case 3:
{
lean_object* v___x_658_; 
v___x_658_ = lean_unsigned_to_nat(3u);
return v___x_658_;
}
case 4:
{
lean_object* v___x_659_; 
v___x_659_ = lean_unsigned_to_nat(4u);
return v___x_659_;
}
default: 
{
lean_object* v___x_660_; 
v___x_660_ = lean_unsigned_to_nat(5u);
return v___x_660_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx___boxed(lean_object* v_x_661_){
_start:
{
uint8_t v_x_boxed_662_; lean_object* v_res_663_; 
v_x_boxed_662_ = lean_unbox(v_x_661_);
v_res_663_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx(v_x_boxed_662_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_toCtorIdx(uint8_t v_x_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx(v_x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_toCtorIdx___boxed(lean_object* v_x_666_){
_start:
{
uint8_t v_x_4__boxed_667_; lean_object* v_res_668_; 
v_x_4__boxed_667_ = lean_unbox(v_x_666_);
v_res_668_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_toCtorIdx(v_x_4__boxed_667_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim___redArg(lean_object* v_k_669_){
_start:
{
lean_inc(v_k_669_);
return v_k_669_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim___redArg___boxed(lean_object* v_k_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim___redArg(v_k_670_);
lean_dec(v_k_670_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim(lean_object* v_motive_672_, lean_object* v_ctorIdx_673_, uint8_t v_t_674_, lean_object* v_h_675_, lean_object* v_k_676_){
_start:
{
lean_inc(v_k_676_);
return v_k_676_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim___boxed(lean_object* v_motive_677_, lean_object* v_ctorIdx_678_, lean_object* v_t_679_, lean_object* v_h_680_, lean_object* v_k_681_){
_start:
{
uint8_t v_t_boxed_682_; lean_object* v_res_683_; 
v_t_boxed_682_ = lean_unbox(v_t_679_);
v_res_683_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorElim(v_motive_677_, v_ctorIdx_678_, v_t_boxed_682_, v_h_680_, v_k_681_);
lean_dec(v_k_681_);
lean_dec(v_ctorIdx_678_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim___redArg(lean_object* v_VMSC_684_){
_start:
{
lean_inc(v_VMSC_684_);
return v_VMSC_684_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim___redArg___boxed(lean_object* v_VMSC_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim___redArg(v_VMSC_685_);
lean_dec(v_VMSC_685_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim(lean_object* v_motive_687_, uint8_t v_t_688_, lean_object* v_h_689_, lean_object* v_VMSC_690_){
_start:
{
lean_inc(v_VMSC_690_);
return v_VMSC_690_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim___boxed(lean_object* v_motive_691_, lean_object* v_t_692_, lean_object* v_h_693_, lean_object* v_VMSC_694_){
_start:
{
uint8_t v_t_boxed_695_; lean_object* v_res_696_; 
v_t_boxed_695_ = lean_unbox(v_t_692_);
v_res_696_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_VMSC_elim(v_motive_691_, v_t_boxed_695_, v_h_693_, v_VMSC_694_);
lean_dec(v_VMSC_694_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim___redArg(lean_object* v_OnePlusTwoR_697_){
_start:
{
lean_inc(v_OnePlusTwoR_697_);
return v_OnePlusTwoR_697_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim___redArg___boxed(lean_object* v_OnePlusTwoR_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim___redArg(v_OnePlusTwoR_698_);
lean_dec(v_OnePlusTwoR_698_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim(lean_object* v_motive_700_, uint8_t v_t_701_, lean_object* v_h_702_, lean_object* v_OnePlusTwoR_703_){
_start:
{
lean_inc(v_OnePlusTwoR_703_);
return v_OnePlusTwoR_703_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim___boxed(lean_object* v_motive_704_, lean_object* v_t_705_, lean_object* v_h_706_, lean_object* v_OnePlusTwoR_707_){
_start:
{
uint8_t v_t_boxed_708_; lean_object* v_res_709_; 
v_t_boxed_708_ = lean_unbox(v_t_705_);
v_res_709_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_OnePlusTwoR_elim(v_motive_704_, v_t_boxed_708_, v_h_706_, v_OnePlusTwoR_707_);
lean_dec(v_OnePlusTwoR_707_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim___redArg(lean_object* v_SReciprocity_710_){
_start:
{
lean_inc(v_SReciprocity_710_);
return v_SReciprocity_710_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim___redArg___boxed(lean_object* v_SReciprocity_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim___redArg(v_SReciprocity_711_);
lean_dec(v_SReciprocity_711_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim(lean_object* v_motive_713_, uint8_t v_t_714_, lean_object* v_h_715_, lean_object* v_SReciprocity_716_){
_start:
{
lean_inc(v_SReciprocity_716_);
return v_SReciprocity_716_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim___boxed(lean_object* v_motive_717_, lean_object* v_t_718_, lean_object* v_h_719_, lean_object* v_SReciprocity_720_){
_start:
{
uint8_t v_t_boxed_721_; lean_object* v_res_722_; 
v_t_boxed_721_ = lean_unbox(v_t_718_);
v_res_722_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_SReciprocity_elim(v_motive_717_, v_t_boxed_721_, v_h_719_, v_SReciprocity_720_);
lean_dec(v_SReciprocity_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim___redArg(lean_object* v_AtomicPhysicsIsomorphism_723_){
_start:
{
lean_inc(v_AtomicPhysicsIsomorphism_723_);
return v_AtomicPhysicsIsomorphism_723_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim___redArg___boxed(lean_object* v_AtomicPhysicsIsomorphism_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim___redArg(v_AtomicPhysicsIsomorphism_724_);
lean_dec(v_AtomicPhysicsIsomorphism_724_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim(lean_object* v_motive_726_, uint8_t v_t_727_, lean_object* v_h_728_, lean_object* v_AtomicPhysicsIsomorphism_729_){
_start:
{
lean_inc(v_AtomicPhysicsIsomorphism_729_);
return v_AtomicPhysicsIsomorphism_729_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim___boxed(lean_object* v_motive_730_, lean_object* v_t_731_, lean_object* v_h_732_, lean_object* v_AtomicPhysicsIsomorphism_733_){
_start:
{
uint8_t v_t_boxed_734_; lean_object* v_res_735_; 
v_t_boxed_734_ = lean_unbox(v_t_731_);
v_res_735_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_AtomicPhysicsIsomorphism_elim(v_motive_730_, v_t_boxed_734_, v_h_732_, v_AtomicPhysicsIsomorphism_733_);
lean_dec(v_AtomicPhysicsIsomorphism_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim___redArg(lean_object* v_GroundStateFullShell_736_){
_start:
{
lean_inc(v_GroundStateFullShell_736_);
return v_GroundStateFullShell_736_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim___redArg___boxed(lean_object* v_GroundStateFullShell_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim___redArg(v_GroundStateFullShell_737_);
lean_dec(v_GroundStateFullShell_737_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim(lean_object* v_motive_739_, uint8_t v_t_740_, lean_object* v_h_741_, lean_object* v_GroundStateFullShell_742_){
_start:
{
lean_inc(v_GroundStateFullShell_742_);
return v_GroundStateFullShell_742_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim___boxed(lean_object* v_motive_743_, lean_object* v_t_744_, lean_object* v_h_745_, lean_object* v_GroundStateFullShell_746_){
_start:
{
uint8_t v_t_boxed_747_; lean_object* v_res_748_; 
v_t_boxed_747_ = lean_unbox(v_t_744_);
v_res_748_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateFullShell_elim(v_motive_743_, v_t_boxed_747_, v_h_745_, v_GroundStateFullShell_746_);
lean_dec(v_GroundStateFullShell_746_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim___redArg(lean_object* v_GroundStateMaxM_749_){
_start:
{
lean_inc(v_GroundStateMaxM_749_);
return v_GroundStateMaxM_749_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim___redArg___boxed(lean_object* v_GroundStateMaxM_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim___redArg(v_GroundStateMaxM_750_);
lean_dec(v_GroundStateMaxM_750_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim(lean_object* v_motive_752_, uint8_t v_t_753_, lean_object* v_h_754_, lean_object* v_GroundStateMaxM_755_){
_start:
{
lean_inc(v_GroundStateMaxM_755_);
return v_GroundStateMaxM_755_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim___boxed(lean_object* v_motive_756_, lean_object* v_t_757_, lean_object* v_h_758_, lean_object* v_GroundStateMaxM_759_){
_start:
{
uint8_t v_t_boxed_760_; lean_object* v_res_761_; 
v_t_boxed_760_ = lean_unbox(v_t_757_);
v_res_761_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_GroundStateMaxM_elim(v_motive_756_, v_t_boxed_760_, v_h_758_, v_GroundStateMaxM_759_);
lean_dec(v_GroundStateMaxM_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr(uint8_t v_x_780_, lean_object* v_prec_781_){
_start:
{
lean_object* v___y_783_; lean_object* v___y_790_; lean_object* v___y_797_; lean_object* v___y_804_; lean_object* v___y_811_; lean_object* v___y_818_; 
switch(v_x_780_)
{
case 0:
{
lean_object* v___x_824_; uint8_t v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(1024u);
v___x_825_ = lean_nat_dec_le(v___x_824_, v_prec_781_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
v___x_826_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_783_ = v___x_826_;
goto v___jp_782_;
}
else
{
lean_object* v___x_827_; 
v___x_827_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_783_ = v___x_827_;
goto v___jp_782_;
}
}
case 1:
{
lean_object* v___x_828_; uint8_t v___x_829_; 
v___x_828_ = lean_unsigned_to_nat(1024u);
v___x_829_ = lean_nat_dec_le(v___x_828_, v_prec_781_);
if (v___x_829_ == 0)
{
lean_object* v___x_830_; 
v___x_830_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_790_ = v___x_830_;
goto v___jp_789_;
}
else
{
lean_object* v___x_831_; 
v___x_831_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_790_ = v___x_831_;
goto v___jp_789_;
}
}
case 2:
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = lean_unsigned_to_nat(1024u);
v___x_833_ = lean_nat_dec_le(v___x_832_, v_prec_781_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; 
v___x_834_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_797_ = v___x_834_;
goto v___jp_796_;
}
else
{
lean_object* v___x_835_; 
v___x_835_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_797_ = v___x_835_;
goto v___jp_796_;
}
}
case 3:
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = lean_unsigned_to_nat(1024u);
v___x_837_ = lean_nat_dec_le(v___x_836_, v_prec_781_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
v___x_838_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_804_ = v___x_838_;
goto v___jp_803_;
}
else
{
lean_object* v___x_839_; 
v___x_839_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_804_ = v___x_839_;
goto v___jp_803_;
}
}
case 4:
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = lean_unsigned_to_nat(1024u);
v___x_841_ = lean_nat_dec_le(v___x_840_, v_prec_781_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
v___x_842_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_811_ = v___x_842_;
goto v___jp_810_;
}
else
{
lean_object* v___x_843_; 
v___x_843_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_811_ = v___x_843_;
goto v___jp_810_;
}
}
default: 
{
lean_object* v___x_844_; uint8_t v___x_845_; 
v___x_844_ = lean_unsigned_to_nat(1024u);
v___x_845_ = lean_nat_dec_le(v___x_844_, v_prec_781_);
if (v___x_845_ == 0)
{
lean_object* v___x_846_; 
v___x_846_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_818_ = v___x_846_;
goto v___jp_817_;
}
else
{
lean_object* v___x_847_; 
v___x_847_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_818_ = v___x_847_;
goto v___jp_817_;
}
}
}
v___jp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; uint8_t v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_784_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__1));
lean_inc(v___y_783_);
v___x_785_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_785_, 0, v___y_783_);
lean_ctor_set(v___x_785_, 1, v___x_784_);
v___x_786_ = 0;
v___x_787_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_787_, 0, v___x_785_);
lean_ctor_set_uint8(v___x_787_, sizeof(void*)*1, v___x_786_);
v___x_788_ = l_Repr_addAppParen(v___x_787_, v_prec_781_);
return v___x_788_;
}
v___jp_789_:
{
lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v___x_791_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__3));
lean_inc(v___y_790_);
v___x_792_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_792_, 0, v___y_790_);
lean_ctor_set(v___x_792_, 1, v___x_791_);
v___x_793_ = 0;
v___x_794_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_794_, 0, v___x_792_);
lean_ctor_set_uint8(v___x_794_, sizeof(void*)*1, v___x_793_);
v___x_795_ = l_Repr_addAppParen(v___x_794_, v_prec_781_);
return v___x_795_;
}
v___jp_796_:
{
lean_object* v___x_798_; lean_object* v___x_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_798_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__5));
lean_inc(v___y_797_);
v___x_799_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_799_, 0, v___y_797_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v___x_800_ = 0;
v___x_801_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_801_, 0, v___x_799_);
lean_ctor_set_uint8(v___x_801_, sizeof(void*)*1, v___x_800_);
v___x_802_ = l_Repr_addAppParen(v___x_801_, v_prec_781_);
return v___x_802_;
}
v___jp_803_:
{
lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_805_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__7));
lean_inc(v___y_804_);
v___x_806_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_806_, 0, v___y_804_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
v___x_807_ = 0;
v___x_808_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_808_, 0, v___x_806_);
lean_ctor_set_uint8(v___x_808_, sizeof(void*)*1, v___x_807_);
v___x_809_ = l_Repr_addAppParen(v___x_808_, v_prec_781_);
return v___x_809_;
}
v___jp_810_:
{
lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_812_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__9));
lean_inc(v___y_811_);
v___x_813_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_813_, 0, v___y_811_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = 0;
v___x_815_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_815_, 0, v___x_813_);
lean_ctor_set_uint8(v___x_815_, sizeof(void*)*1, v___x_814_);
v___x_816_ = l_Repr_addAppParen(v___x_815_, v_prec_781_);
return v___x_816_;
}
v___jp_817_:
{
lean_object* v___x_819_; lean_object* v___x_820_; uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_819_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___closed__11));
lean_inc(v___y_818_);
v___x_820_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_820_, 0, v___y_818_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = 0;
v___x_822_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_822_, 0, v___x_820_);
lean_ctor_set_uint8(v___x_822_, sizeof(void*)*1, v___x_821_);
v___x_823_ = l_Repr_addAppParen(v___x_822_, v_prec_781_);
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr___boxed(lean_object* v_x_848_, lean_object* v_prec_849_){
_start:
{
uint8_t v_x_341__boxed_850_; lean_object* v_res_851_; 
v_x_341__boxed_850_ = lean_unbox(v_x_848_);
v_res_851_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprDeprecatedTerm_repr(v_x_341__boxed_850_, v_prec_849_);
lean_dec(v_prec_849_);
return v_res_851_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ofNat(lean_object* v_n_854_){
_start:
{
lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_855_ = lean_unsigned_to_nat(2u);
v___x_856_ = lean_nat_dec_le(v_n_854_, v___x_855_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; uint8_t v___x_858_; 
v___x_857_ = lean_unsigned_to_nat(3u);
v___x_858_ = lean_nat_dec_le(v_n_854_, v___x_857_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_859_ = lean_unsigned_to_nat(4u);
v___x_860_ = lean_nat_dec_le(v_n_854_, v___x_859_);
if (v___x_860_ == 0)
{
uint8_t v___x_861_; 
v___x_861_ = 5;
return v___x_861_;
}
else
{
uint8_t v___x_862_; 
v___x_862_ = 4;
return v___x_862_;
}
}
else
{
uint8_t v___x_863_; 
v___x_863_ = 3;
return v___x_863_;
}
}
else
{
lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_864_ = lean_unsigned_to_nat(0u);
v___x_865_ = lean_nat_dec_le(v_n_854_, v___x_864_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_866_ = lean_unsigned_to_nat(1u);
v___x_867_ = lean_nat_dec_le(v_n_854_, v___x_866_);
if (v___x_867_ == 0)
{
uint8_t v___x_868_; 
v___x_868_ = 2;
return v___x_868_;
}
else
{
uint8_t v___x_869_; 
v___x_869_ = 1;
return v___x_869_;
}
}
else
{
uint8_t v___x_870_; 
v___x_870_ = 0;
return v___x_870_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ofNat___boxed(lean_object* v_n_871_){
_start:
{
uint8_t v_res_872_; lean_object* v_r_873_; 
v_res_872_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ofNat(v_n_871_);
lean_dec(v_n_871_);
v_r_873_ = lean_box(v_res_872_);
return v_r_873_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqDeprecatedTerm(uint8_t v_x_874_, uint8_t v_y_875_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_876_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx(v_x_874_);
v___x_877_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_DeprecatedTerm_ctorIdx(v_y_875_);
v___x_878_ = lean_nat_dec_eq(v___x_876_, v___x_877_);
lean_dec(v___x_877_);
lean_dec(v___x_876_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqDeprecatedTerm___boxed(lean_object* v_x_879_, lean_object* v_y_880_){
_start:
{
uint8_t v_x_13__boxed_881_; uint8_t v_y_14__boxed_882_; uint8_t v_res_883_; lean_object* v_r_884_; 
v_x_13__boxed_881_ = lean_unbox(v_x_879_);
v_y_14__boxed_882_ = lean_unbox(v_y_880_);
v_res_883_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqDeprecatedTerm(v_x_13__boxed_881_, v_y_14__boxed_882_);
v_r_884_ = lean_box(v_res_883_);
return v_r_884_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx(uint8_t v_x_885_){
_start:
{
if (v_x_885_ == 0)
{
lean_object* v___x_886_; 
v___x_886_ = lean_unsigned_to_nat(0u);
return v___x_886_;
}
else
{
lean_object* v___x_887_; 
v___x_887_ = lean_unsigned_to_nat(1u);
return v___x_887_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx___boxed(lean_object* v_x_888_){
_start:
{
uint8_t v_x_boxed_889_; lean_object* v_res_890_; 
v_x_boxed_889_ = lean_unbox(v_x_888_);
v_res_890_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx(v_x_boxed_889_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_toCtorIdx(uint8_t v_x_891_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx(v_x_891_);
return v___x_892_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_toCtorIdx___boxed(lean_object* v_x_893_){
_start:
{
uint8_t v_x_4__boxed_894_; lean_object* v_res_895_; 
v_x_4__boxed_894_ = lean_unbox(v_x_893_);
v_res_895_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_toCtorIdx(v_x_4__boxed_894_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim___redArg(lean_object* v_k_896_){
_start:
{
lean_inc(v_k_896_);
return v_k_896_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim___redArg___boxed(lean_object* v_k_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim___redArg(v_k_897_);
lean_dec(v_k_897_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim(lean_object* v_motive_899_, lean_object* v_ctorIdx_900_, uint8_t v_t_901_, lean_object* v_h_902_, lean_object* v_k_903_){
_start:
{
lean_inc(v_k_903_);
return v_k_903_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim___boxed(lean_object* v_motive_904_, lean_object* v_ctorIdx_905_, lean_object* v_t_906_, lean_object* v_h_907_, lean_object* v_k_908_){
_start:
{
uint8_t v_t_boxed_909_; lean_object* v_res_910_; 
v_t_boxed_909_ = lean_unbox(v_t_906_);
v_res_910_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorElim(v_motive_904_, v_ctorIdx_905_, v_t_boxed_909_, v_h_907_, v_k_908_);
lean_dec(v_k_908_);
lean_dec(v_ctorIdx_905_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim___redArg(lean_object* v_Alpha_911_){
_start:
{
lean_inc(v_Alpha_911_);
return v_Alpha_911_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim___redArg___boxed(lean_object* v_Alpha_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim___redArg(v_Alpha_912_);
lean_dec(v_Alpha_912_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim(lean_object* v_motive_914_, uint8_t v_t_915_, lean_object* v_h_916_, lean_object* v_Alpha_917_){
_start:
{
lean_inc(v_Alpha_917_);
return v_Alpha_917_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim___boxed(lean_object* v_motive_918_, lean_object* v_t_919_, lean_object* v_h_920_, lean_object* v_Alpha_921_){
_start:
{
uint8_t v_t_boxed_922_; lean_object* v_res_923_; 
v_t_boxed_922_ = lean_unbox(v_t_919_);
v_res_923_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Alpha_elim(v_motive_918_, v_t_boxed_922_, v_h_920_, v_Alpha_921_);
lean_dec(v_Alpha_921_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim___redArg(lean_object* v_Beta_924_){
_start:
{
lean_inc(v_Beta_924_);
return v_Beta_924_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim___redArg___boxed(lean_object* v_Beta_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim___redArg(v_Beta_925_);
lean_dec(v_Beta_925_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim(lean_object* v_motive_927_, uint8_t v_t_928_, lean_object* v_h_929_, lean_object* v_Beta_930_){
_start:
{
lean_inc(v_Beta_930_);
return v_Beta_930_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim___boxed(lean_object* v_motive_931_, lean_object* v_t_932_, lean_object* v_h_933_, lean_object* v_Beta_934_){
_start:
{
uint8_t v_t_boxed_935_; lean_object* v_res_936_; 
v_t_boxed_935_ = lean_unbox(v_t_932_);
v_res_936_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_Beta_elim(v_motive_931_, v_t_boxed_935_, v_h_933_, v_Beta_934_);
lean_dec(v_Beta_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr(uint8_t v_x_943_, lean_object* v_prec_944_){
_start:
{
lean_object* v___y_946_; lean_object* v___y_953_; 
if (v_x_943_ == 0)
{
lean_object* v___x_959_; uint8_t v___x_960_; 
v___x_959_ = lean_unsigned_to_nat(1024u);
v___x_960_ = lean_nat_dec_le(v___x_959_, v_prec_944_);
if (v___x_960_ == 0)
{
lean_object* v___x_961_; 
v___x_961_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_946_ = v___x_961_;
goto v___jp_945_;
}
else
{
lean_object* v___x_962_; 
v___x_962_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_946_ = v___x_962_;
goto v___jp_945_;
}
}
else
{
lean_object* v___x_963_; uint8_t v___x_964_; 
v___x_963_ = lean_unsigned_to_nat(1024u);
v___x_964_ = lean_nat_dec_le(v___x_963_, v_prec_944_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; 
v___x_965_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__6);
v___y_953_ = v___x_965_;
goto v___jp_952_;
}
else
{
lean_object* v___x_966_; 
v___x_966_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprPeriodLifecycleStatus_repr___closed__7);
v___y_953_ = v___x_966_;
goto v___jp_952_;
}
}
v___jp_945_:
{
lean_object* v___x_947_; lean_object* v___x_948_; uint8_t v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_947_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__1));
lean_inc(v___y_946_);
v___x_948_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_948_, 0, v___y_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = 0;
v___x_950_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set_uint8(v___x_950_, sizeof(void*)*1, v___x_949_);
v___x_951_ = l_Repr_addAppParen(v___x_950_, v_prec_944_);
return v___x_951_;
}
v___jp_952_:
{
lean_object* v___x_954_; lean_object* v___x_955_; uint8_t v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_954_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___closed__3));
lean_inc(v___y_953_);
v___x_955_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_955_, 0, v___y_953_);
lean_ctor_set(v___x_955_, 1, v___x_954_);
v___x_956_ = 0;
v___x_957_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_957_, 0, v___x_955_);
lean_ctor_set_uint8(v___x_957_, sizeof(void*)*1, v___x_956_);
v___x_958_ = l_Repr_addAppParen(v___x_957_, v_prec_944_);
return v___x_958_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr___boxed(lean_object* v_x_967_, lean_object* v_prec_968_){
_start:
{
uint8_t v_x_117__boxed_969_; lean_object* v_res_970_; 
v_x_117__boxed_969_ = lean_unbox(v_x_967_);
v_res_970_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprSpinTag_repr(v_x_117__boxed_969_, v_prec_968_);
lean_dec(v_prec_968_);
return v_res_970_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ofNat(lean_object* v_n_973_){
_start:
{
lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_974_ = lean_unsigned_to_nat(0u);
v___x_975_ = lean_nat_dec_le(v_n_973_, v___x_974_);
if (v___x_975_ == 0)
{
uint8_t v___x_976_; 
v___x_976_ = 1;
return v___x_976_;
}
else
{
uint8_t v___x_977_; 
v___x_977_ = 0;
return v___x_977_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ofNat___boxed(lean_object* v_n_978_){
_start:
{
uint8_t v_res_979_; lean_object* v_r_980_; 
v_res_979_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ofNat(v_n_978_);
lean_dec(v_n_978_);
v_r_980_ = lean_box(v_res_979_);
return v_r_980_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqSpinTag(uint8_t v_x_981_, uint8_t v_y_982_){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; uint8_t v___x_985_; 
v___x_983_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx(v_x_981_);
v___x_984_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_SpinTag_ctorIdx(v_y_982_);
v___x_985_ = lean_nat_dec_eq(v___x_983_, v___x_984_);
lean_dec(v___x_984_);
lean_dec(v___x_983_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqSpinTag___boxed(lean_object* v_x_986_, lean_object* v_y_987_){
_start:
{
uint8_t v_x_13__boxed_988_; uint8_t v_y_14__boxed_989_; uint8_t v_res_990_; lean_object* v_r_991_; 
v_x_13__boxed_988_ = lean_unbox(v_x_986_);
v_y_14__boxed_989_ = lean_unbox(v_y_987_);
v_res_990_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqSpinTag(v_x_13__boxed_988_, v_y_14__boxed_989_);
v_r_991_ = lean_box(v_res_990_);
return v_r_991_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1005_ = lean_unsigned_to_nat(17u);
v___x_1006_ = lean_nat_to_int(v___x_1005_);
return v___x_1006_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_unsigned_to_nat(21u);
v___x_1014_ = lean_nat_to_int(v___x_1013_);
return v___x_1014_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__0));
v___x_1017_ = lean_string_length(v___x_1016_);
return v___x_1017_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__14);
v___x_1019_ = lean_nat_to_int(v___x_1018_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg(lean_object* v_x_1024_){
_start:
{
lean_object* v_unpairedCount_1025_; lean_object* v_degenerateSetSize_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1061_; 
v_unpairedCount_1025_ = lean_ctor_get(v_x_1024_, 0);
v_degenerateSetSize_1026_ = lean_ctor_get(v_x_1024_, 1);
v_isSharedCheck_1061_ = !lean_is_exclusive(v_x_1024_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1028_ = v_x_1024_;
v_isShared_1029_ = v_isSharedCheck_1061_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_degenerateSetSize_1026_);
lean_inc(v_unpairedCount_1025_);
lean_dec(v_x_1024_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1061_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
v___x_1030_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__5));
v___x_1031_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__6));
v___x_1032_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__7);
v___x_1033_ = l_Nat_reprFast(v_unpairedCount_1025_);
v___x_1034_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set_tag(v___x_1028_, 4);
lean_ctor_set(v___x_1028_, 1, v___x_1034_);
lean_ctor_set(v___x_1028_, 0, v___x_1032_);
v___x_1036_ = v___x_1028_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
uint8_t v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1037_ = 0;
v___x_1038_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1038_, 0, v___x_1036_);
lean_ctor_set_uint8(v___x_1038_, sizeof(void*)*1, v___x_1037_);
v___x_1039_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1031_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__9));
v___x_1041_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
v___x_1042_ = lean_box(1);
v___x_1043_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1041_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___x_1044_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__11));
v___x_1045_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1043_);
lean_ctor_set(v___x_1045_, 1, v___x_1044_);
v___x_1046_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
lean_ctor_set(v___x_1046_, 1, v___x_1030_);
v___x_1047_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__12);
v___x_1048_ = l_Nat_reprFast(v_degenerateSetSize_1026_);
v___x_1049_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
v___x_1050_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1047_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set_uint8(v___x_1051_, sizeof(void*)*1, v___x_1037_);
v___x_1052_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1046_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
v___x_1053_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15, &lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__15);
v___x_1054_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__16));
v___x_1055_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
lean_ctor_set(v___x_1055_, 1, v___x_1052_);
v___x_1056_ = ((lean_object*)(lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg___closed__17));
v___x_1057_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1053_);
lean_ctor_set(v___x_1058_, 1, v___x_1057_);
v___x_1059_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set_uint8(v___x_1059_, sizeof(void*)*1, v___x_1037_);
return v___x_1059_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr(lean_object* v_x_1062_, lean_object* v_prec_1063_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___redArg(v_x_1062_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr___boxed(lean_object* v_x_1065_, lean_object* v_prec_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instReprCodebookState_repr(v_x_1065_, v_prec_1066_);
lean_dec(v_prec_1066_);
return v_res_1067_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq(lean_object* v_x_1070_, lean_object* v_x_1071_){
_start:
{
lean_object* v_unpairedCount_1072_; lean_object* v_degenerateSetSize_1073_; lean_object* v_unpairedCount_1074_; lean_object* v_degenerateSetSize_1075_; uint8_t v___x_1076_; 
v_unpairedCount_1072_ = lean_ctor_get(v_x_1070_, 0);
v_degenerateSetSize_1073_ = lean_ctor_get(v_x_1070_, 1);
v_unpairedCount_1074_ = lean_ctor_get(v_x_1071_, 0);
v_degenerateSetSize_1075_ = lean_ctor_get(v_x_1071_, 1);
v___x_1076_ = lean_nat_dec_eq(v_unpairedCount_1072_, v_unpairedCount_1074_);
if (v___x_1076_ == 0)
{
return v___x_1076_;
}
else
{
uint8_t v___x_1077_; 
v___x_1077_ = lean_nat_dec_eq(v_degenerateSetSize_1073_, v_degenerateSetSize_1075_);
return v___x_1077_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq___boxed(lean_object* v_x_1078_, lean_object* v_x_1079_){
_start:
{
uint8_t v_res_1080_; lean_object* v_r_1081_; 
v_res_1080_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq(v_x_1078_, v_x_1079_);
lean_dec_ref(v_x_1079_);
lean_dec_ref(v_x_1078_);
v_r_1081_ = lean_box(v_res_1080_);
return v_r_1081_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState(lean_object* v_x_1082_, lean_object* v_x_1083_){
_start:
{
uint8_t v___x_1084_; 
v___x_1084_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState_decEq(v_x_1082_, v_x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState___boxed(lean_object* v_x_1085_, lean_object* v_x_1086_){
_start:
{
uint8_t v_res_1087_; lean_object* v_r_1088_; 
v_res_1087_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_instDecidableEqCodebookState(v_x_1085_, v_x_1086_);
lean_dec_ref(v_x_1086_);
lean_dec_ref(v_x_1085_);
v_r_1088_ = lean_box(v_res_1087_);
return v_r_1088_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_unsigned_to_nat(2u);
v___x_1090_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin(lean_object* v_st_1091_){
_start:
{
lean_object* v_unpairedCount_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_unpairedCount_1092_ = lean_ctor_get(v_st_1091_, 0);
lean_inc(v_unpairedCount_1092_);
lean_dec_ref(v_st_1091_);
v___x_1093_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v_unpairedCount_1092_);
v___x_1094_ = lean_obj_once(&lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0, &lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0_once, _init_lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSpin___closed__0);
v___x_1095_ = l_Rat_div(v___x_1093_, v___x_1094_);
lean_dec_ref(v___x_1093_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(lean_object* v_st_1096_){
_start:
{
lean_object* v_unpairedCount_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_unpairedCount_1097_ = lean_ctor_get(v_st_1096_, 0);
v___x_1098_ = lean_unsigned_to_nat(1u);
v___x_1099_ = lean_nat_add(v_unpairedCount_1097_, v___x_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity___boxed(lean_object* v_st_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(v_st_1100_);
lean_dec_ref(v_st_1100_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSystemEnergy(lean_object* v_vPair_1102_, lean_object* v_vNuc_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = lean_int_sub(v_vPair_1102_, v_vNuc_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSystemEnergy___boxed(lean_object* v_vPair_1105_, lean_object* v_vNuc_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateSystemEnergy(v_vPair_1105_, v_vNuc_1106_);
lean_dec(v_vNuc_1106_);
lean_dec(v_vPair_1105_);
return v_res_1107_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_isForbiddenClaim(uint8_t v_t_1108_){
_start:
{
uint8_t v___x_1109_; 
v___x_1109_ = 1;
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_isForbiddenClaim___boxed(lean_object* v_t_1110_){
_start:
{
uint8_t v_t_boxed_1111_; uint8_t v_res_1112_; lean_object* v_r_1113_; 
v_t_boxed_1111_ = lean_unbox(v_t_1110_);
v_res_1112_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_isForbiddenClaim(v_t_boxed_1111_);
v_r_1113_ = lean_box(v_res_1112_);
return v_r_1113_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateFillGate(uint8_t v_isOpen_1114_, uint8_t v_isRegistered_1115_, uint8_t v_isKnownPerson_1116_, uint8_t v_personHoldsOtherK_1117_, uint8_t v_hasWaiver_1118_, lean_object* v_occupantsCount_1119_, uint8_t v_isDegenerate_1120_, lean_object* v_emptyInD_1121_){
_start:
{
if (v_isOpen_1114_ == 0)
{
uint8_t v___x_1139_; 
v___x_1139_ = 6;
return v___x_1139_;
}
else
{
if (v_isKnownPerson_1116_ == 0)
{
uint8_t v___x_1140_; 
v___x_1140_ = 7;
return v___x_1140_;
}
else
{
if (v_isRegistered_1115_ == 0)
{
uint8_t v___x_1141_; 
v___x_1141_ = 8;
return v___x_1141_;
}
else
{
if (v_personHoldsOtherK_1117_ == 0)
{
goto v___jp_1130_;
}
else
{
if (v_hasWaiver_1118_ == 0)
{
uint8_t v___x_1142_; 
v___x_1142_ = 11;
return v___x_1142_;
}
else
{
goto v___jp_1130_;
}
}
}
}
}
v___jp_1122_:
{
if (v_isDegenerate_1120_ == 0)
{
uint8_t v___x_1123_; 
v___x_1123_ = 2;
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
v___x_1124_ = lean_unsigned_to_nat(0u);
v___x_1125_ = lean_nat_dec_eq(v_occupantsCount_1119_, v___x_1124_);
if (v___x_1125_ == 0)
{
uint8_t v___x_1126_; 
v___x_1126_ = 1;
return v___x_1126_;
}
else
{
uint8_t v___x_1127_; 
v___x_1127_ = 0;
return v___x_1127_;
}
}
}
v___jp_1128_:
{
if (v_personHoldsOtherK_1117_ == 0)
{
goto v___jp_1122_;
}
else
{
if (v_hasWaiver_1118_ == 0)
{
goto v___jp_1122_;
}
else
{
uint8_t v___x_1129_; 
v___x_1129_ = 3;
return v___x_1129_;
}
}
}
v___jp_1130_:
{
lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1131_ = lean_unsigned_to_nat(2u);
v___x_1132_ = lean_nat_dec_le(v___x_1131_, v_occupantsCount_1119_);
if (v___x_1132_ == 0)
{
if (v_isDegenerate_1120_ == 0)
{
goto v___jp_1128_;
}
else
{
lean_object* v___x_1133_; uint8_t v___x_1134_; 
v___x_1133_ = lean_unsigned_to_nat(1u);
v___x_1134_ = lean_nat_dec_eq(v_occupantsCount_1119_, v___x_1133_);
if (v___x_1134_ == 0)
{
goto v___jp_1128_;
}
else
{
lean_object* v___x_1135_; uint8_t v___x_1136_; 
v___x_1135_ = lean_unsigned_to_nat(0u);
v___x_1136_ = lean_nat_dec_lt(v___x_1135_, v_emptyInD_1121_);
if (v___x_1136_ == 0)
{
goto v___jp_1128_;
}
else
{
uint8_t v___x_1137_; 
v___x_1137_ = 10;
return v___x_1137_;
}
}
}
}
else
{
uint8_t v___x_1138_; 
v___x_1138_ = 9;
return v___x_1138_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateFillGate___boxed(lean_object* v_isOpen_1143_, lean_object* v_isRegistered_1144_, lean_object* v_isKnownPerson_1145_, lean_object* v_personHoldsOtherK_1146_, lean_object* v_hasWaiver_1147_, lean_object* v_occupantsCount_1148_, lean_object* v_isDegenerate_1149_, lean_object* v_emptyInD_1150_){
_start:
{
uint8_t v_isOpen_boxed_1151_; uint8_t v_isRegistered_boxed_1152_; uint8_t v_isKnownPerson_boxed_1153_; uint8_t v_personHoldsOtherK_boxed_1154_; uint8_t v_hasWaiver_boxed_1155_; uint8_t v_isDegenerate_boxed_1156_; uint8_t v_res_1157_; lean_object* v_r_1158_; 
v_isOpen_boxed_1151_ = lean_unbox(v_isOpen_1143_);
v_isRegistered_boxed_1152_ = lean_unbox(v_isRegistered_1144_);
v_isKnownPerson_boxed_1153_ = lean_unbox(v_isKnownPerson_1145_);
v_personHoldsOtherK_boxed_1154_ = lean_unbox(v_personHoldsOtherK_1146_);
v_hasWaiver_boxed_1155_ = lean_unbox(v_hasWaiver_1147_);
v_isDegenerate_boxed_1156_ = lean_unbox(v_isDegenerate_1149_);
v_res_1157_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateFillGate(v_isOpen_boxed_1151_, v_isRegistered_boxed_1152_, v_isKnownPerson_boxed_1153_, v_personHoldsOtherK_boxed_1154_, v_hasWaiver_boxed_1155_, v_occupantsCount_1148_, v_isDegenerate_boxed_1156_, v_emptyInD_1150_);
lean_dec(v_emptyInD_1150_);
lean_dec(v_occupantsCount_1148_);
v_r_1158_ = lean_box(v_res_1157_);
return v_r_1158_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateVacateGate(uint8_t v_isOpen_1159_, uint8_t v_isRegistered_1160_, uint8_t v_isOccupant_1161_){
_start:
{
if (v_isOpen_1159_ == 0)
{
uint8_t v___x_1162_; 
v___x_1162_ = 6;
return v___x_1162_;
}
else
{
if (v_isRegistered_1160_ == 0)
{
uint8_t v___x_1163_; 
v___x_1163_ = 8;
return v___x_1163_;
}
else
{
if (v_isOccupant_1161_ == 0)
{
uint8_t v___x_1164_; 
v___x_1164_ = 12;
return v___x_1164_;
}
else
{
uint8_t v___x_1165_; 
v___x_1165_ = 4;
return v___x_1165_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateVacateGate___boxed(lean_object* v_isOpen_1166_, lean_object* v_isRegistered_1167_, lean_object* v_isOccupant_1168_){
_start:
{
uint8_t v_isOpen_boxed_1169_; uint8_t v_isRegistered_boxed_1170_; uint8_t v_isOccupant_boxed_1171_; uint8_t v_res_1172_; lean_object* v_r_1173_; 
v_isOpen_boxed_1169_ = lean_unbox(v_isOpen_1166_);
v_isRegistered_boxed_1170_ = lean_unbox(v_isRegistered_1167_);
v_isOccupant_boxed_1171_ = lean_unbox(v_isOccupant_1168_);
v_res_1172_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_evaluateVacateGate(v_isOpen_boxed_1169_, v_isRegistered_boxed_1170_, v_isOccupant_boxed_1171_);
v_r_1173_ = lean_box(v_res_1172_);
return v_r_1173_;
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
