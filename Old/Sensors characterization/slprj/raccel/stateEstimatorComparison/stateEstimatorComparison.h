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
#define NSAMPLE_TIMES (11) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (232) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (15)   
#elif NCSTATES != 15
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
jz4js4cavj [ 3 ] ; real_T jiauta4lz3 [ 3 ] ; real_T nkn0lxavyg [ 3 ] ; real_T
aq2ghaceft ; real_T kvwgtntple ; real_T bygzv3wnat ; real_T hdc0j3rnbp ;
real_T lmuzqxuokj ; real_T cpm5g01ony ; real_T ocma20pg4m ; real_T ptnsoso4dc
[ 3 ] ; real_T bzlwhzt3vy [ 2 ] ; real_T frlotdeaj2 [ 3 ] ; real_T kkdzgznpnj
[ 2 ] ; real_T ddrli00reu [ 3 ] ; real_T p1goyf5ozx [ 2 ] ; real_T jeujegvl5t
[ 3 ] ; real_T hhue5rbecu [ 2 ] ; real_T ocmmlusxei [ 3 ] ; real_T h4ktifh2sj
[ 2 ] ; real_T huvsnztgla [ 3 ] ; real_T nph04v1hzd [ 2 ] ; real_T jsthbuk1sr
[ 3 ] ; real_T otudxcmy5f [ 3 ] ; real_T abhvo30nqe [ 3 ] ; real_T jnj0b5ppbc
[ 3 ] ; real_T g1rwbozond [ 2 ] ; real_T h4s42jsqon [ 3 ] ; real_T o2hjorpke2
[ 2 ] ; real_T eutzf3fc5q [ 3 ] ; real_T g5urx4llqk [ 2 ] ; real_T a0iu5wjm5i
[ 3 ] ; real_T le1qwtjsnv [ 2 ] ; real_T mwmca0qjz4 [ 3 ] ; real_T kvumw45neu
[ 2 ] ; real_T o3idhaeld0 [ 3 ] ; real_T apdh45t2gv [ 2 ] ; real_T j13n0bzt32
[ 3 ] ; real_T gritwbr2l0 [ 3 ] ; real_T iqajyqskal [ 2 ] ; real_T hwxwn5ouzg
[ 3 ] ; real_T aznxfnvabf ; real_T djfx2ozwz1 [ 3 ] ; real_T chstcquajb ;
real_T mkltislhcr [ 3 ] ; real_T pqempn25ab [ 3 ] ; real_T jcrf3ejwt5 ;
real_T bcu4ylgp31 ; real_T hypth4pdun [ 9 ] ; real_T du15nl3tzh ; real_T
my3qvtobl0 [ 4 ] ; real_T njop3q5gx2 ; real_T pmhguwhdvv ; real_T cjccrkvyno
[ 3 ] ; real_T gpj4yt0rpp ; real_T a1hpttag32 ; real_T nmaipecvge ; real_T
hxg0kv5oai ; real_T nf1hgbxl14 ; real_T cav5kycrkm ; real_T d3aemr4udg ;
real_T dch3ovvw3l ; real_T niyd3y5by1 ; real_T f0tf0xskar [ 3 ] ; real_T
fofwr0d1hg [ 3 ] ; real_T jiayh2y14j ; real_T jdthz1j4ti ; real_T kd1zrciaaw
; real_T f0akllhmze [ 3 ] ; real_T asay5kywf5 ; real_T h23bmldhv4 ; real_T
h1m1us0vhn ; real_T ozhlra24jp [ 3 ] ; real_T n0xb4olsgj [ 3 ] ; real_T
ks14yvagh2 ; real_T jgzl5fcvsu ; real_T iuxf2i4tcl ; real_T aarhhbez0n ;
real_T cbt3p1gwln [ 3 ] ; real_T p3pcl4mtnq [ 3 ] ; real_T of0mnfctla [ 4 ] ;
real_T lekkjhfcii [ 4 ] ; real_T ncrcxz2klw ; real_T psr0r0bk4j ; real_T
jaehxyvqkj [ 3 ] ; real_T ntohwlgjud [ 3 ] ; real_T kox0yk51ix [ 3 ] ; real_T
jbummyrznk ; real_T bhk0qefpw3 [ 3 ] ; real_T dbb0wz0brw [ 3 ] ; real_T
axzca0bxot [ 4 ] ; real_T k3y3ixdgrn [ 3 ] ; real_T ddyoytv0e2 ; real_T
f3ygbdvaty ; real_T g0423fm4yn ; real_T meblfsgtxo ; real_T i15qhheq5s ;
real_T fomozizwka ; real_T dy3a2ou5re ; real_T ihuo035dxp ; real_T iqwyi5ur24
; real_T epgzqlzua5 ; real_T pcw0pyw2gh ; real_T abz0n5qp4d ; real_T
bkxmmcqnop ; real_T f2wok2vtfw ; real_T ifmzqc4riz ; real_T on1bmik0q5 ;
real_T fjdo1n5rtk ; real_T nxtdoutt0d ; real_T fovlccel0m ; real_T paj1cpcltz
; real_T hkj5lh1yfa ; real_T bx0wwwvie3 ; real_T le1tggu3fn ; real_T
d0oto4f2d1 ; real_T bedykpbnax ; real_T pem5nu1bix ; real_T cklgc35k0o ;
real_T iuompaq1le ; real_T nv4mt5uie4 ; real_T gqzvomyv2t ; real_T dq2b0uqnue
; real_T pvkeaggof5 ; real_T k3livt50xe ; real_T ge5q2osujn ; real_T
j0glhaz1ff ; real_T i3y3dprl5r ; real_T ffcfrhk5gr ; real_T ec2sfpkq33 ;
real_T ffh2jewlhj ; real_T hnikyctles ; real_T j0rtedvqju ; real_T ke1mnfoaag
; real_T nhqvej5sjs ; real_T nj2t1zjkhc ; real_T kbgyhm1fgr ; real_T
cufy1px1rg ; real_T pfsox4kypy ; real_T krfsidb0qr ; real_T l4o4wkfjy0 ;
real_T jpj2vzl1x4 ; real_T an502njneh ; real_T ebprrb1pb4 ; real_T feykuvpqmt
; real_T oikscjj451 ; real_T lygujbzduh ; real_T aoeuzlyzik ; real_T
iuat0etg51 ; real_T aev03jsiqx ; real_T gawqt3r5dn ; real_T bcxyit2ic3 ;
real_T ipvurj0y1d ; real_T p5aysueaot ; real_T mvsw1v05hz ; real_T pv2okmnedn
; real_T i3vwzpv00l ; real_T goqadosznk ; real_T n1y1fp1tkl ; real_T
lnpqfpiwgf ; real_T kdwyr4lpv1 ; real_T npvoy3nzmj ; real_T a2glfphjbj ;
real_T pfsks0y3nr ; real_T du2qaabf5h ; real_T o5zklgmfkz ; real_T iqpr3p3rs0
; real_T bbqhnrp1n5 ; real_T gztytqjrbr ; real_T origvc1fia ; real_T
aqrhufuanw ; real_T hqxcud4qih ; real_T e3pw525aru ; real_T cwsqdm0rrj ;
real_T ehckrkdne1 ; real_T dantpmdd4u ; real_T fxoiexsrms ; real_T olyaqikc15
; real_T hvkqpvk2my ; real_T hwi4oft1hq ; real_T lsjk5initb ; real_T
fkskvmplcl ; real_T iggwakfyei ; real_T lt1fko3tiq ; real_T krzyy5xscm ;
real_T aywwgafww0 ; real_T jsl11ciyta ; real_T dlfxn2mgpk ; real_T dqhytx5wim
; real_T ovzlu0geh0 ; real_T ikh4mq35wm ; real_T fn0fkozy3r ; real_T
e5dnskanhg ; real_T psvpdz1e45 ; real_T irny0upjdu ; real_T ovxzd4nxnl ;
real_T ksjfkatzta ; real_T f2sr2z2tiv ; real_T l145oj4ihb ; real_T bw0tsy3rjx
; real_T ninagdnqkp ; real_T dytdqpfldp ; real_T lmx5u0qfh0 ; real_T
dwrpdlv2f5 ; real_T hoiwjokbvl ; real_T pwpsjlqzli ; real_T p0aejvus1i ;
real_T pro1ckqrto ; real_T pl52eab1mb ; real_T lomp3tpos5 ; real_T c5wy4rvh2r
; real_T fgmdntdopa ; real_T gbvr55mtvj ; real_T kspdub4osy ; real_T
fbm20tee0q ; real_T ndw2shsl4a ; real_T ao2ehvfzbb ; real_T g22j2f1db1 ;
real_T bc4yufp30w [ 7 ] ; real_T ny1ut05nls [ 2 ] ; real_T dtl5bmf354 [ 2 ] ;
real_T nqhbc5nybn [ 4 ] ; real_T plvraarov5 [ 3 ] ; real_T ccotai5ab1 [ 3 ] ;
real_T kxzub5nxhq [ 3 ] ; real_T klui4qywrw [ 3 ] ; real_T punl0cw1in ;
real_T cvmohjxrdw ; real_T its1kwdpoq ; boolean_T lyxyg1om13 ; boolean_T
ilm1n3ayxr ; } hfuaoawbo4 ; typedef struct { real_T mqtw444yv2 ; real_T
gre0ylsh2c ; real_T jfsef4ewnb ; real_T al21e1yegq [ 49 ] ; real_T fr1u3lpnkj
[ 7 ] ; struct { void * LoggedData ; } otm0mxb2lv ; struct { void *
LoggedData ; } guk4l0qgeo ; struct { void * LoggedData ; } pxjcv2pd4l ;
struct { void * LoggedData ; } f5rthynhxi ; struct { void * LoggedData ; }
on2mppr5jz ; struct { void * LoggedData ; } k4jvtpuy0t ; struct { void *
LoggedData ; } gpclghlhuk ; struct { void * LoggedData ; } kdmkimhpgz ;
struct { void * LoggedData ; } mzjyg1ykwh ; struct { void * LoggedData ; }
okr3aqexvh ; struct { void * LoggedData ; } k5b0204bbx ; uint32_T huxynv0phj
; uint32_T ewls1imqk1 [ 2 ] ; uint32_T eflgibr34n ; uint32_T pdxs3c2pl0 [ 2 ]
; uint32_T i3q12d2jew ; uint32_T lfmgmigqrp [ 2 ] ; uint32_T n10y3pcwdf ;
uint32_T kgfaip5jyy [ 2 ] ; uint32_T oajgwqix20 ; uint32_T dlkpgyoxr3 [ 2 ] ;
uint32_T mlwgki4zic ; uint32_T o20tevejqi [ 2 ] ; uint32_T ifyn3txjwx ;
uint32_T fqtzsw0tzv [ 2 ] ; uint32_T ngshbn2m5z ; uint32_T avvodjvi0e [ 2 ] ;
uint32_T murf55qffy ; uint32_T gtpyurwibv [ 2 ] ; uint32_T kqwy4misfw ;
uint32_T pe0qbg3cnl [ 2 ] ; uint32_T kegaslxsrx ; uint32_T kexfoi1mkq [ 2 ] ;
uint32_T emxjcszpqu ; uint32_T ejlbztojpt [ 2 ] ; uint32_T bqzpa1abaf ;
uint32_T l2nmbl4cbk [ 2 ] ; int_T ohqzjzllib ; int_T ogiu2msyaa ; int_T
gofnphz0kz ; int_T j3jpf41hkf ; int_T bsrppkoaqa ; int8_T nasy3r03v3 ; int8_T
m2gyfa43xk ; int8_T o5joda4ge4 ; int8_T ovrjnddzqd ; int8_T onc2o3nfcc ;
int8_T nqet45hqvp ; int8_T nnvo2ycfkq ; int8_T adroqyycxe ; int8_T kozvmutgqp
; int8_T oqjiwb0j5j ; int8_T g0lrsy3cle ; int8_T gpwjfygt53 ; int8_T
cakumgpaip ; int8_T k1j3ggdh0n ; int8_T aw5eepl2fi ; int8_T au3iu4hwxe ;
int8_T iqnehhencs ; int8_T hkpd41ptnb ; int8_T le5ezcct1f ; int8_T gcv5hbdlqu
; int8_T bq4i23vlh3 ; int8_T a3ekypkvyd ; int8_T cnunrbonew ; int8_T
epy4ye5t4g ; int8_T gpmm0xfq0h ; int8_T o2vqfxmomh ; int8_T nrljhemabf ;
int8_T psyl0mnuvj ; int8_T mvxnb5arqf ; int8_T kbsac44cjw ; int8_T kl2lfyanp1
; int8_T bvasf03rkx ; int8_T cwb3bnplqh ; int8_T kgrjq2yk3i ; int8_T
obyeutsorr ; int8_T cn4mozejch ; int8_T ftfgzy2fsp ; int8_T l2hnmjwsp2 ;
int8_T irz310w2ge ; int8_T iwf1qimb54 ; int8_T bmw02bmfuu ; int8_T copufix5e1
; int8_T kl0i1e2alg ; int8_T jcuo1zmasa ; int8_T ikkf1adnnz ; int8_T
juyf13xdx1 ; int8_T fjx3hj3xwl ; int8_T o23cyyryiq ; int8_T csqu2frchz ;
int8_T iz5crb2thf ; int8_T mnvqejctbx ; int8_T ei5m4vt2an ; int8_T ojyjobcix2
; int8_T cxc22wbzyx ; int8_T fddcozpon3 ; int8_T jmzxa5y3x1 ; int8_T
fp0vvmmarz ; int8_T obgdl4vvts ; int8_T jhr0vyxdh3 ; int8_T btdmegwoi1 ;
int8_T bzn0gp5jdi ; int8_T fggjybp4nv ; int8_T opmce12fqo ; int8_T h1wj4fud0p
; int8_T a2zz5n420u ; int8_T gknheywe14 ; int8_T lzbmuq2yk2 ; int8_T
d530gaj1ii ; int8_T bdbstwmumv ; int8_T fg3qvdmgz4 ; int8_T picfdcdfap ;
int8_T nnokrisejy ; int8_T jeex0coj3h ; int8_T k30q4yjdty ; int8_T gudujy1ejr
; int8_T flka3xd0vd ; int8_T hrhkqhh3g2 ; int8_T dbbrzhnfld ; int8_T
ppg4ibcbt5 ; int8_T dhmxxudzxm ; int8_T nkkan2lumh ; int8_T k0fulbi3y3 ;
boolean_T m0i4t4o4w4 ; boolean_T bitl4izqts ; boolean_T i4bzza0yhz ;
boolean_T pwucmqisoh ; boolean_T ptxplb3iya ; boolean_T bj0piypish ;
boolean_T b2iivkxpjc ; boolean_T bwihaxowku ; boolean_T d2iaudcqjt ;
boolean_T eiyp1urgre ; boolean_T fujlvkpypa ; boolean_T dzb2vyantf ;
boolean_T myjsbcl3ak ; mcbsajulppp as0qpnsv3x ; aagc4ritof oeck1vxca3 ;
aagc4ritof ncyqqgn1fak ; } ngg51vuviw ; typedef struct { real_T cxzg0u0ymm [
3 ] ; real_T ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4 ] ; real_T exrjjbh4to ;
real_T ceu1xu3gg2 [ 3 ] ; real_T f3u5ihkx4m ; } o1yff13vlj ; typedef struct {
real_T cxzg0u0ymm [ 3 ] ; real_T ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4 ] ;
real_T exrjjbh4to ; real_T ceu1xu3gg2 [ 3 ] ; real_T f3u5ihkx4m ; }
okm3mf5pgw ; typedef struct { boolean_T cxzg0u0ymm [ 3 ] ; boolean_T
ozozulc01j [ 3 ] ; boolean_T osavuy4txz [ 4 ] ; boolean_T exrjjbh4to ;
boolean_T ceu1xu3gg2 [ 3 ] ; boolean_T f3u5ihkx4m ; } budft1csus ; typedef
struct { real_T cxzg0u0ymm [ 3 ] ; real_T ozozulc01j [ 3 ] ; real_T
osavuy4txz [ 4 ] ; real_T exrjjbh4to ; real_T ceu1xu3gg2 [ 3 ] ; real_T
f3u5ihkx4m ; } fqjkpnrvjo ; typedef struct { real_T cxzg0u0ymm [ 3 ] ; real_T
ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4 ] ; real_T exrjjbh4to ; real_T
ceu1xu3gg2 [ 3 ] ; real_T f3u5ihkx4m ; } ovyztlvtff ; typedef struct { real_T
cxzg0u0ymm [ 3 ] ; real_T ozozulc01j [ 3 ] ; real_T osavuy4txz [ 4 ] ; real_T
exrjjbh4to ; real_T ceu1xu3gg2 [ 3 ] ; real_T f3u5ihkx4m ; } lica41skzi ;
typedef struct { real_T gbwaupwoiq ; real_T ldbf0ttnzk ; real_T afrryz20wf ;
real_T kyit4brrdg ; real_T mote1xwkch ; real_T npcpvebz4b [ 2 ] ; real_T
ikk0l1on5i [ 2 ] ; real_T ncinmpljj2 [ 2 ] ; real_T klnrmugqhi ; real_T
prozp3gkhr ; real_T o0lz3kn4mx ; } l2b1jcqirt ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo * childMMI [ 1 ] ; }
DataMapInfo ; struct bjiazabmpoy_ { real_T RandomSource_MeanVal ; real_T
RandomSource1_MeanVal ; real_T RandomSource1_MeanVal_fskbkqfzhy ; real_T
RandomSource1_MeanVal_memmqqy0nt ; real_T RandomSource1_MeanVal_c0fkc2tbqq ;
real_T RandomSource1_MeanVal_d5xz2yhw3l ; real_T
RandomSource1_MeanVal_jxhxrhz3me ; real_T RandomSource1_MeanVal_bvk35h21mf ;
real_T RandomSource1_MeanVal_cgugych5h2 ; real_T
RandomSource1_MeanVal_d4idhl1tz1 ; real_T RandomSource1_MeanVal_n5f3r1zvmv ;
real_T RandomSource1_MeanVal_kfynkp2waz ; real_T
RandomSource1_MeanVal_d1pxk3satq ; real_T PWM_Period ; real_T PWM1_Period ;
real_T PWM2_Period ; real_T DirectionCosineMatrixtoQuaternions_action ;
real_T NormalizeVector_maxzero ; real_T NormalizeVector_maxzero_cdhvq0rirk ;
real_T NormalizeVector_maxzero_b4q4mcfdki ; real_T
NormalizeVector_maxzero_h2g0i450y0 ; real_T
NormalizeVector_maxzero_j4hegkg3gk ; real_T
NormalizeVector_maxzero_g4yscxcbyk ; real_T
NormalizeVector_maxzero_bhjxf3hbxp ; real_T
NormalizeVector_maxzero_nx4f2adafg ; real_T
NormalizeVector_maxzero_j5wdotj0ar ; real_T
NormalizeVector_maxzero_etigbudinl ; real_T
NormalizeVector_maxzero_mpxbpoayb2 ; real_T
NormalizeVector_maxzero_kqylmwb1gt ; real_T NormalizeVector1_maxzero ; real_T
NormalizeVector_maxzero_idjlccn1tr ; real_T
NormalizeVector1_maxzero_pe3bb51lb3 ; real_T NormalizeVector3_maxzero ;
real_T NormalizeVector4_maxzero ; real_T
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
Bias_Bias ; real_T Bias1_Bias [ 9 ] ; real_T RandomSource_VarianceRTP ;
real_T R3_Value [ 9 ] ; real_T MeasurementFcn3Inputs_Value ; real_T
Integrator1_AbsoluteTolerance ; real_T Gain_Gain_cpl3z33sd4 ; real_T
Gain2_Gain_n2hlwdziix ; real_T Gain_Gain_deacltj5ll ; real_T
Gain1_Gain_fe0vmtwk5u ; real_T Gain_Gain_m0ug0pnx04 ; real_T
Gain2_Gain_gnrwoc1vc2 ; real_T Gain1_Gain_epkzxiktj2 ; real_T
Gain_Gain_efwlgxe2sc ; real_T Gain1_Gain_ito2bip4nt ; real_T
Gain2_Gain_kojiuv3vcw ; real_T RandomSource1_VarianceRTP ; real_T
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
Gain_Gain_acmfvzt2nt ; real_T Integrator_AbsoluteTolerance ; real_T
Merge_InitialOutput [ 4 ] ; real_T Gain2_Gain_oemzk5ojwm ; real_T
Gain_Gain_ncteysqil3 ; real_T Gain1_Gain_idqjpcj2w2 ; real_T
Gain_Gain_lv4h0lzx53 ; real_T Gain2_Gain_kwjfzexkam ; real_T
Gain1_Gain_jgiaul0apm ; real_T Gain_Gain_fgmqaszm3p ; real_T
Gain1_Gain_bu0iql53q1 ; real_T Gain2_Gain_ozqnssaofx ; real_T
Gain_Gain_h02ebdzwhh ; real_T Gain1_Gain_bvtqk3cyhh ; real_T
Gain2_Gain_lut5xpex21 ; real_T Integrator_IC ; real_T Gain_Gain_cf5hb10y5x ;
real_T Gain2_Gain_n32pjfxnui ; real_T Gain1_Gain_gwlrw1w2b3 ; real_T
Gain_Gain_efnax0y1dx ; real_T Gain1_Gain_ddeccjfmea ; real_T
Gain2_Gain_g2ebct4dqc ; real_T Gain2_Gain_cko11epp5n ; real_T
Gain_Gain_cjicctxqb2 ; real_T Gain1_Gain_nieh11pzcd ; real_T
Gain_Gain_m4jtdwqsx1 ; real_T Gain_Gain_cnryscy0x5 ; real_T
Gain_Gain_flpxquj1at ; real_T Gain_Gain_fsocaetgdj ; real_T
Gain1_Gain_igcxviai5g ; real_T Gain2_Gain_mcrod3aisq ; real_T
Gain2_Gain_d0aeb3inpf ; real_T Gain_Gain_avgts0xajn ; real_T
Gain1_Gain_pfgznzxep3 ; real_T Gain_Gain_l4qk2foong ; real_T
Gain2_Gain_jbi3ws3ahy ; real_T Gain1_Gain_b2dtklqw2b ; real_T
Gain1_Gain_objsqoebrs ; real_T Gain_Gain_ij5ephcub4 ; real_T
Gain1_Gain_fos5u53xa3 ; real_T Gain_Gain_fosanw5ymw ; real_T Q_Value [ 49 ] ;
real_T DataStoreMemoryP_InitialValue [ 49 ] ; real_T
DataStoreMemoryx_InitialValue [ 7 ] ; real_T Constant_Value_ijgpov0mvf [ 9 ]
; real_T Constant_Value_h05qkqds1k ; real_T Constant_Value_mnihrtjfmj ;
real_T Constant_Value_aqneserr4m ; real_T Constant_Value_pymuilks0n ; real_T
Constant2_Value_ialq4qchdp [ 3 ] ; real_T Constant3_Value [ 3 ] ; real_T
Gain1_Gain_l1jki2u5fa ; real_T Inertia_Value [ 3 ] ; real_T
Constant_Value_bpdqgjnrbi ; real_T Constant_Value_lxx0buxvfk ; real_T
Constant_Value_a2jieicat5 ; real_T Constant_Value_ollq4x5vyn ; real_T
Constant_Value_jelrytb22b ; real_T Constant_Value_nfqnghygav ; real_T
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
Constant1_Value_ejoqpgv2ji [ 3 ] ; real_T Constant3_Value_lcleawr1lx [ 4 ] ;
real_T Constant_Value_ci00grrtff ; real_T Gain2_Gain_k2nkv35kyn ; real_T
Gain_Gain_avea13ypea ; real_T Gain1_Gain_mstcqdbdwc ; real_T
Gain_Gain_jsx4pu1q4q ; real_T Constant_Value_fe5n5wpanv ; real_T
Gain2_Gain_dp2u42f00i ; real_T Gain1_Gain_lp32ym3e5x ; real_T
Gain_Gain_p3jxtnv3m2 ; real_T Gain1_Gain_gaefdnqghd ; real_T
Constant_Value_ktx0dxt4vq ; real_T Gain2_Gain_fgpn4tkmjp ; boolean_T
yBlockOrdering_Y0 ; boolean_T yBlockOrdering_Y0_m1krpwpsee ; boolean_T
yBlockOrdering_Y0_cudnxvsixu ; boolean_T Enable1_Value ; boolean_T
Enable2_Value ; boolean_T Enable3_Value ; boolean_T BlockOrdering_Value ; } ;
extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern hfuaoawbo4
hfuaoawbo4x ; extern o1yff13vlj o1yff13vlj3 ; extern ngg51vuviw ngg51vuviwy ;
extern bjiazabmpoy bjiazabmpo ; extern SpacecraftDT rtP_Spacecraft ; extern
EarthDT rtP_Earth ; extern ConstDT rtP_Const ; extern const
rtwCAPI_ModelMappingStaticInfo * stateEstimatorComparison_GetCAPIStaticMap (
void ) ; extern SimStruct * const rtS ; extern const int_T gblNumToFiles ;
extern const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ;
extern rtInportTUtable * gblInportTUtables ; extern const char *
gblInportFileName ; extern const int_T gblNumRootInportBlks ; extern const
int_T gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ;
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
