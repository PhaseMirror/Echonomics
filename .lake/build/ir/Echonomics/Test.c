// Lean compiler output
// Module: Echonomics.Test
// Imports: public import Init public meta import Init public import Echonomics.Core public import Echonomics.Proofs public import Echonomics.HundianOccupancy public import Echonomics.CivicDunaGate public import Echonomics.UorPrimeGeometry public import Echonomics.EnergyLedger public import Echonomics.XiConstitutionLicense public import Echonomics.LambdaProof public import Echonomics.HundianCodebookRunbook public import Echonomics.CivicInfrastructureSpec public import Echonomics.SocialPhysicsParts public import Echonomics.BuurtzorgModel public import Echonomics.TrifectaProtocolReview
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
lean_object* lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lp_Echonomics_Echonomics_HundianOccupancy_gateMultiplicityDelta(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_BuurtzorgModel_envelopeCovers90Days(lean_object*, lean_object*);
lean_object* lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(lean_object*);
uint8_t lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(lean_object*);
extern lean_object* lp_Echonomics_Echonomics_TrifectaProtocolReview_acceptedAdrIds;
uint8_t lp_Echonomics_Echonomics_TrifectaProtocolReview_isReviewCoverageComplete(lean_object*);
uint8_t lp_Echonomics_Echonomics_BuurtzorgModel_isEscalationAllowed(lean_object*);
uint8_t lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated(lean_object*);
uint8_t lp_Echonomics_Echonomics_BuurtzorgModel_isTeamCapacityValid(lean_object*);
lean_object* lp_Echonomics_Echonomics_SocialPhysicsParts_spinTagForOccupant(lean_object*);
uint8_t lp_Echonomics_Echonomics_Core_instDecidableEqSpinTag(uint8_t, uint8_t);
uint8_t lp_Echonomics_Echonomics_CivicInfrastructureSpec_isMaterialAsset(lean_object*, uint8_t, uint8_t, lean_object*);
uint8_t lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(lean_object*);
lean_object* lp_Echonomics_Echonomics_EnergyLedger_minOfList(lean_object*);
uint8_t lp_Echonomics_Echonomics_EnergyLedger_isGroundState(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_BuurtzorgModel_isOverheadWithinTarget(lean_object*);
uint8_t lp_Echonomics_Echonomics_TrifectaProtocolReview_attestValidator(lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_isXiCertified(lean_object*, lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_Proofs_isValidTransition(uint8_t, uint8_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_isLawfulRecursion(lean_object*);
uint8_t lp_Echonomics_Echonomics_CivicDunaGate_isQuorumReached(lean_object*);
lean_object* lp_Echonomics_Echonomics_SocialPhysicsParts_groundStateMultiplicity(lean_object*);
uint8_t lp_Echonomics_Echonomics_UorPrimeGeometry_isPrime(lean_object*);
uint8_t lp_Echonomics_Echonomics_SocialPhysicsParts_areLedgersSeparatedBool(lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_isLicenseGranted(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_Proofs_isGateRej(lean_object*);
uint8_t lp_Echonomics_Echonomics_TrifectaProtocolReview_isTripartiteConsensus(lean_object*);
uint8_t lp_Echonomics_Echonomics_CivicDunaGate_evaluateConstitutionalGate(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(lean_object*, lean_object*, uint8_t);
uint8_t lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_Proofs_isGateOk(lean_object*);
uint8_t lp_Echonomics_Echonomics_CivicDunaGate_instDecidableEqConstitutionalDecision(uint8_t, uint8_t);
uint8_t lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(lean_object*);
uint8_t lp_Echonomics_Echonomics_TrifectaProtocolReview_instDecidableEqAttestationResult(uint8_t, uint8_t);
uint8_t lp_Echonomics_Echonomics_TrifectaProtocolReview_isAuditComplete(lean_object*);
uint8_t lp_Echonomics_Echonomics_TrifectaProtocolReview_isContractive(lean_object*);
uint8_t lp_Echonomics_Echonomics_BuurtzorgModel_isNonCoercive(lean_object*);
uint8_t lp_Echonomics_Echonomics_BuurtzorgModel_isMappingValid(lean_object*, lean_object*);
lean_object* lp_Echonomics_Echonomics_SocialPhysicsParts_totalEnergy(lean_object*);
uint8_t lp_Echonomics_Echonomics_SocialPhysicsParts_isGroundState(lean_object*, lean_object*);
extern lean_object* lp_Echonomics_Echonomics_BuurtzorgModel_allVirtues;
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lp_Echonomics_Echonomics_SocialPhysicsParts_isPairingLegalSt(lean_object*);
uint8_t lp_Echonomics_Echonomics_SocialPhysicsParts_isPairingLegal(lean_object*);
uint8_t lp_Echonomics_Echonomics_SocialPhysicsParts_isSlotCapacityValid(lean_object*);
lean_object* lp_Echonomics_Echonomics_XiConstitutionLicense_cslGatedStep(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_Echonomics_Echonomics_XiConstitutionLicense_measureDrift(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_instDecidableEqXiState_decEq(lean_object*, lean_object*);
lean_object* lp_Echonomics_Echonomics_XiConstitutionLicense_certifiedGatedStep(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(lean_object*);
extern lean_object* lp_Echonomics_Echonomics_CivicInfrastructureSpec_allL0Invariants;
uint8_t lp_Echonomics_Echonomics_CivicInfrastructureSpec_isEquityPmcpFirewalled(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_evaluateCslGate(lean_object*);
uint8_t lp_Echonomics_Echonomics_XiConstitutionLicense_flowCertificates(lean_object*);
uint8_t lp_Echonomics_Echonomics_UorPrimeGeometry_evaluateConservationGate(lean_object*);
uint8_t lp_Echonomics_Echonomics_UorPrimeGeometry_instDecidableEqConservationDecision(uint8_t, uint8_t);
uint8_t lp_Echonomics_Echonomics_UorPrimeGeometry_isPrimeLocked(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Option_instBEq_beq___at___00main_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Option_instBEq_beq___at___00main_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_Echonomics_List_all___at___00main_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(15) << 1) | 1))}};
static const lean_object* lp_Echonomics_List_all___at___00main_spec__1___closed__0 = (const lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__0_value;
static const lean_ctor_object lp_Echonomics_List_all___at___00main_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* lp_Echonomics_List_all___at___00main_spec__1___closed__1 = (const lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__1_value;
static const lean_ctor_object lp_Echonomics_List_all___at___00main_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_Echonomics_List_all___at___00main_spec__1___closed__2 = (const lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__2_value;
static const lean_ctor_object lp_Echonomics_List_all___at___00main_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_List_all___at___00main_spec__1___closed__3 = (const lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__3_value;
static const lean_ctor_object lp_Echonomics_List_all___at___00main_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__1_value),((lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__3_value)}};
static const lean_object* lp_Echonomics_List_all___at___00main_spec__1___closed__4 = (const lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__4_value;
static const lean_ctor_object lp_Echonomics_List_all___at___00main_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__0_value),((lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__4_value)}};
static const lean_object* lp_Echonomics_List_all___at___00main_spec__1___closed__5 = (const lean_object*)&lp_Echonomics_List_all___at___00main_spec__1___closed__5_value;
static lean_once_cell_t lp_Echonomics_List_all___at___00main_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_List_all___at___00main_spec__1___closed__6;
LEAN_EXPORT uint8_t lp_Echonomics_List_all___at___00main_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_List_all___at___00main_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_Echonomics_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "✗ [FAIL] ADR-0003 prime-locked conservation test failed"};
static const lean_object* lp_Echonomics_main___closed__0 = (const lean_object*)&lp_Echonomics_main___closed__0_value;
static const lean_ctor_object lp_Echonomics_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__0_value)}};
static const lean_object* lp_Echonomics_main___closed__1 = (const lean_object*)&lp_Echonomics_main___closed__1_value;
static const lean_string_object lp_Echonomics_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 52, .m_data = "✗ [FAIL] ADR-0004 energy sign convention test failed"};
static const lean_object* lp_Echonomics_main___closed__2 = (const lean_object*)&lp_Echonomics_main___closed__2_value;
static const lean_ctor_object lp_Echonomics_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__2_value)}};
static const lean_object* lp_Echonomics_main___closed__3 = (const lean_object*)&lp_Echonomics_main___closed__3_value;
static const lean_string_object lp_Echonomics_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 54, .m_data = "✗ [FAIL] ADR-0004 separated-ledger mandate test failed"};
static const lean_object* lp_Echonomics_main___closed__4 = (const lean_object*)&lp_Echonomics_main___closed__4_value;
static const lean_ctor_object lp_Echonomics_main___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__4_value)}};
static const lean_object* lp_Echonomics_main___closed__5 = (const lean_object*)&lp_Echonomics_main___closed__5_value;
static const lean_string_object lp_Echonomics_main___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "✗ [FAIL] ADR-0004 multiplicity independence test failed"};
static const lean_object* lp_Echonomics_main___closed__6 = (const lean_object*)&lp_Echonomics_main___closed__6_value;
static const lean_ctor_object lp_Echonomics_main___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__6_value)}};
static const lean_object* lp_Echonomics_main___closed__7 = (const lean_object*)&lp_Echonomics_main___closed__7_value;
static const lean_string_object lp_Echonomics_main___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 44, .m_data = "✗ [FAIL] ADR-0005 Ξ-Constitution test failed"};
static const lean_object* lp_Echonomics_main___closed__8 = (const lean_object*)&lp_Echonomics_main___closed__8_value;
static const lean_ctor_object lp_Echonomics_main___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__8_value)}};
static const lean_object* lp_Echonomics_main___closed__9 = (const lean_object*)&lp_Echonomics_main___closed__9_value;
static const lean_string_object lp_Echonomics_main___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 57, .m_data = "✗ [FAIL] ADR-0005 transition lawful-recursion test failed"};
static const lean_object* lp_Echonomics_main___closed__10 = (const lean_object*)&lp_Echonomics_main___closed__10_value;
static const lean_ctor_object lp_Echonomics_main___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__10_value)}};
static const lean_object* lp_Echonomics_main___closed__11 = (const lean_object*)&lp_Echonomics_main___closed__11_value;
static const lean_string_object lp_Echonomics_main___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0005 NO-OP silence-clause test failed"};
static const lean_object* lp_Echonomics_main___closed__12 = (const lean_object*)&lp_Echonomics_main___closed__12_value;
static const lean_ctor_object lp_Echonomics_main___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__12_value)}};
static const lean_object* lp_Echonomics_main___closed__13 = (const lean_object*)&lp_Echonomics_main___closed__13_value;
static const lean_string_object lp_Echonomics_main___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 60, .m_data = "✗ [FAIL] ADR-0005 certified composite transition test failed"};
static const lean_object* lp_Echonomics_main___closed__14 = (const lean_object*)&lp_Echonomics_main___closed__14_value;
static const lean_ctor_object lp_Echonomics_main___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__14_value)}};
static const lean_object* lp_Echonomics_main___closed__15 = (const lean_object*)&lp_Echonomics_main___closed__15_value;
static const lean_string_object lp_Echonomics_main___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 45, .m_data = "✗ [FAIL] ADR-0014 term-order gate test failed"};
static const lean_object* lp_Echonomics_main___closed__16 = (const lean_object*)&lp_Echonomics_main___closed__16_value;
static const lean_ctor_object lp_Echonomics_main___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__16_value)}};
static const lean_object* lp_Echonomics_main___closed__17 = (const lean_object*)&lp_Echonomics_main___closed__17_value;
static const lean_string_object lp_Echonomics_main___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "✗ [FAIL] ADR-0014 ground state multiplicity test failed"};
static const lean_object* lp_Echonomics_main___closed__18 = (const lean_object*)&lp_Echonomics_main___closed__18_value;
static const lean_ctor_object lp_Echonomics_main___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__18_value)}};
static const lean_object* lp_Echonomics_main___closed__19 = (const lean_object*)&lp_Echonomics_main___closed__19_value;
static const lean_string_object lp_Echonomics_main___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 47, .m_data = "✗ [FAIL] ADR-0015 separated ledgers test failed"};
static const lean_object* lp_Echonomics_main___closed__20 = (const lean_object*)&lp_Echonomics_main___closed__20_value;
static const lean_ctor_object lp_Echonomics_main___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__20_value)}};
static const lean_object* lp_Echonomics_main___closed__21 = (const lean_object*)&lp_Echonomics_main___closed__21_value;
static const lean_string_object lp_Echonomics_main___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0019..0021 Trifecta test failed"};
static const lean_object* lp_Echonomics_main___closed__22 = (const lean_object*)&lp_Echonomics_main___closed__22_value;
static const lean_ctor_object lp_Echonomics_main___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__22_value)}};
static const lean_object* lp_Echonomics_main___closed__23 = (const lean_object*)&lp_Echonomics_main___closed__23_value;
static const lean_string_object lp_Echonomics_main___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 52, .m_data = "✗ [FAIL] ADR-0020 spectral contractivity test failed"};
static const lean_object* lp_Echonomics_main___closed__24 = (const lean_object*)&lp_Echonomics_main___closed__24_value;
static const lean_ctor_object lp_Echonomics_main___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__24_value)}};
static const lean_object* lp_Echonomics_main___closed__25 = (const lean_object*)&lp_Echonomics_main___closed__25_value;
static const lean_string_object lp_Echonomics_main___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 41, .m_data = "✗ [FAIL] ADR-0021 audit trail test failed"};
static const lean_object* lp_Echonomics_main___closed__26 = (const lean_object*)&lp_Echonomics_main___closed__26_value;
static const lean_ctor_object lp_Echonomics_main___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__26_value)}};
static const lean_object* lp_Echonomics_main___closed__27 = (const lean_object*)&lp_Echonomics_main___closed__27_value;
static const lean_string_object lp_Echonomics_main___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0018 coaching gates test failed"};
static const lean_object* lp_Echonomics_main___closed__28 = (const lean_object*)&lp_Echonomics_main___closed__28_value;
static const lean_ctor_object lp_Echonomics_main___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__28_value)}};
static const lean_object* lp_Echonomics_main___closed__29 = (const lean_object*)&lp_Echonomics_main___closed__29_value;
static const lean_string_object lp_Echonomics_main___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0017 integration schema test failed"};
static const lean_object* lp_Echonomics_main___closed__30 = (const lean_object*)&lp_Echonomics_main___closed__30_value;
static const lean_ctor_object lp_Echonomics_main___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__30_value)}};
static const lean_object* lp_Echonomics_main___closed__31 = (const lean_object*)&lp_Echonomics_main___closed__31_value;
static const lean_string_object lp_Echonomics_main___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 46, .m_data = "✗ [FAIL] ADR-0016 virtues/overhead test failed"};
static const lean_object* lp_Echonomics_main___closed__32 = (const lean_object*)&lp_Echonomics_main___closed__32_value;
static const lean_ctor_object lp_Echonomics_main___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__32_value)}};
static const lean_object* lp_Echonomics_main___closed__33 = (const lean_object*)&lp_Echonomics_main___closed__33_value;
static const lean_string_object lp_Echonomics_main___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0013 Pauli capacity test failed"};
static const lean_object* lp_Echonomics_main___closed__34 = (const lean_object*)&lp_Echonomics_main___closed__34_value;
static const lean_ctor_object lp_Echonomics_main___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__34_value)}};
static const lean_object* lp_Echonomics_main___closed__35 = (const lean_object*)&lp_Echonomics_main___closed__35_value;
static const lean_string_object lp_Echonomics_main___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0012 material asset floor test failed"};
static const lean_object* lp_Echonomics_main___closed__36 = (const lean_object*)&lp_Echonomics_main___closed__36_value;
static const lean_ctor_object lp_Echonomics_main___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__36_value)}};
static const lean_object* lp_Echonomics_main___closed__37 = (const lean_object*)&lp_Echonomics_main___closed__37_value;
static const lean_string_object lp_Echonomics_main___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "=== Executing Echonomics Lean 4 Formal Test Suite ==="};
static const lean_object* lp_Echonomics_main___closed__38 = (const lean_object*)&lp_Echonomics_main___closed__38_value;
static lean_once_cell_t lp_Echonomics_main___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__39;
static lean_once_cell_t lp_Echonomics_main___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__40;
static const lean_string_object lp_Echonomics_main___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "✗ [FAIL] ADR-0001 Multiplicity test failed"};
static const lean_object* lp_Echonomics_main___closed__41 = (const lean_object*)&lp_Echonomics_main___closed__41_value;
static const lean_ctor_object lp_Echonomics_main___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__41_value)}};
static const lean_object* lp_Echonomics_main___closed__42 = (const lean_object*)&lp_Echonomics_main___closed__42_value;
static const lean_string_object lp_Echonomics_main___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Half-fill max multiplicity M = |D| + 1 verified"};
static const lean_object* lp_Echonomics_main___closed__43 = (const lean_object*)&lp_Echonomics_main___closed__43_value;
static lean_once_cell_t lp_Echonomics_main___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__44;
static lean_once_cell_t lp_Echonomics_main___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__45;
static const lean_string_object lp_Echonomics_main___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 40, .m_data = "✗ [FAIL] ADR-0001 Pauli gate test failed"};
static const lean_object* lp_Echonomics_main___closed__46 = (const lean_object*)&lp_Echonomics_main___closed__46_value;
static const lean_ctor_object lp_Echonomics_main___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__46_value)}};
static const lean_object* lp_Echonomics_main___closed__47 = (const lean_object*)&lp_Echonomics_main___closed__47_value;
static const lean_string_object lp_Echonomics_main___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Pauli exclusion 3rd occupant rejection verified"};
static const lean_object* lp_Echonomics_main___closed__48 = (const lean_object*)&lp_Echonomics_main___closed__48_value;
static lean_once_cell_t lp_Echonomics_main___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__49;
static lean_once_cell_t lp_Echonomics_main___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__50;
static const lean_string_object lp_Echonomics_main___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0001 Non-degenerate gate test failed"};
static const lean_object* lp_Echonomics_main___closed__51 = (const lean_object*)&lp_Echonomics_main___closed__51_value;
static const lean_ctor_object lp_Echonomics_main___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__51_value)}};
static const lean_object* lp_Echonomics_main___closed__52 = (const lean_object*)&lp_Echonomics_main___closed__52_value;
static const lean_string_object lp_Echonomics_main___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 71, .m_data = "✓ [PASS] ADR-0001: Non-degenerate second occupant OK_HIERARCHY verified"};
static const lean_object* lp_Echonomics_main___closed__53 = (const lean_object*)&lp_Echonomics_main___closed__53_value;
static lean_once_cell_t lp_Echonomics_main___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__54;
static lean_once_cell_t lp_Echonomics_main___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__55;
static const lean_string_object lp_Echonomics_main___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 45, .m_data = "✗ [FAIL] ADR-0001 Term-order gate test failed"};
static const lean_object* lp_Echonomics_main___closed__56 = (const lean_object*)&lp_Echonomics_main___closed__56_value;
static const lean_ctor_object lp_Echonomics_main___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__56_value)}};
static const lean_object* lp_Echonomics_main___closed__57 = (const lean_object*)&lp_Echonomics_main___closed__57_value;
static const lean_string_object lp_Echonomics_main___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 69, .m_data = "✓ [PASS] ADR-0001: Term-order gate blocks pairing when U > 0 verified"};
static const lean_object* lp_Echonomics_main___closed__58 = (const lean_object*)&lp_Echonomics_main___closed__58_value;
static lean_once_cell_t lp_Echonomics_main___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__59;
static const lean_ctor_object lp_Echonomics_main___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_main___closed__60 = (const lean_object*)&lp_Echonomics_main___closed__60_value;
static lean_once_cell_t lp_Echonomics_main___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__61;
static const lean_string_object lp_Echonomics_main___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 43, .m_data = "✗ [FAIL] ADR-0001 Term-order OK test failed"};
static const lean_object* lp_Echonomics_main___closed__62 = (const lean_object*)&lp_Echonomics_main___closed__62_value;
static const lean_ctor_object lp_Echonomics_main___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__62_value)}};
static const lean_object* lp_Echonomics_main___closed__63 = (const lean_object*)&lp_Echonomics_main___closed__63_value;
static const lean_string_object lp_Echonomics_main___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 64, .m_data = "✓ [PASS] ADR-0001: Term-order allows pairing when U = 0 verified"};
static const lean_object* lp_Echonomics_main___closed__64 = (const lean_object*)&lp_Echonomics_main___closed__64_value;
static lean_once_cell_t lp_Echonomics_main___closed__65_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__65;
static const lean_ctor_object lp_Echonomics_main___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_main___closed__66 = (const lean_object*)&lp_Echonomics_main___closed__66_value;
static lean_once_cell_t lp_Echonomics_main___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__67;
static const lean_string_object lp_Echonomics_main___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 51, .m_data = "✗ [FAIL] ADR-0001 Empty degenerate gate test failed"};
static const lean_object* lp_Echonomics_main___closed__68 = (const lean_object*)&lp_Echonomics_main___closed__68_value;
static const lean_ctor_object lp_Echonomics_main___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__68_value)}};
static const lean_object* lp_Echonomics_main___closed__69 = (const lean_object*)&lp_Echonomics_main___closed__69_value;
static const lean_string_object lp_Echonomics_main___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Empty degenerate slot → OkSingle Alpha verified"};
static const lean_object* lp_Echonomics_main___closed__70 = (const lean_object*)&lp_Echonomics_main___closed__70_value;
static lean_once_cell_t lp_Echonomics_main___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__71;
static lean_once_cell_t lp_Echonomics_main___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__72;
static const lean_string_object lp_Echonomics_main___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "✗ [FAIL] ADR-0001 Empty non-degenerate gate test failed"};
static const lean_object* lp_Echonomics_main___closed__73 = (const lean_object*)&lp_Echonomics_main___closed__73_value;
static const lean_ctor_object lp_Echonomics_main___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__73_value)}};
static const lean_object* lp_Echonomics_main___closed__74 = (const lean_object*)&lp_Echonomics_main___closed__74_value;
static const lean_string_object lp_Echonomics_main___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 67, .m_data = "✓ [PASS] ADR-0001: Empty non-degenerate slot → OkHierarchy verified"};
static const lean_object* lp_Echonomics_main___closed__75 = (const lean_object*)&lp_Echonomics_main___closed__75_value;
static lean_once_cell_t lp_Echonomics_main___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__76;
static lean_once_cell_t lp_Echonomics_main___closed__77_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__77;
static const lean_string_object lp_Echonomics_main___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0001 Closed shell singlet test failed"};
static const lean_object* lp_Echonomics_main___closed__78 = (const lean_object*)&lp_Echonomics_main___closed__78_value;
static const lean_ctor_object lp_Echonomics_main___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__78_value)}};
static const lean_object* lp_Echonomics_main___closed__79 = (const lean_object*)&lp_Echonomics_main___closed__79_value;
static const lean_string_object lp_Echonomics_main___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 54, .m_data = "✓ [PASS] ADR-0001: Closed shell singlet M = 1 verified"};
static const lean_object* lp_Echonomics_main___closed__80 = (const lean_object*)&lp_Echonomics_main___closed__80_value;
static lean_once_cell_t lp_Echonomics_main___closed__81_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__81;
static lean_once_cell_t lp_Echonomics_main___closed__82_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__82;
static const lean_string_object lp_Echonomics_main___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0001 Pauli 4th occupant test failed"};
static const lean_object* lp_Echonomics_main___closed__83 = (const lean_object*)&lp_Echonomics_main___closed__83_value;
static const lean_ctor_object lp_Echonomics_main___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__83_value)}};
static const lean_object* lp_Echonomics_main___closed__84 = (const lean_object*)&lp_Echonomics_main___closed__84_value;
static const lean_string_object lp_Echonomics_main___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0001: Pauli exclusion 4th occupant rejection verified"};
static const lean_object* lp_Echonomics_main___closed__85 = (const lean_object*)&lp_Echonomics_main___closed__85_value;
static lean_once_cell_t lp_Echonomics_main___closed__86_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__86;
static lean_once_cell_t lp_Echonomics_main___closed__87_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__87;
static const lean_string_object lp_Echonomics_main___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 55, .m_data = "✗ [FAIL] ADR-0001 Multiplicity monotonicity test failed"};
static const lean_object* lp_Echonomics_main___closed__88 = (const lean_object*)&lp_Echonomics_main___closed__88_value;
static const lean_ctor_object lp_Echonomics_main___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__88_value)}};
static const lean_object* lp_Echonomics_main___closed__89 = (const lean_object*)&lp_Echonomics_main___closed__89_value;
static const lean_string_object lp_Echonomics_main___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 65, .m_data = "✓ [PASS] ADR-0001: Multiplicity monotonicity M(5) > M(3) verified"};
static const lean_object* lp_Echonomics_main___closed__90 = (const lean_object*)&lp_Echonomics_main___closed__90_value;
static lean_once_cell_t lp_Echonomics_main___closed__91_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__91;
static lean_once_cell_t lp_Echonomics_main___closed__92_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__92;
static const lean_string_object lp_Echonomics_main___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 46, .m_data = "✗ [FAIL] ADR-0001 Multiplicity > n test failed"};
static const lean_object* lp_Echonomics_main___closed__93 = (const lean_object*)&lp_Echonomics_main___closed__93_value;
static const lean_ctor_object lp_Echonomics_main___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__93_value)}};
static const lean_object* lp_Echonomics_main___closed__94 = (const lean_object*)&lp_Echonomics_main___closed__94_value;
static const lean_string_object lp_Echonomics_main___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 60, .m_data = "✓ [PASS] ADR-0001: Multiplicity always > n_unpaired verified"};
static const lean_object* lp_Echonomics_main___closed__95 = (const lean_object*)&lp_Echonomics_main___closed__95_value;
static lean_once_cell_t lp_Echonomics_main___closed__96_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__96;
static const lean_string_object lp_Echonomics_main___closed__97_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0001 Gate classification test failed"};
static const lean_object* lp_Echonomics_main___closed__97 = (const lean_object*)&lp_Echonomics_main___closed__97_value;
static const lean_ctor_object lp_Echonomics_main___closed__98_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__97_value)}};
static const lean_object* lp_Echonomics_main___closed__98 = (const lean_object*)&lp_Echonomics_main___closed__98_value;
static const lean_string_object lp_Echonomics_main___closed__99_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 60, .m_data = "✓ [PASS] ADR-0001: RejPauli classified as rejection verified"};
static const lean_object* lp_Echonomics_main___closed__99 = (const lean_object*)&lp_Echonomics_main___closed__99_value;
static lean_once_cell_t lp_Echonomics_main___closed__100_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__100;
static const lean_string_object lp_Echonomics_main___closed__101_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 52, .m_data = "✗ [FAIL] ADR-0001 Gate Ok classification test failed"};
static const lean_object* lp_Echonomics_main___closed__101 = (const lean_object*)&lp_Echonomics_main___closed__101_value;
static const lean_ctor_object lp_Echonomics_main___closed__102_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__101_value)}};
static const lean_object* lp_Echonomics_main___closed__102 = (const lean_object*)&lp_Echonomics_main___closed__102_value;
static const lean_string_object lp_Echonomics_main___closed__103_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 61, .m_data = "✓ [PASS] ADR-0001: OkSingle classified as acceptance verified"};
static const lean_object* lp_Echonomics_main___closed__103 = (const lean_object*)&lp_Echonomics_main___closed__103_value;
static lean_once_cell_t lp_Echonomics_main___closed__104_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__104;
static lean_once_cell_t lp_Echonomics_main___closed__105_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__105;
static const lean_string_object lp_Echonomics_main___closed__106_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0001 Multiplicity delta test failed"};
static const lean_object* lp_Echonomics_main___closed__106 = (const lean_object*)&lp_Echonomics_main___closed__106_value;
static const lean_ctor_object lp_Echonomics_main___closed__107_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__106_value)}};
static const lean_object* lp_Echonomics_main___closed__107 = (const lean_object*)&lp_Echonomics_main___closed__107_value;
static const lean_string_object lp_Echonomics_main___closed__108_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 59, .m_data = "✓ [PASS] ADR-0001: OkSingle multiplicity delta = 1 verified"};
static const lean_object* lp_Echonomics_main___closed__108 = (const lean_object*)&lp_Echonomics_main___closed__108_value;
static lean_once_cell_t lp_Echonomics_main___closed__109_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__109;
static lean_once_cell_t lp_Echonomics_main___closed__110_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__110;
static const lean_string_object lp_Echonomics_main___closed__111_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0001 RejPauli delta test failed"};
static const lean_object* lp_Echonomics_main___closed__111 = (const lean_object*)&lp_Echonomics_main___closed__111_value;
static const lean_ctor_object lp_Echonomics_main___closed__112_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__111_value)}};
static const lean_object* lp_Echonomics_main___closed__112 = (const lean_object*)&lp_Echonomics_main___closed__112_value;
static const lean_string_object lp_Echonomics_main___closed__113_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 59, .m_data = "✓ [PASS] ADR-0001: RejPauli multiplicity delta = 0 verified"};
static const lean_object* lp_Echonomics_main___closed__113 = (const lean_object*)&lp_Echonomics_main___closed__113_value;
static lean_once_cell_t lp_Echonomics_main___closed__114_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__114;
static const lean_string_object lp_Echonomics_main___closed__115_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0001 Lifecycle transition test failed"};
static const lean_object* lp_Echonomics_main___closed__115 = (const lean_object*)&lp_Echonomics_main___closed__115_value;
static const lean_ctor_object lp_Echonomics_main___closed__116_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__115_value)}};
static const lean_object* lp_Echonomics_main___closed__116 = (const lean_object*)&lp_Echonomics_main___closed__116_value;
static const lean_string_object lp_Echonomics_main___closed__117_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 61, .m_data = "✓ [PASS] ADR-0001: Lifecycle Proposed→Accepted valid verified"};
static const lean_object* lp_Echonomics_main___closed__117 = (const lean_object*)&lp_Echonomics_main___closed__117_value;
static lean_once_cell_t lp_Echonomics_main___closed__118_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__118;
static const lean_string_object lp_Echonomics_main___closed__119_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 78, .m_data = "✓ [PASS] ADR-0001: Lifecycle Deprecated→Accepted invalid (no revival) verified"};
static const lean_object* lp_Echonomics_main___closed__119 = (const lean_object*)&lp_Echonomics_main___closed__119_value;
static lean_once_cell_t lp_Echonomics_main___closed__120_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__120;
static const lean_string_object lp_Echonomics_main___closed__121_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 78, .m_data = "✓ [PASS] ADR-0001: Lifecycle Superseded→Accepted invalid (no revival) verified"};
static const lean_object* lp_Echonomics_main___closed__121 = (const lean_object*)&lp_Echonomics_main___closed__121_value;
static const lean_string_object lp_Echonomics_main___closed__122_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_Echonomics_main___closed__122 = (const lean_object*)&lp_Echonomics_main___closed__122_value;
static lean_once_cell_t lp_Echonomics_main___closed__123_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__123;
static const lean_string_object lp_Echonomics_main___closed__124_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 73, .m_data = "✓ [PASS] ADR-0021: Machine-checked audit trail & review coverage verified"};
static const lean_object* lp_Echonomics_main___closed__124 = (const lean_object*)&lp_Echonomics_main___closed__124_value;
static const lean_string_object lp_Echonomics_main___closed__125_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "=== All Echonomics Formal Lean 4 Tests Passed Cleanly ==="};
static const lean_object* lp_Echonomics_main___closed__125 = (const lean_object*)&lp_Echonomics_main___closed__125_value;
static const lean_string_object lp_Echonomics_main___closed__126_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 46, .m_data = "── ADR-0001 Formal Test Suite: 18/18 passed ──"};
static const lean_object* lp_Echonomics_main___closed__126 = (const lean_object*)&lp_Echonomics_main___closed__126_value;
static const lean_ctor_object lp_Echonomics_main___closed__127_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__127 = (const lean_object*)&lp_Echonomics_main___closed__127_value;
static lean_once_cell_t lp_Echonomics_main___closed__128_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__128;
static const lean_string_object lp_Echonomics_main___closed__129_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 39, .m_data = "✗ [FAIL] ADR-0002 DUNA Gate test failed"};
static const lean_object* lp_Echonomics_main___closed__129 = (const lean_object*)&lp_Echonomics_main___closed__129_value;
static const lean_ctor_object lp_Echonomics_main___closed__130_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__129_value)}};
static const lean_object* lp_Echonomics_main___closed__130 = (const lean_object*)&lp_Echonomics_main___closed__130_value;
static const lean_string_object lp_Echonomics_main___closed__131_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 87, .m_capacity = 87, .m_length = 84, .m_data = "✓ [PASS] ADR-0002: DUNA Constitutional Quorum & Vote Gate passed (quorum + majority)"};
static const lean_object* lp_Echonomics_main___closed__131 = (const lean_object*)&lp_Echonomics_main___closed__131_value;
static const lean_string_object lp_Echonomics_main___closed__132_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0002 fail-closed quorum test failed"};
static const lean_object* lp_Echonomics_main___closed__132 = (const lean_object*)&lp_Echonomics_main___closed__132_value;
static const lean_ctor_object lp_Echonomics_main___closed__133_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__132_value)}};
static const lean_object* lp_Echonomics_main___closed__133 = (const lean_object*)&lp_Echonomics_main___closed__133_value;
static const lean_ctor_object lp_Echonomics_main___closed__134_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100) << 1) | 1)),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__134 = (const lean_object*)&lp_Echonomics_main___closed__134_value;
static lean_once_cell_t lp_Echonomics_main___closed__135_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__135;
static const lean_string_object lp_Echonomics_main___closed__136_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 77, .m_data = "✓ [PASS] ADR-0002: Fail-closed quorum — sub-quorum proposal rejected verified"};
static const lean_object* lp_Echonomics_main___closed__136 = (const lean_object*)&lp_Echonomics_main___closed__136_value;
static const lean_ctor_object lp_Echonomics_main___closed__137_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__137 = (const lean_object*)&lp_Echonomics_main___closed__137_value;
static lean_once_cell_t lp_Echonomics_main___closed__138_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__138;
static const lean_string_object lp_Echonomics_main___closed__139_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 66, .m_data = "✓ [PASS] ADR-0002: Fail-closed tie — equal votes rejected verified"};
static const lean_object* lp_Echonomics_main___closed__139 = (const lean_object*)&lp_Echonomics_main___closed__139_value;
static const lean_ctor_object lp_Echonomics_main___closed__140_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100) << 1) | 1)),((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__140 = (const lean_object*)&lp_Echonomics_main___closed__140_value;
static lean_once_cell_t lp_Echonomics_main___closed__141_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__141;
static const lean_string_object lp_Echonomics_main___closed__142_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 71, .m_data = "✓ [PASS] ADR-0002: Quorum binds independently of vote majority verified"};
static const lean_object* lp_Echonomics_main___closed__142 = (const lean_object*)&lp_Echonomics_main___closed__142_value;
static lean_once_cell_t lp_Echonomics_main___closed__143_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__143;
static const lean_string_object lp_Echonomics_main___closed__144_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 54, .m_data = "✗ [FAIL] ADR-0002 constitutional gate Pass test failed"};
static const lean_object* lp_Echonomics_main___closed__144 = (const lean_object*)&lp_Echonomics_main___closed__144_value;
static const lean_ctor_object lp_Echonomics_main___closed__145_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__144_value)}};
static const lean_object* lp_Echonomics_main___closed__145 = (const lean_object*)&lp_Echonomics_main___closed__145_value;
static const lean_string_object lp_Echonomics_main___closed__146_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 83, .m_data = "✓ [PASS] ADR-0002: Constitutional gate classifies passing proposal as Pass verified"};
static const lean_object* lp_Echonomics_main___closed__146 = (const lean_object*)&lp_Echonomics_main___closed__146_value;
static lean_once_cell_t lp_Echonomics_main___closed__147_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__147;
static const lean_string_object lp_Echonomics_main___closed__148_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 59, .m_data = "✗ [FAIL] ADR-0002 constitutional gate RejQuorum test failed"};
static const lean_object* lp_Echonomics_main___closed__148 = (const lean_object*)&lp_Echonomics_main___closed__148_value;
static const lean_ctor_object lp_Echonomics_main___closed__149_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__148_value)}};
static const lean_object* lp_Echonomics_main___closed__149 = (const lean_object*)&lp_Echonomics_main___closed__149_value;
static const lean_string_object lp_Echonomics_main___closed__150_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 79, .m_data = "✓ [PASS] ADR-0002: Constitutional gate rejects sub-quorum as RejQuorum verified"};
static const lean_object* lp_Echonomics_main___closed__150 = (const lean_object*)&lp_Echonomics_main___closed__150_value;
static lean_once_cell_t lp_Echonomics_main___closed__151_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__151;
static const lean_string_object lp_Echonomics_main___closed__152_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 61, .m_data = "✗ [FAIL] ADR-0002 constitutional gate RejMajority test failed"};
static const lean_object* lp_Echonomics_main___closed__152 = (const lean_object*)&lp_Echonomics_main___closed__152_value;
static const lean_ctor_object lp_Echonomics_main___closed__153_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__152_value)}};
static const lean_object* lp_Echonomics_main___closed__153 = (const lean_object*)&lp_Echonomics_main___closed__153_value;
static const lean_string_object lp_Echonomics_main___closed__154_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 74, .m_data = "✓ [PASS] ADR-0002: Constitutional gate rejects tie as RejMajority verified"};
static const lean_object* lp_Echonomics_main___closed__154 = (const lean_object*)&lp_Echonomics_main___closed__154_value;
static const lean_ctor_object lp_Echonomics_main___closed__155_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(12) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__155 = (const lean_object*)&lp_Echonomics_main___closed__155_value;
static lean_once_cell_t lp_Echonomics_main___closed__156_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__156;
static const lean_string_object lp_Echonomics_main___closed__157_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0003 UOR Prime Geometry test failed"};
static const lean_object* lp_Echonomics_main___closed__157 = (const lean_object*)&lp_Echonomics_main___closed__157_value;
static const lean_ctor_object lp_Echonomics_main___closed__158_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__157_value)}};
static const lean_object* lp_Echonomics_main___closed__158 = (const lean_object*)&lp_Echonomics_main___closed__158_value;
static const lean_string_object lp_Echonomics_main___closed__159_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 65, .m_data = "✓ [PASS] ADR-0003: UOR Prime Geometry Conservation Bound verified"};
static const lean_object* lp_Echonomics_main___closed__159 = (const lean_object*)&lp_Echonomics_main___closed__159_value;
static const lean_string_object lp_Echonomics_main___closed__160_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 39, .m_data = "✗ [FAIL] ADR-0003 primality test failed"};
static const lean_object* lp_Echonomics_main___closed__160 = (const lean_object*)&lp_Echonomics_main___closed__160_value;
static const lean_ctor_object lp_Echonomics_main___closed__161_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__160_value)}};
static const lean_object* lp_Echonomics_main___closed__161 = (const lean_object*)&lp_Echonomics_main___closed__161_value;
static lean_once_cell_t lp_Echonomics_main___closed__162_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__162;
static lean_once_cell_t lp_Echonomics_main___closed__163_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__163;
static lean_once_cell_t lp_Echonomics_main___closed__164_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__164;
static lean_once_cell_t lp_Echonomics_main___closed__165_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__165;
static lean_once_cell_t lp_Echonomics_main___closed__166_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__166;
static lean_once_cell_t lp_Echonomics_main___closed__167_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__167;
static const lean_ctor_object lp_Echonomics_main___closed__168_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__168 = (const lean_object*)&lp_Echonomics_main___closed__168_value;
static const lean_ctor_object lp_Echonomics_main___closed__169_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_Echonomics_main___closed__168_value)}};
static const lean_object* lp_Echonomics_main___closed__169 = (const lean_object*)&lp_Echonomics_main___closed__169_value;
static const lean_ctor_object lp_Echonomics_main___closed__170_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__169_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__170 = (const lean_object*)&lp_Echonomics_main___closed__170_value;
static lean_once_cell_t lp_Echonomics_main___closed__171_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__171;
static const lean_ctor_object lp_Echonomics_main___closed__172_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1000) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__172 = (const lean_object*)&lp_Echonomics_main___closed__172_value;
static const lean_ctor_object lp_Echonomics_main___closed__173_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__172_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__173 = (const lean_object*)&lp_Echonomics_main___closed__173_value;
static lean_once_cell_t lp_Echonomics_main___closed__174_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__174;
static const lean_string_object lp_Echonomics_main___closed__175_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 74, .m_data = "✓ [PASS] ADR-0020: Spectral contractivity gate (zero vs identity) verified"};
static const lean_object* lp_Echonomics_main___closed__175 = (const lean_object*)&lp_Echonomics_main___closed__175_value;
static const lean_ctor_object lp_Echonomics_main___closed__176_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(14) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_main___closed__176 = (const lean_object*)&lp_Echonomics_main___closed__176_value;
static const lean_ctor_object lp_Echonomics_main___closed__177_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__176_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__177 = (const lean_object*)&lp_Echonomics_main___closed__177_value;
static const lean_string_object lp_Echonomics_main___closed__178_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 72, .m_data = "✓ [PASS] ADR-0019..0021: Trifecta Tripartite Consensus & Review verified"};
static const lean_object* lp_Echonomics_main___closed__178 = (const lean_object*)&lp_Echonomics_main___closed__178_value;
static const lean_ctor_object lp_Echonomics_main___closed__179_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__169_value),((lean_object*)&lp_Echonomics_main___closed__170_value)}};
static const lean_object* lp_Echonomics_main___closed__179 = (const lean_object*)&lp_Echonomics_main___closed__179_value;
static lean_once_cell_t lp_Echonomics_main___closed__180_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__180;
static lean_once_cell_t lp_Echonomics_main___closed__181_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__181;
static const lean_string_object lp_Echonomics_main___closed__182_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = "✓ [PASS] ADR-0018: Non-coercive coaching & escalation gates verified"};
static const lean_object* lp_Echonomics_main___closed__182 = (const lean_object*)&lp_Echonomics_main___closed__182_value;
static lean_once_cell_t lp_Echonomics_main___closed__183_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__183;
static lean_once_cell_t lp_Echonomics_main___closed__184_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__184;
static lean_once_cell_t lp_Echonomics_main___closed__185_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__185;
static lean_once_cell_t lp_Echonomics_main___closed__186_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__186;
static const lean_string_object lp_Echonomics_main___closed__187_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 75, .m_data = "✓ [PASS] ADR-0017: Care team → DUNA node mapping & 90-day envelope verified"};
static const lean_object* lp_Echonomics_main___closed__187 = (const lean_object*)&lp_Echonomics_main___closed__187_value;
static lean_once_cell_t lp_Echonomics_main___closed__188_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__188;
static lean_once_cell_t lp_Echonomics_main___closed__189_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__189;
static lean_once_cell_t lp_Echonomics_main___closed__190_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__190;
static lean_once_cell_t lp_Echonomics_main___closed__191_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__191;
static lean_once_cell_t lp_Echonomics_main___closed__192_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__192;
static lean_once_cell_t lp_Echonomics_main___closed__193_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__193;
static const lean_string_object lp_Echonomics_main___closed__194_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 40, .m_data = "✗ [FAIL] ADR-0016 split rule test failed"};
static const lean_object* lp_Echonomics_main___closed__194 = (const lean_object*)&lp_Echonomics_main___closed__194_value;
static const lean_ctor_object lp_Echonomics_main___closed__195_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__194_value)}};
static const lean_object* lp_Echonomics_main___closed__195 = (const lean_object*)&lp_Echonomics_main___closed__195_value;
static const lean_string_object lp_Echonomics_main___closed__196_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 52, .m_data = "✓ [PASS] ADR-0016: 13-nurse team split rule verified"};
static const lean_object* lp_Echonomics_main___closed__196 = (const lean_object*)&lp_Echonomics_main___closed__196_value;
static const lean_ctor_object lp_Echonomics_main___closed__197_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__197 = (const lean_object*)&lp_Echonomics_main___closed__197_value;
static lean_once_cell_t lp_Echonomics_main___closed__198_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__198;
static lean_once_cell_t lp_Echonomics_main___closed__199_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__199;
static const lean_string_object lp_Echonomics_main___closed__200_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 72, .m_data = "✓ [PASS] ADR-0016: Eight virtues codebook & 15% overhead target verified"};
static const lean_object* lp_Echonomics_main___closed__200 = (const lean_object*)&lp_Echonomics_main___closed__200_value;
static const lean_ctor_object lp_Echonomics_main___closed__201_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(13) << 1) | 1)),((lean_object*)(((size_t)(12) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__201 = (const lean_object*)&lp_Echonomics_main___closed__201_value;
static lean_once_cell_t lp_Echonomics_main___closed__202_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__202;
static const lean_string_object lp_Echonomics_main___closed__203_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 71, .m_data = "✓ [PASS] ADR-0015: Separated energy ledgers E = V_pair - V_nuc verified"};
static const lean_object* lp_Echonomics_main___closed__203 = (const lean_object*)&lp_Echonomics_main___closed__203_value;
static const lean_string_object lp_Echonomics_main___closed__204_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 45, .m_data = "✗ [FAIL] ADR-0016..0018 Buurtzorg test failed"};
static const lean_object* lp_Echonomics_main___closed__204 = (const lean_object*)&lp_Echonomics_main___closed__204_value;
static const lean_ctor_object lp_Echonomics_main___closed__205_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__204_value)}};
static const lean_object* lp_Echonomics_main___closed__205 = (const lean_object*)&lp_Echonomics_main___closed__205_value;
static const lean_string_object lp_Echonomics_main___closed__206_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 78, .m_data = "✓ [PASS] ADR-0016..0018: Buurtzorg Self-Governing Team Capacity Bound verified"};
static const lean_object* lp_Echonomics_main___closed__206 = (const lean_object*)&lp_Echonomics_main___closed__206_value;
static lean_once_cell_t lp_Echonomics_main___closed__207_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__207;
static lean_once_cell_t lp_Echonomics_main___closed__208_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__208;
static const lean_string_object lp_Echonomics_main___closed__209_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 62, .m_data = "✓ [PASS] ADR-0014: Term-Order Gate U = 0 pairing rule verified"};
static const lean_object* lp_Echonomics_main___closed__209 = (const lean_object*)&lp_Echonomics_main___closed__209_value;
static lean_once_cell_t lp_Echonomics_main___closed__210_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__210;
static lean_once_cell_t lp_Echonomics_main___closed__211_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__211;
static lean_once_cell_t lp_Echonomics_main___closed__212_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__212;
static lean_once_cell_t lp_Echonomics_main___closed__213_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__213;
static const lean_string_object lp_Echonomics_main___closed__214_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 65, .m_data = "✓ [PASS] ADR-0014: Ground state multiplicity M = |D| + 1 verified"};
static const lean_object* lp_Echonomics_main___closed__214 = (const lean_object*)&lp_Echonomics_main___closed__214_value;
static const lean_ctor_object lp_Echonomics_main___closed__215_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__215 = (const lean_object*)&lp_Echonomics_main___closed__215_value;
static const lean_ctor_object lp_Echonomics_main___closed__216_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__216 = (const lean_object*)&lp_Echonomics_main___closed__216_value;
static lean_once_cell_t lp_Echonomics_main___closed__217_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__217;
static lean_once_cell_t lp_Echonomics_main___closed__218_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__218;
static const lean_string_object lp_Echonomics_main___closed__219_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 71, .m_data = "✓ [PASS] ADR-0013: Pauli capacity max 2 & alpha/beta spin tags verified"};
static const lean_object* lp_Echonomics_main___closed__219 = (const lean_object*)&lp_Echonomics_main___closed__219_value;
static const lean_ctor_object lp_Echonomics_main___closed__220_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__220 = (const lean_object*)&lp_Echonomics_main___closed__220_value;
static const lean_ctor_object lp_Echonomics_main___closed__221_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__221 = (const lean_object*)&lp_Echonomics_main___closed__221_value;
static lean_once_cell_t lp_Echonomics_main___closed__222_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__222;
static const lean_string_object lp_Echonomics_main___closed__223_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 72, .m_data = "✓ [PASS] ADR-0012: Material asset floor (vehicle / $5k / small) verified"};
static const lean_object* lp_Echonomics_main___closed__223 = (const lean_object*)&lp_Echonomics_main___closed__223_value;
static const lean_ctor_object lp_Echonomics_main___closed__224_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__224 = (const lean_object*)&lp_Echonomics_main___closed__224_value;
static lean_once_cell_t lp_Echonomics_main___closed__225_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__225;
static const lean_string_object lp_Echonomics_main___closed__226_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0013..0015 Social Physics test failed"};
static const lean_object* lp_Echonomics_main___closed__226 = (const lean_object*)&lp_Echonomics_main___closed__226_value;
static const lean_ctor_object lp_Echonomics_main___closed__227_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__226_value)}};
static const lean_object* lp_Echonomics_main___closed__227 = (const lean_object*)&lp_Echonomics_main___closed__227_value;
static const lean_string_object lp_Echonomics_main___closed__228_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 75, .m_data = "✓ [PASS] ADR-0013..0015: Term-Order Gate pairing condition (U = 0) verified"};
static const lean_object* lp_Echonomics_main___closed__228 = (const lean_object*)&lp_Echonomics_main___closed__228_value;
static lean_once_cell_t lp_Echonomics_main___closed__229_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__229;
static lean_once_cell_t lp_Echonomics_main___closed__230_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__230;
static lean_once_cell_t lp_Echonomics_main___closed__231_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__231;
static lean_once_cell_t lp_Echonomics_main___closed__232_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__232;
static lean_once_cell_t lp_Echonomics_main___closed__233_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__233;
static const lean_ctor_object lp_Echonomics_main___closed__234_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__234 = (const lean_object*)&lp_Echonomics_main___closed__234_value;
static lean_once_cell_t lp_Echonomics_main___closed__235_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__235;
static lean_once_cell_t lp_Echonomics_main___closed__236_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__236;
static const lean_ctor_object lp_Echonomics_main___closed__237_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__237 = (const lean_object*)&lp_Echonomics_main___closed__237_value;
static lean_once_cell_t lp_Echonomics_main___closed__238_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__238;
static const lean_ctor_object lp_Echonomics_main___closed__239_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_main___closed__239 = (const lean_object*)&lp_Echonomics_main___closed__239_value;
static lean_once_cell_t lp_Echonomics_main___closed__240_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__240;
static const lean_string_object lp_Echonomics_main___closed__241_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 63, .m_data = "✓ [PASS] ADR-0005: Fail-closed denial of weaponization verified"};
static const lean_object* lp_Echonomics_main___closed__241 = (const lean_object*)&lp_Echonomics_main___closed__241_value;
static const lean_ctor_object lp_Echonomics_main___closed__242_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__242 = (const lean_object*)&lp_Echonomics_main___closed__242_value;
static const lean_string_object lp_Echonomics_main___closed__243_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 68, .m_data = "✓ [PASS] ADR-0005: Lawful Recursion over transition (δ ≤ ε) verified"};
static const lean_object* lp_Echonomics_main___closed__243 = (const lean_object*)&lp_Echonomics_main___closed__243_value;
static lean_once_cell_t lp_Echonomics_main___closed__244_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__244;
static const lean_string_object lp_Echonomics_main___closed__245_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 75, .m_data = "✓ [PASS] ADR-0005: Silence-Clause NO-OP on CSL-rejected transition verified"};
static const lean_object* lp_Echonomics_main___closed__245 = (const lean_object*)&lp_Echonomics_main___closed__245_value;
static const lean_string_object lp_Echonomics_main___closed__246_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 67, .m_data = "✓ [PASS] ADR-0005: Certified composite transition Ψ lawful verified"};
static const lean_object* lp_Echonomics_main___closed__246 = (const lean_object*)&lp_Echonomics_main___closed__246_value;
static lean_once_cell_t lp_Echonomics_main___closed__247_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__247;
static lean_once_cell_t lp_Echonomics_main___closed__248_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__248;
static const lean_string_object lp_Echonomics_main___closed__249_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "✗ [FAIL] ADR-0006 Lambda-Proof test failed"};
static const lean_object* lp_Echonomics_main___closed__249 = (const lean_object*)&lp_Echonomics_main___closed__249_value;
static const lean_ctor_object lp_Echonomics_main___closed__250_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__249_value)}};
static const lean_object* lp_Echonomics_main___closed__250 = (const lean_object*)&lp_Echonomics_main___closed__250_value;
static const lean_string_object lp_Echonomics_main___closed__251_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 82, .m_data = "✓ [PASS] ADR-0006: Lambda-Proof Smart Contracts & ZK Circuits Integration verified"};
static const lean_object* lp_Echonomics_main___closed__251 = (const lean_object*)&lp_Echonomics_main___closed__251_value;
static const lean_ctor_object lp_Echonomics_main___closed__252_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__252 = (const lean_object*)&lp_Echonomics_main___closed__252_value;
static lean_once_cell_t lp_Echonomics_main___closed__253_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__253;
static lean_once_cell_t lp_Echonomics_main___closed__254_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__254;
static const lean_string_object lp_Echonomics_main___closed__255_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0007..0009 Codebook test failed"};
static const lean_object* lp_Echonomics_main___closed__255 = (const lean_object*)&lp_Echonomics_main___closed__255_value;
static const lean_ctor_object lp_Echonomics_main___closed__256_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__255_value)}};
static const lean_object* lp_Echonomics_main___closed__256 = (const lean_object*)&lp_Echonomics_main___closed__256_value;
static const lean_string_object lp_Echonomics_main___closed__257_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 77, .m_data = "✓ [PASS] ADR-0007..0009: Codebook & Runbook Multiplicity M = |D| + 1 verified"};
static const lean_object* lp_Echonomics_main___closed__257 = (const lean_object*)&lp_Echonomics_main___closed__257_value;
static lean_once_cell_t lp_Echonomics_main___closed__258_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__258;
static const lean_string_object lp_Echonomics_main___closed__259_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 46, .m_data = "✗ [FAIL] ADR-0010..0012 Civic Spec test failed"};
static const lean_object* lp_Echonomics_main___closed__259 = (const lean_object*)&lp_Echonomics_main___closed__259_value;
static const lean_ctor_object lp_Echonomics_main___closed__260_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__259_value)}};
static const lean_object* lp_Echonomics_main___closed__260 = (const lean_object*)&lp_Echonomics_main___closed__260_value;
static const lean_string_object lp_Echonomics_main___closed__261_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = "✓ [PASS] ADR-0010..0012: DUNA & Civic Infrastructure Quorum verified"};
static const lean_object* lp_Echonomics_main___closed__261 = (const lean_object*)&lp_Echonomics_main___closed__261_value;
static lean_once_cell_t lp_Echonomics_main___closed__262_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__262;
static const lean_string_object lp_Echonomics_main___closed__263_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 44, .m_data = "✗ [FAIL] ADR-0012 L0 enumeration test failed"};
static const lean_object* lp_Echonomics_main___closed__263 = (const lean_object*)&lp_Echonomics_main___closed__263_value;
static const lean_ctor_object lp_Echonomics_main___closed__264_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__263_value)}};
static const lean_object* lp_Echonomics_main___closed__264 = (const lean_object*)&lp_Echonomics_main___closed__264_value;
static const lean_string_object lp_Echonomics_main___closed__265_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 57, .m_data = "✓ [PASS] ADR-0012: Nine L0 invariants enumerated verified"};
static const lean_object* lp_Echonomics_main___closed__265 = (const lean_object*)&lp_Echonomics_main___closed__265_value;
static const lean_string_object lp_Echonomics_main___closed__266_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 58, .m_data = "✓ [PASS] ADR-0012: L0 fail-closed compliance gate verified"};
static const lean_object* lp_Echonomics_main___closed__266 = (const lean_object*)&lp_Echonomics_main___closed__266_value;
static const lean_string_object lp_Echonomics_main___closed__267_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 72, .m_data = "✓ [PASS] ADR-0012: Credits do not buy votes (zero voting power) verified"};
static const lean_object* lp_Echonomics_main___closed__267 = (const lean_object*)&lp_Echonomics_main___closed__267_value;
static lean_once_cell_t lp_Echonomics_main___closed__268_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__268;
static lean_once_cell_t lp_Echonomics_main___closed__269_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__269;
static const lean_string_object lp_Echonomics_main___closed__270_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0012 dual-seat firewall test failed"};
static const lean_object* lp_Echonomics_main___closed__270 = (const lean_object*)&lp_Echonomics_main___closed__270_value;
static const lean_ctor_object lp_Echonomics_main___closed__271_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__270_value)}};
static const lean_object* lp_Echonomics_main___closed__271 = (const lean_object*)&lp_Echonomics_main___closed__271_value;
static const lean_string_object lp_Echonomics_main___closed__272_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 72, .m_data = "✓ [PASS] ADR-0012: Dual-seat firewall equity-does-not-mint-PMCP verified"};
static const lean_object* lp_Echonomics_main___closed__272 = (const lean_object*)&lp_Echonomics_main___closed__272_value;
static lean_once_cell_t lp_Echonomics_main___closed__273_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__273;
static lean_once_cell_t lp_Echonomics_main___closed__274_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__274;
static lean_once_cell_t lp_Echonomics_main___closed__275_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__275;
static const lean_string_object lp_Echonomics_main___closed__276_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0005 surveillance denial test failed"};
static const lean_object* lp_Echonomics_main___closed__276 = (const lean_object*)&lp_Echonomics_main___closed__276_value;
static const lean_ctor_object lp_Echonomics_main___closed__277_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__276_value)}};
static const lean_object* lp_Echonomics_main___closed__277 = (const lean_object*)&lp_Echonomics_main___closed__277_value;
static const lean_string_object lp_Echonomics_main___closed__278_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 73, .m_data = "✓ [PASS] ADR-0005: Fail-closed denial of surveillance deployment verified"};
static const lean_object* lp_Echonomics_main___closed__278 = (const lean_object*)&lp_Echonomics_main___closed__278_value;
static lean_once_cell_t lp_Echonomics_main___closed__279_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__279;
static const lean_string_object lp_Echonomics_main___closed__280_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0005 weaponization denial test failed"};
static const lean_object* lp_Echonomics_main___closed__280 = (const lean_object*)&lp_Echonomics_main___closed__280_value;
static const lean_ctor_object lp_Echonomics_main___closed__281_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__280_value)}};
static const lean_object* lp_Echonomics_main___closed__281 = (const lean_object*)&lp_Echonomics_main___closed__281_value;
static const lean_string_object lp_Echonomics_main___closed__282_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 67, .m_data = "✓ [PASS] ADR-0004: Separated-Ledger Mandate V_pair ≠ V_nuc verified"};
static const lean_object* lp_Echonomics_main___closed__282 = (const lean_object*)&lp_Echonomics_main___closed__282_value;
static const lean_ctor_object lp_Echonomics_main___closed__283_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__283 = (const lean_object*)&lp_Echonomics_main___closed__283_value;
static const lean_ctor_object lp_Echonomics_main___closed__284_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__284 = (const lean_object*)&lp_Echonomics_main___closed__284_value;
static lean_once_cell_t lp_Echonomics_main___closed__285_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__285;
static lean_once_cell_t lp_Echonomics_main___closed__286_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__286;
static lean_once_cell_t lp_Echonomics_main___closed__287_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__287;
static const lean_string_object lp_Echonomics_main___closed__288_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0004 V_nuc monotonicity test failed"};
static const lean_object* lp_Echonomics_main___closed__288 = (const lean_object*)&lp_Echonomics_main___closed__288_value;
static const lean_ctor_object lp_Echonomics_main___closed__289_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__288_value)}};
static const lean_object* lp_Echonomics_main___closed__289 = (const lean_object*)&lp_Echonomics_main___closed__289_value;
static const lean_string_object lp_Echonomics_main___closed__290_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 69, .m_data = "✓ [PASS] ADR-0004: Increasing V_nuc attraction lowers energy verified"};
static const lean_object* lp_Echonomics_main___closed__290 = (const lean_object*)&lp_Echonomics_main___closed__290_value;
static const lean_ctor_object lp_Echonomics_main___closed__291_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__291 = (const lean_object*)&lp_Echonomics_main___closed__291_value;
static const lean_ctor_object lp_Echonomics_main___closed__292_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__292 = (const lean_object*)&lp_Echonomics_main___closed__292_value;
static lean_once_cell_t lp_Echonomics_main___closed__293_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__293;
static lean_once_cell_t lp_Echonomics_main___closed__294_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__294;
static lean_once_cell_t lp_Echonomics_main___closed__295_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__295;
static const lean_string_object lp_Echonomics_main___closed__296_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0004 V_pair monotonicity test failed"};
static const lean_object* lp_Echonomics_main___closed__296 = (const lean_object*)&lp_Echonomics_main___closed__296_value;
static const lean_ctor_object lp_Echonomics_main___closed__297_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__296_value)}};
static const lean_object* lp_Echonomics_main___closed__297 = (const lean_object*)&lp_Echonomics_main___closed__297_value;
static const lean_string_object lp_Echonomics_main___closed__298_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 68, .m_data = "✓ [PASS] ADR-0004: Increasing V_pair friction raises energy verified"};
static const lean_object* lp_Echonomics_main___closed__298 = (const lean_object*)&lp_Echonomics_main___closed__298_value;
static lean_once_cell_t lp_Echonomics_main___closed__299_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__299;
static lean_once_cell_t lp_Echonomics_main___closed__300_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__300;
static const lean_string_object lp_Echonomics_main___closed__301_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 54, .m_data = "✗ [FAIL] ADR-0004 minOfList global minimum test failed"};
static const lean_object* lp_Echonomics_main___closed__301 = (const lean_object*)&lp_Echonomics_main___closed__301_value;
static const lean_ctor_object lp_Echonomics_main___closed__302_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__301_value)}};
static const lean_object* lp_Echonomics_main___closed__302 = (const lean_object*)&lp_Echonomics_main___closed__302_value;
static const lean_string_object lp_Echonomics_main___closed__303_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 83, .m_data = "✓ [PASS] ADR-0004: Ground-state fold minOfList picks global minimum energy verified"};
static const lean_object* lp_Echonomics_main___closed__303 = (const lean_object*)&lp_Echonomics_main___closed__303_value;
static const lean_string_object lp_Echonomics_main___closed__304_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 62, .m_data = "✓ [PASS] ADR-0004: Fixed (N, D, P) frame well-defined verified"};
static const lean_object* lp_Echonomics_main___closed__304 = (const lean_object*)&lp_Echonomics_main___closed__304_value;
static const lean_ctor_object lp_Echonomics_main___closed__305_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__305 = (const lean_object*)&lp_Echonomics_main___closed__305_value;
static lean_once_cell_t lp_Echonomics_main___closed__306_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__306;
static lean_once_cell_t lp_Echonomics_main___closed__307_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__307;
static const lean_string_object lp_Echonomics_main___closed__308_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 74, .m_data = "✓ [PASS] ADR-0004: Ground state independent of raw multiplicity M verified"};
static const lean_object* lp_Echonomics_main___closed__308 = (const lean_object*)&lp_Echonomics_main___closed__308_value;
static const lean_string_object lp_Echonomics_main___closed__309_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 52, .m_data = "✗ [FAIL] ADR-0004 ground-state existence test failed"};
static const lean_object* lp_Echonomics_main___closed__309 = (const lean_object*)&lp_Echonomics_main___closed__309_value;
static const lean_ctor_object lp_Echonomics_main___closed__310_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__309_value)}};
static const lean_object* lp_Echonomics_main___closed__310 = (const lean_object*)&lp_Echonomics_main___closed__310_value;
static const lean_string_object lp_Echonomics_main___closed__311_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 74, .m_data = "✓ [PASS] ADR-0004: Ground state exists (minimizer is GS over all) verified"};
static const lean_object* lp_Echonomics_main___closed__311 = (const lean_object*)&lp_Echonomics_main___closed__311_value;
static lean_once_cell_t lp_Echonomics_main___closed__312_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__312;
static lean_once_cell_t lp_Echonomics_main___closed__313_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__313;
static const lean_ctor_object lp_Echonomics_main___closed__314_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__314 = (const lean_object*)&lp_Echonomics_main___closed__314_value;
static lean_once_cell_t lp_Echonomics_main___closed__315_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__315;
static const lean_string_object lp_Echonomics_main___closed__316_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 80, .m_data = "✓ [PASS] ADR-0005: Ξ-Constitution CSL Gate (N, B, S) & Lawful Recursion verified"};
static const lean_object* lp_Echonomics_main___closed__316 = (const lean_object*)&lp_Echonomics_main___closed__316_value;
static lean_once_cell_t lp_Echonomics_main___closed__317_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__317;
static lean_once_cell_t lp_Echonomics_main___closed__318_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__318;
static const lean_string_object lp_Echonomics_main___closed__319_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 48, .m_data = "✗ [FAIL] ADR-0005 composite pipeline test failed"};
static const lean_object* lp_Echonomics_main___closed__319 = (const lean_object*)&lp_Echonomics_main___closed__319_value;
static const lean_ctor_object lp_Echonomics_main___closed__320_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__319_value)}};
static const lean_object* lp_Echonomics_main___closed__320 = (const lean_object*)&lp_Echonomics_main___closed__320_value;
static const lean_string_object lp_Echonomics_main___closed__321_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 75, .m_data = "✓ [PASS] ADR-0005: Composite certificate pipeline PIRTM ∘ CSL ∘ zk verified"};
static const lean_object* lp_Echonomics_main___closed__321 = (const lean_object*)&lp_Echonomics_main___closed__321_value;
static lean_once_cell_t lp_Echonomics_main___closed__322_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__322;
static const lean_string_object lp_Echonomics_main___closed__323_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 43, .m_data = "✗ [FAIL] ADR-0005 certification test failed"};
static const lean_object* lp_Echonomics_main___closed__323 = (const lean_object*)&lp_Echonomics_main___closed__323_value;
static const lean_ctor_object lp_Echonomics_main___closed__324_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__323_value)}};
static const lean_object* lp_Echonomics_main___closed__324 = (const lean_object*)&lp_Echonomics_main___closed__324_value;
static const lean_string_object lp_Echonomics_main___closed__325_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 78, .m_data = "✓ [PASS] ADR-0005: Ξ-Certification = CSL ∧ LawfulRecursion ∧ Pipeline verified"};
static const lean_object* lp_Echonomics_main___closed__325 = (const lean_object*)&lp_Echonomics_main___closed__325_value;
static const lean_ctor_object lp_Echonomics_main___closed__326_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_Echonomics_main___closed__326 = (const lean_object*)&lp_Echonomics_main___closed__326_value;
static lean_once_cell_t lp_Echonomics_main___closed__327_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__327;
static const lean_string_object lp_Echonomics_main___closed__328_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 49, .m_data = "✗ [FAIL] ADR-0005 license-grant clean test failed"};
static const lean_object* lp_Echonomics_main___closed__328 = (const lean_object*)&lp_Echonomics_main___closed__328_value;
static const lean_ctor_object lp_Echonomics_main___closed__329_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__328_value)}};
static const lean_object* lp_Echonomics_main___closed__329 = (const lean_object*)&lp_Echonomics_main___closed__329_value;
static const lean_string_object lp_Echonomics_main___closed__330_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 82, .m_data = "✓ [PASS] ADR-0005: Fail-closed license granted for certified clean system verified"};
static const lean_object* lp_Echonomics_main___closed__330 = (const lean_object*)&lp_Echonomics_main___closed__330_value;
static lean_once_cell_t lp_Echonomics_main___closed__331_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__331;
static lean_once_cell_t lp_Echonomics_main___closed__332_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__332;
static const lean_string_object lp_Echonomics_main___closed__333_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 78, .m_data = "✓ [PASS] ADR-0003: Primality predicate (2,3,5 prime; 4,1,0 composite) verified"};
static const lean_object* lp_Echonomics_main___closed__333 = (const lean_object*)&lp_Echonomics_main___closed__333_value;
static const lean_string_object lp_Echonomics_main___closed__334_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0003 over-bound rejection test failed"};
static const lean_object* lp_Echonomics_main___closed__334 = (const lean_object*)&lp_Echonomics_main___closed__334_value;
static const lean_ctor_object lp_Echonomics_main___closed__335_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__334_value)}};
static const lean_object* lp_Echonomics_main___closed__335 = (const lean_object*)&lp_Echonomics_main___closed__335_value;
static const lean_ctor_object lp_Echonomics_main___closed__336_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(25) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__336 = (const lean_object*)&lp_Echonomics_main___closed__336_value;
static lean_once_cell_t lp_Echonomics_main___closed__337_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__337;
static const lean_string_object lp_Echonomics_main___closed__338_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 73, .m_capacity = 73, .m_length = 70, .m_data = "✓ [PASS] ADR-0003: Over-bound transfer rejected (fail-closed) verified"};
static const lean_object* lp_Echonomics_main___closed__338 = (const lean_object*)&lp_Echonomics_main___closed__338_value;
static const lean_ctor_object lp_Echonomics_main___closed__339_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(20) << 1) | 1)),((lean_object*)(((size_t)(20) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__339 = (const lean_object*)&lp_Echonomics_main___closed__339_value;
static lean_once_cell_t lp_Echonomics_main___closed__340_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__340;
static const lean_string_object lp_Echonomics_main___closed__341_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 53, .m_data = "✗ [FAIL] ADR-0003 exact conservation seal test failed"};
static const lean_object* lp_Echonomics_main___closed__341 = (const lean_object*)&lp_Echonomics_main___closed__341_value;
static const lean_ctor_object lp_Echonomics_main___closed__342_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__341_value)}};
static const lean_object* lp_Echonomics_main___closed__342 = (const lean_object*)&lp_Echonomics_main___closed__342_value;
static const lean_string_object lp_Echonomics_main___closed__343_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 61, .m_data = "✓ [PASS] ADR-0003: Exact conservation seals transfer verified"};
static const lean_object* lp_Echonomics_main___closed__343 = (const lean_object*)&lp_Echonomics_main___closed__343_value;
static const lean_ctor_object lp_Echonomics_main___closed__344_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__344 = (const lean_object*)&lp_Echonomics_main___closed__344_value;
static lean_once_cell_t lp_Echonomics_main___closed__345_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__345;
static lean_once_cell_t lp_Echonomics_main___closed__346_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__346;
static const lean_string_object lp_Echonomics_main___closed__347_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 81, .m_data = "✓ [PASS] ADR-0003: Prime-locked geometry with sufficient bound conserved verified"};
static const lean_object* lp_Echonomics_main___closed__347 = (const lean_object*)&lp_Echonomics_main___closed__347_value;
static const lean_ctor_object lp_Echonomics_main___closed__348_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__348 = (const lean_object*)&lp_Echonomics_main___closed__348_value;
static lean_once_cell_t lp_Echonomics_main___closed__349_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__349;
static const lean_string_object lp_Echonomics_main___closed__350_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0003 zero-bound rejection test failed"};
static const lean_object* lp_Echonomics_main___closed__350 = (const lean_object*)&lp_Echonomics_main___closed__350_value;
static const lean_ctor_object lp_Echonomics_main___closed__351_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__350_value)}};
static const lean_object* lp_Echonomics_main___closed__351 = (const lean_object*)&lp_Echonomics_main___closed__351_value;
static const lean_string_object lp_Echonomics_main___closed__352_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 66, .m_data = "✓ [PASS] ADR-0003: Zero bound rejects positive factor sum verified"};
static const lean_object* lp_Echonomics_main___closed__352 = (const lean_object*)&lp_Echonomics_main___closed__352_value;
static lean_once_cell_t lp_Echonomics_main___closed__353_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__353;
static const lean_string_object lp_Echonomics_main___closed__354_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 43, .m_data = "✗ [FAIL] ADR-0004 Energy Ledger test failed"};
static const lean_object* lp_Echonomics_main___closed__354 = (const lean_object*)&lp_Echonomics_main___closed__354_value;
static const lean_ctor_object lp_Echonomics_main___closed__355_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__354_value)}};
static const lean_object* lp_Echonomics_main___closed__355 = (const lean_object*)&lp_Echonomics_main___closed__355_value;
static const lean_string_object lp_Echonomics_main___closed__356_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 89, .m_capacity = 89, .m_length = 86, .m_data = "✓ [PASS] ADR-0004: Energy Ledger E = V_pair - V_nuc Ground State Minimization verified"};
static const lean_object* lp_Echonomics_main___closed__356 = (const lean_object*)&lp_Echonomics_main___closed__356_value;
static lean_once_cell_t lp_Echonomics_main___closed__357_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__357;
static lean_once_cell_t lp_Echonomics_main___closed__358_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__358;
static lean_once_cell_t lp_Echonomics_main___closed__359_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__359;
static lean_once_cell_t lp_Echonomics_main___closed__360_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__360;
static lean_once_cell_t lp_Echonomics_main___closed__361_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__361;
static lean_once_cell_t lp_Echonomics_main___closed__362_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_Echonomics_main___closed__362;
static lean_once_cell_t lp_Echonomics_main___closed__363_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__363;
static const lean_string_object lp_Echonomics_main___closed__364_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 69, .m_data = "✓ [PASS] ADR-0004: Energy sign convention E = V_pair - V_nuc verified"};
static const lean_object* lp_Echonomics_main___closed__364 = (const lean_object*)&lp_Echonomics_main___closed__364_value;
static const lean_ctor_object lp_Echonomics_main___closed__365_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1)),((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__365 = (const lean_object*)&lp_Echonomics_main___closed__365_value;
static const lean_ctor_object lp_Echonomics_main___closed__366_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_Echonomics_main___closed__366 = (const lean_object*)&lp_Echonomics_main___closed__366_value;
static lean_once_cell_t lp_Echonomics_main___closed__367_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__367;
static lean_once_cell_t lp_Echonomics_main___closed__368_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__368;
static lean_once_cell_t lp_Echonomics_main___closed__369_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_Echonomics_main___closed__369;
static const lean_string_object lp_Echonomics_main___closed__370_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 42, .m_data = "✗ [FAIL] ADR-0002 quorum-binds test failed"};
static const lean_object* lp_Echonomics_main___closed__370 = (const lean_object*)&lp_Echonomics_main___closed__370_value;
static const lean_ctor_object lp_Echonomics_main___closed__371_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__370_value)}};
static const lean_object* lp_Echonomics_main___closed__371 = (const lean_object*)&lp_Echonomics_main___closed__371_value;
static const lean_string_object lp_Echonomics_main___closed__372_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 45, .m_data = "✗ [FAIL] ADR-0002 fail-closed tie test failed"};
static const lean_object* lp_Echonomics_main___closed__372 = (const lean_object*)&lp_Echonomics_main___closed__372_value;
static const lean_ctor_object lp_Echonomics_main___closed__373_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__372_value)}};
static const lean_object* lp_Echonomics_main___closed__373 = (const lean_object*)&lp_Echonomics_main___closed__373_value;
static const lean_string_object lp_Echonomics_main___closed__374_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 61, .m_data = "✗ [FAIL] ADR-0001 Lifecycle superseded no-revival test failed"};
static const lean_object* lp_Echonomics_main___closed__374 = (const lean_object*)&lp_Echonomics_main___closed__374_value;
static const lean_ctor_object lp_Echonomics_main___closed__375_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__374_value)}};
static const lean_object* lp_Echonomics_main___closed__375 = (const lean_object*)&lp_Echonomics_main___closed__375_value;
static const lean_string_object lp_Echonomics_main___closed__376_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 50, .m_data = "✗ [FAIL] ADR-0001 Lifecycle no-revival test failed"};
static const lean_object* lp_Echonomics_main___closed__376 = (const lean_object*)&lp_Echonomics_main___closed__376_value;
static const lean_ctor_object lp_Echonomics_main___closed__377_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&lp_Echonomics_main___closed__376_value)}};
static const lean_object* lp_Echonomics_main___closed__377 = (const lean_object*)&lp_Echonomics_main___closed__377_value;
LEAN_EXPORT lean_object* _lean_main();
LEAN_EXPORT lean_object* lp_Echonomics_main___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Option_instBEq_beq___at___00main_spec__2(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
else
{
lean_object* v_val_6_; lean_object* v_val_7_; uint8_t v___x_8_; uint8_t v___x_9_; uint8_t v___x_10_; 
v_val_6_ = lean_ctor_get(v_x_1_, 0);
v_val_7_ = lean_ctor_get(v_x_2_, 0);
v___x_8_ = lean_unbox(v_val_6_);
v___x_9_ = lean_unbox(v_val_7_);
v___x_10_ = lp_Echonomics_Echonomics_Core_instDecidableEqSpinTag(v___x_8_, v___x_9_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Option_instBEq_beq___at___00main_spec__2___boxed(lean_object* v_x_11_, lean_object* v_x_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = lp_Echonomics_Option_instBEq_beq___at___00main_spec__2(v_x_11_, v_x_12_);
lean_dec(v_x_12_);
lean_dec(v_x_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
static lean_object* _init_lp_Echonomics_List_all___at___00main_spec__1___closed__6(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__5));
v___x_34_ = lp_Echonomics_Echonomics_EnergyLedger_minOfList(v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_List_all___at___00main_spec__1(lean_object* v_x_35_){
_start:
{
if (lean_obj_tag(v_x_35_) == 0)
{
uint8_t v___x_36_; 
v___x_36_ = 1;
return v___x_36_;
}
else
{
lean_object* v_head_37_; lean_object* v_tail_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v_head_37_ = lean_ctor_get(v_x_35_, 0);
lean_inc(v_head_37_);
v_tail_38_ = lean_ctor_get(v_x_35_, 1);
lean_inc(v_tail_38_);
lean_dec_ref_known(v_x_35_, 2);
v___x_39_ = lean_obj_once(&lp_Echonomics_List_all___at___00main_spec__1___closed__6, &lp_Echonomics_List_all___at___00main_spec__1___closed__6_once, _init_lp_Echonomics_List_all___at___00main_spec__1___closed__6);
v___x_40_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v___x_39_, v_head_37_);
if (v___x_40_ == 0)
{
lean_dec(v_tail_38_);
return v___x_40_;
}
else
{
v_x_35_ = v_tail_38_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_List_all___at___00main_spec__1___boxed(lean_object* v_x_42_){
_start:
{
uint8_t v_res_43_; lean_object* v_r_44_; 
v_res_43_ = lp_Echonomics_List_all___at___00main_spec__1(v_x_42_);
v_r_44_ = lean_box(v_res_43_);
return v_r_44_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(lean_object* v_s_45_){
_start:
{
lean_object* v___x_47_; lean_object* v_putStr_48_; lean_object* v___x_49_; 
v___x_47_ = lean_get_stdout();
v_putStr_48_ = lean_ctor_get(v___x_47_, 4);
lean_inc_ref(v_putStr_48_);
lean_dec_ref(v___x_47_);
v___x_49_ = lean_apply_2(v_putStr_48_, v_s_45_, lean_box(0));
return v___x_49_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0___boxed(lean_object* v_s_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v_s_50_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0(lean_object* v_s_53_){
_start:
{
uint32_t v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_55_ = 10;
v___x_56_ = lean_string_push(v_s_53_, v___x_55_);
v___x_57_ = lp_Echonomics_IO_print___at___00IO_println___at___00main_spec__0_spec__0(v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics_IO_println___at___00main_spec__0___boxed(lean_object* v_s_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = lp_Echonomics_IO_println___at___00main_spec__0(v_s_58_);
return v_res_60_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__39(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(3u);
v___x_120_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_119_);
return v___x_120_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__40(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_121_ = lean_unsigned_to_nat(4u);
v___x_122_ = lean_obj_once(&lp_Echonomics_main___closed__39, &lp_Echonomics_main___closed__39_once, _init_lp_Echonomics_main___closed__39);
v___x_123_ = lean_nat_dec_eq(v___x_122_, v___x_121_);
return v___x_123_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__44(void){
_start:
{
uint8_t v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_128_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = lean_unsigned_to_nat(2u);
v___x_131_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_130_, v___x_129_, v___x_128_);
return v___x_131_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__45(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_132_ = lean_box(6);
v___x_133_ = lean_obj_once(&lp_Echonomics_main___closed__44, &lp_Echonomics_main___closed__44_once, _init_lp_Echonomics_main___closed__44);
v___x_134_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_133_, v___x_132_);
return v___x_134_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__49(void){
_start:
{
uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = 0;
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_140_, v___x_140_, v___x_139_);
return v___x_141_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__50(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
v___x_142_ = lean_box(2);
v___x_143_ = lean_obj_once(&lp_Echonomics_main___closed__49, &lp_Echonomics_main___closed__49_once, _init_lp_Echonomics_main___closed__49);
v___x_144_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_143_, v___x_142_);
return v___x_144_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__54(void){
_start:
{
uint8_t v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_149_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_150_ = lean_unsigned_to_nat(3u);
v___x_151_ = lean_unsigned_to_nat(1u);
v___x_152_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_151_, v___x_150_, v___x_149_);
return v___x_152_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__55(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_153_ = lean_box(7);
v___x_154_ = lean_obj_once(&lp_Echonomics_main___closed__54, &lp_Echonomics_main___closed__54_once, _init_lp_Echonomics_main___closed__54);
v___x_155_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_154_, v___x_153_);
return v___x_155_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__59(void){
_start:
{
uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_160_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = lean_unsigned_to_nat(1u);
v___x_163_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_162_, v___x_161_, v___x_160_);
return v___x_163_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__61(void){
_start:
{
lean_object* v___x_166_; lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_166_ = ((lean_object*)(lp_Echonomics_main___closed__60));
v___x_167_ = lean_obj_once(&lp_Echonomics_main___closed__59, &lp_Echonomics_main___closed__59_once, _init_lp_Echonomics_main___closed__59);
v___x_168_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_167_, v___x_166_);
return v___x_168_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__65(void){
_start:
{
uint8_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_173_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_174_ = lean_unsigned_to_nat(5u);
v___x_175_ = lean_unsigned_to_nat(0u);
v___x_176_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_175_, v___x_174_, v___x_173_);
return v___x_176_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__67(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; 
v___x_179_ = ((lean_object*)(lp_Echonomics_main___closed__66));
v___x_180_ = lean_obj_once(&lp_Echonomics_main___closed__65, &lp_Echonomics_main___closed__65_once, _init_lp_Echonomics_main___closed__65);
v___x_181_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_180_, v___x_179_);
return v___x_181_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__71(void){
_start:
{
uint8_t v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_186_ = 0;
v___x_187_ = lean_unsigned_to_nat(5u);
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_188_, v___x_187_, v___x_186_);
return v___x_189_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__72(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_190_ = lean_box(2);
v___x_191_ = lean_obj_once(&lp_Echonomics_main___closed__71, &lp_Echonomics_main___closed__71_once, _init_lp_Echonomics_main___closed__71);
v___x_192_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_191_, v___x_190_);
return v___x_192_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__76(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_unsigned_to_nat(0u);
v___x_198_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_197_);
return v___x_198_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__77(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_199_ = lean_unsigned_to_nat(1u);
v___x_200_ = lean_obj_once(&lp_Echonomics_main___closed__76, &lp_Echonomics_main___closed__76_once, _init_lp_Echonomics_main___closed__76);
v___x_201_ = lean_nat_dec_eq(v___x_200_, v___x_199_);
return v___x_201_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__81(void){
_start:
{
uint8_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_206_ = 0;
v___x_207_ = lean_unsigned_to_nat(0u);
v___x_208_ = lean_unsigned_to_nat(4u);
v___x_209_ = lp_Echonomics_Echonomics_HundianOccupancy_evaluatePauliGate(v___x_208_, v___x_207_, v___x_206_);
return v___x_209_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__82(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_210_ = lean_box(6);
v___x_211_ = lean_obj_once(&lp_Echonomics_main___closed__81, &lp_Echonomics_main___closed__81_once, _init_lp_Echonomics_main___closed__81);
v___x_212_ = lp_Echonomics_Echonomics_Core_instDecidableEqGateResult_decEq(v___x_211_, v___x_210_);
return v___x_212_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__86(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(5u);
v___x_218_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_217_);
return v___x_218_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__87(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_219_ = lean_obj_once(&lp_Echonomics_main___closed__86, &lp_Echonomics_main___closed__86_once, _init_lp_Echonomics_main___closed__86);
v___x_220_ = lean_obj_once(&lp_Echonomics_main___closed__39, &lp_Echonomics_main___closed__39_once, _init_lp_Echonomics_main___closed__39);
v___x_221_ = lean_nat_dec_lt(v___x_220_, v___x_219_);
return v___x_221_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__91(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(10u);
v___x_227_ = lp_Echonomics_Echonomics_HundianOccupancy_calculateMultiplicity(v___x_226_);
return v___x_227_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__92(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_228_ = lean_obj_once(&lp_Echonomics_main___closed__91, &lp_Echonomics_main___closed__91_once, _init_lp_Echonomics_main___closed__91);
v___x_229_ = lean_unsigned_to_nat(10u);
v___x_230_ = lean_nat_dec_lt(v___x_229_, v___x_228_);
return v___x_230_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__96(void){
_start:
{
lean_object* v___x_235_; uint8_t v___x_236_; 
v___x_235_ = lean_box(6);
v___x_236_ = lp_Echonomics_Echonomics_Proofs_isGateRej(v___x_235_);
return v___x_236_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__100(void){
_start:
{
lean_object* v___x_241_; uint8_t v___x_242_; 
v___x_241_ = ((lean_object*)(lp_Echonomics_main___closed__66));
v___x_242_ = lp_Echonomics_Echonomics_Proofs_isGateOk(v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__104(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(lp_Echonomics_main___closed__66));
v___x_248_ = lp_Echonomics_Echonomics_HundianOccupancy_gateMultiplicityDelta(v___x_247_);
return v___x_248_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__105(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_249_ = lean_unsigned_to_nat(1u);
v___x_250_ = lean_obj_once(&lp_Echonomics_main___closed__104, &lp_Echonomics_main___closed__104_once, _init_lp_Echonomics_main___closed__104);
v___x_251_ = lean_nat_dec_eq(v___x_250_, v___x_249_);
return v___x_251_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__109(void){
_start:
{
lean_object* v___x_256_; lean_object* v___x_257_; 
v___x_256_ = lean_box(6);
v___x_257_ = lp_Echonomics_Echonomics_HundianOccupancy_gateMultiplicityDelta(v___x_256_);
return v___x_257_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__110(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = lean_obj_once(&lp_Echonomics_main___closed__109, &lp_Echonomics_main___closed__109_once, _init_lp_Echonomics_main___closed__109);
v___x_260_ = lean_nat_dec_eq(v___x_259_, v___x_258_);
return v___x_260_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__114(void){
_start:
{
uint8_t v___x_265_; uint8_t v___x_266_; uint8_t v___x_267_; 
v___x_265_ = 1;
v___x_266_ = 0;
v___x_267_ = lp_Echonomics_Echonomics_Proofs_isValidTransition(v___x_266_, v___x_265_);
return v___x_267_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__118(void){
_start:
{
uint8_t v___x_272_; uint8_t v___x_273_; uint8_t v___x_274_; 
v___x_272_ = 1;
v___x_273_ = 2;
v___x_274_ = lp_Echonomics_Echonomics_Proofs_isValidTransition(v___x_273_, v___x_272_);
return v___x_274_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__120(void){
_start:
{
uint8_t v___x_276_; uint8_t v___x_277_; uint8_t v___x_278_; 
v___x_276_ = 1;
v___x_277_ = 3;
v___x_278_ = lp_Echonomics_Echonomics_Proofs_isValidTransition(v___x_277_, v___x_276_);
return v___x_278_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__123(void){
_start:
{
lean_object* v___x_281_; uint8_t v___x_282_; 
v___x_281_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_acceptedAdrIds;
v___x_282_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isReviewCoverageComplete(v___x_281_);
return v___x_282_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__128(void){
_start:
{
lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = ((lean_object*)(lp_Echonomics_main___closed__127));
v___x_292_ = lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(v___x_291_);
return v___x_292_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__135(void){
_start:
{
lean_object* v___x_305_; uint8_t v___x_306_; 
v___x_305_ = ((lean_object*)(lp_Echonomics_main___closed__134));
v___x_306_ = lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(v___x_305_);
return v___x_306_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__138(void){
_start:
{
lean_object* v___x_311_; uint8_t v___x_312_; 
v___x_311_ = ((lean_object*)(lp_Echonomics_main___closed__137));
v___x_312_ = lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(v___x_311_);
return v___x_312_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__141(void){
_start:
{
lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_319_ = ((lean_object*)(lp_Echonomics_main___closed__140));
v___x_320_ = lp_Echonomics_Echonomics_CivicDunaGate_isProposalPassed(v___x_319_);
return v___x_320_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__143(void){
_start:
{
lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_322_ = ((lean_object*)(lp_Echonomics_main___closed__127));
v___x_323_ = lp_Echonomics_Echonomics_CivicDunaGate_evaluateConstitutionalGate(v___x_322_);
return v___x_323_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__147(void){
_start:
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = ((lean_object*)(lp_Echonomics_main___closed__134));
v___x_329_ = lp_Echonomics_Echonomics_CivicDunaGate_evaluateConstitutionalGate(v___x_328_);
return v___x_329_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__151(void){
_start:
{
lean_object* v___x_334_; uint8_t v___x_335_; 
v___x_334_ = ((lean_object*)(lp_Echonomics_main___closed__137));
v___x_335_ = lp_Echonomics_Echonomics_CivicDunaGate_evaluateConstitutionalGate(v___x_334_);
return v___x_335_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__156(void){
_start:
{
lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = ((lean_object*)(lp_Echonomics_main___closed__155));
v___x_344_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(v___x_343_);
return v___x_344_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__162(void){
_start:
{
lean_object* v___x_352_; uint8_t v___x_353_; 
v___x_352_ = lean_unsigned_to_nat(2u);
v___x_353_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isPrime(v___x_352_);
return v___x_353_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__163(void){
_start:
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(3u);
v___x_355_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isPrime(v___x_354_);
return v___x_355_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__164(void){
_start:
{
lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(5u);
v___x_357_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isPrime(v___x_356_);
return v___x_357_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__165(void){
_start:
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(4u);
v___x_359_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isPrime(v___x_358_);
return v___x_359_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__166(void){
_start:
{
lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_360_ = lean_unsigned_to_nat(1u);
v___x_361_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isPrime(v___x_360_);
return v___x_361_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__167(void){
_start:
{
lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isPrime(v___x_362_);
return v___x_363_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__171(void){
_start:
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = ((lean_object*)(lp_Echonomics_main___closed__170));
v___x_374_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_attestValidator(v___x_373_);
return v___x_374_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__174(void){
_start:
{
lean_object* v___x_381_; uint8_t v___x_382_; 
v___x_381_ = ((lean_object*)(lp_Echonomics_main___closed__173));
v___x_382_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_attestValidator(v___x_381_);
return v___x_382_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__180(void){
_start:
{
lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = ((lean_object*)(lp_Echonomics_main___closed__179));
v___x_396_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isContractive(v___x_395_);
return v___x_396_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__181(void){
_start:
{
lean_object* v___x_397_; uint8_t v___x_398_; 
v___x_397_ = ((lean_object*)(lp_Echonomics_main___closed__173));
v___x_398_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isContractive(v___x_397_);
return v___x_398_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__183(void){
_start:
{
uint8_t v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_401_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_401_, 0, v___x_400_);
lean_ctor_set_uint8(v___x_401_, 1, v___x_400_);
lean_ctor_set_uint8(v___x_401_, 2, v___x_400_);
return v___x_401_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__184(void){
_start:
{
uint8_t v___x_402_; uint8_t v___x_403_; lean_object* v___x_404_; 
v___x_402_ = 0;
v___x_403_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_404_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_404_, 0, v___x_403_);
lean_ctor_set_uint8(v___x_404_, 1, v___x_403_);
lean_ctor_set_uint8(v___x_404_, 2, v___x_402_);
return v___x_404_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__185(void){
_start:
{
lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_405_ = lean_obj_once(&lp_Echonomics_main___closed__183, &lp_Echonomics_main___closed__183_once, _init_lp_Echonomics_main___closed__183);
v___x_406_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isTripartiteConsensus(v___x_405_);
return v___x_406_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__186(void){
_start:
{
lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_407_ = lean_obj_once(&lp_Echonomics_main___closed__184, &lp_Echonomics_main___closed__184_once, _init_lp_Echonomics_main___closed__184);
v___x_408_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isTripartiteConsensus(v___x_407_);
return v___x_408_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__188(void){
_start:
{
uint8_t v___x_410_; uint8_t v___x_411_; lean_object* v___x_412_; 
v___x_410_ = 0;
v___x_411_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_412_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_412_, 0, v___x_411_);
lean_ctor_set_uint8(v___x_412_, 1, v___x_411_);
lean_ctor_set_uint8(v___x_412_, 2, v___x_410_);
lean_ctor_set_uint8(v___x_412_, 3, v___x_411_);
return v___x_412_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__189(void){
_start:
{
uint8_t v___x_413_; uint8_t v___x_414_; lean_object* v___x_415_; 
v___x_413_ = 0;
v___x_414_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_415_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_415_, 0, v___x_414_);
lean_ctor_set_uint8(v___x_415_, 1, v___x_414_);
lean_ctor_set_uint8(v___x_415_, 2, v___x_413_);
lean_ctor_set_uint8(v___x_415_, 3, v___x_413_);
return v___x_415_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__190(void){
_start:
{
uint8_t v___x_416_; lean_object* v___x_417_; 
v___x_416_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_417_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_417_, 0, v___x_416_);
lean_ctor_set_uint8(v___x_417_, 1, v___x_416_);
lean_ctor_set_uint8(v___x_417_, 2, v___x_416_);
lean_ctor_set_uint8(v___x_417_, 3, v___x_416_);
return v___x_417_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__191(void){
_start:
{
lean_object* v___x_418_; uint8_t v___x_419_; 
v___x_418_ = lean_obj_once(&lp_Echonomics_main___closed__188, &lp_Echonomics_main___closed__188_once, _init_lp_Echonomics_main___closed__188);
v___x_419_ = lp_Echonomics_Echonomics_BuurtzorgModel_isNonCoercive(v___x_418_);
return v___x_419_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__192(void){
_start:
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = lean_obj_once(&lp_Echonomics_main___closed__188, &lp_Echonomics_main___closed__188_once, _init_lp_Echonomics_main___closed__188);
v___x_421_ = lp_Echonomics_Echonomics_BuurtzorgModel_isEscalationAllowed(v___x_420_);
return v___x_421_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__193(void){
_start:
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = lean_obj_once(&lp_Echonomics_main___closed__189, &lp_Echonomics_main___closed__189_once, _init_lp_Echonomics_main___closed__189);
v___x_423_ = lp_Echonomics_Echonomics_BuurtzorgModel_isEscalationAllowed(v___x_422_);
return v___x_423_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__198(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; 
v___x_431_ = lean_unsigned_to_nat(100u);
v___x_432_ = lean_unsigned_to_nat(9000u);
v___x_433_ = lp_Echonomics_Echonomics_BuurtzorgModel_envelopeCovers90Days(v___x_432_, v___x_431_);
return v___x_433_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__199(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_434_ = lean_unsigned_to_nat(100u);
v___x_435_ = lean_unsigned_to_nat(8999u);
v___x_436_ = lp_Echonomics_Echonomics_BuurtzorgModel_envelopeCovers90Days(v___x_435_, v___x_434_);
return v___x_436_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__202(void){
_start:
{
lean_object* v___x_441_; uint8_t v___x_442_; 
v___x_441_ = ((lean_object*)(lp_Echonomics_main___closed__201));
v___x_442_ = lp_Echonomics_Echonomics_BuurtzorgModel_isTeamCapacityValid(v___x_441_);
return v___x_442_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__207(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = lp_Echonomics_Echonomics_BuurtzorgModel_allVirtues;
v___x_449_ = l_List_lengthTR___redArg(v___x_448_);
return v___x_449_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__208(void){
_start:
{
lean_object* v___x_450_; uint8_t v___x_451_; 
v___x_450_ = lean_unsigned_to_nat(16u);
v___x_451_ = lp_Echonomics_Echonomics_BuurtzorgModel_isOverheadWithinTarget(v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__210(void){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_453_ = lean_unsigned_to_nat(4u);
v___x_454_ = lp_Echonomics_Echonomics_SocialPhysicsParts_groundStateMultiplicity(v___x_453_);
return v___x_454_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__211(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_455_ = lean_unsigned_to_nat(5u);
v___x_456_ = lean_obj_once(&lp_Echonomics_main___closed__210, &lp_Echonomics_main___closed__210_once, _init_lp_Echonomics_main___closed__210);
v___x_457_ = lean_nat_dec_eq(v___x_456_, v___x_455_);
return v___x_457_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__212(void){
_start:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_unsigned_to_nat(0u);
v___x_459_ = lp_Echonomics_Echonomics_SocialPhysicsParts_groundStateMultiplicity(v___x_458_);
return v___x_459_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__213(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_obj_once(&lp_Echonomics_main___closed__212, &lp_Echonomics_main___closed__212_once, _init_lp_Echonomics_main___closed__212);
v___x_462_ = lean_nat_dec_eq(v___x_461_, v___x_460_);
return v___x_462_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__217(void){
_start:
{
lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_471_ = ((lean_object*)(lp_Echonomics_main___closed__215));
v___x_472_ = lp_Echonomics_Echonomics_SocialPhysicsParts_areLedgersSeparatedBool(v___x_471_);
return v___x_472_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__218(void){
_start:
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = ((lean_object*)(lp_Echonomics_main___closed__216));
v___x_474_ = lp_Echonomics_Echonomics_SocialPhysicsParts_areLedgersSeparatedBool(v___x_473_);
return v___x_474_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__222(void){
_start:
{
lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = ((lean_object*)(lp_Echonomics_main___closed__220));
v___x_483_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isPairingLegalSt(v___x_482_);
return v___x_483_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__225(void){
_start:
{
lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_489_ = ((lean_object*)(lp_Echonomics_main___closed__224));
v___x_490_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isPairingLegal(v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__229(void){
_start:
{
uint8_t v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_496_ = lean_unsigned_to_nat(1u);
v___x_497_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set_uint8(v___x_497_, sizeof(void*)*1, v___x_495_);
return v___x_497_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__230(void){
_start:
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = lean_obj_once(&lp_Echonomics_main___closed__229, &lp_Echonomics_main___closed__229_once, _init_lp_Echonomics_main___closed__229);
v___x_499_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isSlotCapacityValid(v___x_498_);
return v___x_499_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__231(void){
_start:
{
uint8_t v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_500_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_501_ = lean_unsigned_to_nat(2u);
v___x_502_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_502_, 0, v___x_501_);
lean_ctor_set_uint8(v___x_502_, sizeof(void*)*1, v___x_500_);
return v___x_502_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__232(void){
_start:
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = lean_obj_once(&lp_Echonomics_main___closed__231, &lp_Echonomics_main___closed__231_once, _init_lp_Echonomics_main___closed__231);
v___x_504_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isSlotCapacityValid(v___x_503_);
return v___x_504_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__233(void){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_505_ = lean_unsigned_to_nat(1u);
v___x_506_ = lp_Echonomics_Echonomics_SocialPhysicsParts_spinTagForOccupant(v___x_505_);
return v___x_506_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__235(void){
_start:
{
lean_object* v___x_510_; lean_object* v___x_511_; uint8_t v___x_512_; 
v___x_510_ = ((lean_object*)(lp_Echonomics_main___closed__234));
v___x_511_ = lean_obj_once(&lp_Echonomics_main___closed__233, &lp_Echonomics_main___closed__233_once, _init_lp_Echonomics_main___closed__233);
v___x_512_ = lp_Echonomics_Option_instBEq_beq___at___00main_spec__2(v___x_511_, v___x_510_);
return v___x_512_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__236(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_unsigned_to_nat(2u);
v___x_514_ = lp_Echonomics_Echonomics_SocialPhysicsParts_spinTagForOccupant(v___x_513_);
return v___x_514_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__238(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_518_ = ((lean_object*)(lp_Echonomics_main___closed__237));
v___x_519_ = lean_obj_once(&lp_Echonomics_main___closed__236, &lp_Echonomics_main___closed__236_once, _init_lp_Echonomics_main___closed__236);
v___x_520_ = lp_Echonomics_Option_instBEq_beq___at___00main_spec__2(v___x_519_, v___x_518_);
return v___x_520_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__240(void){
_start:
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = ((lean_object*)(lp_Echonomics_main___closed__239));
v___x_525_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isSlotCapacityValid(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__244(void){
_start:
{
uint8_t v___x_531_; uint8_t v___x_532_; lean_object* v___x_533_; 
v___x_531_ = 0;
v___x_532_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_533_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_533_, 0, v___x_532_);
lean_ctor_set_uint8(v___x_533_, 1, v___x_532_);
lean_ctor_set_uint8(v___x_533_, 2, v___x_531_);
return v___x_533_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__247(void){
_start:
{
uint8_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_536_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_537_ = lean_unsigned_to_nat(1009u);
v___x_538_ = lean_unsigned_to_nat(42u);
v___x_539_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_539_, 0, v___x_538_);
lean_ctor_set(v___x_539_, 1, v___x_537_);
lean_ctor_set_uint8(v___x_539_, sizeof(void*)*2, v___x_536_);
return v___x_539_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__248(void){
_start:
{
lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_540_ = lean_obj_once(&lp_Echonomics_main___closed__247, &lp_Echonomics_main___closed__247_once, _init_lp_Echonomics_main___closed__247);
v___x_541_ = lp_Echonomics_Echonomics_LambdaProof_isIdentityLawful(v___x_540_);
return v___x_541_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__253(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = ((lean_object*)(lp_Echonomics_main___closed__252));
v___x_549_ = lp_Echonomics_Echonomics_HundianCodebookRunbook_calculateMultiplicity(v___x_548_);
return v___x_549_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__254(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_550_ = lean_unsigned_to_nat(4u);
v___x_551_ = lean_obj_once(&lp_Echonomics_main___closed__253, &lp_Echonomics_main___closed__253_once, _init_lp_Echonomics_main___closed__253);
v___x_552_ = lean_nat_dec_eq(v___x_551_, v___x_550_);
return v___x_552_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__258(void){
_start:
{
lean_object* v___x_557_; uint8_t v___x_558_; 
v___x_557_ = ((lean_object*)(lp_Echonomics_main___closed__127));
v___x_558_ = lp_Echonomics_Echonomics_CivicDunaGate_isQuorumReached(v___x_557_);
return v___x_558_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__262(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; 
v___x_563_ = lp_Echonomics_Echonomics_CivicInfrastructureSpec_allL0Invariants;
v___x_564_ = l_List_lengthTR___redArg(v___x_563_);
return v___x_564_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__268(void){
_start:
{
uint8_t v___x_571_; uint8_t v___x_572_; lean_object* v___x_573_; 
v___x_571_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_572_ = 0;
v___x_573_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_573_, 0, v___x_572_);
lean_ctor_set_uint8(v___x_573_, 1, v___x_571_);
return v___x_573_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__269(void){
_start:
{
lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_574_ = lean_obj_once(&lp_Echonomics_main___closed__268, &lp_Echonomics_main___closed__268_once, _init_lp_Echonomics_main___closed__268);
v___x_575_ = lp_Echonomics_Echonomics_CivicInfrastructureSpec_isEquityPmcpFirewalled(v___x_574_);
return v___x_575_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__273(void){
_start:
{
lean_object* v___x_580_; uint8_t v___x_581_; uint8_t v___x_582_; lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = 0;
v___x_582_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_583_ = lean_unsigned_to_nat(100u);
v___x_584_ = lp_Echonomics_Echonomics_CivicInfrastructureSpec_isMaterialAsset(v___x_583_, v___x_582_, v___x_581_, v___x_580_);
return v___x_584_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__274(void){
_start:
{
lean_object* v___x_585_; uint8_t v___x_586_; lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_585_ = lean_unsigned_to_nat(0u);
v___x_586_ = 0;
v___x_587_ = lean_unsigned_to_nat(20000u);
v___x_588_ = lp_Echonomics_Echonomics_CivicInfrastructureSpec_isMaterialAsset(v___x_587_, v___x_586_, v___x_586_, v___x_585_);
return v___x_588_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__275(void){
_start:
{
lean_object* v___x_589_; uint8_t v___x_590_; lean_object* v___x_591_; uint8_t v___x_592_; 
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = 0;
v___x_591_ = lean_unsigned_to_nat(100u);
v___x_592_ = lp_Echonomics_Echonomics_CivicInfrastructureSpec_isMaterialAsset(v___x_591_, v___x_590_, v___x_590_, v___x_589_);
return v___x_592_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__279(void){
_start:
{
uint8_t v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; 
v___x_597_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_598_ = 0;
v___x_599_ = lean_alloc_ctor(0, 0, 5);
lean_ctor_set_uint8(v___x_599_, 0, v___x_598_);
lean_ctor_set_uint8(v___x_599_, 1, v___x_598_);
lean_ctor_set_uint8(v___x_599_, 2, v___x_598_);
lean_ctor_set_uint8(v___x_599_, 3, v___x_597_);
lean_ctor_set_uint8(v___x_599_, 4, v___x_598_);
return v___x_599_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__285(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = ((lean_object*)(lp_Echonomics_main___closed__284));
v___x_611_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v___x_610_);
return v___x_611_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__286(void){
_start:
{
lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_612_ = ((lean_object*)(lp_Echonomics_main___closed__283));
v___x_613_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v___x_612_);
return v___x_613_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__287(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_614_ = lean_obj_once(&lp_Echonomics_main___closed__286, &lp_Echonomics_main___closed__286_once, _init_lp_Echonomics_main___closed__286);
v___x_615_ = lean_obj_once(&lp_Echonomics_main___closed__285, &lp_Echonomics_main___closed__285_once, _init_lp_Echonomics_main___closed__285);
v___x_616_ = lean_int_dec_lt(v___x_615_, v___x_614_);
return v___x_616_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__293(void){
_start:
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = ((lean_object*)(lp_Echonomics_main___closed__291));
v___x_628_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v___x_627_);
return v___x_628_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__294(void){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = ((lean_object*)(lp_Echonomics_main___closed__292));
v___x_630_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v___x_629_);
return v___x_630_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__295(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_631_ = lean_obj_once(&lp_Echonomics_main___closed__294, &lp_Echonomics_main___closed__294_once, _init_lp_Echonomics_main___closed__294);
v___x_632_ = lean_obj_once(&lp_Echonomics_main___closed__293, &lp_Echonomics_main___closed__293_once, _init_lp_Echonomics_main___closed__293);
v___x_633_ = lean_int_dec_lt(v___x_632_, v___x_631_);
return v___x_633_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__299(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_unsigned_to_nat(7u);
v___x_639_ = lean_nat_to_int(v___x_638_);
return v___x_639_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__300(void){
_start:
{
lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_640_ = lean_obj_once(&lp_Echonomics_main___closed__299, &lp_Echonomics_main___closed__299_once, _init_lp_Echonomics_main___closed__299);
v___x_641_ = lean_int_neg(v___x_640_);
return v___x_641_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__306(void){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_650_ = ((lean_object*)(lp_Echonomics_main___closed__292));
v___x_651_ = ((lean_object*)(lp_Echonomics_main___closed__305));
v___x_652_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v___x_651_, v___x_650_);
return v___x_652_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__307(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_653_ = ((lean_object*)(lp_Echonomics_main___closed__305));
v___x_654_ = ((lean_object*)(lp_Echonomics_main___closed__292));
v___x_655_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v___x_654_, v___x_653_);
return v___x_655_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__312(void){
_start:
{
uint8_t v___x_661_; lean_object* v___x_662_; 
v___x_661_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_662_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_662_, 0, v___x_661_);
lean_ctor_set_uint8(v___x_662_, 1, v___x_661_);
lean_ctor_set_uint8(v___x_662_, 2, v___x_661_);
return v___x_662_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__313(void){
_start:
{
lean_object* v___x_663_; uint8_t v___x_664_; 
v___x_663_ = lean_obj_once(&lp_Echonomics_main___closed__312, &lp_Echonomics_main___closed__312_once, _init_lp_Echonomics_main___closed__312);
v___x_664_ = lp_Echonomics_Echonomics_XiConstitutionLicense_evaluateCslGate(v___x_663_);
return v___x_664_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__315(void){
_start:
{
lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_668_ = ((lean_object*)(lp_Echonomics_main___closed__314));
v___x_669_ = lp_Echonomics_Echonomics_XiConstitutionLicense_isLawfulRecursion(v___x_668_);
return v___x_669_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__317(void){
_start:
{
uint8_t v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_672_ = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(v___x_672_, 0, v___x_671_);
lean_ctor_set_uint8(v___x_672_, 1, v___x_671_);
lean_ctor_set_uint8(v___x_672_, 2, v___x_671_);
return v___x_672_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__318(void){
_start:
{
lean_object* v___x_673_; uint8_t v___x_674_; 
v___x_673_ = lean_obj_once(&lp_Echonomics_main___closed__317, &lp_Echonomics_main___closed__317_once, _init_lp_Echonomics_main___closed__317);
v___x_674_ = lp_Echonomics_Echonomics_XiConstitutionLicense_flowCertificates(v___x_673_);
return v___x_674_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__322(void){
_start:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_679_ = lean_obj_once(&lp_Echonomics_main___closed__317, &lp_Echonomics_main___closed__317_once, _init_lp_Echonomics_main___closed__317);
v___x_680_ = ((lean_object*)(lp_Echonomics_main___closed__314));
v___x_681_ = lean_obj_once(&lp_Echonomics_main___closed__312, &lp_Echonomics_main___closed__312_once, _init_lp_Echonomics_main___closed__312);
v___x_682_ = lp_Echonomics_Echonomics_XiConstitutionLicense_isXiCertified(v___x_681_, v___x_680_, v___x_679_);
return v___x_682_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__327(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_689_ = ((lean_object*)(lp_Echonomics_main___closed__326));
v___x_690_ = lean_obj_once(&lp_Echonomics_main___closed__317, &lp_Echonomics_main___closed__317_once, _init_lp_Echonomics_main___closed__317);
v___x_691_ = ((lean_object*)(lp_Echonomics_main___closed__314));
v___x_692_ = lean_obj_once(&lp_Echonomics_main___closed__312, &lp_Echonomics_main___closed__312_once, _init_lp_Echonomics_main___closed__312);
v___x_693_ = lp_Echonomics_Echonomics_XiConstitutionLicense_isLicenseGranted(v___x_692_, v___x_691_, v___x_690_, v___x_689_);
return v___x_693_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__331(void){
_start:
{
uint8_t v___x_698_; uint8_t v___x_699_; lean_object* v___x_700_; 
v___x_698_ = 0;
v___x_699_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
v___x_700_ = lean_alloc_ctor(0, 0, 5);
lean_ctor_set_uint8(v___x_700_, 0, v___x_699_);
lean_ctor_set_uint8(v___x_700_, 1, v___x_698_);
lean_ctor_set_uint8(v___x_700_, 2, v___x_698_);
lean_ctor_set_uint8(v___x_700_, 3, v___x_698_);
lean_ctor_set_uint8(v___x_700_, 4, v___x_698_);
return v___x_700_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__332(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_701_ = lean_obj_once(&lp_Echonomics_main___closed__331, &lp_Echonomics_main___closed__331_once, _init_lp_Echonomics_main___closed__331);
v___x_702_ = lean_obj_once(&lp_Echonomics_main___closed__317, &lp_Echonomics_main___closed__317_once, _init_lp_Echonomics_main___closed__317);
v___x_703_ = ((lean_object*)(lp_Echonomics_main___closed__314));
v___x_704_ = lean_obj_once(&lp_Echonomics_main___closed__312, &lp_Echonomics_main___closed__312_once, _init_lp_Echonomics_main___closed__312);
v___x_705_ = lp_Echonomics_Echonomics_XiConstitutionLicense_isLicenseGranted(v___x_704_, v___x_703_, v___x_702_, v___x_701_);
return v___x_705_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__337(void){
_start:
{
lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_713_ = ((lean_object*)(lp_Echonomics_main___closed__336));
v___x_714_ = lp_Echonomics_Echonomics_UorPrimeGeometry_evaluateConservationGate(v___x_713_);
return v___x_714_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__340(void){
_start:
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = ((lean_object*)(lp_Echonomics_main___closed__339));
v___x_719_ = lp_Echonomics_Echonomics_UorPrimeGeometry_evaluateConservationGate(v___x_718_);
return v___x_719_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__345(void){
_start:
{
lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_727_ = ((lean_object*)(lp_Echonomics_main___closed__344));
v___x_728_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isPrimeLocked(v___x_727_);
return v___x_728_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__346(void){
_start:
{
lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_729_ = ((lean_object*)(lp_Echonomics_main___closed__344));
v___x_730_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(v___x_729_);
return v___x_730_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__349(void){
_start:
{
lean_object* v___x_735_; uint8_t v___x_736_; 
v___x_735_ = ((lean_object*)(lp_Echonomics_main___closed__348));
v___x_736_ = lp_Echonomics_Echonomics_UorPrimeGeometry_evaluateConservationGate(v___x_735_);
return v___x_736_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__353(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_741_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__1));
v___x_742_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__0));
v___x_743_ = lp_Echonomics_Echonomics_EnergyLedger_isGroundState(v___x_742_, v___x_741_);
return v___x_743_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__357(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__0));
v___x_749_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v___x_748_);
return v___x_749_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__358(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = lean_unsigned_to_nat(5u);
v___x_751_ = lean_nat_to_int(v___x_750_);
return v___x_751_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__359(void){
_start:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = lean_obj_once(&lp_Echonomics_main___closed__358, &lp_Echonomics_main___closed__358_once, _init_lp_Echonomics_main___closed__358);
v___x_753_ = lean_int_neg(v___x_752_);
return v___x_753_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__360(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; 
v___x_754_ = lean_obj_once(&lp_Echonomics_main___closed__359, &lp_Echonomics_main___closed__359_once, _init_lp_Echonomics_main___closed__359);
v___x_755_ = lean_obj_once(&lp_Echonomics_main___closed__357, &lp_Echonomics_main___closed__357_once, _init_lp_Echonomics_main___closed__357);
v___x_756_ = lean_int_dec_eq(v___x_755_, v___x_754_);
return v___x_756_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__361(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__1));
v___x_758_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v___x_757_);
return v___x_758_;
}
}
static lean_object* _init_lp_Echonomics_main___closed__362(void){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_unsigned_to_nat(4u);
v___x_760_ = lean_nat_to_int(v___x_759_);
return v___x_760_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__363(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; uint8_t v___x_763_; 
v___x_761_ = lean_obj_once(&lp_Echonomics_main___closed__362, &lp_Echonomics_main___closed__362_once, _init_lp_Echonomics_main___closed__362);
v___x_762_ = lean_obj_once(&lp_Echonomics_main___closed__361, &lp_Echonomics_main___closed__361_once, _init_lp_Echonomics_main___closed__361);
v___x_763_ = lean_int_dec_eq(v___x_762_, v___x_761_);
return v___x_763_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__367(void){
_start:
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = ((lean_object*)(lp_Echonomics_main___closed__365));
v___x_771_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated(v___x_770_);
return v___x_771_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__368(void){
_start:
{
lean_object* v___x_772_; uint8_t v___x_773_; 
v___x_772_ = ((lean_object*)(lp_Echonomics_main___closed__366));
v___x_773_ = lp_Echonomics_Echonomics_EnergyLedger_instDecidableAreLedgersSeparated(v___x_772_);
return v___x_773_;
}
}
static uint8_t _init_lp_Echonomics_main___closed__369(void){
_start:
{
lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_774_ = ((lean_object*)(lp_Echonomics_main___closed__336));
v___x_775_ = lp_Echonomics_Echonomics_UorPrimeGeometry_isConserved(v___x_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* _lean_main(){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = ((lean_object*)(lp_Echonomics_main___closed__38));
v___x_847_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_846_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_1665_; 
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_1665_ == 0)
{
lean_object* v_unused_1666_; 
v_unused_1666_ = lean_ctor_get(v___x_847_, 0);
lean_dec(v_unused_1666_);
v___x_849_ = v___x_847_;
v_isShared_850_ = v_isSharedCheck_1665_;
goto v_resetjp_848_;
}
else
{
lean_dec(v___x_847_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_1665_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_851_ = lean_unsigned_to_nat(3u);
v___x_852_ = lean_unsigned_to_nat(4u);
v___x_853_ = lean_uint8_once(&lp_Echonomics_main___closed__40, &lp_Echonomics_main___closed__40_once, _init_lp_Echonomics_main___closed__40);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_854_ = ((lean_object*)(lp_Echonomics_main___closed__42));
if (v_isShared_850_ == 0)
{
lean_ctor_set_tag(v___x_849_, 1);
lean_ctor_set(v___x_849_, 0, v___x_854_);
v___x_856_ = v___x_849_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; 
lean_del_object(v___x_849_);
v___x_858_ = ((lean_object*)(lp_Echonomics_main___closed__43));
v___x_859_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_858_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_1663_; 
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_1663_ == 0)
{
lean_object* v_unused_1664_; 
v_unused_1664_ = lean_ctor_get(v___x_859_, 0);
lean_dec(v_unused_1664_);
v___x_861_ = v___x_859_;
v_isShared_862_ = v_isSharedCheck_1663_;
goto v_resetjp_860_;
}
else
{
lean_dec(v___x_859_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_1663_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_863_ = lean_unsigned_to_nat(0u);
v___x_864_ = lean_uint8_once(&lp_Echonomics_main___closed__45, &lp_Echonomics_main___closed__45_once, _init_lp_Echonomics_main___closed__45);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_865_ = ((lean_object*)(lp_Echonomics_main___closed__47));
if (v_isShared_862_ == 0)
{
lean_ctor_set_tag(v___x_861_, 1);
lean_ctor_set(v___x_861_, 0, v___x_865_);
v___x_867_ = v___x_861_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
else
{
lean_object* v___x_869_; lean_object* v___x_870_; 
lean_del_object(v___x_861_);
v___x_869_ = ((lean_object*)(lp_Echonomics_main___closed__48));
v___x_870_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_869_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_1661_; 
v_isSharedCheck_1661_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_1661_ == 0)
{
lean_object* v_unused_1662_; 
v_unused_1662_ = lean_ctor_get(v___x_870_, 0);
lean_dec(v_unused_1662_);
v___x_872_ = v___x_870_;
v_isShared_873_ = v_isSharedCheck_1661_;
goto v_resetjp_871_;
}
else
{
lean_dec(v___x_870_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_1661_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = lean_unsigned_to_nat(1u);
v___x_875_ = lean_uint8_once(&lp_Echonomics_main___closed__50, &lp_Echonomics_main___closed__50_once, _init_lp_Echonomics_main___closed__50);
if (v___x_875_ == 0)
{
lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_876_ = ((lean_object*)(lp_Echonomics_main___closed__52));
if (v_isShared_873_ == 0)
{
lean_ctor_set_tag(v___x_872_, 1);
lean_ctor_set(v___x_872_, 0, v___x_876_);
v___x_878_ = v___x_872_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_876_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
else
{
lean_object* v___x_880_; lean_object* v___x_881_; 
lean_del_object(v___x_872_);
v___x_880_ = ((lean_object*)(lp_Echonomics_main___closed__53));
v___x_881_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_880_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_1659_; 
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_1659_ == 0)
{
lean_object* v_unused_1660_; 
v_unused_1660_ = lean_ctor_get(v___x_881_, 0);
lean_dec(v_unused_1660_);
v___x_883_ = v___x_881_;
v_isShared_884_ = v_isSharedCheck_1659_;
goto v_resetjp_882_;
}
else
{
lean_dec(v___x_881_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_1659_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
uint8_t v___x_885_; 
v___x_885_ = lean_uint8_once(&lp_Echonomics_main___closed__55, &lp_Echonomics_main___closed__55_once, _init_lp_Echonomics_main___closed__55);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; lean_object* v___x_888_; 
v___x_886_ = ((lean_object*)(lp_Echonomics_main___closed__57));
if (v_isShared_884_ == 0)
{
lean_ctor_set_tag(v___x_883_, 1);
lean_ctor_set(v___x_883_, 0, v___x_886_);
v___x_888_ = v___x_883_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_886_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; 
lean_del_object(v___x_883_);
v___x_890_ = ((lean_object*)(lp_Echonomics_main___closed__58));
v___x_891_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_890_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_1657_; 
v_isSharedCheck_1657_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_1657_ == 0)
{
lean_object* v_unused_1658_; 
v_unused_1658_ = lean_ctor_get(v___x_891_, 0);
lean_dec(v_unused_1658_);
v___x_893_ = v___x_891_;
v_isShared_894_ = v_isSharedCheck_1657_;
goto v_resetjp_892_;
}
else
{
lean_dec(v___x_891_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_1657_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
uint8_t v___x_895_; 
v___x_895_ = lean_uint8_once(&lp_Echonomics_main___closed__61, &lp_Echonomics_main___closed__61_once, _init_lp_Echonomics_main___closed__61);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; lean_object* v___x_898_; 
v___x_896_ = ((lean_object*)(lp_Echonomics_main___closed__63));
if (v_isShared_894_ == 0)
{
lean_ctor_set_tag(v___x_893_, 1);
lean_ctor_set(v___x_893_, 0, v___x_896_);
v___x_898_ = v___x_893_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_896_);
v___x_898_ = v_reuseFailAlloc_899_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
return v___x_898_;
}
}
else
{
lean_object* v___x_900_; lean_object* v___x_901_; 
lean_del_object(v___x_893_);
v___x_900_ = ((lean_object*)(lp_Echonomics_main___closed__64));
v___x_901_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_900_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_1655_; 
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_1655_ == 0)
{
lean_object* v_unused_1656_; 
v_unused_1656_ = lean_ctor_get(v___x_901_, 0);
lean_dec(v_unused_1656_);
v___x_903_ = v___x_901_;
v_isShared_904_ = v_isSharedCheck_1655_;
goto v_resetjp_902_;
}
else
{
lean_dec(v___x_901_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_1655_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
uint8_t v___x_905_; 
v___x_905_ = lean_uint8_once(&lp_Echonomics_main___closed__67, &lp_Echonomics_main___closed__67_once, _init_lp_Echonomics_main___closed__67);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_906_ = ((lean_object*)(lp_Echonomics_main___closed__69));
if (v_isShared_904_ == 0)
{
lean_ctor_set_tag(v___x_903_, 1);
lean_ctor_set(v___x_903_, 0, v___x_906_);
v___x_908_ = v___x_903_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v___x_906_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; 
lean_del_object(v___x_903_);
v___x_910_ = ((lean_object*)(lp_Echonomics_main___closed__70));
v___x_911_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_910_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_1653_; 
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_1653_ == 0)
{
lean_object* v_unused_1654_; 
v_unused_1654_ = lean_ctor_get(v___x_911_, 0);
lean_dec(v_unused_1654_);
v___x_913_ = v___x_911_;
v_isShared_914_ = v_isSharedCheck_1653_;
goto v_resetjp_912_;
}
else
{
lean_dec(v___x_911_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_1653_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
uint8_t v___x_915_; 
v___x_915_ = lean_uint8_once(&lp_Echonomics_main___closed__72, &lp_Echonomics_main___closed__72_once, _init_lp_Echonomics_main___closed__72);
if (v___x_915_ == 0)
{
lean_object* v___x_916_; lean_object* v___x_918_; 
v___x_916_ = ((lean_object*)(lp_Echonomics_main___closed__74));
if (v_isShared_914_ == 0)
{
lean_ctor_set_tag(v___x_913_, 1);
lean_ctor_set(v___x_913_, 0, v___x_916_);
v___x_918_ = v___x_913_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v___x_916_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
else
{
lean_object* v___x_920_; lean_object* v___x_921_; 
lean_del_object(v___x_913_);
v___x_920_ = ((lean_object*)(lp_Echonomics_main___closed__75));
v___x_921_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_920_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_1651_; 
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_1651_ == 0)
{
lean_object* v_unused_1652_; 
v_unused_1652_ = lean_ctor_get(v___x_921_, 0);
lean_dec(v_unused_1652_);
v___x_923_ = v___x_921_;
v_isShared_924_ = v_isSharedCheck_1651_;
goto v_resetjp_922_;
}
else
{
lean_dec(v___x_921_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_1651_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
uint8_t v___x_925_; 
v___x_925_ = lean_uint8_once(&lp_Echonomics_main___closed__77, &lp_Echonomics_main___closed__77_once, _init_lp_Echonomics_main___closed__77);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; lean_object* v___x_928_; 
v___x_926_ = ((lean_object*)(lp_Echonomics_main___closed__79));
if (v_isShared_924_ == 0)
{
lean_ctor_set_tag(v___x_923_, 1);
lean_ctor_set(v___x_923_, 0, v___x_926_);
v___x_928_ = v___x_923_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v___x_926_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
else
{
lean_object* v___x_930_; lean_object* v___x_931_; 
lean_del_object(v___x_923_);
v___x_930_ = ((lean_object*)(lp_Echonomics_main___closed__80));
v___x_931_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_1649_; 
v_isSharedCheck_1649_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_1649_ == 0)
{
lean_object* v_unused_1650_; 
v_unused_1650_ = lean_ctor_get(v___x_931_, 0);
lean_dec(v_unused_1650_);
v___x_933_ = v___x_931_;
v_isShared_934_ = v_isSharedCheck_1649_;
goto v_resetjp_932_;
}
else
{
lean_dec(v___x_931_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_1649_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
uint8_t v___x_935_; 
v___x_935_ = lean_uint8_once(&lp_Echonomics_main___closed__82, &lp_Echonomics_main___closed__82_once, _init_lp_Echonomics_main___closed__82);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_938_; 
v___x_936_ = ((lean_object*)(lp_Echonomics_main___closed__84));
if (v_isShared_934_ == 0)
{
lean_ctor_set_tag(v___x_933_, 1);
lean_ctor_set(v___x_933_, 0, v___x_936_);
v___x_938_ = v___x_933_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v___x_936_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
else
{
lean_object* v___x_940_; lean_object* v___x_941_; 
lean_del_object(v___x_933_);
v___x_940_ = ((lean_object*)(lp_Echonomics_main___closed__85));
v___x_941_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_1647_; 
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_1647_ == 0)
{
lean_object* v_unused_1648_; 
v_unused_1648_ = lean_ctor_get(v___x_941_, 0);
lean_dec(v_unused_1648_);
v___x_943_ = v___x_941_;
v_isShared_944_ = v_isSharedCheck_1647_;
goto v_resetjp_942_;
}
else
{
lean_dec(v___x_941_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_1647_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
uint8_t v___x_945_; 
v___x_945_ = lean_uint8_once(&lp_Echonomics_main___closed__87, &lp_Echonomics_main___closed__87_once, _init_lp_Echonomics_main___closed__87);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_946_ = ((lean_object*)(lp_Echonomics_main___closed__89));
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 1);
lean_ctor_set(v___x_943_, 0, v___x_946_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
else
{
lean_object* v___x_950_; lean_object* v___x_951_; 
lean_del_object(v___x_943_);
v___x_950_ = ((lean_object*)(lp_Echonomics_main___closed__90));
v___x_951_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_950_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_1645_; 
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_1645_ == 0)
{
lean_object* v_unused_1646_; 
v_unused_1646_ = lean_ctor_get(v___x_951_, 0);
lean_dec(v_unused_1646_);
v___x_953_ = v___x_951_;
v_isShared_954_ = v_isSharedCheck_1645_;
goto v_resetjp_952_;
}
else
{
lean_dec(v___x_951_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_1645_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; uint8_t v___x_956_; 
v___x_955_ = lean_unsigned_to_nat(10u);
v___x_956_ = lean_uint8_once(&lp_Echonomics_main___closed__92, &lp_Echonomics_main___closed__92_once, _init_lp_Echonomics_main___closed__92);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; lean_object* v___x_959_; 
v___x_957_ = ((lean_object*)(lp_Echonomics_main___closed__94));
if (v_isShared_954_ == 0)
{
lean_ctor_set_tag(v___x_953_, 1);
lean_ctor_set(v___x_953_, 0, v___x_957_);
v___x_959_ = v___x_953_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v___x_957_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
else
{
lean_object* v___x_961_; lean_object* v___x_962_; 
lean_del_object(v___x_953_);
v___x_961_ = ((lean_object*)(lp_Echonomics_main___closed__95));
v___x_962_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_961_);
if (lean_obj_tag(v___x_962_) == 0)
{
lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_1643_; 
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_1643_ == 0)
{
lean_object* v_unused_1644_; 
v_unused_1644_ = lean_ctor_get(v___x_962_, 0);
lean_dec(v_unused_1644_);
v___x_964_ = v___x_962_;
v_isShared_965_ = v_isSharedCheck_1643_;
goto v_resetjp_963_;
}
else
{
lean_dec(v___x_962_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_1643_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
uint8_t v___x_966_; 
v___x_966_ = lean_uint8_once(&lp_Echonomics_main___closed__96, &lp_Echonomics_main___closed__96_once, _init_lp_Echonomics_main___closed__96);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; lean_object* v___x_969_; 
v___x_967_ = ((lean_object*)(lp_Echonomics_main___closed__98));
if (v_isShared_965_ == 0)
{
lean_ctor_set_tag(v___x_964_, 1);
lean_ctor_set(v___x_964_, 0, v___x_967_);
v___x_969_ = v___x_964_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v___x_967_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
else
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_del_object(v___x_964_);
v___x_971_ = ((lean_object*)(lp_Echonomics_main___closed__99));
v___x_972_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_971_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_1641_; 
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_1641_ == 0)
{
lean_object* v_unused_1642_; 
v_unused_1642_ = lean_ctor_get(v___x_972_, 0);
lean_dec(v_unused_1642_);
v___x_974_ = v___x_972_;
v_isShared_975_ = v_isSharedCheck_1641_;
goto v_resetjp_973_;
}
else
{
lean_dec(v___x_972_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_1641_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
uint8_t v___x_976_; 
v___x_976_ = lean_uint8_once(&lp_Echonomics_main___closed__100, &lp_Echonomics_main___closed__100_once, _init_lp_Echonomics_main___closed__100);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; lean_object* v___x_979_; 
v___x_977_ = ((lean_object*)(lp_Echonomics_main___closed__102));
if (v_isShared_975_ == 0)
{
lean_ctor_set_tag(v___x_974_, 1);
lean_ctor_set(v___x_974_, 0, v___x_977_);
v___x_979_ = v___x_974_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_977_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; 
lean_del_object(v___x_974_);
v___x_981_ = ((lean_object*)(lp_Echonomics_main___closed__103));
v___x_982_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_1639_; 
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_1639_ == 0)
{
lean_object* v_unused_1640_; 
v_unused_1640_ = lean_ctor_get(v___x_982_, 0);
lean_dec(v_unused_1640_);
v___x_984_ = v___x_982_;
v_isShared_985_ = v_isSharedCheck_1639_;
goto v_resetjp_983_;
}
else
{
lean_dec(v___x_982_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_1639_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
uint8_t v___x_986_; 
v___x_986_ = lean_uint8_once(&lp_Echonomics_main___closed__105, &lp_Echonomics_main___closed__105_once, _init_lp_Echonomics_main___closed__105);
if (v___x_986_ == 0)
{
lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_987_ = ((lean_object*)(lp_Echonomics_main___closed__107));
if (v_isShared_985_ == 0)
{
lean_ctor_set_tag(v___x_984_, 1);
lean_ctor_set(v___x_984_, 0, v___x_987_);
v___x_989_ = v___x_984_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v___x_987_);
v___x_989_ = v_reuseFailAlloc_990_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
return v___x_989_;
}
}
else
{
lean_object* v___x_991_; lean_object* v___x_992_; 
lean_del_object(v___x_984_);
v___x_991_ = ((lean_object*)(lp_Echonomics_main___closed__108));
v___x_992_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_991_);
if (lean_obj_tag(v___x_992_) == 0)
{
lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1637_; 
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_992_);
if (v_isSharedCheck_1637_ == 0)
{
lean_object* v_unused_1638_; 
v_unused_1638_ = lean_ctor_get(v___x_992_, 0);
lean_dec(v_unused_1638_);
v___x_994_ = v___x_992_;
v_isShared_995_ = v_isSharedCheck_1637_;
goto v_resetjp_993_;
}
else
{
lean_dec(v___x_992_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1637_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
uint8_t v___x_996_; 
v___x_996_ = lean_uint8_once(&lp_Echonomics_main___closed__110, &lp_Echonomics_main___closed__110_once, _init_lp_Echonomics_main___closed__110);
if (v___x_996_ == 0)
{
lean_object* v___x_997_; lean_object* v___x_999_; 
v___x_997_ = ((lean_object*)(lp_Echonomics_main___closed__112));
if (v_isShared_995_ == 0)
{
lean_ctor_set_tag(v___x_994_, 1);
lean_ctor_set(v___x_994_, 0, v___x_997_);
v___x_999_ = v___x_994_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
else
{
lean_object* v___x_1001_; lean_object* v___x_1002_; 
lean_del_object(v___x_994_);
v___x_1001_ = ((lean_object*)(lp_Echonomics_main___closed__113));
v___x_1002_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1001_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1635_; 
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1635_ == 0)
{
lean_object* v_unused_1636_; 
v_unused_1636_ = lean_ctor_get(v___x_1002_, 0);
lean_dec(v_unused_1636_);
v___x_1004_ = v___x_1002_;
v_isShared_1005_ = v_isSharedCheck_1635_;
goto v_resetjp_1003_;
}
else
{
lean_dec(v___x_1002_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1635_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
uint8_t v___x_1006_; 
v___x_1006_ = lean_uint8_once(&lp_Echonomics_main___closed__114, &lp_Echonomics_main___closed__114_once, _init_lp_Echonomics_main___closed__114);
if (v___x_1006_ == 0)
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1007_ = ((lean_object*)(lp_Echonomics_main___closed__116));
if (v_isShared_1005_ == 0)
{
lean_ctor_set_tag(v___x_1004_, 1);
lean_ctor_set(v___x_1004_, 0, v___x_1007_);
v___x_1009_ = v___x_1004_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
else
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
lean_del_object(v___x_1004_);
v___x_1011_ = ((lean_object*)(lp_Echonomics_main___closed__117));
v___x_1012_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1011_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1633_; 
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; 
v_unused_1634_ = lean_ctor_get(v___x_1012_, 0);
lean_dec(v_unused_1634_);
v___x_1014_ = v___x_1012_;
v_isShared_1015_ = v_isSharedCheck_1633_;
goto v_resetjp_1013_;
}
else
{
lean_dec(v___x_1012_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1633_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
uint8_t v___x_1016_; 
v___x_1016_ = lean_uint8_once(&lp_Echonomics_main___closed__118, &lp_Echonomics_main___closed__118_once, _init_lp_Echonomics_main___closed__118);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
lean_del_object(v___x_1014_);
v___x_1017_ = ((lean_object*)(lp_Echonomics_main___closed__119));
v___x_1018_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1017_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1627_; 
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1627_ == 0)
{
lean_object* v_unused_1628_; 
v_unused_1628_ = lean_ctor_get(v___x_1018_, 0);
lean_dec(v_unused_1628_);
v___x_1020_ = v___x_1018_;
v_isShared_1021_ = v_isSharedCheck_1627_;
goto v_resetjp_1019_;
}
else
{
lean_dec(v___x_1018_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1627_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
uint8_t v___x_1022_; 
v___x_1022_ = lean_uint8_once(&lp_Echonomics_main___closed__120, &lp_Echonomics_main___closed__120_once, _init_lp_Echonomics_main___closed__120);
if (v___x_1022_ == 0)
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
lean_del_object(v___x_1020_);
v___x_1023_ = ((lean_object*)(lp_Echonomics_main___closed__121));
v___x_1024_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1023_);
if (lean_obj_tag(v___x_1024_) == 0)
{
lean_object* v___x_1025_; uint8_t v___y_1027_; lean_object* v___x_1034_; 
lean_dec_ref_known(v___x_1024_, 1);
v___x_1025_ = ((lean_object*)(lp_Echonomics_main___closed__122));
v___x_1034_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1025_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
lean_dec_ref_known(v___x_1034_, 1);
v___x_1035_ = ((lean_object*)(lp_Echonomics_main___closed__126));
v___x_1036_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1035_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v___x_1037_; 
lean_dec_ref_known(v___x_1036_, 1);
v___x_1037_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1025_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1621_; 
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1621_ == 0)
{
lean_object* v_unused_1622_; 
v_unused_1622_ = lean_ctor_get(v___x_1037_, 0);
lean_dec(v_unused_1622_);
v___x_1039_ = v___x_1037_;
v_isShared_1040_ = v_isSharedCheck_1621_;
goto v_resetjp_1038_;
}
else
{
lean_dec(v___x_1037_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1621_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
uint8_t v___x_1041_; 
v___x_1041_ = lean_uint8_once(&lp_Echonomics_main___closed__128, &lp_Echonomics_main___closed__128_once, _init_lp_Echonomics_main___closed__128);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1044_; 
v___x_1042_ = ((lean_object*)(lp_Echonomics_main___closed__130));
if (v_isShared_1040_ == 0)
{
lean_ctor_set_tag(v___x_1039_, 1);
lean_ctor_set(v___x_1039_, 0, v___x_1042_);
v___x_1044_ = v___x_1039_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v___x_1042_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
lean_del_object(v___x_1039_);
v___x_1046_ = ((lean_object*)(lp_Echonomics_main___closed__131));
v___x_1047_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1046_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1619_; 
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1619_ == 0)
{
lean_object* v_unused_1620_; 
v_unused_1620_ = lean_ctor_get(v___x_1047_, 0);
lean_dec(v_unused_1620_);
v___x_1049_ = v___x_1047_;
v_isShared_1050_ = v_isSharedCheck_1619_;
goto v_resetjp_1048_;
}
else
{
lean_dec(v___x_1047_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1619_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1056_; uint8_t v___x_1057_; 
v___x_1056_ = lean_unsigned_to_nat(100u);
v___x_1057_ = lean_uint8_once(&lp_Echonomics_main___closed__135, &lp_Echonomics_main___closed__135_once, _init_lp_Echonomics_main___closed__135);
if (v___x_1057_ == 0)
{
if (v___x_1041_ == 0)
{
goto v___jp_1051_;
}
else
{
lean_object* v___x_1058_; lean_object* v___x_1059_; 
lean_del_object(v___x_1049_);
v___x_1058_ = ((lean_object*)(lp_Echonomics_main___closed__136));
v___x_1059_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1058_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1617_; 
v_isSharedCheck_1617_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1617_ == 0)
{
lean_object* v_unused_1618_; 
v_unused_1618_ = lean_ctor_get(v___x_1059_, 0);
lean_dec(v_unused_1618_);
v___x_1061_ = v___x_1059_;
v_isShared_1062_ = v_isSharedCheck_1617_;
goto v_resetjp_1060_;
}
else
{
lean_dec(v___x_1059_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1617_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
uint8_t v___x_1063_; 
v___x_1063_ = lean_uint8_once(&lp_Echonomics_main___closed__138, &lp_Echonomics_main___closed__138_once, _init_lp_Echonomics_main___closed__138);
if (v___x_1063_ == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_del_object(v___x_1061_);
v___x_1064_ = ((lean_object*)(lp_Echonomics_main___closed__139));
v___x_1065_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1064_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1611_; 
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v___x_1065_, 0);
lean_dec(v_unused_1612_);
v___x_1067_ = v___x_1065_;
v_isShared_1068_ = v_isSharedCheck_1611_;
goto v_resetjp_1066_;
}
else
{
lean_dec(v___x_1065_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1611_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
uint8_t v___x_1069_; 
v___x_1069_ = lean_uint8_once(&lp_Echonomics_main___closed__141, &lp_Echonomics_main___closed__141_once, _init_lp_Echonomics_main___closed__141);
if (v___x_1069_ == 0)
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
lean_del_object(v___x_1067_);
v___x_1070_ = ((lean_object*)(lp_Echonomics_main___closed__142));
v___x_1071_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1070_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1605_; 
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1605_ == 0)
{
lean_object* v_unused_1606_; 
v_unused_1606_ = lean_ctor_get(v___x_1071_, 0);
lean_dec(v_unused_1606_);
v___x_1073_ = v___x_1071_;
v_isShared_1074_ = v_isSharedCheck_1605_;
goto v_resetjp_1072_;
}
else
{
lean_dec(v___x_1071_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1605_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
uint8_t v___x_1075_; uint8_t v___x_1076_; uint8_t v___x_1077_; 
v___x_1075_ = lean_uint8_once(&lp_Echonomics_main___closed__143, &lp_Echonomics_main___closed__143_once, _init_lp_Echonomics_main___closed__143);
v___x_1076_ = 0;
v___x_1077_ = lp_Echonomics_Echonomics_CivicDunaGate_instDecidableEqConstitutionalDecision(v___x_1075_, v___x_1076_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; lean_object* v___x_1080_; 
v___x_1078_ = ((lean_object*)(lp_Echonomics_main___closed__145));
if (v_isShared_1074_ == 0)
{
lean_ctor_set_tag(v___x_1073_, 1);
lean_ctor_set(v___x_1073_, 0, v___x_1078_);
v___x_1080_ = v___x_1073_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1078_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
else
{
lean_object* v___x_1082_; lean_object* v___x_1083_; 
lean_del_object(v___x_1073_);
v___x_1082_ = ((lean_object*)(lp_Echonomics_main___closed__146));
v___x_1083_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1082_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1603_; 
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1603_ == 0)
{
lean_object* v_unused_1604_; 
v_unused_1604_ = lean_ctor_get(v___x_1083_, 0);
lean_dec(v_unused_1604_);
v___x_1085_ = v___x_1083_;
v_isShared_1086_ = v_isSharedCheck_1603_;
goto v_resetjp_1084_;
}
else
{
lean_dec(v___x_1083_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1603_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
uint8_t v___x_1087_; uint8_t v___x_1088_; uint8_t v___x_1089_; 
v___x_1087_ = lean_uint8_once(&lp_Echonomics_main___closed__147, &lp_Echonomics_main___closed__147_once, _init_lp_Echonomics_main___closed__147);
v___x_1088_ = 1;
v___x_1089_ = lp_Echonomics_Echonomics_CivicDunaGate_instDecidableEqConstitutionalDecision(v___x_1087_, v___x_1088_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1090_ = ((lean_object*)(lp_Echonomics_main___closed__149));
if (v_isShared_1086_ == 0)
{
lean_ctor_set_tag(v___x_1085_, 1);
lean_ctor_set(v___x_1085_, 0, v___x_1090_);
v___x_1092_ = v___x_1085_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
else
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
lean_del_object(v___x_1085_);
v___x_1094_ = ((lean_object*)(lp_Echonomics_main___closed__150));
v___x_1095_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1094_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1601_; 
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1601_ == 0)
{
lean_object* v_unused_1602_; 
v_unused_1602_ = lean_ctor_get(v___x_1095_, 0);
lean_dec(v_unused_1602_);
v___x_1097_ = v___x_1095_;
v_isShared_1098_ = v_isSharedCheck_1601_;
goto v_resetjp_1096_;
}
else
{
lean_dec(v___x_1095_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1601_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
uint8_t v___x_1099_; uint8_t v___x_1100_; uint8_t v___x_1101_; 
v___x_1099_ = lean_uint8_once(&lp_Echonomics_main___closed__151, &lp_Echonomics_main___closed__151_once, _init_lp_Echonomics_main___closed__151);
v___x_1100_ = 2;
v___x_1101_ = lp_Echonomics_Echonomics_CivicDunaGate_instDecidableEqConstitutionalDecision(v___x_1099_, v___x_1100_);
if (v___x_1101_ == 0)
{
lean_object* v___x_1102_; lean_object* v___x_1104_; 
v___x_1102_ = ((lean_object*)(lp_Echonomics_main___closed__153));
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 1);
lean_ctor_set(v___x_1097_, 0, v___x_1102_);
v___x_1104_ = v___x_1097_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
else
{
lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1106_ = ((lean_object*)(lp_Echonomics_main___closed__154));
v___x_1107_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1106_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1599_; 
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1599_ == 0)
{
lean_object* v_unused_1600_; 
v_unused_1600_ = lean_ctor_get(v___x_1107_, 0);
lean_dec(v_unused_1600_);
v___x_1109_ = v___x_1107_;
v_isShared_1110_ = v_isSharedCheck_1599_;
goto v_resetjp_1108_;
}
else
{
lean_dec(v___x_1107_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1599_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1111_; uint8_t v___x_1112_; 
v___x_1111_ = lean_unsigned_to_nat(12u);
v___x_1112_ = lean_uint8_once(&lp_Echonomics_main___closed__156, &lp_Echonomics_main___closed__156_once, _init_lp_Echonomics_main___closed__156);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; lean_object* v___x_1115_; 
lean_del_object(v___x_1097_);
v___x_1113_ = ((lean_object*)(lp_Echonomics_main___closed__158));
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 1);
lean_ctor_set(v___x_1109_, 0, v___x_1113_);
v___x_1115_ = v___x_1109_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1113_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
else
{
lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1117_ = ((lean_object*)(lp_Echonomics_main___closed__159));
v___x_1118_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1117_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1597_; 
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1597_ == 0)
{
lean_object* v_unused_1598_; 
v_unused_1598_ = lean_ctor_get(v___x_1118_, 0);
lean_dec(v_unused_1598_);
v___x_1120_ = v___x_1118_;
v_isShared_1121_ = v_isSharedCheck_1597_;
goto v_resetjp_1119_;
}
else
{
lean_dec(v___x_1118_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1597_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
uint8_t v___x_1127_; 
v___x_1127_ = lean_uint8_once(&lp_Echonomics_main___closed__162, &lp_Echonomics_main___closed__162_once, _init_lp_Echonomics_main___closed__162);
if (v___x_1127_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1122_;
}
else
{
uint8_t v___x_1128_; 
v___x_1128_ = lean_uint8_once(&lp_Echonomics_main___closed__163, &lp_Echonomics_main___closed__163_once, _init_lp_Echonomics_main___closed__163);
if (v___x_1128_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1122_;
}
else
{
uint8_t v___x_1129_; 
v___x_1129_ = lean_uint8_once(&lp_Echonomics_main___closed__164, &lp_Echonomics_main___closed__164_once, _init_lp_Echonomics_main___closed__164);
if (v___x_1129_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1122_;
}
else
{
uint8_t v___x_1130_; 
v___x_1130_ = lean_uint8_once(&lp_Echonomics_main___closed__165, &lp_Echonomics_main___closed__165_once, _init_lp_Echonomics_main___closed__165);
if (v___x_1130_ == 0)
{
uint8_t v___x_1131_; 
v___x_1131_ = lean_uint8_once(&lp_Echonomics_main___closed__166, &lp_Echonomics_main___closed__166_once, _init_lp_Echonomics_main___closed__166);
if (v___x_1131_ == 0)
{
uint8_t v___x_1132_; lean_object* v___y_1134_; uint8_t v___y_1135_; lean_object* v___y_1152_; uint8_t v___y_1153_; lean_object* v___y_1159_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1169_; lean_object* v___y_1177_; lean_object* v___y_1178_; uint8_t v___y_1179_; lean_object* v___y_1192_; uint8_t v___y_1193_; lean_object* v___y_1199_; lean_object* v___y_1200_; lean_object* v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; uint8_t v___y_1205_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; uint8_t v___y_1234_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1249_; uint8_t v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1257_; lean_object* v___y_1258_; lean_object* v___y_1259_; lean_object* v___y_1260_; lean_object* v___y_1281_; lean_object* v___y_1282_; lean_object* v___y_1283_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1385_; lean_object* v___y_1386_; lean_object* v___y_1387_; lean_object* v___y_1388_; lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1391_; uint8_t v___y_1392_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; uint8_t v___y_1415_; 
v___x_1132_ = lean_uint8_once(&lp_Echonomics_main___closed__167, &lp_Echonomics_main___closed__167_once, _init_lp_Echonomics_main___closed__167);
if (v___x_1132_ == 0)
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
lean_del_object(v___x_1120_);
v___x_1524_ = ((lean_object*)(lp_Echonomics_main___closed__333));
v___x_1525_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1524_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1595_; 
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; 
v_unused_1596_ = lean_ctor_get(v___x_1525_, 0);
lean_dec(v_unused_1596_);
v___x_1527_ = v___x_1525_;
v_isShared_1528_ = v_isSharedCheck_1595_;
goto v_resetjp_1526_;
}
else
{
lean_dec(v___x_1525_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1595_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
uint8_t v___x_1534_; uint8_t v___y_1536_; uint8_t v___x_1594_; 
v___x_1534_ = lean_uint8_once(&lp_Echonomics_main___closed__337, &lp_Echonomics_main___closed__337_once, _init_lp_Echonomics_main___closed__337);
v___x_1594_ = lean_uint8_once(&lp_Echonomics_main___closed__369, &lp_Echonomics_main___closed__369_once, _init_lp_Echonomics_main___closed__369);
if (v___x_1594_ == 0)
{
v___y_1536_ = v___x_1129_;
goto v___jp_1535_;
}
else
{
v___y_1536_ = v___x_1132_;
goto v___jp_1535_;
}
v___jp_1529_:
{
lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1530_ = ((lean_object*)(lp_Echonomics_main___closed__335));
if (v_isShared_1528_ == 0)
{
lean_ctor_set_tag(v___x_1527_, 1);
lean_ctor_set(v___x_1527_, 0, v___x_1530_);
v___x_1532_ = v___x_1527_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
v___jp_1535_:
{
if (v___y_1536_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1529_;
}
else
{
uint8_t v___x_1537_; uint8_t v___x_1538_; 
v___x_1537_ = 1;
v___x_1538_ = lp_Echonomics_Echonomics_UorPrimeGeometry_instDecidableEqConservationDecision(v___x_1534_, v___x_1537_);
if (v___x_1538_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1529_;
}
else
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
lean_del_object(v___x_1527_);
v___x_1539_ = ((lean_object*)(lp_Echonomics_main___closed__338));
v___x_1540_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1539_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1592_; 
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1592_ == 0)
{
lean_object* v_unused_1593_; 
v_unused_1593_ = lean_ctor_get(v___x_1540_, 0);
lean_dec(v_unused_1593_);
v___x_1542_ = v___x_1540_;
v_isShared_1543_ = v_isSharedCheck_1592_;
goto v_resetjp_1541_;
}
else
{
lean_dec(v___x_1540_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1592_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
uint8_t v___x_1544_; uint8_t v___x_1545_; uint8_t v___x_1546_; 
v___x_1544_ = lean_uint8_once(&lp_Echonomics_main___closed__340, &lp_Echonomics_main___closed__340_once, _init_lp_Echonomics_main___closed__340);
v___x_1545_ = 0;
v___x_1546_ = lp_Echonomics_Echonomics_UorPrimeGeometry_instDecidableEqConservationDecision(v___x_1544_, v___x_1545_);
if (v___x_1546_ == 0)
{
lean_object* v___x_1547_; lean_object* v___x_1549_; 
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1547_ = ((lean_object*)(lp_Echonomics_main___closed__342));
if (v_isShared_1543_ == 0)
{
lean_ctor_set_tag(v___x_1542_, 1);
lean_ctor_set(v___x_1542_, 0, v___x_1547_);
v___x_1549_ = v___x_1542_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v___x_1547_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
else
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_del_object(v___x_1542_);
v___x_1551_ = ((lean_object*)(lp_Echonomics_main___closed__343));
v___x_1552_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1551_);
if (lean_obj_tag(v___x_1552_) == 0)
{
uint8_t v___x_1553_; 
lean_dec_ref_known(v___x_1552_, 1);
v___x_1553_ = lean_uint8_once(&lp_Echonomics_main___closed__345, &lp_Echonomics_main___closed__345_once, _init_lp_Echonomics_main___closed__345);
if (v___x_1553_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_789_;
}
else
{
uint8_t v___x_1554_; 
v___x_1554_ = lean_uint8_once(&lp_Echonomics_main___closed__346, &lp_Echonomics_main___closed__346_once, _init_lp_Echonomics_main___closed__346);
if (v___x_1554_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_789_;
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1555_ = ((lean_object*)(lp_Echonomics_main___closed__347));
v___x_1556_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1555_);
if (lean_obj_tag(v___x_1556_) == 0)
{
lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1590_; 
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1556_);
if (v_isSharedCheck_1590_ == 0)
{
lean_object* v_unused_1591_; 
v_unused_1591_ = lean_ctor_get(v___x_1556_, 0);
lean_dec(v_unused_1591_);
v___x_1558_ = v___x_1556_;
v_isShared_1559_ = v_isSharedCheck_1590_;
goto v_resetjp_1557_;
}
else
{
lean_dec(v___x_1556_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1590_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
uint8_t v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = lean_uint8_once(&lp_Echonomics_main___closed__349, &lp_Echonomics_main___closed__349_once, _init_lp_Echonomics_main___closed__349);
v___x_1561_ = lp_Echonomics_Echonomics_UorPrimeGeometry_instDecidableEqConservationDecision(v___x_1560_, v___x_1537_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1564_; 
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1562_ = ((lean_object*)(lp_Echonomics_main___closed__351));
if (v_isShared_1559_ == 0)
{
lean_ctor_set_tag(v___x_1558_, 1);
lean_ctor_set(v___x_1558_, 0, v___x_1562_);
v___x_1564_ = v___x_1558_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v___x_1562_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
else
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
lean_del_object(v___x_1558_);
v___x_1566_ = ((lean_object*)(lp_Echonomics_main___closed__352));
v___x_1567_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1566_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1588_; 
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1588_ == 0)
{
lean_object* v_unused_1589_; 
v_unused_1589_ = lean_ctor_get(v___x_1567_, 0);
lean_dec(v_unused_1589_);
v___x_1569_ = v___x_1567_;
v_isShared_1570_ = v_isSharedCheck_1588_;
goto v_resetjp_1568_;
}
else
{
lean_dec(v___x_1567_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1588_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; uint8_t v___x_1575_; 
v___x_1571_ = lean_unsigned_to_nat(15u);
v___x_1572_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__0));
v___x_1573_ = lean_unsigned_to_nat(8u);
v___x_1574_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__1));
v___x_1575_ = lean_uint8_once(&lp_Echonomics_main___closed__353, &lp_Echonomics_main___closed__353_once, _init_lp_Echonomics_main___closed__353);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; lean_object* v___x_1578_; 
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1576_ = ((lean_object*)(lp_Echonomics_main___closed__355));
if (v_isShared_1570_ == 0)
{
lean_ctor_set_tag(v___x_1569_, 1);
lean_ctor_set(v___x_1569_, 0, v___x_1576_);
v___x_1578_ = v___x_1569_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
else
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_del_object(v___x_1569_);
v___x_1580_ = ((lean_object*)(lp_Echonomics_main___closed__356));
v___x_1581_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1580_);
if (lean_obj_tag(v___x_1581_) == 0)
{
uint8_t v___x_1582_; 
lean_dec_ref_known(v___x_1581_, 1);
v___x_1582_ = lean_uint8_once(&lp_Echonomics_main___closed__360, &lp_Echonomics_main___closed__360_once, _init_lp_Echonomics_main___closed__360);
if (v___x_1582_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_792_;
}
else
{
uint8_t v___x_1583_; 
v___x_1583_ = lean_uint8_once(&lp_Echonomics_main___closed__363, &lp_Echonomics_main___closed__363_once, _init_lp_Echonomics_main___closed__363);
if (v___x_1583_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_792_;
}
else
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = ((lean_object*)(lp_Echonomics_main___closed__364));
v___x_1585_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1584_);
if (lean_obj_tag(v___x_1585_) == 0)
{
uint8_t v___x_1586_; 
lean_dec_ref_known(v___x_1585_, 1);
v___x_1586_ = lean_uint8_once(&lp_Echonomics_main___closed__367, &lp_Echonomics_main___closed__367_once, _init_lp_Echonomics_main___closed__367);
if (v___x_1586_ == 0)
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_795_;
}
else
{
uint8_t v___x_1587_; 
v___x_1587_ = lean_uint8_once(&lp_Echonomics_main___closed__368, &lp_Echonomics_main___closed__368_once, _init_lp_Echonomics_main___closed__368);
if (v___x_1587_ == 0)
{
v___y_1411_ = v___x_1574_;
v___y_1412_ = v___x_1571_;
v___y_1413_ = v___x_1573_;
v___y_1414_ = v___x_1572_;
v___y_1415_ = v___x_1586_;
goto v___jp_1410_;
}
else
{
v___y_1411_ = v___x_1574_;
v___y_1412_ = v___x_1571_;
v___y_1413_ = v___x_1573_;
v___y_1414_ = v___x_1572_;
v___y_1415_ = v___x_1132_;
goto v___jp_1410_;
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1585_;
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1581_;
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1567_;
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1556_;
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1552_;
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1540_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1525_;
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1122_;
}
v___jp_1133_:
{
if (v___y_1135_ == 0)
{
lean_dec(v___y_1134_);
goto v___jp_825_;
}
else
{
lean_object* v___x_1136_; uint8_t v___x_1137_; uint8_t v___x_1138_; uint8_t v___x_1139_; 
v___x_1136_ = lean_box(0);
v___x_1137_ = lean_uint8_once(&lp_Echonomics_main___closed__171, &lp_Echonomics_main___closed__171_once, _init_lp_Echonomics_main___closed__171);
v___x_1138_ = 0;
v___x_1139_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_instDecidableEqAttestationResult(v___x_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_dec(v___y_1134_);
goto v___jp_825_;
}
else
{
uint8_t v___x_1140_; uint8_t v___x_1141_; uint8_t v___x_1142_; 
v___x_1140_ = lean_uint8_once(&lp_Echonomics_main___closed__174, &lp_Echonomics_main___closed__174_once, _init_lp_Echonomics_main___closed__174);
v___x_1141_ = 1;
v___x_1142_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_instDecidableEqAttestationResult(v___x_1140_, v___x_1141_);
if (v___x_1142_ == 0)
{
lean_dec(v___y_1134_);
goto v___jp_825_;
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = ((lean_object*)(lp_Echonomics_main___closed__175));
v___x_1144_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1143_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
lean_dec_ref_known(v___x_1144_, 1);
v___x_1145_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1145_, 0, v___x_874_);
lean_ctor_set(v___x_1145_, 1, v___y_1134_);
lean_ctor_set_uint8(v___x_1145_, sizeof(void*)*2, v___x_853_);
lean_inc_ref(v___x_1145_);
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v___x_1136_);
v___x_1147_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isAuditComplete(v___x_1146_);
lean_dec_ref_known(v___x_1146_, 2);
if (v___x_1147_ == 0)
{
lean_dec_ref_known(v___x_1145_, 2);
goto v___jp_828_;
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1148_ = ((lean_object*)(lp_Echonomics_main___closed__177));
v___x_1149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1145_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = lp_Echonomics_Echonomics_TrifectaProtocolReview_isAuditComplete(v___x_1149_);
lean_dec_ref_known(v___x_1149_, 2);
if (v___x_1150_ == 0)
{
v___y_1027_ = v___x_1147_;
goto v___jp_1026_;
}
else
{
v___y_1027_ = v___x_1132_;
goto v___jp_1026_;
}
}
}
else
{
lean_dec(v___y_1134_);
return v___x_1144_;
}
}
}
}
}
v___jp_1151_:
{
if (v___y_1153_ == 0)
{
lean_dec(v___y_1152_);
goto v___jp_822_;
}
else
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1154_ = ((lean_object*)(lp_Echonomics_main___closed__178));
v___x_1155_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1154_);
if (lean_obj_tag(v___x_1155_) == 0)
{
uint8_t v___x_1156_; 
lean_dec_ref_known(v___x_1155_, 1);
v___x_1156_ = lean_uint8_once(&lp_Echonomics_main___closed__180, &lp_Echonomics_main___closed__180_once, _init_lp_Echonomics_main___closed__180);
if (v___x_1156_ == 0)
{
lean_dec(v___y_1152_);
goto v___jp_825_;
}
else
{
uint8_t v___x_1157_; 
v___x_1157_ = lean_uint8_once(&lp_Echonomics_main___closed__181, &lp_Echonomics_main___closed__181_once, _init_lp_Echonomics_main___closed__181);
if (v___x_1157_ == 0)
{
v___y_1134_ = v___y_1152_;
v___y_1135_ = v___x_1156_;
goto v___jp_1133_;
}
else
{
v___y_1134_ = v___y_1152_;
v___y_1135_ = v___x_1132_;
goto v___jp_1133_;
}
}
}
else
{
lean_dec(v___y_1152_);
return v___x_1155_;
}
}
}
v___jp_1158_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = ((lean_object*)(lp_Echonomics_main___closed__182));
v___x_1161_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1160_);
if (lean_obj_tag(v___x_1161_) == 0)
{
uint8_t v___x_1162_; 
lean_dec_ref_known(v___x_1161_, 1);
v___x_1162_ = lean_uint8_once(&lp_Echonomics_main___closed__185, &lp_Echonomics_main___closed__185_once, _init_lp_Echonomics_main___closed__185);
if (v___x_1162_ == 0)
{
lean_dec(v___y_1159_);
goto v___jp_822_;
}
else
{
uint8_t v___x_1163_; 
v___x_1163_ = lean_uint8_once(&lp_Echonomics_main___closed__186, &lp_Echonomics_main___closed__186_once, _init_lp_Echonomics_main___closed__186);
if (v___x_1163_ == 0)
{
v___y_1152_ = v___y_1159_;
v___y_1153_ = v___x_1162_;
goto v___jp_1151_;
}
else
{
v___y_1152_ = v___y_1159_;
v___y_1153_ = v___x_1132_;
goto v___jp_1151_;
}
}
}
else
{
lean_dec(v___y_1159_);
return v___x_1161_;
}
}
v___jp_1164_:
{
uint8_t v___x_1167_; 
v___x_1167_ = lp_Echonomics_Echonomics_BuurtzorgModel_isEscalationAllowed(v___y_1166_);
if (v___x_1167_ == 0)
{
v___y_1159_ = v___y_1165_;
goto v___jp_1158_;
}
else
{
if (v___x_1132_ == 0)
{
lean_dec(v___y_1165_);
goto v___jp_831_;
}
else
{
v___y_1159_ = v___y_1165_;
goto v___jp_1158_;
}
}
}
v___jp_1168_:
{
lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1170_ = ((lean_object*)(lp_Echonomics_main___closed__187));
v___x_1171_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1170_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v___x_1172_; uint8_t v___x_1173_; 
lean_dec_ref_known(v___x_1171_, 1);
v___x_1172_ = lean_obj_once(&lp_Echonomics_main___closed__190, &lp_Echonomics_main___closed__190_once, _init_lp_Echonomics_main___closed__190);
v___x_1173_ = lean_uint8_once(&lp_Echonomics_main___closed__191, &lp_Echonomics_main___closed__191_once, _init_lp_Echonomics_main___closed__191);
if (v___x_1173_ == 0)
{
lean_dec(v___y_1169_);
goto v___jp_831_;
}
else
{
uint8_t v___x_1174_; 
v___x_1174_ = lean_uint8_once(&lp_Echonomics_main___closed__192, &lp_Echonomics_main___closed__192_once, _init_lp_Echonomics_main___closed__192);
if (v___x_1174_ == 0)
{
lean_dec(v___y_1169_);
goto v___jp_831_;
}
else
{
uint8_t v___x_1175_; 
v___x_1175_ = lean_uint8_once(&lp_Echonomics_main___closed__193, &lp_Echonomics_main___closed__193_once, _init_lp_Echonomics_main___closed__193);
if (v___x_1175_ == 0)
{
v___y_1165_ = v___y_1169_;
v___y_1166_ = v___x_1172_;
goto v___jp_1164_;
}
else
{
if (v___x_1132_ == 0)
{
lean_dec(v___y_1169_);
goto v___jp_831_;
}
else
{
v___y_1165_ = v___y_1169_;
v___y_1166_ = v___x_1172_;
goto v___jp_1164_;
}
}
}
}
}
else
{
lean_dec(v___y_1169_);
return v___x_1171_;
}
}
v___jp_1176_:
{
if (v___y_1179_ == 0)
{
lean_object* v___x_1180_; lean_object* v___x_1182_; 
lean_dec(v___y_1178_);
lean_dec(v___y_1177_);
v___x_1180_ = ((lean_object*)(lp_Echonomics_main___closed__195));
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 1);
lean_ctor_set(v___x_1109_, 0, v___x_1180_);
v___x_1182_ = v___x_1109_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
else
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
lean_del_object(v___x_1109_);
v___x_1184_ = ((lean_object*)(lp_Echonomics_main___closed__196));
v___x_1185_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1184_);
if (lean_obj_tag(v___x_1185_) == 0)
{
lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; 
lean_dec_ref_known(v___x_1185_, 1);
v___x_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1186_, 0, v___x_874_);
lean_ctor_set(v___x_1186_, 1, v___y_1177_);
v___x_1187_ = ((lean_object*)(lp_Echonomics_main___closed__197));
v___x_1188_ = lp_Echonomics_Echonomics_BuurtzorgModel_isMappingValid(v___x_1186_, v___x_1187_);
lean_dec_ref_known(v___x_1186_, 2);
if (v___x_1188_ == 0)
{
lean_dec(v___y_1178_);
goto v___jp_834_;
}
else
{
uint8_t v___x_1189_; 
v___x_1189_ = lean_uint8_once(&lp_Echonomics_main___closed__198, &lp_Echonomics_main___closed__198_once, _init_lp_Echonomics_main___closed__198);
if (v___x_1189_ == 0)
{
lean_dec(v___y_1178_);
goto v___jp_834_;
}
else
{
uint8_t v___x_1190_; 
v___x_1190_ = lean_uint8_once(&lp_Echonomics_main___closed__199, &lp_Echonomics_main___closed__199_once, _init_lp_Echonomics_main___closed__199);
if (v___x_1190_ == 0)
{
v___y_1169_ = v___y_1178_;
goto v___jp_1168_;
}
else
{
if (v___x_1132_ == 0)
{
lean_dec(v___y_1178_);
goto v___jp_834_;
}
else
{
v___y_1169_ = v___y_1178_;
goto v___jp_1168_;
}
}
}
}
}
else
{
lean_dec(v___y_1178_);
lean_dec(v___y_1177_);
return v___x_1185_;
}
}
}
v___jp_1191_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = ((lean_object*)(lp_Echonomics_main___closed__200));
v___x_1195_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1194_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v___x_1196_; uint8_t v___x_1197_; 
lean_dec_ref_known(v___x_1195_, 1);
v___x_1196_ = lean_unsigned_to_nat(13u);
v___x_1197_ = lean_uint8_once(&lp_Echonomics_main___closed__202, &lp_Echonomics_main___closed__202_once, _init_lp_Echonomics_main___closed__202);
if (v___x_1197_ == 0)
{
v___y_1177_ = v___y_1192_;
v___y_1178_ = v___x_1196_;
v___y_1179_ = v___y_1193_;
goto v___jp_1176_;
}
else
{
v___y_1177_ = v___y_1192_;
v___y_1178_ = v___x_1196_;
v___y_1179_ = v___x_1132_;
goto v___jp_1176_;
}
}
else
{
lean_dec(v___y_1192_);
lean_del_object(v___x_1109_);
return v___x_1195_;
}
}
v___jp_1198_:
{
if (v___y_1205_ == 0)
{
lean_dec(v___y_1203_);
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
goto v___jp_819_;
}
else
{
lean_object* v___x_1206_; uint8_t v___x_1207_; 
lean_inc_ref(v___y_1204_);
v___x_1206_ = lp_Echonomics_Echonomics_SocialPhysicsParts_totalEnergy(v___y_1204_);
v___x_1207_ = lean_int_dec_eq(v___x_1206_, v___y_1200_);
lean_dec(v___x_1206_);
if (v___x_1207_ == 0)
{
lean_dec(v___y_1203_);
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
goto v___jp_819_;
}
else
{
uint8_t v___x_1208_; 
lean_inc_ref(v___y_1204_);
lean_inc_ref(v___y_1201_);
v___x_1208_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isGroundState(v___y_1201_, v___y_1204_);
if (v___x_1208_ == 0)
{
lean_dec(v___y_1203_);
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
goto v___jp_819_;
}
else
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = ((lean_object*)(lp_Echonomics_main___closed__203));
v___x_1210_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1209_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1226_; 
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v___x_1210_, 0);
lean_dec(v_unused_1227_);
v___x_1212_ = v___x_1210_;
v_isShared_1213_ = v_isSharedCheck_1226_;
goto v_resetjp_1211_;
}
else
{
lean_dec(v___x_1210_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1226_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1214_; uint8_t v___x_1215_; 
lean_inc(v___y_1203_);
v___x_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___y_1203_);
lean_ctor_set(v___x_1214_, 1, v___x_1111_);
v___x_1215_ = lp_Echonomics_Echonomics_BuurtzorgModel_isTeamCapacityValid(v___x_1214_);
lean_dec_ref_known(v___x_1214_, 2);
if (v___x_1215_ == 0)
{
lean_object* v___x_1216_; lean_object* v___x_1218_; 
lean_dec(v___y_1203_);
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
v___x_1216_ = ((lean_object*)(lp_Echonomics_main___closed__205));
if (v_isShared_1213_ == 0)
{
lean_ctor_set_tag(v___x_1212_, 1);
lean_ctor_set(v___x_1212_, 0, v___x_1216_);
v___x_1218_ = v___x_1212_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v___x_1216_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
else
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
lean_del_object(v___x_1212_);
v___x_1220_ = ((lean_object*)(lp_Echonomics_main___closed__206));
v___x_1221_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1220_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1222_; uint8_t v___x_1223_; 
lean_dec_ref_known(v___x_1221_, 1);
v___x_1222_ = lean_obj_once(&lp_Echonomics_main___closed__207, &lp_Echonomics_main___closed__207_once, _init_lp_Echonomics_main___closed__207);
v___x_1223_ = lean_nat_dec_eq(v___x_1222_, v___y_1203_);
lean_dec(v___y_1203_);
if (v___x_1223_ == 0)
{
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
goto v___jp_837_;
}
else
{
uint8_t v___x_1224_; 
v___x_1224_ = lp_Echonomics_Echonomics_BuurtzorgModel_isOverheadWithinTarget(v___y_1202_);
if (v___x_1224_ == 0)
{
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
goto v___jp_837_;
}
else
{
uint8_t v___x_1225_; 
v___x_1225_ = lean_uint8_once(&lp_Echonomics_main___closed__208, &lp_Echonomics_main___closed__208_once, _init_lp_Echonomics_main___closed__208);
if (v___x_1225_ == 0)
{
v___y_1192_ = v___y_1199_;
v___y_1193_ = v___x_1215_;
goto v___jp_1191_;
}
else
{
if (v___x_1132_ == 0)
{
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
goto v___jp_837_;
}
else
{
v___y_1192_ = v___y_1199_;
v___y_1193_ = v___x_1215_;
goto v___jp_1191_;
}
}
}
}
}
else
{
lean_dec(v___y_1203_);
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
return v___x_1221_;
}
}
}
}
else
{
lean_dec(v___y_1203_);
lean_dec(v___y_1199_);
lean_del_object(v___x_1109_);
return v___x_1210_;
}
}
}
}
}
v___jp_1228_:
{
if (v___y_1234_ == 0)
{
lean_dec(v___y_1233_);
lean_dec(v___y_1229_);
lean_del_object(v___x_1109_);
goto v___jp_813_;
}
else
{
uint8_t v___x_1235_; 
v___x_1235_ = lp_Echonomics_Echonomics_SocialPhysicsParts_isPairingLegalSt(v___y_1231_);
if (v___x_1235_ == 0)
{
lean_dec(v___y_1233_);
lean_dec(v___y_1229_);
lean_del_object(v___x_1109_);
goto v___jp_813_;
}
else
{
lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1236_ = ((lean_object*)(lp_Echonomics_main___closed__209));
v___x_1237_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1236_);
if (lean_obj_tag(v___x_1237_) == 0)
{
uint8_t v___x_1238_; 
lean_dec_ref_known(v___x_1237_, 1);
v___x_1238_ = lean_uint8_once(&lp_Echonomics_main___closed__211, &lp_Echonomics_main___closed__211_once, _init_lp_Echonomics_main___closed__211);
if (v___x_1238_ == 0)
{
lean_dec(v___y_1233_);
lean_dec(v___y_1229_);
lean_del_object(v___x_1109_);
goto v___jp_816_;
}
else
{
uint8_t v___x_1239_; 
v___x_1239_ = lean_uint8_once(&lp_Echonomics_main___closed__213, &lp_Echonomics_main___closed__213_once, _init_lp_Echonomics_main___closed__213);
if (v___x_1239_ == 0)
{
lean_dec(v___y_1233_);
lean_dec(v___y_1229_);
lean_del_object(v___x_1109_);
goto v___jp_816_;
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1240_ = ((lean_object*)(lp_Echonomics_main___closed__214));
v___x_1241_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1240_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
lean_dec_ref_known(v___x_1241_, 1);
v___x_1242_ = ((lean_object*)(lp_Echonomics_main___closed__215));
v___x_1243_ = ((lean_object*)(lp_Echonomics_main___closed__216));
v___x_1244_ = lean_uint8_once(&lp_Echonomics_main___closed__217, &lp_Echonomics_main___closed__217_once, _init_lp_Echonomics_main___closed__217);
if (v___x_1244_ == 0)
{
lean_dec(v___y_1233_);
lean_dec(v___y_1229_);
lean_del_object(v___x_1109_);
goto v___jp_819_;
}
else
{
uint8_t v___x_1245_; 
v___x_1245_ = lean_uint8_once(&lp_Echonomics_main___closed__218, &lp_Echonomics_main___closed__218_once, _init_lp_Echonomics_main___closed__218);
if (v___x_1245_ == 0)
{
v___y_1199_ = v___y_1229_;
v___y_1200_ = v___y_1230_;
v___y_1201_ = v___x_1243_;
v___y_1202_ = v___y_1232_;
v___y_1203_ = v___y_1233_;
v___y_1204_ = v___x_1242_;
v___y_1205_ = v___x_1244_;
goto v___jp_1198_;
}
else
{
v___y_1199_ = v___y_1229_;
v___y_1200_ = v___y_1230_;
v___y_1201_ = v___x_1243_;
v___y_1202_ = v___y_1232_;
v___y_1203_ = v___y_1233_;
v___y_1204_ = v___x_1242_;
v___y_1205_ = v___x_1132_;
goto v___jp_1198_;
}
}
}
else
{
lean_dec(v___y_1233_);
lean_dec(v___y_1229_);
lean_del_object(v___x_1109_);
return v___x_1241_;
}
}
}
}
else
{
lean_dec(v___y_1233_);
lean_dec(v___y_1229_);
lean_del_object(v___x_1109_);
return v___x_1237_;
}
}
}
}
v___jp_1246_:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1252_ = ((lean_object*)(lp_Echonomics_main___closed__219));
v___x_1253_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1252_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v___x_1254_; uint8_t v___x_1255_; 
lean_dec_ref_known(v___x_1253_, 1);
v___x_1254_ = ((lean_object*)(lp_Echonomics_main___closed__221));
v___x_1255_ = lean_uint8_once(&lp_Echonomics_main___closed__222, &lp_Echonomics_main___closed__222_once, _init_lp_Echonomics_main___closed__222);
if (v___x_1255_ == 0)
{
v___y_1229_ = v___y_1247_;
v___y_1230_ = v___y_1248_;
v___y_1231_ = v___x_1254_;
v___y_1232_ = v___y_1249_;
v___y_1233_ = v___y_1251_;
v___y_1234_ = v___y_1250_;
goto v___jp_1228_;
}
else
{
v___y_1229_ = v___y_1247_;
v___y_1230_ = v___y_1248_;
v___y_1231_ = v___x_1254_;
v___y_1232_ = v___y_1249_;
v___y_1233_ = v___y_1251_;
v___y_1234_ = v___x_1132_;
goto v___jp_1228_;
}
}
else
{
lean_dec(v___y_1251_);
lean_dec(v___y_1247_);
lean_del_object(v___x_1109_);
return v___x_1253_;
}
}
v___jp_1256_:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1261_ = ((lean_object*)(lp_Echonomics_main___closed__223));
v___x_1262_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1261_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1278_; 
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1278_ == 0)
{
lean_object* v_unused_1279_; 
v_unused_1279_ = lean_ctor_get(v___x_1262_, 0);
lean_dec(v_unused_1279_);
v___x_1264_ = v___x_1262_;
v_isShared_1265_ = v_isSharedCheck_1278_;
goto v_resetjp_1263_;
}
else
{
lean_dec(v___x_1262_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1278_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
uint8_t v___x_1266_; 
v___x_1266_ = lean_uint8_once(&lp_Echonomics_main___closed__225, &lp_Echonomics_main___closed__225_once, _init_lp_Echonomics_main___closed__225);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; lean_object* v___x_1269_; 
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
v___x_1267_ = ((lean_object*)(lp_Echonomics_main___closed__227));
if (v_isShared_1265_ == 0)
{
lean_ctor_set_tag(v___x_1264_, 1);
lean_ctor_set(v___x_1264_, 0, v___x_1267_);
v___x_1269_ = v___x_1264_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
else
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_del_object(v___x_1264_);
v___x_1271_ = ((lean_object*)(lp_Echonomics_main___closed__228));
v___x_1272_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1271_);
if (lean_obj_tag(v___x_1272_) == 0)
{
uint8_t v___x_1273_; 
lean_dec_ref_known(v___x_1272_, 1);
v___x_1273_ = lean_uint8_once(&lp_Echonomics_main___closed__230, &lp_Echonomics_main___closed__230_once, _init_lp_Echonomics_main___closed__230);
if (v___x_1273_ == 0)
{
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
goto v___jp_840_;
}
else
{
uint8_t v___x_1274_; 
v___x_1274_ = lean_uint8_once(&lp_Echonomics_main___closed__232, &lp_Echonomics_main___closed__232_once, _init_lp_Echonomics_main___closed__232);
if (v___x_1274_ == 0)
{
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
goto v___jp_840_;
}
else
{
uint8_t v___x_1275_; 
v___x_1275_ = lean_uint8_once(&lp_Echonomics_main___closed__235, &lp_Echonomics_main___closed__235_once, _init_lp_Echonomics_main___closed__235);
if (v___x_1275_ == 0)
{
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
goto v___jp_840_;
}
else
{
uint8_t v___x_1276_; 
v___x_1276_ = lean_uint8_once(&lp_Echonomics_main___closed__238, &lp_Echonomics_main___closed__238_once, _init_lp_Echonomics_main___closed__238);
if (v___x_1276_ == 0)
{
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
goto v___jp_840_;
}
else
{
uint8_t v___x_1277_; 
v___x_1277_ = lean_uint8_once(&lp_Echonomics_main___closed__240, &lp_Echonomics_main___closed__240_once, _init_lp_Echonomics_main___closed__240);
if (v___x_1277_ == 0)
{
v___y_1247_ = v___y_1257_;
v___y_1248_ = v___y_1258_;
v___y_1249_ = v___y_1259_;
v___y_1250_ = v___x_1266_;
v___y_1251_ = v___y_1260_;
goto v___jp_1246_;
}
else
{
if (v___x_1132_ == 0)
{
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
goto v___jp_840_;
}
else
{
v___y_1247_ = v___y_1257_;
v___y_1248_ = v___y_1258_;
v___y_1249_ = v___y_1259_;
v___y_1250_ = v___x_1266_;
v___y_1251_ = v___y_1260_;
goto v___jp_1246_;
}
}
}
}
}
}
}
else
{
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
return v___x_1272_;
}
}
}
}
else
{
lean_dec(v___y_1260_);
lean_dec(v___y_1257_);
lean_del_object(v___x_1109_);
return v___x_1262_;
}
}
v___jp_1280_:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = ((lean_object*)(lp_Echonomics_main___closed__241));
v___x_1288_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1287_);
if (lean_obj_tag(v___x_1288_) == 0)
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v_epoch_1291_; lean_object* v_semantic_1292_; uint8_t v___x_1293_; 
lean_dec_ref_known(v___x_1288_, 1);
v___x_1289_ = ((lean_object*)(lp_Echonomics_main___closed__242));
v___x_1290_ = lp_Echonomics_Echonomics_XiConstitutionLicense_cslGatedStep(v___y_1283_, v___x_851_, v___x_874_, v___x_1289_);
v_epoch_1291_ = lean_ctor_get(v___x_1290_, 0);
lean_inc(v_epoch_1291_);
v_semantic_1292_ = lean_ctor_get(v___x_1290_, 1);
lean_inc(v_semantic_1292_);
v___x_1293_ = lean_nat_dec_eq(v_epoch_1291_, v___x_874_);
lean_dec(v_epoch_1291_);
if (v___x_1293_ == 0)
{
lean_dec(v_semantic_1292_);
lean_dec_ref(v___x_1290_);
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_804_;
}
else
{
uint8_t v___x_1294_; 
v___x_1294_ = lean_nat_dec_eq(v_semantic_1292_, v___y_1286_);
lean_dec(v_semantic_1292_);
if (v___x_1294_ == 0)
{
lean_dec_ref(v___x_1290_);
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_804_;
}
else
{
lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = lp_Echonomics_Echonomics_XiConstitutionLicense_measureDrift(v___x_1289_, v___x_1290_);
lean_dec_ref(v___x_1290_);
v___x_1296_ = lean_nat_dec_eq(v___x_1295_, v___x_851_);
if (v___x_1296_ == 0)
{
lean_dec(v___x_1295_);
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_804_;
}
else
{
uint8_t v___x_1297_; 
v___x_1297_ = lean_nat_dec_le(v___x_1295_, v___x_955_);
lean_dec(v___x_1295_);
if (v___x_1297_ == 0)
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_804_;
}
else
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = ((lean_object*)(lp_Echonomics_main___closed__243));
v___x_1299_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1298_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_object* v___x_1300_; lean_object* v___x_1301_; uint8_t v___x_1302_; 
lean_dec_ref_known(v___x_1299_, 1);
v___x_1300_ = lean_obj_once(&lp_Echonomics_main___closed__244, &lp_Echonomics_main___closed__244_once, _init_lp_Echonomics_main___closed__244);
lean_inc(v___y_1282_);
v___x_1301_ = lp_Echonomics_Echonomics_XiConstitutionLicense_cslGatedStep(v___x_1300_, v___x_1056_, v___y_1282_, v___x_1289_);
v___x_1302_ = lp_Echonomics_Echonomics_XiConstitutionLicense_instDecidableEqXiState_decEq(v___x_1301_, v___x_1289_);
if (v___x_1302_ == 0)
{
lean_dec_ref(v___x_1301_);
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_807_;
}
else
{
lean_object* v___x_1303_; uint8_t v___x_1304_; 
v___x_1303_ = lp_Echonomics_Echonomics_XiConstitutionLicense_measureDrift(v___x_1289_, v___x_1301_);
lean_dec_ref(v___x_1301_);
v___x_1304_ = lean_nat_dec_eq(v___x_1303_, v___x_863_);
lean_dec(v___x_1303_);
if (v___x_1304_ == 0)
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_807_;
}
else
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = ((lean_object*)(lp_Echonomics_main___closed__245));
v___x_1306_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1305_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v___x_1307_; lean_object* v_epoch_1308_; lean_object* v_semantic_1309_; uint8_t v___x_1310_; 
lean_dec_ref_known(v___x_1306_, 1);
v___x_1307_ = lp_Echonomics_Echonomics_XiConstitutionLicense_certifiedGatedStep(v___y_1281_, v___x_852_, v___x_874_, v___x_1289_);
v_epoch_1308_ = lean_ctor_get(v___x_1307_, 0);
lean_inc(v_epoch_1308_);
v_semantic_1309_ = lean_ctor_get(v___x_1307_, 1);
lean_inc(v_semantic_1309_);
v___x_1310_ = lean_nat_dec_eq(v_epoch_1308_, v___x_874_);
lean_dec(v_epoch_1308_);
if (v___x_1310_ == 0)
{
lean_dec(v_semantic_1309_);
lean_dec_ref(v___x_1307_);
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_810_;
}
else
{
uint8_t v___x_1311_; 
v___x_1311_ = lean_nat_dec_eq(v_semantic_1309_, v___y_1282_);
lean_dec(v_semantic_1309_);
if (v___x_1311_ == 0)
{
lean_dec_ref(v___x_1307_);
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_810_;
}
else
{
lean_object* v___x_1312_; uint8_t v___x_1313_; 
v___x_1312_ = lp_Echonomics_Echonomics_XiConstitutionLicense_measureDrift(v___x_1289_, v___x_1307_);
lean_dec_ref(v___x_1307_);
v___x_1313_ = lean_nat_dec_le(v___x_1312_, v___x_955_);
lean_dec(v___x_1312_);
if (v___x_1313_ == 0)
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_810_;
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = ((lean_object*)(lp_Echonomics_main___closed__246));
v___x_1315_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1314_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1382_; 
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1382_ == 0)
{
lean_object* v_unused_1383_; 
v_unused_1383_ = lean_ctor_get(v___x_1315_, 0);
lean_dec(v_unused_1383_);
v___x_1317_ = v___x_1315_;
v_isShared_1318_ = v_isSharedCheck_1382_;
goto v_resetjp_1316_;
}
else
{
lean_dec(v___x_1315_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1382_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
uint8_t v___x_1319_; 
v___x_1319_ = lean_uint8_once(&lp_Echonomics_main___closed__248, &lp_Echonomics_main___closed__248_once, _init_lp_Echonomics_main___closed__248);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1322_; 
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
v___x_1320_ = ((lean_object*)(lp_Echonomics_main___closed__250));
if (v_isShared_1318_ == 0)
{
lean_ctor_set_tag(v___x_1317_, 1);
lean_ctor_set(v___x_1317_, 0, v___x_1320_);
v___x_1322_ = v___x_1317_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v___x_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
else
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
lean_del_object(v___x_1317_);
v___x_1324_ = ((lean_object*)(lp_Echonomics_main___closed__251));
v___x_1325_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1324_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1380_; 
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1380_ == 0)
{
lean_object* v_unused_1381_; 
v_unused_1381_ = lean_ctor_get(v___x_1325_, 0);
lean_dec(v_unused_1381_);
v___x_1327_ = v___x_1325_;
v_isShared_1328_ = v_isSharedCheck_1380_;
goto v_resetjp_1326_;
}
else
{
lean_dec(v___x_1325_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1380_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_uint8_once(&lp_Echonomics_main___closed__254, &lp_Echonomics_main___closed__254_once, _init_lp_Echonomics_main___closed__254);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; lean_object* v___x_1332_; 
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
v___x_1330_ = ((lean_object*)(lp_Echonomics_main___closed__256));
if (v_isShared_1328_ == 0)
{
lean_ctor_set_tag(v___x_1327_, 1);
lean_ctor_set(v___x_1327_, 0, v___x_1330_);
v___x_1332_ = v___x_1327_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
else
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_del_object(v___x_1327_);
v___x_1334_ = ((lean_object*)(lp_Echonomics_main___closed__257));
v___x_1335_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1334_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1378_; 
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1378_ == 0)
{
lean_object* v_unused_1379_; 
v_unused_1379_ = lean_ctor_get(v___x_1335_, 0);
lean_dec(v_unused_1379_);
v___x_1337_ = v___x_1335_;
v_isShared_1338_ = v_isSharedCheck_1378_;
goto v_resetjp_1336_;
}
else
{
lean_dec(v___x_1335_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1378_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
uint8_t v___x_1339_; 
v___x_1339_ = lean_uint8_once(&lp_Echonomics_main___closed__258, &lp_Echonomics_main___closed__258_once, _init_lp_Echonomics_main___closed__258);
if (v___x_1339_ == 0)
{
lean_object* v___x_1340_; lean_object* v___x_1342_; 
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
v___x_1340_ = ((lean_object*)(lp_Echonomics_main___closed__260));
if (v_isShared_1338_ == 0)
{
lean_ctor_set_tag(v___x_1337_, 1);
lean_ctor_set(v___x_1337_, 0, v___x_1340_);
v___x_1342_ = v___x_1337_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
else
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_del_object(v___x_1337_);
v___x_1344_ = ((lean_object*)(lp_Echonomics_main___closed__261));
v___x_1345_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1344_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1376_; 
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1376_ == 0)
{
lean_object* v_unused_1377_; 
v_unused_1377_ = lean_ctor_get(v___x_1345_, 0);
lean_dec(v_unused_1377_);
v___x_1347_ = v___x_1345_;
v_isShared_1348_ = v_isSharedCheck_1376_;
goto v_resetjp_1346_;
}
else
{
lean_dec(v___x_1345_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1376_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1349_; uint8_t v___x_1350_; 
v___x_1349_ = lean_obj_once(&lp_Echonomics_main___closed__262, &lp_Echonomics_main___closed__262_once, _init_lp_Echonomics_main___closed__262);
v___x_1350_ = lean_nat_dec_eq(v___x_1349_, v___y_1282_);
if (v___x_1350_ == 0)
{
lean_object* v___x_1351_; lean_object* v___x_1353_; 
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
v___x_1351_ = ((lean_object*)(lp_Echonomics_main___closed__264));
if (v_isShared_1348_ == 0)
{
lean_ctor_set_tag(v___x_1347_, 1);
lean_ctor_set(v___x_1347_, 0, v___x_1351_);
v___x_1353_ = v___x_1347_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v___x_1351_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
else
{
lean_object* v___x_1355_; lean_object* v___x_1356_; 
lean_del_object(v___x_1347_);
v___x_1355_ = ((lean_object*)(lp_Echonomics_main___closed__265));
v___x_1356_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1355_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
lean_dec_ref_known(v___x_1356_, 1);
v___x_1357_ = ((lean_object*)(lp_Echonomics_main___closed__266));
v___x_1358_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1357_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec_ref_known(v___x_1358_, 1);
v___x_1359_ = ((lean_object*)(lp_Echonomics_main___closed__267));
v___x_1360_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1359_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1374_; 
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1374_ == 0)
{
lean_object* v_unused_1375_; 
v_unused_1375_ = lean_ctor_get(v___x_1360_, 0);
lean_dec(v_unused_1375_);
v___x_1362_ = v___x_1360_;
v_isShared_1363_ = v_isSharedCheck_1374_;
goto v_resetjp_1361_;
}
else
{
lean_dec(v___x_1360_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1374_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
uint8_t v___x_1364_; 
v___x_1364_ = lean_uint8_once(&lp_Echonomics_main___closed__269, &lp_Echonomics_main___closed__269_once, _init_lp_Echonomics_main___closed__269);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; lean_object* v___x_1367_; 
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
v___x_1365_ = ((lean_object*)(lp_Echonomics_main___closed__271));
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 1);
lean_ctor_set(v___x_1362_, 0, v___x_1365_);
v___x_1367_ = v___x_1362_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1365_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
else
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
lean_del_object(v___x_1362_);
v___x_1369_ = ((lean_object*)(lp_Echonomics_main___closed__272));
v___x_1370_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1369_);
if (lean_obj_tag(v___x_1370_) == 0)
{
uint8_t v___x_1371_; 
lean_dec_ref_known(v___x_1370_, 1);
v___x_1371_ = lean_uint8_once(&lp_Echonomics_main___closed__273, &lp_Echonomics_main___closed__273_once, _init_lp_Echonomics_main___closed__273);
if (v___x_1371_ == 0)
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_843_;
}
else
{
uint8_t v___x_1372_; 
v___x_1372_ = lean_uint8_once(&lp_Echonomics_main___closed__274, &lp_Echonomics_main___closed__274_once, _init_lp_Echonomics_main___closed__274);
if (v___x_1372_ == 0)
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_843_;
}
else
{
uint8_t v___x_1373_; 
v___x_1373_ = lean_uint8_once(&lp_Echonomics_main___closed__275, &lp_Echonomics_main___closed__275_once, _init_lp_Echonomics_main___closed__275);
if (v___x_1373_ == 0)
{
v___y_1257_ = v___y_1282_;
v___y_1258_ = v___y_1284_;
v___y_1259_ = v___y_1285_;
v___y_1260_ = v___y_1286_;
goto v___jp_1256_;
}
else
{
if (v___x_1132_ == 0)
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
goto v___jp_843_;
}
else
{
v___y_1257_ = v___y_1282_;
v___y_1258_ = v___y_1284_;
v___y_1259_ = v___y_1285_;
v___y_1260_ = v___y_1286_;
goto v___jp_1256_;
}
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1370_;
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1360_;
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1358_;
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1356_;
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1345_;
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1335_;
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1325_;
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1315_;
}
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1306_;
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1299_;
}
}
}
}
}
}
else
{
lean_dec(v___y_1286_);
lean_dec(v___y_1282_);
lean_del_object(v___x_1109_);
return v___x_1288_;
}
}
v___jp_1384_:
{
if (v___y_1392_ == 0)
{
lean_object* v___x_1393_; lean_object* v___x_1395_; 
lean_dec(v___y_1391_);
lean_dec(v___y_1386_);
lean_del_object(v___x_1109_);
v___x_1393_ = ((lean_object*)(lp_Echonomics_main___closed__277));
if (v_isShared_1098_ == 0)
{
lean_ctor_set_tag(v___x_1097_, 1);
lean_ctor_set(v___x_1097_, 0, v___x_1393_);
v___x_1395_ = v___x_1097_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1393_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
else
{
lean_object* v___x_1397_; lean_object* v___x_1398_; 
lean_del_object(v___x_1097_);
v___x_1397_ = ((lean_object*)(lp_Echonomics_main___closed__278));
v___x_1398_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1397_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1408_; 
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1408_ == 0)
{
lean_object* v_unused_1409_; 
v_unused_1409_ = lean_ctor_get(v___x_1398_, 0);
lean_dec(v_unused_1409_);
v___x_1400_ = v___x_1398_;
v_isShared_1401_ = v_isSharedCheck_1408_;
goto v_resetjp_1399_;
}
else
{
lean_dec(v___x_1398_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1408_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; uint8_t v___x_1403_; 
v___x_1402_ = lean_obj_once(&lp_Echonomics_main___closed__279, &lp_Echonomics_main___closed__279_once, _init_lp_Echonomics_main___closed__279);
v___x_1403_ = lp_Echonomics_Echonomics_XiConstitutionLicense_isLicenseGranted(v___y_1385_, v___y_1389_, v___y_1387_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_del_object(v___x_1400_);
v___y_1281_ = v___y_1387_;
v___y_1282_ = v___y_1386_;
v___y_1283_ = v___y_1385_;
v___y_1284_ = v___y_1388_;
v___y_1285_ = v___y_1390_;
v___y_1286_ = v___y_1391_;
goto v___jp_1280_;
}
else
{
if (v___x_1132_ == 0)
{
lean_object* v___x_1404_; lean_object* v___x_1406_; 
lean_dec(v___y_1391_);
lean_dec(v___y_1386_);
lean_del_object(v___x_1109_);
v___x_1404_ = ((lean_object*)(lp_Echonomics_main___closed__281));
if (v_isShared_1401_ == 0)
{
lean_ctor_set_tag(v___x_1400_, 1);
lean_ctor_set(v___x_1400_, 0, v___x_1404_);
v___x_1406_ = v___x_1400_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
else
{
lean_del_object(v___x_1400_);
v___y_1281_ = v___y_1387_;
v___y_1282_ = v___y_1386_;
v___y_1283_ = v___y_1385_;
v___y_1284_ = v___y_1388_;
v___y_1285_ = v___y_1390_;
v___y_1286_ = v___y_1391_;
goto v___jp_1280_;
}
}
}
}
else
{
lean_dec(v___y_1391_);
lean_dec(v___y_1386_);
lean_del_object(v___x_1109_);
return v___x_1398_;
}
}
}
v___jp_1410_:
{
if (v___y_1415_ == 0)
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_795_;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
v___x_1416_ = ((lean_object*)(lp_Echonomics_main___closed__282));
v___x_1417_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1416_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1522_; 
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1522_ == 0)
{
lean_object* v_unused_1523_; 
v_unused_1523_ = lean_ctor_get(v___x_1417_, 0);
lean_dec(v_unused_1523_);
v___x_1419_ = v___x_1417_;
v_isShared_1420_ = v_isSharedCheck_1522_;
goto v_resetjp_1418_;
}
else
{
lean_dec(v___x_1417_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1522_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = lean_unsigned_to_nat(9u);
v___x_1422_ = lean_uint8_once(&lp_Echonomics_main___closed__287, &lp_Echonomics_main___closed__287_once, _init_lp_Echonomics_main___closed__287);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1425_; 
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1423_ = ((lean_object*)(lp_Echonomics_main___closed__289));
if (v_isShared_1420_ == 0)
{
lean_ctor_set_tag(v___x_1419_, 1);
lean_ctor_set(v___x_1419_, 0, v___x_1423_);
v___x_1425_ = v___x_1419_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
lean_del_object(v___x_1419_);
v___x_1427_ = ((lean_object*)(lp_Echonomics_main___closed__290));
v___x_1428_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1427_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1520_; 
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1520_ == 0)
{
lean_object* v_unused_1521_; 
v_unused_1521_ = lean_ctor_get(v___x_1428_, 0);
lean_dec(v_unused_1521_);
v___x_1430_ = v___x_1428_;
v_isShared_1431_ = v_isSharedCheck_1520_;
goto v_resetjp_1429_;
}
else
{
lean_dec(v___x_1428_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1520_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
uint8_t v___x_1432_; 
v___x_1432_ = lean_uint8_once(&lp_Echonomics_main___closed__295, &lp_Echonomics_main___closed__295_once, _init_lp_Echonomics_main___closed__295);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; lean_object* v___x_1435_; 
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1433_ = ((lean_object*)(lp_Echonomics_main___closed__297));
if (v_isShared_1431_ == 0)
{
lean_ctor_set_tag(v___x_1430_, 1);
lean_ctor_set(v___x_1430_, 0, v___x_1433_);
v___x_1435_ = v___x_1430_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
else
{
lean_object* v___x_1437_; lean_object* v___x_1438_; 
lean_del_object(v___x_1430_);
v___x_1437_ = ((lean_object*)(lp_Echonomics_main___closed__298));
v___x_1438_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1437_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1518_; 
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1518_ == 0)
{
lean_object* v_unused_1519_; 
v_unused_1519_ = lean_ctor_get(v___x_1438_, 0);
lean_dec(v_unused_1519_);
v___x_1440_ = v___x_1438_;
v_isShared_1441_ = v_isSharedCheck_1518_;
goto v_resetjp_1439_;
}
else
{
lean_dec(v___x_1438_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1518_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; uint8_t v___x_1449_; 
v___x_1442_ = ((lean_object*)(lp_Echonomics_List_all___at___00main_spec__1___closed__3));
lean_inc_ref(v___y_1411_);
v___x_1443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___y_1411_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
lean_inc_ref(v___y_1414_);
v___x_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___y_1414_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
lean_inc_ref(v___x_1444_);
v___x_1445_ = lp_Echonomics_Echonomics_EnergyLedger_minOfList(v___x_1444_);
v___x_1446_ = lp_Echonomics_Echonomics_EnergyLedger_calculateTotalEnergy(v___x_1445_);
v___x_1447_ = lean_obj_once(&lp_Echonomics_main___closed__299, &lp_Echonomics_main___closed__299_once, _init_lp_Echonomics_main___closed__299);
v___x_1448_ = lean_obj_once(&lp_Echonomics_main___closed__300, &lp_Echonomics_main___closed__300_once, _init_lp_Echonomics_main___closed__300);
v___x_1449_ = lean_int_dec_eq(v___x_1446_, v___x_1448_);
lean_dec(v___x_1446_);
if (v___x_1449_ == 0)
{
lean_object* v___x_1450_; lean_object* v___x_1452_; 
lean_dec_ref_known(v___x_1444_, 2);
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1450_ = ((lean_object*)(lp_Echonomics_main___closed__302));
if (v_isShared_1441_ == 0)
{
lean_ctor_set_tag(v___x_1440_, 1);
lean_ctor_set(v___x_1440_, 0, v___x_1450_);
v___x_1452_ = v___x_1440_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
else
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
lean_del_object(v___x_1440_);
v___x_1454_ = ((lean_object*)(lp_Echonomics_main___closed__303));
v___x_1455_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1454_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v___x_1456_; lean_object* v___x_1457_; 
lean_dec_ref_known(v___x_1455_, 1);
v___x_1456_ = ((lean_object*)(lp_Echonomics_main___closed__304));
v___x_1457_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1456_);
if (lean_obj_tag(v___x_1457_) == 0)
{
uint8_t v___x_1458_; 
lean_dec_ref_known(v___x_1457_, 1);
v___x_1458_ = lean_uint8_once(&lp_Echonomics_main___closed__306, &lp_Echonomics_main___closed__306_once, _init_lp_Echonomics_main___closed__306);
if (v___x_1458_ == 0)
{
lean_dec_ref_known(v___x_1444_, 2);
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_798_;
}
else
{
uint8_t v___x_1459_; 
v___x_1459_ = lean_uint8_once(&lp_Echonomics_main___closed__307, &lp_Echonomics_main___closed__307_once, _init_lp_Echonomics_main___closed__307);
if (v___x_1459_ == 0)
{
lean_dec_ref_known(v___x_1444_, 2);
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_798_;
}
else
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = ((lean_object*)(lp_Echonomics_main___closed__308));
v___x_1461_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1460_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1516_; 
v_isSharedCheck_1516_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1516_ == 0)
{
lean_object* v_unused_1517_; 
v_unused_1517_ = lean_ctor_get(v___x_1461_, 0);
lean_dec(v_unused_1517_);
v___x_1463_ = v___x_1461_;
v_isShared_1464_ = v_isSharedCheck_1516_;
goto v_resetjp_1462_;
}
else
{
lean_dec(v___x_1461_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1516_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
uint8_t v___x_1465_; 
v___x_1465_ = lp_Echonomics_List_all___at___00main_spec__1(v___x_1444_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1466_ = ((lean_object*)(lp_Echonomics_main___closed__310));
if (v_isShared_1464_ == 0)
{
lean_ctor_set_tag(v___x_1463_, 1);
lean_ctor_set(v___x_1463_, 0, v___x_1466_);
v___x_1468_ = v___x_1463_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
else
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
lean_del_object(v___x_1463_);
v___x_1470_ = ((lean_object*)(lp_Echonomics_main___closed__311));
v___x_1471_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1470_);
if (lean_obj_tag(v___x_1471_) == 0)
{
lean_object* v___x_1472_; uint8_t v___x_1473_; 
lean_dec_ref_known(v___x_1471_, 1);
v___x_1472_ = lean_obj_once(&lp_Echonomics_main___closed__312, &lp_Echonomics_main___closed__312_once, _init_lp_Echonomics_main___closed__312);
v___x_1473_ = lean_uint8_once(&lp_Echonomics_main___closed__313, &lp_Echonomics_main___closed__313_once, _init_lp_Echonomics_main___closed__313);
if (v___x_1473_ == 0)
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_801_;
}
else
{
lean_object* v___x_1474_; uint8_t v___x_1475_; 
v___x_1474_ = ((lean_object*)(lp_Echonomics_main___closed__314));
v___x_1475_ = lean_uint8_once(&lp_Echonomics_main___closed__315, &lp_Echonomics_main___closed__315_once, _init_lp_Echonomics_main___closed__315);
if (v___x_1475_ == 0)
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_801_;
}
else
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = ((lean_object*)(lp_Echonomics_main___closed__316));
v___x_1477_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1476_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1514_; 
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1477_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v___x_1477_, 0);
lean_dec(v_unused_1515_);
v___x_1479_ = v___x_1477_;
v_isShared_1480_ = v_isSharedCheck_1514_;
goto v_resetjp_1478_;
}
else
{
lean_dec(v___x_1477_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1514_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1481_; uint8_t v___x_1482_; 
v___x_1481_ = lean_obj_once(&lp_Echonomics_main___closed__317, &lp_Echonomics_main___closed__317_once, _init_lp_Echonomics_main___closed__317);
v___x_1482_ = lean_uint8_once(&lp_Echonomics_main___closed__318, &lp_Echonomics_main___closed__318_once, _init_lp_Echonomics_main___closed__318);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; lean_object* v___x_1485_; 
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1483_ = ((lean_object*)(lp_Echonomics_main___closed__320));
if (v_isShared_1480_ == 0)
{
lean_ctor_set_tag(v___x_1479_, 1);
lean_ctor_set(v___x_1479_, 0, v___x_1483_);
v___x_1485_ = v___x_1479_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v___x_1483_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
else
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
lean_del_object(v___x_1479_);
v___x_1487_ = ((lean_object*)(lp_Echonomics_main___closed__321));
v___x_1488_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1487_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1512_; 
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1512_ == 0)
{
lean_object* v_unused_1513_; 
v_unused_1513_ = lean_ctor_get(v___x_1488_, 0);
lean_dec(v_unused_1513_);
v___x_1490_ = v___x_1488_;
v_isShared_1491_ = v_isSharedCheck_1512_;
goto v_resetjp_1489_;
}
else
{
lean_dec(v___x_1488_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1512_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
uint8_t v___x_1492_; 
v___x_1492_ = lean_uint8_once(&lp_Echonomics_main___closed__322, &lp_Echonomics_main___closed__322_once, _init_lp_Echonomics_main___closed__322);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; lean_object* v___x_1495_; 
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1493_ = ((lean_object*)(lp_Echonomics_main___closed__324));
if (v_isShared_1491_ == 0)
{
lean_ctor_set_tag(v___x_1490_, 1);
lean_ctor_set(v___x_1490_, 0, v___x_1493_);
v___x_1495_ = v___x_1490_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
else
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
lean_del_object(v___x_1490_);
v___x_1497_ = ((lean_object*)(lp_Echonomics_main___closed__325));
v___x_1498_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1497_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1510_; 
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1510_ == 0)
{
lean_object* v_unused_1511_; 
v_unused_1511_ = lean_ctor_get(v___x_1498_, 0);
lean_dec(v_unused_1511_);
v___x_1500_ = v___x_1498_;
v_isShared_1501_ = v_isSharedCheck_1510_;
goto v_resetjp_1499_;
}
else
{
lean_dec(v___x_1498_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1510_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
uint8_t v___x_1502_; 
v___x_1502_ = lean_uint8_once(&lp_Echonomics_main___closed__327, &lp_Echonomics_main___closed__327_once, _init_lp_Echonomics_main___closed__327);
if (v___x_1502_ == 0)
{
lean_object* v___x_1503_; lean_object* v___x_1505_; 
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
v___x_1503_ = ((lean_object*)(lp_Echonomics_main___closed__329));
if (v_isShared_1501_ == 0)
{
lean_ctor_set_tag(v___x_1500_, 1);
lean_ctor_set(v___x_1500_, 0, v___x_1503_);
v___x_1505_ = v___x_1500_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1506_; 
v_reuseFailAlloc_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1506_, 0, v___x_1503_);
v___x_1505_ = v_reuseFailAlloc_1506_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
return v___x_1505_;
}
}
else
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
lean_del_object(v___x_1500_);
v___x_1507_ = ((lean_object*)(lp_Echonomics_main___closed__330));
v___x_1508_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1507_);
if (lean_obj_tag(v___x_1508_) == 0)
{
uint8_t v___x_1509_; 
lean_dec_ref_known(v___x_1508_, 1);
v___x_1509_ = lean_uint8_once(&lp_Echonomics_main___closed__332, &lp_Echonomics_main___closed__332_once, _init_lp_Echonomics_main___closed__332);
if (v___x_1509_ == 0)
{
v___y_1385_ = v___x_1472_;
v___y_1386_ = v___x_1421_;
v___y_1387_ = v___x_1481_;
v___y_1388_ = v___x_1447_;
v___y_1389_ = v___x_1474_;
v___y_1390_ = v___y_1412_;
v___y_1391_ = v___y_1413_;
v___y_1392_ = v___x_1502_;
goto v___jp_1384_;
}
else
{
v___y_1385_ = v___x_1472_;
v___y_1386_ = v___x_1421_;
v___y_1387_ = v___x_1481_;
v___y_1388_ = v___x_1447_;
v___y_1389_ = v___x_1474_;
v___y_1390_ = v___y_1412_;
v___y_1391_ = v___y_1413_;
v___y_1392_ = v___x_1132_;
goto v___jp_1384_;
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1508_;
}
}
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1498_;
}
}
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1488_;
}
}
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1477_;
}
}
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1471_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1444_, 2);
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1461_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_1444_, 2);
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1457_;
}
}
else
{
lean_dec_ref_known(v___x_1444_, 2);
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1455_;
}
}
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1438_;
}
}
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1428_;
}
}
}
}
else
{
lean_dec(v___y_1413_);
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1417_;
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1122_;
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
goto v___jp_1122_;
}
}
}
}
v___jp_1122_:
{
lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1123_ = ((lean_object*)(lp_Echonomics_main___closed__161));
if (v_isShared_1121_ == 0)
{
lean_ctor_set_tag(v___x_1120_, 1);
lean_ctor_set(v___x_1120_, 0, v___x_1123_);
v___x_1125_ = v___x_1120_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1123_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
else
{
lean_del_object(v___x_1109_);
lean_del_object(v___x_1097_);
return v___x_1118_;
}
}
}
}
else
{
lean_del_object(v___x_1097_);
return v___x_1107_;
}
}
}
}
else
{
return v___x_1095_;
}
}
}
}
else
{
return v___x_1083_;
}
}
}
}
else
{
return v___x_1071_;
}
}
else
{
lean_object* v___x_1607_; lean_object* v___x_1609_; 
v___x_1607_ = ((lean_object*)(lp_Echonomics_main___closed__371));
if (v_isShared_1068_ == 0)
{
lean_ctor_set_tag(v___x_1067_, 1);
lean_ctor_set(v___x_1067_, 0, v___x_1607_);
v___x_1609_ = v___x_1067_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v___x_1607_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
else
{
return v___x_1065_;
}
}
else
{
lean_object* v___x_1613_; lean_object* v___x_1615_; 
v___x_1613_ = ((lean_object*)(lp_Echonomics_main___closed__373));
if (v_isShared_1062_ == 0)
{
lean_ctor_set_tag(v___x_1061_, 1);
lean_ctor_set(v___x_1061_, 0, v___x_1613_);
v___x_1615_ = v___x_1061_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v___x_1613_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
return v___x_1615_;
}
}
}
}
else
{
return v___x_1059_;
}
}
}
else
{
goto v___jp_1051_;
}
v___jp_1051_:
{
lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1052_ = ((lean_object*)(lp_Echonomics_main___closed__133));
if (v_isShared_1050_ == 0)
{
lean_ctor_set_tag(v___x_1049_, 1);
lean_ctor_set(v___x_1049_, 0, v___x_1052_);
v___x_1054_ = v___x_1049_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
else
{
return v___x_1047_;
}
}
}
}
else
{
return v___x_1037_;
}
}
else
{
return v___x_1036_;
}
}
else
{
return v___x_1034_;
}
v___jp_1026_:
{
if (v___y_1027_ == 0)
{
goto v___jp_828_;
}
else
{
uint8_t v___x_1028_; 
v___x_1028_ = lean_uint8_once(&lp_Echonomics_main___closed__123, &lp_Echonomics_main___closed__123_once, _init_lp_Echonomics_main___closed__123);
if (v___x_1028_ == 0)
{
goto v___jp_828_;
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = ((lean_object*)(lp_Echonomics_main___closed__124));
v___x_1030_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1029_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v___x_1031_; 
lean_dec_ref_known(v___x_1030_, 1);
v___x_1031_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1025_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_dec_ref_known(v___x_1031_, 1);
v___x_1032_ = ((lean_object*)(lp_Echonomics_main___closed__125));
v___x_1033_ = lp_Echonomics_IO_println___at___00main_spec__0(v___x_1032_);
return v___x_1033_;
}
else
{
return v___x_1031_;
}
}
else
{
return v___x_1030_;
}
}
}
}
}
else
{
return v___x_1024_;
}
}
else
{
lean_object* v___x_1623_; lean_object* v___x_1625_; 
v___x_1623_ = ((lean_object*)(lp_Echonomics_main___closed__375));
if (v_isShared_1021_ == 0)
{
lean_ctor_set_tag(v___x_1020_, 1);
lean_ctor_set(v___x_1020_, 0, v___x_1623_);
v___x_1625_ = v___x_1020_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
else
{
return v___x_1018_;
}
}
else
{
lean_object* v___x_1629_; lean_object* v___x_1631_; 
v___x_1629_ = ((lean_object*)(lp_Echonomics_main___closed__377));
if (v_isShared_1015_ == 0)
{
lean_ctor_set_tag(v___x_1014_, 1);
lean_ctor_set(v___x_1014_, 0, v___x_1629_);
v___x_1631_ = v___x_1014_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v___x_1629_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
else
{
return v___x_1012_;
}
}
}
}
else
{
return v___x_1002_;
}
}
}
}
else
{
return v___x_992_;
}
}
}
}
else
{
return v___x_982_;
}
}
}
}
else
{
return v___x_972_;
}
}
}
}
else
{
return v___x_962_;
}
}
}
}
else
{
return v___x_951_;
}
}
}
}
else
{
return v___x_941_;
}
}
}
}
else
{
return v___x_931_;
}
}
}
}
else
{
return v___x_921_;
}
}
}
}
else
{
return v___x_911_;
}
}
}
}
else
{
return v___x_901_;
}
}
}
}
else
{
return v___x_891_;
}
}
}
}
else
{
return v___x_881_;
}
}
}
}
else
{
return v___x_870_;
}
}
}
}
else
{
return v___x_859_;
}
}
}
}
else
{
return v___x_847_;
}
v___jp_789_:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(lp_Echonomics_main___closed__1));
v___x_791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_791_, 0, v___x_790_);
return v___x_791_;
}
v___jp_792_:
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = ((lean_object*)(lp_Echonomics_main___closed__3));
v___x_794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_794_, 0, v___x_793_);
return v___x_794_;
}
v___jp_795_:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = ((lean_object*)(lp_Echonomics_main___closed__5));
v___x_797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
v___jp_798_:
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = ((lean_object*)(lp_Echonomics_main___closed__7));
v___x_800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
return v___x_800_;
}
v___jp_801_:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = ((lean_object*)(lp_Echonomics_main___closed__9));
v___x_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
return v___x_803_;
}
v___jp_804_:
{
lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_805_ = ((lean_object*)(lp_Echonomics_main___closed__11));
v___x_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
return v___x_806_;
}
v___jp_807_:
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = ((lean_object*)(lp_Echonomics_main___closed__13));
v___x_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
return v___x_809_;
}
v___jp_810_:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(lp_Echonomics_main___closed__15));
v___x_812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
v___jp_813_:
{
lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_814_ = ((lean_object*)(lp_Echonomics_main___closed__17));
v___x_815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
return v___x_815_;
}
v___jp_816_:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = ((lean_object*)(lp_Echonomics_main___closed__19));
v___x_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
return v___x_818_;
}
v___jp_819_:
{
lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_820_ = ((lean_object*)(lp_Echonomics_main___closed__21));
v___x_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_821_, 0, v___x_820_);
return v___x_821_;
}
v___jp_822_:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = ((lean_object*)(lp_Echonomics_main___closed__23));
v___x_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
return v___x_824_;
}
v___jp_825_:
{
lean_object* v___x_826_; lean_object* v___x_827_; 
v___x_826_ = ((lean_object*)(lp_Echonomics_main___closed__25));
v___x_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_827_, 0, v___x_826_);
return v___x_827_;
}
v___jp_828_:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = ((lean_object*)(lp_Echonomics_main___closed__27));
v___x_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
v___jp_831_:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = ((lean_object*)(lp_Echonomics_main___closed__29));
v___x_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_833_, 0, v___x_832_);
return v___x_833_;
}
v___jp_834_:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = ((lean_object*)(lp_Echonomics_main___closed__31));
v___x_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
v___jp_837_:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = ((lean_object*)(lp_Echonomics_main___closed__33));
v___x_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
return v___x_839_;
}
v___jp_840_:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = ((lean_object*)(lp_Echonomics_main___closed__35));
v___x_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
v___jp_843_:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = ((lean_object*)(lp_Echonomics_main___closed__37));
v___x_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_845_, 0, v___x_844_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_main___boxed(lean_object* v_a_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = _lean_main();
return v_res_1668_;
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
lean_object* initialize_Echonomics_Echonomics_LambdaProof(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_HundianCodebookRunbook(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_CivicInfrastructureSpec(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_SocialPhysicsParts(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_BuurtzorgModel(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_TrifectaProtocolReview(uint8_t builtin);
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
res = initialize_Echonomics_Echonomics_LambdaProof(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_HundianCodebookRunbook(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_CivicInfrastructureSpec(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_SocialPhysicsParts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_BuurtzorgModel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Echonomics_Echonomics_TrifectaProtocolReview(builtin);
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
