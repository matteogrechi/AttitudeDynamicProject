#ifndef RTW_HEADER_stateEstimatorComparison_h_
#define RTW_HEADER_stateEstimatorComparison_h_
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef stateEstimatorComparison_COMMON_INCLUDES_
#define stateEstimatorComparison_COMMON_INCLUDES_
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
#include "stateEstimatorComparison_types.h"
#include "multiword_types.h"
#include "MagneticFieldInPolarCoords.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#define MODEL_NAME stateEstimatorComparison
#define NSAMPLE_TIMES (6) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (129) 
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
typedef struct { int8_T n0vodpbpn0 ; } aagc4ritof ; typedef struct { real_T
otudxcmy5f [ 3 ] ; real_T kslnzluaes ; real_T erv4px4dbo ; real_T pkka3h1xrv
; real_T msxyxwoyit [ 2 ] ; real_T krci0t2j4m [ 2 ] ; real_T gritwbr2l0 [ 3 ]
; real_T o2hjorpke2 [ 2 ] ; real_T pk0lw220uo [ 2 ] ; real_T iqajyqskal [ 2 ]
; real_T nkn0lxavyg [ 3 ] ; real_T lmuzqxuokj ; real_T cpm5g01ony ; real_T
ocma20pg4m ; real_T m0eteafuap [ 2 ] ; real_T fxhcux2wdi [ 2 ] ; real_T
jz4js4cavj [ 3 ] ; real_T jiauta4lz3 [ 3 ] ; real_T aznxfnvabf ; real_T
djfx2ozwz1 [ 3 ] ; real_T fvxovyedkd [ 3 ] ; real_T chstcquajb ; real_T
mkltislhcr [ 3 ] ; real_T pqempn25ab [ 3 ] ; real_T jcrf3ejwt5 ; real_T
bcu4ylgp31 ; real_T hypth4pdun [ 9 ] ; real_T du15nl3tzh ; real_T my3qvtobl0
[ 4 ] ; real_T njop3q5gx2 ; real_T pmhguwhdvv ; real_T cjccrkvyno [ 3 ] ;
real_T a0a51vbmb1 [ 2 ] ; real_T pzdghdtfja [ 2 ] ; real_T iereuzzsux [ 2 ] ;
real_T nrlkxnu4yx [ 2 ] ; real_T hzxy1e3aeq ; real_T mgmp4jf0kq [ 3 ] ;
real_T kmcgn0cyib ; real_T asay5kywf5 ; real_T h23bmldhv4 ; real_T h1m1us0vhn
; real_T ozhlra24jp [ 3 ] ; real_T n0xb4olsgj [ 3 ] ; real_T jgzl5fcvsu ;
real_T iuxf2i4tcl ; real_T aarhhbez0n ; real_T cbt3p1gwln [ 3 ] ; real_T
p3pcl4mtnq [ 3 ] ; real_T lekkjhfcii [ 4 ] ; real_T psr0r0bk4j ; real_T
jaehxyvqkj [ 3 ] ; real_T nj1dtdqjvk [ 4 ] ; real_T ntohwlgjud [ 3 ] ; real_T
kox0yk51ix [ 3 ] ; real_T jbummyrznk ; real_T bhk0qefpw3 [ 3 ] ; real_T
fncmo3ybdw [ 3 ] ; real_T k3y3ixdgrn [ 3 ] ; real_T ddyoytv0e2 ; real_T
f3ygbdvaty ; real_T g0423fm4yn ; real_T meblfsgtxo ; real_T i15qhheq5s ;
real_T fomozizwka ; real_T dy3a2ou5re ; real_T ihuo035dxp ; real_T iqwyi5ur24
; real_T epgzqlzua5 ; real_T pcw0pyw2gh ; real_T abz0n5qp4d ; real_T
bkxmmcqnop ; real_T f2wok2vtfw ; real_T ifmzqc4riz ; real_T eh5mcnwtiq ;
real_T ghaons33bj ; real_T ohg1wtlywy ; real_T io0rqxfqo3 ; real_T a3jx4vfcgg
; real_T bwjkjrhjqv ; real_T l5j5dkpmqj ; real_T lkiy512rco ; real_T
oxyjrp2dlh ; real_T bedykpbnax ; real_T pem5nu1bix ; real_T cklgc35k0o ;
real_T iuompaq1le ; real_T nv4mt5uie4 ; real_T gqzvomyv2t ; real_T dq2b0uqnue
; real_T pvkeaggof5 ; real_T k3livt50xe ; real_T er433el12n ; real_T
g2lr2421ty ; real_T n3pwxd5dop ; real_T c1tr4cgbin ; real_T msphgdgaqg ;
real_T lfb2wgmhm0 ; real_T mmdcsbwnzr ; real_T mtbvkoruwr ; real_T ezimqt1hie
; real_T o4dydkbclu ; real_T jti4uwlk3m ; real_T mtwhnewhid ; real_T
k0s25tyxdf ; real_T lixyng4w4q ; real_T gf4ywczcig ; real_T iy4h2wzanu ;
real_T a4edbax1z3 ; real_T mpste0vxzt ; real_T pmfqzyroxp ; real_T ob5dzupeki
; real_T iti4c2htzu ; real_T bnbxchsr0d ; real_T fw04vwoiew ; real_T
aibthzgho4 ; real_T i0bwop3aa5 ; real_T ihlfku2rqr ; real_T eizptmd2fi ;
real_T j1xfny152w [ 7 ] ; real_T plvraarov5 [ 3 ] ; real_T ccotai5ab1 [ 3 ] ;
real_T kxzub5nxhq [ 3 ] ; real_T klui4qywrw [ 3 ] ; real_T punl0cw1in ;
real_T cvmohjxrdw ; real_T its1kwdpoq ; real_T maelhcaps4 [ 3 ] ; }
hfuaoawbo4 ; typedef struct { real_T kpt4ony32r [ 49 ] ; real_T ojmnt0y3sv [
7 ] ; struct { void * LoggedData ; } hrjm0bam31 ; struct { void * LoggedData
; } pxjcv2pd4l ; struct { void * LoggedData ; } f5rthynhxi ; struct { void *
LoggedData ; } fynvsfvzer ; struct { void * LoggedData ; } lcag4wuuqc ;
struct { void * LoggedData ; } dakjz3ocxw ; struct { void * LoggedData [ 2 ]
; } jfenbmoyaa ; struct { void * LoggedData ; } kdmkimhpgz ; struct { void *
LoggedData ; } mzjyg1ykwh ; uint32_T ed0iuyyld4 ; uint32_T ck1usmjp0v [ 2 ] ;
uint32_T murf55qffy ; uint32_T gtpyurwibv [ 2 ] ; uint32_T kmqtzibzu3 ;
uint32_T hdaebxdim1 [ 2 ] ; uint32_T huxynv0phj ; uint32_T ewls1imqk1 [ 2 ] ;
uint32_T nk4wb0pvod ; uint32_T hmuoixvgjk [ 2 ] ; uint32_T fxy34kowkh ;
uint32_T jgjcidiinu [ 2 ] ; int_T j3jpf41hkf ; int_T ogiu2msyaa ; int_T
gofnphz0kz ; int_T ohqzjzllib ; int_T bsrppkoaqa ; int8_T nasy3r03v3 ; int8_T
kozvmutgqp ; int8_T n3wpurucsh ; int8_T au3iu4hwxe ; int8_T g0lrsy3cle ;
int8_T m2gyfa43xk ; int8_T fghht4acf4 ; int8_T iqnehhencs ; int8_T hkpd41ptnb
; int8_T le5ezcct1f ; int8_T gcv5hbdlqu ; int8_T bq4i23vlh3 ; int8_T
a3ekypkvyd ; int8_T cnunrbonew ; int8_T mijftyv0bg ; int8_T mdgthi25ph ;
int8_T dtaraxp5qi ; int8_T ig1vvmw4od ; int8_T psyl0mnuvj ; int8_T mvxnb5arqf
; int8_T kbsac44cjw ; int8_T kl2lfyanp1 ; int8_T bvasf03rkx ; int8_T
cwb3bnplqh ; int8_T kgrjq2yk3i ; int8_T obyeutsorr ; int8_T ftfgzy2fsp ;
int8_T l2hnmjwsp2 ; int8_T irz310w2ge ; int8_T iwf1qimb54 ; int8_T bmw02bmfuu
; int8_T copufix5e1 ; int8_T n1xbgfghif ; int8_T jcuo1zmasa ; int8_T
f4ipxf0od0 ; int8_T gtcrxf0n4q ; int8_T lyzbn5q0nk ; int8_T igjqnnyo2f ;
int8_T jhr0vyxdh3 ; int8_T btdmegwoi1 ; int8_T bzn0gp5jdi ; int8_T fggjybp4nv
; int8_T opmce12fqo ; int8_T h1wj4fud0p ; int8_T a2zz5n420u ; int8_T
gknheywe14 ; int8_T lzbmuq2yk2 ; int8_T d530gaj1ii ; int8_T bdbstwmumv ;
int8_T fg3qvdmgz4 ; int8_T picfdcdfap ; int8_T nnokrisejy ; int8_T jeex0coj3h
; int8_T k30q4yjdty ; int8_T gudujy1ejr ; int8_T flka3xd0vd ; int8_T
hrhkqhh3g2 ; int8_T dbbrzhnfld ; int8_T ppg4ibcbt5 ; int8_T dhmxxudzxm ;
int8_T nkkan2lumh ; int8_T k0fulbi3y3 ; boolean_T m0i4t4o4w4 ; boolean_T
bitl4izqts ; boolean_T i4bzza0yhz ; boolean_T pwucmqisoh ; boolean_T
oc5laiw1cg ; boolean_T fujlvkpypa ; boolean_T dzb2vyantf ; boolean_T
myjsbcl3ak ; mcbsajulppp as0qpnsv3x ; aagc4ritof oeck1vxca3 ; aagc4ritof
ncyqqgn1fak ; } ngg51vuviw ; typedef struct { real_T exrjjbh4to ; real_T
ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4 ] ; real_T cxzg0u0ymm [ 3 ] ; real_T
ceu1xu3gg2 [ 3 ] ; } o1yff13vlj ; typedef struct { real_T exrjjbh4to ; real_T
ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4 ] ; real_T cxzg0u0ymm [ 3 ] ; real_T
ceu1xu3gg2 [ 3 ] ; } okm3mf5pgw ; typedef struct { boolean_T exrjjbh4to ;
boolean_T ozozulc01j [ 3 ] ; boolean_T osavuy4txz [ 4 ] ; boolean_T
cxzg0u0ymm [ 3 ] ; boolean_T ceu1xu3gg2 [ 3 ] ; } budft1csus ; typedef struct
{ real_T exrjjbh4to ; real_T ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4 ] ;
real_T cxzg0u0ymm [ 3 ] ; real_T ceu1xu3gg2 [ 3 ] ; } fqjkpnrvjo ; typedef
struct { real_T exrjjbh4to ; real_T ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4
] ; real_T cxzg0u0ymm [ 3 ] ; real_T ceu1xu3gg2 [ 3 ] ; } ovyztlvtff ;
typedef struct { real_T exrjjbh4to ; real_T ozozulc01j [ 3 ] ; real_T
osavuy4txz [ 4 ] ; real_T cxzg0u0ymm [ 3 ] ; real_T ceu1xu3gg2 [ 3 ] ; }
lica41skzi ; typedef struct { real_T gbwaupwoiq ; real_T ldbf0ttnzk ; real_T
afrryz20wf ; real_T kyit4brrdg ; real_T mote1xwkch ; real_T npcpvebz4b [ 2 ]
; real_T nplnyulgff ; real_T ikk0l1on5i [ 2 ] ; real_T ncinmpljj2 [ 2 ] ;
real_T klnrmugqhi ; real_T prozp3gkhr ; real_T o0lz3kn4mx ; } l2b1jcqirt ;
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 1 ] ; } DataMapInfo ; struct bjiazabmpoy_ { real_T
RandomSource1_MeanVal ; real_T RandomSource1_MeanVal_cgugych5h2 ; real_T
RandomSource1_MeanVal_dfojatdwfn ; real_T RandomSource_MeanVal ; real_T
RandomSource1_MeanVal_bb10j12xon ; real_T RandomSource2_MeanVal ; real_T
DirectionCosineMatrixtoQuaternions_action ; real_T NormalizeVector_maxzero ;
real_T NormalizeVector1_maxzero ; real_T NormalizeVector_maxzero_nx4f2adafg ;
real_T NormalizeVector_maxzero_nn5jzwq50r ; real_T
NormalizeVector_maxzero_idjlccn1tr ; real_T
NormalizeVector1_maxzero_pe3bb51lb3 ; real_T NormalizeVector3_maxzero ;
real_T NormalizeVector4_maxzero ; real_T NormalizeVector_maxzero_hzguuty3cr ;
real_T NormalizeVector_maxzero_fnmpynnyo1 ; real_T
NormalizeVector_maxzero_g24tnzjgpe ; real_T
DirectionCosineMatrixtoQuaternions_tolerance ; real_T Constant_Value ; real_T
Constant_Value_ifjxstsexw ; real_T Constant_Value_nfnblq3wf3 ; real_T
Constant_Value_bxtk0v2tqk ; real_T Gain_Gain ; real_T Gain1_Gain ; real_T
Constant_Value_czyi20hi44 ; real_T Gain_Gain_ffyvgqn0t3 ; real_T
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
Bias_Bias ; real_T Bias1_Bias [ 9 ] ; real_T Gain1_Gain_csudgssrcg ; real_T
Integrator1_AbsoluteTolerance ; real_T Gain2_Gain_nben4kjacq ; real_T
Gain_Gain_kewyutalpa ; real_T Gain1_Gain_e5ngzsvcli ; real_T
Gain_Gain_fouuav1ki1 ; real_T Gain2_Gain_d4fbbaxwpd ; real_T
Gain1_Gain_lq4olh4tnx ; real_T Gain_Gain_kc1cpqscqf ; real_T
Gain1_Gain_n4q3gythod ; real_T Gain2_Gain_arhr50dupm ; real_T
RandomSource1_VarianceRTP ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T RandomSource1_VarianceRTP_pdcijtaj4d ; real_T
Saturation_UpperSat_m5walzmpht ; real_T Saturation_LowerSat_kiy0a1gdvs ;
real_T Gain_Gain_cpl3z33sd4 ; real_T Gain2_Gain_n2hlwdziix ; real_T
Gain_Gain_deacltj5ll ; real_T Gain1_Gain_fe0vmtwk5u ; real_T
Gain_Gain_m0ug0pnx04 ; real_T Gain2_Gain_gnrwoc1vc2 ; real_T
Gain1_Gain_epkzxiktj2 ; real_T Gain_Gain_efwlgxe2sc ; real_T
Gain1_Gain_ito2bip4nt ; real_T Gain2_Gain_kojiuv3vcw ; real_T
RandomSource1_VarianceRTP_cwsuhtikoo ; real_T Saturation_UpperSat_gjlfmfcnga
; real_T Saturation_LowerSat_iut5tallny ; real_T RandomSource_VarianceRTP ;
real_T R1_Value [ 49 ] ; real_T Integrator_AbsoluteTolerance ; real_T
Gain1_Gain_b3rhft3ujm ; real_T Merge_InitialOutput [ 4 ] ; real_T
RandomSource1_VarianceRTP_p1kv0s2xhi ; real_T Saturation_UpperSat_avopyj3crx
; real_T Saturation_LowerSat_gomyrxdxwm ; real_T RandomSource2_VarianceRTP ;
real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T
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
Gain_Gain_ij5ephcub4 ; real_T Gain1_Gain_fos5u53xa3 ; real_T
Gain_Gain_fosanw5ymw ; real_T Q_Value [ 49 ] ; real_T
DataStoreMemoryP_InitialValue [ 49 ] ; real_T DataStoreMemoryx_InitialValue [
7 ] ; real_T Constant2_Value_k5ggz5xbhk [ 3 ] ; real_T
Constant_Value_ez3azj2hb4 ; real_T Constant_Value_h05qkqds1k ; real_T
Constant1_Value_c5r2ow4pnn [ 4 ] ; real_T Constant2_Value_ialq4qchdp [ 3 ] ;
real_T Constant3_Value [ 3 ] ; real_T Gain1_Gain_l1jki2u5fa ; real_T
Inertia_Value [ 3 ] ; real_T Constant_Value_bpdqgjnrbi ; real_T
Constant_Value_lxx0buxvfk ; real_T Constant_Value_a2jieicat5 ; real_T
Initialangularvelocity_Value [ 3 ] ; real_T Constant_Value_ollq4x5vyn ;
real_T Constant_Value_jelrytb22b ; real_T Constant_Value_nfqnghygav ; real_T
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
Constant_Value_p1uxhfeofi [ 2 ] ; real_T Constant_Value_pwofnawzxn ; real_T
Sensororientation_Value [ 4 ] ; real_T Constant_Value_mvbgvlatz0 ; real_T
Gain_Gain_kw4hyen3ua ; real_T Gain1_Gain_ckspynbpye ; real_T
Gain2_Gain_dah34tkuud ; real_T Constant_Value_dz2dfvrlrq ; real_T
Gain_Gain_j0m5yxxclv ; real_T Gain1_Gain_gvb2uliucv ; real_T
Gain2_Gain_opntamnvay ; real_T Constant_Value_kcjtlp3thi ; real_T
Gain_Gain_mxlhrjirx4 ; real_T Gain1_Gain_buk0u32kdc ; real_T
Gain2_Gain_arymbwpdh2 ; real_T Constant_Value_cknsmwduvj [ 2 ] ; real_T
Constant_Value_oqac1ckjba ; real_T Sensororientation_Value_hlfjdstuhw [ 4 ] ;
real_T Constant_Value_kst2th0l1z ; real_T Gain_Gain_cr4zczeez0 ; real_T
Gain1_Gain_g12m14aft0 ; real_T Gain2_Gain_enxakegu4s ; real_T
Constant_Value_igmvdrtaty ; real_T Gain_Gain_lw5hirdrrr ; real_T
Gain1_Gain_amkbhcbkvw ; real_T Gain2_Gain_bttjb1ulla ; real_T
Constant_Value_m4goabuepu ; real_T Gain_Gain_pmdq3xatwv ; real_T
Gain1_Gain_bgbnv4z5nx ; real_T Gain2_Gain_cdbsbiii2b ; real_T
Constant_Value_p0tb5tfcpa [ 2 ] ; real_T Constant_Value_kcn4rmmh00 ; real_T
Sensororientation_Value_g0fnvenbtt [ 4 ] ; real_T Constant_Value_ig5dydpz4k ;
real_T Gain_Gain_mppbga10gj ; real_T Gain1_Gain_k32c10wlrj ; real_T
Gain2_Gain_h0pnpoqeyo ; real_T Constant_Value_avj1x5z4q1 ; real_T
Gain_Gain_acnf3wong0 ; real_T Gain1_Gain_bdr4kcs3su ; real_T
Gain2_Gain_jvmb0iaxtl ; real_T Constant_Value_cnokz3qvra ; real_T
Gain_Gain_gmuxgavjeg ; real_T Gain1_Gain_ano5s2udpx ; real_T
Gain2_Gain_flzsqlaiqp ; real_T Constant_Value_efe2zzothx [ 2 ] ; real_T
Constant_Value_dgwb5paphy ; real_T Sensororientation_Value_nngxct2li0 [ 4 ] ;
real_T Constant_Value_cnhwtv0an4 ; real_T Gain_Gain_fe12gj1vly ; real_T
Gain1_Gain_eknp4eyqxu ; real_T Gain2_Gain_ouwgam1qip ; real_T
Constant_Value_ay421yp5th ; real_T Gain_Gain_gff5un3jdu ; real_T
Gain1_Gain_awqbponr2k ; real_T Gain2_Gain_f4ewkcswdw ; real_T
Constant_Value_h3nq0lzcht ; real_T Gain_Gain_la2cdkige1 ; real_T
Gain1_Gain_pev0unhzff ; real_T Gain2_Gain_hw1isw0qik ; real_T
Constant_Value_gdj2wqmipb [ 2 ] ; real_T Constant_Value_lkvqkajgqu ; real_T
Sensororientation_Value_nr4vwdw5eq [ 4 ] ; real_T Constant_Value_jepzgetsok ;
real_T Gain_Gain_evijkwb22b ; real_T Gain1_Gain_bn3u42duxc ; real_T
Gain2_Gain_e4wui4ivqw ; real_T Constant_Value_bpjrbxcgtv ; real_T
Gain_Gain_hp0a4smryj ; real_T Gain1_Gain_lcdb4ouxht ; real_T
Gain2_Gain_fkes0fd4av ; real_T Constant_Value_bnhvh0zo2d ; real_T
Gain_Gain_ik5o0z2umm ; real_T Gain1_Gain_gut1ubdvx5 ; real_T
Gain2_Gain_ojpp20vo3d ; boolean_T yBlockOrdering_Y0 ; boolean_T Enable1_Value
; boolean_T BlockOrdering_Value ; } ; extern const char *
RT_MEMORY_ALLOCATION_ERROR ; extern hfuaoawbo4 hfuaoawbo4x ; extern
o1yff13vlj o1yff13vlj3 ; extern ngg51vuviw ngg51vuviwy ; extern bjiazabmpoy
bjiazabmpo ; extern SpacecraftDT rtP_Spacecraft ; extern EarthDT rtP_Earth ;
extern ConstDT rtP_Const ; extern const rtwCAPI_ModelMappingStaticInfo *
stateEstimatorComparison_GetCAPIStaticMap ( void ) ; extern SimStruct * const
rtS ; extern const int_T gblNumToFiles ; extern const int_T gblNumFrFiles ;
extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable *
gblInportTUtables ; extern const char * gblInportFileName ; extern const
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
