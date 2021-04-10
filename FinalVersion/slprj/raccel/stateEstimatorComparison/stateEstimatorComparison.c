#include "rt_logging_mmi.h"
#include "stateEstimatorComparison_capi.h"
#include <math.h>
#include "stateEstimatorComparison.h"
#include "stateEstimatorComparison_private.h"
#include "stateEstimatorComparison_dt.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 10 , & stopRequested ) ; }
rtExtModeShutdown ( 10 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 11 ; const char_T
* gbl_raccel_Version = "9.4 (R2020b) 29-Jul-2020" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "RandSrcCreateSeeds_64.h"
#include "RandSrcInitState_GZ.h"
#include "RandSrc_GZ_D.h"
#include "UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0.h"
#include "UTMeanCovSqrt_LWsp5ZOJ.h"
#include "UTMeanCovSqrt_Nsd9dLEK.h"
#include "UTMeanCovSqrt_bM1O4v2d.h"
#include "attitudePropagationNA_WmJbGJ68.h"
#include "cholUpdateFactor_jYBGg031.h"
#include "qrFactor_dow5EKjD.h"
#include "qrFactor_qzIe5HvL.h"
#include "qrFactor_yGbRjQTg.h"
#include "qr_FYLMsjgk.h"
#include "trisolve_3230mWtQ.h"
#include "trisolve_tfSt187f.h"
hfuaoawbo4 hfuaoawbo4x ; o1yff13vlj o1yff13vlj3 ; ngg51vuviw ngg51vuviwy ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
itnis34hf1 ( SimStruct * rtS_e ) { if ( ssGetTaskTime ( rtS_e , 0 ) !=
ssGetTStart ( rtS_e ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e
) ; } } void lk0crlqaa1 ( SimStruct * rtS_p ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } void ncyqqgn1fa (
real_T oxwshicem5 , real_T * huwiric4fx ) { * huwiric4fx = oxwshicem5 ; }
void MdlInitialize ( void ) { boolean_T tmp ; ngg51vuviwy . ohqzjzllib = 1 ;
if ( ssIsFirstInitCond ( rtS ) ) { o1yff13vlj3 . cxzg0u0ymm [ 0 ] = 0.0 ;
o1yff13vlj3 . cxzg0u0ymm [ 1 ] = 0.0 ; o1yff13vlj3 . cxzg0u0ymm [ 2 ] =
0.0010490819691035681 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp )
{ tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy . ohqzjzllib
= ! tmp ; } else { ngg51vuviwy . ohqzjzllib = 1 ; } o1yff13vlj3 . ozozulc01j
[ 0 ] = 0.0 ; o1yff13vlj3 . ozozulc01j [ 1 ] = - 7128.137 ; o1yff13vlj3 .
ozozulc01j [ 2 ] = 0.0 ; } ngg51vuviwy . ogiu2msyaa = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy .
ogiu2msyaa = ! tmp ; } else { ngg51vuviwy . ogiu2msyaa = 1 ; } o1yff13vlj3 .
osavuy4txz [ 0 ] = 0.5 ; o1yff13vlj3 . osavuy4txz [ 1 ] = - 0.5 ; o1yff13vlj3
. osavuy4txz [ 2 ] = - 0.5 ; o1yff13vlj3 . osavuy4txz [ 3 ] = 0.5 ; }
ngg51vuviwy . gofnphz0kz = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy . gofnphz0kz = ! tmp
; } else { ngg51vuviwy . gofnphz0kz = 1 ; } o1yff13vlj3 . exrjjbh4to = 0.0 ;
} ngg51vuviwy . j3jpf41hkf = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy . j3jpf41hkf = ! tmp
; } else { ngg51vuviwy . j3jpf41hkf = 1 ; } o1yff13vlj3 . ceu1xu3gg2 [ 0 ] =
0.0 ; o1yff13vlj3 . ceu1xu3gg2 [ 1 ] = 0.0 ; o1yff13vlj3 . ceu1xu3gg2 [ 2 ] =
- 7.478 ; } ngg51vuviwy . bsrppkoaqa = 1 ; if ( ssIsFirstInitCond ( rtS ) ) {
tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy . bsrppkoaqa = ! tmp
; } else { ngg51vuviwy . bsrppkoaqa = 1 ; } } ngg51vuviwy . mqtw444yv2 = 0.0
; ngg51vuviwy . ptxplb3iya = true ; ngg51vuviwy . bj0piypish = true ;
ngg51vuviwy . gre0ylsh2c = 0.0 ; ngg51vuviwy . b2iivkxpjc = true ;
ngg51vuviwy . bwihaxowku = true ; ngg51vuviwy . jfsef4ewnb = 0.0 ;
ngg51vuviwy . d2iaudcqjt = true ; ngg51vuviwy . eiyp1urgre = true ;
o1yff13vlj3 . f3u5ihkx4m = bjiazabmpo . Integrator_IC ; hfuaoawbo4x .
ilm1n3ayxr = bjiazabmpo . yBlockOrdering_Y0 ; hfuaoawbo4x . lyxyg1om13 =
bjiazabmpo . yBlockOrdering_Y0_m1krpwpsee ; hfuaoawbo4x . my3qvtobl0 [ 0 ] =
bjiazabmpo . Merge_InitialOutput [ 0 ] ; hfuaoawbo4x . my3qvtobl0 [ 1 ] =
bjiazabmpo . Merge_InitialOutput [ 1 ] ; hfuaoawbo4x . my3qvtobl0 [ 2 ] =
bjiazabmpo . Merge_InitialOutput [ 2 ] ; hfuaoawbo4x . my3qvtobl0 [ 3 ] =
bjiazabmpo . Merge_InitialOutput [ 3 ] ; } void MdlEnable ( void ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , 1.0 ) ; ; } void
MdlStart ( void ) { int32_T i ; uint32_T initSeed ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} hfuaoawbo4x . ntohwlgjud [ 0 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [
0 ] ; hfuaoawbo4x . kox0yk51ix [ 0 ] = bjiazabmpo . Constant3_Value [ 0 ] ;
hfuaoawbo4x . ntohwlgjud [ 1 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 1
] ; hfuaoawbo4x . kox0yk51ix [ 1 ] = bjiazabmpo . Constant3_Value [ 1 ] ;
hfuaoawbo4x . ntohwlgjud [ 2 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 2
] ; hfuaoawbo4x . kox0yk51ix [ 2 ] = bjiazabmpo . Constant3_Value [ 2 ] ;
hfuaoawbo4x . dbb0wz0brw [ 0 ] = rtP_Spacecraft . initialAngularSpeed [ 0 ] ;
hfuaoawbo4x . dbb0wz0brw [ 1 ] = rtP_Spacecraft . initialAngularSpeed [ 1 ] ;
hfuaoawbo4x . dbb0wz0brw [ 2 ] = rtP_Spacecraft . initialAngularSpeed [ 2 ] ;
hfuaoawbo4x . axzca0bxot [ 0 ] = rtP_Spacecraft . initialAttitude [ 0 ] ;
hfuaoawbo4x . axzca0bxot [ 1 ] = rtP_Spacecraft . initialAttitude [ 1 ] ;
hfuaoawbo4x . axzca0bxot [ 2 ] = rtP_Spacecraft . initialAttitude [ 2 ] ;
hfuaoawbo4x . axzca0bxot [ 3 ] = rtP_Spacecraft . initialAttitude [ 3 ] ;
ngg51vuviwy . iwf1qimb54 = 0 ; ngg51vuviwy . bmw02bmfuu = 0 ; ngg51vuviwy .
copufix5e1 = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . fggjybp4nv
= - 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . gknheywe14
= - 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch (
ngg51vuviwy . gknheywe14 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } ngg51vuviwy .
gknheywe14 = - 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( ngg51vuviwy . fggjybp4nv ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } ngg51vuviwy .
fggjybp4nv = - 1 ; ngg51vuviwy . btdmegwoi1 = - 1 ; ngg51vuviwy . nnokrisejy
= 0 ; ngg51vuviwy . flka3xd0vd = 0 ; ngg51vuviwy . k30q4yjdty = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . fg3qvdmgz4
= - 1 ; ngg51vuviwy . dbbrzhnfld = 0 ; ngg51vuviwy . kl0i1e2alg = 0 ;
ngg51vuviwy . jcuo1zmasa = 0 ; ngg51vuviwy . ikkf1adnnz = 0 ; ngg51vuviwy .
juyf13xdx1 = 0 ; ngg51vuviwy . fjx3hj3xwl = 0 ; ngg51vuviwy . o23cyyryiq = 0
; ngg51vuviwy . csqu2frchz = 0 ; ngg51vuviwy . iz5crb2thf = 0 ; ngg51vuviwy .
mnvqejctbx = 0 ; ngg51vuviwy . ei5m4vt2an = 0 ; ngg51vuviwy . ojyjobcix2 = 0
; ngg51vuviwy . cxc22wbzyx = 0 ; ngg51vuviwy . fddcozpon3 = 0 ; initSeed = (
uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , &
ngg51vuviwy . huxynv0phj , 1 ) ; RandSrcInitState_GZ ( & ngg51vuviwy .
huxynv0phj , & ngg51vuviwy . ewls1imqk1 [ 0 ] , 1 ) ; ngg51vuviwy .
nasy3r03v3 = 0 ; ngg51vuviwy . m2gyfa43xk = 0 ; initSeed = ( uint32_T ) (
100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy .
eflgibr34n , 1 ) ; RandSrcInitState_GZ ( & ngg51vuviwy . eflgibr34n , &
ngg51vuviwy . pdxs3c2pl0 [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 *
rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . i3q12d2jew ,
1 ) ; RandSrcInitState_GZ ( & ngg51vuviwy . i3q12d2jew , & ngg51vuviwy .
lfmgmigqrp [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . n10y3pcwdf , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . n10y3pcwdf , & ngg51vuviwy . kgfaip5jyy
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . oajgwqix20 , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . oajgwqix20 , & ngg51vuviwy . dlkpgyoxr3
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . mlwgki4zic , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . mlwgki4zic , & ngg51vuviwy . o20tevejqi
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . ifyn3txjwx , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . ifyn3txjwx , & ngg51vuviwy . fqtzsw0tzv
[ 0 ] , 1 ) ; ngg51vuviwy . kozvmutgqp = 0 ; initSeed = ( uint32_T ) ( 100000
* rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . ngshbn2m5z
, 1 ) ; RandSrcInitState_GZ ( & ngg51vuviwy . ngshbn2m5z , & ngg51vuviwy .
avvodjvi0e [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . murf55qffy , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . murf55qffy , & ngg51vuviwy . gtpyurwibv
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . kqwy4misfw , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . kqwy4misfw , & ngg51vuviwy . pe0qbg3cnl
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . kegaslxsrx , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . kegaslxsrx , & ngg51vuviwy . kexfoi1mkq
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . emxjcszpqu , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . emxjcszpqu , & ngg51vuviwy . ejlbztojpt
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . bqzpa1abaf , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . bqzpa1abaf , & ngg51vuviwy . l2nmbl4cbk
[ 0 ] , 1 ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
fg3qvdmgz4 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
ngg51vuviwy . fg3qvdmgz4 = - 1 ; ngg51vuviwy . bq4i23vlh3 = - 1 ; ngg51vuviwy
. a3ekypkvyd = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; lk0crlqaa1 ( rtS ) ;
ngg51vuviwy . cnunrbonew = - 1 ; ngg51vuviwy . epy4ye5t4g = 0 ; ngg51vuviwy .
gpmm0xfq0h = 0 ; ngg51vuviwy . o2vqfxmomh = 0 ; ngg51vuviwy . nrljhemabf = 0
; ngg51vuviwy . psyl0mnuvj = 0 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; lk0crlqaa1 ( rtS
) ; ngg51vuviwy . mvxnb5arqf = - 1 ; ngg51vuviwy . kbsac44cjw = 0 ;
ngg51vuviwy . kl2lfyanp1 = 0 ; ngg51vuviwy . bvasf03rkx = 0 ; ngg51vuviwy .
cwb3bnplqh = 0 ; ngg51vuviwy . kgrjq2yk3i = 0 ; ngg51vuviwy . obyeutsorr = 0
; ngg51vuviwy . cn4mozejch = 0 ; ngg51vuviwy . ftfgzy2fsp = 0 ; ngg51vuviwy .
l2hnmjwsp2 = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch
( ngg51vuviwy . btdmegwoi1 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
gknheywe14 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . gknheywe14 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
fggjybp4nv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . fggjybp4nv = - 1 ; break ; } ngg51vuviwy . btdmegwoi1 = - 1 ;
ngg51vuviwy . irz310w2ge = - 1 ; memcpy ( & ngg51vuviwy . al21e1yegq [ 0 ] ,
& bjiazabmpo . DataStoreMemoryP_InitialValue [ 0 ] , 49U * sizeof ( real_T )
) ; for ( i = 0 ; i < 7 ; i ++ ) { ngg51vuviwy . fr1u3lpnkj [ i ] =
bjiazabmpo . DataStoreMemoryx_InitialValue [ i ] ; } MdlInitialize ( ) ;
MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) { static const real_T b [ 10
] = { 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.8 , 0.8 , 0.8 , 0.8 } ; static
const real_T a [ 9 ] = { 2.2204460492503131E-16 , 0.0 , 1.0 , 0.0 , 1.0 , 0.0
, - 1.0 , 0.0 , 2.2204460492503131E-16 } ; static const real_T Wmean [ 2 ] =
{ 1.0 , - 0.071428642857214286 } ; real_T X2 [ 98 ] ; real_T Y2_e [ 98 ] ;
real_T P [ 49 ] ; real_T R [ 49 ] ; real_T unusedU0 [ 49 ] ; real_T Y2_p [ 42
] ; real_T Y2 [ 28 ] ; real_T B [ 21 ] ; real_T K [ 21 ] ; real_T egmyq2wukd
[ 16 ] ; real_T eweqcqisny [ 16 ] ; real_T Pxy [ 14 ] ; real_T Sy [ 9 ] ;
real_T b_I [ 9 ] ; real_T tmp_p [ 9 ] ; real_T p1airozsub [ 7 ] ; real_T
jcvgvp2mw3 [ 6 ] ; real_T afgi1z3nug [ 4 ] ; real_T ilxfkjmurx [ 4 ] ; real_T
plz0cvxflt [ 3 ] ; real_T tmp_m [ 3 ] ; real_T fpykojxvqx [ 2 ] ; real_T
tmp_e [ 2 ] ; real_T tmp_i [ 2 ] ; real_T bsdmjc4arz_idx_1 ; real_T
cdq11p3z0k_idx_1 ; real_T clxyvdwwhl_idx_0 ; real_T clxyvdwwhl_idx_1 ; real_T
cn2ynvupqq_idx_0 ; real_T cn2ynvupqq_idx_1 ; real_T dhayrofkxm_idx_1 ; real_T
dyhx1hjxb5_idx_0 ; real_T dyhx1hjxb5_idx_1 ; real_T dyhx1hjxb5_idx_2 ; real_T
emiiavfkh1 ; real_T g3mboufpwo_idx_0 ; real_T g3mboufpwo_idx_1 ; real_T
g3yqv3aaon_idx_1 ; real_T gi3b15wlwk ; real_T hdqbs12ylt ; real_T hjrvg0fden
; real_T hkwf2out3d ; real_T ikxunumo3i ; real_T ipfu54ftkj_idx_1 ; real_T
j1u5l3qcyc_idx_0 ; real_T j1u5l3qcyc_idx_1 ; real_T jdf1jco5hl_idx_0 ; real_T
jdf1jco5hl_idx_1 ; real_T jhb4z4v3fe_idx_0 ; real_T jhb4z4v3fe_idx_1 ; real_T
jlalnnlv0o_idx_0 ; real_T jlalnnlv0o_idx_1 ; real_T jon1lcekfs_idx_0 ; real_T
k11pr0hw5x_idx_1 ; real_T k1qmoe0iaw ; real_T lkb3lbvxyk_idx_1 ; real_T
ln02qvajo4 ; real_T lrih33y43d_idx_0 ; real_T lrih33y43d_idx_1 ; real_T
mnqgflhgig ; real_T njulo3ucsg ; real_T nm4t0wvumv ; real_T nnfzsjooaq_idx_0
; real_T nnfzsjooaq_idx_1 ; real_T nnfzsjooaq_idx_2 ; real_T nunwvlk05a_idx_0
; real_T nunwvlk05a_idx_1 ; real_T oefbiund24_idx_1 ; real_T ojyypbpaqp_idx_0
; real_T ojyypbpaqp_idx_1 ; real_T omuhzl1dir ; real_T p2s2um3vln ; real_T
p5cpuziyth_idx_0 ; real_T p5cpuziyth_idx_1 ; real_T pk0lw220uo_idx_0 ; real_T
pk0lw220uo_idx_1 ; int32_T exitg2 ; int32_T i ; int32_T i_p ; int32_T k ;
int8_T rtAction ; int8_T rtPrevAction ; boolean_T iy5b1drj5g [ 9 ] ;
boolean_T exitg1 ; boolean_T tmp ; SimStruct * S ; void * diag ; srClearBC (
ngg51vuviwy . k0fulbi3y3 ) ; srClearBC ( ngg51vuviwy . nkkan2lumh ) ;
srClearBC ( ngg51vuviwy . ncyqqgn1fak . n0vodpbpn0 ) ; srClearBC (
ngg51vuviwy . dhmxxudzxm ) ; srClearBC ( ngg51vuviwy . ppg4ibcbt5 ) ;
srClearBC ( ngg51vuviwy . hrhkqhh3g2 ) ; srClearBC ( ngg51vuviwy . gudujy1ejr
) ; srClearBC ( ngg51vuviwy . jeex0coj3h ) ; srClearBC ( ngg51vuviwy .
picfdcdfap ) ; srClearBC ( ngg51vuviwy . bdbstwmumv ) ; srClearBC (
ngg51vuviwy . d530gaj1ii ) ; srClearBC ( ngg51vuviwy . lzbmuq2yk2 ) ;
srClearBC ( ngg51vuviwy . a2zz5n420u ) ; srClearBC ( ngg51vuviwy . h1wj4fud0p
) ; srClearBC ( ngg51vuviwy . opmce12fqo ) ; srClearBC ( ngg51vuviwy .
bzn0gp5jdi ) ; srClearBC ( ngg51vuviwy . jhr0vyxdh3 ) ; srClearBC (
ngg51vuviwy . obgdl4vvts ) ; srClearBC ( ngg51vuviwy . fp0vvmmarz ) ;
srClearBC ( ngg51vuviwy . jmzxa5y3x1 ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . ohqzjzllib != 0 ) { o1yff13vlj3 . cxzg0u0ymm [ 0 ] =
hfuaoawbo4x . dbb0wz0brw [ 0 ] ; o1yff13vlj3 . cxzg0u0ymm [ 1 ] = hfuaoawbo4x
. dbb0wz0brw [ 1 ] ; o1yff13vlj3 . cxzg0u0ymm [ 2 ] = hfuaoawbo4x .
dbb0wz0brw [ 2 ] ; } hfuaoawbo4x . jz4js4cavj [ 0 ] = o1yff13vlj3 .
cxzg0u0ymm [ 0 ] ; hfuaoawbo4x . jz4js4cavj [ 1 ] = o1yff13vlj3 . cxzg0u0ymm
[ 1 ] ; hfuaoawbo4x . jz4js4cavj [ 2 ] = o1yff13vlj3 . cxzg0u0ymm [ 2 ] ; }
else { hfuaoawbo4x . jz4js4cavj [ 0 ] = o1yff13vlj3 . cxzg0u0ymm [ 0 ] ;
hfuaoawbo4x . jz4js4cavj [ 1 ] = o1yff13vlj3 . cxzg0u0ymm [ 1 ] ; hfuaoawbo4x
. jz4js4cavj [ 2 ] = o1yff13vlj3 . cxzg0u0ymm [ 2 ] ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { nnfzsjooaq_idx_0 = hfuaoawbo4x . jz4js4cavj [ 0 ] ;
nnfzsjooaq_idx_1 = hfuaoawbo4x . jz4js4cavj [ 1 ] ; nnfzsjooaq_idx_2 =
hfuaoawbo4x . jz4js4cavj [ 2 ] ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
RandSrc_GZ_D ( hfuaoawbo4x . jiauta4lz3 , & bjiazabmpo . RandomSource_MeanVal
, 1 , & bjiazabmpo . RandomSource_VarianceRTP , 1 , ngg51vuviwy . ewls1imqk1
, 1 , 3 ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { dyhx1hjxb5_idx_0 =
nnfzsjooaq_idx_0 + hfuaoawbo4x . jiauta4lz3 [ 0 ] ; dyhx1hjxb5_idx_1 =
nnfzsjooaq_idx_1 + hfuaoawbo4x . jiauta4lz3 [ 1 ] ; dyhx1hjxb5_idx_2 =
nnfzsjooaq_idx_2 + hfuaoawbo4x . jiauta4lz3 [ 2 ] ; } if ( ssIsMajorTimeStep
( rtS ) ) { if ( ngg51vuviwy . ogiu2msyaa != 0 ) { o1yff13vlj3 . ozozulc01j [
0 ] = hfuaoawbo4x . ntohwlgjud [ 0 ] ; o1yff13vlj3 . ozozulc01j [ 1 ] =
hfuaoawbo4x . ntohwlgjud [ 1 ] ; o1yff13vlj3 . ozozulc01j [ 2 ] = hfuaoawbo4x
. ntohwlgjud [ 2 ] ; } nnfzsjooaq_idx_0 = o1yff13vlj3 . ozozulc01j [ 0 ] ;
nnfzsjooaq_idx_1 = o1yff13vlj3 . ozozulc01j [ 1 ] ; nnfzsjooaq_idx_2 =
o1yff13vlj3 . ozozulc01j [ 2 ] ; if ( ngg51vuviwy . gofnphz0kz != 0 ) {
o1yff13vlj3 . osavuy4txz [ 0 ] = hfuaoawbo4x . axzca0bxot [ 0 ] ; o1yff13vlj3
. osavuy4txz [ 1 ] = hfuaoawbo4x . axzca0bxot [ 1 ] ; o1yff13vlj3 .
osavuy4txz [ 2 ] = hfuaoawbo4x . axzca0bxot [ 2 ] ; o1yff13vlj3 . osavuy4txz
[ 3 ] = hfuaoawbo4x . axzca0bxot [ 3 ] ; } afgi1z3nug [ 0 ] = o1yff13vlj3 .
osavuy4txz [ 0 ] ; afgi1z3nug [ 1 ] = o1yff13vlj3 . osavuy4txz [ 1 ] ;
afgi1z3nug [ 2 ] = o1yff13vlj3 . osavuy4txz [ 2 ] ; afgi1z3nug [ 3 ] =
o1yff13vlj3 . osavuy4txz [ 3 ] ; } else { nnfzsjooaq_idx_0 = o1yff13vlj3 .
ozozulc01j [ 0 ] ; nnfzsjooaq_idx_1 = o1yff13vlj3 . ozozulc01j [ 1 ] ;
nnfzsjooaq_idx_2 = o1yff13vlj3 . ozozulc01j [ 2 ] ; afgi1z3nug [ 0 ] =
o1yff13vlj3 . osavuy4txz [ 0 ] ; afgi1z3nug [ 1 ] = o1yff13vlj3 . osavuy4txz
[ 1 ] ; afgi1z3nug [ 2 ] = o1yff13vlj3 . osavuy4txz [ 2 ] ; afgi1z3nug [ 3 ]
= o1yff13vlj3 . osavuy4txz [ 3 ] ; } hfuaoawbo4x . nkn0lxavyg [ 0 ] =
bjiazabmpo . Gain_Gain_cpl3z33sd4 * nnfzsjooaq_idx_0 ; hfuaoawbo4x .
nkn0lxavyg [ 1 ] = bjiazabmpo . Gain_Gain_cpl3z33sd4 * nnfzsjooaq_idx_1 ;
hfuaoawbo4x . nkn0lxavyg [ 2 ] = bjiazabmpo . Gain_Gain_cpl3z33sd4 *
nnfzsjooaq_idx_2 ; k1qmoe0iaw = ( ( afgi1z3nug [ 0 ] * afgi1z3nug [ 0 ] +
afgi1z3nug [ 1 ] * afgi1z3nug [ 1 ] ) + afgi1z3nug [ 2 ] * afgi1z3nug [ 2 ] )
+ afgi1z3nug [ 3 ] * afgi1z3nug [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if
( ngg51vuviwy . nasy3r03v3 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . nasy3r03v3
= 0 ; } nm4t0wvumv = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } else if (
k1qmoe0iaw < 0.0 ) { nm4t0wvumv = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; ngg51vuviwy . nasy3r03v3 = 1 ; } else { nm4t0wvumv =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } hfuaoawbo4x . aq2ghaceft = afgi1z3nug [
2 ] / nm4t0wvumv ; hfuaoawbo4x . kvwgtntple = afgi1z3nug [ 0 ] / nm4t0wvumv ;
hfuaoawbo4x . bygzv3wnat = afgi1z3nug [ 1 ] / nm4t0wvumv ; hfuaoawbo4x .
hdc0j3rnbp = afgi1z3nug [ 3 ] / nm4t0wvumv ; nm4t0wvumv = ( ( hfuaoawbo4x .
kvwgtntple * hfuaoawbo4x . kvwgtntple + hfuaoawbo4x . bygzv3wnat *
hfuaoawbo4x . bygzv3wnat ) + hfuaoawbo4x . aq2ghaceft * hfuaoawbo4x .
aq2ghaceft ) + hfuaoawbo4x . hdc0j3rnbp * hfuaoawbo4x . hdc0j3rnbp ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . m2gyfa43xk != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . m2gyfa43xk
= 0 ; } k1qmoe0iaw = muDoubleScalarSqrt ( nm4t0wvumv ) ; } else if (
nm4t0wvumv < 0.0 ) { k1qmoe0iaw = - muDoubleScalarSqrt ( muDoubleScalarAbs (
nm4t0wvumv ) ) ; ngg51vuviwy . m2gyfa43xk = 1 ; } else { k1qmoe0iaw =
muDoubleScalarSqrt ( nm4t0wvumv ) ; } nm4t0wvumv = hfuaoawbo4x . aq2ghaceft /
k1qmoe0iaw ; hjrvg0fden = hfuaoawbo4x . hdc0j3rnbp / k1qmoe0iaw ; hdqbs12ylt
= hfuaoawbo4x . bygzv3wnat / k1qmoe0iaw ; k1qmoe0iaw = hfuaoawbo4x .
kvwgtntple / k1qmoe0iaw ; hfuaoawbo4x . lmuzqxuokj = ( ( ( bjiazabmpo .
Constant_Value_klghvcvqmj - nm4t0wvumv * nm4t0wvumv ) - hjrvg0fden *
hjrvg0fden ) * bjiazabmpo . Gain2_Gain_n2hlwdziix * hfuaoawbo4x . nkn0lxavyg
[ 0 ] + ( hdqbs12ylt * nm4t0wvumv + k1qmoe0iaw * hjrvg0fden ) * bjiazabmpo .
Gain_Gain_deacltj5ll * hfuaoawbo4x . nkn0lxavyg [ 1 ] ) + ( hdqbs12ylt *
hjrvg0fden - k1qmoe0iaw * nm4t0wvumv ) * bjiazabmpo . Gain1_Gain_fe0vmtwk5u *
hfuaoawbo4x . nkn0lxavyg [ 2 ] ; hfuaoawbo4x . cpm5g01ony = ( ( ( bjiazabmpo
. Constant_Value_h3axm4dzs2 - hdqbs12ylt * hdqbs12ylt ) - hjrvg0fden *
hjrvg0fden ) * bjiazabmpo . Gain2_Gain_gnrwoc1vc2 * hfuaoawbo4x . nkn0lxavyg
[ 1 ] + ( hdqbs12ylt * nm4t0wvumv - k1qmoe0iaw * hjrvg0fden ) * bjiazabmpo .
Gain_Gain_m0ug0pnx04 * hfuaoawbo4x . nkn0lxavyg [ 0 ] ) + ( k1qmoe0iaw *
hdqbs12ylt + nm4t0wvumv * hjrvg0fden ) * bjiazabmpo . Gain1_Gain_epkzxiktj2 *
hfuaoawbo4x . nkn0lxavyg [ 2 ] ; hfuaoawbo4x . ocma20pg4m = ( ( hdqbs12ylt *
hjrvg0fden + k1qmoe0iaw * nm4t0wvumv ) * bjiazabmpo . Gain_Gain_efwlgxe2sc *
hfuaoawbo4x . nkn0lxavyg [ 0 ] + ( nm4t0wvumv * hjrvg0fden - k1qmoe0iaw *
hdqbs12ylt ) * bjiazabmpo . Gain1_Gain_ito2bip4nt * hfuaoawbo4x . nkn0lxavyg
[ 1 ] ) + ( ( bjiazabmpo . Constant_Value_jsi055lqf3 - hdqbs12ylt *
hdqbs12ylt ) - nm4t0wvumv * nm4t0wvumv ) * bjiazabmpo . Gain2_Gain_kojiuv3vcw
* hfuaoawbo4x . nkn0lxavyg [ 2 ] ; if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
hfuaoawbo4x . ptnsoso4dc [ 0 ] = hfuaoawbo4x . lmuzqxuokj ; hfuaoawbo4x .
ptnsoso4dc [ 1 ] = hfuaoawbo4x . cpm5g01ony ; hfuaoawbo4x . ptnsoso4dc [ 2 ]
= hfuaoawbo4x . ocma20pg4m ; nm4t0wvumv = ( hfuaoawbo4x . ptnsoso4dc [ 0 ] *
hfuaoawbo4x . ptnsoso4dc [ 0 ] + hfuaoawbo4x . ptnsoso4dc [ 1 ] * hfuaoawbo4x
. ptnsoso4dc [ 1 ] ) + hfuaoawbo4x . ptnsoso4dc [ 2 ] * hfuaoawbo4x .
ptnsoso4dc [ 2 ] ; if ( nm4t0wvumv < 0.0 ) { nm4t0wvumv = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( nm4t0wvumv ) ) ; } else { nm4t0wvumv
= muDoubleScalarSqrt ( nm4t0wvumv ) ; } if ( nm4t0wvumv > bjiazabmpo .
NormalizeVector_maxzero ) { afgi1z3nug [ 0 ] = hfuaoawbo4x . ptnsoso4dc [ 0 ]
; afgi1z3nug [ 1 ] = hfuaoawbo4x . ptnsoso4dc [ 1 ] ; afgi1z3nug [ 2 ] =
hfuaoawbo4x . ptnsoso4dc [ 2 ] ; afgi1z3nug [ 3 ] = nm4t0wvumv ; } else {
afgi1z3nug [ 0 ] = hfuaoawbo4x . ptnsoso4dc [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] =
hfuaoawbo4x . ptnsoso4dc [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = hfuaoawbo4x .
ptnsoso4dc [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_pw4amn2wvf ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; k1qmoe0iaw = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . bbqhnrp1n5 + hfuaoawbo4x . gztytqjrbr *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . origvc1fia * plz0cvxflt [ 2 ] ; nm4t0wvumv
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . pfsks0y3nr +
hfuaoawbo4x . npvoy3nzmj * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . a2glfphjbj *
plz0cvxflt [ 2 ] , k1qmoe0iaw ) ; k1qmoe0iaw = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . du2qaabf5h + hfuaoawbo4x . iqpr3p3rs0 *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . o5zklgmfkz * plz0cvxflt [ 2 ] , k1qmoe0iaw
) ; lrih33y43d_idx_0 = bjiazabmpo . Constant_Value_fvwrjd3qpo [ 0 ] +
nm4t0wvumv ; lrih33y43d_idx_1 = bjiazabmpo . Constant_Value_fvwrjd3qpo [ 1 ]
+ k1qmoe0iaw ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
hfuaoawbo4x . bzlwhzt3vy , & bjiazabmpo . RandomSource1_MeanVal , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP , 1 , ngg51vuviwy . pdxs3c2pl0 , 1 , 2
) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { clxyvdwwhl_idx_0 =
lrih33y43d_idx_0 + hfuaoawbo4x . bzlwhzt3vy [ 0 ] ; if ( clxyvdwwhl_idx_0 >
bjiazabmpo . Saturation_UpperSat ) { clxyvdwwhl_idx_0 = bjiazabmpo .
Saturation_UpperSat ; } else { if ( clxyvdwwhl_idx_0 < bjiazabmpo .
Saturation_LowerSat ) { clxyvdwwhl_idx_0 = bjiazabmpo . Saturation_LowerSat ;
} } clxyvdwwhl_idx_1 = lrih33y43d_idx_1 + hfuaoawbo4x . bzlwhzt3vy [ 1 ] ; if
( clxyvdwwhl_idx_1 > bjiazabmpo . Saturation_UpperSat ) { clxyvdwwhl_idx_1 =
bjiazabmpo . Saturation_UpperSat ; } else { if ( clxyvdwwhl_idx_1 <
bjiazabmpo . Saturation_LowerSat ) { clxyvdwwhl_idx_1 = bjiazabmpo .
Saturation_LowerSat ; } } hfuaoawbo4x . frlotdeaj2 [ 0 ] = hfuaoawbo4x .
lmuzqxuokj ; hfuaoawbo4x . frlotdeaj2 [ 1 ] = hfuaoawbo4x . cpm5g01ony ;
hfuaoawbo4x . frlotdeaj2 [ 2 ] = hfuaoawbo4x . ocma20pg4m ; k1qmoe0iaw = (
hfuaoawbo4x . frlotdeaj2 [ 0 ] * hfuaoawbo4x . frlotdeaj2 [ 0 ] + hfuaoawbo4x
. frlotdeaj2 [ 1 ] * hfuaoawbo4x . frlotdeaj2 [ 1 ] ) + hfuaoawbo4x .
frlotdeaj2 [ 2 ] * hfuaoawbo4x . frlotdeaj2 [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) {
k1qmoe0iaw = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ; }
else { k1qmoe0iaw = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } if ( k1qmoe0iaw >
bjiazabmpo . NormalizeVector_maxzero_cdhvq0rirk ) { afgi1z3nug [ 0 ] =
hfuaoawbo4x . frlotdeaj2 [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . frlotdeaj2
[ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . frlotdeaj2 [ 2 ] ; afgi1z3nug [ 3 ]
= k1qmoe0iaw ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . frlotdeaj2 [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x . frlotdeaj2 [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = hfuaoawbo4x . frlotdeaj2 [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_peinfzh1bx ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; nm4t0wvumv = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . fxoiexsrms + hfuaoawbo4x . olyaqikc15 *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . hvkqpvk2my * plz0cvxflt [ 2 ] ; k1qmoe0iaw
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . e3pw525aru +
hfuaoawbo4x . aqrhufuanw * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . hqxcud4qih *
plz0cvxflt [ 2 ] , nm4t0wvumv ) ; nm4t0wvumv = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . cwsqdm0rrj + hfuaoawbo4x . dantpmdd4u *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . ehckrkdne1 * plz0cvxflt [ 2 ] , nm4t0wvumv
) ; cn2ynvupqq_idx_0 = bjiazabmpo . Constant_Value_o4pefzbbdu [ 0 ] +
k1qmoe0iaw ; cn2ynvupqq_idx_1 = bjiazabmpo . Constant_Value_o4pefzbbdu [ 1 ]
+ nm4t0wvumv ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
hfuaoawbo4x . kkdzgznpnj , & bjiazabmpo . RandomSource1_MeanVal_fskbkqfzhy ,
1 , & bjiazabmpo . RandomSource1_VarianceRTP_c0tnp0ox24 , 1 , ngg51vuviwy .
lfmgmigqrp , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
jlalnnlv0o_idx_0 = cn2ynvupqq_idx_0 + hfuaoawbo4x . kkdzgznpnj [ 0 ] ; if (
jlalnnlv0o_idx_0 > bjiazabmpo . Saturation_UpperSat_iasva3d1xg ) {
jlalnnlv0o_idx_0 = bjiazabmpo . Saturation_UpperSat_iasva3d1xg ; } else { if
( jlalnnlv0o_idx_0 < bjiazabmpo . Saturation_LowerSat_k012nv1qgk ) {
jlalnnlv0o_idx_0 = bjiazabmpo . Saturation_LowerSat_k012nv1qgk ; } }
jlalnnlv0o_idx_1 = cn2ynvupqq_idx_1 + hfuaoawbo4x . kkdzgznpnj [ 1 ] ; if (
jlalnnlv0o_idx_1 > bjiazabmpo . Saturation_UpperSat_iasva3d1xg ) {
jlalnnlv0o_idx_1 = bjiazabmpo . Saturation_UpperSat_iasva3d1xg ; } else { if
( jlalnnlv0o_idx_1 < bjiazabmpo . Saturation_LowerSat_k012nv1qgk ) {
jlalnnlv0o_idx_1 = bjiazabmpo . Saturation_LowerSat_k012nv1qgk ; } }
hfuaoawbo4x . ddrli00reu [ 0 ] = hfuaoawbo4x . lmuzqxuokj ; hfuaoawbo4x .
ddrli00reu [ 1 ] = hfuaoawbo4x . cpm5g01ony ; hfuaoawbo4x . ddrli00reu [ 2 ]
= hfuaoawbo4x . ocma20pg4m ; gi3b15wlwk = ( hfuaoawbo4x . ddrli00reu [ 0 ] *
hfuaoawbo4x . ddrli00reu [ 0 ] + hfuaoawbo4x . ddrli00reu [ 1 ] * hfuaoawbo4x
. ddrli00reu [ 1 ] ) + hfuaoawbo4x . ddrli00reu [ 2 ] * hfuaoawbo4x .
ddrli00reu [ 2 ] ; if ( gi3b15wlwk < 0.0 ) { gi3b15wlwk = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( gi3b15wlwk ) ) ; } else { gi3b15wlwk
= muDoubleScalarSqrt ( gi3b15wlwk ) ; } if ( gi3b15wlwk > bjiazabmpo .
NormalizeVector_maxzero_b4q4mcfdki ) { afgi1z3nug [ 0 ] = hfuaoawbo4x .
ddrli00reu [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . ddrli00reu [ 1 ] ;
afgi1z3nug [ 2 ] = hfuaoawbo4x . ddrli00reu [ 2 ] ; afgi1z3nug [ 3 ] =
gi3b15wlwk ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . ddrli00reu [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = hfuaoawbo4x . ddrli00reu [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= hfuaoawbo4x . ddrli00reu [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_agjbvr0z5q ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; k1qmoe0iaw = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . aywwgafww0 + hfuaoawbo4x . jsl11ciyta *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . dlfxn2mgpk * plz0cvxflt [ 2 ] ; gi3b15wlwk
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . fkskvmplcl +
hfuaoawbo4x . hwi4oft1hq * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . lsjk5initb *
plz0cvxflt [ 2 ] , k1qmoe0iaw ) ; k1qmoe0iaw = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . iggwakfyei + hfuaoawbo4x . krzyy5xscm *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . lt1fko3tiq * plz0cvxflt [ 2 ] , k1qmoe0iaw
) ; gi3b15wlwk += bjiazabmpo . Constant_Value_aqc3aba12o [ 0 ] ;
bsdmjc4arz_idx_1 = bjiazabmpo . Constant_Value_aqc3aba12o [ 1 ] + k1qmoe0iaw
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x .
p1goyf5ozx , & bjiazabmpo . RandomSource1_MeanVal_memmqqy0nt , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP_ciqyogzko1 , 1 , ngg51vuviwy .
kgfaip5jyy , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
j1u5l3qcyc_idx_0 = gi3b15wlwk + hfuaoawbo4x . p1goyf5ozx [ 0 ] ; if (
j1u5l3qcyc_idx_0 > bjiazabmpo . Saturation_UpperSat_kvrw4yrrrs ) {
j1u5l3qcyc_idx_0 = bjiazabmpo . Saturation_UpperSat_kvrw4yrrrs ; } else { if
( j1u5l3qcyc_idx_0 < bjiazabmpo . Saturation_LowerSat_kx5yh1wv4z ) {
j1u5l3qcyc_idx_0 = bjiazabmpo . Saturation_LowerSat_kx5yh1wv4z ; } }
j1u5l3qcyc_idx_1 = bsdmjc4arz_idx_1 + hfuaoawbo4x . p1goyf5ozx [ 1 ] ; if (
j1u5l3qcyc_idx_1 > bjiazabmpo . Saturation_UpperSat_kvrw4yrrrs ) {
j1u5l3qcyc_idx_1 = bjiazabmpo . Saturation_UpperSat_kvrw4yrrrs ; } else { if
( j1u5l3qcyc_idx_1 < bjiazabmpo . Saturation_LowerSat_kx5yh1wv4z ) {
j1u5l3qcyc_idx_1 = bjiazabmpo . Saturation_LowerSat_kx5yh1wv4z ; } }
hfuaoawbo4x . jeujegvl5t [ 0 ] = hfuaoawbo4x . lmuzqxuokj ; hfuaoawbo4x .
jeujegvl5t [ 1 ] = hfuaoawbo4x . cpm5g01ony ; hfuaoawbo4x . jeujegvl5t [ 2 ]
= hfuaoawbo4x . ocma20pg4m ; njulo3ucsg = ( hfuaoawbo4x . jeujegvl5t [ 0 ] *
hfuaoawbo4x . jeujegvl5t [ 0 ] + hfuaoawbo4x . jeujegvl5t [ 1 ] * hfuaoawbo4x
. jeujegvl5t [ 1 ] ) + hfuaoawbo4x . jeujegvl5t [ 2 ] * hfuaoawbo4x .
jeujegvl5t [ 2 ] ; if ( njulo3ucsg < 0.0 ) { njulo3ucsg = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( njulo3ucsg ) ) ; } else { njulo3ucsg
= muDoubleScalarSqrt ( njulo3ucsg ) ; } if ( njulo3ucsg > bjiazabmpo .
NormalizeVector_maxzero_h2g0i450y0 ) { afgi1z3nug [ 0 ] = hfuaoawbo4x .
jeujegvl5t [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . jeujegvl5t [ 1 ] ;
afgi1z3nug [ 2 ] = hfuaoawbo4x . jeujegvl5t [ 2 ] ; afgi1z3nug [ 3 ] =
njulo3ucsg ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . jeujegvl5t [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = hfuaoawbo4x . jeujegvl5t [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= hfuaoawbo4x . jeujegvl5t [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_ktwwdrryx3 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; gi3b15wlwk = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . irny0upjdu + hfuaoawbo4x . ovxzd4nxnl *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . ksjfkatzta * plz0cvxflt [ 2 ] ; njulo3ucsg
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . ikh4mq35wm +
hfuaoawbo4x . dqhytx5wim * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . ovzlu0geh0 *
plz0cvxflt [ 2 ] , gi3b15wlwk ) ; gi3b15wlwk = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . fn0fkozy3r + hfuaoawbo4x . psvpdz1e45 *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . e5dnskanhg * plz0cvxflt [ 2 ] , gi3b15wlwk
) ; njulo3ucsg += bjiazabmpo . Constant_Value_kv3w21qse5 [ 0 ] ;
dhayrofkxm_idx_1 = bjiazabmpo . Constant_Value_kv3w21qse5 [ 1 ] + gi3b15wlwk
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x .
hhue5rbecu , & bjiazabmpo . RandomSource1_MeanVal_c0fkc2tbqq , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP_f4hdv51tm4 , 1 , ngg51vuviwy .
dlkpgyoxr3 , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
jhb4z4v3fe_idx_0 = njulo3ucsg + hfuaoawbo4x . hhue5rbecu [ 0 ] ; if (
jhb4z4v3fe_idx_0 > bjiazabmpo . Saturation_UpperSat_byrofjxopf ) {
jhb4z4v3fe_idx_0 = bjiazabmpo . Saturation_UpperSat_byrofjxopf ; } else { if
( jhb4z4v3fe_idx_0 < bjiazabmpo . Saturation_LowerSat_eqtwttitcd ) {
jhb4z4v3fe_idx_0 = bjiazabmpo . Saturation_LowerSat_eqtwttitcd ; } }
jhb4z4v3fe_idx_1 = dhayrofkxm_idx_1 + hfuaoawbo4x . hhue5rbecu [ 1 ] ; if (
jhb4z4v3fe_idx_1 > bjiazabmpo . Saturation_UpperSat_byrofjxopf ) {
jhb4z4v3fe_idx_1 = bjiazabmpo . Saturation_UpperSat_byrofjxopf ; } else { if
( jhb4z4v3fe_idx_1 < bjiazabmpo . Saturation_LowerSat_eqtwttitcd ) {
jhb4z4v3fe_idx_1 = bjiazabmpo . Saturation_LowerSat_eqtwttitcd ; } }
hfuaoawbo4x . ocmmlusxei [ 0 ] = hfuaoawbo4x . lmuzqxuokj ; hfuaoawbo4x .
ocmmlusxei [ 1 ] = hfuaoawbo4x . cpm5g01ony ; hfuaoawbo4x . ocmmlusxei [ 2 ]
= hfuaoawbo4x . ocma20pg4m ; hkwf2out3d = ( hfuaoawbo4x . ocmmlusxei [ 0 ] *
hfuaoawbo4x . ocmmlusxei [ 0 ] + hfuaoawbo4x . ocmmlusxei [ 1 ] * hfuaoawbo4x
. ocmmlusxei [ 1 ] ) + hfuaoawbo4x . ocmmlusxei [ 2 ] * hfuaoawbo4x .
ocmmlusxei [ 2 ] ; if ( hkwf2out3d < 0.0 ) { hkwf2out3d = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( hkwf2out3d ) ) ; } else { hkwf2out3d
= muDoubleScalarSqrt ( hkwf2out3d ) ; } if ( hkwf2out3d > bjiazabmpo .
NormalizeVector_maxzero_j4hegkg3gk ) { afgi1z3nug [ 0 ] = hfuaoawbo4x .
ocmmlusxei [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . ocmmlusxei [ 1 ] ;
afgi1z3nug [ 2 ] = hfuaoawbo4x . ocmmlusxei [ 2 ] ; afgi1z3nug [ 3 ] =
hkwf2out3d ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . ocmmlusxei [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = hfuaoawbo4x . ocmmlusxei [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= hfuaoawbo4x . ocmmlusxei [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_aefuqipo3z ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; njulo3ucsg = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . dwrpdlv2f5 + hfuaoawbo4x . hoiwjokbvl *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . pwpsjlqzli * plz0cvxflt [ 2 ] ; hkwf2out3d
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . bw0tsy3rjx +
hfuaoawbo4x . f2sr2z2tiv * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . l145oj4ihb *
plz0cvxflt [ 2 ] , njulo3ucsg ) ; njulo3ucsg = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . ninagdnqkp + hfuaoawbo4x . lmx5u0qfh0 *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . dytdqpfldp * plz0cvxflt [ 2 ] , njulo3ucsg
) ; hkwf2out3d += bjiazabmpo . Constant_Value_ei4qxougxr [ 0 ] ;
g3yqv3aaon_idx_1 = bjiazabmpo . Constant_Value_ei4qxougxr [ 1 ] + njulo3ucsg
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x .
h4ktifh2sj , & bjiazabmpo . RandomSource1_MeanVal_d5xz2yhw3l , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP_g12uaggma2 , 1 , ngg51vuviwy .
o20tevejqi , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
p5cpuziyth_idx_0 = hkwf2out3d + hfuaoawbo4x . h4ktifh2sj [ 0 ] ; if (
p5cpuziyth_idx_0 > bjiazabmpo . Saturation_UpperSat_llltpjmasd ) {
p5cpuziyth_idx_0 = bjiazabmpo . Saturation_UpperSat_llltpjmasd ; } else { if
( p5cpuziyth_idx_0 < bjiazabmpo . Saturation_LowerSat_od1cxjykdq ) {
p5cpuziyth_idx_0 = bjiazabmpo . Saturation_LowerSat_od1cxjykdq ; } }
p5cpuziyth_idx_1 = g3yqv3aaon_idx_1 + hfuaoawbo4x . h4ktifh2sj [ 1 ] ; if (
p5cpuziyth_idx_1 > bjiazabmpo . Saturation_UpperSat_llltpjmasd ) {
p5cpuziyth_idx_1 = bjiazabmpo . Saturation_UpperSat_llltpjmasd ; } else { if
( p5cpuziyth_idx_1 < bjiazabmpo . Saturation_LowerSat_od1cxjykdq ) {
p5cpuziyth_idx_1 = bjiazabmpo . Saturation_LowerSat_od1cxjykdq ; } }
hfuaoawbo4x . huvsnztgla [ 0 ] = hfuaoawbo4x . lmuzqxuokj ; hfuaoawbo4x .
huvsnztgla [ 1 ] = hfuaoawbo4x . cpm5g01ony ; hfuaoawbo4x . huvsnztgla [ 2 ]
= hfuaoawbo4x . ocma20pg4m ; emiiavfkh1 = ( hfuaoawbo4x . huvsnztgla [ 0 ] *
hfuaoawbo4x . huvsnztgla [ 0 ] + hfuaoawbo4x . huvsnztgla [ 1 ] * hfuaoawbo4x
. huvsnztgla [ 1 ] ) + hfuaoawbo4x . huvsnztgla [ 2 ] * hfuaoawbo4x .
huvsnztgla [ 2 ] ; if ( emiiavfkh1 < 0.0 ) { emiiavfkh1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( emiiavfkh1 ) ) ; } else { emiiavfkh1
= muDoubleScalarSqrt ( emiiavfkh1 ) ; } if ( emiiavfkh1 > bjiazabmpo .
NormalizeVector_maxzero_g4yscxcbyk ) { afgi1z3nug [ 0 ] = hfuaoawbo4x .
huvsnztgla [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . huvsnztgla [ 1 ] ;
afgi1z3nug [ 2 ] = hfuaoawbo4x . huvsnztgla [ 2 ] ; afgi1z3nug [ 3 ] =
emiiavfkh1 ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . huvsnztgla [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = hfuaoawbo4x . huvsnztgla [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= hfuaoawbo4x . huvsnztgla [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_d3tr2oyhj4 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hkwf2out3d = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . gbvr55mtvj + hfuaoawbo4x . kspdub4osy *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . fbm20tee0q * plz0cvxflt [ 2 ] ; emiiavfkh1
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . pl52eab1mb +
hfuaoawbo4x . p0aejvus1i * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . pro1ckqrto *
plz0cvxflt [ 2 ] , hkwf2out3d ) ; hkwf2out3d = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . lomp3tpos5 + hfuaoawbo4x . fgmdntdopa *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . c5wy4rvh2r * plz0cvxflt [ 2 ] , hkwf2out3d
) ; jon1lcekfs_idx_0 = bjiazabmpo . Constant_Value_lod4m2end1 [ 0 ] +
emiiavfkh1 ; emiiavfkh1 = bjiazabmpo . Constant_Value_lod4m2end1 [ 1 ] +
hkwf2out3d ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
hfuaoawbo4x . nph04v1hzd , & bjiazabmpo . RandomSource1_MeanVal_jxhxrhz3me ,
1 , & bjiazabmpo . RandomSource1_VarianceRTP_bdmhqmxko4 , 1 , ngg51vuviwy .
fqtzsw0tzv , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
g3yqv3aaon_idx_1 = jon1lcekfs_idx_0 + hfuaoawbo4x . nph04v1hzd [ 0 ] ; if (
g3yqv3aaon_idx_1 > bjiazabmpo . Saturation_UpperSat_e1cwi1gybf ) {
g3yqv3aaon_idx_1 = bjiazabmpo . Saturation_UpperSat_e1cwi1gybf ; } else { if
( g3yqv3aaon_idx_1 < bjiazabmpo . Saturation_LowerSat_ajttgxrnng ) {
g3yqv3aaon_idx_1 = bjiazabmpo . Saturation_LowerSat_ajttgxrnng ; } }
jon1lcekfs_idx_0 = g3yqv3aaon_idx_1 * g3yqv3aaon_idx_1 ; njulo3ucsg =
g3yqv3aaon_idx_1 ; g3yqv3aaon_idx_1 = emiiavfkh1 + hfuaoawbo4x . nph04v1hzd [
1 ] ; if ( g3yqv3aaon_idx_1 > bjiazabmpo . Saturation_UpperSat_e1cwi1gybf ) {
g3yqv3aaon_idx_1 = bjiazabmpo . Saturation_UpperSat_e1cwi1gybf ; } else { if
( g3yqv3aaon_idx_1 < bjiazabmpo . Saturation_LowerSat_ajttgxrnng ) {
g3yqv3aaon_idx_1 = bjiazabmpo . Saturation_LowerSat_ajttgxrnng ; } }
jcvgvp2mw3 [ 0 ] = clxyvdwwhl_idx_0 * clxyvdwwhl_idx_0 + clxyvdwwhl_idx_1 *
clxyvdwwhl_idx_1 ; jcvgvp2mw3 [ 1 ] = jlalnnlv0o_idx_0 * jlalnnlv0o_idx_0 +
jlalnnlv0o_idx_1 * jlalnnlv0o_idx_1 ; jcvgvp2mw3 [ 2 ] = j1u5l3qcyc_idx_0 *
j1u5l3qcyc_idx_0 + j1u5l3qcyc_idx_1 * j1u5l3qcyc_idx_1 ; jcvgvp2mw3 [ 3 ] =
jhb4z4v3fe_idx_0 * jhb4z4v3fe_idx_0 + jhb4z4v3fe_idx_1 * jhb4z4v3fe_idx_1 ;
jcvgvp2mw3 [ 4 ] = p5cpuziyth_idx_0 * p5cpuziyth_idx_0 + p5cpuziyth_idx_1 *
p5cpuziyth_idx_1 ; jcvgvp2mw3 [ 5 ] = g3yqv3aaon_idx_1 * g3yqv3aaon_idx_1 +
jon1lcekfs_idx_0 ; if ( ! muDoubleScalarIsNaN ( jcvgvp2mw3 [ 0 ] ) ) { i = 1
; } else { i = 0 ; k = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k < 7 )
) { if ( ! muDoubleScalarIsNaN ( jcvgvp2mw3 [ k - 1 ] ) ) { i = k ; exitg1 =
true ; } else { k ++ ; } } } if ( i == 0 ) { i = 1 ; } else { hkwf2out3d =
jcvgvp2mw3 [ i - 1 ] ; for ( k = i ; k < 6 ; k ++ ) { if ( hkwf2out3d >
jcvgvp2mw3 [ k ] ) { hkwf2out3d = jcvgvp2mw3 [ k ] ; i = k + 1 ; } } } switch
( i ) { case 1 : hfuaoawbo4x . ny1ut05nls [ 0 ] = clxyvdwwhl_idx_0 ;
hfuaoawbo4x . ny1ut05nls [ 1 ] = clxyvdwwhl_idx_1 ; break ; case 2 :
hfuaoawbo4x . ny1ut05nls [ 0 ] = jlalnnlv0o_idx_0 ; hfuaoawbo4x . ny1ut05nls
[ 1 ] = jlalnnlv0o_idx_1 ; break ; case 3 : hfuaoawbo4x . ny1ut05nls [ 0 ] =
j1u5l3qcyc_idx_0 ; hfuaoawbo4x . ny1ut05nls [ 1 ] = j1u5l3qcyc_idx_1 ; break
; case 4 : hfuaoawbo4x . ny1ut05nls [ 0 ] = jhb4z4v3fe_idx_0 ; hfuaoawbo4x .
ny1ut05nls [ 1 ] = jhb4z4v3fe_idx_1 ; break ; case 5 : hfuaoawbo4x .
ny1ut05nls [ 0 ] = p5cpuziyth_idx_0 ; hfuaoawbo4x . ny1ut05nls [ 1 ] =
p5cpuziyth_idx_1 ; break ; default : hfuaoawbo4x . ny1ut05nls [ 0 ] =
njulo3ucsg ; hfuaoawbo4x . ny1ut05nls [ 1 ] = g3yqv3aaon_idx_1 ; break ; }
hfuaoawbo4x . jsthbuk1sr [ 0 ] = hfuaoawbo4x . nkn0lxavyg [ 0 ] ; hfuaoawbo4x
. jsthbuk1sr [ 1 ] = hfuaoawbo4x . nkn0lxavyg [ 1 ] ; hfuaoawbo4x .
jsthbuk1sr [ 2 ] = hfuaoawbo4x . nkn0lxavyg [ 2 ] ; } if ( ssIsMajorTimeStep
( rtS ) ) { if ( ngg51vuviwy . j3jpf41hkf != 0 ) { o1yff13vlj3 . exrjjbh4to =
hfuaoawbo4x . f3ygbdvaty ; } emiiavfkh1 = o1yff13vlj3 . exrjjbh4to ; } else {
emiiavfkh1 = o1yff13vlj3 . exrjjbh4to ; } hkwf2out3d = hfuaoawbo4x .
i15qhheq5s / ( bjiazabmpo . e_Value * muDoubleScalarCos ( emiiavfkh1 ) +
bjiazabmpo . Constant_Value_azddlyivju ) ; njulo3ucsg = muDoubleScalarCos (
emiiavfkh1 ) ; gi3b15wlwk = muDoubleScalarSin ( emiiavfkh1 ) ; hfuaoawbo4x .
otudxcmy5f [ 0 ] = ( ( njulo3ucsg * hfuaoawbo4x . dy3a2ou5re + hfuaoawbo4x .
fomozizwka * gi3b15wlwk ) + hfuaoawbo4x . ihuo035dxp ) * bjiazabmpo .
Gain1_Gain_csudgssrcg * hkwf2out3d - nnfzsjooaq_idx_0 ; hfuaoawbo4x .
otudxcmy5f [ 1 ] = ( ( njulo3ucsg * hfuaoawbo4x . iqwyi5ur24 + hfuaoawbo4x .
epgzqlzua5 * gi3b15wlwk ) + hfuaoawbo4x . pcw0pyw2gh ) * bjiazabmpo .
Gain1_Gain_csudgssrcg * hkwf2out3d - nnfzsjooaq_idx_1 ; hfuaoawbo4x .
otudxcmy5f [ 2 ] = ( ( njulo3ucsg * hfuaoawbo4x . abz0n5qp4d + hfuaoawbo4x .
bkxmmcqnop * gi3b15wlwk ) + hfuaoawbo4x . f2wok2vtfw ) * bjiazabmpo .
Gain1_Gain_csudgssrcg * hkwf2out3d - nnfzsjooaq_idx_2 ; njulo3ucsg = ( (
hfuaoawbo4x . kvwgtntple * hfuaoawbo4x . kvwgtntple + hfuaoawbo4x .
bygzv3wnat * hfuaoawbo4x . bygzv3wnat ) + hfuaoawbo4x . aq2ghaceft *
hfuaoawbo4x . aq2ghaceft ) + hfuaoawbo4x . hdc0j3rnbp * hfuaoawbo4x .
hdc0j3rnbp ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . kozvmutgqp
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy .
kozvmutgqp = 0 ; } hkwf2out3d = muDoubleScalarSqrt ( njulo3ucsg ) ; } else if
( njulo3ucsg < 0.0 ) { hkwf2out3d = - muDoubleScalarSqrt ( muDoubleScalarAbs
( njulo3ucsg ) ) ; ngg51vuviwy . kozvmutgqp = 1 ; } else { hkwf2out3d =
muDoubleScalarSqrt ( njulo3ucsg ) ; } njulo3ucsg = hfuaoawbo4x . aq2ghaceft /
hkwf2out3d ; gi3b15wlwk = hfuaoawbo4x . hdc0j3rnbp / hkwf2out3d ; k1qmoe0iaw
= hfuaoawbo4x . bygzv3wnat / hkwf2out3d ; hkwf2out3d = hfuaoawbo4x .
kvwgtntple / hkwf2out3d ; hfuaoawbo4x . abhvo30nqe [ 0 ] = ( ( ( bjiazabmpo .
Constant_Value_hn3g4e2bdf - njulo3ucsg * njulo3ucsg ) - gi3b15wlwk *
gi3b15wlwk ) * bjiazabmpo . Gain2_Gain_nben4kjacq * hfuaoawbo4x . otudxcmy5f
[ 0 ] + ( k1qmoe0iaw * njulo3ucsg + hkwf2out3d * gi3b15wlwk ) * bjiazabmpo .
Gain_Gain_kewyutalpa * hfuaoawbo4x . otudxcmy5f [ 1 ] ) + ( k1qmoe0iaw *
gi3b15wlwk - hkwf2out3d * njulo3ucsg ) * bjiazabmpo . Gain1_Gain_e5ngzsvcli *
hfuaoawbo4x . otudxcmy5f [ 2 ] ; hfuaoawbo4x . abhvo30nqe [ 1 ] = ( ( (
bjiazabmpo . Constant_Value_cinqqywm1t - k1qmoe0iaw * k1qmoe0iaw ) -
gi3b15wlwk * gi3b15wlwk ) * bjiazabmpo . Gain2_Gain_d4fbbaxwpd * hfuaoawbo4x
. otudxcmy5f [ 1 ] + ( k1qmoe0iaw * njulo3ucsg - hkwf2out3d * gi3b15wlwk ) *
bjiazabmpo . Gain_Gain_fouuav1ki1 * hfuaoawbo4x . otudxcmy5f [ 0 ] ) + (
hkwf2out3d * k1qmoe0iaw + njulo3ucsg * gi3b15wlwk ) * bjiazabmpo .
Gain1_Gain_lq4olh4tnx * hfuaoawbo4x . otudxcmy5f [ 2 ] ; hfuaoawbo4x .
abhvo30nqe [ 2 ] = ( ( k1qmoe0iaw * gi3b15wlwk + hkwf2out3d * njulo3ucsg ) *
bjiazabmpo . Gain_Gain_kc1cpqscqf * hfuaoawbo4x . otudxcmy5f [ 0 ] + (
njulo3ucsg * gi3b15wlwk - hkwf2out3d * k1qmoe0iaw ) * bjiazabmpo .
Gain1_Gain_n4q3gythod * hfuaoawbo4x . otudxcmy5f [ 1 ] ) + ( ( bjiazabmpo .
Constant_Value_aglfz4cib2 - k1qmoe0iaw * k1qmoe0iaw ) - njulo3ucsg *
njulo3ucsg ) * bjiazabmpo . Gain2_Gain_arhr50dupm * hfuaoawbo4x . otudxcmy5f
[ 2 ] ; if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hfuaoawbo4x . jnj0b5ppbc [ 0 ]
= hfuaoawbo4x . abhvo30nqe [ 0 ] ; hfuaoawbo4x . jnj0b5ppbc [ 1 ] =
hfuaoawbo4x . abhvo30nqe [ 1 ] ; hfuaoawbo4x . jnj0b5ppbc [ 2 ] = hfuaoawbo4x
. abhvo30nqe [ 2 ] ; clxyvdwwhl_idx_0 = ( hfuaoawbo4x . jnj0b5ppbc [ 0 ] *
hfuaoawbo4x . jnj0b5ppbc [ 0 ] + hfuaoawbo4x . jnj0b5ppbc [ 1 ] * hfuaoawbo4x
. jnj0b5ppbc [ 1 ] ) + hfuaoawbo4x . jnj0b5ppbc [ 2 ] * hfuaoawbo4x .
jnj0b5ppbc [ 2 ] ; if ( clxyvdwwhl_idx_0 < 0.0 ) { clxyvdwwhl_idx_0 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( clxyvdwwhl_idx_0 ) ) ; } else {
clxyvdwwhl_idx_0 = muDoubleScalarSqrt ( clxyvdwwhl_idx_0 ) ; } if (
clxyvdwwhl_idx_0 > bjiazabmpo . NormalizeVector_maxzero_bhjxf3hbxp ) {
afgi1z3nug [ 0 ] = hfuaoawbo4x . jnj0b5ppbc [ 0 ] ; afgi1z3nug [ 1 ] =
hfuaoawbo4x . jnj0b5ppbc [ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . jnj0b5ppbc
[ 2 ] ; afgi1z3nug [ 3 ] = clxyvdwwhl_idx_0 ; } else { afgi1z3nug [ 0 ] =
hfuaoawbo4x . jnj0b5ppbc [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x .
jnj0b5ppbc [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = hfuaoawbo4x . jnj0b5ppbc [ 2 ] *
0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo . Constant_Value_pu1egqm5wd ; }
plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; hkwf2out3d = ( plz0cvxflt [ 0 ] * hfuaoawbo4x . bx0wwwvie3
+ hfuaoawbo4x . le1tggu3fn * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . d0oto4f2d1 *
plz0cvxflt [ 2 ] ; clxyvdwwhl_idx_0 = muDoubleScalarAtan2 ( ( plz0cvxflt [ 0
] * hfuaoawbo4x . nxtdoutt0d + hfuaoawbo4x . on1bmik0q5 * plz0cvxflt [ 1 ] )
+ hfuaoawbo4x . fjdo1n5rtk * plz0cvxflt [ 2 ] , hkwf2out3d ) ; hkwf2out3d =
muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . fovlccel0m +
hfuaoawbo4x . hkj5lh1yfa * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . paj1cpcltz *
plz0cvxflt [ 2 ] , hkwf2out3d ) ; jdf1jco5hl_idx_0 = bjiazabmpo .
Constant_Value_k3ydr0xveb [ 0 ] + clxyvdwwhl_idx_0 ; jdf1jco5hl_idx_1 =
bjiazabmpo . Constant_Value_k3ydr0xveb [ 1 ] + hkwf2out3d ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x . g1rwbozond , &
bjiazabmpo . RandomSource1_MeanVal_bvk35h21mf , 1 , & bjiazabmpo .
RandomSource1_VarianceRTP_k1b5meiqjj , 1 , ngg51vuviwy . avvodjvi0e , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { g3yqv3aaon_idx_1 =
jdf1jco5hl_idx_0 + hfuaoawbo4x . g1rwbozond [ 0 ] ; if ( g3yqv3aaon_idx_1 >
bjiazabmpo . Saturation_UpperSat_hvo4j1520s ) { fpykojxvqx [ 0 ] = bjiazabmpo
. Saturation_UpperSat_hvo4j1520s ; } else if ( g3yqv3aaon_idx_1 < bjiazabmpo
. Saturation_LowerSat_anwhzkhsgm ) { fpykojxvqx [ 0 ] = bjiazabmpo .
Saturation_LowerSat_anwhzkhsgm ; } else { fpykojxvqx [ 0 ] = g3yqv3aaon_idx_1
; } g3yqv3aaon_idx_1 = jdf1jco5hl_idx_1 + hfuaoawbo4x . g1rwbozond [ 1 ] ; if
( g3yqv3aaon_idx_1 > bjiazabmpo . Saturation_UpperSat_hvo4j1520s ) {
fpykojxvqx [ 1 ] = bjiazabmpo . Saturation_UpperSat_hvo4j1520s ; } else if (
g3yqv3aaon_idx_1 < bjiazabmpo . Saturation_LowerSat_anwhzkhsgm ) { fpykojxvqx
[ 1 ] = bjiazabmpo . Saturation_LowerSat_anwhzkhsgm ; } else { fpykojxvqx [ 1
] = g3yqv3aaon_idx_1 ; } hfuaoawbo4x . h4s42jsqon [ 0 ] = hfuaoawbo4x .
abhvo30nqe [ 0 ] ; hfuaoawbo4x . h4s42jsqon [ 1 ] = hfuaoawbo4x . abhvo30nqe
[ 1 ] ; hfuaoawbo4x . h4s42jsqon [ 2 ] = hfuaoawbo4x . abhvo30nqe [ 2 ] ;
p2s2um3vln = ( hfuaoawbo4x . h4s42jsqon [ 0 ] * hfuaoawbo4x . h4s42jsqon [ 0
] + hfuaoawbo4x . h4s42jsqon [ 1 ] * hfuaoawbo4x . h4s42jsqon [ 1 ] ) +
hfuaoawbo4x . h4s42jsqon [ 2 ] * hfuaoawbo4x . h4s42jsqon [ 2 ] ; if (
p2s2um3vln < 0.0 ) { p2s2um3vln = - muDoubleScalarSqrt ( muDoubleScalarAbs (
p2s2um3vln ) ) ; } else { p2s2um3vln = muDoubleScalarSqrt ( p2s2um3vln ) ; }
if ( p2s2um3vln > bjiazabmpo . NormalizeVector_maxzero_nx4f2adafg ) {
afgi1z3nug [ 0 ] = hfuaoawbo4x . h4s42jsqon [ 0 ] ; afgi1z3nug [ 1 ] =
hfuaoawbo4x . h4s42jsqon [ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . h4s42jsqon
[ 2 ] ; afgi1z3nug [ 3 ] = p2s2um3vln ; } else { afgi1z3nug [ 0 ] =
hfuaoawbo4x . h4s42jsqon [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x .
h4s42jsqon [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = hfuaoawbo4x . h4s42jsqon [ 2 ] *
0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo . Constant_Value_oqac1ckjba ; }
plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; clxyvdwwhl_idx_0 = ( plz0cvxflt [ 0 ] * hfuaoawbo4x .
dq2b0uqnue + hfuaoawbo4x . pvkeaggof5 * plz0cvxflt [ 1 ] ) + hfuaoawbo4x .
k3livt50xe * plz0cvxflt [ 2 ] ; p2s2um3vln = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . cklgc35k0o + hfuaoawbo4x . bedykpbnax *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . pem5nu1bix * plz0cvxflt [ 2 ] ,
clxyvdwwhl_idx_0 ) ; clxyvdwwhl_idx_0 = muDoubleScalarAtan2 ( ( plz0cvxflt [
0 ] * hfuaoawbo4x . iuompaq1le + hfuaoawbo4x . gqzvomyv2t * plz0cvxflt [ 1 ]
) + hfuaoawbo4x . nv4mt5uie4 * plz0cvxflt [ 2 ] , clxyvdwwhl_idx_0 ) ;
p2s2um3vln += bjiazabmpo . Constant_Value_cknsmwduvj [ 0 ] ; lkb3lbvxyk_idx_1
= bjiazabmpo . Constant_Value_cknsmwduvj [ 1 ] + clxyvdwwhl_idx_0 ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x . o2hjorpke2 , &
bjiazabmpo . RandomSource1_MeanVal_cgugych5h2 , 1 , & bjiazabmpo .
RandomSource1_VarianceRTP_pdcijtaj4d , 1 , ngg51vuviwy . gtpyurwibv , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { pk0lw220uo_idx_0 = p2s2um3vln +
hfuaoawbo4x . o2hjorpke2 [ 0 ] ; if ( pk0lw220uo_idx_0 > bjiazabmpo .
Saturation_UpperSat_m5walzmpht ) { pk0lw220uo_idx_0 = bjiazabmpo .
Saturation_UpperSat_m5walzmpht ; } else { if ( pk0lw220uo_idx_0 < bjiazabmpo
. Saturation_LowerSat_kiy0a1gdvs ) { pk0lw220uo_idx_0 = bjiazabmpo .
Saturation_LowerSat_kiy0a1gdvs ; } } pk0lw220uo_idx_1 = lkb3lbvxyk_idx_1 +
hfuaoawbo4x . o2hjorpke2 [ 1 ] ; if ( pk0lw220uo_idx_1 > bjiazabmpo .
Saturation_UpperSat_m5walzmpht ) { pk0lw220uo_idx_1 = bjiazabmpo .
Saturation_UpperSat_m5walzmpht ; } else { if ( pk0lw220uo_idx_1 < bjiazabmpo
. Saturation_LowerSat_kiy0a1gdvs ) { pk0lw220uo_idx_1 = bjiazabmpo .
Saturation_LowerSat_kiy0a1gdvs ; } } hfuaoawbo4x . eutzf3fc5q [ 0 ] =
hfuaoawbo4x . abhvo30nqe [ 0 ] ; hfuaoawbo4x . eutzf3fc5q [ 1 ] = hfuaoawbo4x
. abhvo30nqe [ 1 ] ; hfuaoawbo4x . eutzf3fc5q [ 2 ] = hfuaoawbo4x .
abhvo30nqe [ 2 ] ; omuhzl1dir = ( hfuaoawbo4x . eutzf3fc5q [ 0 ] *
hfuaoawbo4x . eutzf3fc5q [ 0 ] + hfuaoawbo4x . eutzf3fc5q [ 1 ] * hfuaoawbo4x
. eutzf3fc5q [ 1 ] ) + hfuaoawbo4x . eutzf3fc5q [ 2 ] * hfuaoawbo4x .
eutzf3fc5q [ 2 ] ; if ( omuhzl1dir < 0.0 ) { omuhzl1dir = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( omuhzl1dir ) ) ; } else { omuhzl1dir
= muDoubleScalarSqrt ( omuhzl1dir ) ; } if ( omuhzl1dir > bjiazabmpo .
NormalizeVector_maxzero_j5wdotj0ar ) { afgi1z3nug [ 0 ] = hfuaoawbo4x .
eutzf3fc5q [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . eutzf3fc5q [ 1 ] ;
afgi1z3nug [ 2 ] = hfuaoawbo4x . eutzf3fc5q [ 2 ] ; afgi1z3nug [ 3 ] =
omuhzl1dir ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . eutzf3fc5q [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = hfuaoawbo4x . eutzf3fc5q [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= hfuaoawbo4x . eutzf3fc5q [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_etis5qgp2s ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; p2s2um3vln = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . hnikyctles + hfuaoawbo4x . j0rtedvqju *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . ke1mnfoaag * plz0cvxflt [ 2 ] ; omuhzl1dir
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . i3y3dprl5r +
hfuaoawbo4x . ge5q2osujn * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . j0glhaz1ff *
plz0cvxflt [ 2 ] , p2s2um3vln ) ; p2s2um3vln = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . ffcfrhk5gr + hfuaoawbo4x . ffh2jewlhj *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . ec2sfpkq33 * plz0cvxflt [ 2 ] , p2s2um3vln
) ; omuhzl1dir += bjiazabmpo . Constant_Value_mxxxqc2s25 [ 0 ] ;
ipfu54ftkj_idx_1 = bjiazabmpo . Constant_Value_mxxxqc2s25 [ 1 ] + p2s2um3vln
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x .
g5urx4llqk , & bjiazabmpo . RandomSource1_MeanVal_d4idhl1tz1 , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP_crqc3mkc0f , 1 , ngg51vuviwy .
pe0qbg3cnl , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
ojyypbpaqp_idx_0 = omuhzl1dir + hfuaoawbo4x . g5urx4llqk [ 0 ] ; if (
ojyypbpaqp_idx_0 > bjiazabmpo . Saturation_UpperSat_m5kmh5w5uw ) {
ojyypbpaqp_idx_0 = bjiazabmpo . Saturation_UpperSat_m5kmh5w5uw ; } else { if
( ojyypbpaqp_idx_0 < bjiazabmpo . Saturation_LowerSat_i04nwcukho ) {
ojyypbpaqp_idx_0 = bjiazabmpo . Saturation_LowerSat_i04nwcukho ; } }
ojyypbpaqp_idx_1 = ipfu54ftkj_idx_1 + hfuaoawbo4x . g5urx4llqk [ 1 ] ; if (
ojyypbpaqp_idx_1 > bjiazabmpo . Saturation_UpperSat_m5kmh5w5uw ) {
ojyypbpaqp_idx_1 = bjiazabmpo . Saturation_UpperSat_m5kmh5w5uw ; } else { if
( ojyypbpaqp_idx_1 < bjiazabmpo . Saturation_LowerSat_i04nwcukho ) {
ojyypbpaqp_idx_1 = bjiazabmpo . Saturation_LowerSat_i04nwcukho ; } }
hfuaoawbo4x . a0iu5wjm5i [ 0 ] = hfuaoawbo4x . abhvo30nqe [ 0 ] ; hfuaoawbo4x
. a0iu5wjm5i [ 1 ] = hfuaoawbo4x . abhvo30nqe [ 1 ] ; hfuaoawbo4x .
a0iu5wjm5i [ 2 ] = hfuaoawbo4x . abhvo30nqe [ 2 ] ; mnqgflhgig = (
hfuaoawbo4x . a0iu5wjm5i [ 0 ] * hfuaoawbo4x . a0iu5wjm5i [ 0 ] + hfuaoawbo4x
. a0iu5wjm5i [ 1 ] * hfuaoawbo4x . a0iu5wjm5i [ 1 ] ) + hfuaoawbo4x .
a0iu5wjm5i [ 2 ] * hfuaoawbo4x . a0iu5wjm5i [ 2 ] ; if ( mnqgflhgig < 0.0 ) {
mnqgflhgig = - muDoubleScalarSqrt ( muDoubleScalarAbs ( mnqgflhgig ) ) ; }
else { mnqgflhgig = muDoubleScalarSqrt ( mnqgflhgig ) ; } if ( mnqgflhgig >
bjiazabmpo . NormalizeVector_maxzero_etigbudinl ) { afgi1z3nug [ 0 ] =
hfuaoawbo4x . a0iu5wjm5i [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . a0iu5wjm5i
[ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . a0iu5wjm5i [ 2 ] ; afgi1z3nug [ 3 ]
= mnqgflhgig ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . a0iu5wjm5i [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x . a0iu5wjm5i [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = hfuaoawbo4x . a0iu5wjm5i [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_loxooi2xox ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; omuhzl1dir = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . l4o4wkfjy0 + hfuaoawbo4x . jpj2vzl1x4 *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . an502njneh * plz0cvxflt [ 2 ] ; mnqgflhgig
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . kbgyhm1fgr +
hfuaoawbo4x . nhqvej5sjs * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . nj2t1zjkhc *
plz0cvxflt [ 2 ] , omuhzl1dir ) ; omuhzl1dir = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . cufy1px1rg + hfuaoawbo4x . krfsidb0qr *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . pfsox4kypy * plz0cvxflt [ 2 ] , omuhzl1dir
) ; mnqgflhgig += bjiazabmpo . Constant_Value_pxpcd5bk3c [ 0 ] ;
cdq11p3z0k_idx_1 = bjiazabmpo . Constant_Value_pxpcd5bk3c [ 1 ] + omuhzl1dir
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x .
le1qwtjsnv , & bjiazabmpo . RandomSource1_MeanVal_n5f3r1zvmv , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP_blin0jucej , 1 , ngg51vuviwy .
kexfoi1mkq , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
g3mboufpwo_idx_0 = mnqgflhgig + hfuaoawbo4x . le1qwtjsnv [ 0 ] ; if (
g3mboufpwo_idx_0 > bjiazabmpo . Saturation_UpperSat_c4xiqwgxlz ) {
g3mboufpwo_idx_0 = bjiazabmpo . Saturation_UpperSat_c4xiqwgxlz ; } else { if
( g3mboufpwo_idx_0 < bjiazabmpo . Saturation_LowerSat_pi2aujffw1 ) {
g3mboufpwo_idx_0 = bjiazabmpo . Saturation_LowerSat_pi2aujffw1 ; } }
g3mboufpwo_idx_1 = cdq11p3z0k_idx_1 + hfuaoawbo4x . le1qwtjsnv [ 1 ] ; if (
g3mboufpwo_idx_1 > bjiazabmpo . Saturation_UpperSat_c4xiqwgxlz ) {
g3mboufpwo_idx_1 = bjiazabmpo . Saturation_UpperSat_c4xiqwgxlz ; } else { if
( g3mboufpwo_idx_1 < bjiazabmpo . Saturation_LowerSat_pi2aujffw1 ) {
g3mboufpwo_idx_1 = bjiazabmpo . Saturation_LowerSat_pi2aujffw1 ; } }
hfuaoawbo4x . mwmca0qjz4 [ 0 ] = hfuaoawbo4x . abhvo30nqe [ 0 ] ; hfuaoawbo4x
. mwmca0qjz4 [ 1 ] = hfuaoawbo4x . abhvo30nqe [ 1 ] ; hfuaoawbo4x .
mwmca0qjz4 [ 2 ] = hfuaoawbo4x . abhvo30nqe [ 2 ] ; ln02qvajo4 = (
hfuaoawbo4x . mwmca0qjz4 [ 0 ] * hfuaoawbo4x . mwmca0qjz4 [ 0 ] + hfuaoawbo4x
. mwmca0qjz4 [ 1 ] * hfuaoawbo4x . mwmca0qjz4 [ 1 ] ) + hfuaoawbo4x .
mwmca0qjz4 [ 2 ] * hfuaoawbo4x . mwmca0qjz4 [ 2 ] ; if ( ln02qvajo4 < 0.0 ) {
ln02qvajo4 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( ln02qvajo4 ) ) ; }
else { ln02qvajo4 = muDoubleScalarSqrt ( ln02qvajo4 ) ; } if ( ln02qvajo4 >
bjiazabmpo . NormalizeVector_maxzero_mpxbpoayb2 ) { afgi1z3nug [ 0 ] =
hfuaoawbo4x . mwmca0qjz4 [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . mwmca0qjz4
[ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . mwmca0qjz4 [ 2 ] ; afgi1z3nug [ 3 ]
= ln02qvajo4 ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . mwmca0qjz4 [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x . mwmca0qjz4 [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = hfuaoawbo4x . mwmca0qjz4 [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_h114kk0gb0 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; mnqgflhgig = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . aev03jsiqx + hfuaoawbo4x . gawqt3r5dn *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . bcxyit2ic3 * plz0cvxflt [ 2 ] ; ln02qvajo4
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . oikscjj451 +
hfuaoawbo4x . ebprrb1pb4 * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . feykuvpqmt *
plz0cvxflt [ 2 ] , mnqgflhgig ) ; mnqgflhgig = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . lygujbzduh + hfuaoawbo4x . iuat0etg51 *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . aoeuzlyzik * plz0cvxflt [ 2 ] , mnqgflhgig
) ; ln02qvajo4 += bjiazabmpo . Constant_Value_a5pfdrbwx4 [ 0 ] ;
k11pr0hw5x_idx_1 = bjiazabmpo . Constant_Value_a5pfdrbwx4 [ 1 ] + mnqgflhgig
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x .
kvumw45neu , & bjiazabmpo . RandomSource1_MeanVal_kfynkp2waz , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP_dvuf3vyvl4 , 1 , ngg51vuviwy .
ejlbztojpt , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
nunwvlk05a_idx_0 = ln02qvajo4 + hfuaoawbo4x . kvumw45neu [ 0 ] ; if (
nunwvlk05a_idx_0 > bjiazabmpo . Saturation_UpperSat_mq4hmkw4m2 ) {
nunwvlk05a_idx_0 = bjiazabmpo . Saturation_UpperSat_mq4hmkw4m2 ; } else { if
( nunwvlk05a_idx_0 < bjiazabmpo . Saturation_LowerSat_dqoi00mxim ) {
nunwvlk05a_idx_0 = bjiazabmpo . Saturation_LowerSat_dqoi00mxim ; } }
nunwvlk05a_idx_1 = k11pr0hw5x_idx_1 + hfuaoawbo4x . kvumw45neu [ 1 ] ; if (
nunwvlk05a_idx_1 > bjiazabmpo . Saturation_UpperSat_mq4hmkw4m2 ) {
nunwvlk05a_idx_1 = bjiazabmpo . Saturation_UpperSat_mq4hmkw4m2 ; } else { if
( nunwvlk05a_idx_1 < bjiazabmpo . Saturation_LowerSat_dqoi00mxim ) {
nunwvlk05a_idx_1 = bjiazabmpo . Saturation_LowerSat_dqoi00mxim ; } }
hfuaoawbo4x . o3idhaeld0 [ 0 ] = hfuaoawbo4x . abhvo30nqe [ 0 ] ; hfuaoawbo4x
. o3idhaeld0 [ 1 ] = hfuaoawbo4x . abhvo30nqe [ 1 ] ; hfuaoawbo4x .
o3idhaeld0 [ 2 ] = hfuaoawbo4x . abhvo30nqe [ 2 ] ; ikxunumo3i = (
hfuaoawbo4x . o3idhaeld0 [ 0 ] * hfuaoawbo4x . o3idhaeld0 [ 0 ] + hfuaoawbo4x
. o3idhaeld0 [ 1 ] * hfuaoawbo4x . o3idhaeld0 [ 1 ] ) + hfuaoawbo4x .
o3idhaeld0 [ 2 ] * hfuaoawbo4x . o3idhaeld0 [ 2 ] ; if ( ikxunumo3i < 0.0 ) {
ikxunumo3i = - muDoubleScalarSqrt ( muDoubleScalarAbs ( ikxunumo3i ) ) ; }
else { ikxunumo3i = muDoubleScalarSqrt ( ikxunumo3i ) ; } if ( ikxunumo3i >
bjiazabmpo . NormalizeVector_maxzero_kqylmwb1gt ) { afgi1z3nug [ 0 ] =
hfuaoawbo4x . o3idhaeld0 [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . o3idhaeld0
[ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . o3idhaeld0 [ 2 ] ; afgi1z3nug [ 3 ]
= ikxunumo3i ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x . o3idhaeld0 [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x . o3idhaeld0 [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = hfuaoawbo4x . o3idhaeld0 [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = bjiazabmpo .
Constant_Value_kd13wd1tn5 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; ln02qvajo4 = (
plz0cvxflt [ 0 ] * hfuaoawbo4x . n1y1fp1tkl + hfuaoawbo4x . lnpqfpiwgf *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . kdwyr4lpv1 * plz0cvxflt [ 2 ] ; ikxunumo3i
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * hfuaoawbo4x . mvsw1v05hz +
hfuaoawbo4x . ipvurj0y1d * plz0cvxflt [ 1 ] ) + hfuaoawbo4x . p5aysueaot *
plz0cvxflt [ 2 ] , ln02qvajo4 ) ; ln02qvajo4 = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * hfuaoawbo4x . pv2okmnedn + hfuaoawbo4x . goqadosznk *
plz0cvxflt [ 1 ] ) + hfuaoawbo4x . i3vwzpv00l * plz0cvxflt [ 2 ] , ln02qvajo4
) ; ikxunumo3i += bjiazabmpo . Constant_Value_pb14rkkk1o [ 0 ] ;
oefbiund24_idx_1 = bjiazabmpo . Constant_Value_pb14rkkk1o [ 1 ] + ln02qvajo4
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x .
apdh45t2gv , & bjiazabmpo . RandomSource1_MeanVal_d1pxk3satq , 1 , &
bjiazabmpo . RandomSource1_VarianceRTP_cg3jlumacb , 1 , ngg51vuviwy .
l2nmbl4cbk , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
g3yqv3aaon_idx_1 = ikxunumo3i + hfuaoawbo4x . apdh45t2gv [ 0 ] ; if (
g3yqv3aaon_idx_1 > bjiazabmpo . Saturation_UpperSat_kiybxhvwme ) {
g3yqv3aaon_idx_1 = bjiazabmpo . Saturation_UpperSat_kiybxhvwme ; } else { if
( g3yqv3aaon_idx_1 < bjiazabmpo . Saturation_LowerSat_lktmm4bxfn ) {
g3yqv3aaon_idx_1 = bjiazabmpo . Saturation_LowerSat_lktmm4bxfn ; } }
jon1lcekfs_idx_0 = g3yqv3aaon_idx_1 * g3yqv3aaon_idx_1 ; clxyvdwwhl_idx_0 =
g3yqv3aaon_idx_1 ; g3yqv3aaon_idx_1 = oefbiund24_idx_1 + hfuaoawbo4x .
apdh45t2gv [ 1 ] ; if ( g3yqv3aaon_idx_1 > bjiazabmpo .
Saturation_UpperSat_kiybxhvwme ) { g3yqv3aaon_idx_1 = bjiazabmpo .
Saturation_UpperSat_kiybxhvwme ; } else { if ( g3yqv3aaon_idx_1 < bjiazabmpo
. Saturation_LowerSat_lktmm4bxfn ) { g3yqv3aaon_idx_1 = bjiazabmpo .
Saturation_LowerSat_lktmm4bxfn ; } } jcvgvp2mw3 [ 0 ] = fpykojxvqx [ 0 ] *
fpykojxvqx [ 0 ] + fpykojxvqx [ 1 ] * fpykojxvqx [ 1 ] ; jcvgvp2mw3 [ 1 ] =
pk0lw220uo_idx_0 * pk0lw220uo_idx_0 + pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ;
jcvgvp2mw3 [ 2 ] = ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 + ojyypbpaqp_idx_1 *
ojyypbpaqp_idx_1 ; jcvgvp2mw3 [ 3 ] = g3mboufpwo_idx_0 * g3mboufpwo_idx_0 +
g3mboufpwo_idx_1 * g3mboufpwo_idx_1 ; jcvgvp2mw3 [ 4 ] = nunwvlk05a_idx_0 *
nunwvlk05a_idx_0 + nunwvlk05a_idx_1 * nunwvlk05a_idx_1 ; jcvgvp2mw3 [ 5 ] =
g3yqv3aaon_idx_1 * g3yqv3aaon_idx_1 + jon1lcekfs_idx_0 ; if ( !
muDoubleScalarIsNaN ( jcvgvp2mw3 [ 0 ] ) ) { i = 1 ; } else { i = 0 ; k = 2 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( k < 7 ) ) { if ( !
muDoubleScalarIsNaN ( jcvgvp2mw3 [ k - 1 ] ) ) { i = k ; exitg1 = true ; }
else { k ++ ; } } } if ( i == 0 ) { i = 1 ; } else { hkwf2out3d = jcvgvp2mw3
[ i - 1 ] ; for ( k = i ; k < 6 ; k ++ ) { if ( hkwf2out3d > jcvgvp2mw3 [ k ]
) { hkwf2out3d = jcvgvp2mw3 [ k ] ; i = k + 1 ; } } } switch ( i ) { case 1 :
hfuaoawbo4x . dtl5bmf354 [ 0 ] = fpykojxvqx [ 0 ] ; hfuaoawbo4x . dtl5bmf354
[ 1 ] = fpykojxvqx [ 1 ] ; hfuaoawbo4x . nqhbc5nybn [ 0 ] = 1.0 ; hfuaoawbo4x
. nqhbc5nybn [ 1 ] = 0.0 ; hfuaoawbo4x . nqhbc5nybn [ 2 ] = 0.0 ; hfuaoawbo4x
. nqhbc5nybn [ 3 ] = 0.0 ; break ; case 2 : hfuaoawbo4x . dtl5bmf354 [ 0 ] =
pk0lw220uo_idx_0 ; hfuaoawbo4x . dtl5bmf354 [ 1 ] = pk0lw220uo_idx_1 ;
hfuaoawbo4x . nqhbc5nybn [ 0 ] = 0.70710678118654757 ; hfuaoawbo4x .
nqhbc5nybn [ 1 ] = 0.70710678118654746 ; hfuaoawbo4x . nqhbc5nybn [ 2 ] = 0.0
; hfuaoawbo4x . nqhbc5nybn [ 3 ] = 0.0 ; break ; case 3 : hfuaoawbo4x .
dtl5bmf354 [ 0 ] = ojyypbpaqp_idx_0 ; hfuaoawbo4x . dtl5bmf354 [ 1 ] =
ojyypbpaqp_idx_1 ; hfuaoawbo4x . nqhbc5nybn [ 0 ] = 6.123233995736766E-17 ;
hfuaoawbo4x . nqhbc5nybn [ 1 ] = 1.0 ; hfuaoawbo4x . nqhbc5nybn [ 2 ] = 0.0 ;
hfuaoawbo4x . nqhbc5nybn [ 3 ] = 0.0 ; break ; case 4 : hfuaoawbo4x .
dtl5bmf354 [ 0 ] = g3mboufpwo_idx_0 ; hfuaoawbo4x . dtl5bmf354 [ 1 ] =
g3mboufpwo_idx_1 ; hfuaoawbo4x . nqhbc5nybn [ 0 ] = 0.70710678118654757 ;
hfuaoawbo4x . nqhbc5nybn [ 1 ] = - 0.70710678118654746 ; hfuaoawbo4x .
nqhbc5nybn [ 2 ] = 0.0 ; hfuaoawbo4x . nqhbc5nybn [ 3 ] = 0.0 ; break ; case
5 : hfuaoawbo4x . dtl5bmf354 [ 0 ] = nunwvlk05a_idx_0 ; hfuaoawbo4x .
dtl5bmf354 [ 1 ] = nunwvlk05a_idx_1 ; hfuaoawbo4x . nqhbc5nybn [ 0 ] =
0.70710678118654757 ; hfuaoawbo4x . nqhbc5nybn [ 1 ] = 0.0 ; hfuaoawbo4x .
nqhbc5nybn [ 2 ] = 0.70710678118654746 ; hfuaoawbo4x . nqhbc5nybn [ 3 ] = 0.0
; break ; default : hfuaoawbo4x . dtl5bmf354 [ 0 ] = clxyvdwwhl_idx_0 ;
hfuaoawbo4x . dtl5bmf354 [ 1 ] = g3yqv3aaon_idx_1 ; hfuaoawbo4x . nqhbc5nybn
[ 0 ] = 0.70710678118654757 ; hfuaoawbo4x . nqhbc5nybn [ 1 ] = 0.0 ;
hfuaoawbo4x . nqhbc5nybn [ 2 ] = - 0.70710678118654746 ; hfuaoawbo4x .
nqhbc5nybn [ 3 ] = 0.0 ; break ; } hfuaoawbo4x . j13n0bzt32 [ 0 ] =
hfuaoawbo4x . otudxcmy5f [ 0 ] ; hfuaoawbo4x . j13n0bzt32 [ 1 ] = hfuaoawbo4x
. otudxcmy5f [ 1 ] ; hfuaoawbo4x . j13n0bzt32 [ 2 ] = hfuaoawbo4x .
otudxcmy5f [ 2 ] ; if ( bjiazabmpo . Enable1_Value ) { p1airozsub [ 0 ] =
hfuaoawbo4x . j13n0bzt32 [ 0 ] ; p1airozsub [ 1 ] = hfuaoawbo4x . j13n0bzt32
[ 1 ] ; p1airozsub [ 2 ] = hfuaoawbo4x . j13n0bzt32 [ 2 ] ; p1airozsub [ 3 ]
= hfuaoawbo4x . nqhbc5nybn [ 0 ] ; p1airozsub [ 4 ] = hfuaoawbo4x .
nqhbc5nybn [ 1 ] ; p1airozsub [ 5 ] = hfuaoawbo4x . nqhbc5nybn [ 2 ] ;
p1airozsub [ 6 ] = hfuaoawbo4x . nqhbc5nybn [ 3 ] ; hfuaoawbo4x . ilm1n3ayxr
= bjiazabmpo . BlockOrdering_Value ; memcpy ( & P [ 0 ] , & ngg51vuviwy .
al21e1yegq [ 0 ] , 49U * sizeof ( real_T ) ) ; tmp = true ; k = 0 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( k < 7 ) ) { i = 0 ; do { exitg2 = 0 ; if (
i <= k - 1 ) { if ( ! ( ngg51vuviwy . al21e1yegq [ 7 * k + i ] == 0.0 ) ) {
tmp = false ; exitg2 = 1 ; } else { i ++ ; } } else { k ++ ; exitg2 = 2 ; } }
while ( exitg2 == 0 ) ; if ( exitg2 == 1 ) { exitg1 = true ; } } if ( ! tmp )
{ for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { P [ i_p
+ 7 * k ] = ngg51vuviwy . al21e1yegq [ 7 * i_p + k ] ; } } qr_FYLMsjgk ( P ,
unusedU0 , R ) ; for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p = 0 ; i_p < 7 ; i_p
++ ) { P [ i_p + 7 * k ] = R [ 7 * i_p + k ] ; } } } for ( k = 0 ; k < 49 ; k
++ ) { pk0lw220uo_idx_0 = 0.0026457513110645908 * P [ k ] ; X2 [ k ] =
pk0lw220uo_idx_0 ; X2 [ k + 49 ] = - pk0lw220uo_idx_0 ; } Sy [ 0 ] = ( 1.0 -
hfuaoawbo4x . nqhbc5nybn [ 2 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ] * 2.0 ) -
hfuaoawbo4x . nqhbc5nybn [ 3 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] * 2.0 ; Sy [
3 ] = 2.0 * hfuaoawbo4x . nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ] +
2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [
6 ] = - 2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ]
+ 2.0 * hfuaoawbo4x . nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy
[ 1 ] = 2.0 * hfuaoawbo4x . nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ]
- 2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy
[ 4 ] = ( 1.0 - hfuaoawbo4x . nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 1
] * 2.0 ) - hfuaoawbo4x . nqhbc5nybn [ 3 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] *
2.0 ; Sy [ 7 ] = 2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] * hfuaoawbo4x .
nqhbc5nybn [ 1 ] + 2.0 * hfuaoawbo4x . nqhbc5nybn [ 2 ] * hfuaoawbo4x .
nqhbc5nybn [ 3 ] ; Sy [ 2 ] = 2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] *
hfuaoawbo4x . nqhbc5nybn [ 2 ] + 2.0 * hfuaoawbo4x . nqhbc5nybn [ 1 ] *
hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 5 ] = - 2.0 * hfuaoawbo4x . nqhbc5nybn
[ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 1 ] + 2.0 * hfuaoawbo4x . nqhbc5nybn [ 2 ]
* hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 8 ] = ( 1.0 - hfuaoawbo4x .
nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 1 ] * 2.0 ) - hfuaoawbo4x .
nqhbc5nybn [ 2 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ] * 2.0 ; for ( i = 0 ; i <
14 ; i ++ ) { for ( k = 0 ; k < 7 ; k ++ ) { X2 [ k + 7 * i ] += ngg51vuviwy
. fr1u3lpnkj [ k ] ; } b_I [ 0 ] = ( 1.0 - X2 [ 7 * i + 2 ] * X2 [ 7 * i + 2
] * 2.0 ) - X2 [ 7 * i + 3 ] * X2 [ 7 * i + 3 ] * 2.0 ; b_I [ 3 ] = X2 [ 7 *
i + 1 ] * 2.0 * X2 [ 7 * i + 2 ] + X2 [ 7 * i ] * 2.0 * X2 [ 7 * i + 3 ] ;
b_I [ 6 ] = X2 [ 7 * i + 1 ] * 2.0 * X2 [ 7 * i + 3 ] + X2 [ 7 * i ] * - 2.0
* X2 [ 7 * i + 2 ] ; b_I [ 1 ] = X2 [ 7 * i + 1 ] * 2.0 * X2 [ 7 * i + 2 ] -
X2 [ 7 * i ] * 2.0 * X2 [ 7 * i + 3 ] ; b_I [ 4 ] = ( 1.0 - X2 [ 7 * i + 1 ]
* X2 [ 7 * i + 1 ] * 2.0 ) - X2 [ 7 * i + 3 ] * X2 [ 7 * i + 3 ] * 2.0 ; b_I
[ 7 ] = X2 [ 7 * i + 2 ] * 2.0 * X2 [ 7 * i + 3 ] + X2 [ 7 * i ] * 2.0 * X2 [
7 * i + 1 ] ; b_I [ 2 ] = X2 [ 7 * i + 1 ] * 2.0 * X2 [ 7 * i + 3 ] + X2 [ 7
* i ] * 2.0 * X2 [ 7 * i + 2 ] ; b_I [ 5 ] = X2 [ 7 * i + 2 ] * 2.0 * X2 [ 7
* i + 3 ] + X2 [ 7 * i ] * - 2.0 * X2 [ 7 * i + 1 ] ; b_I [ 8 ] = ( 1.0 - X2
[ 7 * i + 1 ] * X2 [ 7 * i + 1 ] * 2.0 ) - X2 [ 7 * i + 2 ] * X2 [ 7 * i + 2
] * 2.0 ; for ( k = 0 ; k < 3 ; k ++ ) { plz0cvxflt [ k ] = 0.0 ; for ( i_p =
0 ; i_p < 3 ; i_p ++ ) { tmp_p [ k + 3 * i_p ] = 0.0 ; tmp_p [ k + 3 * i_p ]
+= b_I [ 3 * i_p ] * Sy [ k ] ; tmp_p [ k + 3 * i_p ] += b_I [ 3 * i_p + 1 ]
* Sy [ k + 3 ] ; tmp_p [ k + 3 * i_p ] += b_I [ 3 * i_p + 2 ] * Sy [ k + 6 ]
; plz0cvxflt [ k ] += tmp_p [ 3 * i_p + k ] * p1airozsub [ i_p ] ; } } Y2 [ i
<< 1 ] = muDoubleScalarAtan2 ( plz0cvxflt [ 0 ] , plz0cvxflt [ 2 ] ) ; Y2 [ (
i << 1 ) + 1 ] = muDoubleScalarAtan2 ( plz0cvxflt [ 1 ] , plz0cvxflt [ 2 ] )
; } Sy [ 0 ] = ( 1.0 - hfuaoawbo4x . nqhbc5nybn [ 2 ] * hfuaoawbo4x .
nqhbc5nybn [ 2 ] * 2.0 ) - hfuaoawbo4x . nqhbc5nybn [ 3 ] * hfuaoawbo4x .
nqhbc5nybn [ 3 ] * 2.0 ; Sy [ 3 ] = 2.0 * hfuaoawbo4x . nqhbc5nybn [ 1 ] *
hfuaoawbo4x . nqhbc5nybn [ 2 ] + 2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] *
hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 6 ] = - 2.0 * hfuaoawbo4x . nqhbc5nybn
[ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ] + 2.0 * hfuaoawbo4x . nqhbc5nybn [ 1 ]
* hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 1 ] = 2.0 * hfuaoawbo4x . nqhbc5nybn
[ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ] - 2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ]
* hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 4 ] = ( 1.0 - hfuaoawbo4x .
nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 1 ] * 2.0 ) - hfuaoawbo4x .
nqhbc5nybn [ 3 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] * 2.0 ; Sy [ 7 ] = 2.0 *
hfuaoawbo4x . nqhbc5nybn [ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 1 ] + 2.0 *
hfuaoawbo4x . nqhbc5nybn [ 2 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 2 ] =
2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ] + 2.0 *
hfuaoawbo4x . nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 5 ] =
- 2.0 * hfuaoawbo4x . nqhbc5nybn [ 0 ] * hfuaoawbo4x . nqhbc5nybn [ 1 ] + 2.0
* hfuaoawbo4x . nqhbc5nybn [ 2 ] * hfuaoawbo4x . nqhbc5nybn [ 3 ] ; Sy [ 8 ]
= ( 1.0 - hfuaoawbo4x . nqhbc5nybn [ 1 ] * hfuaoawbo4x . nqhbc5nybn [ 1 ] *
2.0 ) - hfuaoawbo4x . nqhbc5nybn [ 2 ] * hfuaoawbo4x . nqhbc5nybn [ 2 ] * 2.0
; b_I [ 0 ] = ( 1.0 - ngg51vuviwy . fr1u3lpnkj [ 2 ] * ngg51vuviwy .
fr1u3lpnkj [ 2 ] * 2.0 ) - ngg51vuviwy . fr1u3lpnkj [ 3 ] * ngg51vuviwy .
fr1u3lpnkj [ 3 ] * 2.0 ; b_I [ 3 ] = 2.0 * ngg51vuviwy . fr1u3lpnkj [ 1 ] *
ngg51vuviwy . fr1u3lpnkj [ 2 ] + 2.0 * ngg51vuviwy . fr1u3lpnkj [ 0 ] *
ngg51vuviwy . fr1u3lpnkj [ 3 ] ; b_I [ 6 ] = - 2.0 * ngg51vuviwy . fr1u3lpnkj
[ 0 ] * ngg51vuviwy . fr1u3lpnkj [ 2 ] + 2.0 * ngg51vuviwy . fr1u3lpnkj [ 1 ]
* ngg51vuviwy . fr1u3lpnkj [ 3 ] ; b_I [ 1 ] = 2.0 * ngg51vuviwy . fr1u3lpnkj
[ 1 ] * ngg51vuviwy . fr1u3lpnkj [ 2 ] - 2.0 * ngg51vuviwy . fr1u3lpnkj [ 0 ]
* ngg51vuviwy . fr1u3lpnkj [ 3 ] ; b_I [ 4 ] = ( 1.0 - ngg51vuviwy .
fr1u3lpnkj [ 1 ] * ngg51vuviwy . fr1u3lpnkj [ 1 ] * 2.0 ) - ngg51vuviwy .
fr1u3lpnkj [ 3 ] * ngg51vuviwy . fr1u3lpnkj [ 3 ] * 2.0 ; b_I [ 7 ] = 2.0 *
ngg51vuviwy . fr1u3lpnkj [ 0 ] * ngg51vuviwy . fr1u3lpnkj [ 1 ] + 2.0 *
ngg51vuviwy . fr1u3lpnkj [ 2 ] * ngg51vuviwy . fr1u3lpnkj [ 3 ] ; b_I [ 2 ] =
2.0 * ngg51vuviwy . fr1u3lpnkj [ 0 ] * ngg51vuviwy . fr1u3lpnkj [ 2 ] + 2.0 *
ngg51vuviwy . fr1u3lpnkj [ 1 ] * ngg51vuviwy . fr1u3lpnkj [ 3 ] ; b_I [ 5 ] =
- 2.0 * ngg51vuviwy . fr1u3lpnkj [ 0 ] * ngg51vuviwy . fr1u3lpnkj [ 1 ] + 2.0
* ngg51vuviwy . fr1u3lpnkj [ 2 ] * ngg51vuviwy . fr1u3lpnkj [ 3 ] ; b_I [ 8 ]
= ( 1.0 - ngg51vuviwy . fr1u3lpnkj [ 1 ] * ngg51vuviwy . fr1u3lpnkj [ 1 ] *
2.0 ) - ngg51vuviwy . fr1u3lpnkj [ 2 ] * ngg51vuviwy . fr1u3lpnkj [ 2 ] * 2.0
; for ( k = 0 ; k < 3 ; k ++ ) { plz0cvxflt [ k ] = 0.0 ; for ( i_p = 0 ; i_p
< 3 ; i_p ++ ) { tmp_p [ k + 3 * i_p ] = 0.0 ; tmp_p [ k + 3 * i_p ] += b_I [
3 * i_p ] * Sy [ k ] ; tmp_p [ k + 3 * i_p ] += b_I [ 3 * i_p + 1 ] * Sy [ k
+ 3 ] ; tmp_p [ k + 3 * i_p ] += b_I [ 3 * i_p + 2 ] * Sy [ k + 6 ] ;
plz0cvxflt [ k ] += tmp_p [ 3 * i_p + k ] * p1airozsub [ i_p ] ; } } tmp_e [
0 ] = 0.999996999998 ; tmp_e [ 1 ] = - 0.071428642857214286 ; tmp_i [ 0 ] =
muDoubleScalarAtan2 ( plz0cvxflt [ 0 ] , plz0cvxflt [ 2 ] ) ; tmp_i [ 1 ] =
muDoubleScalarAtan2 ( plz0cvxflt [ 1 ] , plz0cvxflt [ 2 ] ) ;
UTMeanCovSqrt_Nsd9dLEK ( Wmean , tmp_e , - 999999.0 , tmp_i , Y2 ,
ngg51vuviwy . fr1u3lpnkj , X2 , fpykojxvqx , ilxfkjmurx , Pxy ) ; afgi1z3nug
[ 1 ] = 0.0 ; afgi1z3nug [ 2 ] = 0.0 ; afgi1z3nug [ 0 ] = 1.0 ; afgi1z3nug [
3 ] = 1.0 ; qrFactor_yGbRjQTg ( afgi1z3nug , ilxfkjmurx , bjiazabmpo .
R1_Value ) ; for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p = 0 ; i_p < 7 ; i_p ++
) { ngg51vuviwy . al21e1yegq [ i_p + 7 * k ] = P [ 7 * i_p + k ] ; } } tmp_e
[ 0 ] = hfuaoawbo4x . dtl5bmf354 [ 0 ] - fpykojxvqx [ 0 ] ; tmp_e [ 1 ] =
hfuaoawbo4x . dtl5bmf354 [ 1 ] - fpykojxvqx [ 1 ] ;
UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0 ( ngg51vuviwy .
fr1u3lpnkj , ngg51vuviwy . al21e1yegq , tmp_e , Pxy , ilxfkjmurx ) ; if (
ssIsMajorTimeStep ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
srUpdateBC ( ngg51vuviwy . obgdl4vvts ) ; } } if ( bjiazabmpo . Enable2_Value
) { hfuaoawbo4x . lyxyg1om13 = hfuaoawbo4x . ilm1n3ayxr ; memcpy ( & P [ 0 ]
, & ngg51vuviwy . al21e1yegq [ 0 ] , 49U * sizeof ( real_T ) ) ; tmp = true ;
k = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k < 7 ) ) { i = 0 ; do {
exitg2 = 0 ; if ( i <= k - 1 ) { if ( ! ( ngg51vuviwy . al21e1yegq [ 7 * k +
i ] == 0.0 ) ) { tmp = false ; exitg2 = 1 ; } else { i ++ ; } } else { k ++ ;
exitg2 = 2 ; } } while ( exitg2 == 0 ) ; if ( exitg2 == 1 ) { exitg1 = true ;
} } if ( ! tmp ) { for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p = 0 ; i_p < 7 ;
i_p ++ ) { P [ i_p + 7 * k ] = ngg51vuviwy . al21e1yegq [ 7 * i_p + k ] ; } }
qr_FYLMsjgk ( P , unusedU0 , R ) ; for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p =
0 ; i_p < 7 ; i_p ++ ) { P [ i_p + 7 * k ] = R [ 7 * i_p + k ] ; } } } for (
k = 0 ; k < 49 ; k ++ ) { pk0lw220uo_idx_0 = 0.0026457513110645908 * P [ k ]
; X2 [ k ] = pk0lw220uo_idx_0 ; X2 [ k + 49 ] = - pk0lw220uo_idx_0 ; } for (
i = 0 ; i < 14 ; i ++ ) { for ( k = 0 ; k < 7 ; k ++ ) { X2 [ k + 7 * i ] +=
ngg51vuviwy . fr1u3lpnkj [ k ] ; } Y2 [ i << 1 ] = 0.0 ; Y2 [ ( i << 1 ) + 1
] = 0.0 ; } tmp_e [ 0 ] = 0.999996999998 ; tmp_e [ 1 ] = -
0.071428642857214286 ; tmp_i [ 0 ] = 0.0 ; tmp_i [ 1 ] = 0.0 ;
UTMeanCovSqrt_Nsd9dLEK ( Wmean , tmp_e , - 999999.0 , tmp_i , Y2 ,
ngg51vuviwy . fr1u3lpnkj , X2 , fpykojxvqx , ilxfkjmurx , Pxy ) ; afgi1z3nug
[ 1 ] = 0.0 ; afgi1z3nug [ 2 ] = 0.0 ; afgi1z3nug [ 0 ] = 1.0 ; afgi1z3nug [
3 ] = 1.0 ; qrFactor_yGbRjQTg ( afgi1z3nug , ilxfkjmurx , bjiazabmpo .
R2_Value ) ; for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p = 0 ; i_p < 7 ; i_p ++
) { ngg51vuviwy . al21e1yegq [ i_p + 7 * k ] = P [ 7 * i_p + k ] ; } } tmp_e
[ 0 ] = hfuaoawbo4x . ny1ut05nls [ 0 ] - fpykojxvqx [ 0 ] ; tmp_e [ 1 ] =
hfuaoawbo4x . ny1ut05nls [ 1 ] - fpykojxvqx [ 1 ] ;
UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0 ( ngg51vuviwy .
fr1u3lpnkj , ngg51vuviwy . al21e1yegq , tmp_e , Pxy , ilxfkjmurx ) ; if (
ssIsMajorTimeStep ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
srUpdateBC ( ngg51vuviwy . fp0vvmmarz ) ; } } } if ( ssIsSampleHit ( rtS , 2
, 0 ) ) { if ( bjiazabmpo . Enable3_Value ) { memcpy ( & P [ 0 ] , &
ngg51vuviwy . al21e1yegq [ 0 ] , 49U * sizeof ( real_T ) ) ; tmp = true ; k =
0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( k < 7 ) ) { i = 0 ; do {
exitg2 = 0 ; if ( i <= k - 1 ) { if ( ! ( ngg51vuviwy . al21e1yegq [ 7 * k +
i ] == 0.0 ) ) { tmp = false ; exitg2 = 1 ; } else { i ++ ; } } else { k ++ ;
exitg2 = 2 ; } } while ( exitg2 == 0 ) ; if ( exitg2 == 1 ) { exitg1 = true ;
} } if ( ! tmp ) { for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p = 0 ; i_p < 7 ;
i_p ++ ) { P [ i_p + 7 * k ] = ngg51vuviwy . al21e1yegq [ 7 * i_p + k ] ; } }
qr_FYLMsjgk ( P , unusedU0 , R ) ; for ( k = 0 ; k < 7 ; k ++ ) { for ( i_p =
0 ; i_p < 7 ; i_p ++ ) { P [ i_p + 7 * k ] = R [ 7 * i_p + k ] ; } } } for (
k = 0 ; k < 49 ; k ++ ) { pk0lw220uo_idx_0 = 0.0026457513110645908 * P [ k ]
; X2 [ k ] = pk0lw220uo_idx_0 ; X2 [ k + 49 ] = - pk0lw220uo_idx_0 ; } for (
i = 0 ; i < 14 ; i ++ ) { for ( k = 0 ; k < 7 ; k ++ ) { X2 [ k + 7 * i ] +=
ngg51vuviwy . fr1u3lpnkj [ k ] ; } Y2_p [ 3 * i ] = X2 [ 7 * i + 4 ] ; Y2_p [
3 * i + 1 ] = X2 [ 7 * i + 5 ] ; Y2_p [ 3 * i + 2 ] = X2 [ 7 * i + 6 ] ; }
tmp_e [ 0 ] = 0.999996999998 ; tmp_e [ 1 ] = - 0.071428642857214286 ; for (
i_p = 0 ; i_p < 3 ; i_p ++ ) { tmp_m [ i_p ] = ngg51vuviwy . fr1u3lpnkj [ i_p
+ 4 ] ; } UTMeanCovSqrt_LWsp5ZOJ ( Wmean , tmp_e , - 999999.0 , tmp_m , Y2_p
, ngg51vuviwy . fr1u3lpnkj , X2 , plz0cvxflt , Sy , K ) ; memset ( & b_I [ 0
] , 0 , 9U * sizeof ( real_T ) ) ; b_I [ 0 ] = 1.0 ; b_I [ 4 ] = 1.0 ; b_I [
8 ] = 1.0 ; qrFactor_qzIe5HvL ( b_I , Sy , bjiazabmpo . R3_Value ) ; for ( k
= 0 ; k < 7 ; k ++ ) { B [ 3 * k ] = K [ k ] ; B [ 3 * k + 1 ] = K [ k + 7 ]
; B [ 3 * k + 2 ] = K [ k + 14 ] ; } for ( i = 0 ; i < 7 ; i ++ ) { K [ 3 * i
] = B [ 3 * i ] ; K [ 3 * i + 1 ] = B [ 3 * i + 1 ] ; K [ 3 * i + 2 ] = B [ 3
* i + 2 ] ; } trisolve_tfSt187f ( Sy , K ) ; for ( i = 0 ; i < 7 ; i ++ ) { B
[ 3 * i ] = K [ 3 * i ] ; B [ 3 * i + 1 ] = K [ 3 * i + 1 ] ; B [ 3 * i + 2 ]
= K [ 3 * i + 2 ] ; } for ( k = 0 ; k < 3 ; k ++ ) { b_I [ 3 * k ] = Sy [ k ]
; b_I [ 3 * k + 1 ] = Sy [ k + 3 ] ; b_I [ 3 * k + 2 ] = Sy [ k + 6 ] ; }
trisolve_3230mWtQ ( b_I , B ) ; for ( k = 0 ; k < 3 ; k ++ ) { for ( i_p = 0
; i_p < 7 ; i_p ++ ) { K [ i_p + 7 * k ] = B [ 3 * i_p + k ] ; } } for ( k =
0 ; k < 7 ; k ++ ) { for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { ngg51vuviwy .
al21e1yegq [ i_p + 7 * k ] = P [ 7 * i_p + k ] ; } for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { B [ k + 7 * i_p ] = 0.0 ; B [ k + 7 * i_p ] += Sy [ 3 * i_p ] * K
[ k ] ; B [ k + 7 * i_p ] += Sy [ 3 * i_p + 1 ] * K [ k + 7 ] ; B [ k + 7 *
i_p ] += Sy [ 3 * i_p + 2 ] * K [ k + 14 ] ; } } cholUpdateFactor_jYBGg031 (
ngg51vuviwy . al21e1yegq , B ) ; dyhx1hjxb5_idx_0 -= plz0cvxflt [ 0 ] ;
dyhx1hjxb5_idx_1 -= plz0cvxflt [ 1 ] ; dyhx1hjxb5_idx_2 -= plz0cvxflt [ 2 ] ;
for ( k = 0 ; k < 7 ; k ++ ) { ngg51vuviwy . fr1u3lpnkj [ k ] += ( K [ k + 7
] * dyhx1hjxb5_idx_1 + K [ k ] * dyhx1hjxb5_idx_0 ) + K [ k + 14 ] *
dyhx1hjxb5_idx_2 ; } if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; srUpdateBC (
ngg51vuviwy . jmzxa5y3x1 ) ; } } for ( i = 0 ; i < 7 ; i ++ ) { hfuaoawbo4x .
bc4yufp30w [ i ] = ngg51vuviwy . fr1u3lpnkj [ i ] ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { ojyypbpaqp_idx_1 = ( hfuaoawbo4x . j13n0bzt32 [ 0 ] *
hfuaoawbo4x . j13n0bzt32 [ 0 ] + hfuaoawbo4x . j13n0bzt32 [ 1 ] * hfuaoawbo4x
. j13n0bzt32 [ 1 ] ) + hfuaoawbo4x . j13n0bzt32 [ 2 ] * hfuaoawbo4x .
j13n0bzt32 [ 2 ] ; if ( ojyypbpaqp_idx_1 < 0.0 ) { ojyypbpaqp_idx_1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( ojyypbpaqp_idx_1 ) ) ; } else {
ojyypbpaqp_idx_1 = muDoubleScalarSqrt ( ojyypbpaqp_idx_1 ) ; } if (
ojyypbpaqp_idx_1 > bjiazabmpo . NormalizeVector1_maxzero ) { afgi1z3nug [ 0 ]
= hfuaoawbo4x . j13n0bzt32 [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x .
j13n0bzt32 [ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . j13n0bzt32 [ 2 ] ;
afgi1z3nug [ 3 ] = ojyypbpaqp_idx_1 ; } else { afgi1z3nug [ 0 ] = hfuaoawbo4x
. j13n0bzt32 [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x . j13n0bzt32 [ 1 ]
* 0.0 ; afgi1z3nug [ 2 ] = hfuaoawbo4x . j13n0bzt32 [ 2 ] * 0.0 ; afgi1z3nug
[ 3 ] = bjiazabmpo . Constant_Value_h05qkqds1k ; } hfuaoawbo4x . gritwbr2l0 [
0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x . gritwbr2l0 [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x . gritwbr2l0 [ 2 ] =
afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; } Sy [ 0 ] = ( 1.0 - hfuaoawbo4x .
aq2ghaceft * hfuaoawbo4x . aq2ghaceft * 2.0 ) - hfuaoawbo4x . hdc0j3rnbp *
hfuaoawbo4x . hdc0j3rnbp * 2.0 ; Sy [ 3 ] = 2.0 * hfuaoawbo4x . bygzv3wnat *
hfuaoawbo4x . aq2ghaceft + 2.0 * hfuaoawbo4x . kvwgtntple * hfuaoawbo4x .
hdc0j3rnbp ; Sy [ 6 ] = - 2.0 * hfuaoawbo4x . kvwgtntple * hfuaoawbo4x .
aq2ghaceft + 2.0 * hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x . hdc0j3rnbp ; Sy [
1 ] = 2.0 * hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x . aq2ghaceft - 2.0 *
hfuaoawbo4x . kvwgtntple * hfuaoawbo4x . hdc0j3rnbp ; Sy [ 4 ] = ( 1.0 -
hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x . bygzv3wnat * 2.0 ) - hfuaoawbo4x .
hdc0j3rnbp * hfuaoawbo4x . hdc0j3rnbp * 2.0 ; Sy [ 7 ] = 2.0 * hfuaoawbo4x .
kvwgtntple * hfuaoawbo4x . bygzv3wnat + 2.0 * hfuaoawbo4x . aq2ghaceft *
hfuaoawbo4x . hdc0j3rnbp ; Sy [ 2 ] = 2.0 * hfuaoawbo4x . kvwgtntple *
hfuaoawbo4x . aq2ghaceft + 2.0 * hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x .
hdc0j3rnbp ; Sy [ 5 ] = - 2.0 * hfuaoawbo4x . kvwgtntple * hfuaoawbo4x .
bygzv3wnat + 2.0 * hfuaoawbo4x . aq2ghaceft * hfuaoawbo4x . hdc0j3rnbp ; Sy [
8 ] = ( 1.0 - hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x . bygzv3wnat * 2.0 ) -
hfuaoawbo4x . aq2ghaceft * hfuaoawbo4x . aq2ghaceft * 2.0 ; for ( k = 0 ; k <
3 ; k ++ ) { plz0cvxflt [ k ] = 0.0 ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
b_I [ k + 3 * i_p ] = 0.0 ; b_I [ k + 3 * i_p ] += Sy [ 3 * i_p ] * a [ k ] ;
b_I [ k + 3 * i_p ] += Sy [ 3 * i_p + 1 ] * a [ k + 3 ] ; b_I [ k + 3 * i_p ]
+= Sy [ 3 * i_p + 2 ] * a [ k + 6 ] ; plz0cvxflt [ k ] += b_I [ 3 * i_p + k ]
* hfuaoawbo4x . gritwbr2l0 [ i_p ] ; } } hfuaoawbo4x . iqajyqskal [ 0 ] =
muDoubleScalarAtan2 ( plz0cvxflt [ 0 ] , plz0cvxflt [ 2 ] ) - hfuaoawbo4x .
dtl5bmf354 [ 0 ] ; hfuaoawbo4x . iqajyqskal [ 1 ] = muDoubleScalarAtan2 (
plz0cvxflt [ 1 ] , plz0cvxflt [ 2 ] ) - hfuaoawbo4x . dtl5bmf354 [ 1 ] ;
hfuaoawbo4x . hwxwn5ouzg [ 0 ] = bjiazabmpo . Gain_Gain_acmfvzt2nt *
hfuaoawbo4x . nkn0lxavyg [ 0 ] ; hfuaoawbo4x . hwxwn5ouzg [ 1 ] = bjiazabmpo
. Gain_Gain_acmfvzt2nt * hfuaoawbo4x . nkn0lxavyg [ 1 ] ; hfuaoawbo4x .
hwxwn5ouzg [ 2 ] = bjiazabmpo . Gain_Gain_acmfvzt2nt * hfuaoawbo4x .
nkn0lxavyg [ 2 ] ; pk0lw220uo_idx_0 = ( hfuaoawbo4x . hwxwn5ouzg [ 0 ] *
hfuaoawbo4x . hwxwn5ouzg [ 0 ] + hfuaoawbo4x . hwxwn5ouzg [ 1 ] * hfuaoawbo4x
. hwxwn5ouzg [ 1 ] ) + hfuaoawbo4x . hwxwn5ouzg [ 2 ] * hfuaoawbo4x .
hwxwn5ouzg [ 2 ] ; if ( pk0lw220uo_idx_0 < 0.0 ) { hfuaoawbo4x . aznxfnvabf =
- muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; } else {
hfuaoawbo4x . aznxfnvabf = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { ngg51vuviwy . m0i4t4o4w4 = ( hfuaoawbo4x .
aznxfnvabf > bjiazabmpo . NormalizeVector_maxzero_idjlccn1tr ) ; } if (
ngg51vuviwy . m0i4t4o4w4 ) { afgi1z3nug [ 0 ] = hfuaoawbo4x . hwxwn5ouzg [ 0
] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . hwxwn5ouzg [ 1 ] ; afgi1z3nug [ 2 ] =
hfuaoawbo4x . hwxwn5ouzg [ 2 ] ; afgi1z3nug [ 3 ] = hfuaoawbo4x . aznxfnvabf
; } else { hfuaoawbo4x . klui4qywrw [ 0 ] = hfuaoawbo4x . hwxwn5ouzg [ 0 ] *
0.0 ; afgi1z3nug [ 0 ] = hfuaoawbo4x . klui4qywrw [ 0 ] ; hfuaoawbo4x .
klui4qywrw [ 1 ] = hfuaoawbo4x . hwxwn5ouzg [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] =
hfuaoawbo4x . klui4qywrw [ 1 ] ; hfuaoawbo4x . klui4qywrw [ 2 ] = hfuaoawbo4x
. hwxwn5ouzg [ 2 ] * 0.0 ; afgi1z3nug [ 2 ] = hfuaoawbo4x . klui4qywrw [ 2 ]
; afgi1z3nug [ 3 ] = bjiazabmpo . Constant_Value_fjyq3eus5i ; }
pk0lw220uo_idx_0 = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x .
hypth4pdun [ 0 ] = pk0lw220uo_idx_0 ; plz0cvxflt [ 0 ] = pk0lw220uo_idx_0 ;
pk0lw220uo_idx_0 = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x .
hypth4pdun [ 1 ] = pk0lw220uo_idx_0 ; plz0cvxflt [ 1 ] = pk0lw220uo_idx_0 ;
pk0lw220uo_idx_0 = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x .
hypth4pdun [ 2 ] = pk0lw220uo_idx_0 ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
ngg51vuviwy . bsrppkoaqa != 0 ) { o1yff13vlj3 . ceu1xu3gg2 [ 0 ] =
hfuaoawbo4x . kox0yk51ix [ 0 ] ; o1yff13vlj3 . ceu1xu3gg2 [ 1 ] = hfuaoawbo4x
. kox0yk51ix [ 1 ] ; o1yff13vlj3 . ceu1xu3gg2 [ 2 ] = hfuaoawbo4x .
kox0yk51ix [ 2 ] ; } hfuaoawbo4x . djfx2ozwz1 [ 0 ] = o1yff13vlj3 .
ceu1xu3gg2 [ 0 ] ; hfuaoawbo4x . djfx2ozwz1 [ 1 ] = o1yff13vlj3 . ceu1xu3gg2
[ 1 ] ; hfuaoawbo4x . djfx2ozwz1 [ 2 ] = o1yff13vlj3 . ceu1xu3gg2 [ 2 ] ; }
else { hfuaoawbo4x . djfx2ozwz1 [ 0 ] = o1yff13vlj3 . ceu1xu3gg2 [ 0 ] ;
hfuaoawbo4x . djfx2ozwz1 [ 1 ] = o1yff13vlj3 . ceu1xu3gg2 [ 1 ] ; hfuaoawbo4x
. djfx2ozwz1 [ 2 ] = o1yff13vlj3 . ceu1xu3gg2 [ 2 ] ; } pk0lw220uo_idx_1 = (
hfuaoawbo4x . djfx2ozwz1 [ 0 ] * hfuaoawbo4x . djfx2ozwz1 [ 0 ] + hfuaoawbo4x
. djfx2ozwz1 [ 1 ] * hfuaoawbo4x . djfx2ozwz1 [ 1 ] ) + hfuaoawbo4x .
djfx2ozwz1 [ 2 ] * hfuaoawbo4x . djfx2ozwz1 [ 2 ] ; if ( pk0lw220uo_idx_1 <
0.0 ) { hfuaoawbo4x . chstcquajb = - muDoubleScalarSqrt ( muDoubleScalarAbs (
pk0lw220uo_idx_1 ) ) ; } else { hfuaoawbo4x . chstcquajb = muDoubleScalarSqrt
( pk0lw220uo_idx_1 ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { ngg51vuviwy .
bitl4izqts = ( hfuaoawbo4x . chstcquajb > bjiazabmpo .
NormalizeVector1_maxzero_pe3bb51lb3 ) ; } if ( ngg51vuviwy . bitl4izqts ) {
afgi1z3nug [ 0 ] = hfuaoawbo4x . djfx2ozwz1 [ 0 ] ; afgi1z3nug [ 1 ] =
hfuaoawbo4x . djfx2ozwz1 [ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . djfx2ozwz1
[ 2 ] ; afgi1z3nug [ 3 ] = hfuaoawbo4x . chstcquajb ; } else { hfuaoawbo4x .
kxzub5nxhq [ 0 ] = hfuaoawbo4x . djfx2ozwz1 [ 0 ] * 0.0 ; afgi1z3nug [ 0 ] =
hfuaoawbo4x . kxzub5nxhq [ 0 ] ; hfuaoawbo4x . kxzub5nxhq [ 1 ] = hfuaoawbo4x
. djfx2ozwz1 [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x . kxzub5nxhq [ 1 ]
; hfuaoawbo4x . kxzub5nxhq [ 2 ] = hfuaoawbo4x . djfx2ozwz1 [ 2 ] * 0.0 ;
afgi1z3nug [ 2 ] = hfuaoawbo4x . kxzub5nxhq [ 2 ] ; afgi1z3nug [ 3 ] =
bjiazabmpo . Constant_Value_cpj53jxfos ; } dyhx1hjxb5_idx_0 = afgi1z3nug [ 0
] / afgi1z3nug [ 3 ] ; dyhx1hjxb5_idx_1 = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ]
; dyhx1hjxb5_idx_2 = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x .
mkltislhcr [ 0 ] = plz0cvxflt [ 1 ] * dyhx1hjxb5_idx_2 - pk0lw220uo_idx_0 *
dyhx1hjxb5_idx_1 ; hfuaoawbo4x . mkltislhcr [ 1 ] = pk0lw220uo_idx_0 *
dyhx1hjxb5_idx_0 - plz0cvxflt [ 0 ] * dyhx1hjxb5_idx_2 ; hfuaoawbo4x .
mkltislhcr [ 2 ] = plz0cvxflt [ 0 ] * dyhx1hjxb5_idx_1 - plz0cvxflt [ 1 ] *
dyhx1hjxb5_idx_0 ; hfuaoawbo4x . pqempn25ab [ 0 ] = hfuaoawbo4x . mkltislhcr
[ 1 ] * pk0lw220uo_idx_0 - hfuaoawbo4x . mkltislhcr [ 2 ] * plz0cvxflt [ 1 ]
; hfuaoawbo4x . pqempn25ab [ 1 ] = hfuaoawbo4x . mkltislhcr [ 2 ] *
plz0cvxflt [ 0 ] - hfuaoawbo4x . mkltislhcr [ 0 ] * pk0lw220uo_idx_0 ;
hfuaoawbo4x . pqempn25ab [ 2 ] = hfuaoawbo4x . mkltislhcr [ 0 ] * plz0cvxflt
[ 1 ] - hfuaoawbo4x . mkltislhcr [ 1 ] * plz0cvxflt [ 0 ] ; ojyypbpaqp_idx_0
= ( hfuaoawbo4x . pqempn25ab [ 0 ] * hfuaoawbo4x . pqempn25ab [ 0 ] +
hfuaoawbo4x . pqempn25ab [ 1 ] * hfuaoawbo4x . pqempn25ab [ 1 ] ) +
hfuaoawbo4x . pqempn25ab [ 2 ] * hfuaoawbo4x . pqempn25ab [ 2 ] ; if (
ojyypbpaqp_idx_0 < 0.0 ) { hfuaoawbo4x . jcrf3ejwt5 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ojyypbpaqp_idx_0 ) ) ; } else { hfuaoawbo4x . jcrf3ejwt5
= muDoubleScalarSqrt ( ojyypbpaqp_idx_0 ) ; } if ( ssIsMajorTimeStep ( rtS )
) { ngg51vuviwy . i4bzza0yhz = ( hfuaoawbo4x . jcrf3ejwt5 > bjiazabmpo .
NormalizeVector3_maxzero ) ; } if ( ngg51vuviwy . i4bzza0yhz ) { afgi1z3nug [
0 ] = hfuaoawbo4x . pqempn25ab [ 0 ] ; afgi1z3nug [ 1 ] = hfuaoawbo4x .
pqempn25ab [ 1 ] ; afgi1z3nug [ 2 ] = hfuaoawbo4x . pqempn25ab [ 2 ] ;
afgi1z3nug [ 3 ] = hfuaoawbo4x . jcrf3ejwt5 ; } else { hfuaoawbo4x .
ccotai5ab1 [ 0 ] = hfuaoawbo4x . pqempn25ab [ 0 ] * 0.0 ; afgi1z3nug [ 0 ] =
hfuaoawbo4x . ccotai5ab1 [ 0 ] ; hfuaoawbo4x . ccotai5ab1 [ 1 ] = hfuaoawbo4x
. pqempn25ab [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] = hfuaoawbo4x . ccotai5ab1 [ 1 ]
; hfuaoawbo4x . ccotai5ab1 [ 2 ] = hfuaoawbo4x . pqempn25ab [ 2 ] * 0.0 ;
afgi1z3nug [ 2 ] = hfuaoawbo4x . ccotai5ab1 [ 2 ] ; afgi1z3nug [ 3 ] =
bjiazabmpo . Constant_Value_ouyamitdob ; } hfuaoawbo4x . hypth4pdun [ 3 ] =
afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x . hypth4pdun [ 4 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x . hypth4pdun [ 5 ] =
afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; g3mboufpwo_idx_0 = ( hfuaoawbo4x .
mkltislhcr [ 0 ] * hfuaoawbo4x . mkltislhcr [ 0 ] + hfuaoawbo4x . mkltislhcr
[ 1 ] * hfuaoawbo4x . mkltislhcr [ 1 ] ) + hfuaoawbo4x . mkltislhcr [ 2 ] *
hfuaoawbo4x . mkltislhcr [ 2 ] ; if ( g3mboufpwo_idx_0 < 0.0 ) { hfuaoawbo4x
. bcu4ylgp31 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( g3mboufpwo_idx_0 )
) ; } else { hfuaoawbo4x . bcu4ylgp31 = muDoubleScalarSqrt ( g3mboufpwo_idx_0
) ; } if ( ssIsMajorTimeStep ( rtS ) ) { ngg51vuviwy . pwucmqisoh = (
hfuaoawbo4x . bcu4ylgp31 > bjiazabmpo . NormalizeVector4_maxzero ) ; } if (
ngg51vuviwy . pwucmqisoh ) { afgi1z3nug [ 0 ] = hfuaoawbo4x . mkltislhcr [ 0
] ; afgi1z3nug [ 1 ] = hfuaoawbo4x . mkltislhcr [ 1 ] ; afgi1z3nug [ 2 ] =
hfuaoawbo4x . mkltislhcr [ 2 ] ; afgi1z3nug [ 3 ] = hfuaoawbo4x . bcu4ylgp31
; } else { hfuaoawbo4x . plvraarov5 [ 0 ] = hfuaoawbo4x . mkltislhcr [ 0 ] *
0.0 ; afgi1z3nug [ 0 ] = hfuaoawbo4x . plvraarov5 [ 0 ] ; hfuaoawbo4x .
plvraarov5 [ 1 ] = hfuaoawbo4x . mkltislhcr [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] =
hfuaoawbo4x . plvraarov5 [ 1 ] ; hfuaoawbo4x . plvraarov5 [ 2 ] = hfuaoawbo4x
. mkltislhcr [ 2 ] * 0.0 ; afgi1z3nug [ 2 ] = hfuaoawbo4x . plvraarov5 [ 2 ]
; afgi1z3nug [ 3 ] = bjiazabmpo . Constant_Value_guhbgdhd5y ; }
dyhx1hjxb5_idx_2 = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x .
hypth4pdun [ 6 ] = dyhx1hjxb5_idx_2 ; dyhx1hjxb5_idx_0 = dyhx1hjxb5_idx_2 ;
dyhx1hjxb5_idx_2 = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x .
hypth4pdun [ 7 ] = dyhx1hjxb5_idx_2 ; dyhx1hjxb5_idx_1 = dyhx1hjxb5_idx_2 ;
dyhx1hjxb5_idx_2 = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hfuaoawbo4x .
hypth4pdun [ 8 ] = dyhx1hjxb5_idx_2 ; hfuaoawbo4x . du15nl3tzh = (
hfuaoawbo4x . hypth4pdun [ 0 ] + hfuaoawbo4x . hypth4pdun [ 4 ] ) +
hfuaoawbo4x . hypth4pdun [ 8 ] ; rtPrevAction = ngg51vuviwy . bq4i23vlh3 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! ( hfuaoawbo4x .
du15nl3tzh > 0.0 ) ; ngg51vuviwy . bq4i23vlh3 = rtAction ; } else { rtAction
= ngg51vuviwy . bq4i23vlh3 ; } if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( ngg51vuviwy . fg3qvdmgz4 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } ngg51vuviwy .
fg3qvdmgz4 = - 1 ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } pk0lw220uo_idx_0 =
hfuaoawbo4x . du15nl3tzh + bjiazabmpo . Constant_Value_czyi20hi44 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . dbbrzhnfld != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . dbbrzhnfld
= 0 ; } pk0lw220uo_idx_1 = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ; } else
if ( pk0lw220uo_idx_0 < 0.0 ) { pk0lw220uo_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; ngg51vuviwy . dbbrzhnfld = 1 ; }
else { pk0lw220uo_idx_1 = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ; }
hfuaoawbo4x . my3qvtobl0 [ 0 ] = bjiazabmpo . Gain_Gain * pk0lw220uo_idx_1 ;
pk0lw220uo_idx_0 = bjiazabmpo . Gain1_Gain * pk0lw220uo_idx_1 ; hfuaoawbo4x .
my3qvtobl0 [ 1 ] = ( hfuaoawbo4x . hypth4pdun [ 7 ] - hfuaoawbo4x .
hypth4pdun [ 5 ] ) / pk0lw220uo_idx_0 ; hfuaoawbo4x . my3qvtobl0 [ 2 ] = (
hfuaoawbo4x . hypth4pdun [ 2 ] - hfuaoawbo4x . hypth4pdun [ 6 ] ) /
pk0lw220uo_idx_0 ; hfuaoawbo4x . my3qvtobl0 [ 3 ] = ( hfuaoawbo4x .
hypth4pdun [ 3 ] - hfuaoawbo4x . hypth4pdun [ 1 ] ) / pk0lw220uo_idx_0 ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( ngg51vuviwy . hrhkqhh3g2 ) ; }
break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS ,
0 ) != ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } rtPrevAction = ngg51vuviwy . fg3qvdmgz4 ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( ( hfuaoawbo4x . hypth4pdun [ 4 ] > hfuaoawbo4x . hypth4pdun
[ 0 ] ) && ( hfuaoawbo4x . hypth4pdun [ 4 ] > hfuaoawbo4x . hypth4pdun [ 8 ]
) ) { rtAction = 0 ; } else if ( hfuaoawbo4x . hypth4pdun [ 8 ] > hfuaoawbo4x
. hypth4pdun [ 0 ] ) { rtAction = 1 ; } else { rtAction = 2 ; } ngg51vuviwy .
fg3qvdmgz4 = rtAction ; } else { rtAction = ngg51vuviwy . fg3qvdmgz4 ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } pk0lw220uo_idx_0 = (
( hfuaoawbo4x . hypth4pdun [ 4 ] - hfuaoawbo4x . hypth4pdun [ 0 ] ) -
hfuaoawbo4x . hypth4pdun [ 8 ] ) + bjiazabmpo . Constant_Value_glskcdmgi0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . flka3xd0vd != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . flka3xd0vd
= 0 ; } hfuaoawbo4x . its1kwdpoq = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ;
} else if ( pk0lw220uo_idx_0 < 0.0 ) { hfuaoawbo4x . its1kwdpoq = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; ngg51vuviwy .
flka3xd0vd = 1 ; } else { hfuaoawbo4x . its1kwdpoq = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } hfuaoawbo4x . my3qvtobl0 [ 2 ] = bjiazabmpo .
Gain_Gain_ffyvgqn0t3 * hfuaoawbo4x . its1kwdpoq ; if ( ssIsMajorTimeStep (
rtS ) ) { ngg51vuviwy . myjsbcl3ak = ( hfuaoawbo4x . its1kwdpoq != 0.0 ) ; }
if ( ngg51vuviwy . myjsbcl3ak ) { nunwvlk05a_idx_0 = bjiazabmpo .
Constant1_Value ; pk0lw220uo_idx_0 = hfuaoawbo4x . its1kwdpoq ; } else {
nunwvlk05a_idx_0 = bjiazabmpo . Constant2_Value [ 0 ] ; pk0lw220uo_idx_0 =
bjiazabmpo . Constant2_Value [ 1 ] ; } pk0lw220uo_idx_0 = nunwvlk05a_idx_0 /
pk0lw220uo_idx_0 ; hfuaoawbo4x . my3qvtobl0 [ 1 ] = ( hfuaoawbo4x .
hypth4pdun [ 1 ] + hfuaoawbo4x . hypth4pdun [ 3 ] ) * pk0lw220uo_idx_0 *
bjiazabmpo . Gain1_Gain_hf2zl5hf11 ; hfuaoawbo4x . my3qvtobl0 [ 3 ] = (
hfuaoawbo4x . hypth4pdun [ 5 ] + hfuaoawbo4x . hypth4pdun [ 7 ] ) *
pk0lw220uo_idx_0 * bjiazabmpo . Gain3_Gain ; hfuaoawbo4x . my3qvtobl0 [ 0 ] =
( hfuaoawbo4x . hypth4pdun [ 2 ] - hfuaoawbo4x . hypth4pdun [ 6 ] ) *
pk0lw220uo_idx_0 * bjiazabmpo . Gain4_Gain ; if ( ssIsMajorTimeStep ( rtS ) )
{ srUpdateBC ( ngg51vuviwy . gudujy1ejr ) ; } break ; case 1 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } pk0lw220uo_idx_0 = (
( hfuaoawbo4x . hypth4pdun [ 8 ] - hfuaoawbo4x . hypth4pdun [ 0 ] ) -
hfuaoawbo4x . hypth4pdun [ 4 ] ) + bjiazabmpo . Constant_Value_p5m1vauvdr ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . k30q4yjdty != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . k30q4yjdty
= 0 ; } hfuaoawbo4x . cvmohjxrdw = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ;
} else if ( pk0lw220uo_idx_0 < 0.0 ) { hfuaoawbo4x . cvmohjxrdw = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; ngg51vuviwy .
k30q4yjdty = 1 ; } else { hfuaoawbo4x . cvmohjxrdw = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } hfuaoawbo4x . my3qvtobl0 [ 3 ] = bjiazabmpo .
Gain_Gain_ev442xw5g3 * hfuaoawbo4x . cvmohjxrdw ; if ( ssIsMajorTimeStep (
rtS ) ) { ngg51vuviwy . dzb2vyantf = ( hfuaoawbo4x . cvmohjxrdw != 0.0 ) ; }
if ( ngg51vuviwy . dzb2vyantf ) { nunwvlk05a_idx_0 = bjiazabmpo .
Constant1_Value_ius3i4otxm ; pk0lw220uo_idx_0 = hfuaoawbo4x . cvmohjxrdw ; }
else { nunwvlk05a_idx_0 = bjiazabmpo . Constant2_Value_j5v1xvugrn [ 0 ] ;
pk0lw220uo_idx_0 = bjiazabmpo . Constant2_Value_j5v1xvugrn [ 1 ] ; }
pk0lw220uo_idx_0 = nunwvlk05a_idx_0 / pk0lw220uo_idx_0 ; hfuaoawbo4x .
my3qvtobl0 [ 1 ] = ( hfuaoawbo4x . hypth4pdun [ 2 ] + hfuaoawbo4x .
hypth4pdun [ 6 ] ) * pk0lw220uo_idx_0 * bjiazabmpo . Gain1_Gain_bctn5kthma ;
hfuaoawbo4x . my3qvtobl0 [ 2 ] = ( hfuaoawbo4x . hypth4pdun [ 5 ] +
hfuaoawbo4x . hypth4pdun [ 7 ] ) * pk0lw220uo_idx_0 * bjiazabmpo . Gain2_Gain
; hfuaoawbo4x . my3qvtobl0 [ 0 ] = ( hfuaoawbo4x . hypth4pdun [ 3 ] -
hfuaoawbo4x . hypth4pdun [ 1 ] ) * pk0lw220uo_idx_0 * bjiazabmpo .
Gain3_Gain_iezjytb1ib ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
ngg51vuviwy . jeex0coj3h ) ; } break ; case 2 : if ( rtAction != rtPrevAction
) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } pk0lw220uo_idx_0 = (
( hfuaoawbo4x . hypth4pdun [ 0 ] - hfuaoawbo4x . hypth4pdun [ 4 ] ) -
hfuaoawbo4x . hypth4pdun [ 8 ] ) + bjiazabmpo . Constant_Value_m2h11to3lk ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . nnokrisejy != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . nnokrisejy
= 0 ; } hfuaoawbo4x . punl0cw1in = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ;
} else if ( pk0lw220uo_idx_0 < 0.0 ) { hfuaoawbo4x . punl0cw1in = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; ngg51vuviwy .
nnokrisejy = 1 ; } else { hfuaoawbo4x . punl0cw1in = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } hfuaoawbo4x . my3qvtobl0 [ 1 ] = bjiazabmpo .
Gain_Gain_cqlkw4p3g1 * hfuaoawbo4x . punl0cw1in ; if ( ssIsMajorTimeStep (
rtS ) ) { ngg51vuviwy . fujlvkpypa = ( hfuaoawbo4x . punl0cw1in != 0.0 ) ; }
if ( ngg51vuviwy . fujlvkpypa ) { nunwvlk05a_idx_0 = bjiazabmpo .
Constant1_Value_c4wnv34dlm ; pk0lw220uo_idx_0 = hfuaoawbo4x . punl0cw1in ; }
else { nunwvlk05a_idx_0 = bjiazabmpo . Constant2_Value_i3cnjpylpr [ 0 ] ;
pk0lw220uo_idx_0 = bjiazabmpo . Constant2_Value_i3cnjpylpr [ 1 ] ; }
pk0lw220uo_idx_0 = nunwvlk05a_idx_0 / pk0lw220uo_idx_0 ; hfuaoawbo4x .
my3qvtobl0 [ 2 ] = ( hfuaoawbo4x . hypth4pdun [ 1 ] + hfuaoawbo4x .
hypth4pdun [ 3 ] ) * pk0lw220uo_idx_0 * bjiazabmpo . Gain1_Gain_ij2znuz5co ;
hfuaoawbo4x . my3qvtobl0 [ 3 ] = ( hfuaoawbo4x . hypth4pdun [ 2 ] +
hfuaoawbo4x . hypth4pdun [ 6 ] ) * pk0lw220uo_idx_0 * bjiazabmpo .
Gain2_Gain_medwk1da45 ; hfuaoawbo4x . my3qvtobl0 [ 0 ] = ( hfuaoawbo4x .
hypth4pdun [ 7 ] - hfuaoawbo4x . hypth4pdun [ 5 ] ) * pk0lw220uo_idx_0 *
bjiazabmpo . Gain3_Gain_j50dplxsob ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( ngg51vuviwy . picfdcdfap ) ; } break ; } if ( ssIsMajorTimeStep
( rtS ) ) { srUpdateBC ( ngg51vuviwy . bdbstwmumv ) ; } break ; }
pk0lw220uo_idx_1 = ( ( hfuaoawbo4x . my3qvtobl0 [ 0 ] * hfuaoawbo4x .
my3qvtobl0 [ 0 ] + hfuaoawbo4x . my3qvtobl0 [ 1 ] * hfuaoawbo4x . my3qvtobl0
[ 1 ] ) + hfuaoawbo4x . my3qvtobl0 [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 2 ] ) +
hfuaoawbo4x . my3qvtobl0 [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 3 ] ;
ojyypbpaqp_idx_1 = ( ( ( hfuaoawbo4x . bc4yufp30w [ 0 ] * hfuaoawbo4x .
my3qvtobl0 [ 0 ] + hfuaoawbo4x . bc4yufp30w [ 1 ] * hfuaoawbo4x . my3qvtobl0
[ 1 ] ) + hfuaoawbo4x . bc4yufp30w [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 2 ] ) +
hfuaoawbo4x . bc4yufp30w [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 3 ] ) /
pk0lw220uo_idx_1 ; g3mboufpwo_idx_0 = ( ( ( hfuaoawbo4x . bc4yufp30w [ 1 ] *
hfuaoawbo4x . my3qvtobl0 [ 0 ] - hfuaoawbo4x . bc4yufp30w [ 0 ] * hfuaoawbo4x
. my3qvtobl0 [ 1 ] ) + hfuaoawbo4x . bc4yufp30w [ 2 ] * hfuaoawbo4x .
my3qvtobl0 [ 3 ] ) - hfuaoawbo4x . bc4yufp30w [ 3 ] * hfuaoawbo4x .
my3qvtobl0 [ 2 ] ) / pk0lw220uo_idx_1 ; pk0lw220uo_idx_0 = ( ( ( hfuaoawbo4x
. bc4yufp30w [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 0 ] - hfuaoawbo4x .
bc4yufp30w [ 0 ] * hfuaoawbo4x . my3qvtobl0 [ 2 ] ) - hfuaoawbo4x .
bc4yufp30w [ 1 ] * hfuaoawbo4x . my3qvtobl0 [ 3 ] ) + hfuaoawbo4x .
bc4yufp30w [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 1 ] ) / pk0lw220uo_idx_1 ;
pk0lw220uo_idx_1 = ( ( ( hfuaoawbo4x . bc4yufp30w [ 1 ] * hfuaoawbo4x .
my3qvtobl0 [ 2 ] - hfuaoawbo4x . bc4yufp30w [ 0 ] * hfuaoawbo4x . my3qvtobl0
[ 3 ] ) - hfuaoawbo4x . bc4yufp30w [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 1 ] ) +
hfuaoawbo4x . bc4yufp30w [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 0 ] ) /
pk0lw220uo_idx_1 ; ikxunumo3i = ( ( ojyypbpaqp_idx_1 * ojyypbpaqp_idx_1 +
g3mboufpwo_idx_0 * g3mboufpwo_idx_0 ) + pk0lw220uo_idx_0 * pk0lw220uo_idx_0 )
+ pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if
( ngg51vuviwy . a3ekypkvyd != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . a3ekypkvyd
= 0 ; } ojyypbpaqp_idx_0 = muDoubleScalarSqrt ( ikxunumo3i ) ; } else if (
ikxunumo3i < 0.0 ) { ojyypbpaqp_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ikxunumo3i ) ) ; ngg51vuviwy . a3ekypkvyd = 1 ; } else {
ojyypbpaqp_idx_0 = muDoubleScalarSqrt ( ikxunumo3i ) ; } ojyypbpaqp_idx_1 /=
ojyypbpaqp_idx_0 ; g3mboufpwo_idx_0 /= ojyypbpaqp_idx_0 ; pk0lw220uo_idx_0 /=
ojyypbpaqp_idx_0 ; pk0lw220uo_idx_1 /= ojyypbpaqp_idx_0 ; hfuaoawbo4x .
cjccrkvyno [ 0 ] = muDoubleScalarAtan2 ( ( g3mboufpwo_idx_0 *
pk0lw220uo_idx_0 + ojyypbpaqp_idx_1 * pk0lw220uo_idx_1 ) * 2.0 , ( (
ojyypbpaqp_idx_1 * ojyypbpaqp_idx_1 + g3mboufpwo_idx_0 * g3mboufpwo_idx_0 ) -
pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ) - pk0lw220uo_idx_1 * pk0lw220uo_idx_1 )
; hfuaoawbo4x . njop3q5gx2 = ( g3mboufpwo_idx_0 * pk0lw220uo_idx_1 -
ojyypbpaqp_idx_1 * pk0lw220uo_idx_0 ) * - 2.0 ; rtPrevAction = ngg51vuviwy .
cnunrbonew ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hfuaoawbo4x . njop3q5gx2
> 1.0 ) { rtAction = 0 ; } else if ( hfuaoawbo4x . njop3q5gx2 < - 1.0 ) {
rtAction = 1 ; } else { rtAction = 2 ; } ngg51vuviwy . cnunrbonew = rtAction
; } else { rtAction = ngg51vuviwy . cnunrbonew ; } if ( rtPrevAction !=
rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
lk0crlqaa1 ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { hfuaoawbo4x . pmhguwhdvv = bjiazabmpo . Constant_Value ; }
if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( ngg51vuviwy . k0fulbi3y3 ) ;
} break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS
, 0 ) != ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { hfuaoawbo4x . pmhguwhdvv =
bjiazabmpo . Constant_Value_ifjxstsexw ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( ngg51vuviwy . nkkan2lumh ) ; } break ; case 2 : if ( rtAction !=
rtPrevAction ) { itnis34hf1 ( rtS ) ; } ncyqqgn1fa ( hfuaoawbo4x . njop3q5gx2
, & hfuaoawbo4x . pmhguwhdvv ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( ngg51vuviwy . ncyqqgn1fak . n0vodpbpn0 ) ; } break ; } if (
hfuaoawbo4x . pmhguwhdvv > 1.0 ) { ojyypbpaqp_idx_0 = 1.0 ; } else if (
hfuaoawbo4x . pmhguwhdvv < - 1.0 ) { ojyypbpaqp_idx_0 = - 1.0 ; } else {
ojyypbpaqp_idx_0 = hfuaoawbo4x . pmhguwhdvv ; } hfuaoawbo4x . cjccrkvyno [ 1
] = muDoubleScalarAsin ( ojyypbpaqp_idx_0 ) ; hfuaoawbo4x . cjccrkvyno [ 2 ]
= muDoubleScalarAtan2 ( ( pk0lw220uo_idx_0 * pk0lw220uo_idx_1 +
ojyypbpaqp_idx_1 * g3mboufpwo_idx_0 ) * 2.0 , ( ( ojyypbpaqp_idx_1 *
ojyypbpaqp_idx_1 - g3mboufpwo_idx_0 * g3mboufpwo_idx_0 ) - pk0lw220uo_idx_0 *
pk0lw220uo_idx_0 ) + pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ) ; g3mboufpwo_idx_0
= ( hfuaoawbo4x . hwxwn5ouzg [ 0 ] * hfuaoawbo4x . hwxwn5ouzg [ 0 ] +
hfuaoawbo4x . hwxwn5ouzg [ 1 ] * hfuaoawbo4x . hwxwn5ouzg [ 1 ] ) +
hfuaoawbo4x . hwxwn5ouzg [ 2 ] * hfuaoawbo4x . hwxwn5ouzg [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . epy4ye5t4g != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . epy4ye5t4g
= 0 ; } pk0lw220uo_idx_0 = muDoubleScalarSqrt ( g3mboufpwo_idx_0 ) ; } else
if ( g3mboufpwo_idx_0 < 0.0 ) { pk0lw220uo_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( g3mboufpwo_idx_0 ) ) ; ngg51vuviwy . epy4ye5t4g = 1 ; }
else { pk0lw220uo_idx_0 = muDoubleScalarSqrt ( g3mboufpwo_idx_0 ) ; }
nunwvlk05a_idx_0 = ( hfuaoawbo4x . djfx2ozwz1 [ 0 ] * hfuaoawbo4x .
djfx2ozwz1 [ 0 ] + hfuaoawbo4x . djfx2ozwz1 [ 1 ] * hfuaoawbo4x . djfx2ozwz1
[ 1 ] ) + hfuaoawbo4x . djfx2ozwz1 [ 2 ] * hfuaoawbo4x . djfx2ozwz1 [ 2 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . gpmm0xfq0h != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . gpmm0xfq0h
= 0 ; } g3mboufpwo_idx_0 = muDoubleScalarSqrt ( nunwvlk05a_idx_0 ) ; } else
if ( nunwvlk05a_idx_0 < 0.0 ) { g3mboufpwo_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( nunwvlk05a_idx_0 ) ) ; ngg51vuviwy . gpmm0xfq0h = 1 ; }
else { g3mboufpwo_idx_0 = muDoubleScalarSqrt ( nunwvlk05a_idx_0 ) ; }
ojyypbpaqp_idx_1 = ( hfuaoawbo4x . mkltislhcr [ 0 ] * hfuaoawbo4x .
mkltislhcr [ 0 ] + hfuaoawbo4x . mkltislhcr [ 1 ] * hfuaoawbo4x . mkltislhcr
[ 1 ] ) + hfuaoawbo4x . mkltislhcr [ 2 ] * hfuaoawbo4x . mkltislhcr [ 2 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . o2vqfxmomh != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . o2vqfxmomh
= 0 ; } nunwvlk05a_idx_0 = muDoubleScalarSqrt ( ojyypbpaqp_idx_1 ) ; } else
if ( ojyypbpaqp_idx_1 < 0.0 ) { nunwvlk05a_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ojyypbpaqp_idx_1 ) ) ; ngg51vuviwy . o2vqfxmomh = 1 ; }
else { nunwvlk05a_idx_0 = muDoubleScalarSqrt ( ojyypbpaqp_idx_1 ) ; }
ojyypbpaqp_idx_1 = 1.0 / pk0lw220uo_idx_0 * g3mboufpwo_idx_0 *
nunwvlk05a_idx_0 ; dyhx1hjxb5_idx_0 *= ojyypbpaqp_idx_1 ; dyhx1hjxb5_idx_1 *=
ojyypbpaqp_idx_1 ; dyhx1hjxb5_idx_2 *= ojyypbpaqp_idx_1 ; if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { pk0lw220uo_idx_0 = ( ( hfuaoawbo4x . bc4yufp30w [ 0 ] *
hfuaoawbo4x . bc4yufp30w [ 0 ] + hfuaoawbo4x . bc4yufp30w [ 1 ] * hfuaoawbo4x
. bc4yufp30w [ 1 ] ) + hfuaoawbo4x . bc4yufp30w [ 2 ] * hfuaoawbo4x .
bc4yufp30w [ 2 ] ) + hfuaoawbo4x . bc4yufp30w [ 3 ] * hfuaoawbo4x .
bc4yufp30w [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
nrljhemabf != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ngg51vuviwy . nrljhemabf = 0 ; } g3mboufpwo_idx_1 = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } else if ( pk0lw220uo_idx_0 < 0.0 ) { g3mboufpwo_idx_1
= - muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ;
ngg51vuviwy . nrljhemabf = 1 ; } else { g3mboufpwo_idx_1 = muDoubleScalarSqrt
( pk0lw220uo_idx_0 ) ; } pk0lw220uo_idx_0 = hfuaoawbo4x . bc4yufp30w [ 2 ] /
g3mboufpwo_idx_1 ; ojyypbpaqp_idx_0 = hfuaoawbo4x . bc4yufp30w [ 3 ] /
g3mboufpwo_idx_1 ; hfuaoawbo4x . gpj4yt0rpp = ( ( bjiazabmpo .
Constant_Value_mnihrtjfmj - pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ) -
ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain2_Gain_oemzk5ojwm ;
pk0lw220uo_idx_1 = hfuaoawbo4x . bc4yufp30w [ 1 ] / g3mboufpwo_idx_1 ;
g3mboufpwo_idx_1 = hfuaoawbo4x . bc4yufp30w [ 0 ] / g3mboufpwo_idx_1 ;
hfuaoawbo4x . a1hpttag32 = ( pk0lw220uo_idx_1 * pk0lw220uo_idx_0 +
g3mboufpwo_idx_1 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain_Gain_ncteysqil3 ;
hfuaoawbo4x . nmaipecvge = ( pk0lw220uo_idx_1 * ojyypbpaqp_idx_0 -
g3mboufpwo_idx_1 * pk0lw220uo_idx_0 ) * bjiazabmpo . Gain1_Gain_idqjpcj2w2 ;
hfuaoawbo4x . hxg0kv5oai = ( pk0lw220uo_idx_1 * pk0lw220uo_idx_0 -
g3mboufpwo_idx_1 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain_Gain_lv4h0lzx53 ;
hfuaoawbo4x . nf1hgbxl14 = ( ( bjiazabmpo . Constant_Value_aqneserr4m -
pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ) - ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 )
* bjiazabmpo . Gain2_Gain_kwjfzexkam ; hfuaoawbo4x . cav5kycrkm = (
g3mboufpwo_idx_1 * pk0lw220uo_idx_1 + pk0lw220uo_idx_0 * ojyypbpaqp_idx_0 ) *
bjiazabmpo . Gain1_Gain_jgiaul0apm ; hfuaoawbo4x . d3aemr4udg = (
pk0lw220uo_idx_1 * ojyypbpaqp_idx_0 + g3mboufpwo_idx_1 * pk0lw220uo_idx_0 ) *
bjiazabmpo . Gain_Gain_fgmqaszm3p ; hfuaoawbo4x . dch3ovvw3l = (
pk0lw220uo_idx_0 * ojyypbpaqp_idx_0 - g3mboufpwo_idx_1 * pk0lw220uo_idx_1 ) *
bjiazabmpo . Gain1_Gain_bu0iql53q1 ; hfuaoawbo4x . niyd3y5by1 = ( (
bjiazabmpo . Constant_Value_pymuilks0n - pk0lw220uo_idx_1 * pk0lw220uo_idx_1
) - pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ) * bjiazabmpo .
Gain2_Gain_ozqnssaofx ; } hfuaoawbo4x . f0tf0xskar [ 0 ] = hfuaoawbo4x .
bc4yufp30w [ 4 ] - ( ( dyhx1hjxb5_idx_0 * hfuaoawbo4x . gpj4yt0rpp +
hfuaoawbo4x . a1hpttag32 * dyhx1hjxb5_idx_1 ) + hfuaoawbo4x . nmaipecvge *
dyhx1hjxb5_idx_2 ) ; hfuaoawbo4x . f0tf0xskar [ 1 ] = hfuaoawbo4x .
bc4yufp30w [ 5 ] - ( ( dyhx1hjxb5_idx_0 * hfuaoawbo4x . hxg0kv5oai +
hfuaoawbo4x . nf1hgbxl14 * dyhx1hjxb5_idx_1 ) + hfuaoawbo4x . cav5kycrkm *
dyhx1hjxb5_idx_2 ) ; hfuaoawbo4x . f0tf0xskar [ 2 ] = hfuaoawbo4x .
bc4yufp30w [ 6 ] - ( ( dyhx1hjxb5_idx_0 * hfuaoawbo4x . d3aemr4udg +
hfuaoawbo4x . dch3ovvw3l * dyhx1hjxb5_idx_1 ) + hfuaoawbo4x . niyd3y5by1 *
dyhx1hjxb5_idx_2 ) ; if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { } for ( k = 0 ; k
< 3 ; k ++ ) { hfuaoawbo4x . fofwr0d1hg [ k ] = bjiazabmpo .
Gain1_Gain_bvtqk3cyhh * ( bjiazabmpo . Constant_Value_ijgpov0mvf [ k + 6 ] *
( bjiazabmpo . Gain_Gain_h02ebdzwhh * hfuaoawbo4x . f0tf0xskar [ 2 ] ) + (
bjiazabmpo . Constant_Value_ijgpov0mvf [ k + 3 ] * ( bjiazabmpo .
Gain_Gain_h02ebdzwhh * hfuaoawbo4x . f0tf0xskar [ 1 ] ) + bjiazabmpo .
Gain_Gain_h02ebdzwhh * hfuaoawbo4x . f0tf0xskar [ 0 ] * bjiazabmpo .
Constant_Value_ijgpov0mvf [ k ] ) ) ; } if ( ssIsSampleHit ( rtS , 8 , 0 ) )
{ ojyypbpaqp_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
hfuaoawbo4x . fofwr0d1hg [ 0 ] * bjiazabmpo . PWM_Period + hfuaoawbo4x .
fofwr0d1hg [ 0 ] * bjiazabmpo . PWM_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( ojyypbpaqp_idx_0 ) || muDoubleScalarIsInf (
ojyypbpaqp_idx_0 ) ) { ojyypbpaqp_idx_0 = 0.0 ; } else { ojyypbpaqp_idx_0 =
muDoubleScalarRem ( ojyypbpaqp_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
ojyypbpaqp_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
ojyypbpaqp_idx_0 : ( uint32_T ) ojyypbpaqp_idx_0 ) == 0U ) || ( hfuaoawbo4x .
fofwr0d1hg [ 0 ] <= 0.0 ) ) && ngg51vuviwy . bj0piypish ) { hfuaoawbo4x .
jiayh2y14j = 0.0 ; ngg51vuviwy . ptxplb3iya = false ; } else { hfuaoawbo4x .
jiayh2y14j = ngg51vuviwy . ptxplb3iya ; } } if ( ssIsSampleHit ( rtS , 9 , 0
) ) { ojyypbpaqp_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
hfuaoawbo4x . fofwr0d1hg [ 1 ] * bjiazabmpo . PWM1_Period + hfuaoawbo4x .
fofwr0d1hg [ 1 ] * bjiazabmpo . PWM1_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( ojyypbpaqp_idx_0 ) || muDoubleScalarIsInf (
ojyypbpaqp_idx_0 ) ) { ojyypbpaqp_idx_0 = 0.0 ; } else { ojyypbpaqp_idx_0 =
muDoubleScalarRem ( ojyypbpaqp_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
ojyypbpaqp_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
ojyypbpaqp_idx_0 : ( uint32_T ) ojyypbpaqp_idx_0 ) == 0U ) || ( hfuaoawbo4x .
fofwr0d1hg [ 1 ] <= 0.0 ) ) && ngg51vuviwy . bwihaxowku ) { hfuaoawbo4x .
jdthz1j4ti = 0.0 ; ngg51vuviwy . b2iivkxpjc = false ; } else { hfuaoawbo4x .
jdthz1j4ti = ngg51vuviwy . b2iivkxpjc ; } } if ( ssIsSampleHit ( rtS , 7 , 0
) ) { ojyypbpaqp_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
hfuaoawbo4x . fofwr0d1hg [ 2 ] * bjiazabmpo . PWM2_Period + hfuaoawbo4x .
fofwr0d1hg [ 2 ] * bjiazabmpo . PWM2_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( ojyypbpaqp_idx_0 ) || muDoubleScalarIsInf (
ojyypbpaqp_idx_0 ) ) { ojyypbpaqp_idx_0 = 0.0 ; } else { ojyypbpaqp_idx_0 =
muDoubleScalarRem ( ojyypbpaqp_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
ojyypbpaqp_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
ojyypbpaqp_idx_0 : ( uint32_T ) ojyypbpaqp_idx_0 ) == 0U ) || ( hfuaoawbo4x .
fofwr0d1hg [ 2 ] <= 0.0 ) ) && ngg51vuviwy . eiyp1urgre ) { hfuaoawbo4x .
kd1zrciaaw = 0.0 ; ngg51vuviwy . d2iaudcqjt = false ; } else { hfuaoawbo4x .
kd1zrciaaw = ngg51vuviwy . d2iaudcqjt ; } } if ( ssIsSampleHit ( rtS , 4 , 0
) ) { hfuaoawbo4x . f0akllhmze [ 0 ] = bjiazabmpo . Gain2_Gain_lut5xpex21 *
hfuaoawbo4x . jiayh2y14j ; hfuaoawbo4x . f0akllhmze [ 1 ] = bjiazabmpo .
Gain2_Gain_lut5xpex21 * hfuaoawbo4x . jdthz1j4ti ; hfuaoawbo4x . f0akllhmze [
2 ] = bjiazabmpo . Gain2_Gain_lut5xpex21 * hfuaoawbo4x . kd1zrciaaw ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { hfuaoawbo4x . asay5kywf5 = ( ( hfuaoawbo4x
. bc4yufp30w [ 0 ] * hfuaoawbo4x . bc4yufp30w [ 0 ] + hfuaoawbo4x .
bc4yufp30w [ 1 ] * hfuaoawbo4x . bc4yufp30w [ 1 ] ) + hfuaoawbo4x .
bc4yufp30w [ 2 ] * hfuaoawbo4x . bc4yufp30w [ 2 ] ) + hfuaoawbo4x .
bc4yufp30w [ 3 ] * hfuaoawbo4x . bc4yufp30w [ 3 ] ; } g3mboufpwo_idx_1 = ( (
( hfuaoawbo4x . kvwgtntple * hfuaoawbo4x . bc4yufp30w [ 0 ] + hfuaoawbo4x .
bygzv3wnat * hfuaoawbo4x . bc4yufp30w [ 1 ] ) + hfuaoawbo4x . aq2ghaceft *
hfuaoawbo4x . bc4yufp30w [ 2 ] ) + hfuaoawbo4x . hdc0j3rnbp * hfuaoawbo4x .
bc4yufp30w [ 3 ] ) / hfuaoawbo4x . asay5kywf5 ; ojyypbpaqp_idx_1 = ( ( (
hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x . bc4yufp30w [ 0 ] - hfuaoawbo4x .
kvwgtntple * hfuaoawbo4x . bc4yufp30w [ 1 ] ) + hfuaoawbo4x . aq2ghaceft *
hfuaoawbo4x . bc4yufp30w [ 3 ] ) - hfuaoawbo4x . hdc0j3rnbp * hfuaoawbo4x .
bc4yufp30w [ 2 ] ) / hfuaoawbo4x . asay5kywf5 ; pk0lw220uo_idx_1 = ( ( (
hfuaoawbo4x . aq2ghaceft * hfuaoawbo4x . bc4yufp30w [ 0 ] - hfuaoawbo4x .
kvwgtntple * hfuaoawbo4x . bc4yufp30w [ 2 ] ) - hfuaoawbo4x . bygzv3wnat *
hfuaoawbo4x . bc4yufp30w [ 3 ] ) + hfuaoawbo4x . hdc0j3rnbp * hfuaoawbo4x .
bc4yufp30w [ 1 ] ) / hfuaoawbo4x . asay5kywf5 ; pk0lw220uo_idx_0 = ( ( (
hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x . bc4yufp30w [ 2 ] - hfuaoawbo4x .
kvwgtntple * hfuaoawbo4x . bc4yufp30w [ 3 ] ) - hfuaoawbo4x . aq2ghaceft *
hfuaoawbo4x . bc4yufp30w [ 1 ] ) + hfuaoawbo4x . hdc0j3rnbp * hfuaoawbo4x .
bc4yufp30w [ 0 ] ) / hfuaoawbo4x . asay5kywf5 ; nunwvlk05a_idx_0 = ( (
g3mboufpwo_idx_1 * g3mboufpwo_idx_1 + ojyypbpaqp_idx_1 * ojyypbpaqp_idx_1 ) +
pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ) + pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . psyl0mnuvj != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . psyl0mnuvj
= 0 ; } ojyypbpaqp_idx_0 = muDoubleScalarSqrt ( nunwvlk05a_idx_0 ) ; } else
if ( nunwvlk05a_idx_0 < 0.0 ) { ojyypbpaqp_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( nunwvlk05a_idx_0 ) ) ; ngg51vuviwy . psyl0mnuvj = 1 ; }
else { ojyypbpaqp_idx_0 = muDoubleScalarSqrt ( nunwvlk05a_idx_0 ) ; }
g3mboufpwo_idx_1 /= ojyypbpaqp_idx_0 ; ojyypbpaqp_idx_1 /= ojyypbpaqp_idx_0 ;
pk0lw220uo_idx_1 /= ojyypbpaqp_idx_0 ; pk0lw220uo_idx_0 /= ojyypbpaqp_idx_0 ;
hfuaoawbo4x . ozhlra24jp [ 0 ] = muDoubleScalarAtan2 ( ( ojyypbpaqp_idx_1 *
pk0lw220uo_idx_1 + g3mboufpwo_idx_1 * pk0lw220uo_idx_0 ) * 2.0 , ( (
g3mboufpwo_idx_1 * g3mboufpwo_idx_1 + ojyypbpaqp_idx_1 * ojyypbpaqp_idx_1 ) -
pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ) - pk0lw220uo_idx_0 * pk0lw220uo_idx_0 )
; hfuaoawbo4x . h23bmldhv4 = ( ojyypbpaqp_idx_1 * pk0lw220uo_idx_0 -
g3mboufpwo_idx_1 * pk0lw220uo_idx_1 ) * - 2.0 ; rtPrevAction = ngg51vuviwy .
mvxnb5arqf ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hfuaoawbo4x . h23bmldhv4
> 1.0 ) { rtAction = 0 ; } else if ( hfuaoawbo4x . h23bmldhv4 < - 1.0 ) {
rtAction = 1 ; } else { rtAction = 2 ; } ngg51vuviwy . mvxnb5arqf = rtAction
; } else { rtAction = ngg51vuviwy . mvxnb5arqf ; } if ( rtPrevAction !=
rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
lk0crlqaa1 ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { hfuaoawbo4x . h1m1us0vhn = bjiazabmpo .
Constant_Value_nfnblq3wf3 ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
ngg51vuviwy . dhmxxudzxm ) ; } break ; case 1 : if ( rtAction != rtPrevAction
) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { hfuaoawbo4x . h1m1us0vhn = bjiazabmpo .
Constant_Value_bxtk0v2tqk ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
ngg51vuviwy . ppg4ibcbt5 ) ; } break ; case 2 : if ( rtAction != rtPrevAction
) { itnis34hf1 ( rtS ) ; } ncyqqgn1fa ( hfuaoawbo4x . h23bmldhv4 , &
hfuaoawbo4x . h1m1us0vhn ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
ngg51vuviwy . oeck1vxca3 . n0vodpbpn0 ) ; } break ; } if ( hfuaoawbo4x .
h1m1us0vhn > 1.0 ) { ojyypbpaqp_idx_0 = 1.0 ; } else if ( hfuaoawbo4x .
h1m1us0vhn < - 1.0 ) { ojyypbpaqp_idx_0 = - 1.0 ; } else { ojyypbpaqp_idx_0 =
hfuaoawbo4x . h1m1us0vhn ; } hfuaoawbo4x . ozhlra24jp [ 1 ] =
muDoubleScalarAsin ( ojyypbpaqp_idx_0 ) ; hfuaoawbo4x . ozhlra24jp [ 2 ] =
muDoubleScalarAtan2 ( ( pk0lw220uo_idx_1 * pk0lw220uo_idx_0 +
g3mboufpwo_idx_1 * ojyypbpaqp_idx_1 ) * 2.0 , ( ( g3mboufpwo_idx_1 *
g3mboufpwo_idx_1 - ojyypbpaqp_idx_1 * ojyypbpaqp_idx_1 ) - pk0lw220uo_idx_1 *
pk0lw220uo_idx_1 ) + pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ) ; hfuaoawbo4x .
n0xb4olsgj [ 0 ] = hfuaoawbo4x . jz4js4cavj [ 0 ] - hfuaoawbo4x . bc4yufp30w
[ 4 ] ; hfuaoawbo4x . n0xb4olsgj [ 1 ] = hfuaoawbo4x . jz4js4cavj [ 1 ] -
hfuaoawbo4x . bc4yufp30w [ 5 ] ; hfuaoawbo4x . n0xb4olsgj [ 2 ] = hfuaoawbo4x
. jz4js4cavj [ 2 ] - hfuaoawbo4x . bc4yufp30w [ 6 ] ; hfuaoawbo4x .
ks14yvagh2 = o1yff13vlj3 . f3u5ihkx4m ; pk0lw220uo_idx_0 = ( nnfzsjooaq_idx_0
* nnfzsjooaq_idx_0 + nnfzsjooaq_idx_1 * nnfzsjooaq_idx_1 ) + nnfzsjooaq_idx_2
* nnfzsjooaq_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
kbsac44cjw != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ngg51vuviwy . kbsac44cjw = 0 ; } ojyypbpaqp_idx_0 = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } else if ( pk0lw220uo_idx_0 < 0.0 ) { ojyypbpaqp_idx_0
= - muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ;
ngg51vuviwy . kbsac44cjw = 1 ; } else { ojyypbpaqp_idx_0 = muDoubleScalarSqrt
( pk0lw220uo_idx_0 ) ; } pk0lw220uo_idx_0 = 1.0 / ( ojyypbpaqp_idx_0 *
ojyypbpaqp_idx_0 ) / ojyypbpaqp_idx_0 * hfuaoawbo4x . jbummyrznk ;
dyhx1hjxb5_idx_0 = nnfzsjooaq_idx_0 / ojyypbpaqp_idx_0 ; dyhx1hjxb5_idx_1 =
nnfzsjooaq_idx_1 / ojyypbpaqp_idx_0 ; dyhx1hjxb5_idx_2 = nnfzsjooaq_idx_2 /
ojyypbpaqp_idx_0 ; ojyypbpaqp_idx_0 = ( ( hfuaoawbo4x . kvwgtntple *
hfuaoawbo4x . kvwgtntple + hfuaoawbo4x . bygzv3wnat * hfuaoawbo4x .
bygzv3wnat ) + hfuaoawbo4x . aq2ghaceft * hfuaoawbo4x . aq2ghaceft ) +
hfuaoawbo4x . hdc0j3rnbp * hfuaoawbo4x . hdc0j3rnbp ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( ngg51vuviwy . kl2lfyanp1 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . kl2lfyanp1
= 0 ; } ojyypbpaqp_idx_1 = muDoubleScalarSqrt ( ojyypbpaqp_idx_0 ) ; } else
if ( ojyypbpaqp_idx_0 < 0.0 ) { ojyypbpaqp_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ojyypbpaqp_idx_0 ) ) ; ngg51vuviwy . kl2lfyanp1 = 1 ; }
else { ojyypbpaqp_idx_1 = muDoubleScalarSqrt ( ojyypbpaqp_idx_0 ) ; }
ojyypbpaqp_idx_0 = hfuaoawbo4x . bygzv3wnat / ojyypbpaqp_idx_1 ;
pk0lw220uo_idx_1 = hfuaoawbo4x . aq2ghaceft / ojyypbpaqp_idx_1 ;
g3mboufpwo_idx_1 = hfuaoawbo4x . kvwgtntple / ojyypbpaqp_idx_1 ;
g3mboufpwo_idx_0 = hfuaoawbo4x . hdc0j3rnbp / ojyypbpaqp_idx_1 ;
ojyypbpaqp_idx_1 = ( ( ( bjiazabmpo . Constant_Value_lxx0buxvfk -
ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 ) - g3mboufpwo_idx_0 * g3mboufpwo_idx_0 )
* bjiazabmpo . Gain2_Gain_n32pjfxnui * dyhx1hjxb5_idx_1 + ( ojyypbpaqp_idx_0
* pk0lw220uo_idx_1 - g3mboufpwo_idx_1 * g3mboufpwo_idx_0 ) * bjiazabmpo .
Gain_Gain_cf5hb10y5x * dyhx1hjxb5_idx_0 ) + ( g3mboufpwo_idx_1 *
ojyypbpaqp_idx_0 + pk0lw220uo_idx_1 * g3mboufpwo_idx_0 ) * bjiazabmpo .
Gain1_Gain_gwlrw1w2b3 * dyhx1hjxb5_idx_2 ; nunwvlk05a_idx_0 = ( (
ojyypbpaqp_idx_0 * g3mboufpwo_idx_0 + g3mboufpwo_idx_1 * pk0lw220uo_idx_1 ) *
bjiazabmpo . Gain_Gain_efnax0y1dx * dyhx1hjxb5_idx_0 + ( pk0lw220uo_idx_1 *
g3mboufpwo_idx_0 - g3mboufpwo_idx_1 * ojyypbpaqp_idx_0 ) * bjiazabmpo .
Gain1_Gain_ddeccjfmea * dyhx1hjxb5_idx_1 ) + ( ( bjiazabmpo .
Constant_Value_a2jieicat5 - ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 ) -
pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ) * bjiazabmpo . Gain2_Gain_g2ebct4dqc *
dyhx1hjxb5_idx_2 ; ojyypbpaqp_idx_0 = ( ( ( bjiazabmpo .
Constant_Value_bpdqgjnrbi - pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ) -
g3mboufpwo_idx_0 * g3mboufpwo_idx_0 ) * bjiazabmpo . Gain2_Gain_cko11epp5n *
dyhx1hjxb5_idx_0 + ( ojyypbpaqp_idx_0 * pk0lw220uo_idx_1 + g3mboufpwo_idx_1 *
g3mboufpwo_idx_0 ) * bjiazabmpo . Gain_Gain_cjicctxqb2 * dyhx1hjxb5_idx_1 ) +
( ojyypbpaqp_idx_0 * g3mboufpwo_idx_0 - g3mboufpwo_idx_1 * pk0lw220uo_idx_1 )
* bjiazabmpo . Gain1_Gain_nieh11pzcd * dyhx1hjxb5_idx_2 ; dyhx1hjxb5_idx_0 =
hfuaoawbo4x . bhk0qefpw3 [ 0 ] * ojyypbpaqp_idx_1 * nunwvlk05a_idx_0 *
pk0lw220uo_idx_0 ; dyhx1hjxb5_idx_1 = hfuaoawbo4x . bhk0qefpw3 [ 1 ] *
nunwvlk05a_idx_0 * ojyypbpaqp_idx_0 * pk0lw220uo_idx_0 ; dyhx1hjxb5_idx_2 =
hfuaoawbo4x . bhk0qefpw3 [ 2 ] * ojyypbpaqp_idx_0 * ojyypbpaqp_idx_1 *
pk0lw220uo_idx_0 ; pk0lw220uo_idx_0 = ( nnfzsjooaq_idx_0 * nnfzsjooaq_idx_0 +
nnfzsjooaq_idx_1 * nnfzsjooaq_idx_1 ) + nnfzsjooaq_idx_2 * nnfzsjooaq_idx_2 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . bvasf03rkx != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . bvasf03rkx
= 0 ; } hfuaoawbo4x . jgzl5fcvsu = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ;
} else if ( pk0lw220uo_idx_0 < 0.0 ) { hfuaoawbo4x . jgzl5fcvsu = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; ngg51vuviwy .
bvasf03rkx = 1 ; } else { hfuaoawbo4x . jgzl5fcvsu = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } plz0cvxflt [ 0 ] = nnfzsjooaq_idx_0 / hfuaoawbo4x .
jgzl5fcvsu ; plz0cvxflt [ 1 ] = nnfzsjooaq_idx_1 / hfuaoawbo4x . jgzl5fcvsu ;
plz0cvxflt [ 2 ] = nnfzsjooaq_idx_2 / hfuaoawbo4x . jgzl5fcvsu ;
pk0lw220uo_idx_0 = plz0cvxflt [ 0 ] * plz0cvxflt [ 0 ] + plz0cvxflt [ 1 ] *
plz0cvxflt [ 1 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
cwb3bnplqh != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ngg51vuviwy . cwb3bnplqh = 0 ; } ojyypbpaqp_idx_0 = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } else if ( pk0lw220uo_idx_0 < 0.0 ) { ojyypbpaqp_idx_0
= - muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ;
ngg51vuviwy . cwb3bnplqh = 1 ; } else { ojyypbpaqp_idx_0 = muDoubleScalarSqrt
( pk0lw220uo_idx_0 ) ; } hfuaoawbo4x . iuxf2i4tcl = muDoubleScalarAtan2 (
ojyypbpaqp_idx_0 , plz0cvxflt [ 2 ] ) ; pk0lw220uo_idx_1 =
muDoubleScalarAtan2 ( plz0cvxflt [ 1 ] , plz0cvxflt [ 0 ] ) ; hfuaoawbo4x .
aarhhbez0n = pk0lw220uo_idx_1 - 6.2831853071795862 / rtP_Earth . siderealDay
* ssGetT ( rtS ) ; MagneticFieldInPolarCoords ( & hfuaoawbo4x . jgzl5fcvsu ,
& hfuaoawbo4x . iuxf2i4tcl , & hfuaoawbo4x . aarhhbez0n , & rtP_Earth .
equatorialRadius , & hfuaoawbo4x . cbt3p1gwln [ 0 ] ) ; ojyypbpaqp_idx_0 =
bjiazabmpo . Gain_Gain_m4jtdwqsx1 * hfuaoawbo4x . iuxf2i4tcl ;
pk0lw220uo_idx_0 = muDoubleScalarCos ( ojyypbpaqp_idx_0 ) ; g3mboufpwo_idx_1
= bjiazabmpo . Gain_Gain_cnryscy0x5 * pk0lw220uo_idx_1 ; pk0lw220uo_idx_1 =
muDoubleScalarSin ( g3mboufpwo_idx_1 ) ; g3mboufpwo_idx_1 = muDoubleScalarCos
( g3mboufpwo_idx_1 ) ; ojyypbpaqp_idx_0 = muDoubleScalarSin (
ojyypbpaqp_idx_0 ) ; ojyypbpaqp_idx_1 = ( pk0lw220uo_idx_0 * bjiazabmpo .
Constant_Value_hrofb0v0v5 + g3mboufpwo_idx_1 * bjiazabmpo .
Constant_Value_ekkpqgqspn ) + ( ojyypbpaqp_idx_0 * pk0lw220uo_idx_1 -
bjiazabmpo . Constant_Value_ekkpqgqspn * bjiazabmpo .
Constant_Value_hrofb0v0v5 ) ; nunwvlk05a_idx_1 = ( ( pk0lw220uo_idx_0 *
bjiazabmpo . Constant_Value_hrofb0v0v5 + g3mboufpwo_idx_1 * ojyypbpaqp_idx_0
) + ( bjiazabmpo . Constant_Value_ekkpqgqspn * bjiazabmpo .
Constant_Value_hrofb0v0v5 - bjiazabmpo . Constant_Value_ekkpqgqspn *
pk0lw220uo_idx_1 ) ) * bjiazabmpo . Gain_Gain_flpxquj1at ; nunwvlk05a_idx_0 =
nunwvlk05a_idx_1 ; nunwvlk05a_idx_1 = ( ( pk0lw220uo_idx_0 * pk0lw220uo_idx_1
+ g3mboufpwo_idx_1 * bjiazabmpo . Constant_Value_ekkpqgqspn ) + ( bjiazabmpo
. Constant_Value_ekkpqgqspn * bjiazabmpo . Constant_Value_hrofb0v0v5 -
ojyypbpaqp_idx_0 * bjiazabmpo . Constant_Value_hrofb0v0v5 ) ) * bjiazabmpo .
Gain_Gain_flpxquj1at ; pk0lw220uo_idx_0 = pk0lw220uo_idx_0 * g3mboufpwo_idx_1
- ( ( bjiazabmpo . Constant_Value_ekkpqgqspn * bjiazabmpo .
Constant_Value_hrofb0v0v5 + ojyypbpaqp_idx_0 * bjiazabmpo .
Constant_Value_hrofb0v0v5 ) + bjiazabmpo . Constant_Value_ekkpqgqspn *
pk0lw220uo_idx_1 ) ; jcvgvp2mw3 [ 1 ] = hfuaoawbo4x . hdc0j3rnbp *
ojyypbpaqp_idx_1 ; jcvgvp2mw3 [ 5 ] = hfuaoawbo4x . aq2ghaceft *
ojyypbpaqp_idx_1 ; pk0lw220uo_idx_1 = ojyypbpaqp_idx_1 ; ojyypbpaqp_idx_1 = (
hfuaoawbo4x . kvwgtntple * ojyypbpaqp_idx_1 + pk0lw220uo_idx_0 * hfuaoawbo4x
. bygzv3wnat ) + ( hfuaoawbo4x . aq2ghaceft * nunwvlk05a_idx_1 - hfuaoawbo4x
. hdc0j3rnbp * nunwvlk05a_idx_0 ) ; g3mboufpwo_idx_0 = ( hfuaoawbo4x .
kvwgtntple * nunwvlk05a_idx_0 + pk0lw220uo_idx_0 * hfuaoawbo4x . aq2ghaceft )
+ ( jcvgvp2mw3 [ 1 ] - hfuaoawbo4x . bygzv3wnat * nunwvlk05a_idx_1 ) ;
ojyypbpaqp_idx_0 = ( hfuaoawbo4x . kvwgtntple * nunwvlk05a_idx_1 +
pk0lw220uo_idx_0 * hfuaoawbo4x . hdc0j3rnbp ) + ( hfuaoawbo4x . bygzv3wnat *
nunwvlk05a_idx_0 - jcvgvp2mw3 [ 5 ] ) ; pk0lw220uo_idx_1 = hfuaoawbo4x .
kvwgtntple * pk0lw220uo_idx_0 - ( ( hfuaoawbo4x . bygzv3wnat *
pk0lw220uo_idx_1 + hfuaoawbo4x . aq2ghaceft * nunwvlk05a_idx_0 ) +
hfuaoawbo4x . hdc0j3rnbp * nunwvlk05a_idx_1 ) ; pk0lw220uo_idx_0 = ( (
pk0lw220uo_idx_1 * pk0lw220uo_idx_1 + ojyypbpaqp_idx_1 * ojyypbpaqp_idx_1 ) +
g3mboufpwo_idx_0 * g3mboufpwo_idx_0 ) + ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . kgrjq2yk3i != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . kgrjq2yk3i
= 0 ; } g3mboufpwo_idx_1 = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ; } else
if ( pk0lw220uo_idx_0 < 0.0 ) { g3mboufpwo_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; ngg51vuviwy . kgrjq2yk3i = 1 ; }
else { g3mboufpwo_idx_1 = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ; }
pk0lw220uo_idx_0 = ojyypbpaqp_idx_1 / g3mboufpwo_idx_1 ; ojyypbpaqp_idx_0 /=
g3mboufpwo_idx_1 ; pk0lw220uo_idx_1 /= g3mboufpwo_idx_1 ; nunwvlk05a_idx_0 =
g3mboufpwo_idx_0 / g3mboufpwo_idx_1 ; g3mboufpwo_idx_1 = ( ( pk0lw220uo_idx_0
* ojyypbpaqp_idx_0 + pk0lw220uo_idx_1 * nunwvlk05a_idx_0 ) * bjiazabmpo .
Gain_Gain_fsocaetgdj * hfuaoawbo4x . cbt3p1gwln [ 0 ] + ( nunwvlk05a_idx_0 *
ojyypbpaqp_idx_0 - pk0lw220uo_idx_1 * pk0lw220uo_idx_0 ) * bjiazabmpo .
Gain1_Gain_igcxviai5g * hfuaoawbo4x . cbt3p1gwln [ 1 ] ) + ( ( bjiazabmpo .
Constant_Value_nfqnghygav - pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ) -
nunwvlk05a_idx_0 * nunwvlk05a_idx_0 ) * bjiazabmpo . Gain2_Gain_mcrod3aisq *
hfuaoawbo4x . cbt3p1gwln [ 2 ] ; ojyypbpaqp_idx_1 = ( ( ( bjiazabmpo .
Constant_Value_ollq4x5vyn - nunwvlk05a_idx_0 * nunwvlk05a_idx_0 ) -
ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain2_Gain_d0aeb3inpf *
hfuaoawbo4x . cbt3p1gwln [ 0 ] + ( pk0lw220uo_idx_0 * nunwvlk05a_idx_0 +
pk0lw220uo_idx_1 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain_Gain_avgts0xajn *
hfuaoawbo4x . cbt3p1gwln [ 1 ] ) + ( pk0lw220uo_idx_0 * ojyypbpaqp_idx_0 -
pk0lw220uo_idx_1 * nunwvlk05a_idx_0 ) * bjiazabmpo . Gain1_Gain_pfgznzxep3 *
hfuaoawbo4x . cbt3p1gwln [ 2 ] ; pk0lw220uo_idx_0 = ( ( ( bjiazabmpo .
Constant_Value_jelrytb22b - pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ) -
ojyypbpaqp_idx_0 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain2_Gain_jbi3ws3ahy *
hfuaoawbo4x . cbt3p1gwln [ 1 ] + ( pk0lw220uo_idx_0 * nunwvlk05a_idx_0 -
pk0lw220uo_idx_1 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain_Gain_l4qk2foong *
hfuaoawbo4x . cbt3p1gwln [ 0 ] ) + ( pk0lw220uo_idx_1 * pk0lw220uo_idx_0 +
nunwvlk05a_idx_0 * ojyypbpaqp_idx_0 ) * bjiazabmpo . Gain1_Gain_b2dtklqw2b *
hfuaoawbo4x . cbt3p1gwln [ 2 ] ; jcvgvp2mw3 [ 0 ] = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] * g3mboufpwo_idx_1 ;
jcvgvp2mw3 [ 1 ] = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * ojyypbpaqp_idx_1 ;
jcvgvp2mw3 [ 2 ] = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * pk0lw220uo_idx_0 ;
jcvgvp2mw3 [ 3 ] = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * pk0lw220uo_idx_0 ;
jcvgvp2mw3 [ 4 ] = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * g3mboufpwo_idx_1 ;
jcvgvp2mw3 [ 5 ] = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] * ojyypbpaqp_idx_1 ;
pk0lw220uo_idx_0 = ( hfuaoawbo4x . abhvo30nqe [ 0 ] * hfuaoawbo4x .
abhvo30nqe [ 0 ] + hfuaoawbo4x . abhvo30nqe [ 1 ] * hfuaoawbo4x . abhvo30nqe
[ 1 ] ) + hfuaoawbo4x . abhvo30nqe [ 2 ] * hfuaoawbo4x . abhvo30nqe [ 2 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . obyeutsorr != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . obyeutsorr
= 0 ; } ojyypbpaqp_idx_0 = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ; } else
if ( pk0lw220uo_idx_0 < 0.0 ) { ojyypbpaqp_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ; ngg51vuviwy . obyeutsorr = 1 ; }
else { ojyypbpaqp_idx_0 = muDoubleScalarSqrt ( pk0lw220uo_idx_0 ) ; }
pk0lw220uo_idx_0 = rtP_Const . AU_1 / ojyypbpaqp_idx_0 ; pk0lw220uo_idx_0 =
pk0lw220uo_idx_0 * pk0lw220uo_idx_0 * hfuaoawbo4x . ddyoytv0e2 ; plz0cvxflt [
0 ] = hfuaoawbo4x . abhvo30nqe [ 0 ] / ojyypbpaqp_idx_0 ; g3mboufpwo_idx_1 =
0.0 ; plz0cvxflt [ 1 ] = hfuaoawbo4x . abhvo30nqe [ 1 ] / ojyypbpaqp_idx_0 ;
ikxunumo3i = 0.0 ; plz0cvxflt [ 2 ] = hfuaoawbo4x . abhvo30nqe [ 2 ] /
ojyypbpaqp_idx_0 ; oefbiund24_idx_1 = 0.0 ; for ( i = 0 ; i < 10 ; i ++ ) {
ln02qvajo4 = b [ i ] ; pk0lw220uo_idx_1 = ( rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 1 ] * plz0cvxflt [ 1 ] + rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i ] * plz0cvxflt [ 0 ] ) + rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * plz0cvxflt [ 2 ] ; if (
pk0lw220uo_idx_1 > 0.0 ) { ojyypbpaqp_idx_0 = 2.0 * ln02qvajo4 *
pk0lw220uo_idx_1 + 0.066666666666666666 ; pk0lw220uo_idx_1 *= -
pk0lw220uo_idx_0 * rtP_Spacecraft . surfaces_area [ i ] ; ojyypbpaqp_idx_1 =
( ( 1.0 - ln02qvajo4 ) * plz0cvxflt [ 0 ] + rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i ] * ojyypbpaqp_idx_0 ) * pk0lw220uo_idx_1 ;
nunwvlk05a_idx_1 = rtP_Spacecraft . surfaces_position [ 3 * i ] +
rtP_Spacecraft . geometricCenter [ 0 ] ; g3mboufpwo_idx_0 = ( rtP_Spacecraft
. surfaces_normalToSurface [ 3 * i + 1 ] * ojyypbpaqp_idx_0 + ( 1.0 -
ln02qvajo4 ) * plz0cvxflt [ 1 ] ) * pk0lw220uo_idx_1 ; nunwvlk05a_idx_0 =
rtP_Spacecraft . surfaces_position [ 3 * i + 1 ] + rtP_Spacecraft .
geometricCenter [ 1 ] ; ojyypbpaqp_idx_0 = ( rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * ojyypbpaqp_idx_0 + ( 1.0 -
ln02qvajo4 ) * plz0cvxflt [ 2 ] ) * pk0lw220uo_idx_1 ; pk0lw220uo_idx_1 =
rtP_Spacecraft . surfaces_position [ 3 * i + 2 ] + rtP_Spacecraft .
geometricCenter [ 2 ] ; g3mboufpwo_idx_1 += nunwvlk05a_idx_0 *
ojyypbpaqp_idx_0 - pk0lw220uo_idx_1 * g3mboufpwo_idx_0 ; ikxunumo3i +=
pk0lw220uo_idx_1 * ojyypbpaqp_idx_1 - nunwvlk05a_idx_1 * ojyypbpaqp_idx_0 ;
oefbiund24_idx_1 += nunwvlk05a_idx_1 * g3mboufpwo_idx_0 - nunwvlk05a_idx_0 *
ojyypbpaqp_idx_1 ; } } dyhx1hjxb5_idx_0 = ( dyhx1hjxb5_idx_0 +
g3mboufpwo_idx_1 ) + ( jcvgvp2mw3 [ 0 ] - jcvgvp2mw3 [ 3 ] ) ;
dyhx1hjxb5_idx_1 = ( dyhx1hjxb5_idx_1 + ikxunumo3i ) + ( jcvgvp2mw3 [ 1 ] -
jcvgvp2mw3 [ 4 ] ) ; dyhx1hjxb5_idx_2 = ( dyhx1hjxb5_idx_2 + oefbiund24_idx_1
) + ( jcvgvp2mw3 [ 2 ] - jcvgvp2mw3 [ 5 ] ) ; hfuaoawbo4x . p3pcl4mtnq [ 0 ]
= ( hfuaoawbo4x . jz4js4cavj [ 1 ] * hfuaoawbo4x . jz4js4cavj [ 2 ] *
hfuaoawbo4x . k3y3ixdgrn [ 0 ] + ( dyhx1hjxb5_idx_0 + hfuaoawbo4x .
f0akllhmze [ 0 ] ) ) / bjiazabmpo . Inertia_Value [ 0 ] ; hfuaoawbo4x .
p3pcl4mtnq [ 1 ] = ( hfuaoawbo4x . jz4js4cavj [ 2 ] * hfuaoawbo4x .
jz4js4cavj [ 0 ] * hfuaoawbo4x . k3y3ixdgrn [ 1 ] + ( dyhx1hjxb5_idx_1 +
hfuaoawbo4x . f0akllhmze [ 1 ] ) ) / bjiazabmpo . Inertia_Value [ 1 ] ;
hfuaoawbo4x . p3pcl4mtnq [ 2 ] = ( hfuaoawbo4x . jz4js4cavj [ 0 ] *
hfuaoawbo4x . jz4js4cavj [ 1 ] * hfuaoawbo4x . k3y3ixdgrn [ 2 ] + (
dyhx1hjxb5_idx_2 + hfuaoawbo4x . f0akllhmze [ 2 ] ) ) / bjiazabmpo .
Inertia_Value [ 2 ] ; egmyq2wukd [ 0 ] = 0.0 ; egmyq2wukd [ 4 ] = -
hfuaoawbo4x . jz4js4cavj [ 0 ] ; egmyq2wukd [ 8 ] = - hfuaoawbo4x .
jz4js4cavj [ 1 ] ; egmyq2wukd [ 12 ] = - hfuaoawbo4x . jz4js4cavj [ 2 ] ;
egmyq2wukd [ 1 ] = 0.0 ; egmyq2wukd [ 5 ] = 0.0 ; egmyq2wukd [ 9 ] =
hfuaoawbo4x . jz4js4cavj [ 2 ] ; egmyq2wukd [ 13 ] = - hfuaoawbo4x .
jz4js4cavj [ 1 ] ; egmyq2wukd [ 2 ] = 0.0 ; egmyq2wukd [ 6 ] = 0.0 ;
egmyq2wukd [ 10 ] = 0.0 ; egmyq2wukd [ 14 ] = hfuaoawbo4x . jz4js4cavj [ 0 ]
; egmyq2wukd [ 3 ] = 0.0 ; egmyq2wukd [ 7 ] = 0.0 ; egmyq2wukd [ 11 ] = 0.0 ;
egmyq2wukd [ 15 ] = 0.0 ; for ( k = 0 ; k < 4 ; k ++ ) { eweqcqisny [ k << 2
] = egmyq2wukd [ k << 2 ] - egmyq2wukd [ k ] ; eweqcqisny [ ( k << 2 ) + 1 ]
= egmyq2wukd [ ( k << 2 ) + 1 ] - egmyq2wukd [ k + 4 ] ; eweqcqisny [ ( k <<
2 ) + 2 ] = egmyq2wukd [ ( k << 2 ) + 2 ] - egmyq2wukd [ k + 8 ] ; eweqcqisny
[ ( k << 2 ) + 3 ] = egmyq2wukd [ ( k << 2 ) + 3 ] - egmyq2wukd [ k + 12 ] ;
} memcpy ( & egmyq2wukd [ 0 ] , & eweqcqisny [ 0 ] , sizeof ( real_T ) << 4U
) ; hfuaoawbo4x . of0mnfctla [ 0 ] = hfuaoawbo4x . kvwgtntple ; hfuaoawbo4x .
of0mnfctla [ 1 ] = hfuaoawbo4x . bygzv3wnat ; hfuaoawbo4x . of0mnfctla [ 2 ]
= hfuaoawbo4x . aq2ghaceft ; hfuaoawbo4x . of0mnfctla [ 3 ] = hfuaoawbo4x .
hdc0j3rnbp ; for ( k = 0 ; k < 4 ; k ++ ) { hfuaoawbo4x . lekkjhfcii [ k ] =
0.0 ; hfuaoawbo4x . lekkjhfcii [ k ] += bjiazabmpo . Gain1_Gain_objsqoebrs *
egmyq2wukd [ k ] * hfuaoawbo4x . of0mnfctla [ 0 ] ; hfuaoawbo4x . lekkjhfcii
[ k ] += egmyq2wukd [ k + 4 ] * bjiazabmpo . Gain1_Gain_objsqoebrs *
hfuaoawbo4x . of0mnfctla [ 1 ] ; hfuaoawbo4x . lekkjhfcii [ k ] += egmyq2wukd
[ k + 8 ] * bjiazabmpo . Gain1_Gain_objsqoebrs * hfuaoawbo4x . of0mnfctla [ 2
] ; hfuaoawbo4x . lekkjhfcii [ k ] += egmyq2wukd [ k + 12 ] * bjiazabmpo .
Gain1_Gain_objsqoebrs * hfuaoawbo4x . of0mnfctla [ 3 ] ; } dyhx1hjxb5_idx_0
*= dyhx1hjxb5_idx_0 ; dyhx1hjxb5_idx_1 *= dyhx1hjxb5_idx_1 ; pk0lw220uo_idx_0
= ( dyhx1hjxb5_idx_0 + dyhx1hjxb5_idx_1 ) + dyhx1hjxb5_idx_2 *
dyhx1hjxb5_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
cn4mozejch != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ngg51vuviwy . cn4mozejch = 0 ; } ojyypbpaqp_idx_0 = muDoubleScalarSqrt (
pk0lw220uo_idx_0 ) ; } else if ( pk0lw220uo_idx_0 < 0.0 ) { ojyypbpaqp_idx_0
= - muDoubleScalarSqrt ( muDoubleScalarAbs ( pk0lw220uo_idx_0 ) ) ;
ngg51vuviwy . cn4mozejch = 1 ; } else { ojyypbpaqp_idx_0 = muDoubleScalarSqrt
( pk0lw220uo_idx_0 ) ; } hfuaoawbo4x . ncrcxz2klw = ojyypbpaqp_idx_0 *
ojyypbpaqp_idx_0 ; emiiavfkh1 = bjiazabmpo . e_Value * muDoubleScalarCos (
emiiavfkh1 ) + bjiazabmpo . Constant1_Value_lvvzxuwh5z ; hfuaoawbo4x .
psr0r0bk4j = 1.0 / hfuaoawbo4x . g0423fm4yn * hfuaoawbo4x . meblfsgtxo * (
emiiavfkh1 * emiiavfkh1 ) ; emiiavfkh1 = ( nnfzsjooaq_idx_0 *
nnfzsjooaq_idx_0 + nnfzsjooaq_idx_1 * nnfzsjooaq_idx_1 ) + nnfzsjooaq_idx_2 *
nnfzsjooaq_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
ftfgzy2fsp != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ngg51vuviwy . ftfgzy2fsp = 0 ; } pk0lw220uo_idx_0 = muDoubleScalarSqrt (
emiiavfkh1 ) ; } else if ( emiiavfkh1 < 0.0 ) { pk0lw220uo_idx_0 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( emiiavfkh1 ) ) ; ngg51vuviwy .
ftfgzy2fsp = 1 ; } else { pk0lw220uo_idx_0 = muDoubleScalarSqrt ( emiiavfkh1
) ; } emiiavfkh1 = pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ; emiiavfkh1 =
rtP_Earth . J2 * rtP_Earth . mu * hfuaoawbo4x . ifmzqc4riz / ( emiiavfkh1 *
emiiavfkh1 ) * bjiazabmpo . Gain_Gain_ij5ephcub4 ; nunwvlk05a_idx_1 =
nnfzsjooaq_idx_0 / pk0lw220uo_idx_0 ; nunwvlk05a_idx_0 = nnfzsjooaq_idx_1 /
pk0lw220uo_idx_0 ; pk0lw220uo_idx_1 = nnfzsjooaq_idx_2 / pk0lw220uo_idx_0 ;
pk0lw220uo_idx_0 = bjiazabmpo . Gain1_Gain_fos5u53xa3 * pk0lw220uo_idx_1 ;
ojyypbpaqp_idx_0 = pk0lw220uo_idx_0 * pk0lw220uo_idx_0 ; pk0lw220uo_idx_0 =
ojyypbpaqp_idx_0 - bjiazabmpo . Constant4_Value ; ojyypbpaqp_idx_0 = (
ojyypbpaqp_idx_0 - bjiazabmpo . Constant3_Value_aiagav1bu5 ) *
pk0lw220uo_idx_1 ; g3mboufpwo_idx_1 = ( nnfzsjooaq_idx_0 * nnfzsjooaq_idx_0 +
nnfzsjooaq_idx_1 * nnfzsjooaq_idx_1 ) + nnfzsjooaq_idx_2 * nnfzsjooaq_idx_2 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . l2hnmjwsp2 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . l2hnmjwsp2
= 0 ; } pk0lw220uo_idx_1 = muDoubleScalarSqrt ( g3mboufpwo_idx_1 ) ; } else
if ( g3mboufpwo_idx_1 < 0.0 ) { pk0lw220uo_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( g3mboufpwo_idx_1 ) ) ; ngg51vuviwy . l2hnmjwsp2 = 1 ; }
else { pk0lw220uo_idx_1 = muDoubleScalarSqrt ( g3mboufpwo_idx_1 ) ; }
g3mboufpwo_idx_1 = rtP_Earth . mu / ( pk0lw220uo_idx_1 * pk0lw220uo_idx_1 ) *
bjiazabmpo . Gain_Gain_fosanw5ymw ; hfuaoawbo4x . jaehxyvqkj [ 0 ] =
nunwvlk05a_idx_1 * pk0lw220uo_idx_0 * emiiavfkh1 + nnfzsjooaq_idx_0 /
pk0lw220uo_idx_1 * g3mboufpwo_idx_1 ; hfuaoawbo4x . jaehxyvqkj [ 1 ] =
pk0lw220uo_idx_0 * nunwvlk05a_idx_0 * emiiavfkh1 + nnfzsjooaq_idx_1 /
pk0lw220uo_idx_1 * g3mboufpwo_idx_1 ; hfuaoawbo4x . jaehxyvqkj [ 2 ] =
nnfzsjooaq_idx_2 / pk0lw220uo_idx_1 * g3mboufpwo_idx_1 + emiiavfkh1 *
ojyypbpaqp_idx_0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtPrevAction =
ngg51vuviwy . irz310w2ge ; rtAction = - 1 ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( bjiazabmpo . DirectionCosineMatrixtoQuaternions_action != 1.0 ) {
rtAction = 0 ; } ngg51vuviwy . irz310w2ge = rtAction ; } else { rtAction =
ngg51vuviwy . irz310w2ge ; } if ( ( rtPrevAction != rtAction ) && (
rtPrevAction == 0 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( ngg51vuviwy . btdmegwoi1 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
gknheywe14 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . gknheywe14 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
fggjybp4nv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . fggjybp4nv = - 1 ; break ; } ngg51vuviwy . btdmegwoi1 = - 1 ;
} if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { if ( ssGetTaskTime ( rtS
, 1 ) != ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( k = 0 ; k < 3 ; k ++
) { for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { Sy [ k + 3 * i_p ] = ( ( hfuaoawbo4x
. hypth4pdun [ 3 * k + 1 ] * hfuaoawbo4x . hypth4pdun [ 3 * i_p + 1 ] +
hfuaoawbo4x . hypth4pdun [ 3 * k ] * hfuaoawbo4x . hypth4pdun [ 3 * i_p ] ) +
hfuaoawbo4x . hypth4pdun [ 3 * k + 2 ] * hfuaoawbo4x . hypth4pdun [ 3 * i_p +
2 ] ) + bjiazabmpo . Bias1_Bias [ 3 * i_p + k ] ; } } for ( k = 0 ; k < 9 ; k
++ ) { iy5b1drj5g [ k ] = ( muDoubleScalarAbs ( Sy [ k ] ) > bjiazabmpo .
DirectionCosineMatrixtoQuaternions_tolerance ) ; } tmp = iy5b1drj5g [ 0 ] ;
for ( i = 0 ; i < 8 ; i ++ ) { tmp = ( tmp || iy5b1drj5g [ i + 1 ] ) ; }
rtPrevAction = ngg51vuviwy . btdmegwoi1 ; rtAction = - 1 ; if (
muDoubleScalarAbs ( ( ( ( ( ( hfuaoawbo4x . hypth4pdun [ 0 ] * hfuaoawbo4x .
hypth4pdun [ 4 ] * hfuaoawbo4x . hypth4pdun [ 8 ] - hfuaoawbo4x . hypth4pdun
[ 0 ] * hfuaoawbo4x . hypth4pdun [ 5 ] * hfuaoawbo4x . hypth4pdun [ 7 ] ) -
hfuaoawbo4x . hypth4pdun [ 1 ] * hfuaoawbo4x . hypth4pdun [ 3 ] * hfuaoawbo4x
. hypth4pdun [ 8 ] ) + hfuaoawbo4x . hypth4pdun [ 2 ] * hfuaoawbo4x .
hypth4pdun [ 3 ] * hfuaoawbo4x . hypth4pdun [ 7 ] ) + hfuaoawbo4x .
hypth4pdun [ 1 ] * hfuaoawbo4x . hypth4pdun [ 5 ] * hfuaoawbo4x . hypth4pdun
[ 6 ] ) - hfuaoawbo4x . hypth4pdun [ 2 ] * hfuaoawbo4x . hypth4pdun [ 4 ] *
hfuaoawbo4x . hypth4pdun [ 6 ] ) + bjiazabmpo . Bias_Bias ) > bjiazabmpo .
DirectionCosineMatrixtoQuaternions_tolerance ) { rtAction = 0 ; } else { if (
tmp ) { rtAction = 1 ; } } ngg51vuviwy . btdmegwoi1 = rtAction ; if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
gknheywe14 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . gknheywe14 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
fggjybp4nv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . fggjybp4nv = - 1 ; break ; } } switch ( rtAction ) { case 0 :
if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtPrevAction = ngg51vuviwy .
gknheywe14 ; rtAction = - 1 ; if ( bjiazabmpo .
DirectionCosineMatrixtoQuaternions_action == 2.0 ) { rtAction = 0 ; } else {
if ( bjiazabmpo . DirectionCosineMatrixtoQuaternions_action == 3.0 ) {
rtAction = 1 ; } } ngg51vuviwy . gknheywe14 = rtAction ; if ( rtPrevAction !=
rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( bjiazabmpo
. Constant1_Value_ftvtqjp1us != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; }
srUpdateBC ( ngg51vuviwy . d530gaj1ii ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( bjiazabmpo
. Constant1_Value_ftvtqjp1us != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } srUpdateBC ( ngg51vuviwy . lzbmuq2yk2 )
; break ; } } srUpdateBC ( ngg51vuviwy . a2zz5n420u ) ; break ; case 1 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtPrevAction = ngg51vuviwy . fggjybp4nv ;
rtAction = - 1 ; if ( bjiazabmpo . DirectionCosineMatrixtoQuaternions_action
== 2.0 ) { rtAction = 0 ; } else { if ( bjiazabmpo .
DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction = 1 ; } }
ngg51vuviwy . fggjybp4nv = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( bjiazabmpo
. Constant1_Value_l2qqn3e4fv != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; }
srUpdateBC ( ngg51vuviwy . h1wj4fud0p ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( bjiazabmpo
. Constant1_Value_l2qqn3e4fv != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } srUpdateBC ( ngg51vuviwy . opmce12fqo )
; break ; } } srUpdateBC ( ngg51vuviwy . bzn0gp5jdi ) ; break ; } } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( ngg51vuviwy . jhr0vyxdh3 ) ; } } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( k = 0 ; k < 49 ; k ++ ) {
nnfzsjooaq_idx_0 = 0.0026457513110645908 * ngg51vuviwy . al21e1yegq [ k ] ;
X2 [ k ] = nnfzsjooaq_idx_0 ; X2 [ k + 49 ] = - nnfzsjooaq_idx_0 ; } for ( i
= 0 ; i < 14 ; i ++ ) { for ( k = 0 ; k < 7 ; k ++ ) { X2 [ k + 7 * i ] +=
ngg51vuviwy . fr1u3lpnkj [ k ] ; } } for ( i = 0 ; i < 14 ; i ++ ) { for ( k
= 0 ; k < 7 ; k ++ ) { Y2_e [ k + 7 * i ] = X2 [ 7 * i + k ] ; }
attitudePropagationNA_WmJbGJ68 ( & Y2_e [ 7 * i ] , hfuaoawbo4x . f0akllhmze
) ; } for ( i = 0 ; i < 7 ; i ++ ) { p1airozsub [ i ] = ngg51vuviwy .
fr1u3lpnkj [ i ] ; } attitudePropagationNA_WmJbGJ68 ( p1airozsub ,
hfuaoawbo4x . f0akllhmze ) ; tmp_e [ 0 ] = 0.999996999998 ; tmp_e [ 1 ] = -
0.071428642857214286 ; UTMeanCovSqrt_bM1O4v2d ( Wmean , tmp_e , - 999999.0 ,
p1airozsub , Y2_e , ngg51vuviwy . fr1u3lpnkj , ngg51vuviwy . al21e1yegq ) ;
memset ( & P [ 0 ] , 0 , 49U * sizeof ( real_T ) ) ; for ( k = 0 ; k < 7 ; k
++ ) { P [ k + 7 * k ] = 1.0 ; } qrFactor_dow5EKjD ( P , ngg51vuviwy .
al21e1yegq , bjiazabmpo . Q_Value ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID10 ( int_T tid ) { real_T
chygdxgike ; real_T fdcvlsnapk_idx_1 ; real_T fdcvlsnapk_idx_2 ; real_T
ix5sio1awm ; real_T jdgqlncavi ; real_T jmiqwl4wuz_idx_1 ; real_T
jmiqwl4wuz_idx_2 ; real_T jnvxrzr0ue ; real_T ljyggpl3ml ; hfuaoawbo4x .
ntohwlgjud [ 0 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 0 ] ;
hfuaoawbo4x . kox0yk51ix [ 0 ] = bjiazabmpo . Constant3_Value [ 0 ] ;
hfuaoawbo4x . ntohwlgjud [ 1 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 1
] ; hfuaoawbo4x . kox0yk51ix [ 1 ] = bjiazabmpo . Constant3_Value [ 1 ] ;
hfuaoawbo4x . ntohwlgjud [ 2 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 2
] ; hfuaoawbo4x . kox0yk51ix [ 2 ] = bjiazabmpo . Constant3_Value [ 2 ] ;
hfuaoawbo4x . jbummyrznk = bjiazabmpo . Gain1_Gain_l1jki2u5fa * rtP_Earth .
mu ; hfuaoawbo4x . bhk0qefpw3 [ 0 ] = bjiazabmpo . Inertia_Value [ 1 ] -
bjiazabmpo . Inertia_Value [ 2 ] ; hfuaoawbo4x . bhk0qefpw3 [ 1 ] =
bjiazabmpo . Inertia_Value [ 2 ] - bjiazabmpo . Inertia_Value [ 0 ] ;
hfuaoawbo4x . bhk0qefpw3 [ 2 ] = bjiazabmpo . Inertia_Value [ 0 ] -
bjiazabmpo . Inertia_Value [ 1 ] ; MagneticFieldInPolarCoordsTID1 ( ) ;
hfuaoawbo4x . dbb0wz0brw [ 0 ] = rtP_Spacecraft . initialAngularSpeed [ 0 ] ;
hfuaoawbo4x . dbb0wz0brw [ 1 ] = rtP_Spacecraft . initialAngularSpeed [ 1 ] ;
hfuaoawbo4x . dbb0wz0brw [ 2 ] = rtP_Spacecraft . initialAngularSpeed [ 2 ] ;
hfuaoawbo4x . axzca0bxot [ 0 ] = rtP_Spacecraft . initialAttitude [ 0 ] ;
hfuaoawbo4x . axzca0bxot [ 1 ] = rtP_Spacecraft . initialAttitude [ 1 ] ;
hfuaoawbo4x . axzca0bxot [ 2 ] = rtP_Spacecraft . initialAttitude [ 2 ] ;
hfuaoawbo4x . axzca0bxot [ 3 ] = rtP_Spacecraft . initialAttitude [ 3 ] ;
hfuaoawbo4x . k3y3ixdgrn [ 0 ] = bjiazabmpo . Inertia_Value [ 1 ] -
bjiazabmpo . Inertia_Value [ 2 ] ; hfuaoawbo4x . k3y3ixdgrn [ 1 ] =
bjiazabmpo . Inertia_Value [ 2 ] - bjiazabmpo . Inertia_Value [ 0 ] ;
hfuaoawbo4x . k3y3ixdgrn [ 2 ] = bjiazabmpo . Inertia_Value [ 0 ] -
bjiazabmpo . Inertia_Value [ 1 ] ; hfuaoawbo4x . ddyoytv0e2 = rtP_Const . Fe
/ rtP_Const . c ; hfuaoawbo4x . f3ygbdvaty = bjiazabmpo .
Gain1_Gain_km22rji0yo * bjiazabmpo . u821stMarch_Value ; chygdxgike =
bjiazabmpo . Sun_Value / ( bjiazabmpo . a_Value * bjiazabmpo . a_Value ) /
bjiazabmpo . a_Value ; jdgqlncavi = bjiazabmpo . Constant_Value_c0ie4jx1vv -
bjiazabmpo . e_Value * bjiazabmpo . e_Value ; if ( ssIsMajorTimeStep ( rtS )
) { if ( ngg51vuviwy . iwf1qimb54 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . iwf1qimb54
= 0 ; } jnvxrzr0ue = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { jnvxrzr0ue = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . iwf1qimb54 = 1 ; } else { jnvxrzr0ue =
muDoubleScalarSqrt ( jdgqlncavi ) ; } hfuaoawbo4x . g0423fm4yn = jnvxrzr0ue *
jdgqlncavi ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . bmw02bmfuu
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy .
bmw02bmfuu = 0 ; } hfuaoawbo4x . meblfsgtxo = muDoubleScalarSqrt ( chygdxgike
) ; } else if ( chygdxgike < 0.0 ) { hfuaoawbo4x . meblfsgtxo = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( chygdxgike ) ) ; ngg51vuviwy .
bmw02bmfuu = 1 ; } else { hfuaoawbo4x . meblfsgtxo = muDoubleScalarSqrt (
chygdxgike ) ; } hfuaoawbo4x . i15qhheq5s = ( bjiazabmpo .
Constant3_Value_fveye0j2gb - bjiazabmpo . e_Value * bjiazabmpo . e_Value ) *
bjiazabmpo . a_Value ; muDoubleScalarSinCos ( bjiazabmpo . u2_Gain * (
bjiazabmpo . Gain1_Gain_byeui5d4hz * bjiazabmpo .
Anglebetween3rdJanto21stMarch180_Value ) , & chygdxgike , & jdgqlncavi ) ;
muDoubleScalarSinCos ( bjiazabmpo . u2_Gain * ( bjiazabmpo .
Gain1_Gain_byeui5d4hz * ( bjiazabmpo . Gain_Gain_nrquqjsjbh * bjiazabmpo .
Ecliptic_Value ) ) , & jmiqwl4wuz_idx_1 , & fdcvlsnapk_idx_1 ) ;
muDoubleScalarSinCos ( bjiazabmpo . u2_Gain * ( bjiazabmpo .
Gain1_Gain_byeui5d4hz * bjiazabmpo . Constant_Value_mgrgcefnc2 ) , &
jmiqwl4wuz_idx_2 , & fdcvlsnapk_idx_2 ) ; ix5sio1awm = jdgqlncavi *
fdcvlsnapk_idx_1 * fdcvlsnapk_idx_2 - chygdxgike * jmiqwl4wuz_idx_1 *
jmiqwl4wuz_idx_2 ; ljyggpl3ml = jdgqlncavi * jmiqwl4wuz_idx_1 *
fdcvlsnapk_idx_2 - chygdxgike * fdcvlsnapk_idx_1 * jmiqwl4wuz_idx_2 ;
jnvxrzr0ue = jdgqlncavi * fdcvlsnapk_idx_1 * jmiqwl4wuz_idx_2 + chygdxgike *
jmiqwl4wuz_idx_1 * fdcvlsnapk_idx_2 ; chygdxgike = chygdxgike *
fdcvlsnapk_idx_1 * fdcvlsnapk_idx_2 + jdgqlncavi * jmiqwl4wuz_idx_1 *
jmiqwl4wuz_idx_2 ; jdgqlncavi = ( ( ix5sio1awm * ix5sio1awm + ljyggpl3ml *
ljyggpl3ml ) + jnvxrzr0ue * jnvxrzr0ue ) + chygdxgike * chygdxgike ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . copufix5e1 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . copufix5e1
= 0 ; } jdgqlncavi = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { jdgqlncavi = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . copufix5e1 = 1 ; } else { jdgqlncavi =
muDoubleScalarSqrt ( jdgqlncavi ) ; } ix5sio1awm /= jdgqlncavi ; ljyggpl3ml
/= jdgqlncavi ; jnvxrzr0ue /= jdgqlncavi ; chygdxgike /= jdgqlncavi ;
hfuaoawbo4x . fomozizwka = ( ljyggpl3ml * jnvxrzr0ue + ix5sio1awm *
chygdxgike ) * bjiazabmpo . Gain_Gain_msviodsdfg ; hfuaoawbo4x . dy3a2ou5re =
( ( bjiazabmpo . Constant_Value_mrthaqohbp - jnvxrzr0ue * jnvxrzr0ue ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_jrylcyky0d ; hfuaoawbo4x
. ihuo035dxp = ( ljyggpl3ml * chygdxgike - ix5sio1awm * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_fdnpx3hnab * bjiazabmpo . Constant5_Value ;
hfuaoawbo4x . iqwyi5ur24 = ( ljyggpl3ml * jnvxrzr0ue - ix5sio1awm *
chygdxgike ) * bjiazabmpo . Gain_Gain_j00moojqwi ; hfuaoawbo4x . epgzqlzua5 =
( ( bjiazabmpo . Constant_Value_gob0mxnrc1 - ljyggpl3ml * ljyggpl3ml ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_jieczjcfxj ; hfuaoawbo4x
. pcw0pyw2gh = ( ix5sio1awm * ljyggpl3ml + jnvxrzr0ue * chygdxgike ) *
bjiazabmpo . Gain1_Gain_epavf05nx2 * bjiazabmpo . Constant5_Value ;
hfuaoawbo4x . abz0n5qp4d = ( ljyggpl3ml * chygdxgike + ix5sio1awm *
jnvxrzr0ue ) * bjiazabmpo . Gain_Gain_lxppc43sr3 ; hfuaoawbo4x . bkxmmcqnop =
( jnvxrzr0ue * chygdxgike - ix5sio1awm * ljyggpl3ml ) * bjiazabmpo .
Gain1_Gain_pr0mjxkeko ; hfuaoawbo4x . f2wok2vtfw = ( ( bjiazabmpo .
Constant_Value_l4ftm45smy - ljyggpl3ml * ljyggpl3ml ) - jnvxrzr0ue *
jnvxrzr0ue ) * bjiazabmpo . Gain2_Gain_oh11qzcnsq * bjiazabmpo .
Constant5_Value ; hfuaoawbo4x . ifmzqc4riz = rtP_Earth . equatorialRadius *
rtP_Earth . equatorialRadius ; jdgqlncavi = ( ( bjiazabmpo .
Sensororientation_Value [ 0 ] * bjiazabmpo . Sensororientation_Value [ 0 ] +
bjiazabmpo . Sensororientation_Value [ 1 ] * bjiazabmpo .
Sensororientation_Value [ 1 ] ) + bjiazabmpo . Sensororientation_Value [ 2 ]
* bjiazabmpo . Sensororientation_Value [ 2 ] ) + bjiazabmpo .
Sensororientation_Value [ 3 ] * bjiazabmpo . Sensororientation_Value [ 3 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . kl0i1e2alg != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . kl0i1e2alg
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . kl0i1e2alg = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value [ 0 ] / chygdxgike ; jnvxrzr0ue = bjiazabmpo .
Sensororientation_Value [ 1 ] / chygdxgike ; ix5sio1awm = bjiazabmpo .
Sensororientation_Value [ 2 ] / chygdxgike ; chygdxgike = bjiazabmpo .
Sensororientation_Value [ 3 ] / chygdxgike ; hfuaoawbo4x . on1bmik0q5 = (
jnvxrzr0ue * ix5sio1awm + jdgqlncavi * chygdxgike ) * bjiazabmpo .
Gain_Gain_gakfyjlszi ; hfuaoawbo4x . fjdo1n5rtk = ( jnvxrzr0ue * chygdxgike -
jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain1_Gain_cp5gxmxv40 ; hfuaoawbo4x
. nxtdoutt0d = ( ( bjiazabmpo . Constant_Value_hucifuffuc - ix5sio1awm *
ix5sio1awm ) - chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_bqvzfgganp
; hfuaoawbo4x . fovlccel0m = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi *
chygdxgike ) * bjiazabmpo . Gain_Gain_jcxnesc51s ; hfuaoawbo4x . paj1cpcltz =
( jdgqlncavi * jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo .
Gain1_Gain_e5tqo52tku ; hfuaoawbo4x . hkj5lh1yfa = ( ( bjiazabmpo .
Constant_Value_itxm0x43si - jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike *
chygdxgike ) * bjiazabmpo . Gain2_Gain_jxsi55a1on ; hfuaoawbo4x . bx0wwwvie3
= ( jnvxrzr0ue * chygdxgike + jdgqlncavi * ix5sio1awm ) * bjiazabmpo .
Gain_Gain_omyfgx1n5h ; hfuaoawbo4x . le1tggu3fn = ( ix5sio1awm * chygdxgike -
jdgqlncavi * jnvxrzr0ue ) * bjiazabmpo . Gain1_Gain_n4ecq0uzvs ; hfuaoawbo4x
. d0oto4f2d1 = ( ( bjiazabmpo . Constant_Value_ezafw5tbx0 - jnvxrzr0ue *
jnvxrzr0ue ) - ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_bxmfdcbxd2
; jdgqlncavi = ( ( bjiazabmpo . Sensororientation_Value_hlfjdstuhw [ 0 ] *
bjiazabmpo . Sensororientation_Value_hlfjdstuhw [ 0 ] + bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 1 ] * bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 2 ] * bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 3 ] * bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . jcuo1zmasa != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . jcuo1zmasa
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . jcuo1zmasa = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_hlfjdstuhw [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_hlfjdstuhw [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_hlfjdstuhw [ 3
] / chygdxgike ; hfuaoawbo4x . bedykpbnax = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_cr4zczeez0 ; hfuaoawbo4x .
pem5nu1bix = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_g12m14aft0 ; hfuaoawbo4x . cklgc35k0o = ( (
bjiazabmpo . Constant_Value_kst2th0l1z - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_enxakegu4s ; hfuaoawbo4x
. iuompaq1le = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_lw5hirdrrr ; hfuaoawbo4x . nv4mt5uie4 = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_amkbhcbkvw ;
hfuaoawbo4x . gqzvomyv2t = ( ( bjiazabmpo . Constant_Value_igmvdrtaty -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_bttjb1ulla ; hfuaoawbo4x . dq2b0uqnue = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_pmdq3xatwv ; hfuaoawbo4x
. pvkeaggof5 = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_bgbnv4z5nx ; hfuaoawbo4x . k3livt50xe = ( (
bjiazabmpo . Constant_Value_m4goabuepu - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_cdbsbiii2b ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_cwstcpopt3 [ 0 ] * bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 0 ] + bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 1 ] * bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 2 ] * bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 3 ] * bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . ikkf1adnnz != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . ikkf1adnnz
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . ikkf1adnnz = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_cwstcpopt3 [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_cwstcpopt3 [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_cwstcpopt3 [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_cwstcpopt3 [ 3
] / chygdxgike ; hfuaoawbo4x . ge5q2osujn = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_pfg5czu2ug ; hfuaoawbo4x .
j0glhaz1ff = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_lgo5besblz ; hfuaoawbo4x . i3y3dprl5r = ( (
bjiazabmpo . Constant_Value_lntxh0ukmr - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_aaobkzaajt ; hfuaoawbo4x
. ffcfrhk5gr = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_dmquktubpv ; hfuaoawbo4x . ec2sfpkq33 = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_o20oz1n5pv ;
hfuaoawbo4x . ffh2jewlhj = ( ( bjiazabmpo . Constant_Value_imdxvhi4fs -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_bxr0hdxmou ; hfuaoawbo4x . hnikyctles = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_app3p5qkli ; hfuaoawbo4x
. j0rtedvqju = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_ggc5pki3i3 ; hfuaoawbo4x . ke1mnfoaag = ( (
bjiazabmpo . Constant_Value_k0omy0fwkr - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_jiiceq4a1g ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_escjrdlkcn [ 0 ] * bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 0 ] + bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 1 ] * bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 2 ] * bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 3 ] * bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . juyf13xdx1 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . juyf13xdx1
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . juyf13xdx1 = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_escjrdlkcn [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_escjrdlkcn [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_escjrdlkcn [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_escjrdlkcn [ 3
] / chygdxgike ; hfuaoawbo4x . nhqvej5sjs = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_kb00k2wbfq ; hfuaoawbo4x .
nj2t1zjkhc = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_iow1llvkxc ; hfuaoawbo4x . kbgyhm1fgr = ( (
bjiazabmpo . Constant_Value_ba5xlpus1a - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_dtunvm3otp ; hfuaoawbo4x
. cufy1px1rg = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_npe4zqgyas ; hfuaoawbo4x . pfsox4kypy = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_fdxpyxu0o1 ;
hfuaoawbo4x . krfsidb0qr = ( ( bjiazabmpo . Constant_Value_eqda1kzn3h -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_n4sn3p4zhh ; hfuaoawbo4x . l4o4wkfjy0 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_caz4q343an ; hfuaoawbo4x
. jpj2vzl1x4 = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_odtb3u3w54 ; hfuaoawbo4x . an502njneh = ( (
bjiazabmpo . Constant_Value_j3hxujgyee - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_pl1uwnp5vb ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_ezbdisr3i3 [ 0 ] * bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 0 ] + bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 1 ] * bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 2 ] * bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 3 ] * bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . fjx3hj3xwl != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . fjx3hj3xwl
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . fjx3hj3xwl = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_ezbdisr3i3 [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_ezbdisr3i3 [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_ezbdisr3i3 [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_ezbdisr3i3 [ 3
] / chygdxgike ; hfuaoawbo4x . ebprrb1pb4 = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_jfezxdcuu1 ; hfuaoawbo4x .
feykuvpqmt = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_mzwjkwmyds ; hfuaoawbo4x . oikscjj451 = ( (
bjiazabmpo . Constant_Value_myru2azkts - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_pt1tknsnuk ; hfuaoawbo4x
. lygujbzduh = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_cylo5ppz5d ; hfuaoawbo4x . aoeuzlyzik = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_evkyndzct5 ;
hfuaoawbo4x . iuat0etg51 = ( ( bjiazabmpo . Constant_Value_mpzaspn304 -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_ogm3tj3b4p ; hfuaoawbo4x . aev03jsiqx = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_lnevd4sqnk ; hfuaoawbo4x
. gawqt3r5dn = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_f5yo2mvezp ; hfuaoawbo4x . bcxyit2ic3 = ( (
bjiazabmpo . Constant_Value_ey5twm140q - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_mg22nq4b3k ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_luhksxjjam [ 0 ] * bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 0 ] + bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 1 ] * bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 2 ] * bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 3 ] * bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . o23cyyryiq != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . o23cyyryiq
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . o23cyyryiq = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_luhksxjjam [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_luhksxjjam [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_luhksxjjam [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_luhksxjjam [ 3
] / chygdxgike ; hfuaoawbo4x . ipvurj0y1d = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_f5mrtnkemr ; hfuaoawbo4x .
p5aysueaot = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_fdh0g1o02u ; hfuaoawbo4x . mvsw1v05hz = ( (
bjiazabmpo . Constant_Value_kkk1dzjy3p - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_gnny303ymj ; hfuaoawbo4x
. pv2okmnedn = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_bkbvyxdlek ; hfuaoawbo4x . i3vwzpv00l = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_pbfdoucssu ;
hfuaoawbo4x . goqadosznk = ( ( bjiazabmpo . Constant_Value_jbyhakx4ay -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_ijreebnsuw ; hfuaoawbo4x . n1y1fp1tkl = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_a2lqzra5qd ; hfuaoawbo4x
. lnpqfpiwgf = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_f45poxumoe ; hfuaoawbo4x . kdwyr4lpv1 = ( (
bjiazabmpo . Constant_Value_f1tb0wmrtm - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_necstpfmlp ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_c1w03cmwlz [ 0 ] * bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 0 ] + bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 1 ] * bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 2 ] * bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 3 ] * bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . csqu2frchz != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . csqu2frchz
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . csqu2frchz = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_c1w03cmwlz [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_c1w03cmwlz [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_c1w03cmwlz [ 3
] / chygdxgike ; hfuaoawbo4x . npvoy3nzmj = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_jom4zjkqot ; hfuaoawbo4x .
a2glfphjbj = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_ec5n4vlyml ; hfuaoawbo4x . pfsks0y3nr = ( (
bjiazabmpo . Constant_Value_c0bcxggzid - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_ppb55hsf22 ; hfuaoawbo4x
. du2qaabf5h = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_owfxeyg0hz ; hfuaoawbo4x . o5zklgmfkz = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_azstchlb2n ;
hfuaoawbo4x . iqpr3p3rs0 = ( ( bjiazabmpo . Constant_Value_cd21hrcv55 -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_azs3a4y21d ; hfuaoawbo4x . bbqhnrp1n5 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_lp1ded333l ; hfuaoawbo4x
. gztytqjrbr = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_e5iewy4mku ; hfuaoawbo4x . origvc1fia = ( (
bjiazabmpo . Constant_Value_i1rjqidmbj - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_p50urd0soy ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_f1bimmtkao [ 0 ] * bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 0 ] + bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 1 ] * bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 2 ] * bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 3 ] * bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . iz5crb2thf != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . iz5crb2thf
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . iz5crb2thf = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_f1bimmtkao [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_f1bimmtkao [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_f1bimmtkao [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_f1bimmtkao [ 3
] / chygdxgike ; hfuaoawbo4x . aqrhufuanw = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_aqtmdzg5ve ; hfuaoawbo4x .
hqxcud4qih = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_luiia42t5t ; hfuaoawbo4x . e3pw525aru = ( (
bjiazabmpo . Constant_Value_i54as2vhie - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_mb2nt12ulg ; hfuaoawbo4x
. cwsqdm0rrj = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_lychsiugxc ; hfuaoawbo4x . ehckrkdne1 = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_b1eddp32tw ;
hfuaoawbo4x . dantpmdd4u = ( ( bjiazabmpo . Constant_Value_ogstggr2j3 -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_nfkayg1huw ; hfuaoawbo4x . fxoiexsrms = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_nuvyvhffsa ; hfuaoawbo4x
. olyaqikc15 = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_ci4cvxslsl ; hfuaoawbo4x . hvkqpvk2my = ( (
bjiazabmpo . Constant_Value_oetlq3b1z2 - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_ktgwyxzbfl ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_gzezhgiiva [ 0 ] * bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 0 ] + bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 1 ] * bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 2 ] * bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 3 ] * bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . mnvqejctbx != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . mnvqejctbx
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . mnvqejctbx = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_gzezhgiiva [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_gzezhgiiva [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_gzezhgiiva [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_gzezhgiiva [ 3
] / chygdxgike ; hfuaoawbo4x . hwi4oft1hq = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_mrg5lsnokn ; hfuaoawbo4x .
lsjk5initb = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_hbwgr3wfvo ; hfuaoawbo4x . fkskvmplcl = ( (
bjiazabmpo . Constant_Value_dqtse52l4d - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_ez1qvjlr1d ; hfuaoawbo4x
. iggwakfyei = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_hiv2r3l01b ; hfuaoawbo4x . lt1fko3tiq = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_pxrflmc1o4 ;
hfuaoawbo4x . krzyy5xscm = ( ( bjiazabmpo . Constant_Value_aocyzox0ld -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_g5qbykwveo ; hfuaoawbo4x . aywwgafww0 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_hgfy5zqhxv ; hfuaoawbo4x
. jsl11ciyta = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_eo1xrtusyu ; hfuaoawbo4x . dlfxn2mgpk = ( (
bjiazabmpo . Constant_Value_atme3hmtbv - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_ismz453fn1 ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_pvtoldl5dv [ 0 ] * bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 0 ] + bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 1 ] * bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 2 ] * bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 3 ] * bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . ei5m4vt2an != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . ei5m4vt2an
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . ei5m4vt2an = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_pvtoldl5dv [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_pvtoldl5dv [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_pvtoldl5dv [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_pvtoldl5dv [ 3
] / chygdxgike ; hfuaoawbo4x . dqhytx5wim = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_ena5yszh4w ; hfuaoawbo4x .
ovzlu0geh0 = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_eqkjxlvbiq ; hfuaoawbo4x . ikh4mq35wm = ( (
bjiazabmpo . Constant_Value_epgscsipyz - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_k0lo0mgba2 ; hfuaoawbo4x
. fn0fkozy3r = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_j4d3hvhs43 ; hfuaoawbo4x . e5dnskanhg = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_ceiu2lnwhi ;
hfuaoawbo4x . psvpdz1e45 = ( ( bjiazabmpo . Constant_Value_h300vfl4mv -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_htyiogkmpg ; hfuaoawbo4x . irny0upjdu = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_k42ekcf23x ; hfuaoawbo4x
. ovxzd4nxnl = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_izo4ouweai ; hfuaoawbo4x . ksjfkatzta = ( (
bjiazabmpo . Constant_Value_apsk02wc0m - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_bgeppzp5tr ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_g4fybr4ojz [ 0 ] * bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 0 ] + bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 1 ] * bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 2 ] * bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 3 ] * bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . ojyjobcix2 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . ojyjobcix2
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . ojyjobcix2 = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_g4fybr4ojz [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_g4fybr4ojz [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_g4fybr4ojz [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_g4fybr4ojz [ 3
] / chygdxgike ; hfuaoawbo4x . f2sr2z2tiv = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_crryondw0o ; hfuaoawbo4x .
l145oj4ihb = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_lzvj53au2u ; hfuaoawbo4x . bw0tsy3rjx = ( (
bjiazabmpo . Constant_Value_oi0kxpowja - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_perzcljgjz ; hfuaoawbo4x
. ninagdnqkp = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_evjcc1eafd ; hfuaoawbo4x . dytdqpfldp = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_gns40wabnm ;
hfuaoawbo4x . lmx5u0qfh0 = ( ( bjiazabmpo . Constant_Value_bx4ma4qdmb -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_i0hel0ofcl ; hfuaoawbo4x . dwrpdlv2f5 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_mniibtfrh4 ; hfuaoawbo4x
. hoiwjokbvl = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_dsk352okyn ; hfuaoawbo4x . pwpsjlqzli = ( (
bjiazabmpo . Constant_Value_ihm1fmgdud - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_f4f4o3e0ao ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_bfbchbxuif [ 0 ] * bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 0 ] + bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 1 ] * bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 2 ] * bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 3 ] * bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . cxc22wbzyx != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . cxc22wbzyx
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . cxc22wbzyx = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_bfbchbxuif [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_bfbchbxuif [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_bfbchbxuif [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_bfbchbxuif [ 3
] / chygdxgike ; hfuaoawbo4x . p0aejvus1i = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_l3rthal15j ; hfuaoawbo4x .
pro1ckqrto = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_dizs3vyxgq ; hfuaoawbo4x . pl52eab1mb = ( (
bjiazabmpo . Constant_Value_j5awaeon0r - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_im22oggu52 ; hfuaoawbo4x
. lomp3tpos5 = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_pvyl4t2yw0 ; hfuaoawbo4x . c5wy4rvh2r = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_gqxohufbgj ;
hfuaoawbo4x . fgmdntdopa = ( ( bjiazabmpo . Constant_Value_a1zgpg42vr -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_axoynd5pv4 ; hfuaoawbo4x . gbvr55mtvj = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_gnoc2rqmdh ; hfuaoawbo4x
. kspdub4osy = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_ckkbstydzz ; hfuaoawbo4x . fbm20tee0q = ( (
bjiazabmpo . Constant_Value_dbnrgxoczr - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_bq1ops2rb1 ; jdgqlncavi =
( ( bjiazabmpo . Constant3_Value_lcleawr1lx [ 0 ] * bjiazabmpo .
Constant3_Value_lcleawr1lx [ 0 ] + bjiazabmpo . Constant3_Value_lcleawr1lx [
1 ] * bjiazabmpo . Constant3_Value_lcleawr1lx [ 1 ] ) + bjiazabmpo .
Constant3_Value_lcleawr1lx [ 2 ] * bjiazabmpo . Constant3_Value_lcleawr1lx [
2 ] ) + bjiazabmpo . Constant3_Value_lcleawr1lx [ 3 ] * bjiazabmpo .
Constant3_Value_lcleawr1lx [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
ngg51vuviwy . fddcozpon3 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ngg51vuviwy . fddcozpon3 = 0 ; } chygdxgike = muDoubleScalarSqrt (
jdgqlncavi ) ; } else if ( jdgqlncavi < 0.0 ) { chygdxgike = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( jdgqlncavi ) ) ; ngg51vuviwy .
fddcozpon3 = 1 ; } else { chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; }
jdgqlncavi = bjiazabmpo . Constant3_Value_lcleawr1lx [ 2 ] / chygdxgike ;
jnvxrzr0ue = bjiazabmpo . Constant3_Value_lcleawr1lx [ 3 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Constant3_Value_lcleawr1lx [ 1 ] / chygdxgike ;
chygdxgike = bjiazabmpo . Constant3_Value_lcleawr1lx [ 0 ] / chygdxgike ;
hfuaoawbo4x . ndw2shsl4a = ( ( ( bjiazabmpo . Constant_Value_ci00grrtff -
jdgqlncavi * jdgqlncavi ) - jnvxrzr0ue * jnvxrzr0ue ) * bjiazabmpo .
Gain2_Gain_k2nkv35kyn * bjiazabmpo . Constant1_Value_ejoqpgv2ji [ 0 ] + (
ix5sio1awm * jdgqlncavi + chygdxgike * jnvxrzr0ue ) * bjiazabmpo .
Gain_Gain_avea13ypea * bjiazabmpo . Constant1_Value_ejoqpgv2ji [ 1 ] ) + (
ix5sio1awm * jnvxrzr0ue - chygdxgike * jdgqlncavi ) * bjiazabmpo .
Gain1_Gain_mstcqdbdwc * bjiazabmpo . Constant1_Value_ejoqpgv2ji [ 2 ] ;
hfuaoawbo4x . ao2ehvfzbb = ( ( ( bjiazabmpo . Constant_Value_fe5n5wpanv -
ix5sio1awm * ix5sio1awm ) - jnvxrzr0ue * jnvxrzr0ue ) * bjiazabmpo .
Gain2_Gain_dp2u42f00i * bjiazabmpo . Constant1_Value_ejoqpgv2ji [ 1 ] + (
ix5sio1awm * jdgqlncavi - chygdxgike * jnvxrzr0ue ) * bjiazabmpo .
Gain_Gain_jsx4pu1q4q * bjiazabmpo . Constant1_Value_ejoqpgv2ji [ 0 ] ) + (
chygdxgike * ix5sio1awm + jdgqlncavi * jnvxrzr0ue ) * bjiazabmpo .
Gain1_Gain_lp32ym3e5x * bjiazabmpo . Constant1_Value_ejoqpgv2ji [ 2 ] ;
hfuaoawbo4x . g22j2f1db1 = ( ( ix5sio1awm * jnvxrzr0ue + chygdxgike *
jdgqlncavi ) * bjiazabmpo . Gain_Gain_p3jxtnv3m2 * bjiazabmpo .
Constant1_Value_ejoqpgv2ji [ 0 ] + ( jdgqlncavi * jnvxrzr0ue - chygdxgike *
ix5sio1awm ) * bjiazabmpo . Gain1_Gain_gaefdnqghd * bjiazabmpo .
Constant1_Value_ejoqpgv2ji [ 1 ] ) + ( ( bjiazabmpo .
Constant_Value_ktx0dxt4vq - ix5sio1awm * ix5sio1awm ) - jdgqlncavi *
jdgqlncavi ) * bjiazabmpo . Gain2_Gain_fgpn4tkmjp * bjiazabmpo .
Constant1_Value_ejoqpgv2ji [ 2 ] ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { fqjkpnrvjo * _rtXAbsTol ; real_T dc ; uint32_T
numTicksToNextSampleHit ; uint32_T totalTicksInPeriod ; _rtXAbsTol = ( (
fqjkpnrvjo * ) ssGetAbsTolVector ( rtS ) ) ; ngg51vuviwy . ohqzjzllib = 0 ;
ngg51vuviwy . ogiu2msyaa = 0 ; ngg51vuviwy . gofnphz0kz = 0 ; ngg51vuviwy .
j3jpf41hkf = 0 ; _rtXAbsTol -> ozozulc01j [ 0 ] = bjiazabmpo .
Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ceu1xu3gg2 [ 0 ] = bjiazabmpo .
Integrator_AbsoluteTolerance ; _rtXAbsTol -> ozozulc01j [ 1 ] = bjiazabmpo .
Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ceu1xu3gg2 [ 1 ] = bjiazabmpo .
Integrator_AbsoluteTolerance ; _rtXAbsTol -> ozozulc01j [ 2 ] = bjiazabmpo .
Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ceu1xu3gg2 [ 2 ] = bjiazabmpo .
Integrator_AbsoluteTolerance ; ngg51vuviwy . bsrppkoaqa = 0 ; if (
ssIsSampleHit ( rtS , 8 , 0 ) ) { if ( ngg51vuviwy . ptxplb3iya ) { dc =
hfuaoawbo4x . fofwr0d1hg [ 0 ] ; if ( hfuaoawbo4x . fofwr0d1hg [ 0 ] > 1.0 )
{ dc = 1.0 ; } dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc *
bjiazabmpo . PWM_Period + dc * bjiazabmpo . PWM_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T )
- dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16
* bjiazabmpo . PWM_Period + bjiazabmpo . PWM_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; } totalTicksInPeriod
= dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ;
if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T )
numTicksToNextSampleHit ) ; ; ngg51vuviwy . ptxplb3iya = false ; ngg51vuviwy
. bj0piypish = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T )
totalTicksInPeriod ) ; ; ngg51vuviwy . ptxplb3iya = true ; ngg51vuviwy .
bj0piypish = true ; } ngg51vuviwy . mqtw444yv2 = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( ngg51vuviwy . bj0piypish ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * bjiazabmpo . PWM_Period +
bjiazabmpo . PWM_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 8 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( ngg51vuviwy . mqtw444yv2 > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ngg51vuviwy .
mqtw444yv2 ) ; ; } } ngg51vuviwy . ptxplb3iya = true ; ngg51vuviwy .
bj0piypish = true ; } } if ( ssIsSampleHit ( rtS , 9 , 0 ) ) { if (
ngg51vuviwy . b2iivkxpjc ) { dc = hfuaoawbo4x . fofwr0d1hg [ 1 ] ; if (
hfuaoawbo4x . fofwr0d1hg [ 1 ] > 1.0 ) { dc = 1.0 ; } dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc * bjiazabmpo .
PWM1_Period + dc * bjiazabmpo . PWM1_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T )
- dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16
* bjiazabmpo . PWM1_Period + bjiazabmpo . PWM1_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; } totalTicksInPeriod
= dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ;
if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
numTicksToNextSampleHit ) ; ; ngg51vuviwy . b2iivkxpjc = false ; ngg51vuviwy
. bwihaxowku = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
totalTicksInPeriod ) ; ; ngg51vuviwy . b2iivkxpjc = true ; ngg51vuviwy .
bwihaxowku = true ; } ngg51vuviwy . gre0ylsh2c = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( ngg51vuviwy . bwihaxowku ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * bjiazabmpo . PWM1_Period +
bjiazabmpo . PWM1_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 9 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( ngg51vuviwy . gre0ylsh2c > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ngg51vuviwy .
gre0ylsh2c ) ; ; } } ngg51vuviwy . b2iivkxpjc = true ; ngg51vuviwy .
bwihaxowku = true ; } } if ( ssIsSampleHit ( rtS , 7 , 0 ) ) { if (
ngg51vuviwy . d2iaudcqjt ) { dc = hfuaoawbo4x . fofwr0d1hg [ 2 ] ; if (
hfuaoawbo4x . fofwr0d1hg [ 2 ] > 1.0 ) { dc = 1.0 ; } dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc * bjiazabmpo .
PWM2_Period + dc * bjiazabmpo . PWM2_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T )
- dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16
* bjiazabmpo . PWM2_Period + bjiazabmpo . PWM2_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; } totalTicksInPeriod
= dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ;
if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ( real_T )
numTicksToNextSampleHit ) ; ; ngg51vuviwy . d2iaudcqjt = false ; ngg51vuviwy
. eiyp1urgre = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ( real_T )
totalTicksInPeriod ) ; ; ngg51vuviwy . d2iaudcqjt = true ; ngg51vuviwy .
eiyp1urgre = true ; } ngg51vuviwy . jfsef4ewnb = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( ngg51vuviwy . eiyp1urgre ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * bjiazabmpo . PWM2_Period +
bjiazabmpo . PWM2_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 7 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( ngg51vuviwy . jfsef4ewnb > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ngg51vuviwy .
jfsef4ewnb ) ; ; } } ngg51vuviwy . d2iaudcqjt = true ; ngg51vuviwy .
eiyp1urgre = true ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID10 (
int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
okm3mf5pgw * _rtXdot ; _rtXdot = ( ( okm3mf5pgw * ) ssGetdX ( rtS ) ) ;
_rtXdot -> cxzg0u0ymm [ 0 ] = hfuaoawbo4x . p3pcl4mtnq [ 0 ] ; _rtXdot ->
ozozulc01j [ 0 ] = hfuaoawbo4x . djfx2ozwz1 [ 0 ] ; _rtXdot -> cxzg0u0ymm [ 1
] = hfuaoawbo4x . p3pcl4mtnq [ 1 ] ; _rtXdot -> ozozulc01j [ 1 ] =
hfuaoawbo4x . djfx2ozwz1 [ 1 ] ; _rtXdot -> cxzg0u0ymm [ 2 ] = hfuaoawbo4x .
p3pcl4mtnq [ 2 ] ; _rtXdot -> ozozulc01j [ 2 ] = hfuaoawbo4x . djfx2ozwz1 [ 2
] ; _rtXdot -> osavuy4txz [ 0 ] = hfuaoawbo4x . lekkjhfcii [ 0 ] ; _rtXdot ->
osavuy4txz [ 1 ] = hfuaoawbo4x . lekkjhfcii [ 1 ] ; _rtXdot -> osavuy4txz [ 2
] = hfuaoawbo4x . lekkjhfcii [ 2 ] ; _rtXdot -> osavuy4txz [ 3 ] =
hfuaoawbo4x . lekkjhfcii [ 3 ] ; _rtXdot -> exrjjbh4to = hfuaoawbo4x .
psr0r0bk4j ; _rtXdot -> ceu1xu3gg2 [ 0 ] = hfuaoawbo4x . jaehxyvqkj [ 0 ] ;
_rtXdot -> ceu1xu3gg2 [ 1 ] = hfuaoawbo4x . jaehxyvqkj [ 1 ] ; _rtXdot ->
ceu1xu3gg2 [ 2 ] = hfuaoawbo4x . jaehxyvqkj [ 2 ] ; _rtXdot -> f3u5ihkx4m =
hfuaoawbo4x . ncrcxz2klw ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { l2b1jcqirt * _rtZCSV ; _rtZCSV = ( ( l2b1jcqirt *
) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> gbwaupwoiq = hfuaoawbo4x .
aznxfnvabf - bjiazabmpo . NormalizeVector_maxzero_idjlccn1tr ; _rtZCSV ->
ldbf0ttnzk = hfuaoawbo4x . chstcquajb - bjiazabmpo .
NormalizeVector1_maxzero_pe3bb51lb3 ; _rtZCSV -> afrryz20wf = hfuaoawbo4x .
jcrf3ejwt5 - bjiazabmpo . NormalizeVector3_maxzero ; _rtZCSV -> kyit4brrdg =
hfuaoawbo4x . bcu4ylgp31 - bjiazabmpo . NormalizeVector4_maxzero ; _rtZCSV ->
mote1xwkch = 0.0 ; if ( hfuaoawbo4x . du15nl3tzh > 0.0 ) { _rtZCSV ->
mote1xwkch = 1.0 ; } { real_T * zcsv = & ( ( ( l2b1jcqirt * )
ssGetSolverZcSignalVector ( rtS ) ) -> ncinmpljj2 [ 0 ] ) ; int_T i ; for ( i
= 0 ; i < 5 ; i ++ ) { zcsv [ i ] = 0.0 ; } } if ( ngg51vuviwy . bq4i23vlh3
== 1 ) { _rtZCSV -> ncinmpljj2 [ 0 ] = 0.0 ; _rtZCSV -> ncinmpljj2 [ 1 ] =
0.0 ; if ( ( hfuaoawbo4x . hypth4pdun [ 4 ] > hfuaoawbo4x . hypth4pdun [ 0 ]
) && ( hfuaoawbo4x . hypth4pdun [ 4 ] > hfuaoawbo4x . hypth4pdun [ 8 ] ) ) {
_rtZCSV -> ncinmpljj2 [ 0 ] = 1.0 ; } else { if ( hfuaoawbo4x . hypth4pdun [
8 ] > hfuaoawbo4x . hypth4pdun [ 0 ] ) { _rtZCSV -> ncinmpljj2 [ 1 ] = 1.0 ;
} } { ( ( l2b1jcqirt * ) ssGetSolverZcSignalVector ( rtS ) ) -> o0lz3kn4mx =
0.0 ; } if ( ngg51vuviwy . fg3qvdmgz4 == 0 ) { _rtZCSV -> o0lz3kn4mx =
hfuaoawbo4x . its1kwdpoq ; } { ( ( l2b1jcqirt * ) ssGetSolverZcSignalVector (
rtS ) ) -> prozp3gkhr = 0.0 ; } if ( ngg51vuviwy . fg3qvdmgz4 == 1 ) {
_rtZCSV -> prozp3gkhr = hfuaoawbo4x . cvmohjxrdw ; } { ( ( l2b1jcqirt * )
ssGetSolverZcSignalVector ( rtS ) ) -> klnrmugqhi = 0.0 ; } if ( ngg51vuviwy
. fg3qvdmgz4 == 2 ) { _rtZCSV -> klnrmugqhi = hfuaoawbo4x . punl0cw1in ; } }
_rtZCSV -> npcpvebz4b [ 0 ] = 0.0 ; _rtZCSV -> npcpvebz4b [ 1 ] = 0.0 ; if (
hfuaoawbo4x . njop3q5gx2 > 1.0 ) { _rtZCSV -> npcpvebz4b [ 0 ] = 1.0 ; } else
{ if ( hfuaoawbo4x . njop3q5gx2 < - 1.0 ) { _rtZCSV -> npcpvebz4b [ 1 ] = 1.0
; } } _rtZCSV -> ikk0l1on5i [ 0 ] = 0.0 ; _rtZCSV -> ikk0l1on5i [ 1 ] = 0.0 ;
if ( hfuaoawbo4x . h23bmldhv4 > 1.0 ) { _rtZCSV -> ikk0l1on5i [ 0 ] = 1.0 ; }
else { if ( hfuaoawbo4x . h23bmldhv4 < - 1.0 ) { _rtZCSV -> ikk0l1on5i [ 1 ]
= 1.0 ; } } } void MdlTerminate ( void ) { gcif3exjdu ( & ( ngg51vuviwy .
as0qpnsv3x . rtm ) ) ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 15 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 10 ) ; ssSetNumBlocks ( rtS , 1911 ) ;
ssSetNumBlockIO ( rtS , 232 ) ; ssSetNumBlockParams ( rtS , 631 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetSampleTime ( rtS , 3 , 0.03 ) ; ssSetSampleTime ( rtS , 4 , 0.1 ) ;
ssSetSampleTime ( rtS , 5 , 1.0 ) ; ssSetSampleTime ( rtS , 6 , 2.0 ) ;
ssSetSampleTime ( rtS , 7 , 0.1 ) ; ssSetSampleTime ( rtS , 8 , 0.1 ) ;
ssSetSampleTime ( rtS , 9 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; ssSetOffsetTime ( rtS , 4 , 0.0 ) ;
ssSetOffsetTime ( rtS , 5 , 0.0 ) ; ssSetOffsetTime ( rtS , 6 , 0.0 ) ;
ssSetOffsetTime ( rtS , 7 , - 20.0 ) ; ssSetOffsetTime ( rtS , 8 , - 21.0 ) ;
ssSetOffsetTime ( rtS , 9 , - 22.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 2276260034U ) ; ssSetChecksumVal ( rtS , 1 ,
4289519509U ) ; ssSetChecksumVal ( rtS , 2 , 774707880U ) ; ssSetChecksumVal
( rtS , 3 , 3737108171U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & hfuaoawbo4x ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof (
hfuaoawbo4x ) , "BlockIO" ) ; ( void ) memset ( ( ( void * ) & hfuaoawbo4x )
, 0 , sizeof ( hfuaoawbo4 ) ) ; } { real_T * x = ( real_T * ) & o1yff13vlj3 ;
ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
o1yff13vlj ) ) ; } { void * dwork = ( void * ) & ngg51vuviwy ; ssSetRootDWork
( rtS , dwork ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( ngg51vuviwy ) ,
"DWork" ) ; ( void ) memset ( dwork , 0 , sizeof ( ngg51vuviw ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 19 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
stateEstimatorComparison_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"stateEstimatorComparison" ) ; ssSetPath ( rtS , "stateEstimatorComparison" )
; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 7200.0 ) ; dpqzzutcg1 ( rtS
, 0 , 0 , & ( ngg51vuviwy . as0qpnsv3x . rtm ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
, 0 , - 1 ) ; { char_T * tempStr = rtwCAPI_EncodePath (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; } { static ssJacobianPerturbationBounds
jacobianPerturbationBounds ; ssSetJacobianPerturbationBounds ( rtS , &
jacobianPerturbationBounds ) ; } { static ssSolverInfo slvrInfo ; static
boolean_T contStatesDisabled [ 15 ] ; static real_T absTol [ 15 ] = { 1.0E-14
, 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 ,
1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 } ;
static uint8_T absTolControl [ 15 ] = { 0U , 0U , 0U , 1U , 1U , 1U , 0U , 0U
, 0U , 0U , 0U , 1U , 1U , 1U , 0U } ; static real_T
contStateJacPerturbBoundMinVec [ 15 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 15 ] ; static uint8_T zcAttributes [ 14 ] =
{ ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 1 ] = { { 3 * sizeof ( real_T ) , ( char * ) ( &
hfuaoawbo4x . f0akllhmze [ 0 ] ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i <
15 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 1.0E-13 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0
) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 )
; ssSetMaxStepSize ( rtS , 0.01 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
1 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode113" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector ( rtS , absTol )
; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 14 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverZcThreshold ( rtS , 1.0E-13 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 14 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 2276260034U ) ; ssSetChecksumVal ( rtS , 1 ,
4289519509U ) ; ssSetChecksumVal ( rtS , 2 , 774707880U ) ; ssSetChecksumVal
( rtS , 3 , 3737108171U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 51 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = ( sysRanDType * ) &
ngg51vuviwy . k0fulbi3y3 ; systemRan [ 4 ] = ( sysRanDType * ) & ngg51vuviwy
. nkkan2lumh ; systemRan [ 5 ] = ( sysRanDType * ) & ngg51vuviwy .
ncyqqgn1fak . n0vodpbpn0 ; systemRan [ 6 ] = ( sysRanDType * ) & ngg51vuviwy
. dhmxxudzxm ; systemRan [ 7 ] = ( sysRanDType * ) & ngg51vuviwy . ppg4ibcbt5
; systemRan [ 8 ] = ( sysRanDType * ) & ngg51vuviwy . oeck1vxca3 . n0vodpbpn0
; systemRan [ 9 ] = & rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled
; systemRan [ 11 ] = ( sysRanDType * ) & ngg51vuviwy . picfdcdfap ; systemRan
[ 12 ] = ( sysRanDType * ) & ngg51vuviwy . gudujy1ejr ; systemRan [ 13 ] = (
sysRanDType * ) & ngg51vuviwy . jeex0coj3h ; systemRan [ 14 ] = ( sysRanDType
* ) & ngg51vuviwy . bdbstwmumv ; systemRan [ 15 ] = ( sysRanDType * ) &
ngg51vuviwy . hrhkqhh3g2 ; systemRan [ 16 ] = ( sysRanDType * ) & ngg51vuviwy
. opmce12fqo ; systemRan [ 17 ] = ( sysRanDType * ) & ngg51vuviwy .
h1wj4fud0p ; systemRan [ 18 ] = ( sysRanDType * ) & ngg51vuviwy . bzn0gp5jdi
; systemRan [ 19 ] = ( sysRanDType * ) & ngg51vuviwy . lzbmuq2yk2 ; systemRan
[ 20 ] = ( sysRanDType * ) & ngg51vuviwy . d530gaj1ii ; systemRan [ 21 ] = (
sysRanDType * ) & ngg51vuviwy . a2zz5n420u ; systemRan [ 22 ] = ( sysRanDType
* ) & ngg51vuviwy . jhr0vyxdh3 ; systemRan [ 23 ] = & rtAlwaysEnabled ;
systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = & rtAlwaysEnabled ;
systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = & rtAlwaysEnabled ;
systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = & rtAlwaysEnabled ;
systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] = & rtAlwaysEnabled ;
systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] = & rtAlwaysEnabled ;
systemRan [ 34 ] = & rtAlwaysEnabled ; systemRan [ 35 ] = & rtAlwaysEnabled ;
systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = & rtAlwaysEnabled ;
systemRan [ 38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = & rtAlwaysEnabled ;
systemRan [ 40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = ( sysRanDType * ) &
ngg51vuviwy . obgdl4vvts ; systemRan [ 42 ] = ( sysRanDType * ) & ngg51vuviwy
. obgdl4vvts ; systemRan [ 43 ] = ( sysRanDType * ) & ngg51vuviwy .
fp0vvmmarz ; systemRan [ 44 ] = ( sysRanDType * ) & ngg51vuviwy . fp0vvmmarz
; systemRan [ 45 ] = ( sysRanDType * ) & ngg51vuviwy . jmzxa5y3x1 ; systemRan
[ 46 ] = ( sysRanDType * ) & ngg51vuviwy . jmzxa5y3x1 ; systemRan [ 47 ] = &
rtAlwaysEnabled ; systemRan [ 48 ] = & rtAlwaysEnabled ; systemRan [ 49 ] = &
rtAlwaysEnabled ; systemRan [ 50 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 10 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID10 ( tid ) ; }
