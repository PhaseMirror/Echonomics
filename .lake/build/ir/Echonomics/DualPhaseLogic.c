// Lean compiler output
// Module: Echonomics.DualPhaseLogic
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Dual Phase Logic and CRMF Governor Daemon Architecture"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 168, .m_capacity = 168, .m_length = 167, .m_data = "Architectural specification for the CRMF Governor Client daemon, BCS binary serialization, and Poseidon2 zero-knowledge sealState generation for dual-phase governance."};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 156, .m_capacity = 156, .m_length = 155, .m_data = "Gate constitutional action on a complete CRMF sealState (BCS canonical, Poseidon2 t=9 r=8, dual-anchor signature) and cap reputation-weighted voting power."};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__2_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Dual-phase governance gate"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Fail-closed cryptographic sealState"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__6_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 8, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(26) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__0_value),((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__1_value),((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__7 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__7_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_adr0026 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_adr0026___closed__7_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__0_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "bcsCanonical"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__3_value),((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__6_value;
static lean_once_cell_t lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__7;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__9_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "poseidonSealValid"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__10 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__10_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__10_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__11 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__11_value;
static lean_once_cell_t lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__12;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "dualSigned"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__13 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__13_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__13_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__14 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__14_value;
static lean_once_cell_t lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__15;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__16 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__16_value;
static lean_once_cell_t lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__17;
static lean_once_cell_t lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__18;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__19 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__19_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__16_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__20 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__20_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isSealComplete(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isSealComplete___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Echonomics.DualPhaseLogic.GovernancePhase.Biological"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Echonomics.DualPhaseLogic.GovernancePhase.Constitutional"};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__2_value)}};
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__3_value;
static lean_once_cell_t lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4;
static lean_once_cell_t lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase = (const lean_object*)&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ofNat(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqGovernancePhase(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqGovernancePhase___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isConstitutionalActionLawful(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isConstitutionalActionLawful___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__T;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__R;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__CONSTRAINTS;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_BASE__MULTIPLIER;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_AUDITOR__MULTIPLIER;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_MAX__TOTAL__MULTIPLIER;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_REPUTATION__SCORE__MAX;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_votingPower(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_votingPower___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isPowerWithinCap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isPowerWithinCap___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isReputationScoreValid(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isReputationScoreValid___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_passesReputationQuorum(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_passesReputationQuorum___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_unsigned_to_nat(16u);
v___x_36_ = lean_nat_to_int(v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_unsigned_to_nat(21u);
v___x_44_ = lean_nat_to_int(v___x_43_);
return v___x_44_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_48_ = lean_unsigned_to_nat(14u);
v___x_49_ = lean_nat_to_int(v___x_48_);
return v___x_49_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__0));
v___x_52_ = lean_string_length(v___x_51_);
return v___x_52_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__17, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__17_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__17);
v___x_54_ = lean_nat_to_int(v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg(lean_object* v_x_59_){
_start:
{
uint8_t v_bcsCanonical_60_; uint8_t v_poseidonSealValid_61_; uint8_t v_dualSigned_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v_bcsCanonical_60_ = lean_ctor_get_uint8(v_x_59_, 0);
v_poseidonSealValid_61_ = lean_ctor_get_uint8(v_x_59_, 1);
v_dualSigned_62_ = lean_ctor_get_uint8(v_x_59_, 2);
v___x_63_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__5));
v___x_64_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__6));
v___x_65_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__7, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__7);
v___x_66_ = l_Bool_repr___redArg(v_bcsCanonical_60_);
v___x_67_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_65_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = 0;
v___x_69_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set_uint8(v___x_69_, sizeof(void*)*1, v___x_68_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_64_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__9));
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_box(1);
v___x_74_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_74_, 0, v___x_72_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
v___x_75_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__11));
v___x_76_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_76_, 0, v___x_74_);
lean_ctor_set(v___x_76_, 1, v___x_75_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
lean_ctor_set(v___x_77_, 1, v___x_63_);
v___x_78_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__12, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__12_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__12);
v___x_79_ = l_Bool_repr___redArg(v_poseidonSealValid_61_);
v___x_80_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_80_, 0, v___x_78_);
lean_ctor_set(v___x_80_, 1, v___x_79_);
v___x_81_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_81_, 0, v___x_80_);
lean_ctor_set_uint8(v___x_81_, sizeof(void*)*1, v___x_68_);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_77_);
lean_ctor_set(v___x_82_, 1, v___x_81_);
v___x_83_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_71_);
v___x_84_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
lean_ctor_set(v___x_84_, 1, v___x_73_);
v___x_85_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__14));
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_84_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_63_);
v___x_88_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__15, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__15);
v___x_89_ = l_Bool_repr___redArg(v_dualSigned_62_);
v___x_90_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_91_, 0, v___x_90_);
lean_ctor_set_uint8(v___x_91_, sizeof(void*)*1, v___x_68_);
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_87_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__18, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__18_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__18);
v___x_94_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__19));
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___x_92_);
v___x_96_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___closed__20));
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_95_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_93_);
lean_ctor_set(v___x_98_, 1, v___x_97_);
v___x_99_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_99_, 0, v___x_98_);
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*1, v___x_68_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg___boxed(lean_object* v_x_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg(v_x_100_);
lean_dec_ref(v_x_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr(lean_object* v_x_102_, lean_object* v_prec_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___redArg(v_x_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr___boxed(lean_object* v_x_105_, lean_object* v_prec_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = lp_Echonomics_Echonomics_DualPhaseLogic_instReprCrmfSeal_repr(v_x_105_, v_prec_106_);
lean_dec(v_prec_106_);
lean_dec_ref(v_x_105_);
return v_res_107_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal_decEq(lean_object* v_x_110_, lean_object* v_x_111_){
_start:
{
uint8_t v_bcsCanonical_112_; uint8_t v_poseidonSealValid_113_; uint8_t v_dualSigned_114_; uint8_t v_bcsCanonical_115_; uint8_t v_poseidonSealValid_116_; uint8_t v_dualSigned_117_; 
v_bcsCanonical_112_ = lean_ctor_get_uint8(v_x_110_, 0);
v_poseidonSealValid_113_ = lean_ctor_get_uint8(v_x_110_, 1);
v_dualSigned_114_ = lean_ctor_get_uint8(v_x_110_, 2);
v_bcsCanonical_115_ = lean_ctor_get_uint8(v_x_111_, 0);
v_poseidonSealValid_116_ = lean_ctor_get_uint8(v_x_111_, 1);
v_dualSigned_117_ = lean_ctor_get_uint8(v_x_111_, 2);
if (v_bcsCanonical_112_ == 0)
{
if (v_bcsCanonical_115_ == 0)
{
goto v___jp_120_;
}
else
{
return v_bcsCanonical_112_;
}
}
else
{
if (v_bcsCanonical_115_ == 0)
{
return v_bcsCanonical_115_;
}
else
{
goto v___jp_120_;
}
}
v___jp_118_:
{
if (v_dualSigned_114_ == 0)
{
if (v_dualSigned_117_ == 0)
{
uint8_t v___x_119_; 
v___x_119_ = 1;
return v___x_119_;
}
else
{
return v_dualSigned_114_;
}
}
else
{
return v_dualSigned_117_;
}
}
v___jp_120_:
{
if (v_poseidonSealValid_113_ == 0)
{
if (v_poseidonSealValid_116_ == 0)
{
goto v___jp_118_;
}
else
{
return v_poseidonSealValid_113_;
}
}
else
{
if (v_poseidonSealValid_116_ == 0)
{
return v_poseidonSealValid_116_;
}
else
{
goto v___jp_118_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal_decEq___boxed(lean_object* v_x_121_, lean_object* v_x_122_){
_start:
{
uint8_t v_res_123_; lean_object* v_r_124_; 
v_res_123_ = lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal_decEq(v_x_121_, v_x_122_);
lean_dec_ref(v_x_122_);
lean_dec_ref(v_x_121_);
v_r_124_ = lean_box(v_res_123_);
return v_r_124_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal(lean_object* v_x_125_, lean_object* v_x_126_){
_start:
{
uint8_t v___x_127_; 
v___x_127_ = lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal_decEq(v_x_125_, v_x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal___boxed(lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
uint8_t v_res_130_; lean_object* v_r_131_; 
v_res_130_ = lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqCrmfSeal(v_x_128_, v_x_129_);
lean_dec_ref(v_x_129_);
lean_dec_ref(v_x_128_);
v_r_131_ = lean_box(v_res_130_);
return v_r_131_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isSealComplete(lean_object* v_sealState_132_){
_start:
{
uint8_t v_bcsCanonical_133_; 
v_bcsCanonical_133_ = lean_ctor_get_uint8(v_sealState_132_, 0);
if (v_bcsCanonical_133_ == 0)
{
return v_bcsCanonical_133_;
}
else
{
uint8_t v_poseidonSealValid_134_; 
v_poseidonSealValid_134_ = lean_ctor_get_uint8(v_sealState_132_, 1);
if (v_poseidonSealValid_134_ == 0)
{
return v_poseidonSealValid_134_;
}
else
{
uint8_t v_dualSigned_135_; 
v_dualSigned_135_ = lean_ctor_get_uint8(v_sealState_132_, 2);
return v_dualSigned_135_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isSealComplete___boxed(lean_object* v_sealState_136_){
_start:
{
uint8_t v_res_137_; lean_object* v_r_138_; 
v_res_137_ = lp_Echonomics_Echonomics_DualPhaseLogic_isSealComplete(v_sealState_136_);
lean_dec_ref(v_sealState_136_);
v_r_138_ = lean_box(v_res_137_);
return v_r_138_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx(uint8_t v_x_139_){
_start:
{
if (v_x_139_ == 0)
{
lean_object* v___x_140_; 
v___x_140_ = lean_unsigned_to_nat(0u);
return v___x_140_;
}
else
{
lean_object* v___x_141_; 
v___x_141_ = lean_unsigned_to_nat(1u);
return v___x_141_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx___boxed(lean_object* v_x_142_){
_start:
{
uint8_t v_x_boxed_143_; lean_object* v_res_144_; 
v_x_boxed_143_ = lean_unbox(v_x_142_);
v_res_144_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx(v_x_boxed_143_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_toCtorIdx(uint8_t v_x_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx(v_x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_toCtorIdx___boxed(lean_object* v_x_147_){
_start:
{
uint8_t v_x_4__boxed_148_; lean_object* v_res_149_; 
v_x_4__boxed_148_ = lean_unbox(v_x_147_);
v_res_149_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_toCtorIdx(v_x_4__boxed_148_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim___redArg(lean_object* v_k_150_){
_start:
{
lean_inc(v_k_150_);
return v_k_150_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim___redArg___boxed(lean_object* v_k_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim___redArg(v_k_151_);
lean_dec(v_k_151_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim(lean_object* v_motive_153_, lean_object* v_ctorIdx_154_, uint8_t v_t_155_, lean_object* v_h_156_, lean_object* v_k_157_){
_start:
{
lean_inc(v_k_157_);
return v_k_157_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim___boxed(lean_object* v_motive_158_, lean_object* v_ctorIdx_159_, lean_object* v_t_160_, lean_object* v_h_161_, lean_object* v_k_162_){
_start:
{
uint8_t v_t_boxed_163_; lean_object* v_res_164_; 
v_t_boxed_163_ = lean_unbox(v_t_160_);
v_res_164_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorElim(v_motive_158_, v_ctorIdx_159_, v_t_boxed_163_, v_h_161_, v_k_162_);
lean_dec(v_k_162_);
lean_dec(v_ctorIdx_159_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim___redArg(lean_object* v_Biological_165_){
_start:
{
lean_inc(v_Biological_165_);
return v_Biological_165_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim___redArg___boxed(lean_object* v_Biological_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim___redArg(v_Biological_166_);
lean_dec(v_Biological_166_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim(lean_object* v_motive_168_, uint8_t v_t_169_, lean_object* v_h_170_, lean_object* v_Biological_171_){
_start:
{
lean_inc(v_Biological_171_);
return v_Biological_171_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim___boxed(lean_object* v_motive_172_, lean_object* v_t_173_, lean_object* v_h_174_, lean_object* v_Biological_175_){
_start:
{
uint8_t v_t_boxed_176_; lean_object* v_res_177_; 
v_t_boxed_176_ = lean_unbox(v_t_173_);
v_res_177_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Biological_elim(v_motive_172_, v_t_boxed_176_, v_h_174_, v_Biological_175_);
lean_dec(v_Biological_175_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim___redArg(lean_object* v_Constitutional_178_){
_start:
{
lean_inc(v_Constitutional_178_);
return v_Constitutional_178_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim___redArg___boxed(lean_object* v_Constitutional_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim___redArg(v_Constitutional_179_);
lean_dec(v_Constitutional_179_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim(lean_object* v_motive_181_, uint8_t v_t_182_, lean_object* v_h_183_, lean_object* v_Constitutional_184_){
_start:
{
lean_inc(v_Constitutional_184_);
return v_Constitutional_184_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim___boxed(lean_object* v_motive_185_, lean_object* v_t_186_, lean_object* v_h_187_, lean_object* v_Constitutional_188_){
_start:
{
uint8_t v_t_boxed_189_; lean_object* v_res_190_; 
v_t_boxed_189_ = lean_unbox(v_t_186_);
v_res_190_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_Constitutional_elim(v_motive_185_, v_t_boxed_189_, v_h_187_, v_Constitutional_188_);
lean_dec(v_Constitutional_188_);
return v_res_190_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_unsigned_to_nat(2u);
v___x_198_ = lean_nat_to_int(v___x_197_);
return v___x_198_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_unsigned_to_nat(1u);
v___x_200_ = lean_nat_to_int(v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr(uint8_t v_x_201_, lean_object* v_prec_202_){
_start:
{
lean_object* v___y_204_; lean_object* v___y_211_; 
if (v_x_201_ == 0)
{
lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(1024u);
v___x_218_ = lean_nat_dec_le(v___x_217_, v_prec_202_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4);
v___y_204_ = v___x_219_;
goto v___jp_203_;
}
else
{
lean_object* v___x_220_; 
v___x_220_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5);
v___y_204_ = v___x_220_;
goto v___jp_203_;
}
}
else
{
lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_221_ = lean_unsigned_to_nat(1024u);
v___x_222_ = lean_nat_dec_le(v___x_221_, v_prec_202_);
if (v___x_222_ == 0)
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__4);
v___y_211_ = v___x_223_;
goto v___jp_210_;
}
else
{
lean_object* v___x_224_; 
v___x_224_ = lean_obj_once(&lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5, &lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5_once, _init_lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__5);
v___y_211_ = v___x_224_;
goto v___jp_210_;
}
}
v___jp_203_:
{
lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_205_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__1));
lean_inc(v___y_204_);
v___x_206_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_206_, 0, v___y_204_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v___x_207_ = 0;
v___x_208_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_208_, 0, v___x_206_);
lean_ctor_set_uint8(v___x_208_, sizeof(void*)*1, v___x_207_);
v___x_209_ = l_Repr_addAppParen(v___x_208_, v_prec_202_);
return v___x_209_;
}
v___jp_210_:
{
lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_212_ = ((lean_object*)(lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___closed__3));
lean_inc(v___y_211_);
v___x_213_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_213_, 0, v___y_211_);
lean_ctor_set(v___x_213_, 1, v___x_212_);
v___x_214_ = 0;
v___x_215_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set_uint8(v___x_215_, sizeof(void*)*1, v___x_214_);
v___x_216_ = l_Repr_addAppParen(v___x_215_, v_prec_202_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr___boxed(lean_object* v_x_225_, lean_object* v_prec_226_){
_start:
{
uint8_t v_x_121__boxed_227_; lean_object* v_res_228_; 
v_x_121__boxed_227_ = lean_unbox(v_x_225_);
v_res_228_ = lp_Echonomics_Echonomics_DualPhaseLogic_instReprGovernancePhase_repr(v_x_121__boxed_227_, v_prec_226_);
lean_dec(v_prec_226_);
return v_res_228_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ofNat(lean_object* v_n_231_){
_start:
{
lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_nat_dec_le(v_n_231_, v___x_232_);
if (v___x_233_ == 0)
{
uint8_t v___x_234_; 
v___x_234_ = 1;
return v___x_234_;
}
else
{
uint8_t v___x_235_; 
v___x_235_ = 0;
return v___x_235_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ofNat___boxed(lean_object* v_n_236_){
_start:
{
uint8_t v_res_237_; lean_object* v_r_238_; 
v_res_237_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ofNat(v_n_236_);
lean_dec(v_n_236_);
v_r_238_ = lean_box(v_res_237_);
return v_r_238_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqGovernancePhase(uint8_t v_x_239_, uint8_t v_y_240_){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v___x_241_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx(v_x_239_);
v___x_242_ = lp_Echonomics_Echonomics_DualPhaseLogic_GovernancePhase_ctorIdx(v_y_240_);
v___x_243_ = lean_nat_dec_eq(v___x_241_, v___x_242_);
lean_dec(v___x_242_);
lean_dec(v___x_241_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqGovernancePhase___boxed(lean_object* v_x_244_, lean_object* v_y_245_){
_start:
{
uint8_t v_x_13__boxed_246_; uint8_t v_y_14__boxed_247_; uint8_t v_res_248_; lean_object* v_r_249_; 
v_x_13__boxed_246_ = lean_unbox(v_x_244_);
v_y_14__boxed_247_ = lean_unbox(v_y_245_);
v_res_248_ = lp_Echonomics_Echonomics_DualPhaseLogic_instDecidableEqGovernancePhase(v_x_13__boxed_246_, v_y_14__boxed_247_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isConstitutionalActionLawful(lean_object* v_sealState_250_){
_start:
{
uint8_t v___x_251_; 
v___x_251_ = lp_Echonomics_Echonomics_DualPhaseLogic_isSealComplete(v_sealState_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isConstitutionalActionLawful___boxed(lean_object* v_sealState_252_){
_start:
{
uint8_t v_res_253_; lean_object* v_r_254_; 
v_res_253_ = lp_Echonomics_Echonomics_DualPhaseLogic_isConstitutionalActionLawful(v_sealState_252_);
lean_dec_ref(v_sealState_252_);
v_r_254_ = lean_box(v_res_253_);
return v_r_254_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__T(void){
_start:
{
lean_object* v___x_255_; 
v___x_255_ = lean_unsigned_to_nat(9u);
return v___x_255_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__R(void){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_unsigned_to_nat(8u);
return v___x_256_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__CONSTRAINTS(void){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = lean_unsigned_to_nat(5087u);
return v___x_257_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_BASE__MULTIPLIER(void){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lean_unsigned_to_nat(1u);
return v___x_258_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_AUDITOR__MULTIPLIER(void){
_start:
{
lean_object* v___x_259_; 
v___x_259_ = lean_unsigned_to_nat(2u);
return v___x_259_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_MAX__TOTAL__MULTIPLIER(void){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = lean_unsigned_to_nat(5u);
return v___x_260_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_DualPhaseLogic_REPUTATION__SCORE__MAX(void){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = lean_unsigned_to_nat(100u);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_votingPower(lean_object* v_tokenBalance_262_, lean_object* v_reputationBonus_263_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = lean_nat_add(v_tokenBalance_262_, v_reputationBonus_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_votingPower___boxed(lean_object* v_tokenBalance_265_, lean_object* v_reputationBonus_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = lp_Echonomics_Echonomics_DualPhaseLogic_votingPower(v_tokenBalance_265_, v_reputationBonus_266_);
lean_dec(v_reputationBonus_266_);
lean_dec(v_tokenBalance_265_);
return v_res_267_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isPowerWithinCap(lean_object* v_tokenBalance_268_, lean_object* v_reputationBonus_269_){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v___x_270_ = lean_nat_add(v_tokenBalance_268_, v_reputationBonus_269_);
v___x_271_ = lean_unsigned_to_nat(5u);
v___x_272_ = lean_nat_mul(v_tokenBalance_268_, v___x_271_);
v___x_273_ = lean_nat_dec_le(v___x_270_, v___x_272_);
lean_dec(v___x_272_);
lean_dec(v___x_270_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isPowerWithinCap___boxed(lean_object* v_tokenBalance_274_, lean_object* v_reputationBonus_275_){
_start:
{
uint8_t v_res_276_; lean_object* v_r_277_; 
v_res_276_ = lp_Echonomics_Echonomics_DualPhaseLogic_isPowerWithinCap(v_tokenBalance_274_, v_reputationBonus_275_);
lean_dec(v_reputationBonus_275_);
lean_dec(v_tokenBalance_274_);
v_r_277_ = lean_box(v_res_276_);
return v_r_277_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_isReputationScoreValid(lean_object* v_score_278_){
_start:
{
lean_object* v___x_279_; uint8_t v___x_280_; 
v___x_279_ = lean_unsigned_to_nat(100u);
v___x_280_ = lean_nat_dec_le(v_score_278_, v___x_279_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_isReputationScoreValid___boxed(lean_object* v_score_281_){
_start:
{
uint8_t v_res_282_; lean_object* v_r_283_; 
v_res_282_ = lp_Echonomics_Echonomics_DualPhaseLogic_isReputationScoreValid(v_score_281_);
lean_dec(v_score_281_);
v_r_283_ = lean_box(v_res_282_);
return v_r_283_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_DualPhaseLogic_passesReputationQuorum(lean_object* v_tokenBalance_284_, lean_object* v_reputationBonus_285_, lean_object* v_threshold_286_){
_start:
{
lean_object* v___x_287_; uint8_t v___x_288_; 
v___x_287_ = lean_nat_add(v_tokenBalance_284_, v_reputationBonus_285_);
v___x_288_ = lean_nat_dec_le(v_threshold_286_, v___x_287_);
lean_dec(v___x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_DualPhaseLogic_passesReputationQuorum___boxed(lean_object* v_tokenBalance_289_, lean_object* v_reputationBonus_290_, lean_object* v_threshold_291_){
_start:
{
uint8_t v_res_292_; lean_object* v_r_293_; 
v_res_292_ = lp_Echonomics_Echonomics_DualPhaseLogic_passesReputationQuorum(v_tokenBalance_289_, v_reputationBonus_290_, v_threshold_291_);
lean_dec(v_threshold_291_);
lean_dec(v_reputationBonus_290_);
lean_dec(v_tokenBalance_289_);
v_r_293_ = lean_box(v_res_292_);
return v_r_293_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_DualPhaseLogic(uint8_t builtin) {
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
lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__T = _init_lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__T();
lean_mark_persistent(lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__T);
lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__R = _init_lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__R();
lean_mark_persistent(lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__R);
lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__CONSTRAINTS = _init_lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__CONSTRAINTS();
lean_mark_persistent(lp_Echonomics_Echonomics_DualPhaseLogic_POSEIDON__CONSTRAINTS);
lp_Echonomics_Echonomics_DualPhaseLogic_BASE__MULTIPLIER = _init_lp_Echonomics_Echonomics_DualPhaseLogic_BASE__MULTIPLIER();
lean_mark_persistent(lp_Echonomics_Echonomics_DualPhaseLogic_BASE__MULTIPLIER);
lp_Echonomics_Echonomics_DualPhaseLogic_AUDITOR__MULTIPLIER = _init_lp_Echonomics_Echonomics_DualPhaseLogic_AUDITOR__MULTIPLIER();
lean_mark_persistent(lp_Echonomics_Echonomics_DualPhaseLogic_AUDITOR__MULTIPLIER);
lp_Echonomics_Echonomics_DualPhaseLogic_MAX__TOTAL__MULTIPLIER = _init_lp_Echonomics_Echonomics_DualPhaseLogic_MAX__TOTAL__MULTIPLIER();
lean_mark_persistent(lp_Echonomics_Echonomics_DualPhaseLogic_MAX__TOTAL__MULTIPLIER);
lp_Echonomics_Echonomics_DualPhaseLogic_REPUTATION__SCORE__MAX = _init_lp_Echonomics_Echonomics_DualPhaseLogic_REPUTATION__SCORE__MAX();
lean_mark_persistent(lp_Echonomics_Echonomics_DualPhaseLogic_REPUTATION__SCORE__MAX);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
