// Lean compiler output
// Module: Echonomics.Proofs
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_supRank(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_supRank___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_Proofs_isValidTransition(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_isValidTransition___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_Proofs_isGateOk(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_isGateOk___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_Proofs_isGateRej(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_isGateRej___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateOk_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateOk_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateRej_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateRej_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_supRank(lean_object* v_lastId_1_, lean_object* v_current_2_){
_start:
{
uint8_t v___x_3_; 
v___x_3_ = lean_nat_dec_le(v_current_2_, v_lastId_1_);
if (v___x_3_ == 0)
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(0u);
return v___x_4_;
}
else
{
lean_object* v___x_5_; 
v___x_5_ = lean_nat_sub(v_lastId_1_, v_current_2_);
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_supRank___boxed(lean_object* v_lastId_6_, lean_object* v_current_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = lp_Echonomics_Echonomics_Proofs_supRank(v_lastId_6_, v_current_7_);
lean_dec(v_current_7_);
lean_dec(v_lastId_6_);
return v_res_8_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_Proofs_isValidTransition(uint8_t v_src_9_, uint8_t v_dst_10_){
_start:
{
switch(v_src_9_)
{
case 0:
{
switch(v_dst_10_)
{
case 1:
{
uint8_t v___x_11_; 
v___x_11_ = 1;
return v___x_11_;
}
case 2:
{
uint8_t v___x_12_; 
v___x_12_ = 1;
return v___x_12_;
}
default: 
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
}
}
case 1:
{
switch(v_dst_10_)
{
case 2:
{
uint8_t v___x_14_; 
v___x_14_ = 1;
return v___x_14_;
}
case 3:
{
uint8_t v___x_15_; 
v___x_15_ = 1;
return v___x_15_;
}
default: 
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
}
}
default: 
{
uint8_t v___x_17_; 
v___x_17_ = 0;
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_isValidTransition___boxed(lean_object* v_src_18_, lean_object* v_dst_19_){
_start:
{
uint8_t v_src_boxed_20_; uint8_t v_dst_boxed_21_; uint8_t v_res_22_; lean_object* v_r_23_; 
v_src_boxed_20_ = lean_unbox(v_src_18_);
v_dst_boxed_21_ = lean_unbox(v_dst_19_);
v_res_22_ = lp_Echonomics_Echonomics_Proofs_isValidTransition(v_src_boxed_20_, v_dst_boxed_21_);
v_r_23_ = lean_box(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_Proofs_isGateOk(lean_object* v_x_24_){
_start:
{
switch(lean_obj_tag(v_x_24_))
{
case 0:
{
uint8_t v___x_25_; 
v___x_25_ = 1;
return v___x_25_;
}
case 1:
{
uint8_t v___x_26_; 
v___x_26_ = 1;
return v___x_26_;
}
case 2:
{
uint8_t v___x_27_; 
v___x_27_ = 1;
return v___x_27_;
}
case 3:
{
uint8_t v___x_28_; 
v___x_28_ = 1;
return v___x_28_;
}
default: 
{
uint8_t v___x_29_; 
v___x_29_ = 0;
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_isGateOk___boxed(lean_object* v_x_30_){
_start:
{
uint8_t v_res_31_; lean_object* v_r_32_; 
v_res_31_ = lp_Echonomics_Echonomics_Proofs_isGateOk(v_x_30_);
lean_dec(v_x_30_);
v_r_32_ = lean_box(v_res_31_);
return v_r_32_;
}
}
LEAN_EXPORT uint8_t lp_Echonomics_Echonomics_Proofs_isGateRej(lean_object* v_x_33_){
_start:
{
switch(lean_obj_tag(v_x_33_))
{
case 4:
{
uint8_t v___x_34_; 
v___x_34_ = 1;
return v___x_34_;
}
case 5:
{
uint8_t v___x_35_; 
v___x_35_ = 1;
return v___x_35_;
}
case 6:
{
uint8_t v___x_36_; 
v___x_36_ = 1;
return v___x_36_;
}
case 7:
{
uint8_t v___x_37_; 
v___x_37_ = 1;
return v___x_37_;
}
default: 
{
uint8_t v___x_38_; 
v___x_38_ = 0;
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics_Echonomics_Proofs_isGateRej___boxed(lean_object* v_x_39_){
_start:
{
uint8_t v_res_40_; lean_object* v_r_41_; 
v_res_40_ = lp_Echonomics_Echonomics_Proofs_isGateRej(v_x_39_);
lean_dec(v_x_39_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateOk_match__1_splitter___redArg(lean_object* v_x_42_, lean_object* v_h__1_43_, lean_object* v_h__2_44_, lean_object* v_h__3_45_, lean_object* v_h__4_46_, lean_object* v_h__5_47_){
_start:
{
switch(lean_obj_tag(v_x_42_))
{
case 0:
{
uint8_t v_sigma_48_; lean_object* v___x_49_; lean_object* v___x_50_; 
lean_dec(v_h__5_47_);
lean_dec(v_h__4_46_);
lean_dec(v_h__3_45_);
lean_dec(v_h__2_44_);
v_sigma_48_ = lean_ctor_get_uint8(v_x_42_, 0);
lean_dec_ref_known(v_x_42_, 0);
v___x_49_ = lean_box(v_sigma_48_);
v___x_50_ = lean_apply_1(v_h__1_43_, v___x_49_);
return v___x_50_;
}
case 1:
{
uint8_t v_sigma_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_h__5_47_);
lean_dec(v_h__4_46_);
lean_dec(v_h__3_45_);
lean_dec(v_h__1_43_);
v_sigma_51_ = lean_ctor_get_uint8(v_x_42_, 0);
lean_dec_ref_known(v_x_42_, 0);
v___x_52_ = lean_box(v_sigma_51_);
v___x_53_ = lean_apply_1(v_h__2_44_, v___x_52_);
return v___x_53_;
}
case 2:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
lean_dec(v_h__5_47_);
lean_dec(v_h__4_46_);
lean_dec(v_h__2_44_);
lean_dec(v_h__1_43_);
v___x_54_ = lean_box(0);
v___x_55_ = lean_apply_1(v_h__3_45_, v___x_54_);
return v___x_55_;
}
case 3:
{
lean_object* v_sigma_56_; lean_object* v___x_57_; 
lean_dec(v_h__5_47_);
lean_dec(v_h__3_45_);
lean_dec(v_h__2_44_);
lean_dec(v_h__1_43_);
v_sigma_56_ = lean_ctor_get(v_x_42_, 0);
lean_inc(v_sigma_56_);
lean_dec_ref_known(v_x_42_, 1);
v___x_57_ = lean_apply_1(v_h__4_46_, v_sigma_56_);
return v___x_57_;
}
default: 
{
lean_object* v___x_58_; 
lean_dec(v_h__4_46_);
lean_dec(v_h__3_45_);
lean_dec(v_h__2_44_);
lean_dec(v_h__1_43_);
v___x_58_ = lean_apply_5(v_h__5_47_, v_x_42_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_58_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateOk_match__1_splitter(lean_object* v_motive_59_, lean_object* v_x_60_, lean_object* v_h__1_61_, lean_object* v_h__2_62_, lean_object* v_h__3_63_, lean_object* v_h__4_64_, lean_object* v_h__5_65_){
_start:
{
switch(lean_obj_tag(v_x_60_))
{
case 0:
{
uint8_t v_sigma_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
lean_dec(v_h__5_65_);
lean_dec(v_h__4_64_);
lean_dec(v_h__3_63_);
lean_dec(v_h__2_62_);
v_sigma_66_ = lean_ctor_get_uint8(v_x_60_, 0);
lean_dec_ref_known(v_x_60_, 0);
v___x_67_ = lean_box(v_sigma_66_);
v___x_68_ = lean_apply_1(v_h__1_61_, v___x_67_);
return v___x_68_;
}
case 1:
{
uint8_t v_sigma_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
lean_dec(v_h__5_65_);
lean_dec(v_h__4_64_);
lean_dec(v_h__3_63_);
lean_dec(v_h__1_61_);
v_sigma_69_ = lean_ctor_get_uint8(v_x_60_, 0);
lean_dec_ref_known(v_x_60_, 0);
v___x_70_ = lean_box(v_sigma_69_);
v___x_71_ = lean_apply_1(v_h__2_62_, v___x_70_);
return v___x_71_;
}
case 2:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v_h__5_65_);
lean_dec(v_h__4_64_);
lean_dec(v_h__2_62_);
lean_dec(v_h__1_61_);
v___x_72_ = lean_box(0);
v___x_73_ = lean_apply_1(v_h__3_63_, v___x_72_);
return v___x_73_;
}
case 3:
{
lean_object* v_sigma_74_; lean_object* v___x_75_; 
lean_dec(v_h__5_65_);
lean_dec(v_h__3_63_);
lean_dec(v_h__2_62_);
lean_dec(v_h__1_61_);
v_sigma_74_ = lean_ctor_get(v_x_60_, 0);
lean_inc(v_sigma_74_);
lean_dec_ref_known(v_x_60_, 1);
v___x_75_ = lean_apply_1(v_h__4_64_, v_sigma_74_);
return v___x_75_;
}
default: 
{
lean_object* v___x_76_; 
lean_dec(v_h__4_64_);
lean_dec(v_h__3_63_);
lean_dec(v_h__2_62_);
lean_dec(v_h__1_61_);
v___x_76_ = lean_apply_5(v_h__5_65_, v_x_60_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_76_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateRej_match__1_splitter___redArg(lean_object* v_x_77_, lean_object* v_h__1_78_, lean_object* v_h__2_79_, lean_object* v_h__3_80_, lean_object* v_h__4_81_, lean_object* v_h__5_82_){
_start:
{
switch(lean_obj_tag(v_x_77_))
{
case 4:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec(v_h__5_82_);
lean_dec(v_h__4_81_);
lean_dec(v_h__3_80_);
lean_dec(v_h__2_79_);
v___x_83_ = lean_box(0);
v___x_84_ = lean_apply_1(v_h__1_78_, v___x_83_);
return v___x_84_;
}
case 5:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec(v_h__5_82_);
lean_dec(v_h__4_81_);
lean_dec(v_h__3_80_);
lean_dec(v_h__1_78_);
v___x_85_ = lean_box(0);
v___x_86_ = lean_apply_1(v_h__2_79_, v___x_85_);
return v___x_86_;
}
case 6:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
lean_dec(v_h__5_82_);
lean_dec(v_h__4_81_);
lean_dec(v_h__2_79_);
lean_dec(v_h__1_78_);
v___x_87_ = lean_box(0);
v___x_88_ = lean_apply_1(v_h__3_80_, v___x_87_);
return v___x_88_;
}
case 7:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
lean_dec(v_h__5_82_);
lean_dec(v_h__3_80_);
lean_dec(v_h__2_79_);
lean_dec(v_h__1_78_);
v___x_89_ = lean_box(0);
v___x_90_ = lean_apply_1(v_h__4_81_, v___x_89_);
return v___x_90_;
}
default: 
{
lean_object* v___x_91_; 
lean_dec(v_h__4_81_);
lean_dec(v_h__3_80_);
lean_dec(v_h__2_79_);
lean_dec(v_h__1_78_);
v___x_91_ = lean_apply_5(v_h__5_82_, v_x_77_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_91_;
}
}
}
}
LEAN_EXPORT lean_object* lp_Echonomics___private_Echonomics_Proofs_0__Echonomics_Proofs_isGateRej_match__1_splitter(lean_object* v_motive_92_, lean_object* v_x_93_, lean_object* v_h__1_94_, lean_object* v_h__2_95_, lean_object* v_h__3_96_, lean_object* v_h__4_97_, lean_object* v_h__5_98_){
_start:
{
switch(lean_obj_tag(v_x_93_))
{
case 4:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
lean_dec(v_h__5_98_);
lean_dec(v_h__4_97_);
lean_dec(v_h__3_96_);
lean_dec(v_h__2_95_);
v___x_99_ = lean_box(0);
v___x_100_ = lean_apply_1(v_h__1_94_, v___x_99_);
return v___x_100_;
}
case 5:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
lean_dec(v_h__5_98_);
lean_dec(v_h__4_97_);
lean_dec(v_h__3_96_);
lean_dec(v_h__1_94_);
v___x_101_ = lean_box(0);
v___x_102_ = lean_apply_1(v_h__2_95_, v___x_101_);
return v___x_102_;
}
case 6:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
lean_dec(v_h__5_98_);
lean_dec(v_h__4_97_);
lean_dec(v_h__2_95_);
lean_dec(v_h__1_94_);
v___x_103_ = lean_box(0);
v___x_104_ = lean_apply_1(v_h__3_96_, v___x_103_);
return v___x_104_;
}
case 7:
{
lean_object* v___x_105_; lean_object* v___x_106_; 
lean_dec(v_h__5_98_);
lean_dec(v_h__3_96_);
lean_dec(v_h__2_95_);
lean_dec(v_h__1_94_);
v___x_105_ = lean_box(0);
v___x_106_ = lean_apply_1(v_h__4_97_, v___x_105_);
return v___x_106_;
}
default: 
{
lean_object* v___x_107_; 
lean_dec(v_h__4_97_);
lean_dec(v_h__3_96_);
lean_dec(v_h__2_95_);
lean_dec(v_h__1_94_);
v___x_107_ = lean_apply_5(v_h__5_98_, v_x_93_, lean_box(0), lean_box(0), lean_box(0), lean_box(0));
return v___x_107_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Echonomics_Echonomics_Core(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Echonomics_Echonomics_Proofs(uint8_t builtin) {
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
