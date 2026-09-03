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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* lean_string_length(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "Integration of Lambda-Proof Smart Contracts and ZK Circuits"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "Echonomics requires local integration of EVM smart contracts and Circom ZK proof circuits."};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 98, .m_capacity = 98, .m_length = 97, .m_data = "Locally host contracts and circuits under Echonomics while binding identity and proof predicates."};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Machine-checked ZK receipt verification"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "EVM anchoring for seating logs"};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_LambdaProof_adr0006 = (const lean_object*)&lp_Echonomics_Echonomics_LambdaProof_adr0006___closed__7_value;
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
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful___boxed(lean_object*);
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(14u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(13u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__0));
v___x_50_ = lean_string_length(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__16);
v___x_52_ = lean_nat_to_int(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg(lean_object* v_x_57_){
_start:
{
lean_object* v_identityId_58_; lean_object* v_primeSalt_59_; uint8_t v_isVerified_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; uint8_t v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v_identityId_58_ = lean_ctor_get(v_x_57_, 0);
lean_inc(v_identityId_58_);
v_primeSalt_59_ = lean_ctor_get(v_x_57_, 1);
lean_inc(v_primeSalt_59_);
v_isVerified_60_ = lean_ctor_get_uint8(v_x_57_, sizeof(void*)*2);
lean_dec_ref(v_x_57_);
v___x_61_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__5));
v___x_62_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__6));
v___x_63_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__7);
v___x_64_ = l_Nat_reprFast(v_identityId_58_);
v___x_65_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
v___x_66_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_66_, 0, v___x_63_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
v___x_67_ = 0;
v___x_68_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_68_, 0, v___x_66_);
lean_ctor_set_uint8(v___x_68_, sizeof(void*)*1, v___x_67_);
v___x_69_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_62_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
v___x_70_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__9));
v___x_71_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_69_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = lean_box(1);
v___x_73_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_71_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v___x_74_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__11));
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_73_);
lean_ctor_set(v___x_75_, 1, v___x_74_);
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
lean_ctor_set(v___x_76_, 1, v___x_61_);
v___x_77_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__12);
v___x_78_ = l_Nat_reprFast(v_primeSalt_59_);
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
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_70_);
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_72_);
v___x_85_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__14));
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_61_);
v___x_88_ = l_Bool_repr___redArg(v_isVerified_60_);
v___x_89_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_89_, 0, v___x_63_);
lean_ctor_set(v___x_89_, 1, v___x_88_);
v___x_90_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_90_, 0, v___x_89_);
lean_ctor_set_uint8(v___x_90_, sizeof(void*)*1, v___x_67_);
v___x_91_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_87_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
v___x_92_ = lean_obj_once(&lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17, &lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17_once, _init_lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__17);
v___x_93_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__18));
v___x_94_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
lean_ctor_set(v___x_94_, 1, v___x_91_);
v___x_95_ = ((lean_object*)(lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg___closed__19));
v___x_96_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_96_, 0, v___x_94_);
lean_ctor_set(v___x_96_, 1, v___x_95_);
v___x_97_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_92_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*1, v___x_67_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr(lean_object* v_x_99_, lean_object* v_prec_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___redArg(v_x_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr___boxed(lean_object* v_x_102_, lean_object* v_prec_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = lp_Echonomics_Echonomics_LambdaProof_instReprLambdaIdentityCommitment_repr(v_x_102_, v_prec_103_);
lean_dec(v_prec_103_);
return v_res_104_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(lean_object* v_x_107_, lean_object* v_x_108_){
_start:
{
lean_object* v_identityId_109_; lean_object* v_primeSalt_110_; uint8_t v_isVerified_111_; lean_object* v_identityId_112_; lean_object* v_primeSalt_113_; uint8_t v_isVerified_114_; uint8_t v___x_115_; 
v_identityId_109_ = lean_ctor_get(v_x_107_, 0);
v_primeSalt_110_ = lean_ctor_get(v_x_107_, 1);
v_isVerified_111_ = lean_ctor_get_uint8(v_x_107_, sizeof(void*)*2);
v_identityId_112_ = lean_ctor_get(v_x_108_, 0);
v_primeSalt_113_ = lean_ctor_get(v_x_108_, 1);
v_isVerified_114_ = lean_ctor_get_uint8(v_x_108_, sizeof(void*)*2);
v___x_115_ = lean_nat_dec_eq(v_identityId_109_, v_identityId_112_);
if (v___x_115_ == 0)
{
return v___x_115_;
}
else
{
uint8_t v___x_116_; 
v___x_116_ = lean_nat_dec_eq(v_primeSalt_110_, v_primeSalt_113_);
if (v___x_116_ == 0)
{
return v___x_116_;
}
else
{
if (v_isVerified_111_ == 0)
{
if (v_isVerified_114_ == 0)
{
return v___x_116_;
}
else
{
return v_isVerified_111_;
}
}
else
{
return v_isVerified_114_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq___boxed(lean_object* v_x_117_, lean_object* v_x_118_){
_start:
{
uint8_t v_res_119_; lean_object* v_r_120_; 
v_res_119_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(v_x_117_, v_x_118_);
lean_dec_ref(v_x_118_);
lean_dec_ref(v_x_117_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment(lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
uint8_t v___x_123_; 
v___x_123_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment_decEq(v_x_121_, v_x_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment___boxed(lean_object* v_x_124_, lean_object* v_x_125_){
_start:
{
uint8_t v_res_126_; lean_object* v_r_127_; 
v_res_126_ = lp_Echonomics_Echonomics_LambdaProof_instDecidableEqLambdaIdentityCommitment(v_x_124_, v_x_125_);
lean_dec_ref(v_x_125_);
lean_dec_ref(v_x_124_);
v_r_127_ = lean_box(v_res_126_);
return v_r_127_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(lean_object* v_idCommit_128_){
_start:
{
uint8_t v_isVerified_129_; 
v_isVerified_129_ = lean_ctor_get_uint8(v_idCommit_128_, sizeof(void*)*2);
if (v_isVerified_129_ == 0)
{
return v_isVerified_129_;
}
else
{
lean_object* v_primeSalt_130_; lean_object* v___x_131_; uint8_t v___x_132_; 
v_primeSalt_130_ = lean_ctor_get(v_idCommit_128_, 1);
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = lean_nat_dec_lt(v___x_131_, v_primeSalt_130_);
if (v___x_132_ == 0)
{
return v___x_132_;
}
else
{
return v_isVerified_129_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful___boxed(lean_object* v_idCommit_133_){
_start:
{
uint8_t v_res_134_; lean_object* v_r_135_; 
v_res_134_ = lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(v_idCommit_133_);
lean_dec_ref(v_idCommit_133_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
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
