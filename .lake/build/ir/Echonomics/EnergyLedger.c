// Lean compiler output
// Module: Echonomics.EnergyLedger
// Imports: public import Init public meta import Init public import Echonomics.Core public import Echonomics.HundianOccupancy
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
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 151, .m_capacity = 151, .m_length = 150, .m_data = "Separated tracking of pairwise friction V_pair and nuclear attraction V_nuc is required to avoid false energy cancellation and inverted ground states."};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__1_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_adr0004___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "Maintain V_pair and V_nuc on separate ledgers, define E = V_pair - V_nuc, and select the ground state by minimizing E at fixed N, D, P, independent of multiplicity M."};
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
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_areLedgersSeparatedBool(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_areLedgersSeparatedBool___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_isGroundState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_isGroundState___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_minEnergyPair(lean_object*, lean_object*);
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_minOfList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_minOfList___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_minOfList___closed__0_value;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_minOfList(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_EnergyLedger_0__Echonomics_EnergyLedger_minOfList_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_EnergyLedger_0__Echonomics_EnergyLedger_minOfList_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "headcount"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__3_value;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__4;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "degenerateSetSize"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__5_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__6 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__6_value;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__7;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "period"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__8 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__8_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__8_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__9 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__9_value;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame___boxed(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ledger"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__0_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__0_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__1 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__1_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__1_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__2 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__2_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__2_value),((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__3 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__3_value;
static const lean_string_object lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "multiplicity"};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__4 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__4_value;
static const lean_ctor_object lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__4_value)}};
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__5 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__5_value;
static lean_once_cell_t lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__6;
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy___closed__0 = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy___closed__0_value;
LEAN_EXPORT const lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy = (const lean_object*)&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy___closed__0_value;
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_adoptGroundState(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_areLedgersSeparatedBool(lean_object* v_st_125_){
_start:
{
lean_object* v_vPair_126_; lean_object* v_vNuc_127_; uint8_t v___x_128_; 
v_vPair_126_ = lean_ctor_get(v_st_125_, 0);
v_vNuc_127_ = lean_ctor_get(v_st_125_, 1);
v___x_128_ = lean_nat_dec_eq(v_vPair_126_, v_vNuc_127_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = 1;
return v___x_129_;
}
else
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_areLedgersSeparatedBool___boxed(lean_object* v_st_131_){
_start:
{
uint8_t v_res_132_; lean_object* v_r_133_; 
v_res_132_ = lp_Echonomics_Echonomics_EnergyLedger_areLedgersSeparatedBool(v_st_131_);
lean_dec_ref(v_st_131_);
v_r_133_ = lean_box(v_res_132_);
return v_r_133_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated(lean_object* v_st_134_){
_start:
{
lean_object* v_vPair_135_; lean_object* v_vNuc_136_; uint8_t v___x_137_; 
v_vPair_135_ = lean_ctor_get(v_st_134_, 0);
v_vNuc_136_ = lean_ctor_get(v_st_134_, 1);
v___x_137_ = lean_nat_dec_eq(v_vPair_135_, v_vNuc_136_);
if (v___x_137_ == 0)
{
uint8_t v___x_138_; 
v___x_138_ = 1;
return v___x_138_;
}
else
{
uint8_t v___x_139_; 
v___x_139_ = 0;
return v___x_139_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated___boxed(lean_object* v_st_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated(v_st_140_);
lean_dec_ref(v_st_140_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_isGroundState(lean_object* v_stBest_143_, lean_object* v_stOther_144_){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v___x_145_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_stBest_143_);
v___x_146_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_stOther_144_);
v___x_147_ = lean_int_dec_le(v___x_145_, v___x_146_);
lean_dec(v___x_146_);
lean_dec(v___x_145_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_isGroundState___boxed(lean_object* v_stBest_148_, lean_object* v_stOther_149_){
_start:
{
uint8_t v_res_150_; lean_object* v_r_151_; 
v_res_150_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v_stBest_148_, v_stOther_149_);
v_r_151_ = lean_box(v_res_150_);
return v_r_151_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_minEnergyPair(lean_object* v_a_152_, lean_object* v_b_153_){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; uint8_t v___x_156_; 
lean_inc_ref(v_a_152_);
v___x_154_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_a_152_);
lean_inc_ref(v_b_153_);
v___x_155_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_b_153_);
v___x_156_ = lean_int_dec_le(v___x_154_, v___x_155_);
lean_dec(v___x_155_);
lean_dec(v___x_154_);
if (v___x_156_ == 0)
{
lean_dec_ref(v_a_152_);
return v_b_153_;
}
else
{
lean_dec_ref(v_b_153_);
return v_a_152_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_minOfList(lean_object* v_x_159_){
_start:
{
if (lean_obj_tag(v_x_159_) == 0)
{
lean_object* v___x_160_; 
v___x_160_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_minOfList___closed__0));
return v___x_160_;
}
else
{
lean_object* v_head_161_; lean_object* v_tail_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_head_161_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_head_161_);
v_tail_162_ = lean_ctor_get(v_x_159_, 1);
lean_inc(v_tail_162_);
lean_dec_ref_known(v_x_159_, 2);
v___x_163_ = lp_Echonomics_Echonomics_EnergyLedger_minOfList(v_tail_162_);
v___x_164_ = lp_Echonomics_Echonomics_EnergyLedger_minEnergyPair(v_head_161_, v___x_163_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_EnergyLedger_0__Echonomics_EnergyLedger_minOfList_match__1_splitter___redArg(lean_object* v_x_165_, lean_object* v_h__1_166_, lean_object* v_h__2_167_){
_start:
{
if (lean_obj_tag(v_x_165_) == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_dec(v_h__2_167_);
v___x_168_ = lean_box(0);
v___x_169_ = lean_apply_1(v_h__1_166_, v___x_168_);
return v___x_169_;
}
else
{
lean_object* v_head_170_; lean_object* v_tail_171_; lean_object* v___x_172_; 
lean_dec(v_h__1_166_);
v_head_170_ = lean_ctor_get(v_x_165_, 0);
lean_inc(v_head_170_);
v_tail_171_ = lean_ctor_get(v_x_165_, 1);
lean_inc(v_tail_171_);
lean_dec_ref_known(v_x_165_, 2);
v___x_172_ = lean_apply_2(v_h__2_167_, v_head_170_, v_tail_171_);
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_EnergyLedger_0__Echonomics_EnergyLedger_minOfList_match__1_splitter(lean_object* v_motive_173_, lean_object* v_x_174_, lean_object* v_h__1_175_, lean_object* v_h__2_176_){
_start:
{
if (lean_obj_tag(v_x_174_) == 0)
{
lean_object* v___x_177_; lean_object* v___x_178_; 
lean_dec(v_h__2_176_);
v___x_177_ = lean_box(0);
v___x_178_ = lean_apply_1(v_h__1_175_, v___x_177_);
return v___x_178_;
}
else
{
lean_object* v_head_179_; lean_object* v_tail_180_; lean_object* v___x_181_; 
lean_dec(v_h__1_175_);
v_head_179_ = lean_ctor_get(v_x_174_, 0);
lean_inc(v_head_179_);
v_tail_180_ = lean_ctor_get(v_x_174_, 1);
lean_inc(v_tail_180_);
lean_dec_ref_known(v_x_174_, 2);
v___x_181_ = lean_apply_2(v_h__2_176_, v_head_179_, v_tail_180_);
return v___x_181_;
}
}
}
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_unsigned_to_nat(13u);
v___x_192_ = lean_nat_to_int(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = lean_unsigned_to_nat(21u);
v___x_197_ = lean_nat_to_int(v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_unsigned_to_nat(10u);
v___x_202_ = lean_nat_to_int(v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg(lean_object* v_x_203_){
_start:
{
lean_object* v_headcount_204_; lean_object* v_degenerateSetSize_205_; lean_object* v_period_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; uint8_t v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v_headcount_204_ = lean_ctor_get(v_x_203_, 0);
lean_inc(v_headcount_204_);
v_degenerateSetSize_205_ = lean_ctor_get(v_x_203_, 1);
lean_inc(v_degenerateSetSize_205_);
v_period_206_ = lean_ctor_get(v_x_203_, 2);
lean_inc(v_period_206_);
lean_dec_ref(v_x_203_);
v___x_207_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5));
v___x_208_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__3));
v___x_209_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__4, &lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__4_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__4);
v___x_210_ = l_Nat_reprFast(v_headcount_204_);
v___x_211_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
v___x_212_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_209_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = 0;
v___x_214_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_214_, 0, v___x_212_);
lean_ctor_set_uint8(v___x_214_, sizeof(void*)*1, v___x_213_);
v___x_215_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_208_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__9));
v___x_217_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_217_, 0, v___x_215_);
lean_ctor_set(v___x_217_, 1, v___x_216_);
v___x_218_ = lean_box(1);
v___x_219_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__6));
v___x_221_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
lean_ctor_set(v___x_222_, 1, v___x_207_);
v___x_223_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__7, &lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__7_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__7);
v___x_224_ = l_Nat_reprFast(v_degenerateSetSize_205_);
v___x_225_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
v___x_226_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_223_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set_uint8(v___x_227_, sizeof(void*)*1, v___x_213_);
v___x_228_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_222_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v___x_216_);
v___x_230_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
lean_ctor_set(v___x_230_, 1, v___x_218_);
v___x_231_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__9));
v___x_232_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_230_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v___x_207_);
v___x_234_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10, &lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10);
v___x_235_ = l_Nat_reprFast(v_period_206_);
v___x_236_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
v___x_237_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_234_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*1, v___x_213_);
v___x_239_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_233_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15, &lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15);
v___x_241_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__16));
v___x_242_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
lean_ctor_set(v___x_242_, 1, v___x_239_);
v___x_243_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__17));
v___x_244_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_240_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*1, v___x_213_);
return v___x_246_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr(lean_object* v_x_247_, lean_object* v_prec_248_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg(v_x_247_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___boxed(lean_object* v_x_250_, lean_object* v_prec_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr(v_x_250_, v_prec_251_);
lean_dec(v_prec_251_);
return v_res_252_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame_decEq(lean_object* v_x_255_, lean_object* v_x_256_){
_start:
{
lean_object* v_headcount_257_; lean_object* v_degenerateSetSize_258_; lean_object* v_period_259_; lean_object* v_headcount_260_; lean_object* v_degenerateSetSize_261_; lean_object* v_period_262_; uint8_t v___x_263_; 
v_headcount_257_ = lean_ctor_get(v_x_255_, 0);
v_degenerateSetSize_258_ = lean_ctor_get(v_x_255_, 1);
v_period_259_ = lean_ctor_get(v_x_255_, 2);
v_headcount_260_ = lean_ctor_get(v_x_256_, 0);
v_degenerateSetSize_261_ = lean_ctor_get(v_x_256_, 1);
v_period_262_ = lean_ctor_get(v_x_256_, 2);
v___x_263_ = lean_nat_dec_eq(v_headcount_257_, v_headcount_260_);
if (v___x_263_ == 0)
{
return v___x_263_;
}
else
{
uint8_t v___x_264_; 
v___x_264_ = lean_nat_dec_eq(v_degenerateSetSize_258_, v_degenerateSetSize_261_);
if (v___x_264_ == 0)
{
return v___x_264_;
}
else
{
uint8_t v___x_265_; 
v___x_265_ = lean_nat_dec_eq(v_period_259_, v_period_262_);
return v___x_265_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame_decEq___boxed(lean_object* v_x_266_, lean_object* v_x_267_){
_start:
{
uint8_t v_res_268_; lean_object* v_r_269_; 
v_res_268_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame_decEq(v_x_266_, v_x_267_);
lean_dec_ref(v_x_267_);
lean_dec_ref(v_x_266_);
v_r_269_ = lean_box(v_res_268_);
return v_r_269_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame(lean_object* v_x_270_, lean_object* v_x_271_){
_start:
{
uint8_t v___x_272_; 
v___x_272_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame_decEq(v_x_270_, v_x_271_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame___boxed(lean_object* v_x_273_, lean_object* v_x_274_){
_start:
{
uint8_t v_res_275_; lean_object* v_r_276_; 
v_res_275_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqLedgerFrame(v_x_273_, v_x_274_);
lean_dec_ref(v_x_274_);
lean_dec_ref(v_x_273_);
v_r_276_ = lean_box(v_res_275_);
return v_r_276_;
}
}
static lean_object* _init_lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_unsigned_to_nat(16u);
v___x_290_ = lean_nat_to_int(v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg(lean_object* v_x_291_){
_start:
{
lean_object* v_ledger_292_; lean_object* v_multiplicity_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_327_; 
v_ledger_292_ = lean_ctor_get(v_x_291_, 0);
v_multiplicity_293_ = lean_ctor_get(v_x_291_, 1);
v_isSharedCheck_327_ = !lean_is_exclusive(v_x_291_);
if (v_isSharedCheck_327_ == 0)
{
v___x_295_ = v_x_291_;
v_isShared_296_ = v_isSharedCheck_327_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_multiplicity_293_);
lean_inc(v_ledger_292_);
lean_dec(v_x_291_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_327_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_297_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__5));
v___x_298_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__3));
v___x_299_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10, &lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprLedgerFrame_repr___redArg___closed__10);
v___x_300_ = lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg(v_ledger_292_);
if (v_isShared_296_ == 0)
{
lean_ctor_set_tag(v___x_295_, 4);
lean_ctor_set(v___x_295_, 1, v___x_300_);
lean_ctor_set(v___x_295_, 0, v___x_299_);
v___x_302_ = v___x_295_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_300_);
v___x_302_ = v_reuseFailAlloc_326_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
uint8_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; 
v___x_303_ = 0;
v___x_304_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_304_, 0, v___x_302_);
lean_ctor_set_uint8(v___x_304_, sizeof(void*)*1, v___x_303_);
v___x_305_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_298_);
lean_ctor_set(v___x_305_, 1, v___x_304_);
v___x_306_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__9));
v___x_307_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_307_, 0, v___x_305_);
lean_ctor_set(v___x_307_, 1, v___x_306_);
v___x_308_ = lean_box(1);
v___x_309_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_307_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__5));
v___x_311_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_309_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
v___x_312_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
lean_ctor_set(v___x_312_, 1, v___x_297_);
v___x_313_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__6, &lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__6_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg___closed__6);
v___x_314_ = l_Nat_reprFast(v_multiplicity_293_);
v___x_315_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
v___x_316_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_313_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_317_, 0, v___x_316_);
lean_ctor_set_uint8(v___x_317_, sizeof(void*)*1, v___x_303_);
v___x_318_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_312_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = lean_obj_once(&lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15, &lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15_once, _init_lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__15);
v___x_320_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__16));
v___x_321_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_321_, 0, v___x_320_);
lean_ctor_set(v___x_321_, 1, v___x_318_);
v___x_322_ = ((lean_object*)(lp_Echonomics_Echonomics_EnergyLedger_instReprEnergyState_repr___redArg___closed__17));
v___x_323_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_321_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v___x_324_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_324_, 0, v___x_319_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
v___x_325_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_325_, 0, v___x_324_);
lean_ctor_set_uint8(v___x_325_, sizeof(void*)*1, v___x_303_);
return v___x_325_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr(lean_object* v_x_328_, lean_object* v_prec_329_){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___redArg(v_x_328_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr___boxed(lean_object* v_x_331_, lean_object* v_prec_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = lp_Echonomics_Echonomics_EnergyLedger_instReprOccupancy_repr(v_x_331_, v_prec_332_);
lean_dec(v_prec_332_);
return v_res_333_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy_decEq(lean_object* v_x_336_, lean_object* v_x_337_){
_start:
{
lean_object* v_ledger_338_; lean_object* v_multiplicity_339_; lean_object* v_ledger_340_; lean_object* v_multiplicity_341_; uint8_t v___x_342_; 
v_ledger_338_ = lean_ctor_get(v_x_336_, 0);
v_multiplicity_339_ = lean_ctor_get(v_x_336_, 1);
v_ledger_340_ = lean_ctor_get(v_x_337_, 0);
v_multiplicity_341_ = lean_ctor_get(v_x_337_, 1);
v___x_342_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqEnergyState_decEq(v_ledger_338_, v_ledger_340_);
if (v___x_342_ == 0)
{
return v___x_342_;
}
else
{
uint8_t v___x_343_; 
v___x_343_ = lean_nat_dec_eq(v_multiplicity_339_, v_multiplicity_341_);
return v___x_343_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy_decEq___boxed(lean_object* v_x_344_, lean_object* v_x_345_){
_start:
{
uint8_t v_res_346_; lean_object* v_r_347_; 
v_res_346_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy_decEq(v_x_344_, v_x_345_);
lean_dec_ref(v_x_345_);
lean_dec_ref(v_x_344_);
v_r_347_ = lean_box(v_res_346_);
return v_r_347_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy(lean_object* v_x_348_, lean_object* v_x_349_){
_start:
{
uint8_t v___x_350_; 
v___x_350_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy_decEq(v_x_348_, v_x_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy___boxed(lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
uint8_t v_res_353_; lean_object* v_r_354_; 
v_res_353_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableEqOccupancy(v_x_351_, v_x_352_);
lean_dec_ref(v_x_352_);
lean_dec_ref(v_x_351_);
v_r_354_ = lean_box(v_res_353_);
return v_r_354_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_EnergyLedger_adoptGroundState(lean_object* v_a_355_, lean_object* v_b_356_){
_start:
{
lean_object* v_ledger_357_; lean_object* v_ledger_358_; lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v_ledger_357_ = lean_ctor_get(v_a_355_, 0);
v_ledger_358_ = lean_ctor_get(v_b_356_, 0);
lean_inc_ref(v_ledger_357_);
v___x_359_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_ledger_357_);
lean_inc_ref(v_ledger_358_);
v___x_360_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v_ledger_358_);
v___x_361_ = lean_int_dec_le(v___x_359_, v___x_360_);
lean_dec(v___x_360_);
lean_dec(v___x_359_);
if (v___x_361_ == 0)
{
lean_dec_ref(v_a_355_);
return v_b_356_;
}
else
{
lean_dec_ref(v_b_356_);
return v_a_355_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_HundianOccupancy(uint8_t builtin);
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
res = initialize_Echonomics_Echonomics_HundianOccupancy(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
