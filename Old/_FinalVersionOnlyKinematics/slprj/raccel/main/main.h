#ifndef RTW_HEADER_main_h_
#define RTW_HEADER_main_h_
#include <stddef.h>
#include <emmintrin.h>
#include <stdlib.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#ifndef main_COMMON_INCLUDES_
#define main_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "stdlib.h"
#endif
#include "main_types.h"
#include "multiword_types.h"
#include "MagneticFieldInPolarCoords.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME main
#define NSAMPLE_TIMES (14) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (150) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (14)   
#elif NCSTATES != 14
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging    
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int32_T h4htzwynch ; int8_T lkqtujj5qn ; } fhzhep3hld ;
typedef struct { int32_T jlpifn4yub ; int8_T frt22lnhun ; } lpx1p3sqzx ;
typedef struct { int32_T jvxfs0mjwv ; int8_T iftxgfmwnh ; } f3efdxf5zj ;
typedef struct { int32_T ioyk4rkcqw ; int8_T cz2sd5ks45 ; } c4n55hkoix ;
typedef struct { real_T g0mrioy1px ; real_T aq11zi4uh2 ; real_T hjcotmhlln ;
real_T lnkbbmaxut ; real_T adm5dxedvk ; real_T f2fo4aztpb [ 4 ] ; real_T
hiefr0yole [ 4 ] ; real_T dgjbpbeorv [ 2 ] ; real_T hh1rdgrph0 [ 2 ] ; real_T
pb33zpaont [ 2 ] ; real_T olo2njtgqu [ 4 ] ; real_T dqh4fg2fl2 ; real_T
fmiudkl0xp ; real_T aywo03gopp ; real_T ecbd1xcds1 ; real_T nabgcgokls ;
real_T p0g2tnevfk [ 3 ] ; real_T h20zeizqdi [ 3 ] ; real_T lfqykqi1sg [ 3 ] ;
real_T c1cfxe21zn [ 3 ] ; real_T op4p3vooky [ 3 ] ; real_T px02m2ansm ;
real_T lzgno0c45u ; real_T frbnnz0j20 ; real_T ftjowoqghq ; real_T psapwntjo4
; real_T pjlzlhabnw ; real_T fkulvx00jr [ 3 ] ; real_T g20nolxhoz [ 3 ] ;
real_T ggrj4lwkdq ; real_T jjuwpyarp5 ; real_T nyoyhdwzhr ; real_T mfc3g102pw
[ 3 ] ; real_T fj4e2b5bch [ 3 ] ; real_T k2zlzdldai [ 3 ] ; real_T jg5xwtwjpe
[ 3 ] ; real_T bwu3hh5pg3 [ 4 ] ; real_T iunb01rvwp ; real_T hnvlhc15na [ 3 ]
; real_T gbu5abs2sz [ 3 ] ; real_T cbgxsqe0kg [ 3 ] ; real_T kwx5xj2ngl ;
real_T ngj1laz0jn ; real_T gnzoqn2dsl [ 3 ] ; real_T pguc21lp1k [ 3 ] ;
real_T gnhb3isuhw ; real_T isiqvhsvds ; real_T an1hct1vdk [ 9 ] ; real_T
jgyobyjg0x ; real_T aoe02aounf [ 3 ] ; real_T mkpovvsjoj [ 2 ] ; real_T
hiigrn3uvx [ 3 ] ; real_T nyimkzd5hq [ 2 ] ; real_T fllsexxjfy [ 3 ] ; real_T
cddswdr3cl [ 2 ] ; real_T obyw5bjsqt [ 3 ] ; real_T a2f0ypmsuy [ 2 ] ; real_T
fp4h0u1qqq [ 3 ] ; real_T ch2k5w2dnh [ 2 ] ; real_T fe3icz0afg [ 3 ] ; real_T
ipb4qp4laq [ 2 ] ; real_T ouubw05eym [ 9 ] ; real_T amepcbkksg [ 3 ] ; real_T
fi1wde2gl2 [ 3 ] ; real_T culrexdnyf ; real_T ambhfazf2y [ 3 ] ; real_T
lx0bv1yu1i [ 3 ] ; real_T a55nsryplm [ 4 ] ; real_T jq2aut2ijb [ 3 ] ; real_T
mvnud1uzgl ; real_T hckf2ailv0 ; real_T bfud51xipp ; real_T kp1mzqwbu3 ;
real_T mrzwmqiqje ; real_T kyx4elghw5 ; real_T ightd03wbw ; real_T boco0ydrhx
; real_T kgibrayejc ; real_T klod4yztvz ; real_T gr0fttz1x3 ; real_T
lj2hsiefmb ; real_T pqwrcdv51y ; real_T gkj1c4ecpo ; real_T ltnksa0t1k ;
real_T ebby2e0eey ; real_T kc5uinuva1 ; real_T olg5gqva4k ; real_T ny5fqojp01
; real_T mwkxuoztcf ; real_T g42bdhp2mr ; real_T gegkjzomxm ; real_T
kd1qxjhyrr ; real_T pgs5royztd ; real_T eqlu1laly1 ; real_T c4imsujsyj ;
real_T ewg4gsarwm ; real_T myxilkpyto ; real_T nfvbvcsgaf ; real_T jyoiaqgash
; real_T am2ydxy3tg ; real_T aayx0clngf ; real_T imjovcvzmj ; real_T
fhwu2rpyxm ; real_T db5wedrkq4 ; real_T bzsae5g150 ; real_T fxqr3to5iu ;
real_T b3deffzvww ; real_T jzcgup51f2 ; real_T aqvhjylunl ; real_T pmy5icug2k
; real_T pxdeyipxtr ; real_T cepjmd5gi4 ; real_T a3l2vrrg5t ; real_T
pmjdaqsrgv ; real_T ivk2auaags ; real_T hmdscxhrrq ; real_T ks0a4vmt2y ;
real_T fuxsypdw5b ; real_T ibibxo1hc5 ; real_T e0g1epmzzc ; real_T pvujvtillf
; real_T bralaspqvj ; real_T mf042bbyls ; real_T pvvuqzjxh5 ; real_T
jkdvlxhrn3 ; real_T nd0vnjuzbo ; real_T ke44k2nvd3 ; real_T bvbwt2i4ty ;
real_T bckqvwne10 ; real_T icooi3vgxr ; real_T nhfh5pwjge ; real_T ekeiqfqt15
; real_T fu44uyydbm ; real_T nrvyadhccn ; real_T kif43ukmno ; real_T
lvap1gibsy ; real_T fjgl0ynn23 ; real_T dlywnze0gh ; real_T kuqlbidad1 [ 3 ]
; real_T du4yqg3svc [ 3 ] ; real_T j5pfxwzlry [ 3 ] ; real_T m4a4e0kncl [ 3 ]
; real_T inxuhwzyyf [ 3 ] ; real_T b51zos5ddd ; real_T mz4bssc4xj ; real_T
hi5t21up55 ; real_T gr33hmjawo [ 7 ] ; boolean_T fepr2tvtnf ; boolean_T
fgtzb5d0ie ; } o2y45zbt2m ; typedef struct { real_T iwulztso32 [ 3 ] ; real_T
epbwbvrls5 ; real_T fytmukko2d ; real_T curihjwvdq ; real_T oumjhalsqc ;
real_T o2yvavvn5c ; real_T hz2n5lmwzt ; real_T g4x2krmhlv [ 49 ] ; real_T
osfynlsngc [ 7 ] ; struct { void * LoggedData [ 2 ] ; } hmrfyhr2kl ; struct {
void * LoggedData ; } mj2w2pdzvf ; struct { void * LoggedData ; } iuw5nsctvf
; uint32_T c34nru5wvg ; uint32_T o4uuntuq5v [ 2 ] ; uint32_T ign3og3yoe ;
uint32_T ewhzpwb1ca [ 2 ] ; uint32_T f1rxn31y0i ; uint32_T h2f0zvrfqq [ 2 ] ;
uint32_T nydzqlwwnn ; uint32_T bdotsga2iv [ 2 ] ; uint32_T djim5bpjvv ;
uint32_T lqkanthoxg [ 2 ] ; uint32_T atmgtfljnh ; uint32_T n10hslmo2a [ 2 ] ;
uint32_T pa2kyvt1uy ; uint32_T j13dkj5h0s [ 2 ] ; uint32_T p3xkfovqki ;
uint32_T k40rhthviy [ 2 ] ; uint32_T d1wjrwas1u ; uint32_T jjpbiyjnrh [ 2 ] ;
uint32_T cmfzrxdc11 ; uint32_T impwbrb5ul [ 2 ] ; uint32_T ivdqhywypm ;
uint32_T ck30ytigtq [ 2 ] ; int_T btkpsszf3k ; int_T ckit2etwje ; int_T
irqzxzls3s ; int_T febtg0cpg5 ; int_T g0uzej5lf1 ; int8_T fdyoeqkdqi ; int8_T
crvsqmvbcs ; int8_T bimi4g1wrk ; int8_T jlabupavh3 ; int8_T he1tephpj4 ;
int8_T li05mozykd ; int8_T dhtgbttn1t ; int8_T dnqubg5s4k ; int8_T bze1flsb15
; int8_T pidbwsidci ; int8_T ji1vknz2dr ; int8_T gltmjlakux ; int8_T
ojltdhe2we ; int8_T pwifaixjxb ; int8_T haxpv4vq51 ; int8_T hxjxms0byf ;
int8_T jij01p0qtw ; int8_T ihprlm0zdr ; int8_T jgquwrgfhd ; int8_T o2i4021xwh
; int8_T iqs2nrdyqs ; int8_T p4n3550tai ; int8_T iwklra2msj ; int8_T
mt3gx422x1 ; int8_T pug0coupbp ; int8_T jeg35werh5 ; int8_T kz1j0tnmva ;
int8_T lq5ek0jlzd ; int8_T mnrneviuut ; int8_T nqcixj2cfc ; int8_T gcz34svd4r
; int8_T anszycztem ; int8_T ane43mgfgs ; int8_T hkxlm4qdro ; int8_T
fnu1tvdbyx ; int8_T fq3jja1aol ; int8_T nbmuo2yzhf ; int8_T ev5en1vf5z ;
int8_T fnnqkeqpmg ; int8_T j1uacuucpv ; int8_T cbsmbddbag ; int8_T bnzh2jzuy5
; int8_T pmgcir2p13 ; int8_T obuyxhugh2 ; int8_T h5fod2fj2q ; int8_T
hnbwguuonj ; int8_T fimtx0wf43 ; int8_T jxtww5tjxt ; int8_T as5m3dr43z ;
int8_T gtaj4wmjuq ; int8_T a0tdfwofzg ; int8_T ikwlyg3xde ; int8_T nw1rjo5a2w
; int8_T kg1shmc2lb ; int8_T pdpb34jklm ; int8_T dclbaaw1uo ; int8_T
dxe5u3tdqf ; int8_T enqbz4gbik ; int8_T kma110u0cd ; int8_T p31xfuh0e2 ;
int8_T op3ehrh51o ; int8_T lb3hih1zhu ; int8_T jjpaqm4yys ; int8_T glbjm2bh2o
; int8_T m0glaktt01 ; int8_T ihdnc2epba ; int8_T c1p4hnj5v1 ; int8_T
gczym4ozql ; int8_T mb3ab3hq0l ; int8_T lwgiflcl1s ; int8_T exhkqeoxjl ;
boolean_T e2pe11pwxn ; boolean_T opg1lhdczb ; boolean_T g24vxooz0v ;
boolean_T l3pfqrb31o ; boolean_T jiqhomoo0v ; boolean_T jmjdutrgwi ;
boolean_T gcdlpfr3qr ; boolean_T bhx2bk5lkm ; boolean_T gxxnmirgwt ;
boolean_T ayulg3mnvk ; boolean_T dmkiyir0bc ; boolean_T nlifgx53vj ;
boolean_T cozmdzu0w1 ; boolean_T cnj1jumxqg ; boolean_T ckwrsfgl5j ;
boolean_T e2cixfebva ; boolean_T i5keywnlob ; boolean_T ae5papqlus ;
boolean_T hbtp1swogp ; boolean_T ct2fu2r1og ; boolean_T mp3yltewxi ;
boolean_T brmqgwecvy ; boolean_T kjzbuo2ejd ; boolean_T ddgb0ny2wp ;
boolean_T ozme2zffq1 ; boolean_T pqxjs5shcl ; boolean_T jydhsrazby ;
boolean_T nfvyn45pdm ; boolean_T cjwjqcd1zs ; boolean_T m2abnapxna ;
boolean_T ejudse0oqw ; mcbsajulppp p11kqkd5tq ; c4n55hkoix oxb0jyodnm ;
f3efdxf5zj bghekfjhrb ; lpx1p3sqzx iyw4crazdc ; fhzhep3hld npgo12zmto ;
c4n55hkoix hqjl54s2qvo ; f3efdxf5zj pefmh4xzsjq ; lpx1p3sqzx n0mztpd0lov ;
fhzhep3hld bjbtw11222c ; } hrxu5rhe3a ; typedef struct { real_T bcrrky3g2k [
4 ] ; real_T kbqjtzizsx [ 3 ] ; real_T ezm2ooaqjl [ 3 ] ; real_T cjfebnqw1p ;
real_T li1obxdvy3 [ 3 ] ; } n1mubcupv3 ; typedef struct { real_T bcrrky3g2k [
4 ] ; real_T kbqjtzizsx [ 3 ] ; real_T ezm2ooaqjl [ 3 ] ; real_T cjfebnqw1p ;
real_T li1obxdvy3 [ 3 ] ; } hgblgktduh ; typedef struct { boolean_T
bcrrky3g2k [ 4 ] ; boolean_T kbqjtzizsx [ 3 ] ; boolean_T ezm2ooaqjl [ 3 ] ;
boolean_T cjfebnqw1p ; boolean_T li1obxdvy3 [ 3 ] ; } cx2ym530ez ; typedef
struct { real_T bcrrky3g2k [ 4 ] ; real_T kbqjtzizsx [ 3 ] ; real_T
ezm2ooaqjl [ 3 ] ; real_T cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; } d3ndefizfv
; typedef struct { real_T bcrrky3g2k [ 4 ] ; real_T kbqjtzizsx [ 3 ] ; real_T
ezm2ooaqjl [ 3 ] ; real_T cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; } b1atdx35ps
; typedef struct { real_T bcrrky3g2k [ 4 ] ; real_T kbqjtzizsx [ 3 ] ; real_T
ezm2ooaqjl [ 3 ] ; real_T cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; } eiuf0ypz1n
; typedef struct { real_T pe0u3adwg1 ; real_T aojfxgxmdw ; real_T jzsx34kglq
; real_T pd3debhlnc ; real_T ln40dtmdft ; real_T cuaynzimio [ 2 ] ; real_T
b5utqecrmv ; real_T iyjkgpjk2z ; real_T p5ibpoygyq ; } p0mddzrq0f ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [
1 ] ; } DataMapInfo ; struct hbv5azo3swd_ { real_T RandomSource_MeanVal ;
real_T RandomSource_MeanVal_pdjjnbytmo ; real_T
RandomSource_MeanVal_c0srfhbvgi ; real_T RandomSource1_MeanVal ; real_T
RandomSource_MeanVal_lzp2mz4mln ; real_T RandomSource1_MeanVal_bvk35h21mf ;
real_T RandomSource1_MeanVal_cgugych5h2 ; real_T
RandomSource1_MeanVal_d4idhl1tz1 ; real_T RandomSource1_MeanVal_n5f3r1zvmv ;
real_T RandomSource1_MeanVal_kfynkp2waz ; real_T
RandomSource1_MeanVal_d1pxk3satq ; real_T PWM_Period ; real_T PWM1_Period ;
real_T PWM2_Period ; real_T PWM3_Period ; real_T PWM4_Period ; real_T
PWM5_Period ; real_T DirectionCosineMatrixtoQuaternions_action ; real_T
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd ; real_T
NormalizeVector_maxzero ; real_T NormalizeVector1_maxzero ; real_T
NormalizeVector3_maxzero ; real_T NormalizeVector4_maxzero ; real_T
NormalizeVector_maxzero_bhjxf3hbxp ; real_T
NormalizeVector_maxzero_nx4f2adafg ; real_T
NormalizeVector_maxzero_j5wdotj0ar ; real_T
NormalizeVector_maxzero_etigbudinl ; real_T
NormalizeVector_maxzero_mpxbpoayb2 ; real_T
NormalizeVector_maxzero_kqylmwb1gt ; real_T
DirectionCosineMatrixtoQuaternions_tolerance ; real_T
DirectionCosineMatrixtoQuaternions_tolerance_lf33vmkxxr ; real_T Gain_Gain ;
real_T Gain1_Gain ; real_T Constant_Value ; real_T Gain_Gain_jkk5qbvhrd ;
real_T Gain1_Gain_hwcrrxc31u ; real_T Gain3_Gain ; real_T Gain4_Gain ; real_T
Constant1_Value ; real_T Constant2_Value [ 2 ] ; real_T
Constant_Value_pobvkhrg1q ; real_T Gain_Gain_js4ptfwauk ; real_T
Gain1_Gain_ckvar5qtuu ; real_T Gain2_Gain ; real_T Gain3_Gain_flkrwqpj2z ;
real_T Constant1_Value_ngar4yzxq0 ; real_T Constant2_Value_dvdwumvekn [ 2 ] ;
real_T Constant_Value_afybtd5xa5 ; real_T Gain_Gain_i1fq4bspbj ; real_T
Gain1_Gain_b0y5bwazer ; real_T Gain2_Gain_clpxe40pxa ; real_T
Gain3_Gain_dq4fv403xs ; real_T Constant1_Value_il1xiv44vm ; real_T
Constant2_Value_gu0oz414og [ 2 ] ; real_T Constant_Value_dchp0pj4cy ; real_T
Constant1_Value_oiduqg4pzd ; real_T Constant1_Value_d3rbf1demf ; real_T
Bias_Bias ; real_T Bias1_Bias [ 9 ] ; real_T Gain_Gain_f2lrjksp1b ; real_T
Gain1_Gain_ctfieebgom ; real_T Constant_Value_czyi20hi44 ; real_T
Gain_Gain_ffyvgqn0t3 ; real_T Gain1_Gain_hf2zl5hf11 ; real_T
Gain3_Gain_bw3onmpp4n ; real_T Gain4_Gain_evdjntwv1r ; real_T
Constant1_Value_h5yyggpyun ; real_T Constant2_Value_dsajk3p21p [ 2 ] ; real_T
Constant_Value_glskcdmgi0 ; real_T Gain_Gain_ev442xw5g3 ; real_T
Gain1_Gain_bctn5kthma ; real_T Gain2_Gain_omr2r2devz ; real_T
Gain3_Gain_iezjytb1ib ; real_T Constant1_Value_ius3i4otxm ; real_T
Constant2_Value_j5v1xvugrn [ 2 ] ; real_T Constant_Value_p5m1vauvdr ; real_T
Gain_Gain_cqlkw4p3g1 ; real_T Gain1_Gain_ij2znuz5co ; real_T
Gain2_Gain_medwk1da45 ; real_T Gain3_Gain_j50dplxsob ; real_T
Constant1_Value_c4wnv34dlm ; real_T Constant2_Value_i3cnjpylpr [ 2 ] ; real_T
Constant_Value_m2h11to3lk ; real_T Constant1_Value_ftvtqjp1us ; real_T
Constant1_Value_l2qqn3e4fv ; real_T Bias_Bias_la31kdn2hs ; real_T
Bias1_Bias_ipdymfxp23 [ 9 ] ; real_T Gain_Gain_ke0m542tvh ; real_T
Gain_Gain_eyanrhbwuk ; real_T Gain_Gain_irerkaxl5x ; real_T
Gain_Gain_pgavoonfvk ; real_T Gain_Gain_p1y5blaq4p ; real_T
Gain_Gain_egeq4qcrwd ; real_T RandomSource_VarianceRTP ; real_T
RandomSource_VarianceRTP_k13dwuafgu ; real_T
RandomSource_VarianceRTP_ho3qok5dvb ; real_T Merge_InitialOutput [ 4 ] ;
real_T RandomSource1_VarianceRTP ; real_T Gain_Gain_jtp3rrvu3s ; real_T
RandomSource_VarianceRTP_hlnrsyc2os ; real_T Gain_Gain_bi5br4oxvh ; real_T
Gain1_Gain_cftaqvkxoi ; real_T Gain2_Gain_lwwetqjf5s ; real_T
Gain_Gain_eb5rzn1cjw ; real_T Gain1_Gain_i4m04mlldw ; real_T
Gain3_Gain_b5qqmritsc ; real_T Integrator1_AbsoluteTolerance ; real_T
Gain_Gain_cpl3z33sd4 ; real_T Gain_Gain_cf5hb10y5x ; real_T
Gain2_Gain_n32pjfxnui ; real_T Gain1_Gain_gwlrw1w2b3 ; real_T
Gain_Gain_efnax0y1dx ; real_T Gain1_Gain_ddeccjfmea ; real_T
Gain2_Gain_g2ebct4dqc ; real_T Gain2_Gain_cko11epp5n ; real_T
Gain_Gain_cjicctxqb2 ; real_T Gain1_Gain_nieh11pzcd ; real_T
Gain_Gain_m4jtdwqsx1 ; real_T Gain_Gain_cnryscy0x5 ; real_T
Gain_Gain_flpxquj1at ; real_T Gain_Gain_fsocaetgdj ; real_T
Gain1_Gain_igcxviai5g ; real_T Gain2_Gain_mcrod3aisq ; real_T
Gain2_Gain_d0aeb3inpf ; real_T Gain_Gain_avgts0xajn ; real_T
Gain1_Gain_pfgznzxep3 ; real_T Gain_Gain_l4qk2foong ; real_T
Gain2_Gain_jbi3ws3ahy ; real_T Gain1_Gain_b2dtklqw2b ; real_T
Gain1_Gain_csudgssrcg ; real_T Gain2_Gain_nben4kjacq ; real_T
Gain_Gain_kewyutalpa ; real_T Gain1_Gain_e5ngzsvcli ; real_T
Gain_Gain_fouuav1ki1 ; real_T Gain2_Gain_d4fbbaxwpd ; real_T
Gain1_Gain_lq4olh4tnx ; real_T Gain_Gain_kc1cpqscqf ; real_T
Gain1_Gain_n4q3gythod ; real_T Gain2_Gain_arhr50dupm ; real_T
Gain1_Gain_objsqoebrs ; real_T Integrator_AbsoluteTolerance ; real_T
Gain_Gain_ij5ephcub4 ; real_T Gain1_Gain_fos5u53xa3 ; real_T
Gain_Gain_fosanw5ymw ; real_T Q_Value [ 36 ] ; real_T R1_Value [ 36 ] ;
real_T DataStoreMemoryP_InitialValue [ 49 ] ; real_T
DataStoreMemoryx_InitialValue [ 7 ] ; real_T Gain_Gain_acmfvzt2nt ; real_T
Merge_InitialOutput_faglwg4vcm [ 4 ] ; real_T
RandomSource1_VarianceRTP_k1b5meiqjj ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T RandomSource1_VarianceRTP_pdcijtaj4d ; real_T
Saturation_UpperSat_m5walzmpht ; real_T Saturation_LowerSat_kiy0a1gdvs ;
real_T RandomSource1_VarianceRTP_crqc3mkc0f ; real_T
Saturation_UpperSat_m5kmh5w5uw ; real_T Saturation_LowerSat_i04nwcukho ;
real_T RandomSource1_VarianceRTP_blin0jucej ; real_T
Saturation_UpperSat_c4xiqwgxlz ; real_T Saturation_LowerSat_pi2aujffw1 ;
real_T RandomSource1_VarianceRTP_dvuf3vyvl4 ; real_T
Saturation_UpperSat_mq4hmkw4m2 ; real_T Saturation_LowerSat_dqoi00mxim ;
real_T RandomSource1_VarianceRTP_cg3jlumacb ; real_T
Saturation_UpperSat_kiybxhvwme ; real_T Saturation_LowerSat_lktmm4bxfn ;
real_T Constant_Value_hyw20kdmss ; real_T Constant_Value_hqwvrd4twi ; real_T
Constant_Value_f5jgk2qlyk ; real_T Star1Earthinertialframe_Value [ 3 ] ;
real_T Star2Earthinertialframe_Value [ 3 ] ; real_T
Star3Earthinertialframe_Value [ 3 ] ; real_T SensorattitudeBodyframe_Value [
4 ] ; real_T Gain_Gain_fgogcvmrol ; real_T Gain_Gain_lhyrdo4a3w ; real_T
Gain_Gain_jllkehyjaf ; real_T Gain_Gain_lwb1grxsgi ; real_T
Gain_Gain_hmfig3lbok ; real_T Gain_Gain_m1woqqz52k ; real_T
Constant2_Value_ialq4qchdp [ 3 ] ; real_T Constant3_Value [ 3 ] ; real_T
Gain1_Gain_l1jki2u5fa ; real_T Inertia_Value [ 3 ] ; real_T
Constant_Value_bpdqgjnrbi ; real_T Constant_Value_lxx0buxvfk ; real_T
Constant_Value_a2jieicat5 ; real_T Constant_Value_ollq4x5vyn ; real_T
Constant_Value_jelrytb22b ; real_T Constant_Value_nfqnghygav ; real_T
Spacecraftmagneticdipolebodyreferenceframe_Value [ 3 ] ; real_T
Constant_Value_ekkpqgqspn ; real_T Constant_Value_hrofb0v0v5 ; real_T
u821stMarch_Value ; real_T Gain1_Gain_km22rji0yo ; real_T
Constant_Value_c0ie4jx1vv ; real_T Constant1_Value_lvvzxuwh5z ; real_T
Sun_Value ; real_T a_Value ; real_T e_Value ; real_T
Constant_Value_hn3g4e2bdf ; real_T Constant_Value_cinqqywm1t ; real_T
Constant_Value_aglfz4cib2 ; real_T Anglebetween3rdJanto21stMarch180_Value ;
real_T Constant_Value_mgrgcefnc2 ; real_T Constant5_Value ; real_T
Ecliptic_Value ; real_T Gain_Gain_nrquqjsjbh ; real_T Gain1_Gain_byeui5d4hz ;
real_T Constant_Value_azddlyivju ; real_T Constant3_Value_fveye0j2gb ; real_T
u2_Gain ; real_T Constant_Value_mrthaqohbp ; real_T Gain_Gain_msviodsdfg ;
real_T Gain1_Gain_fdnpx3hnab ; real_T Gain2_Gain_jrylcyky0d ; real_T
Constant_Value_gob0mxnrc1 ; real_T Gain_Gain_j00moojqwi ; real_T
Gain1_Gain_epavf05nx2 ; real_T Gain2_Gain_jieczjcfxj ; real_T
Constant_Value_l4ftm45smy ; real_T Gain_Gain_lxppc43sr3 ; real_T
Gain1_Gain_pr0mjxkeko ; real_T Gain2_Gain_oh11qzcnsq ; real_T
Constant3_Value_aiagav1bu5 ; real_T Constant4_Value ; real_T
SensorattitudeBodyframe_Value_j5gua0l1cu [ 4 ] ; real_T
Star1Earthinertialframe_Value_ifkn0ogqah [ 3 ] ; real_T
Star2Earthinertialframe_Value_h1kqrgh25u [ 3 ] ; real_T
Star3Earthinertialframe_Value_dn3g4rngub [ 3 ] ; real_T
Constant_Value_fjyq3eus5i ; real_T Constant_Value_cpj53jxfos ; real_T
Constant_Value_ouyamitdob ; real_T Constant_Value_guhbgdhd5y ; real_T
Constant_Value_k3ydr0xveb [ 2 ] ; real_T Constant_Value_pu1egqm5wd ; real_T
Sensororientation_Value [ 4 ] ; real_T Constant_Value_hucifuffuc ; real_T
Gain_Gain_gakfyjlszi ; real_T Gain1_Gain_cp5gxmxv40 ; real_T
Gain2_Gain_bqvzfgganp ; real_T Constant_Value_itxm0x43si ; real_T
Gain_Gain_jcxnesc51s ; real_T Gain1_Gain_e5tqo52tku ; real_T
Gain2_Gain_jxsi55a1on ; real_T Constant_Value_ezafw5tbx0 ; real_T
Gain_Gain_omyfgx1n5h ; real_T Gain1_Gain_n4ecq0uzvs ; real_T
Gain2_Gain_bxmfdcbxd2 ; real_T Constant_Value_cknsmwduvj [ 2 ] ; real_T
Constant_Value_oqac1ckjba ; real_T Sensororientation_Value_hlfjdstuhw [ 4 ] ;
real_T Constant_Value_kst2th0l1z ; real_T Gain_Gain_cr4zczeez0 ; real_T
Gain1_Gain_g12m14aft0 ; real_T Gain2_Gain_enxakegu4s ; real_T
Constant_Value_igmvdrtaty ; real_T Gain_Gain_lw5hirdrrr ; real_T
Gain1_Gain_amkbhcbkvw ; real_T Gain2_Gain_bttjb1ulla ; real_T
Constant_Value_m4goabuepu ; real_T Gain_Gain_pmdq3xatwv ; real_T
Gain1_Gain_bgbnv4z5nx ; real_T Gain2_Gain_cdbsbiii2b ; real_T
Constant_Value_mxxxqc2s25 [ 2 ] ; real_T Constant_Value_etis5qgp2s ; real_T
Sensororientation_Value_cwstcpopt3 [ 4 ] ; real_T Constant_Value_lntxh0ukmr ;
real_T Gain_Gain_pfg5czu2ug ; real_T Gain1_Gain_lgo5besblz ; real_T
Gain2_Gain_aaobkzaajt ; real_T Constant_Value_imdxvhi4fs ; real_T
Gain_Gain_dmquktubpv ; real_T Gain1_Gain_o20oz1n5pv ; real_T
Gain2_Gain_bxr0hdxmou ; real_T Constant_Value_k0omy0fwkr ; real_T
Gain_Gain_app3p5qkli ; real_T Gain1_Gain_ggc5pki3i3 ; real_T
Gain2_Gain_jiiceq4a1g ; real_T Constant_Value_pxpcd5bk3c [ 2 ] ; real_T
Constant_Value_loxooi2xox ; real_T Sensororientation_Value_escjrdlkcn [ 4 ] ;
real_T Constant_Value_ba5xlpus1a ; real_T Gain_Gain_kb00k2wbfq ; real_T
Gain1_Gain_iow1llvkxc ; real_T Gain2_Gain_dtunvm3otp ; real_T
Constant_Value_eqda1kzn3h ; real_T Gain_Gain_npe4zqgyas ; real_T
Gain1_Gain_fdxpyxu0o1 ; real_T Gain2_Gain_n4sn3p4zhh ; real_T
Constant_Value_j3hxujgyee ; real_T Gain_Gain_caz4q343an ; real_T
Gain1_Gain_odtb3u3w54 ; real_T Gain2_Gain_pl1uwnp5vb ; real_T
Constant_Value_a5pfdrbwx4 [ 2 ] ; real_T Constant_Value_h114kk0gb0 ; real_T
Sensororientation_Value_ezbdisr3i3 [ 4 ] ; real_T Constant_Value_myru2azkts ;
real_T Gain_Gain_jfezxdcuu1 ; real_T Gain1_Gain_mzwjkwmyds ; real_T
Gain2_Gain_pt1tknsnuk ; real_T Constant_Value_mpzaspn304 ; real_T
Gain_Gain_cylo5ppz5d ; real_T Gain1_Gain_evkyndzct5 ; real_T
Gain2_Gain_ogm3tj3b4p ; real_T Constant_Value_ey5twm140q ; real_T
Gain_Gain_lnevd4sqnk ; real_T Gain1_Gain_f5yo2mvezp ; real_T
Gain2_Gain_mg22nq4b3k ; real_T Constant_Value_pb14rkkk1o [ 2 ] ; real_T
Constant_Value_kd13wd1tn5 ; real_T Sensororientation_Value_luhksxjjam [ 4 ] ;
real_T Constant_Value_kkk1dzjy3p ; real_T Gain_Gain_f5mrtnkemr ; real_T
Gain1_Gain_fdh0g1o02u ; real_T Gain2_Gain_gnny303ymj ; real_T
Constant_Value_jbyhakx4ay ; real_T Gain_Gain_bkbvyxdlek ; real_T
Gain1_Gain_pbfdoucssu ; real_T Gain2_Gain_ijreebnsuw ; real_T
Constant_Value_f1tb0wmrtm ; real_T Gain_Gain_a2lqzra5qd ; real_T
Gain1_Gain_f45poxumoe ; real_T Gain2_Gain_necstpfmlp ; real_T
Inertia_Value_ionitpmuar [ 3 ] ; boolean_T yBlockOrdering_Y0 ; boolean_T
Enable1_Value ; boolean_T BlockOrdering_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern o2y45zbt2m o2y45zbt2m4 ; extern
n1mubcupv3 n1mubcupv31 ; extern hrxu5rhe3a hrxu5rhe3af ; extern hbv5azo3swd
hbv5azo3sw ; extern SpacecraftDT rtP_Spacecraft ; extern EarthDT rtP_Earth ;
extern ConstDT rtP_Const ; extern mxArray * mr_main_GetDWork ( ) ; extern
void mr_main_SetDWork ( const mxArray * ssDW ) ; extern mxArray *
mr_main_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * main_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
