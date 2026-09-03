// Lean compiler output
// Module: Echonomics.LambdaProof
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
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Integration of Lambda-Proof Smart Contracts and ZK Circuits"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "Echonomics requires local integration of EVM smart contracts and Circom ZK proof circuits."};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 120, .m_capacity = 120, .m_length = 119, .m_data = "Locally host contracts and circuits under Echonomics while binding identity and proof predicates in Lean and Rust/Kani."};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Machine-checked ZK receipt verification"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "EVM anchoring for seating logs"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Fail-closed identity and drift predicates"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__8_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__9_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "identityId"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__6_value;
static lean_once_cell_t lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "primeSalt"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__11_value;
static lean_once_cell_t lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "isVerified"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__13_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__13_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__14 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__14_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__15 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__15_value;
static lean_once_cell_t lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16;
static lean_once_cell_t lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__18 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__18_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__15_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__19 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isOdd(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isOdd___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_primeCandidate(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_primeCandidate___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_driftBoundOk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_driftBoundOk___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful___boxed(lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "identity"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__3_value;
static lean_once_cell_t lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__4;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "driftDelta"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__6_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "driftXi"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__7_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__7_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__8_value;
static lean_once_cell_t lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__9;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "seatLogHash"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__11_value;
static lean_once_cell_t lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__12;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "zkAttested"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__13_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__13_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__14 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__14_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isLambdaProofVerified(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isLambdaProofVerified___boxed(lean_object*);
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(14u);
v___x_40_ = lean_nat_to_int(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_unsigned_to_nat(13u);
v___x_48_ = lean_nat_to_int(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__0));
v___x_54_ = lean_string_length(v___x_53_);
return v___x_54_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16);
v___x_56_ = lean_nat_to_int(v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg(lean_object* v_x_61_){
_start:
{
lean_object* v_identityId_62_; lean_object* v_primeSalt_63_; uint8_t v_isVerified_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v_identityId_62_ = lean_ctor_get(v_x_61_, 0);
lean_inc(v_identityId_62_);
v_primeSalt_63_ = lean_ctor_get(v_x_61_, 1);
lean_inc(v_primeSalt_63_);
v_isVerified_64_ = lean_ctor_get_uint8(v_x_61_, sizeof(void*)*2);
lean_dec_ref(v_x_61_);
v___x_65_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5));
v___x_66_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__6));
v___x_67_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7);
v___x_68_ = l_Nat_reprFast(v_identityId_62_);
v___x_69_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
v___x_70_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_67_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = 0;
v___x_72_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_72_, sizeof(void*)*1, v___x_71_);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_66_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__9));
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_box(1);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_75_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__11));
v___x_79_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_79_, 0, v___x_77_);
lean_ctor_set(v___x_79_, 1, v___x_78_);
v___x_80_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
lean_ctor_set(v___x_80_, 1, v___x_65_);
v___x_81_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12);
v___x_82_ = l_Nat_reprFast(v_primeSalt_63_);
v___x_83_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
v___x_84_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_81_);
lean_ctor_set(v___x_84_, 1, v___x_83_);
v___x_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_85_, 0, v___x_84_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___x_71_);
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_80_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_74_);
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
lean_ctor_set(v___x_88_, 1, v___x_76_);
v___x_89_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__14));
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set(v___x_91_, 1, v___x_65_);
v___x_92_ = l_Bool_repr___redArg(v_isVerified_64_);
v___x_93_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_67_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set_uint8(v___x_94_, sizeof(void*)*1, v___x_71_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_91_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17);
v___x_97_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__18));
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_95_);
v___x_99_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__19));
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_98_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_101_, 0, v___x_96_);
lean_ctor_set(v___x_101_, 1, v___x_100_);
v___x_102_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_102_, 0, v___x_101_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*1, v___x_71_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr(lean_object* v_x_103_, lean_object* v_prec_104_){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg(v_x_103_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___boxed(lean_object* v_x_106_, lean_object* v_prec_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr(v_x_106_, v_prec_107_);
lean_dec(v_prec_107_);
return v_res_108_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(lean_object* v_x_111_, lean_object* v_x_112_){
_start:
{
lean_object* v_identityId_113_; lean_object* v_primeSalt_114_; uint8_t v_isVerified_115_; lean_object* v_identityId_116_; lean_object* v_primeSalt_117_; uint8_t v_isVerified_118_; uint8_t v___x_119_; 
v_identityId_113_ = lean_ctor_get(v_x_111_, 0);
v_primeSalt_114_ = lean_ctor_get(v_x_111_, 1);
v_isVerified_115_ = lean_ctor_get_uint8(v_x_111_, sizeof(void*)*2);
v_identityId_116_ = lean_ctor_get(v_x_112_, 0);
v_primeSalt_117_ = lean_ctor_get(v_x_112_, 1);
v_isVerified_118_ = lean_ctor_get_uint8(v_x_112_, sizeof(void*)*2);
v___x_119_ = lean_nat_dec_eq(v_identityId_113_, v_identityId_116_);
if (v___x_119_ == 0)
{
return v___x_119_;
}
else
{
uint8_t v___x_120_; 
v___x_120_ = lean_nat_dec_eq(v_primeSalt_114_, v_primeSalt_117_);
if (v___x_120_ == 0)
{
return v___x_120_;
}
else
{
if (v_isVerified_115_ == 0)
{
if (v_isVerified_118_ == 0)
{
return v___x_120_;
}
else
{
return v_isVerified_115_;
}
}
else
{
return v_isVerified_118_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq___boxed(lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
uint8_t v_res_123_; lean_object* v_r_124_; 
v_res_123_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(v_x_121_, v_x_122_);
lean_dec_ref(v_x_122_);
lean_dec_ref(v_x_121_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment(lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
uint8_t v___x_127_; 
v___x_127_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(v_x_125_, v_x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment___boxed(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment(v_x_128_, v_x_129_);
lean_dec_ref(v_x_129_);
lean_dec_ref(v_x_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isOdd(lean_object* v_n_132_){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_133_ = lean_unsigned_to_nat(2u);
v___x_134_ = lean_nat_mod(v_n_132_, v___x_133_);
v___x_135_ = lean_unsigned_to_nat(1u);
v___x_136_ = lean_nat_dec_eq(v___x_134_, v___x_135_);
lean_dec(v___x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isOdd___boxed(lean_object* v_n_137_){
_start:
{
uint8_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = lp_Echonomics_Echonomics_LambdaProof_isOdd(v_n_137_);
lean_dec(v_n_137_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_primeCandidate(lean_object* v_n_140_){
_start:
{
lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_141_ = lean_unsigned_to_nat(3u);
v___x_142_ = lean_nat_dec_lt(v___x_141_, v_n_140_);
if (v___x_142_ == 0)
{
return v___x_142_;
}
else
{
uint8_t v___x_143_; 
v___x_143_ = lp_Echonomics_Echonomics_LambdaProof_isOdd(v_n_140_);
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_primeCandidate___boxed(lean_object* v_n_144_){
_start:
{
uint8_t v_res_145_; lean_object* v_r_146_; 
v_res_145_ = lp_Echonomics_Echonomics_LambdaProof_primeCandidate(v_n_144_);
lean_dec(v_n_144_);
v_r_146_ = lean_box(v_res_145_);
return v_r_146_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_driftBoundOk(lean_object* v_delta_147_, lean_object* v_xi_148_){
_start:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; 
v___x_149_ = lean_unsigned_to_nat(10u);
v___x_150_ = lean_nat_mul(v___x_149_, v_delta_147_);
v___x_151_ = lean_unsigned_to_nat(3u);
v___x_152_ = lean_nat_mul(v___x_151_, v_xi_148_);
v___x_153_ = lean_nat_dec_le(v___x_150_, v___x_152_);
lean_dec(v___x_152_);
lean_dec(v___x_150_);
return v___x_153_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_driftBoundOk___boxed(lean_object* v_delta_154_, lean_object* v_xi_155_){
_start:
{
uint8_t v_res_156_; lean_object* v_r_157_; 
v_res_156_ = lp_Echonomics_Echonomics_LambdaProof_driftBoundOk(v_delta_154_, v_xi_155_);
lean_dec(v_xi_155_);
lean_dec(v_delta_154_);
v_r_157_ = lean_box(v_res_156_);
return v_r_157_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(lean_object* v_idCommit_158_){
_start:
{
uint8_t v_isVerified_159_; 
v_isVerified_159_ = lean_ctor_get_uint8(v_idCommit_158_, sizeof(void*)*2);
if (v_isVerified_159_ == 0)
{
return v_isVerified_159_;
}
else
{
lean_object* v_primeSalt_160_; uint8_t v___x_161_; 
v_primeSalt_160_ = lean_ctor_get(v_idCommit_158_, 1);
v___x_161_ = lp_Echonomics_Echonomics_LambdaProof_primeCandidate(v_primeSalt_160_);
return v___x_161_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful___boxed(lean_object* v_idCommit_162_){
_start:
{
uint8_t v_res_163_; lean_object* v_r_164_; 
v_res_163_ = lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(v_idCommit_162_);
lean_dec_ref(v_idCommit_162_);
v_r_164_ = lean_box(v_res_163_);
return v_r_164_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_unsigned_to_nat(12u);
v___x_175_ = lean_nat_to_int(v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = lean_unsigned_to_nat(11u);
v___x_183_ = lean_nat_to_int(v___x_182_);
return v___x_183_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_187_ = lean_unsigned_to_nat(15u);
v___x_188_ = lean_nat_to_int(v___x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg(lean_object* v_x_192_){
_start:
{
lean_object* v_identity_193_; lean_object* v_driftDelta_194_; lean_object* v_driftXi_195_; lean_object* v_seatLogHash_196_; uint8_t v_zkAttested_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v_identity_193_ = lean_ctor_get(v_x_192_, 0);
lean_inc_ref(v_identity_193_);
v_driftDelta_194_ = lean_ctor_get(v_x_192_, 1);
lean_inc(v_driftDelta_194_);
v_driftXi_195_ = lean_ctor_get(v_x_192_, 2);
lean_inc(v_driftXi_195_);
v_seatLogHash_196_ = lean_ctor_get(v_x_192_, 3);
lean_inc(v_seatLogHash_196_);
v_zkAttested_197_ = lean_ctor_get_uint8(v_x_192_, sizeof(void*)*4);
lean_dec_ref(v_x_192_);
v___x_198_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5));
v___x_199_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__3));
v___x_200_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__4, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__4_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__4);
v___x_201_ = lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg(v_identity_193_);
v___x_202_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
v___x_203_ = 0;
v___x_204_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_204_, 0, v___x_202_);
lean_ctor_set_uint8(v___x_204_, sizeof(void*)*1, v___x_203_);
v___x_205_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_199_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__9));
v___x_207_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_205_);
lean_ctor_set(v___x_207_, 1, v___x_206_);
v___x_208_ = lean_box(1);
v___x_209_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set(v___x_209_, 1, v___x_208_);
v___x_210_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__6));
v___x_211_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_211_, 0, v___x_209_);
lean_ctor_set(v___x_211_, 1, v___x_210_);
v___x_212_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_211_);
lean_ctor_set(v___x_212_, 1, v___x_198_);
v___x_213_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7);
v___x_214_ = l_Nat_reprFast(v_driftDelta_194_);
v___x_215_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
v___x_216_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_213_);
lean_ctor_set(v___x_216_, 1, v___x_215_);
v___x_217_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_217_, 0, v___x_216_);
lean_ctor_set_uint8(v___x_217_, sizeof(void*)*1, v___x_203_);
v___x_218_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_212_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
lean_ctor_set(v___x_219_, 1, v___x_206_);
v___x_220_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_219_);
lean_ctor_set(v___x_220_, 1, v___x_208_);
v___x_221_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__8));
v___x_222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
lean_ctor_set(v___x_223_, 1, v___x_198_);
v___x_224_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__9, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__9_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__9);
v___x_225_ = l_Nat_reprFast(v_driftXi_195_);
v___x_226_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_226_, 0, v___x_225_);
v___x_227_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_224_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_228_, 0, v___x_227_);
lean_ctor_set_uint8(v___x_228_, sizeof(void*)*1, v___x_203_);
v___x_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_223_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
lean_ctor_set(v___x_230_, 1, v___x_206_);
v___x_231_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v___x_208_);
v___x_232_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__11));
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_198_);
v___x_235_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__12, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__12);
v___x_236_ = l_Nat_reprFast(v_seatLogHash_196_);
v___x_237_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
v___x_238_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_235_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*1, v___x_203_);
v___x_240_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_234_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_206_);
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_208_);
v___x_243_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg___closed__14));
v___x_244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v___x_198_);
v___x_246_ = l_Bool_repr___redArg(v_zkAttested_197_);
v___x_247_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_213_);
lean_ctor_set(v___x_247_, 1, v___x_246_);
v___x_248_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set_uint8(v___x_248_, sizeof(void*)*1, v___x_203_);
v___x_249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_245_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17);
v___x_251_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__18));
v___x_252_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___x_249_);
v___x_253_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__19));
v___x_254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_252_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_250_);
lean_ctor_set(v___x_255_, 1, v___x_254_);
v___x_256_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set_uint8(v___x_256_, sizeof(void*)*1, v___x_203_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr(lean_object* v_x_257_, lean_object* v_prec_258_){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___redArg(v_x_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr___boxed(lean_object* v_x_260_, lean_object* v_prec_261_){
_start:
{
lean_object* v_res_262_; 
v_res_262_ = lp_Echonomics_Echonomics_LambdaProof_instReprLambdaProof_repr(v_x_260_, v_prec_261_);
lean_dec(v_prec_261_);
return v_res_262_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof_decEq(lean_object* v_x_265_, lean_object* v_x_266_){
_start:
{
lean_object* v_identity_267_; lean_object* v_driftDelta_268_; lean_object* v_driftXi_269_; lean_object* v_seatLogHash_270_; uint8_t v_zkAttested_271_; lean_object* v_identity_272_; lean_object* v_driftDelta_273_; lean_object* v_driftXi_274_; lean_object* v_seatLogHash_275_; uint8_t v_zkAttested_276_; uint8_t v___x_277_; 
v_identity_267_ = lean_ctor_get(v_x_265_, 0);
v_driftDelta_268_ = lean_ctor_get(v_x_265_, 1);
v_driftXi_269_ = lean_ctor_get(v_x_265_, 2);
v_seatLogHash_270_ = lean_ctor_get(v_x_265_, 3);
v_zkAttested_271_ = lean_ctor_get_uint8(v_x_265_, sizeof(void*)*4);
v_identity_272_ = lean_ctor_get(v_x_266_, 0);
v_driftDelta_273_ = lean_ctor_get(v_x_266_, 1);
v_driftXi_274_ = lean_ctor_get(v_x_266_, 2);
v_seatLogHash_275_ = lean_ctor_get(v_x_266_, 3);
v_zkAttested_276_ = lean_ctor_get_uint8(v_x_266_, sizeof(void*)*4);
v___x_277_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(v_identity_267_, v_identity_272_);
if (v___x_277_ == 0)
{
return v___x_277_;
}
else
{
uint8_t v___x_278_; 
v___x_278_ = lean_nat_dec_eq(v_driftDelta_268_, v_driftDelta_273_);
if (v___x_278_ == 0)
{
return v___x_278_;
}
else
{
uint8_t v___x_279_; 
v___x_279_ = lean_nat_dec_eq(v_driftXi_269_, v_driftXi_274_);
if (v___x_279_ == 0)
{
return v___x_279_;
}
else
{
uint8_t v___x_280_; 
v___x_280_ = lean_nat_dec_eq(v_seatLogHash_270_, v_seatLogHash_275_);
if (v___x_280_ == 0)
{
return v___x_280_;
}
else
{
if (v_zkAttested_271_ == 0)
{
if (v_zkAttested_276_ == 0)
{
return v___x_280_;
}
else
{
return v_zkAttested_271_;
}
}
else
{
return v_zkAttested_276_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof_decEq___boxed(lean_object* v_x_281_, lean_object* v_x_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof_decEq(v_x_281_, v_x_282_);
lean_dec_ref(v_x_282_);
lean_dec_ref(v_x_281_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof(lean_object* v_x_285_, lean_object* v_x_286_){
_start:
{
uint8_t v___x_287_; 
v___x_287_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof_decEq(v_x_285_, v_x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof___boxed(lean_object* v_x_288_, lean_object* v_x_289_){
_start:
{
uint8_t v_res_290_; lean_object* v_r_291_; 
v_res_290_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaProof(v_x_288_, v_x_289_);
lean_dec_ref(v_x_289_);
lean_dec_ref(v_x_288_);
v_r_291_ = lean_box(v_res_290_);
return v_r_291_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isLambdaProofVerified(lean_object* v_pf_292_){
_start:
{
lean_object* v_identity_293_; lean_object* v_driftDelta_294_; lean_object* v_driftXi_295_; lean_object* v_seatLogHash_296_; uint8_t v_zkAttested_297_; uint8_t v___y_299_; uint8_t v___x_302_; 
v_identity_293_ = lean_ctor_get(v_pf_292_, 0);
v_driftDelta_294_ = lean_ctor_get(v_pf_292_, 1);
v_driftXi_295_ = lean_ctor_get(v_pf_292_, 2);
v_seatLogHash_296_ = lean_ctor_get(v_pf_292_, 3);
v_zkAttested_297_ = lean_ctor_get_uint8(v_pf_292_, sizeof(void*)*4);
v___x_302_ = lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(v_identity_293_);
if (v___x_302_ == 0)
{
v___y_299_ = v___x_302_;
goto v___jp_298_;
}
else
{
uint8_t v___x_303_; 
v___x_303_ = lp_Echonomics_Echonomics_LambdaProof_driftBoundOk(v_driftDelta_294_, v_driftXi_295_);
v___y_299_ = v___x_303_;
goto v___jp_298_;
}
v___jp_298_:
{
if (v___y_299_ == 0)
{
return v___y_299_;
}
else
{
lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = lean_nat_dec_lt(v___x_300_, v_seatLogHash_296_);
if (v___x_301_ == 0)
{
return v___x_301_;
}
else
{
return v_zkAttested_297_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isLambdaProofVerified___boxed(lean_object* v_pf_304_){
_start:
{
uint8_t v_res_305_; lean_object* v_r_306_; 
v_res_305_ = lp_Echonomics_Echonomics_LambdaProof_isLambdaProofVerified(v_pf_304_);
lean_dec_ref(v_pf_304_);
v_r_306_ = lean_box(v_res_305_);
return v_r_306_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_LambdaProof(uint8_t builtin) {
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
