#ifndef RTW_HEADER_main_h_
#define RTW_HEADER_main_h_
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtw_modelmap.h"
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
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "stdlib.h"
#endif
#include "main_types.h"
#include "multiword_types.h"
#include "MagneticFieldInPolarCoords.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME main
#define NSAMPLE_TIMES (11) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (203) 
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
typedef struct { real_T m4ihnbxfaf [ 2 ] ; real_T bjttcelbng [ 4 ] ; }
g3zz1gnhke ; typedef struct { real_T p0g2tnevfk [ 3 ] ; real_T h20zeizqdi [ 3
] ; real_T lfqykqi1sg [ 3 ] ; real_T mvqp5l5ufq [ 3 ] ; real_T hwkzvkas3c ;
real_T pvehregqxn ; real_T fqzn4ufnnm ; real_T pcu5wlt0ol [ 3 ] ; real_T
cktw3suarj [ 2 ] ; real_T nvj2jobsne [ 3 ] ; real_T jf0z5nzend [ 2 ] ; real_T
mfythxhofy [ 3 ] ; real_T efvttc54la [ 2 ] ; real_T diblvbf0co [ 3 ] ; real_T
af3pwylngk [ 2 ] ; real_T avq3ivsxoj [ 3 ] ; real_T fk5zqxuz3h [ 2 ] ; real_T
cztzhrui22 [ 3 ] ; real_T gqbzn03dkr [ 2 ] ; real_T mdvmrfnqkz [ 3 ] ; real_T
fj4e2b5bch [ 3 ] ; real_T k2zlzdldai [ 3 ] ; real_T aoe02aounf [ 3 ] ; real_T
mkpovvsjoj [ 2 ] ; real_T hiigrn3uvx [ 3 ] ; real_T nyimkzd5hq [ 2 ] ; real_T
fllsexxjfy [ 3 ] ; real_T cddswdr3cl [ 2 ] ; real_T obyw5bjsqt [ 3 ] ; real_T
a2f0ypmsuy [ 2 ] ; real_T fp4h0u1qqq [ 3 ] ; real_T ch2k5w2dnh [ 2 ] ; real_T
fe3icz0afg [ 3 ] ; real_T ipb4qp4laq [ 2 ] ; real_T g4hdycezvh [ 3 ] ; real_T
j0ldaz4thu [ 3 ] ; real_T hpbrpn0y2j [ 3 ] ; real_T al2bqvraok [ 3 ] ; real_T
ggrj4lwkdq ; real_T jjuwpyarp5 ; real_T nyoyhdwzhr ; real_T mfc3g102pw [ 3 ]
; real_T jg5xwtwjpe [ 3 ] ; real_T bwu3hh5pg3 [ 4 ] ; real_T iunb01rvwp ;
real_T hnvlhc15na [ 3 ] ; real_T gbu5abs2sz [ 3 ] ; real_T cbgxsqe0kg [ 3 ] ;
real_T kwx5xj2ngl ; real_T ngj1laz0jn ; real_T gnzoqn2dsl [ 3 ] ; real_T
pguc21lp1k [ 3 ] ; real_T gnhb3isuhw ; real_T isiqvhsvds ; real_T an1hct1vdk
[ 9 ] ; real_T jgyobyjg0x ; real_T amepcbkksg [ 3 ] ; real_T fi1wde2gl2 [ 3 ]
; real_T culrexdnyf ; real_T ambhfazf2y [ 3 ] ; real_T lx0bv1yu1i [ 3 ] ;
real_T a55nsryplm [ 4 ] ; real_T jq2aut2ijb [ 3 ] ; real_T mvnud1uzgl ;
real_T hckf2ailv0 ; real_T bfud51xipp ; real_T kp1mzqwbu3 ; real_T mrzwmqiqje
; real_T kyx4elghw5 ; real_T ightd03wbw ; real_T boco0ydrhx ; real_T
kgibrayejc ; real_T klod4yztvz ; real_T gr0fttz1x3 ; real_T lj2hsiefmb ;
real_T pqwrcdv51y ; real_T gkj1c4ecpo ; real_T ltnksa0t1k ; real_T ebby2e0eey
; real_T kc5uinuva1 ; real_T olg5gqva4k ; real_T ny5fqojp01 ; real_T
mwkxuoztcf ; real_T g42bdhp2mr ; real_T gegkjzomxm ; real_T kd1qxjhyrr ;
real_T pgs5royztd ; real_T eqlu1laly1 ; real_T c4imsujsyj ; real_T ewg4gsarwm
; real_T myxilkpyto ; real_T nfvbvcsgaf ; real_T jyoiaqgash ; real_T
am2ydxy3tg ; real_T aayx0clngf ; real_T imjovcvzmj ; real_T fhwu2rpyxm ;
real_T db5wedrkq4 ; real_T bzsae5g150 ; real_T fxqr3to5iu ; real_T b3deffzvww
; real_T jzcgup51f2 ; real_T aqvhjylunl ; real_T pmy5icug2k ; real_T
pxdeyipxtr ; real_T cepjmd5gi4 ; real_T a3l2vrrg5t ; real_T pmjdaqsrgv ;
real_T ivk2auaags ; real_T hmdscxhrrq ; real_T ks0a4vmt2y ; real_T fuxsypdw5b
; real_T ibibxo1hc5 ; real_T e0g1epmzzc ; real_T pvujvtillf ; real_T
bralaspqvj ; real_T mf042bbyls ; real_T pvvuqzjxh5 ; real_T jkdvlxhrn3 ;
real_T nd0vnjuzbo ; real_T ke44k2nvd3 ; real_T bvbwt2i4ty ; real_T bckqvwne10
; real_T icooi3vgxr ; real_T nhfh5pwjge ; real_T ekeiqfqt15 ; real_T
fu44uyydbm ; real_T nrvyadhccn ; real_T kif43ukmno ; real_T lvap1gibsy ;
real_T fjgl0ynn23 ; real_T dlywnze0gh ; real_T evt22h0udz ; real_T hr5yavkh2g
; real_T a3453wdy3h ; real_T ln15xtukoj ; real_T ofev2a4bu4 ; real_T
iak2iehb01 ; real_T gy5dnmc0o2 ; real_T bemlv143br ; real_T hsxdwr2kap ;
real_T cikadflncr ; real_T d55wbumkta ; real_T ftiqxo4eic ; real_T dg3licanvf
; real_T fd0i4zg4gl ; real_T nmsyyhec3k ; real_T akaurxf5cn ; real_T
fjb4t2g0di ; real_T eps1xh200d ; real_T dbdvnfbtan ; real_T nqoad4oagc ;
real_T ornbl4mfau ; real_T gq23czohqi ; real_T gree3bakbj ; real_T m13nwgsfs4
; real_T brdq13y0qd ; real_T h3xp3qlim0 ; real_T b1pqf2pbpp ; real_T
ek204bmiea ; real_T aqwdecxidu ; real_T daikka42e3 ; real_T ga4ycdonne ;
real_T dpkcgsd4ym ; real_T pihfnbloym ; real_T a5drqsjnex ; real_T ndlxlyobzb
; real_T h5gslldsar ; real_T c23uk112gn ; real_T eq1sfn3btk ; real_T
jhqy0zwmu3 ; real_T iuke2eyfra ; real_T bw33cb1smq ; real_T kwmlekgm0w ;
real_T fjxh2v44zo ; real_T ei2iplcloo ; real_T dpw0lpwtco ; real_T i01jbvlzhi
; real_T ksqsb0wny4 ; real_T d224533rgj ; real_T d0h2bkxm2a ; real_T
jpbug4sdyr ; real_T llcjil2ppz ; real_T kp0ottklv2 ; real_T d4h0eb221l ;
real_T ajeydhy34x ; real_T kuqlbidad1 [ 3 ] ; real_T kncngnrvsh [ 7 ] ;
real_T du4yqg3svc [ 3 ] ; real_T j5pfxwzlry [ 3 ] ; real_T m4a4e0kncl [ 3 ] ;
real_T inxuhwzyyf [ 3 ] ; real_T b51zos5ddd ; real_T mz4bssc4xj ; real_T
hi5t21up55 ; boolean_T nh40mtprpn ; boolean_T niydxw3dug ; g3zz1gnhke
ik12ax5qrt ; g3zz1gnhke cuglwsdmbh ; } o2y45zbt2m ; typedef struct { real_T
iwulztso32 [ 3 ] ; real_T buggjk4l1n [ 49 ] ; real_T j3ergpk3vu [ 7 ] ;
struct { void * LoggedData ; } mj2w2pdzvf ; struct { void * LoggedData [ 2 ]
; } clkgymr5be ; struct { void * LoggedData ; } ctxiimp00u ; struct { void *
LoggedData ; } eyype4k5ql ; struct { void * LoggedData ; } iuw5nsctvf ;
uint32_T nydzqlwwnn ; uint32_T bdotsga2iv [ 2 ] ; uint32_T djim5bpjvv ;
uint32_T lqkanthoxg [ 2 ] ; uint32_T amd2k325eq ; uint32_T ocwejjhsae [ 2 ] ;
uint32_T lo1lp4gtvt ; uint32_T cqi0nadh0g [ 2 ] ; uint32_T popvcsddq3 ;
uint32_T e0e33jihoi [ 2 ] ; uint32_T bkcg3g1zoi ; uint32_T cwsd2g5w2m [ 2 ] ;
uint32_T ebpr404rrn ; uint32_T pbvxmucjj5 [ 2 ] ; uint32_T h31khffg0k ;
uint32_T alynay3xx0 [ 2 ] ; uint32_T atmgtfljnh ; uint32_T n10hslmo2a [ 2 ] ;
uint32_T pa2kyvt1uy ; uint32_T j13dkj5h0s [ 2 ] ; uint32_T p3xkfovqki ;
uint32_T k40rhthviy [ 2 ] ; uint32_T d1wjrwas1u ; uint32_T jjpbiyjnrh [ 2 ] ;
uint32_T cmfzrxdc11 ; uint32_T impwbrb5ul [ 2 ] ; uint32_T ivdqhywypm ;
uint32_T ck30ytigtq [ 2 ] ; int_T ckit2etwje ; int_T irqzxzls3s ; int_T
btkpsszf3k ; int_T febtg0cpg5 ; int_T g0uzej5lf1 ; int8_T fdyoeqkdqi ; int8_T
c3m4fwdfd0 ; int8_T kgzb050drs ; int8_T o3hynk2drm ; int8_T pm5qqx3zuz ;
int8_T omdgfehj41 ; int8_T hsphg0gng2 ; int8_T mdstjcyjyx ; int8_T ojltdhe2we
; int8_T iwklra2msj ; int8_T mt3gx422x1 ; int8_T pug0coupbp ; int8_T
jeg35werh5 ; int8_T kz1j0tnmva ; int8_T lq5ek0jlzd ; int8_T dnqubg5s4k ;
int8_T bze1flsb15 ; int8_T pidbwsidci ; int8_T ji1vknz2dr ; int8_T gltmjlakux
; int8_T pwifaixjxb ; int8_T haxpv4vq51 ; int8_T hxjxms0byf ; int8_T
jij01p0qtw ; int8_T ihprlm0zdr ; int8_T jgquwrgfhd ; int8_T o2i4021xwh ;
int8_T iqs2nrdyqs ; int8_T p4n3550tai ; int8_T nqcixj2cfc ; int8_T gcz34svd4r
; int8_T anszycztem ; int8_T ane43mgfgs ; int8_T hkxlm4qdro ; int8_T
fnu1tvdbyx ; int8_T fq3jja1aol ; int8_T nbmuo2yzhf ; int8_T ev5en1vf5z ;
int8_T btkemo1frv ; int8_T cag24nmzzp ; int8_T lptvxysd1c ; int8_T mt3v1tg0wr
; int8_T apfxbvz3qg ; int8_T izrtkkf042 ; int8_T olb1gflryv ; int8_T
noecaey35j ; int8_T jkbsaxmqju ; int8_T fnnqkeqpmg ; int8_T j1uacuucpv ;
int8_T cbsmbddbag ; int8_T bnzh2jzuy5 ; int8_T jkjkrdx1hk ; int8_T o0pf4uvatt
; int8_T pmgcir2p13 ; int8_T obuyxhugh2 ; int8_T fpx2qirisn ; int8_T
pwomc1kiz3 ; int8_T h5fod2fj2q ; int8_T hnbwguuonj ; int8_T fimtx0wf43 ;
int8_T jxtww5tjxt ; int8_T as5m3dr43z ; int8_T gtaj4wmjuq ; int8_T a0tdfwofzg
; int8_T ikwlyg3xde ; int8_T nw1rjo5a2w ; int8_T kg1shmc2lb ; boolean_T
ozme2zffq1 ; boolean_T pqxjs5shcl ; boolean_T jydhsrazby ; boolean_T
nfvyn45pdm ; boolean_T cjwjqcd1zs ; boolean_T m2abnapxna ; boolean_T
ejudse0oqw ; mcbsajulppp p11kqkd5tq ; } hrxu5rhe3a ; typedef struct { real_T
kbqjtzizsx [ 3 ] ; real_T ezm2ooaqjl [ 3 ] ; real_T bcrrky3g2k [ 4 ] ; real_T
cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; } n1mubcupv3 ; typedef struct { real_T
kbqjtzizsx [ 3 ] ; real_T ezm2ooaqjl [ 3 ] ; real_T bcrrky3g2k [ 4 ] ; real_T
cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; } hgblgktduh ; typedef struct {
boolean_T kbqjtzizsx [ 3 ] ; boolean_T ezm2ooaqjl [ 3 ] ; boolean_T
bcrrky3g2k [ 4 ] ; boolean_T cjfebnqw1p ; boolean_T li1obxdvy3 [ 3 ] ; }
cx2ym530ez ; typedef struct { real_T kbqjtzizsx [ 3 ] ; real_T ezm2ooaqjl [ 3
] ; real_T bcrrky3g2k [ 4 ] ; real_T cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; }
d3ndefizfv ; typedef struct { real_T kbqjtzizsx [ 3 ] ; real_T ezm2ooaqjl [ 3
] ; real_T bcrrky3g2k [ 4 ] ; real_T cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; }
b1atdx35ps ; typedef struct { real_T kbqjtzizsx [ 3 ] ; real_T ezm2ooaqjl [ 3
] ; real_T bcrrky3g2k [ 4 ] ; real_T cjfebnqw1p ; real_T li1obxdvy3 [ 3 ] ; }
eiuf0ypz1n ; typedef struct { real_T pe0u3adwg1 ; real_T aojfxgxmdw ; real_T
jzsx34kglq ; real_T pd3debhlnc ; real_T ln40dtmdft ; real_T cuaynzimio [ 2 ]
; real_T b5utqecrmv ; real_T iyjkgpjk2z ; real_T p5ibpoygyq ; } p0mddzrq0f ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 1 ] ; } DataMapInfo ; struct hbv5azo3swd_ { real_T
RandomSource1_MeanVal ; real_T RandomSource_MeanVal ; real_T
RandomSource1_MeanVal_aiijehfqfo ; real_T RandomSource1_MeanVal_fskbkqfzhy ;
real_T RandomSource1_MeanVal_memmqqy0nt ; real_T
RandomSource1_MeanVal_c0fkc2tbqq ; real_T RandomSource1_MeanVal_d5xz2yhw3l ;
real_T RandomSource1_MeanVal_jxhxrhz3me ; real_T
RandomSource1_MeanVal_bvk35h21mf ; real_T RandomSource1_MeanVal_cgugych5h2 ;
real_T RandomSource1_MeanVal_d4idhl1tz1 ; real_T
RandomSource1_MeanVal_n5f3r1zvmv ; real_T RandomSource1_MeanVal_kfynkp2waz ;
real_T RandomSource1_MeanVal_d1pxk3satq ; real_T
DirectionCosineMatrixtoQuaternions_action ; real_T NormalizeVector_maxzero ;
real_T NormalizeVector_maxzero_cdhvq0rirk ; real_T
NormalizeVector_maxzero_b4q4mcfdki ; real_T
NormalizeVector_maxzero_h2g0i450y0 ; real_T
NormalizeVector_maxzero_j4hegkg3gk ; real_T
NormalizeVector_maxzero_g4yscxcbyk ; real_T
NormalizeVector_maxzero_bhjxf3hbxp ; real_T
NormalizeVector_maxzero_nx4f2adafg ; real_T
NormalizeVector_maxzero_j5wdotj0ar ; real_T
NormalizeVector_maxzero_etigbudinl ; real_T
NormalizeVector_maxzero_mpxbpoayb2 ; real_T
NormalizeVector_maxzero_kqylmwb1gt ; real_T
NormalizeVector_maxzero_idjlccn1tr ; real_T NormalizeVector1_maxzero ; real_T
NormalizeVector3_maxzero ; real_T NormalizeVector4_maxzero ; real_T
DirectionCosineMatrixtoQuaternions_tolerance ; real_T Gain_Gain ; real_T
Gain1_Gain ; real_T Constant_Value ; real_T Gain_Gain_ffyvgqn0t3 ; real_T
Gain1_Gain_hf2zl5hf11 ; real_T Gain3_Gain ; real_T Gain4_Gain ; real_T
Constant1_Value ; real_T Constant2_Value [ 2 ] ; real_T
Constant_Value_glskcdmgi0 ; real_T Gain_Gain_ev442xw5g3 ; real_T
Gain1_Gain_bctn5kthma ; real_T Gain2_Gain ; real_T Gain3_Gain_iezjytb1ib ;
real_T Constant1_Value_ius3i4otxm ; real_T Constant2_Value_j5v1xvugrn [ 2 ] ;
real_T Constant_Value_p5m1vauvdr ; real_T Gain_Gain_cqlkw4p3g1 ; real_T
Gain1_Gain_ij2znuz5co ; real_T Gain2_Gain_medwk1da45 ; real_T
Gain3_Gain_j50dplxsob ; real_T Constant1_Value_c4wnv34dlm ; real_T
Constant2_Value_i3cnjpylpr [ 2 ] ; real_T Constant_Value_m2h11to3lk ; real_T
Constant1_Value_ftvtqjp1us ; real_T Constant1_Value_l2qqn3e4fv ; real_T
Bias_Bias ; real_T Bias1_Bias [ 9 ] ; real_T RandomSource1_VarianceRTP ;
real_T Gain_Gain_jtp3rrvu3s ; real_T RandomSource_VarianceRTP ; real_T
R3_Value [ 9 ] ; real_T MeasurementFcn3Inputs_Value ; real_T
Integrator1_AbsoluteTolerance ; real_T Gain_Gain_cpl3z33sd4 ; real_T
Gain2_Gain_n2hlwdziix ; real_T Gain_Gain_deacltj5ll ; real_T
Gain1_Gain_fe0vmtwk5u ; real_T Gain_Gain_m0ug0pnx04 ; real_T
Gain2_Gain_gnrwoc1vc2 ; real_T Gain1_Gain_epkzxiktj2 ; real_T
Gain_Gain_efwlgxe2sc ; real_T Gain1_Gain_ito2bip4nt ; real_T
Gain2_Gain_kojiuv3vcw ; real_T RandomSource1_VarianceRTP_iazwfq1jw0 ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
RandomSource1_VarianceRTP_c0tnp0ox24 ; real_T Saturation_UpperSat_iasva3d1xg
; real_T Saturation_LowerSat_k012nv1qgk ; real_T
RandomSource1_VarianceRTP_ciqyogzko1 ; real_T Saturation_UpperSat_kvrw4yrrrs
; real_T Saturation_LowerSat_kx5yh1wv4z ; real_T
RandomSource1_VarianceRTP_f4hdv51tm4 ; real_T Saturation_UpperSat_byrofjxopf
; real_T Saturation_LowerSat_eqtwttitcd ; real_T
RandomSource1_VarianceRTP_g12uaggma2 ; real_T Saturation_UpperSat_llltpjmasd
; real_T Saturation_LowerSat_od1cxjykdq ; real_T
RandomSource1_VarianceRTP_bdmhqmxko4 ; real_T Saturation_UpperSat_e1cwi1gybf
; real_T Saturation_LowerSat_ajttgxrnng ; real_T R2_Value [ 4 ] ; real_T
Gain1_Gain_csudgssrcg ; real_T Gain2_Gain_nben4kjacq ; real_T
Gain_Gain_kewyutalpa ; real_T Gain1_Gain_e5ngzsvcli ; real_T
Gain_Gain_fouuav1ki1 ; real_T Gain2_Gain_d4fbbaxwpd ; real_T
Gain1_Gain_lq4olh4tnx ; real_T Gain_Gain_kc1cpqscqf ; real_T
Gain1_Gain_n4q3gythod ; real_T Gain2_Gain_arhr50dupm ; real_T
RandomSource1_VarianceRTP_k1b5meiqjj ; real_T Saturation_UpperSat_hvo4j1520s
; real_T Saturation_LowerSat_anwhzkhsgm ; real_T
RandomSource1_VarianceRTP_pdcijtaj4d ; real_T Saturation_UpperSat_m5walzmpht
; real_T Saturation_LowerSat_kiy0a1gdvs ; real_T
RandomSource1_VarianceRTP_crqc3mkc0f ; real_T Saturation_UpperSat_m5kmh5w5uw
; real_T Saturation_LowerSat_i04nwcukho ; real_T
RandomSource1_VarianceRTP_blin0jucej ; real_T Saturation_UpperSat_c4xiqwgxlz
; real_T Saturation_LowerSat_pi2aujffw1 ; real_T
RandomSource1_VarianceRTP_dvuf3vyvl4 ; real_T Saturation_UpperSat_mq4hmkw4m2
; real_T Saturation_LowerSat_dqoi00mxim ; real_T
RandomSource1_VarianceRTP_cg3jlumacb ; real_T Saturation_UpperSat_kiybxhvwme
; real_T Saturation_LowerSat_lktmm4bxfn ; real_T R1_Value [ 4 ] ; real_T
Gain_Gain_bi5br4oxvh ; real_T Gain1_Gain_cftaqvkxoi ; real_T
Gain_Gain_cf5hb10y5x ; real_T Gain2_Gain_n32pjfxnui ; real_T
Gain1_Gain_gwlrw1w2b3 ; real_T Gain_Gain_efnax0y1dx ; real_T
Gain1_Gain_ddeccjfmea ; real_T Gain2_Gain_g2ebct4dqc ; real_T
Gain2_Gain_cko11epp5n ; real_T Gain_Gain_cjicctxqb2 ; real_T
Gain1_Gain_nieh11pzcd ; real_T Gain_Gain_m4jtdwqsx1 ; real_T
Gain_Gain_cnryscy0x5 ; real_T Gain_Gain_flpxquj1at ; real_T
Gain_Gain_fsocaetgdj ; real_T Gain1_Gain_igcxviai5g ; real_T
Gain2_Gain_mcrod3aisq ; real_T Gain2_Gain_d0aeb3inpf ; real_T
Gain_Gain_avgts0xajn ; real_T Gain1_Gain_pfgznzxep3 ; real_T
Gain_Gain_l4qk2foong ; real_T Gain2_Gain_jbi3ws3ahy ; real_T
Gain1_Gain_b2dtklqw2b ; real_T Gain1_Gain_objsqoebrs ; real_T
Integrator_AbsoluteTolerance ; real_T Gain_Gain_ij5ephcub4 ; real_T
Gain1_Gain_fos5u53xa3 ; real_T Gain_Gain_fosanw5ymw ; real_T
Gain_Gain_acmfvzt2nt ; real_T Merge_InitialOutput [ 4 ] ; real_T Q_Value [ 49
] ; real_T DataStoreMemoryP_InitialValue [ 49 ] ; real_T
DataStoreMemoryx_InitialValue [ 7 ] ; real_T Constant2_Value_ialq4qchdp [ 3 ]
; real_T Constant3_Value [ 3 ] ; real_T Gain1_Gain_l1jki2u5fa ; real_T
Inertia_Value [ 3 ] ; real_T Constant_Value_bpdqgjnrbi ; real_T
Constant_Value_lxx0buxvfk ; real_T Constant_Value_a2jieicat5 ; real_T
Constant_Value_ollq4x5vyn ; real_T Constant_Value_jelrytb22b ; real_T
Constant_Value_nfqnghygav ; real_T
Spacecraftmagneticdipolebodyreferenceframe_Value [ 3 ] ; real_T
Constant_Value_ekkpqgqspn ; real_T Constant_Value_hrofb0v0v5 ; real_T
Constant_Value_klghvcvqmj ; real_T Constant_Value_h3axm4dzs2 ; real_T
Constant_Value_jsi055lqf3 ; real_T u821stMarch_Value ; real_T
Gain1_Gain_km22rji0yo ; real_T Constant_Value_c0ie4jx1vv ; real_T
Constant1_Value_lvvzxuwh5z ; real_T Sun_Value ; real_T a_Value ; real_T
e_Value ; real_T Constant_Value_hn3g4e2bdf ; real_T Constant_Value_cinqqywm1t
; real_T Constant_Value_aglfz4cib2 ; real_T
Anglebetween3rdJanto21stMarch180_Value ; real_T Constant_Value_mgrgcefnc2 ;
real_T Constant5_Value ; real_T Ecliptic_Value ; real_T Gain_Gain_nrquqjsjbh
; real_T Gain1_Gain_byeui5d4hz ; real_T Constant_Value_azddlyivju ; real_T
Constant3_Value_fveye0j2gb ; real_T u2_Gain ; real_T
Constant_Value_mrthaqohbp ; real_T Gain_Gain_msviodsdfg ; real_T
Gain1_Gain_fdnpx3hnab ; real_T Gain2_Gain_jrylcyky0d ; real_T
Constant_Value_gob0mxnrc1 ; real_T Gain_Gain_j00moojqwi ; real_T
Gain1_Gain_epavf05nx2 ; real_T Gain2_Gain_jieczjcfxj ; real_T
Constant_Value_l4ftm45smy ; real_T Gain_Gain_lxppc43sr3 ; real_T
Gain1_Gain_pr0mjxkeko ; real_T Gain2_Gain_oh11qzcnsq ; real_T
Constant3_Value_aiagav1bu5 ; real_T Constant4_Value ; real_T
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
Constant_Value_fvwrjd3qpo [ 2 ] ; real_T Constant_Value_pw4amn2wvf ; real_T
Sensororientation_Value_c1w03cmwlz [ 4 ] ; real_T Constant_Value_c0bcxggzid ;
real_T Gain_Gain_jom4zjkqot ; real_T Gain1_Gain_ec5n4vlyml ; real_T
Gain2_Gain_ppb55hsf22 ; real_T Constant_Value_cd21hrcv55 ; real_T
Gain_Gain_owfxeyg0hz ; real_T Gain1_Gain_azstchlb2n ; real_T
Gain2_Gain_azs3a4y21d ; real_T Constant_Value_i1rjqidmbj ; real_T
Gain_Gain_lp1ded333l ; real_T Gain1_Gain_e5iewy4mku ; real_T
Gain2_Gain_p50urd0soy ; real_T Constant_Value_o4pefzbbdu [ 2 ] ; real_T
Constant_Value_peinfzh1bx ; real_T Sensororientation_Value_f1bimmtkao [ 4 ] ;
real_T Constant_Value_i54as2vhie ; real_T Gain_Gain_aqtmdzg5ve ; real_T
Gain1_Gain_luiia42t5t ; real_T Gain2_Gain_mb2nt12ulg ; real_T
Constant_Value_ogstggr2j3 ; real_T Gain_Gain_lychsiugxc ; real_T
Gain1_Gain_b1eddp32tw ; real_T Gain2_Gain_nfkayg1huw ; real_T
Constant_Value_oetlq3b1z2 ; real_T Gain_Gain_nuvyvhffsa ; real_T
Gain1_Gain_ci4cvxslsl ; real_T Gain2_Gain_ktgwyxzbfl ; real_T
Constant_Value_aqc3aba12o [ 2 ] ; real_T Constant_Value_agjbvr0z5q ; real_T
Sensororientation_Value_gzezhgiiva [ 4 ] ; real_T Constant_Value_dqtse52l4d ;
real_T Gain_Gain_mrg5lsnokn ; real_T Gain1_Gain_hbwgr3wfvo ; real_T
Gain2_Gain_ez1qvjlr1d ; real_T Constant_Value_aocyzox0ld ; real_T
Gain_Gain_hiv2r3l01b ; real_T Gain1_Gain_pxrflmc1o4 ; real_T
Gain2_Gain_g5qbykwveo ; real_T Constant_Value_atme3hmtbv ; real_T
Gain_Gain_hgfy5zqhxv ; real_T Gain1_Gain_eo1xrtusyu ; real_T
Gain2_Gain_ismz453fn1 ; real_T Constant_Value_kv3w21qse5 [ 2 ] ; real_T
Constant_Value_ktwwdrryx3 ; real_T Sensororientation_Value_pvtoldl5dv [ 4 ] ;
real_T Constant_Value_epgscsipyz ; real_T Gain_Gain_ena5yszh4w ; real_T
Gain1_Gain_eqkjxlvbiq ; real_T Gain2_Gain_k0lo0mgba2 ; real_T
Constant_Value_h300vfl4mv ; real_T Gain_Gain_j4d3hvhs43 ; real_T
Gain1_Gain_ceiu2lnwhi ; real_T Gain2_Gain_htyiogkmpg ; real_T
Constant_Value_apsk02wc0m ; real_T Gain_Gain_k42ekcf23x ; real_T
Gain1_Gain_izo4ouweai ; real_T Gain2_Gain_bgeppzp5tr ; real_T
Constant_Value_ei4qxougxr [ 2 ] ; real_T Constant_Value_aefuqipo3z ; real_T
Sensororientation_Value_g4fybr4ojz [ 4 ] ; real_T Constant_Value_oi0kxpowja ;
real_T Gain_Gain_crryondw0o ; real_T Gain1_Gain_lzvj53au2u ; real_T
Gain2_Gain_perzcljgjz ; real_T Constant_Value_bx4ma4qdmb ; real_T
Gain_Gain_evjcc1eafd ; real_T Gain1_Gain_gns40wabnm ; real_T
Gain2_Gain_i0hel0ofcl ; real_T Constant_Value_ihm1fmgdud ; real_T
Gain_Gain_mniibtfrh4 ; real_T Gain1_Gain_dsk352okyn ; real_T
Gain2_Gain_f4f4o3e0ao ; real_T Constant_Value_lod4m2end1 [ 2 ] ; real_T
Constant_Value_d3tr2oyhj4 ; real_T Sensororientation_Value_bfbchbxuif [ 4 ] ;
real_T Constant_Value_j5awaeon0r ; real_T Gain_Gain_l3rthal15j ; real_T
Gain1_Gain_dizs3vyxgq ; real_T Gain2_Gain_im22oggu52 ; real_T
Constant_Value_a1zgpg42vr ; real_T Gain_Gain_pvyl4t2yw0 ; real_T
Gain1_Gain_gqxohufbgj ; real_T Gain2_Gain_axoynd5pv4 ; real_T
Constant_Value_dbnrgxoczr ; real_T Gain_Gain_gnoc2rqmdh ; real_T
Gain1_Gain_ckkbstydzz ; real_T Gain2_Gain_bq1ops2rb1 ; real_T
Inertia_Value_ionitpmuar [ 3 ] ; boolean_T yBlockOrdering_Y0 ; boolean_T
yBlockOrdering_Y0_m1krpwpsee ; boolean_T yBlockOrdering_Y0_cudnxvsixu ;
boolean_T Enable1_Value ; boolean_T Enable2_Value ; boolean_T Enable3_Value ;
boolean_T BlockOrdering_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern o2y45zbt2m o2y45zbt2m4 ; extern
n1mubcupv3 n1mubcupv31 ; extern hrxu5rhe3a hrxu5rhe3af ; extern hbv5azo3swd
hbv5azo3sw ; extern SpacecraftDT rtP_Spacecraft ; extern EarthDT rtP_Earth ;
extern ConstDT rtP_Const ; extern const rtwCAPI_ModelMappingStaticInfo *
main_GetCAPIStaticMap ( void ) ; extern SimStruct * const rtS ; extern const
int_T gblNumToFiles ; extern const int_T gblNumFrFiles ; extern const int_T
gblNumFrWksBlocks ; extern rtInportTUtable * gblInportTUtables ; extern const
char * gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern
const int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
extern const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [
] ; extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
