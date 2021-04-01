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
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 5 , & stopRequested ) ; }
rtExtModeShutdown ( 5 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 6 ; const char_T
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
] = { 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "RandSrcCreateSeeds_64.h"
#include "RandSrcInitState_GZ.h"
#include "RandSrc_GZ_D.h"
#include "UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_NiIj5RwG.h"
#include "UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO.h"
#include "UTMeanCovSqrt_bM1O4v2d.h"
#include "attitudePropagationNA_WmJbGJ68.h"
#include "qrFactor_dow5EKjD.h"
#include "qr_FYLMsjgk.h"
hfuaoawbo4 hfuaoawbo4x ; o1yff13vlj o1yff13vlj3 ; ngg51vuviw ngg51vuviwy ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
itnis34hf1 ( SimStruct * rtS_e ) { if ( ssGetTaskTime ( rtS_e , 0 ) !=
ssGetTStart ( rtS_e ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e
) ; } } void lk0crlqaa1 ( SimStruct * rtS_p ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } void ncyqqgn1fa (
real_T oxwshicem5 , real_T * huwiric4fx ) { * huwiric4fx = oxwshicem5 ; }
void MdlInitialize ( void ) { boolean_T tmp ; ngg51vuviwy . j3jpf41hkf = 1 ;
if ( ssIsFirstInitCond ( rtS ) ) { o1yff13vlj3 . exrjjbh4to = 0.0 ; tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy . j3jpf41hkf = ! tmp
; } else { ngg51vuviwy . j3jpf41hkf = 1 ; } o1yff13vlj3 . ozozulc01j [ 0 ] =
0.0 ; o1yff13vlj3 . ozozulc01j [ 1 ] = - 7128.137 ; o1yff13vlj3 . ozozulc01j
[ 2 ] = 0.0 ; } ngg51vuviwy . ogiu2msyaa = 1 ; if ( ssIsFirstInitCond ( rtS )
) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy . ogiu2msyaa = ! tmp
; } else { ngg51vuviwy . ogiu2msyaa = 1 ; } o1yff13vlj3 . osavuy4txz [ 0 ] =
1.0 ; o1yff13vlj3 . osavuy4txz [ 1 ] = 0.0 ; o1yff13vlj3 . osavuy4txz [ 2 ] =
0.0 ; o1yff13vlj3 . osavuy4txz [ 3 ] = 0.0 ; } ngg51vuviwy . gofnphz0kz = 1 ;
if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ;
if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy .
gofnphz0kz = ! tmp ; } else { ngg51vuviwy . gofnphz0kz = 1 ; } o1yff13vlj3 .
cxzg0u0ymm [ 0 ] = 0.0010490819691035681 ; o1yff13vlj3 . cxzg0u0ymm [ 1 ] =
0.0 ; o1yff13vlj3 . cxzg0u0ymm [ 2 ] = 0.0 ; } ngg51vuviwy . ohqzjzllib = 1 ;
if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ;
if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy .
ohqzjzllib = ! tmp ; } else { ngg51vuviwy . ohqzjzllib = 1 ; } o1yff13vlj3 .
ceu1xu3gg2 [ 0 ] = 0.0 ; o1yff13vlj3 . ceu1xu3gg2 [ 1 ] = 0.0 ; o1yff13vlj3 .
ceu1xu3gg2 [ 2 ] = - 7.478 ; } ngg51vuviwy . bsrppkoaqa = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; ngg51vuviwy .
bsrppkoaqa = ! tmp ; } else { ngg51vuviwy . bsrppkoaqa = 1 ; } } hfuaoawbo4x
. my3qvtobl0 [ 0 ] = bjiazabmpo . Merge_InitialOutput [ 0 ] ; hfuaoawbo4x .
my3qvtobl0 [ 1 ] = bjiazabmpo . Merge_InitialOutput [ 1 ] ; hfuaoawbo4x .
my3qvtobl0 [ 2 ] = bjiazabmpo . Merge_InitialOutput [ 2 ] ; hfuaoawbo4x .
my3qvtobl0 [ 3 ] = bjiazabmpo . Merge_InitialOutput [ 3 ] ; } void MdlStart (
void ) { int32_T i ; uint32_T initSeed ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} hfuaoawbo4x . nj1dtdqjvk [ 0 ] = bjiazabmpo . Constant1_Value_c5r2ow4pnn [
0 ] ; hfuaoawbo4x . nj1dtdqjvk [ 1 ] = bjiazabmpo .
Constant1_Value_c5r2ow4pnn [ 1 ] ; hfuaoawbo4x . nj1dtdqjvk [ 2 ] =
bjiazabmpo . Constant1_Value_c5r2ow4pnn [ 2 ] ; hfuaoawbo4x . nj1dtdqjvk [ 3
] = bjiazabmpo . Constant1_Value_c5r2ow4pnn [ 3 ] ; hfuaoawbo4x . ntohwlgjud
[ 0 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 0 ] ; hfuaoawbo4x .
kox0yk51ix [ 0 ] = bjiazabmpo . Constant3_Value [ 0 ] ; hfuaoawbo4x .
fncmo3ybdw [ 0 ] = bjiazabmpo . Initialangularvelocity_Value [ 0 ] ;
hfuaoawbo4x . ntohwlgjud [ 1 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 1
] ; hfuaoawbo4x . kox0yk51ix [ 1 ] = bjiazabmpo . Constant3_Value [ 1 ] ;
hfuaoawbo4x . fncmo3ybdw [ 1 ] = bjiazabmpo . Initialangularvelocity_Value [
1 ] ; hfuaoawbo4x . ntohwlgjud [ 2 ] = bjiazabmpo .
Constant2_Value_ialq4qchdp [ 2 ] ; hfuaoawbo4x . kox0yk51ix [ 2 ] =
bjiazabmpo . Constant3_Value [ 2 ] ; hfuaoawbo4x . fncmo3ybdw [ 2 ] =
bjiazabmpo . Initialangularvelocity_Value [ 2 ] ; ngg51vuviwy . iwf1qimb54 =
0 ; ngg51vuviwy . bmw02bmfuu = 0 ; ngg51vuviwy . copufix5e1 = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
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
= - 1 ; ngg51vuviwy . dbbrzhnfld = 0 ; ngg51vuviwy . n1xbgfghif = 0 ;
ngg51vuviwy . jcuo1zmasa = 0 ; ngg51vuviwy . f4ipxf0od0 = 0 ; ngg51vuviwy .
gtcrxf0n4q = 0 ; ngg51vuviwy . lyzbn5q0nk = 0 ; ngg51vuviwy . nasy3r03v3 = 0
; ngg51vuviwy . kozvmutgqp = 0 ; initSeed = ( uint32_T ) ( 100000 * rand ( )
) ; RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . ed0iuyyld4 , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . ed0iuyyld4 , & ngg51vuviwy . ck1usmjp0v
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . murf55qffy , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . murf55qffy , & ngg51vuviwy . gtpyurwibv
[ 0 ] , 1 ) ; ngg51vuviwy . m2gyfa43xk = 0 ; initSeed = ( uint32_T ) ( 100000
* rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . kmqtzibzu3
, 1 ) ; RandSrcInitState_GZ ( & ngg51vuviwy . kmqtzibzu3 , & ngg51vuviwy .
hdaebxdim1 [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . huxynv0phj , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . huxynv0phj , & ngg51vuviwy . ewls1imqk1
[ 0 ] , 1 ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
fg3qvdmgz4 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
ngg51vuviwy . fg3qvdmgz4 = - 1 ; ngg51vuviwy . bq4i23vlh3 = - 1 ; ngg51vuviwy
. a3ekypkvyd = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; lk0crlqaa1 ( rtS ) ;
ngg51vuviwy . cnunrbonew = - 1 ; initSeed = ( uint32_T ) ( 100000 * rand ( )
) ; RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . nk4wb0pvod , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . nk4wb0pvod , & ngg51vuviwy . hmuoixvgjk
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & ngg51vuviwy . fxy34kowkh , 1 ) ;
RandSrcInitState_GZ ( & ngg51vuviwy . fxy34kowkh , & ngg51vuviwy . jgjcidiinu
[ 0 ] , 1 ) ; ngg51vuviwy . ig1vvmw4od = 0 ; ngg51vuviwy . psyl0mnuvj = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; lk0crlqaa1 ( rtS ) ;
ngg51vuviwy . mvxnb5arqf = - 1 ; ngg51vuviwy . kbsac44cjw = 0 ; ngg51vuviwy .
kl2lfyanp1 = 0 ; ngg51vuviwy . bvasf03rkx = 0 ; ngg51vuviwy . cwb3bnplqh = 0
; ngg51vuviwy . kgrjq2yk3i = 0 ; ngg51vuviwy . obyeutsorr = 0 ; ngg51vuviwy .
ftfgzy2fsp = 0 ; ngg51vuviwy . l2hnmjwsp2 = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
btdmegwoi1 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( ngg51vuviwy . gknheywe14 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } ngg51vuviwy .
gknheywe14 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
fggjybp4nv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . fggjybp4nv = - 1 ; break ; } ngg51vuviwy . btdmegwoi1 = - 1 ;
ngg51vuviwy . irz310w2ge = - 1 ; memcpy ( & ngg51vuviwy . kpt4ony32r [ 0 ] ,
& bjiazabmpo . DataStoreMemoryP_InitialValue [ 0 ] , 49U * sizeof ( real_T )
) ; for ( i = 0 ; i < 7 ; i ++ ) { ngg51vuviwy . ojmnt0y3sv [ i ] =
bjiazabmpo . DataStoreMemoryx_InitialValue [ i ] ; } MdlInitialize ( ) ; }
void MdlOutputs ( int_T tid ) { static const real_T b [ 10 ] = { 0.5 , 0.5 ,
0.5 , 0.5 , 0.5 , 0.5 , 0.8 , 0.8 , 0.8 , 0.8 } ; static const real_T a_p [ 9
] = { 2.2204460492503131E-16 , 0.0 , 1.0 , 0.0 , 1.0 , 0.0 , - 1.0 , 0.0 ,
2.2204460492503131E-16 } ; static const real_T Wmean [ 2 ] = { 1.0 , -
0.071428642857214286 } ; real_T X2state [ 98 ] ; real_T Y2 [ 98 ] ; real_T P
[ 49 ] ; real_T R [ 49 ] ; real_T unusedU0 [ 49 ] ; real_T egmyq2wukd [ 16 ]
; real_T eweqcqisny [ 16 ] ; real_T a [ 9 ] ; real_T tmp_p [ 9 ] ; real_T
Ymean [ 7 ] ; real_T tmp_e [ 7 ] ; real_T j13n0bzt32_p [ 6 ] ; real_T
b2r5roia4c [ 3 ] ; real_T tmp_i [ 2 ] ; real_T bv45xcfiny ; real_T cyldeyoboi
; real_T dd25cwjzns ; real_T dvqz3i5ole ; real_T es4aycsodv_idx_0 ; real_T
es4aycsodv_idx_1 ; real_T gym345g4fq_idx_0 ; real_T gym345g4fq_idx_1 ; real_T
gym345g4fq_idx_2 ; real_T hxf251gs4i ; real_T hynj2kga0l_idx_0 ; real_T
i4rx2zuc2h_idx_0 ; real_T i4rx2zuc2h_idx_1 ; real_T j13n0bzt32_idx_0 ; real_T
j13n0bzt32_idx_1 ; real_T j13n0bzt32_idx_2 ; real_T jsgxcn0tyn ; real_T
jsgxcn0tyn_p ; real_T kwje4y1vlu ; real_T lkb3lbvxyk_idx_1 ; real_T
nm4t0wvumv ; real_T nx321qfqad_idx_0 ; real_T nx321qfqad_idx_1 ; real_T
nx321qfqad_idx_2 ; real_T of0mnfctla_idx_0 ; real_T of0mnfctla_idx_1 ; real_T
of0mnfctla_idx_2 ; real_T ozlhho1jhe_idx_0 ; real_T ozlhho1jhe_idx_1 ; real_T
p2s2um3vln ; int32_T exitg1 ; int32_T i ; int32_T j ; int8_T rtAction ;
int8_T rtPrevAction ; boolean_T iy5b1drj5g [ 9 ] ; boolean_T exitg2 ;
boolean_T tmp ; SimStruct * S ; void * diag ; srClearBC ( ngg51vuviwy .
k0fulbi3y3 ) ; srClearBC ( ngg51vuviwy . nkkan2lumh ) ; srClearBC (
ngg51vuviwy . ncyqqgn1fak . n0vodpbpn0 ) ; srClearBC ( ngg51vuviwy .
dhmxxudzxm ) ; srClearBC ( ngg51vuviwy . ppg4ibcbt5 ) ; srClearBC (
ngg51vuviwy . hrhkqhh3g2 ) ; srClearBC ( ngg51vuviwy . gudujy1ejr ) ;
srClearBC ( ngg51vuviwy . jeex0coj3h ) ; srClearBC ( ngg51vuviwy . picfdcdfap
) ; srClearBC ( ngg51vuviwy . bdbstwmumv ) ; srClearBC ( ngg51vuviwy .
d530gaj1ii ) ; srClearBC ( ngg51vuviwy . lzbmuq2yk2 ) ; srClearBC (
ngg51vuviwy . a2zz5n420u ) ; srClearBC ( ngg51vuviwy . h1wj4fud0p ) ;
srClearBC ( ngg51vuviwy . opmce12fqo ) ; srClearBC ( ngg51vuviwy . bzn0gp5jdi
) ; srClearBC ( ngg51vuviwy . jhr0vyxdh3 ) ; srClearBC ( ngg51vuviwy .
igjqnnyo2f ) ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
j3jpf41hkf != 0 ) { o1yff13vlj3 . exrjjbh4to = hfuaoawbo4x . f3ygbdvaty ; }
cyldeyoboi = o1yff13vlj3 . exrjjbh4to ; if ( ngg51vuviwy . ogiu2msyaa != 0 )
{ o1yff13vlj3 . ozozulc01j [ 0 ] = hfuaoawbo4x . ntohwlgjud [ 0 ] ;
o1yff13vlj3 . ozozulc01j [ 1 ] = hfuaoawbo4x . ntohwlgjud [ 1 ] ; o1yff13vlj3
. ozozulc01j [ 2 ] = hfuaoawbo4x . ntohwlgjud [ 2 ] ; } gym345g4fq_idx_0 =
o1yff13vlj3 . ozozulc01j [ 0 ] ; gym345g4fq_idx_1 = o1yff13vlj3 . ozozulc01j
[ 1 ] ; gym345g4fq_idx_2 = o1yff13vlj3 . ozozulc01j [ 2 ] ; } else {
cyldeyoboi = o1yff13vlj3 . exrjjbh4to ; gym345g4fq_idx_0 = o1yff13vlj3 .
ozozulc01j [ 0 ] ; gym345g4fq_idx_1 = o1yff13vlj3 . ozozulc01j [ 1 ] ;
gym345g4fq_idx_2 = o1yff13vlj3 . ozozulc01j [ 2 ] ; } kwje4y1vlu =
hfuaoawbo4x . i15qhheq5s / ( bjiazabmpo . e_Value * muDoubleScalarCos (
cyldeyoboi ) + bjiazabmpo . Constant_Value_azddlyivju ) ; bv45xcfiny =
muDoubleScalarCos ( cyldeyoboi ) ; dd25cwjzns = muDoubleScalarSin (
cyldeyoboi ) ; hfuaoawbo4x . otudxcmy5f [ 0 ] = ( ( bv45xcfiny * hfuaoawbo4x
. dy3a2ou5re + hfuaoawbo4x . fomozizwka * dd25cwjzns ) + hfuaoawbo4x .
ihuo035dxp ) * bjiazabmpo . Gain1_Gain_csudgssrcg * kwje4y1vlu -
gym345g4fq_idx_0 ; hfuaoawbo4x . otudxcmy5f [ 1 ] = ( ( bv45xcfiny *
hfuaoawbo4x . iqwyi5ur24 + hfuaoawbo4x . epgzqlzua5 * dd25cwjzns ) +
hfuaoawbo4x . pcw0pyw2gh ) * bjiazabmpo . Gain1_Gain_csudgssrcg * kwje4y1vlu
- gym345g4fq_idx_1 ; hfuaoawbo4x . otudxcmy5f [ 2 ] = ( ( bv45xcfiny *
hfuaoawbo4x . abz0n5qp4d + hfuaoawbo4x . bkxmmcqnop * dd25cwjzns ) +
hfuaoawbo4x . f2wok2vtfw ) * bjiazabmpo . Gain1_Gain_csudgssrcg * kwje4y1vlu
- gym345g4fq_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
gofnphz0kz != 0 ) { o1yff13vlj3 . osavuy4txz [ 0 ] = hfuaoawbo4x . nj1dtdqjvk
[ 0 ] ; o1yff13vlj3 . osavuy4txz [ 1 ] = hfuaoawbo4x . nj1dtdqjvk [ 1 ] ;
o1yff13vlj3 . osavuy4txz [ 2 ] = hfuaoawbo4x . nj1dtdqjvk [ 2 ] ; o1yff13vlj3
. osavuy4txz [ 3 ] = hfuaoawbo4x . nj1dtdqjvk [ 3 ] ; } of0mnfctla_idx_0 =
o1yff13vlj3 . osavuy4txz [ 0 ] ; of0mnfctla_idx_1 = o1yff13vlj3 . osavuy4txz
[ 1 ] ; of0mnfctla_idx_2 = o1yff13vlj3 . osavuy4txz [ 2 ] ; hxf251gs4i =
o1yff13vlj3 . osavuy4txz [ 3 ] ; } else { of0mnfctla_idx_0 = o1yff13vlj3 .
osavuy4txz [ 0 ] ; of0mnfctla_idx_1 = o1yff13vlj3 . osavuy4txz [ 1 ] ;
of0mnfctla_idx_2 = o1yff13vlj3 . osavuy4txz [ 2 ] ; hxf251gs4i = o1yff13vlj3
. osavuy4txz [ 3 ] ; } kwje4y1vlu = ( ( of0mnfctla_idx_0 * of0mnfctla_idx_0 +
of0mnfctla_idx_1 * of0mnfctla_idx_1 ) + of0mnfctla_idx_2 * of0mnfctla_idx_2 )
+ hxf251gs4i * hxf251gs4i ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
ngg51vuviwy . nasy3r03v3 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ngg51vuviwy . nasy3r03v3 = 0 ; } nm4t0wvumv = muDoubleScalarSqrt (
kwje4y1vlu ) ; } else if ( kwje4y1vlu < 0.0 ) { nm4t0wvumv = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( kwje4y1vlu ) ) ; ngg51vuviwy .
nasy3r03v3 = 1 ; } else { nm4t0wvumv = muDoubleScalarSqrt ( kwje4y1vlu ) ; }
kwje4y1vlu = of0mnfctla_idx_2 / nm4t0wvumv ; bv45xcfiny = of0mnfctla_idx_0 /
nm4t0wvumv ; dd25cwjzns = of0mnfctla_idx_1 / nm4t0wvumv ; nm4t0wvumv =
hxf251gs4i / nm4t0wvumv ; hxf251gs4i = ( ( bv45xcfiny * bv45xcfiny +
dd25cwjzns * dd25cwjzns ) + kwje4y1vlu * kwje4y1vlu ) + nm4t0wvumv *
nm4t0wvumv ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . kozvmutgqp
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy .
kozvmutgqp = 0 ; } of0mnfctla_idx_0 = muDoubleScalarSqrt ( hxf251gs4i ) ; }
else if ( hxf251gs4i < 0.0 ) { of0mnfctla_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( hxf251gs4i ) ) ; ngg51vuviwy . kozvmutgqp = 1 ; } else {
of0mnfctla_idx_0 = muDoubleScalarSqrt ( hxf251gs4i ) ; } hxf251gs4i =
kwje4y1vlu / of0mnfctla_idx_0 ; of0mnfctla_idx_1 = nm4t0wvumv /
of0mnfctla_idx_0 ; of0mnfctla_idx_2 = dd25cwjzns / of0mnfctla_idx_0 ;
of0mnfctla_idx_0 = bv45xcfiny / of0mnfctla_idx_0 ; hfuaoawbo4x . kslnzluaes =
( ( ( bjiazabmpo . Constant_Value_hn3g4e2bdf - hxf251gs4i * hxf251gs4i ) -
of0mnfctla_idx_1 * of0mnfctla_idx_1 ) * bjiazabmpo . Gain2_Gain_nben4kjacq *
hfuaoawbo4x . otudxcmy5f [ 0 ] + ( of0mnfctla_idx_2 * hxf251gs4i +
of0mnfctla_idx_0 * of0mnfctla_idx_1 ) * bjiazabmpo . Gain_Gain_kewyutalpa *
hfuaoawbo4x . otudxcmy5f [ 1 ] ) + ( of0mnfctla_idx_2 * of0mnfctla_idx_1 -
of0mnfctla_idx_0 * hxf251gs4i ) * bjiazabmpo . Gain1_Gain_e5ngzsvcli *
hfuaoawbo4x . otudxcmy5f [ 2 ] ; hfuaoawbo4x . erv4px4dbo = ( ( ( bjiazabmpo
. Constant_Value_cinqqywm1t - of0mnfctla_idx_2 * of0mnfctla_idx_2 ) -
of0mnfctla_idx_1 * of0mnfctla_idx_1 ) * bjiazabmpo . Gain2_Gain_d4fbbaxwpd *
hfuaoawbo4x . otudxcmy5f [ 1 ] + ( of0mnfctla_idx_2 * hxf251gs4i -
of0mnfctla_idx_0 * of0mnfctla_idx_1 ) * bjiazabmpo . Gain_Gain_fouuav1ki1 *
hfuaoawbo4x . otudxcmy5f [ 0 ] ) + ( of0mnfctla_idx_0 * of0mnfctla_idx_2 +
hxf251gs4i * of0mnfctla_idx_1 ) * bjiazabmpo . Gain1_Gain_lq4olh4tnx *
hfuaoawbo4x . otudxcmy5f [ 2 ] ; hfuaoawbo4x . pkka3h1xrv = ( (
of0mnfctla_idx_2 * of0mnfctla_idx_1 + of0mnfctla_idx_0 * hxf251gs4i ) *
bjiazabmpo . Gain_Gain_kc1cpqscqf * hfuaoawbo4x . otudxcmy5f [ 0 ] + (
hxf251gs4i * of0mnfctla_idx_1 - of0mnfctla_idx_0 * of0mnfctla_idx_2 ) *
bjiazabmpo . Gain1_Gain_n4q3gythod * hfuaoawbo4x . otudxcmy5f [ 1 ] ) + ( (
bjiazabmpo . Constant_Value_aglfz4cib2 - of0mnfctla_idx_2 * of0mnfctla_idx_2
) - hxf251gs4i * hxf251gs4i ) * bjiazabmpo . Gain2_Gain_arhr50dupm *
hfuaoawbo4x . otudxcmy5f [ 2 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
hxf251gs4i = ( hfuaoawbo4x . kslnzluaes * hfuaoawbo4x . kslnzluaes +
hfuaoawbo4x . erv4px4dbo * hfuaoawbo4x . erv4px4dbo ) + hfuaoawbo4x .
pkka3h1xrv * hfuaoawbo4x . pkka3h1xrv ; if ( hxf251gs4i < 0.0 ) { hxf251gs4i
= - muDoubleScalarSqrt ( muDoubleScalarAbs ( hxf251gs4i ) ) ; } else {
hxf251gs4i = muDoubleScalarSqrt ( hxf251gs4i ) ; } if ( hxf251gs4i >
bjiazabmpo . NormalizeVector_maxzero ) { of0mnfctla_idx_0 = hfuaoawbo4x .
kslnzluaes ; of0mnfctla_idx_1 = hfuaoawbo4x . erv4px4dbo ; of0mnfctla_idx_2 =
hfuaoawbo4x . pkka3h1xrv ; } else { of0mnfctla_idx_0 = hfuaoawbo4x .
kslnzluaes * 0.0 ; of0mnfctla_idx_1 = hfuaoawbo4x . erv4px4dbo * 0.0 ;
of0mnfctla_idx_2 = hfuaoawbo4x . pkka3h1xrv * 0.0 ; hxf251gs4i = bjiazabmpo .
Constant_Value_pwofnawzxn ; } nx321qfqad_idx_0 = of0mnfctla_idx_0 /
hxf251gs4i ; nx321qfqad_idx_1 = of0mnfctla_idx_1 / hxf251gs4i ;
nx321qfqad_idx_2 = of0mnfctla_idx_2 / hxf251gs4i ; of0mnfctla_idx_0 = (
nx321qfqad_idx_0 * hfuaoawbo4x . l5j5dkpmqj + hfuaoawbo4x . lkiy512rco *
nx321qfqad_idx_1 ) + hfuaoawbo4x . oxyjrp2dlh * nx321qfqad_idx_2 ; hxf251gs4i
= muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . ohg1wtlywy +
hfuaoawbo4x . eh5mcnwtiq * nx321qfqad_idx_1 ) + hfuaoawbo4x . ghaons33bj *
nx321qfqad_idx_2 , of0mnfctla_idx_0 ) ; of0mnfctla_idx_0 =
muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . io0rqxfqo3 +
hfuaoawbo4x . bwjkjrhjqv * nx321qfqad_idx_1 ) + hfuaoawbo4x . a3jx4vfcgg *
nx321qfqad_idx_2 , of0mnfctla_idx_0 ) ; i4rx2zuc2h_idx_0 = bjiazabmpo .
Constant_Value_p1uxhfeofi [ 0 ] + hxf251gs4i ; i4rx2zuc2h_idx_1 = bjiazabmpo
. Constant_Value_p1uxhfeofi [ 1 ] + of0mnfctla_idx_0 ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x . msxyxwoyit , & bjiazabmpo .
RandomSource1_MeanVal , 1 , & bjiazabmpo . RandomSource1_VarianceRTP , 1 ,
ngg51vuviwy . ck1usmjp0v , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
hxf251gs4i = i4rx2zuc2h_idx_0 + hfuaoawbo4x . msxyxwoyit [ 0 ] ; if (
hxf251gs4i > bjiazabmpo . Saturation_UpperSat ) { hfuaoawbo4x . krci0t2j4m [
0 ] = bjiazabmpo . Saturation_UpperSat ; } else if ( hxf251gs4i < bjiazabmpo
. Saturation_LowerSat ) { hfuaoawbo4x . krci0t2j4m [ 0 ] = bjiazabmpo .
Saturation_LowerSat ; } else { hfuaoawbo4x . krci0t2j4m [ 0 ] = hxf251gs4i ;
} hxf251gs4i = i4rx2zuc2h_idx_1 + hfuaoawbo4x . msxyxwoyit [ 1 ] ; if (
hxf251gs4i > bjiazabmpo . Saturation_UpperSat ) { hfuaoawbo4x . krci0t2j4m [
1 ] = bjiazabmpo . Saturation_UpperSat ; } else if ( hxf251gs4i < bjiazabmpo
. Saturation_LowerSat ) { hfuaoawbo4x . krci0t2j4m [ 1 ] = bjiazabmpo .
Saturation_LowerSat ; } else { hfuaoawbo4x . krci0t2j4m [ 1 ] = hxf251gs4i ;
} j13n0bzt32_idx_0 = hfuaoawbo4x . otudxcmy5f [ 0 ] ; j13n0bzt32_idx_1 =
hfuaoawbo4x . otudxcmy5f [ 1 ] ; j13n0bzt32_idx_2 = hfuaoawbo4x . otudxcmy5f
[ 2 ] ; i4rx2zuc2h_idx_1 = ( hfuaoawbo4x . otudxcmy5f [ 0 ] * hfuaoawbo4x .
otudxcmy5f [ 0 ] + hfuaoawbo4x . otudxcmy5f [ 1 ] * hfuaoawbo4x . otudxcmy5f
[ 1 ] ) + hfuaoawbo4x . otudxcmy5f [ 2 ] * hfuaoawbo4x . otudxcmy5f [ 2 ] ;
if ( i4rx2zuc2h_idx_1 < 0.0 ) { i4rx2zuc2h_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( i4rx2zuc2h_idx_1 ) ) ; } else { i4rx2zuc2h_idx_1 =
muDoubleScalarSqrt ( i4rx2zuc2h_idx_1 ) ; } if ( i4rx2zuc2h_idx_1 >
bjiazabmpo . NormalizeVector1_maxzero ) { of0mnfctla_idx_0 = hfuaoawbo4x .
otudxcmy5f [ 0 ] ; of0mnfctla_idx_1 = hfuaoawbo4x . otudxcmy5f [ 1 ] ;
of0mnfctla_idx_2 = hfuaoawbo4x . otudxcmy5f [ 2 ] ; hxf251gs4i =
i4rx2zuc2h_idx_1 ; } else { of0mnfctla_idx_0 = hfuaoawbo4x . otudxcmy5f [ 0 ]
* 0.0 ; of0mnfctla_idx_1 = hfuaoawbo4x . otudxcmy5f [ 1 ] * 0.0 ;
of0mnfctla_idx_2 = hfuaoawbo4x . otudxcmy5f [ 2 ] * 0.0 ; hxf251gs4i =
bjiazabmpo . Constant_Value_h05qkqds1k ; } hfuaoawbo4x . gritwbr2l0 [ 0 ] =
of0mnfctla_idx_0 / hxf251gs4i ; hfuaoawbo4x . gritwbr2l0 [ 1 ] =
of0mnfctla_idx_1 / hxf251gs4i ; hfuaoawbo4x . gritwbr2l0 [ 2 ] =
of0mnfctla_idx_2 / hxf251gs4i ; } tmp_p [ 0 ] = ( 1.0 - kwje4y1vlu *
kwje4y1vlu * 2.0 ) - nm4t0wvumv * nm4t0wvumv * 2.0 ; tmp_p [ 3 ] = 2.0 *
dd25cwjzns * kwje4y1vlu + 2.0 * bv45xcfiny * nm4t0wvumv ; tmp_p [ 6 ] = - 2.0
* bv45xcfiny * kwje4y1vlu + 2.0 * dd25cwjzns * nm4t0wvumv ; tmp_p [ 1 ] = 2.0
* dd25cwjzns * kwje4y1vlu - 2.0 * bv45xcfiny * nm4t0wvumv ; tmp_p [ 4 ] = (
1.0 - dd25cwjzns * dd25cwjzns * 2.0 ) - nm4t0wvumv * nm4t0wvumv * 2.0 ; tmp_p
[ 7 ] = 2.0 * bv45xcfiny * dd25cwjzns + 2.0 * kwje4y1vlu * nm4t0wvumv ; tmp_p
[ 2 ] = 2.0 * bv45xcfiny * kwje4y1vlu + 2.0 * dd25cwjzns * nm4t0wvumv ; tmp_p
[ 5 ] = - 2.0 * bv45xcfiny * dd25cwjzns + 2.0 * kwje4y1vlu * nm4t0wvumv ;
tmp_p [ 8 ] = ( 1.0 - dd25cwjzns * dd25cwjzns * 2.0 ) - kwje4y1vlu *
kwje4y1vlu * 2.0 ; for ( j = 0 ; j < 3 ; j ++ ) { b2r5roia4c [ j ] = 0.0 ;
for ( i = 0 ; i < 3 ; i ++ ) { a [ j + 3 * i ] = 0.0 ; a [ j + 3 * i ] +=
tmp_p [ 3 * i ] * a_p [ j ] ; a [ j + 3 * i ] += tmp_p [ 3 * i + 1 ] * a_p [
j + 3 ] ; a [ j + 3 * i ] += tmp_p [ 3 * i + 2 ] * a_p [ j + 6 ] ; b2r5roia4c
[ j ] += a [ 3 * i + j ] * hfuaoawbo4x . gritwbr2l0 [ i ] ; } } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { p2s2um3vln = ( hfuaoawbo4x . kslnzluaes *
hfuaoawbo4x . kslnzluaes + hfuaoawbo4x . erv4px4dbo * hfuaoawbo4x .
erv4px4dbo ) + hfuaoawbo4x . pkka3h1xrv * hfuaoawbo4x . pkka3h1xrv ; if (
p2s2um3vln < 0.0 ) { p2s2um3vln = - muDoubleScalarSqrt ( muDoubleScalarAbs (
p2s2um3vln ) ) ; } else { p2s2um3vln = muDoubleScalarSqrt ( p2s2um3vln ) ; }
if ( p2s2um3vln > bjiazabmpo . NormalizeVector_maxzero_nx4f2adafg ) {
of0mnfctla_idx_0 = hfuaoawbo4x . kslnzluaes ; of0mnfctla_idx_1 = hfuaoawbo4x
. erv4px4dbo ; of0mnfctla_idx_2 = hfuaoawbo4x . pkka3h1xrv ; hxf251gs4i =
p2s2um3vln ; } else { of0mnfctla_idx_0 = hfuaoawbo4x . kslnzluaes * 0.0 ;
of0mnfctla_idx_1 = hfuaoawbo4x . erv4px4dbo * 0.0 ; of0mnfctla_idx_2 =
hfuaoawbo4x . pkka3h1xrv * 0.0 ; hxf251gs4i = bjiazabmpo .
Constant_Value_oqac1ckjba ; } nx321qfqad_idx_0 = of0mnfctla_idx_0 /
hxf251gs4i ; nx321qfqad_idx_1 = of0mnfctla_idx_1 / hxf251gs4i ;
nx321qfqad_idx_2 = of0mnfctla_idx_2 / hxf251gs4i ; i4rx2zuc2h_idx_1 = (
nx321qfqad_idx_0 * hfuaoawbo4x . dq2b0uqnue + hfuaoawbo4x . pvkeaggof5 *
nx321qfqad_idx_1 ) + hfuaoawbo4x . k3livt50xe * nx321qfqad_idx_2 ; p2s2um3vln
= muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . cklgc35k0o +
hfuaoawbo4x . bedykpbnax * nx321qfqad_idx_1 ) + hfuaoawbo4x . pem5nu1bix *
nx321qfqad_idx_2 , i4rx2zuc2h_idx_1 ) ; i4rx2zuc2h_idx_1 =
muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . iuompaq1le +
hfuaoawbo4x . gqzvomyv2t * nx321qfqad_idx_1 ) + hfuaoawbo4x . nv4mt5uie4 *
nx321qfqad_idx_2 , i4rx2zuc2h_idx_1 ) ; p2s2um3vln += bjiazabmpo .
Constant_Value_cknsmwduvj [ 0 ] ; lkb3lbvxyk_idx_1 = bjiazabmpo .
Constant_Value_cknsmwduvj [ 1 ] + i4rx2zuc2h_idx_1 ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x . o2hjorpke2 , & bjiazabmpo .
RandomSource1_MeanVal_cgugych5h2 , 1 , & bjiazabmpo .
RandomSource1_VarianceRTP_pdcijtaj4d , 1 , ngg51vuviwy . gtpyurwibv , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { hxf251gs4i = p2s2um3vln +
hfuaoawbo4x . o2hjorpke2 [ 0 ] ; if ( hxf251gs4i > bjiazabmpo .
Saturation_UpperSat_m5walzmpht ) { hfuaoawbo4x . pk0lw220uo [ 0 ] =
bjiazabmpo . Saturation_UpperSat_m5walzmpht ; } else if ( hxf251gs4i <
bjiazabmpo . Saturation_LowerSat_kiy0a1gdvs ) { hfuaoawbo4x . pk0lw220uo [ 0
] = bjiazabmpo . Saturation_LowerSat_kiy0a1gdvs ; } else { hfuaoawbo4x .
pk0lw220uo [ 0 ] = hxf251gs4i ; } hxf251gs4i = lkb3lbvxyk_idx_1 + hfuaoawbo4x
. o2hjorpke2 [ 1 ] ; if ( hxf251gs4i > bjiazabmpo .
Saturation_UpperSat_m5walzmpht ) { hfuaoawbo4x . pk0lw220uo [ 1 ] =
bjiazabmpo . Saturation_UpperSat_m5walzmpht ; } else if ( hxf251gs4i <
bjiazabmpo . Saturation_LowerSat_kiy0a1gdvs ) { hfuaoawbo4x . pk0lw220uo [ 1
] = bjiazabmpo . Saturation_LowerSat_kiy0a1gdvs ; } else { hfuaoawbo4x .
pk0lw220uo [ 1 ] = hxf251gs4i ; } } hfuaoawbo4x . iqajyqskal [ 0 ] =
muDoubleScalarAtan2 ( b2r5roia4c [ 0 ] , b2r5roia4c [ 2 ] ) - hfuaoawbo4x .
pk0lw220uo [ 0 ] ; hfuaoawbo4x . iqajyqskal [ 1 ] = muDoubleScalarAtan2 (
b2r5roia4c [ 1 ] , b2r5roia4c [ 2 ] ) - hfuaoawbo4x . pk0lw220uo [ 1 ] ;
hfuaoawbo4x . nkn0lxavyg [ 0 ] = bjiazabmpo . Gain_Gain_cpl3z33sd4 *
gym345g4fq_idx_0 ; hfuaoawbo4x . nkn0lxavyg [ 1 ] = bjiazabmpo .
Gain_Gain_cpl3z33sd4 * gym345g4fq_idx_1 ; hfuaoawbo4x . nkn0lxavyg [ 2 ] =
bjiazabmpo . Gain_Gain_cpl3z33sd4 * gym345g4fq_idx_2 ; i4rx2zuc2h_idx_1 = ( (
bv45xcfiny * bv45xcfiny + dd25cwjzns * dd25cwjzns ) + kwje4y1vlu * kwje4y1vlu
) + nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
ngg51vuviwy . m2gyfa43xk != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ngg51vuviwy . m2gyfa43xk = 0 ; } p2s2um3vln = muDoubleScalarSqrt (
i4rx2zuc2h_idx_1 ) ; } else if ( i4rx2zuc2h_idx_1 < 0.0 ) { p2s2um3vln = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( i4rx2zuc2h_idx_1 ) ) ; ngg51vuviwy .
m2gyfa43xk = 1 ; } else { p2s2um3vln = muDoubleScalarSqrt ( i4rx2zuc2h_idx_1
) ; } i4rx2zuc2h_idx_1 = kwje4y1vlu / p2s2um3vln ; hxf251gs4i = nm4t0wvumv /
p2s2um3vln ; of0mnfctla_idx_0 = dd25cwjzns / p2s2um3vln ; p2s2um3vln =
bv45xcfiny / p2s2um3vln ; hfuaoawbo4x . lmuzqxuokj = ( ( ( bjiazabmpo .
Constant_Value_klghvcvqmj - i4rx2zuc2h_idx_1 * i4rx2zuc2h_idx_1 ) -
hxf251gs4i * hxf251gs4i ) * bjiazabmpo . Gain2_Gain_n2hlwdziix * hfuaoawbo4x
. nkn0lxavyg [ 0 ] + ( of0mnfctla_idx_0 * i4rx2zuc2h_idx_1 + p2s2um3vln *
hxf251gs4i ) * bjiazabmpo . Gain_Gain_deacltj5ll * hfuaoawbo4x . nkn0lxavyg [
1 ] ) + ( of0mnfctla_idx_0 * hxf251gs4i - p2s2um3vln * i4rx2zuc2h_idx_1 ) *
bjiazabmpo . Gain1_Gain_fe0vmtwk5u * hfuaoawbo4x . nkn0lxavyg [ 2 ] ;
hfuaoawbo4x . cpm5g01ony = ( ( ( bjiazabmpo . Constant_Value_h3axm4dzs2 -
of0mnfctla_idx_0 * of0mnfctla_idx_0 ) - hxf251gs4i * hxf251gs4i ) *
bjiazabmpo . Gain2_Gain_gnrwoc1vc2 * hfuaoawbo4x . nkn0lxavyg [ 1 ] + (
of0mnfctla_idx_0 * i4rx2zuc2h_idx_1 - p2s2um3vln * hxf251gs4i ) * bjiazabmpo
. Gain_Gain_m0ug0pnx04 * hfuaoawbo4x . nkn0lxavyg [ 0 ] ) + ( p2s2um3vln *
of0mnfctla_idx_0 + i4rx2zuc2h_idx_1 * hxf251gs4i ) * bjiazabmpo .
Gain1_Gain_epkzxiktj2 * hfuaoawbo4x . nkn0lxavyg [ 2 ] ; hfuaoawbo4x .
ocma20pg4m = ( ( of0mnfctla_idx_0 * hxf251gs4i + p2s2um3vln *
i4rx2zuc2h_idx_1 ) * bjiazabmpo . Gain_Gain_efwlgxe2sc * hfuaoawbo4x .
nkn0lxavyg [ 0 ] + ( i4rx2zuc2h_idx_1 * hxf251gs4i - p2s2um3vln *
of0mnfctla_idx_0 ) * bjiazabmpo . Gain1_Gain_ito2bip4nt * hfuaoawbo4x .
nkn0lxavyg [ 1 ] ) + ( ( bjiazabmpo . Constant_Value_jsi055lqf3 -
of0mnfctla_idx_0 * of0mnfctla_idx_0 ) - i4rx2zuc2h_idx_1 * i4rx2zuc2h_idx_1 )
* bjiazabmpo . Gain2_Gain_kojiuv3vcw * hfuaoawbo4x . nkn0lxavyg [ 2 ] ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { hxf251gs4i = ( hfuaoawbo4x . lmuzqxuokj *
hfuaoawbo4x . lmuzqxuokj + hfuaoawbo4x . cpm5g01ony * hfuaoawbo4x .
cpm5g01ony ) + hfuaoawbo4x . ocma20pg4m * hfuaoawbo4x . ocma20pg4m ; if (
hxf251gs4i < 0.0 ) { hxf251gs4i = - muDoubleScalarSqrt ( muDoubleScalarAbs (
hxf251gs4i ) ) ; } else { hxf251gs4i = muDoubleScalarSqrt ( hxf251gs4i ) ; }
if ( hxf251gs4i > bjiazabmpo . NormalizeVector_maxzero_nn5jzwq50r ) {
of0mnfctla_idx_0 = hfuaoawbo4x . lmuzqxuokj ; of0mnfctla_idx_1 = hfuaoawbo4x
. cpm5g01ony ; of0mnfctla_idx_2 = hfuaoawbo4x . ocma20pg4m ; } else {
of0mnfctla_idx_0 = hfuaoawbo4x . lmuzqxuokj * 0.0 ; of0mnfctla_idx_1 =
hfuaoawbo4x . cpm5g01ony * 0.0 ; of0mnfctla_idx_2 = hfuaoawbo4x . ocma20pg4m
* 0.0 ; hxf251gs4i = bjiazabmpo . Constant_Value_kcn4rmmh00 ; }
nx321qfqad_idx_0 = of0mnfctla_idx_0 / hxf251gs4i ; nx321qfqad_idx_1 =
of0mnfctla_idx_1 / hxf251gs4i ; nx321qfqad_idx_2 = of0mnfctla_idx_2 /
hxf251gs4i ; p2s2um3vln = ( nx321qfqad_idx_0 * hfuaoawbo4x . mmdcsbwnzr +
hfuaoawbo4x . mtbvkoruwr * nx321qfqad_idx_1 ) + hfuaoawbo4x . ezimqt1hie *
nx321qfqad_idx_2 ; hxf251gs4i = muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 *
hfuaoawbo4x . n3pwxd5dop + hfuaoawbo4x . er433el12n * nx321qfqad_idx_1 ) +
hfuaoawbo4x . g2lr2421ty * nx321qfqad_idx_2 , p2s2um3vln ) ; p2s2um3vln =
muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . c1tr4cgbin +
hfuaoawbo4x . lfb2wgmhm0 * nx321qfqad_idx_1 ) + hfuaoawbo4x . msphgdgaqg *
nx321qfqad_idx_2 , p2s2um3vln ) ; es4aycsodv_idx_0 = bjiazabmpo .
Constant_Value_p0tb5tfcpa [ 0 ] + hxf251gs4i ; es4aycsodv_idx_1 = bjiazabmpo
. Constant_Value_p0tb5tfcpa [ 1 ] + p2s2um3vln ; } if ( ssIsSampleHit ( rtS ,
3 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x . m0eteafuap , & bjiazabmpo .
RandomSource1_MeanVal_dfojatdwfn , 1 , & bjiazabmpo .
RandomSource1_VarianceRTP_cwsuhtikoo , 1 , ngg51vuviwy . hdaebxdim1 , 1 , 2 )
; } if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . ohqzjzllib != 0 ) {
o1yff13vlj3 . cxzg0u0ymm [ 0 ] = hfuaoawbo4x . fncmo3ybdw [ 0 ] ; o1yff13vlj3
. cxzg0u0ymm [ 1 ] = hfuaoawbo4x . fncmo3ybdw [ 1 ] ; o1yff13vlj3 .
cxzg0u0ymm [ 2 ] = hfuaoawbo4x . fncmo3ybdw [ 2 ] ; } hfuaoawbo4x .
jz4js4cavj [ 0 ] = o1yff13vlj3 . cxzg0u0ymm [ 0 ] ; hfuaoawbo4x . jz4js4cavj
[ 1 ] = o1yff13vlj3 . cxzg0u0ymm [ 1 ] ; hfuaoawbo4x . jz4js4cavj [ 2 ] =
o1yff13vlj3 . cxzg0u0ymm [ 2 ] ; } else { hfuaoawbo4x . jz4js4cavj [ 0 ] =
o1yff13vlj3 . cxzg0u0ymm [ 0 ] ; hfuaoawbo4x . jz4js4cavj [ 1 ] = o1yff13vlj3
. cxzg0u0ymm [ 1 ] ; hfuaoawbo4x . jz4js4cavj [ 2 ] = o1yff13vlj3 .
cxzg0u0ymm [ 2 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { hxf251gs4i =
es4aycsodv_idx_0 + hfuaoawbo4x . m0eteafuap [ 0 ] ; if ( hxf251gs4i >
bjiazabmpo . Saturation_UpperSat_gjlfmfcnga ) { hfuaoawbo4x . fxhcux2wdi [ 0
] = bjiazabmpo . Saturation_UpperSat_gjlfmfcnga ; } else if ( hxf251gs4i <
bjiazabmpo . Saturation_LowerSat_iut5tallny ) { hfuaoawbo4x . fxhcux2wdi [ 0
] = bjiazabmpo . Saturation_LowerSat_iut5tallny ; } else { hfuaoawbo4x .
fxhcux2wdi [ 0 ] = hxf251gs4i ; } hxf251gs4i = es4aycsodv_idx_1 + hfuaoawbo4x
. m0eteafuap [ 1 ] ; if ( hxf251gs4i > bjiazabmpo .
Saturation_UpperSat_gjlfmfcnga ) { hfuaoawbo4x . fxhcux2wdi [ 1 ] =
bjiazabmpo . Saturation_UpperSat_gjlfmfcnga ; } else if ( hxf251gs4i <
bjiazabmpo . Saturation_LowerSat_iut5tallny ) { hfuaoawbo4x . fxhcux2wdi [ 1
] = bjiazabmpo . Saturation_LowerSat_iut5tallny ; } else { hfuaoawbo4x .
fxhcux2wdi [ 1 ] = hxf251gs4i ; } nx321qfqad_idx_0 = hfuaoawbo4x . jz4js4cavj
[ 0 ] ; nx321qfqad_idx_1 = hfuaoawbo4x . jz4js4cavj [ 1 ] ; nx321qfqad_idx_2
= hfuaoawbo4x . jz4js4cavj [ 2 ] ; } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) {
RandSrc_GZ_D ( hfuaoawbo4x . jiauta4lz3 , & bjiazabmpo . RandomSource_MeanVal
, 1 , & bjiazabmpo . RandomSource_VarianceRTP , 1 , ngg51vuviwy . ewls1imqk1
, 1 , 3 ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( bjiazabmpo .
Enable1_Value ) { memcpy ( & P [ 0 ] , & ngg51vuviwy . kpt4ony32r [ 0 ] , 49U
* sizeof ( real_T ) ) ; tmp = true ; j = 0 ; exitg2 = false ; while ( ( !
exitg2 ) && ( j < 7 ) ) { i = 0 ; do { exitg1 = 0 ; if ( i <= j - 1 ) { if (
! ( ngg51vuviwy . kpt4ony32r [ 7 * j + i ] == 0.0 ) ) { tmp = false ; exitg1
= 1 ; } else { i ++ ; } } else { j ++ ; exitg1 = 2 ; } } while ( exitg1 == 0
) ; if ( exitg1 == 1 ) { exitg2 = true ; } } if ( ! tmp ) { for ( j = 0 ; j <
7 ; j ++ ) { for ( i = 0 ; i < 7 ; i ++ ) { P [ i + 7 * j ] = ngg51vuviwy .
kpt4ony32r [ 7 * i + j ] ; } } qr_FYLMsjgk ( P , unusedU0 , R ) ; for ( j = 0
; j < 7 ; j ++ ) { for ( i = 0 ; i < 7 ; i ++ ) { P [ i + 7 * j ] = R [ 7 * i
+ j ] ; } } } j13n0bzt32_p [ 0 ] = j13n0bzt32_idx_0 ; j13n0bzt32_p [ 3 ] =
hfuaoawbo4x . nkn0lxavyg [ 0 ] ; j13n0bzt32_p [ 1 ] = j13n0bzt32_idx_1 ;
j13n0bzt32_p [ 4 ] = hfuaoawbo4x . nkn0lxavyg [ 1 ] ; j13n0bzt32_p [ 2 ] =
j13n0bzt32_idx_2 ; j13n0bzt32_p [ 5 ] = hfuaoawbo4x . nkn0lxavyg [ 2 ] ;
UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_NiIj5RwG (
bjiazabmpo . R1_Value , ngg51vuviwy . ojmnt0y3sv , P , 0.001 , 2.0 , 0.0 ,
j13n0bzt32_p , Ymean , unusedU0 , R ) ; for ( j = 0 ; j < 7 ; j ++ ) { for (
i = 0 ; i < 7 ; i ++ ) { ngg51vuviwy . kpt4ony32r [ i + 7 * j ] = P [ 7 * i +
j ] ; } } tmp_e [ 0 ] = hfuaoawbo4x . pk0lw220uo [ 0 ] - Ymean [ 0 ] ; tmp_e
[ 2 ] = hfuaoawbo4x . fxhcux2wdi [ 0 ] - Ymean [ 2 ] ; tmp_e [ 1 ] =
hfuaoawbo4x . pk0lw220uo [ 1 ] - Ymean [ 1 ] ; tmp_e [ 3 ] = hfuaoawbo4x .
fxhcux2wdi [ 1 ] - Ymean [ 3 ] ; tmp_e [ 4 ] = ( nx321qfqad_idx_0 +
hfuaoawbo4x . jiauta4lz3 [ 0 ] ) - Ymean [ 4 ] ; tmp_e [ 5 ] = (
nx321qfqad_idx_1 + hfuaoawbo4x . jiauta4lz3 [ 1 ] ) - Ymean [ 5 ] ; tmp_e [ 6
] = ( nx321qfqad_idx_2 + hfuaoawbo4x . jiauta4lz3 [ 2 ] ) - Ymean [ 6 ] ;
UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO ( ngg51vuviwy .
ojmnt0y3sv , ngg51vuviwy . kpt4ony32r , tmp_e , unusedU0 , R ) ; if (
ssIsMajorTimeStep ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ;
srUpdateBC ( ngg51vuviwy . igjqnnyo2f ) ; } } for ( i = 0 ; i < 7 ; i ++ ) {
hfuaoawbo4x . j1xfny152w [ i ] = ngg51vuviwy . ojmnt0y3sv [ i ] ; } }
es4aycsodv_idx_0 = ( hfuaoawbo4x . nkn0lxavyg [ 0 ] * hfuaoawbo4x .
nkn0lxavyg [ 0 ] + hfuaoawbo4x . nkn0lxavyg [ 1 ] * hfuaoawbo4x . nkn0lxavyg
[ 1 ] ) + hfuaoawbo4x . nkn0lxavyg [ 2 ] * hfuaoawbo4x . nkn0lxavyg [ 2 ] ;
if ( es4aycsodv_idx_0 < 0.0 ) { hfuaoawbo4x . aznxfnvabf = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( es4aycsodv_idx_0 ) ) ; } else {
hfuaoawbo4x . aznxfnvabf = muDoubleScalarSqrt ( es4aycsodv_idx_0 ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { ngg51vuviwy . m0i4t4o4w4 = ( hfuaoawbo4x .
aznxfnvabf > bjiazabmpo . NormalizeVector_maxzero_idjlccn1tr ) ; } if (
ngg51vuviwy . m0i4t4o4w4 ) { of0mnfctla_idx_0 = hfuaoawbo4x . nkn0lxavyg [ 0
] ; of0mnfctla_idx_1 = hfuaoawbo4x . nkn0lxavyg [ 1 ] ; of0mnfctla_idx_2 =
hfuaoawbo4x . nkn0lxavyg [ 2 ] ; hxf251gs4i = hfuaoawbo4x . aznxfnvabf ; }
else { hfuaoawbo4x . klui4qywrw [ 0 ] = hfuaoawbo4x . nkn0lxavyg [ 0 ] * 0.0
; of0mnfctla_idx_0 = hfuaoawbo4x . klui4qywrw [ 0 ] ; hfuaoawbo4x .
klui4qywrw [ 1 ] = hfuaoawbo4x . nkn0lxavyg [ 1 ] * 0.0 ; of0mnfctla_idx_1 =
hfuaoawbo4x . klui4qywrw [ 1 ] ; hfuaoawbo4x . klui4qywrw [ 2 ] = hfuaoawbo4x
. nkn0lxavyg [ 2 ] * 0.0 ; of0mnfctla_idx_2 = hfuaoawbo4x . klui4qywrw [ 2 ]
; hxf251gs4i = bjiazabmpo . Constant_Value_fjyq3eus5i ; } nx321qfqad_idx_2 =
of0mnfctla_idx_0 / hxf251gs4i ; hfuaoawbo4x . hypth4pdun [ 0 ] =
nx321qfqad_idx_2 ; b2r5roia4c [ 0 ] = nx321qfqad_idx_2 ; nx321qfqad_idx_2 =
of0mnfctla_idx_1 / hxf251gs4i ; hfuaoawbo4x . hypth4pdun [ 1 ] =
nx321qfqad_idx_2 ; b2r5roia4c [ 1 ] = nx321qfqad_idx_2 ; nx321qfqad_idx_2 =
of0mnfctla_idx_2 / hxf251gs4i ; hfuaoawbo4x . hypth4pdun [ 2 ] =
nx321qfqad_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
bsrppkoaqa != 0 ) { o1yff13vlj3 . ceu1xu3gg2 [ 0 ] = hfuaoawbo4x . kox0yk51ix
[ 0 ] ; o1yff13vlj3 . ceu1xu3gg2 [ 1 ] = hfuaoawbo4x . kox0yk51ix [ 1 ] ;
o1yff13vlj3 . ceu1xu3gg2 [ 2 ] = hfuaoawbo4x . kox0yk51ix [ 2 ] ; }
hfuaoawbo4x . djfx2ozwz1 [ 0 ] = o1yff13vlj3 . ceu1xu3gg2 [ 0 ] ; hfuaoawbo4x
. djfx2ozwz1 [ 1 ] = o1yff13vlj3 . ceu1xu3gg2 [ 1 ] ; hfuaoawbo4x .
djfx2ozwz1 [ 2 ] = o1yff13vlj3 . ceu1xu3gg2 [ 2 ] ; } else { hfuaoawbo4x .
djfx2ozwz1 [ 0 ] = o1yff13vlj3 . ceu1xu3gg2 [ 0 ] ; hfuaoawbo4x . djfx2ozwz1
[ 1 ] = o1yff13vlj3 . ceu1xu3gg2 [ 1 ] ; hfuaoawbo4x . djfx2ozwz1 [ 2 ] =
o1yff13vlj3 . ceu1xu3gg2 [ 2 ] ; } hfuaoawbo4x . fvxovyedkd [ 0 ] =
bjiazabmpo . Gain1_Gain_b3rhft3ujm * hfuaoawbo4x . djfx2ozwz1 [ 0 ] ;
hfuaoawbo4x . fvxovyedkd [ 1 ] = bjiazabmpo . Gain1_Gain_b3rhft3ujm *
hfuaoawbo4x . djfx2ozwz1 [ 1 ] ; hfuaoawbo4x . fvxovyedkd [ 2 ] = bjiazabmpo
. Gain1_Gain_b3rhft3ujm * hfuaoawbo4x . djfx2ozwz1 [ 2 ] ; nx321qfqad_idx_0 =
( hfuaoawbo4x . fvxovyedkd [ 0 ] * hfuaoawbo4x . fvxovyedkd [ 0 ] +
hfuaoawbo4x . fvxovyedkd [ 1 ] * hfuaoawbo4x . fvxovyedkd [ 1 ] ) +
hfuaoawbo4x . fvxovyedkd [ 2 ] * hfuaoawbo4x . fvxovyedkd [ 2 ] ; if (
nx321qfqad_idx_0 < 0.0 ) { hfuaoawbo4x . chstcquajb = - muDoubleScalarSqrt (
muDoubleScalarAbs ( nx321qfqad_idx_0 ) ) ; } else { hfuaoawbo4x . chstcquajb
= muDoubleScalarSqrt ( nx321qfqad_idx_0 ) ; } if ( ssIsMajorTimeStep ( rtS )
) { ngg51vuviwy . bitl4izqts = ( hfuaoawbo4x . chstcquajb > bjiazabmpo .
NormalizeVector1_maxzero_pe3bb51lb3 ) ; } if ( ngg51vuviwy . bitl4izqts ) {
of0mnfctla_idx_0 = hfuaoawbo4x . fvxovyedkd [ 0 ] ; of0mnfctla_idx_1 =
hfuaoawbo4x . fvxovyedkd [ 1 ] ; of0mnfctla_idx_2 = hfuaoawbo4x . fvxovyedkd
[ 2 ] ; hxf251gs4i = hfuaoawbo4x . chstcquajb ; } else { hfuaoawbo4x .
kxzub5nxhq [ 0 ] = hfuaoawbo4x . fvxovyedkd [ 0 ] * 0.0 ; of0mnfctla_idx_0 =
hfuaoawbo4x . kxzub5nxhq [ 0 ] ; hfuaoawbo4x . kxzub5nxhq [ 1 ] = hfuaoawbo4x
. fvxovyedkd [ 1 ] * 0.0 ; of0mnfctla_idx_1 = hfuaoawbo4x . kxzub5nxhq [ 1 ]
; hfuaoawbo4x . kxzub5nxhq [ 2 ] = hfuaoawbo4x . fvxovyedkd [ 2 ] * 0.0 ;
of0mnfctla_idx_2 = hfuaoawbo4x . kxzub5nxhq [ 2 ] ; hxf251gs4i = bjiazabmpo .
Constant_Value_cpj53jxfos ; } j13n0bzt32_idx_0 = of0mnfctla_idx_0 /
hxf251gs4i ; j13n0bzt32_idx_1 = of0mnfctla_idx_1 / hxf251gs4i ;
j13n0bzt32_idx_2 = of0mnfctla_idx_2 / hxf251gs4i ; hfuaoawbo4x . mkltislhcr [
0 ] = j13n0bzt32_idx_1 * nx321qfqad_idx_2 - j13n0bzt32_idx_2 * b2r5roia4c [ 1
] ; hfuaoawbo4x . mkltislhcr [ 1 ] = j13n0bzt32_idx_2 * b2r5roia4c [ 0 ] -
j13n0bzt32_idx_0 * nx321qfqad_idx_2 ; hfuaoawbo4x . mkltislhcr [ 2 ] =
j13n0bzt32_idx_0 * b2r5roia4c [ 1 ] - j13n0bzt32_idx_1 * b2r5roia4c [ 0 ] ;
hfuaoawbo4x . pqempn25ab [ 0 ] = hfuaoawbo4x . mkltislhcr [ 1 ] *
nx321qfqad_idx_2 - hfuaoawbo4x . mkltislhcr [ 2 ] * b2r5roia4c [ 1 ] ;
hfuaoawbo4x . pqempn25ab [ 1 ] = hfuaoawbo4x . mkltislhcr [ 2 ] * b2r5roia4c
[ 0 ] - hfuaoawbo4x . mkltislhcr [ 0 ] * nx321qfqad_idx_2 ; hfuaoawbo4x .
pqempn25ab [ 2 ] = hfuaoawbo4x . mkltislhcr [ 0 ] * b2r5roia4c [ 1 ] -
hfuaoawbo4x . mkltislhcr [ 1 ] * b2r5roia4c [ 0 ] ; nx321qfqad_idx_2 = (
hfuaoawbo4x . pqempn25ab [ 0 ] * hfuaoawbo4x . pqempn25ab [ 0 ] + hfuaoawbo4x
. pqempn25ab [ 1 ] * hfuaoawbo4x . pqempn25ab [ 1 ] ) + hfuaoawbo4x .
pqempn25ab [ 2 ] * hfuaoawbo4x . pqempn25ab [ 2 ] ; if ( nx321qfqad_idx_2 <
0.0 ) { hfuaoawbo4x . jcrf3ejwt5 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
nx321qfqad_idx_2 ) ) ; } else { hfuaoawbo4x . jcrf3ejwt5 = muDoubleScalarSqrt
( nx321qfqad_idx_2 ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { ngg51vuviwy .
i4bzza0yhz = ( hfuaoawbo4x . jcrf3ejwt5 > bjiazabmpo .
NormalizeVector3_maxzero ) ; } if ( ngg51vuviwy . i4bzza0yhz ) {
of0mnfctla_idx_0 = hfuaoawbo4x . pqempn25ab [ 0 ] ; of0mnfctla_idx_1 =
hfuaoawbo4x . pqempn25ab [ 1 ] ; of0mnfctla_idx_2 = hfuaoawbo4x . pqempn25ab
[ 2 ] ; hxf251gs4i = hfuaoawbo4x . jcrf3ejwt5 ; } else { hfuaoawbo4x .
ccotai5ab1 [ 0 ] = hfuaoawbo4x . pqempn25ab [ 0 ] * 0.0 ; of0mnfctla_idx_0 =
hfuaoawbo4x . ccotai5ab1 [ 0 ] ; hfuaoawbo4x . ccotai5ab1 [ 1 ] = hfuaoawbo4x
. pqempn25ab [ 1 ] * 0.0 ; of0mnfctla_idx_1 = hfuaoawbo4x . ccotai5ab1 [ 1 ]
; hfuaoawbo4x . ccotai5ab1 [ 2 ] = hfuaoawbo4x . pqempn25ab [ 2 ] * 0.0 ;
of0mnfctla_idx_2 = hfuaoawbo4x . ccotai5ab1 [ 2 ] ; hxf251gs4i = bjiazabmpo .
Constant_Value_ouyamitdob ; } hfuaoawbo4x . hypth4pdun [ 3 ] =
of0mnfctla_idx_0 / hxf251gs4i ; hfuaoawbo4x . hypth4pdun [ 4 ] =
of0mnfctla_idx_1 / hxf251gs4i ; hfuaoawbo4x . hypth4pdun [ 5 ] =
of0mnfctla_idx_2 / hxf251gs4i ; nx321qfqad_idx_1 = ( hfuaoawbo4x . mkltislhcr
[ 0 ] * hfuaoawbo4x . mkltislhcr [ 0 ] + hfuaoawbo4x . mkltislhcr [ 1 ] *
hfuaoawbo4x . mkltislhcr [ 1 ] ) + hfuaoawbo4x . mkltislhcr [ 2 ] *
hfuaoawbo4x . mkltislhcr [ 2 ] ; if ( nx321qfqad_idx_1 < 0.0 ) { hfuaoawbo4x
. bcu4ylgp31 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( nx321qfqad_idx_1 )
) ; } else { hfuaoawbo4x . bcu4ylgp31 = muDoubleScalarSqrt ( nx321qfqad_idx_1
) ; } if ( ssIsMajorTimeStep ( rtS ) ) { ngg51vuviwy . pwucmqisoh = (
hfuaoawbo4x . bcu4ylgp31 > bjiazabmpo . NormalizeVector4_maxzero ) ; } if (
ngg51vuviwy . pwucmqisoh ) { of0mnfctla_idx_0 = hfuaoawbo4x . mkltislhcr [ 0
] ; of0mnfctla_idx_1 = hfuaoawbo4x . mkltislhcr [ 1 ] ; of0mnfctla_idx_2 =
hfuaoawbo4x . mkltislhcr [ 2 ] ; hxf251gs4i = hfuaoawbo4x . bcu4ylgp31 ; }
else { hfuaoawbo4x . plvraarov5 [ 0 ] = hfuaoawbo4x . mkltislhcr [ 0 ] * 0.0
; of0mnfctla_idx_0 = hfuaoawbo4x . plvraarov5 [ 0 ] ; hfuaoawbo4x .
plvraarov5 [ 1 ] = hfuaoawbo4x . mkltislhcr [ 1 ] * 0.0 ; of0mnfctla_idx_1 =
hfuaoawbo4x . plvraarov5 [ 1 ] ; hfuaoawbo4x . plvraarov5 [ 2 ] = hfuaoawbo4x
. mkltislhcr [ 2 ] * 0.0 ; of0mnfctla_idx_2 = hfuaoawbo4x . plvraarov5 [ 2 ]
; hxf251gs4i = bjiazabmpo . Constant_Value_guhbgdhd5y ; } hfuaoawbo4x .
hypth4pdun [ 6 ] = of0mnfctla_idx_0 / hxf251gs4i ; hfuaoawbo4x . hypth4pdun [
7 ] = of0mnfctla_idx_1 / hxf251gs4i ; hfuaoawbo4x . hypth4pdun [ 8 ] =
of0mnfctla_idx_2 / hxf251gs4i ; hfuaoawbo4x . du15nl3tzh = ( hfuaoawbo4x .
hypth4pdun [ 0 ] + hfuaoawbo4x . hypth4pdun [ 4 ] ) + hfuaoawbo4x .
hypth4pdun [ 8 ] ; rtPrevAction = ngg51vuviwy . bq4i23vlh3 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! ( hfuaoawbo4x .
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
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } es4aycsodv_idx_0 =
hfuaoawbo4x . du15nl3tzh + bjiazabmpo . Constant_Value_czyi20hi44 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . dbbrzhnfld != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . dbbrzhnfld
= 0 ; } nx321qfqad_idx_0 = muDoubleScalarSqrt ( es4aycsodv_idx_0 ) ; } else
if ( es4aycsodv_idx_0 < 0.0 ) { nx321qfqad_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( es4aycsodv_idx_0 ) ) ; ngg51vuviwy . dbbrzhnfld = 1 ; }
else { nx321qfqad_idx_0 = muDoubleScalarSqrt ( es4aycsodv_idx_0 ) ; }
hfuaoawbo4x . my3qvtobl0 [ 0 ] = bjiazabmpo . Gain_Gain * nx321qfqad_idx_0 ;
es4aycsodv_idx_0 = bjiazabmpo . Gain1_Gain * nx321qfqad_idx_0 ; hfuaoawbo4x .
my3qvtobl0 [ 1 ] = ( hfuaoawbo4x . hypth4pdun [ 7 ] - hfuaoawbo4x .
hypth4pdun [ 5 ] ) / es4aycsodv_idx_0 ; hfuaoawbo4x . my3qvtobl0 [ 2 ] = (
hfuaoawbo4x . hypth4pdun [ 2 ] - hfuaoawbo4x . hypth4pdun [ 6 ] ) /
es4aycsodv_idx_0 ; hfuaoawbo4x . my3qvtobl0 [ 3 ] = ( hfuaoawbo4x .
hypth4pdun [ 3 ] - hfuaoawbo4x . hypth4pdun [ 1 ] ) / es4aycsodv_idx_0 ; if (
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
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } es4aycsodv_idx_0 = (
( hfuaoawbo4x . hypth4pdun [ 4 ] - hfuaoawbo4x . hypth4pdun [ 0 ] ) -
hfuaoawbo4x . hypth4pdun [ 8 ] ) + bjiazabmpo . Constant_Value_glskcdmgi0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . flka3xd0vd != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . flka3xd0vd
= 0 ; } hfuaoawbo4x . its1kwdpoq = muDoubleScalarSqrt ( es4aycsodv_idx_0 ) ;
} else if ( es4aycsodv_idx_0 < 0.0 ) { hfuaoawbo4x . its1kwdpoq = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( es4aycsodv_idx_0 ) ) ; ngg51vuviwy .
flka3xd0vd = 1 ; } else { hfuaoawbo4x . its1kwdpoq = muDoubleScalarSqrt (
es4aycsodv_idx_0 ) ; } hfuaoawbo4x . my3qvtobl0 [ 2 ] = bjiazabmpo .
Gain_Gain_ffyvgqn0t3 * hfuaoawbo4x . its1kwdpoq ; if ( ssIsMajorTimeStep (
rtS ) ) { ngg51vuviwy . myjsbcl3ak = ( hfuaoawbo4x . its1kwdpoq != 0.0 ) ; }
if ( ngg51vuviwy . myjsbcl3ak ) { i4rx2zuc2h_idx_0 = bjiazabmpo .
Constant1_Value ; i4rx2zuc2h_idx_1 = hfuaoawbo4x . its1kwdpoq ; } else {
i4rx2zuc2h_idx_0 = bjiazabmpo . Constant2_Value [ 0 ] ; i4rx2zuc2h_idx_1 =
bjiazabmpo . Constant2_Value [ 1 ] ; } es4aycsodv_idx_0 = i4rx2zuc2h_idx_0 /
i4rx2zuc2h_idx_1 ; hfuaoawbo4x . my3qvtobl0 [ 1 ] = ( hfuaoawbo4x .
hypth4pdun [ 1 ] + hfuaoawbo4x . hypth4pdun [ 3 ] ) * es4aycsodv_idx_0 *
bjiazabmpo . Gain1_Gain_hf2zl5hf11 ; hfuaoawbo4x . my3qvtobl0 [ 3 ] = (
hfuaoawbo4x . hypth4pdun [ 5 ] + hfuaoawbo4x . hypth4pdun [ 7 ] ) *
es4aycsodv_idx_0 * bjiazabmpo . Gain3_Gain ; hfuaoawbo4x . my3qvtobl0 [ 0 ] =
( hfuaoawbo4x . hypth4pdun [ 2 ] - hfuaoawbo4x . hypth4pdun [ 6 ] ) *
es4aycsodv_idx_0 * bjiazabmpo . Gain4_Gain ; if ( ssIsMajorTimeStep ( rtS ) )
{ srUpdateBC ( ngg51vuviwy . gudujy1ejr ) ; } break ; case 1 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } es4aycsodv_idx_0 = (
( hfuaoawbo4x . hypth4pdun [ 8 ] - hfuaoawbo4x . hypth4pdun [ 0 ] ) -
hfuaoawbo4x . hypth4pdun [ 4 ] ) + bjiazabmpo . Constant_Value_p5m1vauvdr ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . k30q4yjdty != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . k30q4yjdty
= 0 ; } hfuaoawbo4x . cvmohjxrdw = muDoubleScalarSqrt ( es4aycsodv_idx_0 ) ;
} else if ( es4aycsodv_idx_0 < 0.0 ) { hfuaoawbo4x . cvmohjxrdw = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( es4aycsodv_idx_0 ) ) ; ngg51vuviwy .
k30q4yjdty = 1 ; } else { hfuaoawbo4x . cvmohjxrdw = muDoubleScalarSqrt (
es4aycsodv_idx_0 ) ; } hfuaoawbo4x . my3qvtobl0 [ 3 ] = bjiazabmpo .
Gain_Gain_ev442xw5g3 * hfuaoawbo4x . cvmohjxrdw ; if ( ssIsMajorTimeStep (
rtS ) ) { ngg51vuviwy . dzb2vyantf = ( hfuaoawbo4x . cvmohjxrdw != 0.0 ) ; }
if ( ngg51vuviwy . dzb2vyantf ) { i4rx2zuc2h_idx_0 = bjiazabmpo .
Constant1_Value_ius3i4otxm ; i4rx2zuc2h_idx_1 = hfuaoawbo4x . cvmohjxrdw ; }
else { i4rx2zuc2h_idx_0 = bjiazabmpo . Constant2_Value_j5v1xvugrn [ 0 ] ;
i4rx2zuc2h_idx_1 = bjiazabmpo . Constant2_Value_j5v1xvugrn [ 1 ] ; }
es4aycsodv_idx_0 = i4rx2zuc2h_idx_0 / i4rx2zuc2h_idx_1 ; hfuaoawbo4x .
my3qvtobl0 [ 1 ] = ( hfuaoawbo4x . hypth4pdun [ 2 ] + hfuaoawbo4x .
hypth4pdun [ 6 ] ) * es4aycsodv_idx_0 * bjiazabmpo . Gain1_Gain_bctn5kthma ;
hfuaoawbo4x . my3qvtobl0 [ 2 ] = ( hfuaoawbo4x . hypth4pdun [ 5 ] +
hfuaoawbo4x . hypth4pdun [ 7 ] ) * es4aycsodv_idx_0 * bjiazabmpo . Gain2_Gain
; hfuaoawbo4x . my3qvtobl0 [ 0 ] = ( hfuaoawbo4x . hypth4pdun [ 3 ] -
hfuaoawbo4x . hypth4pdun [ 1 ] ) * es4aycsodv_idx_0 * bjiazabmpo .
Gain3_Gain_iezjytb1ib ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
ngg51vuviwy . jeex0coj3h ) ; } break ; case 2 : if ( rtAction != rtPrevAction
) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } es4aycsodv_idx_0 = (
( hfuaoawbo4x . hypth4pdun [ 0 ] - hfuaoawbo4x . hypth4pdun [ 4 ] ) -
hfuaoawbo4x . hypth4pdun [ 8 ] ) + bjiazabmpo . Constant_Value_m2h11to3lk ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . nnokrisejy != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . nnokrisejy
= 0 ; } hfuaoawbo4x . punl0cw1in = muDoubleScalarSqrt ( es4aycsodv_idx_0 ) ;
} else if ( es4aycsodv_idx_0 < 0.0 ) { hfuaoawbo4x . punl0cw1in = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( es4aycsodv_idx_0 ) ) ; ngg51vuviwy .
nnokrisejy = 1 ; } else { hfuaoawbo4x . punl0cw1in = muDoubleScalarSqrt (
es4aycsodv_idx_0 ) ; } hfuaoawbo4x . my3qvtobl0 [ 1 ] = bjiazabmpo .
Gain_Gain_cqlkw4p3g1 * hfuaoawbo4x . punl0cw1in ; if ( ssIsMajorTimeStep (
rtS ) ) { ngg51vuviwy . fujlvkpypa = ( hfuaoawbo4x . punl0cw1in != 0.0 ) ; }
if ( ngg51vuviwy . fujlvkpypa ) { i4rx2zuc2h_idx_0 = bjiazabmpo .
Constant1_Value_c4wnv34dlm ; i4rx2zuc2h_idx_1 = hfuaoawbo4x . punl0cw1in ; }
else { i4rx2zuc2h_idx_0 = bjiazabmpo . Constant2_Value_i3cnjpylpr [ 0 ] ;
i4rx2zuc2h_idx_1 = bjiazabmpo . Constant2_Value_i3cnjpylpr [ 1 ] ; }
es4aycsodv_idx_0 = i4rx2zuc2h_idx_0 / i4rx2zuc2h_idx_1 ; hfuaoawbo4x .
my3qvtobl0 [ 2 ] = ( hfuaoawbo4x . hypth4pdun [ 1 ] + hfuaoawbo4x .
hypth4pdun [ 3 ] ) * es4aycsodv_idx_0 * bjiazabmpo . Gain1_Gain_ij2znuz5co ;
hfuaoawbo4x . my3qvtobl0 [ 3 ] = ( hfuaoawbo4x . hypth4pdun [ 2 ] +
hfuaoawbo4x . hypth4pdun [ 6 ] ) * es4aycsodv_idx_0 * bjiazabmpo .
Gain2_Gain_medwk1da45 ; hfuaoawbo4x . my3qvtobl0 [ 0 ] = ( hfuaoawbo4x .
hypth4pdun [ 7 ] - hfuaoawbo4x . hypth4pdun [ 5 ] ) * es4aycsodv_idx_0 *
bjiazabmpo . Gain3_Gain_j50dplxsob ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( ngg51vuviwy . picfdcdfap ) ; } break ; } if ( ssIsMajorTimeStep
( rtS ) ) { srUpdateBC ( ngg51vuviwy . bdbstwmumv ) ; } break ; }
nx321qfqad_idx_0 = ( ( hfuaoawbo4x . my3qvtobl0 [ 0 ] * hfuaoawbo4x .
my3qvtobl0 [ 0 ] + hfuaoawbo4x . my3qvtobl0 [ 1 ] * hfuaoawbo4x . my3qvtobl0
[ 1 ] ) + hfuaoawbo4x . my3qvtobl0 [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 2 ] ) +
hfuaoawbo4x . my3qvtobl0 [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 3 ] ; hxf251gs4i
= ( ( ( hfuaoawbo4x . j1xfny152w [ 0 ] * hfuaoawbo4x . my3qvtobl0 [ 0 ] +
hfuaoawbo4x . j1xfny152w [ 1 ] * hfuaoawbo4x . my3qvtobl0 [ 1 ] ) +
hfuaoawbo4x . j1xfny152w [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 2 ] ) +
hfuaoawbo4x . j1xfny152w [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 3 ] ) /
nx321qfqad_idx_0 ; nx321qfqad_idx_1 = ( ( ( hfuaoawbo4x . j1xfny152w [ 1 ] *
hfuaoawbo4x . my3qvtobl0 [ 0 ] - hfuaoawbo4x . j1xfny152w [ 0 ] * hfuaoawbo4x
. my3qvtobl0 [ 1 ] ) + hfuaoawbo4x . j1xfny152w [ 2 ] * hfuaoawbo4x .
my3qvtobl0 [ 3 ] ) - hfuaoawbo4x . j1xfny152w [ 3 ] * hfuaoawbo4x .
my3qvtobl0 [ 2 ] ) / nx321qfqad_idx_0 ; es4aycsodv_idx_0 = ( ( ( hfuaoawbo4x
. j1xfny152w [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 0 ] - hfuaoawbo4x .
j1xfny152w [ 0 ] * hfuaoawbo4x . my3qvtobl0 [ 2 ] ) - hfuaoawbo4x .
j1xfny152w [ 1 ] * hfuaoawbo4x . my3qvtobl0 [ 3 ] ) + hfuaoawbo4x .
j1xfny152w [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 1 ] ) / nx321qfqad_idx_0 ;
nx321qfqad_idx_0 = ( ( ( hfuaoawbo4x . j1xfny152w [ 1 ] * hfuaoawbo4x .
my3qvtobl0 [ 2 ] - hfuaoawbo4x . j1xfny152w [ 0 ] * hfuaoawbo4x . my3qvtobl0
[ 3 ] ) - hfuaoawbo4x . j1xfny152w [ 2 ] * hfuaoawbo4x . my3qvtobl0 [ 1 ] ) +
hfuaoawbo4x . j1xfny152w [ 3 ] * hfuaoawbo4x . my3qvtobl0 [ 0 ] ) /
nx321qfqad_idx_0 ; p2s2um3vln = ( ( hxf251gs4i * hxf251gs4i +
nx321qfqad_idx_1 * nx321qfqad_idx_1 ) + es4aycsodv_idx_0 * es4aycsodv_idx_0 )
+ nx321qfqad_idx_0 * nx321qfqad_idx_0 ; if ( ssIsMajorTimeStep ( rtS ) ) { if
( ngg51vuviwy . a3ekypkvyd != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . a3ekypkvyd
= 0 ; } nx321qfqad_idx_2 = muDoubleScalarSqrt ( p2s2um3vln ) ; } else if (
p2s2um3vln < 0.0 ) { nx321qfqad_idx_2 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( p2s2um3vln ) ) ; ngg51vuviwy . a3ekypkvyd = 1 ; } else {
nx321qfqad_idx_2 = muDoubleScalarSqrt ( p2s2um3vln ) ; } hxf251gs4i /=
nx321qfqad_idx_2 ; nx321qfqad_idx_1 /= nx321qfqad_idx_2 ; es4aycsodv_idx_0 /=
nx321qfqad_idx_2 ; nx321qfqad_idx_0 /= nx321qfqad_idx_2 ; hfuaoawbo4x .
cjccrkvyno [ 0 ] = muDoubleScalarAtan2 ( ( nx321qfqad_idx_1 *
es4aycsodv_idx_0 + hxf251gs4i * nx321qfqad_idx_0 ) * 2.0 , ( ( hxf251gs4i *
hxf251gs4i + nx321qfqad_idx_1 * nx321qfqad_idx_1 ) - es4aycsodv_idx_0 *
es4aycsodv_idx_0 ) - nx321qfqad_idx_0 * nx321qfqad_idx_0 ) ; hfuaoawbo4x .
njop3q5gx2 = ( nx321qfqad_idx_1 * nx321qfqad_idx_0 - hxf251gs4i *
es4aycsodv_idx_0 ) * - 2.0 ; rtPrevAction = ngg51vuviwy . cnunrbonew ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hfuaoawbo4x . njop3q5gx2 > 1.0 ) {
rtAction = 0 ; } else if ( hfuaoawbo4x . njop3q5gx2 < - 1.0 ) { rtAction = 1
; } else { rtAction = 2 ; } ngg51vuviwy . cnunrbonew = rtAction ; } else {
rtAction = ngg51vuviwy . cnunrbonew ; } if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; case 2 : lk0crlqaa1 ( rtS ) ; break ; } } switch ( rtAction ) {
case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { hfuaoawbo4x . pmhguwhdvv =
bjiazabmpo . Constant_Value ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC
( ngg51vuviwy . k0fulbi3y3 ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { hfuaoawbo4x . pmhguwhdvv = bjiazabmpo .
Constant_Value_ifjxstsexw ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
ngg51vuviwy . nkkan2lumh ) ; } break ; case 2 : if ( rtAction != rtPrevAction
) { itnis34hf1 ( rtS ) ; } ncyqqgn1fa ( hfuaoawbo4x . njop3q5gx2 , &
hfuaoawbo4x . pmhguwhdvv ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
ngg51vuviwy . ncyqqgn1fak . n0vodpbpn0 ) ; } break ; } if ( hfuaoawbo4x .
pmhguwhdvv > 1.0 ) { j13n0bzt32_idx_0 = 1.0 ; } else if ( hfuaoawbo4x .
pmhguwhdvv < - 1.0 ) { j13n0bzt32_idx_0 = - 1.0 ; } else { j13n0bzt32_idx_0 =
hfuaoawbo4x . pmhguwhdvv ; } hfuaoawbo4x . cjccrkvyno [ 1 ] =
muDoubleScalarAsin ( j13n0bzt32_idx_0 ) ; hfuaoawbo4x . cjccrkvyno [ 2 ] =
muDoubleScalarAtan2 ( ( es4aycsodv_idx_0 * nx321qfqad_idx_0 + hxf251gs4i *
nx321qfqad_idx_1 ) * 2.0 , ( ( hxf251gs4i * hxf251gs4i - nx321qfqad_idx_1 *
nx321qfqad_idx_1 ) - es4aycsodv_idx_0 * es4aycsodv_idx_0 ) + nx321qfqad_idx_0
* nx321qfqad_idx_0 ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { hxf251gs4i = (
hfuaoawbo4x . lmuzqxuokj * hfuaoawbo4x . lmuzqxuokj + hfuaoawbo4x .
cpm5g01ony * hfuaoawbo4x . cpm5g01ony ) + hfuaoawbo4x . ocma20pg4m *
hfuaoawbo4x . ocma20pg4m ; if ( hxf251gs4i < 0.0 ) { hxf251gs4i = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( hxf251gs4i ) ) ; } else { hxf251gs4i
= muDoubleScalarSqrt ( hxf251gs4i ) ; } if ( hxf251gs4i > bjiazabmpo .
NormalizeVector_maxzero_hzguuty3cr ) { of0mnfctla_idx_0 = hfuaoawbo4x .
lmuzqxuokj ; of0mnfctla_idx_1 = hfuaoawbo4x . cpm5g01ony ; of0mnfctla_idx_2 =
hfuaoawbo4x . ocma20pg4m ; } else { of0mnfctla_idx_0 = hfuaoawbo4x .
lmuzqxuokj * 0.0 ; of0mnfctla_idx_1 = hfuaoawbo4x . cpm5g01ony * 0.0 ;
of0mnfctla_idx_2 = hfuaoawbo4x . ocma20pg4m * 0.0 ; hxf251gs4i = bjiazabmpo .
Constant_Value_lkvqkajgqu ; } nx321qfqad_idx_0 = of0mnfctla_idx_0 /
hxf251gs4i ; nx321qfqad_idx_1 = of0mnfctla_idx_1 / hxf251gs4i ;
nx321qfqad_idx_2 = of0mnfctla_idx_2 / hxf251gs4i ; es4aycsodv_idx_0 = (
nx321qfqad_idx_0 * hfuaoawbo4x . i0bwop3aa5 + hfuaoawbo4x . ihlfku2rqr *
nx321qfqad_idx_1 ) + hfuaoawbo4x . eizptmd2fi * nx321qfqad_idx_2 ; hxf251gs4i
= muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . iti4c2htzu +
hfuaoawbo4x . pmfqzyroxp * nx321qfqad_idx_1 ) + hfuaoawbo4x . ob5dzupeki *
nx321qfqad_idx_2 , es4aycsodv_idx_0 ) ; es4aycsodv_idx_0 =
muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . bnbxchsr0d +
hfuaoawbo4x . aibthzgho4 * nx321qfqad_idx_1 ) + hfuaoawbo4x . fw04vwoiew *
nx321qfqad_idx_2 , es4aycsodv_idx_0 ) ; ozlhho1jhe_idx_0 = bjiazabmpo .
Constant_Value_gdj2wqmipb [ 0 ] + hxf251gs4i ; ozlhho1jhe_idx_1 = bjiazabmpo
. Constant_Value_gdj2wqmipb [ 1 ] + es4aycsodv_idx_0 ; } if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { RandSrc_GZ_D ( hfuaoawbo4x . a0a51vbmb1 , & bjiazabmpo .
RandomSource1_MeanVal_bb10j12xon , 1 , & bjiazabmpo .
RandomSource1_VarianceRTP_p1kv0s2xhi , 1 , ngg51vuviwy . hmuoixvgjk , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { hxf251gs4i = ozlhho1jhe_idx_0 +
hfuaoawbo4x . a0a51vbmb1 [ 0 ] ; if ( hxf251gs4i > bjiazabmpo .
Saturation_UpperSat_avopyj3crx ) { hfuaoawbo4x . pzdghdtfja [ 0 ] =
bjiazabmpo . Saturation_UpperSat_avopyj3crx ; } else if ( hxf251gs4i <
bjiazabmpo . Saturation_LowerSat_gomyrxdxwm ) { hfuaoawbo4x . pzdghdtfja [ 0
] = bjiazabmpo . Saturation_LowerSat_gomyrxdxwm ; } else { hfuaoawbo4x .
pzdghdtfja [ 0 ] = hxf251gs4i ; } hxf251gs4i = ozlhho1jhe_idx_1 + hfuaoawbo4x
. a0a51vbmb1 [ 1 ] ; if ( hxf251gs4i > bjiazabmpo .
Saturation_UpperSat_avopyj3crx ) { hfuaoawbo4x . pzdghdtfja [ 1 ] =
bjiazabmpo . Saturation_UpperSat_avopyj3crx ; } else if ( hxf251gs4i <
bjiazabmpo . Saturation_LowerSat_gomyrxdxwm ) { hfuaoawbo4x . pzdghdtfja [ 1
] = bjiazabmpo . Saturation_LowerSat_gomyrxdxwm ; } else { hfuaoawbo4x .
pzdghdtfja [ 1 ] = hxf251gs4i ; } dvqz3i5ole = ( hfuaoawbo4x . lmuzqxuokj *
hfuaoawbo4x . lmuzqxuokj + hfuaoawbo4x . cpm5g01ony * hfuaoawbo4x .
cpm5g01ony ) + hfuaoawbo4x . ocma20pg4m * hfuaoawbo4x . ocma20pg4m ; if (
dvqz3i5ole < 0.0 ) { dvqz3i5ole = - muDoubleScalarSqrt ( muDoubleScalarAbs (
dvqz3i5ole ) ) ; } else { dvqz3i5ole = muDoubleScalarSqrt ( dvqz3i5ole ) ; }
if ( dvqz3i5ole > bjiazabmpo . NormalizeVector_maxzero_fnmpynnyo1 ) {
of0mnfctla_idx_0 = hfuaoawbo4x . lmuzqxuokj ; of0mnfctla_idx_1 = hfuaoawbo4x
. cpm5g01ony ; of0mnfctla_idx_2 = hfuaoawbo4x . ocma20pg4m ; hxf251gs4i =
dvqz3i5ole ; } else { of0mnfctla_idx_0 = hfuaoawbo4x . lmuzqxuokj * 0.0 ;
of0mnfctla_idx_1 = hfuaoawbo4x . cpm5g01ony * 0.0 ; of0mnfctla_idx_2 =
hfuaoawbo4x . ocma20pg4m * 0.0 ; hxf251gs4i = bjiazabmpo .
Constant_Value_dgwb5paphy ; } nx321qfqad_idx_0 = of0mnfctla_idx_0 /
hxf251gs4i ; nx321qfqad_idx_1 = of0mnfctla_idx_1 / hxf251gs4i ;
nx321qfqad_idx_2 = of0mnfctla_idx_2 / hxf251gs4i ; hxf251gs4i = (
nx321qfqad_idx_0 * hfuaoawbo4x . iy4h2wzanu + hfuaoawbo4x . a4edbax1z3 *
nx321qfqad_idx_1 ) + hfuaoawbo4x . mpste0vxzt * nx321qfqad_idx_2 ; dvqz3i5ole
= muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hfuaoawbo4x . mtwhnewhid +
hfuaoawbo4x . o4dydkbclu * nx321qfqad_idx_1 ) + hfuaoawbo4x . jti4uwlk3m *
nx321qfqad_idx_2 , hxf251gs4i ) ; hxf251gs4i = muDoubleScalarAtan2 ( (
nx321qfqad_idx_0 * hfuaoawbo4x . k0s25tyxdf + hfuaoawbo4x . gf4ywczcig *
nx321qfqad_idx_1 ) + hfuaoawbo4x . lixyng4w4q * nx321qfqad_idx_2 , hxf251gs4i
) ; hynj2kga0l_idx_0 = bjiazabmpo . Constant_Value_efe2zzothx [ 0 ] +
dvqz3i5ole ; dvqz3i5ole = bjiazabmpo . Constant_Value_efe2zzothx [ 1 ] +
hxf251gs4i ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { RandSrc_GZ_D (
hfuaoawbo4x . iereuzzsux , & bjiazabmpo . RandomSource2_MeanVal , 1 , &
bjiazabmpo . RandomSource2_VarianceRTP , 1 , ngg51vuviwy . jgjcidiinu , 1 , 2
) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { hxf251gs4i = hynj2kga0l_idx_0 +
hfuaoawbo4x . iereuzzsux [ 0 ] ; if ( hxf251gs4i > bjiazabmpo .
Saturation1_UpperSat ) { hfuaoawbo4x . nrlkxnu4yx [ 0 ] = bjiazabmpo .
Saturation1_UpperSat ; } else if ( hxf251gs4i < bjiazabmpo .
Saturation1_LowerSat ) { hfuaoawbo4x . nrlkxnu4yx [ 0 ] = bjiazabmpo .
Saturation1_LowerSat ; } else { hfuaoawbo4x . nrlkxnu4yx [ 0 ] = hxf251gs4i ;
} hxf251gs4i = dvqz3i5ole + hfuaoawbo4x . iereuzzsux [ 1 ] ; if ( hxf251gs4i
> bjiazabmpo . Saturation1_UpperSat ) { hfuaoawbo4x . nrlkxnu4yx [ 1 ] =
bjiazabmpo . Saturation1_UpperSat ; } else if ( hxf251gs4i < bjiazabmpo .
Saturation1_LowerSat ) { hfuaoawbo4x . nrlkxnu4yx [ 1 ] = bjiazabmpo .
Saturation1_LowerSat ; } else { hfuaoawbo4x . nrlkxnu4yx [ 1 ] = hxf251gs4i ;
} } ozlhho1jhe_idx_1 = ( hfuaoawbo4x . lmuzqxuokj * hfuaoawbo4x . lmuzqxuokj
+ hfuaoawbo4x . cpm5g01ony * hfuaoawbo4x . cpm5g01ony ) + hfuaoawbo4x .
ocma20pg4m * hfuaoawbo4x . ocma20pg4m ; if ( ozlhho1jhe_idx_1 < 0.0 ) {
hfuaoawbo4x . hzxy1e3aeq = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ozlhho1jhe_idx_1 ) ) ; } else { hfuaoawbo4x . hzxy1e3aeq = muDoubleScalarSqrt
( ozlhho1jhe_idx_1 ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { ngg51vuviwy .
oc5laiw1cg = ( hfuaoawbo4x . hzxy1e3aeq > bjiazabmpo .
NormalizeVector_maxzero_g24tnzjgpe ) ; } if ( ngg51vuviwy . oc5laiw1cg ) {
of0mnfctla_idx_0 = hfuaoawbo4x . lmuzqxuokj ; of0mnfctla_idx_1 = hfuaoawbo4x
. cpm5g01ony ; of0mnfctla_idx_2 = hfuaoawbo4x . ocma20pg4m ; hxf251gs4i =
hfuaoawbo4x . hzxy1e3aeq ; } else { hfuaoawbo4x . maelhcaps4 [ 0 ] =
hfuaoawbo4x . lmuzqxuokj * 0.0 ; of0mnfctla_idx_0 = hfuaoawbo4x . maelhcaps4
[ 0 ] ; hfuaoawbo4x . maelhcaps4 [ 1 ] = hfuaoawbo4x . cpm5g01ony * 0.0 ;
of0mnfctla_idx_1 = hfuaoawbo4x . maelhcaps4 [ 1 ] ; hfuaoawbo4x . maelhcaps4
[ 2 ] = hfuaoawbo4x . ocma20pg4m * 0.0 ; of0mnfctla_idx_2 = hfuaoawbo4x .
maelhcaps4 [ 2 ] ; hxf251gs4i = bjiazabmpo . Constant_Value_ez3azj2hb4 ; }
hfuaoawbo4x . mgmp4jf0kq [ 0 ] = of0mnfctla_idx_0 / hxf251gs4i ; hfuaoawbo4x
. mgmp4jf0kq [ 1 ] = of0mnfctla_idx_1 / hxf251gs4i ; hfuaoawbo4x . mgmp4jf0kq
[ 2 ] = of0mnfctla_idx_2 / hxf251gs4i ; ozlhho1jhe_idx_1 = ( hfuaoawbo4x .
lmuzqxuokj * hfuaoawbo4x . lmuzqxuokj + hfuaoawbo4x . cpm5g01ony *
hfuaoawbo4x . cpm5g01ony ) + hfuaoawbo4x . ocma20pg4m * hfuaoawbo4x .
ocma20pg4m ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . ig1vvmw4od
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy .
ig1vvmw4od = 0 ; } hfuaoawbo4x . kmcgn0cyib = muDoubleScalarSqrt (
ozlhho1jhe_idx_1 ) ; } else if ( ozlhho1jhe_idx_1 < 0.0 ) { hfuaoawbo4x .
kmcgn0cyib = - muDoubleScalarSqrt ( muDoubleScalarAbs ( ozlhho1jhe_idx_1 ) )
; ngg51vuviwy . ig1vvmw4od = 1 ; } else { hfuaoawbo4x . kmcgn0cyib =
muDoubleScalarSqrt ( ozlhho1jhe_idx_1 ) ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { hfuaoawbo4x . asay5kywf5 = ( ( hfuaoawbo4x . j1xfny152w [ 0 ] *
hfuaoawbo4x . j1xfny152w [ 0 ] + hfuaoawbo4x . j1xfny152w [ 1 ] * hfuaoawbo4x
. j1xfny152w [ 1 ] ) + hfuaoawbo4x . j1xfny152w [ 2 ] * hfuaoawbo4x .
j1xfny152w [ 2 ] ) + hfuaoawbo4x . j1xfny152w [ 3 ] * hfuaoawbo4x .
j1xfny152w [ 3 ] ; } es4aycsodv_idx_0 = ( ( ( bv45xcfiny * hfuaoawbo4x .
j1xfny152w [ 0 ] + dd25cwjzns * hfuaoawbo4x . j1xfny152w [ 1 ] ) + kwje4y1vlu
* hfuaoawbo4x . j1xfny152w [ 2 ] ) + nm4t0wvumv * hfuaoawbo4x . j1xfny152w [
3 ] ) / hfuaoawbo4x . asay5kywf5 ; nx321qfqad_idx_0 = ( ( ( dd25cwjzns *
hfuaoawbo4x . j1xfny152w [ 0 ] - bv45xcfiny * hfuaoawbo4x . j1xfny152w [ 1 ]
) + kwje4y1vlu * hfuaoawbo4x . j1xfny152w [ 3 ] ) - nm4t0wvumv * hfuaoawbo4x
. j1xfny152w [ 2 ] ) / hfuaoawbo4x . asay5kywf5 ; hxf251gs4i = ( ( (
kwje4y1vlu * hfuaoawbo4x . j1xfny152w [ 0 ] - bv45xcfiny * hfuaoawbo4x .
j1xfny152w [ 2 ] ) - dd25cwjzns * hfuaoawbo4x . j1xfny152w [ 3 ] ) +
nm4t0wvumv * hfuaoawbo4x . j1xfny152w [ 1 ] ) / hfuaoawbo4x . asay5kywf5 ;
ozlhho1jhe_idx_1 = ( ( ( dd25cwjzns * hfuaoawbo4x . j1xfny152w [ 2 ] -
bv45xcfiny * hfuaoawbo4x . j1xfny152w [ 3 ] ) - kwje4y1vlu * hfuaoawbo4x .
j1xfny152w [ 1 ] ) + nm4t0wvumv * hfuaoawbo4x . j1xfny152w [ 0 ] ) /
hfuaoawbo4x . asay5kywf5 ; nx321qfqad_idx_2 = ( ( es4aycsodv_idx_0 *
es4aycsodv_idx_0 + nx321qfqad_idx_0 * nx321qfqad_idx_0 ) + hxf251gs4i *
hxf251gs4i ) + ozlhho1jhe_idx_1 * ozlhho1jhe_idx_1 ; if ( ssIsMajorTimeStep (
rtS ) ) { if ( ngg51vuviwy . psyl0mnuvj != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . psyl0mnuvj
= 0 ; } dvqz3i5ole = muDoubleScalarSqrt ( nx321qfqad_idx_2 ) ; } else if (
nx321qfqad_idx_2 < 0.0 ) { dvqz3i5ole = - muDoubleScalarSqrt (
muDoubleScalarAbs ( nx321qfqad_idx_2 ) ) ; ngg51vuviwy . psyl0mnuvj = 1 ; }
else { dvqz3i5ole = muDoubleScalarSqrt ( nx321qfqad_idx_2 ) ; }
es4aycsodv_idx_0 /= dvqz3i5ole ; nx321qfqad_idx_0 /= dvqz3i5ole ; hxf251gs4i
/= dvqz3i5ole ; ozlhho1jhe_idx_1 /= dvqz3i5ole ; hfuaoawbo4x . ozhlra24jp [ 0
] = muDoubleScalarAtan2 ( ( nx321qfqad_idx_0 * hxf251gs4i + es4aycsodv_idx_0
* ozlhho1jhe_idx_1 ) * 2.0 , ( ( es4aycsodv_idx_0 * es4aycsodv_idx_0 +
nx321qfqad_idx_0 * nx321qfqad_idx_0 ) - hxf251gs4i * hxf251gs4i ) -
ozlhho1jhe_idx_1 * ozlhho1jhe_idx_1 ) ; hfuaoawbo4x . h23bmldhv4 = (
nx321qfqad_idx_0 * ozlhho1jhe_idx_1 - es4aycsodv_idx_0 * hxf251gs4i ) * - 2.0
; rtPrevAction = ngg51vuviwy . mvxnb5arqf ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( hfuaoawbo4x . h23bmldhv4 > 1.0 ) { rtAction = 0 ; } else if (
hfuaoawbo4x . h23bmldhv4 < - 1.0 ) { rtAction = 1 ; } else { rtAction = 2 ; }
ngg51vuviwy . mvxnb5arqf = rtAction ; } else { rtAction = ngg51vuviwy .
mvxnb5arqf ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1
: ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
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
h1m1us0vhn > 1.0 ) { j13n0bzt32_idx_0 = 1.0 ; } else if ( hfuaoawbo4x .
h1m1us0vhn < - 1.0 ) { j13n0bzt32_idx_0 = - 1.0 ; } else { j13n0bzt32_idx_0 =
hfuaoawbo4x . h1m1us0vhn ; } hfuaoawbo4x . ozhlra24jp [ 1 ] =
muDoubleScalarAsin ( j13n0bzt32_idx_0 ) ; hfuaoawbo4x . ozhlra24jp [ 2 ] =
muDoubleScalarAtan2 ( ( hxf251gs4i * ozlhho1jhe_idx_1 + es4aycsodv_idx_0 *
nx321qfqad_idx_0 ) * 2.0 , ( ( es4aycsodv_idx_0 * es4aycsodv_idx_0 -
nx321qfqad_idx_0 * nx321qfqad_idx_0 ) - hxf251gs4i * hxf251gs4i ) +
ozlhho1jhe_idx_1 * ozlhho1jhe_idx_1 ) ; hfuaoawbo4x . n0xb4olsgj [ 0 ] =
hfuaoawbo4x . jz4js4cavj [ 0 ] - hfuaoawbo4x . j1xfny152w [ 4 ] ; hfuaoawbo4x
. n0xb4olsgj [ 1 ] = hfuaoawbo4x . jz4js4cavj [ 1 ] - hfuaoawbo4x .
j1xfny152w [ 5 ] ; hfuaoawbo4x . n0xb4olsgj [ 2 ] = hfuaoawbo4x . jz4js4cavj
[ 2 ] - hfuaoawbo4x . j1xfny152w [ 6 ] ; ozlhho1jhe_idx_1 = (
gym345g4fq_idx_0 * gym345g4fq_idx_0 + gym345g4fq_idx_1 * gym345g4fq_idx_1 ) +
gym345g4fq_idx_2 * gym345g4fq_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
ngg51vuviwy . kbsac44cjw != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ngg51vuviwy . kbsac44cjw = 0 ; } dvqz3i5ole = muDoubleScalarSqrt (
ozlhho1jhe_idx_1 ) ; } else if ( ozlhho1jhe_idx_1 < 0.0 ) { dvqz3i5ole = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( ozlhho1jhe_idx_1 ) ) ; ngg51vuviwy .
kbsac44cjw = 1 ; } else { dvqz3i5ole = muDoubleScalarSqrt ( ozlhho1jhe_idx_1
) ; } ozlhho1jhe_idx_1 = 1.0 / ( dvqz3i5ole * dvqz3i5ole ) / dvqz3i5ole *
hfuaoawbo4x . jbummyrznk ; j13n0bzt32_idx_0 = gym345g4fq_idx_0 / dvqz3i5ole ;
j13n0bzt32_idx_1 = gym345g4fq_idx_1 / dvqz3i5ole ; j13n0bzt32_idx_2 =
gym345g4fq_idx_2 / dvqz3i5ole ; dvqz3i5ole = ( ( bv45xcfiny * bv45xcfiny +
dd25cwjzns * dd25cwjzns ) + kwje4y1vlu * kwje4y1vlu ) + nm4t0wvumv *
nm4t0wvumv ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . kl2lfyanp1
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy .
kl2lfyanp1 = 0 ; } nx321qfqad_idx_0 = muDoubleScalarSqrt ( dvqz3i5ole ) ; }
else if ( dvqz3i5ole < 0.0 ) { nx321qfqad_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( dvqz3i5ole ) ) ; ngg51vuviwy . kl2lfyanp1 = 1 ; } else {
nx321qfqad_idx_0 = muDoubleScalarSqrt ( dvqz3i5ole ) ; } dvqz3i5ole =
dd25cwjzns / nx321qfqad_idx_0 ; hxf251gs4i = kwje4y1vlu / nx321qfqad_idx_0 ;
es4aycsodv_idx_0 = bv45xcfiny / nx321qfqad_idx_0 ; nx321qfqad_idx_1 =
nm4t0wvumv / nx321qfqad_idx_0 ; nx321qfqad_idx_0 = ( ( ( bjiazabmpo .
Constant_Value_lxx0buxvfk - dvqz3i5ole * dvqz3i5ole ) - nx321qfqad_idx_1 *
nx321qfqad_idx_1 ) * bjiazabmpo . Gain2_Gain_n32pjfxnui * j13n0bzt32_idx_1 +
( dvqz3i5ole * hxf251gs4i - es4aycsodv_idx_0 * nx321qfqad_idx_1 ) *
bjiazabmpo . Gain_Gain_cf5hb10y5x * j13n0bzt32_idx_0 ) + ( es4aycsodv_idx_0 *
dvqz3i5ole + hxf251gs4i * nx321qfqad_idx_1 ) * bjiazabmpo .
Gain1_Gain_gwlrw1w2b3 * j13n0bzt32_idx_2 ; nx321qfqad_idx_2 = ( ( dvqz3i5ole
* nx321qfqad_idx_1 + es4aycsodv_idx_0 * hxf251gs4i ) * bjiazabmpo .
Gain_Gain_efnax0y1dx * j13n0bzt32_idx_0 + ( hxf251gs4i * nx321qfqad_idx_1 -
es4aycsodv_idx_0 * dvqz3i5ole ) * bjiazabmpo . Gain1_Gain_ddeccjfmea *
j13n0bzt32_idx_1 ) + ( ( bjiazabmpo . Constant_Value_a2jieicat5 - dvqz3i5ole
* dvqz3i5ole ) - hxf251gs4i * hxf251gs4i ) * bjiazabmpo .
Gain2_Gain_g2ebct4dqc * j13n0bzt32_idx_2 ; dvqz3i5ole = ( ( ( bjiazabmpo .
Constant_Value_bpdqgjnrbi - hxf251gs4i * hxf251gs4i ) - nx321qfqad_idx_1 *
nx321qfqad_idx_1 ) * bjiazabmpo . Gain2_Gain_cko11epp5n * j13n0bzt32_idx_0 +
( dvqz3i5ole * hxf251gs4i + es4aycsodv_idx_0 * nx321qfqad_idx_1 ) *
bjiazabmpo . Gain_Gain_cjicctxqb2 * j13n0bzt32_idx_1 ) + ( dvqz3i5ole *
nx321qfqad_idx_1 - es4aycsodv_idx_0 * hxf251gs4i ) * bjiazabmpo .
Gain1_Gain_nieh11pzcd * j13n0bzt32_idx_2 ; j13n0bzt32_idx_0 = hfuaoawbo4x .
bhk0qefpw3 [ 0 ] * nx321qfqad_idx_0 * nx321qfqad_idx_2 * ozlhho1jhe_idx_1 ;
j13n0bzt32_idx_1 = hfuaoawbo4x . bhk0qefpw3 [ 1 ] * nx321qfqad_idx_2 *
dvqz3i5ole * ozlhho1jhe_idx_1 ; j13n0bzt32_idx_2 = hfuaoawbo4x . bhk0qefpw3 [
2 ] * dvqz3i5ole * nx321qfqad_idx_0 * ozlhho1jhe_idx_1 ; ozlhho1jhe_idx_1 = (
gym345g4fq_idx_0 * gym345g4fq_idx_0 + gym345g4fq_idx_1 * gym345g4fq_idx_1 ) +
gym345g4fq_idx_2 * gym345g4fq_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
ngg51vuviwy . bvasf03rkx != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ngg51vuviwy . bvasf03rkx = 0 ; } hfuaoawbo4x . jgzl5fcvsu =
muDoubleScalarSqrt ( ozlhho1jhe_idx_1 ) ; } else if ( ozlhho1jhe_idx_1 < 0.0
) { hfuaoawbo4x . jgzl5fcvsu = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ozlhho1jhe_idx_1 ) ) ; ngg51vuviwy . bvasf03rkx = 1 ; } else { hfuaoawbo4x .
jgzl5fcvsu = muDoubleScalarSqrt ( ozlhho1jhe_idx_1 ) ; } b2r5roia4c [ 0 ] =
gym345g4fq_idx_0 / hfuaoawbo4x . jgzl5fcvsu ; b2r5roia4c [ 1 ] =
gym345g4fq_idx_1 / hfuaoawbo4x . jgzl5fcvsu ; b2r5roia4c [ 2 ] =
gym345g4fq_idx_2 / hfuaoawbo4x . jgzl5fcvsu ; ozlhho1jhe_idx_1 = b2r5roia4c [
0 ] * b2r5roia4c [ 0 ] + b2r5roia4c [ 1 ] * b2r5roia4c [ 1 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . cwb3bnplqh != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . cwb3bnplqh
= 0 ; } dvqz3i5ole = muDoubleScalarSqrt ( ozlhho1jhe_idx_1 ) ; } else if (
ozlhho1jhe_idx_1 < 0.0 ) { dvqz3i5ole = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ozlhho1jhe_idx_1 ) ) ; ngg51vuviwy . cwb3bnplqh = 1 ; }
else { dvqz3i5ole = muDoubleScalarSqrt ( ozlhho1jhe_idx_1 ) ; } hfuaoawbo4x .
iuxf2i4tcl = muDoubleScalarAtan2 ( dvqz3i5ole , b2r5roia4c [ 2 ] ) ;
hxf251gs4i = muDoubleScalarAtan2 ( b2r5roia4c [ 1 ] , b2r5roia4c [ 0 ] ) ;
hfuaoawbo4x . aarhhbez0n = hxf251gs4i - 6.2831853071795862 / rtP_Earth .
siderealDay * ssGetT ( rtS ) ; MagneticFieldInPolarCoords ( & hfuaoawbo4x .
jgzl5fcvsu , & hfuaoawbo4x . iuxf2i4tcl , & hfuaoawbo4x . aarhhbez0n , &
rtP_Earth . equatorialRadius , & hfuaoawbo4x . cbt3p1gwln [ 0 ] ) ;
dvqz3i5ole = bjiazabmpo . Gain_Gain_m4jtdwqsx1 * hfuaoawbo4x . iuxf2i4tcl ;
ozlhho1jhe_idx_1 = muDoubleScalarCos ( dvqz3i5ole ) ; es4aycsodv_idx_0 =
bjiazabmpo . Gain_Gain_cnryscy0x5 * hxf251gs4i ; hxf251gs4i =
muDoubleScalarSin ( es4aycsodv_idx_0 ) ; es4aycsodv_idx_0 = muDoubleScalarCos
( es4aycsodv_idx_0 ) ; dvqz3i5ole = muDoubleScalarSin ( dvqz3i5ole ) ;
nx321qfqad_idx_0 = ( ozlhho1jhe_idx_1 * bjiazabmpo .
Constant_Value_hrofb0v0v5 + es4aycsodv_idx_0 * bjiazabmpo .
Constant_Value_ekkpqgqspn ) + ( dvqz3i5ole * hxf251gs4i - bjiazabmpo .
Constant_Value_ekkpqgqspn * bjiazabmpo . Constant_Value_hrofb0v0v5 ) ;
es4aycsodv_idx_1 = ( ( ozlhho1jhe_idx_1 * bjiazabmpo .
Constant_Value_hrofb0v0v5 + es4aycsodv_idx_0 * dvqz3i5ole ) + ( bjiazabmpo .
Constant_Value_ekkpqgqspn * bjiazabmpo . Constant_Value_hrofb0v0v5 -
bjiazabmpo . Constant_Value_ekkpqgqspn * hxf251gs4i ) ) * bjiazabmpo .
Gain_Gain_flpxquj1at ; ozlhho1jhe_idx_0 = es4aycsodv_idx_1 ; es4aycsodv_idx_1
= ( ( ozlhho1jhe_idx_1 * hxf251gs4i + es4aycsodv_idx_0 * bjiazabmpo .
Constant_Value_ekkpqgqspn ) + ( bjiazabmpo . Constant_Value_ekkpqgqspn *
bjiazabmpo . Constant_Value_hrofb0v0v5 - dvqz3i5ole * bjiazabmpo .
Constant_Value_hrofb0v0v5 ) ) * bjiazabmpo . Gain_Gain_flpxquj1at ;
ozlhho1jhe_idx_1 = ozlhho1jhe_idx_1 * es4aycsodv_idx_0 - ( ( bjiazabmpo .
Constant_Value_ekkpqgqspn * bjiazabmpo . Constant_Value_hrofb0v0v5 +
dvqz3i5ole * bjiazabmpo . Constant_Value_hrofb0v0v5 ) + bjiazabmpo .
Constant_Value_ekkpqgqspn * hxf251gs4i ) ; hynj2kga0l_idx_0 = nm4t0wvumv *
nx321qfqad_idx_0 ; es4aycsodv_idx_0 = kwje4y1vlu * nx321qfqad_idx_0 ;
hxf251gs4i = nx321qfqad_idx_0 ; nx321qfqad_idx_0 = ( bv45xcfiny *
nx321qfqad_idx_0 + ozlhho1jhe_idx_1 * dd25cwjzns ) + ( kwje4y1vlu *
es4aycsodv_idx_1 - nm4t0wvumv * ozlhho1jhe_idx_0 ) ; nx321qfqad_idx_1 = (
bv45xcfiny * ozlhho1jhe_idx_0 + ozlhho1jhe_idx_1 * kwje4y1vlu ) + (
hynj2kga0l_idx_0 - dd25cwjzns * es4aycsodv_idx_1 ) ; nx321qfqad_idx_2 = (
bv45xcfiny * es4aycsodv_idx_1 + ozlhho1jhe_idx_1 * nm4t0wvumv ) + (
dd25cwjzns * ozlhho1jhe_idx_0 - es4aycsodv_idx_0 ) ; hxf251gs4i = bv45xcfiny
* ozlhho1jhe_idx_1 - ( ( dd25cwjzns * hxf251gs4i + kwje4y1vlu *
ozlhho1jhe_idx_0 ) + nm4t0wvumv * es4aycsodv_idx_1 ) ; ozlhho1jhe_idx_1 = ( (
hxf251gs4i * hxf251gs4i + nx321qfqad_idx_0 * nx321qfqad_idx_0 ) +
nx321qfqad_idx_1 * nx321qfqad_idx_1 ) + nx321qfqad_idx_2 * nx321qfqad_idx_2 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . kgrjq2yk3i != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . kgrjq2yk3i
= 0 ; } es4aycsodv_idx_0 = muDoubleScalarSqrt ( ozlhho1jhe_idx_1 ) ; } else
if ( ozlhho1jhe_idx_1 < 0.0 ) { es4aycsodv_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ozlhho1jhe_idx_1 ) ) ; ngg51vuviwy . kgrjq2yk3i = 1 ; }
else { es4aycsodv_idx_0 = muDoubleScalarSqrt ( ozlhho1jhe_idx_1 ) ; }
ozlhho1jhe_idx_1 = nx321qfqad_idx_0 / es4aycsodv_idx_0 ; dvqz3i5ole =
nx321qfqad_idx_2 / es4aycsodv_idx_0 ; hxf251gs4i /= es4aycsodv_idx_0 ;
nx321qfqad_idx_2 = nx321qfqad_idx_1 / es4aycsodv_idx_0 ; es4aycsodv_idx_0 = (
( ozlhho1jhe_idx_1 * dvqz3i5ole + hxf251gs4i * nx321qfqad_idx_2 ) *
bjiazabmpo . Gain_Gain_fsocaetgdj * hfuaoawbo4x . cbt3p1gwln [ 0 ] + (
nx321qfqad_idx_2 * dvqz3i5ole - hxf251gs4i * ozlhho1jhe_idx_1 ) * bjiazabmpo
. Gain1_Gain_igcxviai5g * hfuaoawbo4x . cbt3p1gwln [ 1 ] ) + ( ( bjiazabmpo .
Constant_Value_nfqnghygav - ozlhho1jhe_idx_1 * ozlhho1jhe_idx_1 ) -
nx321qfqad_idx_2 * nx321qfqad_idx_2 ) * bjiazabmpo . Gain2_Gain_mcrod3aisq *
hfuaoawbo4x . cbt3p1gwln [ 2 ] ; nx321qfqad_idx_0 = ( ( ( bjiazabmpo .
Constant_Value_ollq4x5vyn - nx321qfqad_idx_2 * nx321qfqad_idx_2 ) -
dvqz3i5ole * dvqz3i5ole ) * bjiazabmpo . Gain2_Gain_d0aeb3inpf * hfuaoawbo4x
. cbt3p1gwln [ 0 ] + ( ozlhho1jhe_idx_1 * nx321qfqad_idx_2 + hxf251gs4i *
dvqz3i5ole ) * bjiazabmpo . Gain_Gain_avgts0xajn * hfuaoawbo4x . cbt3p1gwln [
1 ] ) + ( ozlhho1jhe_idx_1 * dvqz3i5ole - hxf251gs4i * nx321qfqad_idx_2 ) *
bjiazabmpo . Gain1_Gain_pfgznzxep3 * hfuaoawbo4x . cbt3p1gwln [ 2 ] ;
ozlhho1jhe_idx_1 = ( ( ( bjiazabmpo . Constant_Value_jelrytb22b -
ozlhho1jhe_idx_1 * ozlhho1jhe_idx_1 ) - dvqz3i5ole * dvqz3i5ole ) *
bjiazabmpo . Gain2_Gain_jbi3ws3ahy * hfuaoawbo4x . cbt3p1gwln [ 1 ] + (
ozlhho1jhe_idx_1 * nx321qfqad_idx_2 - hxf251gs4i * dvqz3i5ole ) * bjiazabmpo
. Gain_Gain_l4qk2foong * hfuaoawbo4x . cbt3p1gwln [ 0 ] ) + ( hxf251gs4i *
ozlhho1jhe_idx_1 + nx321qfqad_idx_2 * dvqz3i5ole ) * bjiazabmpo .
Gain1_Gain_b2dtklqw2b * hfuaoawbo4x . cbt3p1gwln [ 2 ] ; es4aycsodv_idx_1 =
bjiazabmpo . Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] *
es4aycsodv_idx_0 ; hynj2kga0l_idx_0 = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * nx321qfqad_idx_0 ;
p2s2um3vln = bjiazabmpo . Spacecraftmagneticdipolebodyreferenceframe_Value [
0 ] * ozlhho1jhe_idx_1 ; lkb3lbvxyk_idx_1 = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * ozlhho1jhe_idx_1 ;
i4rx2zuc2h_idx_1 = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * es4aycsodv_idx_0 ;
es4aycsodv_idx_0 = bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] * nx321qfqad_idx_0 ;
nx321qfqad_idx_0 = hfuaoawbo4x . kslnzluaes ; nx321qfqad_idx_1 = hfuaoawbo4x
. erv4px4dbo ; nx321qfqad_idx_2 = hfuaoawbo4x . pkka3h1xrv ; ozlhho1jhe_idx_1
= ( hfuaoawbo4x . kslnzluaes * hfuaoawbo4x . kslnzluaes + hfuaoawbo4x .
erv4px4dbo * hfuaoawbo4x . erv4px4dbo ) + hfuaoawbo4x . pkka3h1xrv *
hfuaoawbo4x . pkka3h1xrv ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
ngg51vuviwy . obyeutsorr != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ngg51vuviwy . obyeutsorr = 0 ; } dvqz3i5ole = muDoubleScalarSqrt (
ozlhho1jhe_idx_1 ) ; } else if ( ozlhho1jhe_idx_1 < 0.0 ) { dvqz3i5ole = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( ozlhho1jhe_idx_1 ) ) ; ngg51vuviwy .
obyeutsorr = 1 ; } else { dvqz3i5ole = muDoubleScalarSqrt ( ozlhho1jhe_idx_1
) ; } ozlhho1jhe_idx_1 = rtP_Const . AU_1 / dvqz3i5ole ; ozlhho1jhe_idx_1 =
ozlhho1jhe_idx_1 * ozlhho1jhe_idx_1 * hfuaoawbo4x . ddyoytv0e2 ; b2r5roia4c [
0 ] = 0.0 ; nx321qfqad_idx_0 /= dvqz3i5ole ; b2r5roia4c [ 1 ] = 0.0 ;
nx321qfqad_idx_1 /= dvqz3i5ole ; of0mnfctla_idx_0 = nx321qfqad_idx_2 /
dvqz3i5ole ; b2r5roia4c [ 2 ] = 0.0 ; for ( i = 0 ; i < 10 ; i ++ ) {
nx321qfqad_idx_2 = b [ i ] ; hxf251gs4i = ( rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 1 ] * nx321qfqad_idx_1 + rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i ] * nx321qfqad_idx_0 ) + rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * of0mnfctla_idx_0 ; if ( hxf251gs4i >
0.0 ) { dvqz3i5ole = 2.0 * nx321qfqad_idx_2 * hxf251gs4i +
0.066666666666666666 ; hxf251gs4i *= - ozlhho1jhe_idx_1 * rtP_Spacecraft .
surfaces_area [ i ] ; of0mnfctla_idx_1 = ( ( 1.0 - nx321qfqad_idx_2 ) *
nx321qfqad_idx_0 + rtP_Spacecraft . surfaces_normalToSurface [ 3 * i ] *
dvqz3i5ole ) * hxf251gs4i ; of0mnfctla_idx_2 = rtP_Spacecraft .
surfaces_position [ 3 * i ] + rtP_Spacecraft . geometricCenter [ 0 ] ;
i4rx2zuc2h_idx_0 = ( rtP_Spacecraft . surfaces_normalToSurface [ 3 * i + 1 ]
* dvqz3i5ole + ( 1.0 - nx321qfqad_idx_2 ) * nx321qfqad_idx_1 ) * hxf251gs4i ;
ozlhho1jhe_idx_0 = rtP_Spacecraft . surfaces_position [ 3 * i + 1 ] +
rtP_Spacecraft . geometricCenter [ 1 ] ; hxf251gs4i *= rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * dvqz3i5ole + ( 1.0 -
nx321qfqad_idx_2 ) * of0mnfctla_idx_0 ; dvqz3i5ole = rtP_Spacecraft .
surfaces_position [ 3 * i + 2 ] + rtP_Spacecraft . geometricCenter [ 2 ] ;
nx321qfqad_idx_2 = b2r5roia4c [ 0 ] ; jsgxcn0tyn = b2r5roia4c [ 1 ] ;
jsgxcn0tyn_p = b2r5roia4c [ 2 ] ; b2r5roia4c [ 0 ] = ( ozlhho1jhe_idx_0 *
hxf251gs4i - dvqz3i5ole * i4rx2zuc2h_idx_0 ) + nx321qfqad_idx_2 ; b2r5roia4c
[ 1 ] = ( dvqz3i5ole * of0mnfctla_idx_1 - of0mnfctla_idx_2 * hxf251gs4i ) +
jsgxcn0tyn ; b2r5roia4c [ 2 ] = ( of0mnfctla_idx_2 * i4rx2zuc2h_idx_0 -
ozlhho1jhe_idx_0 * of0mnfctla_idx_1 ) + jsgxcn0tyn_p ; } } j13n0bzt32_idx_0 =
( j13n0bzt32_idx_0 + b2r5roia4c [ 0 ] ) + ( es4aycsodv_idx_1 -
lkb3lbvxyk_idx_1 ) ; j13n0bzt32_idx_1 = ( j13n0bzt32_idx_1 + b2r5roia4c [ 1 ]
) + ( hynj2kga0l_idx_0 - i4rx2zuc2h_idx_1 ) ; hfuaoawbo4x . p3pcl4mtnq [ 0 ]
= ( hfuaoawbo4x . jz4js4cavj [ 1 ] * hfuaoawbo4x . jz4js4cavj [ 2 ] *
hfuaoawbo4x . k3y3ixdgrn [ 0 ] + j13n0bzt32_idx_0 ) / bjiazabmpo .
Inertia_Value [ 0 ] ; hfuaoawbo4x . p3pcl4mtnq [ 1 ] = ( hfuaoawbo4x .
jz4js4cavj [ 2 ] * hfuaoawbo4x . jz4js4cavj [ 0 ] * hfuaoawbo4x . k3y3ixdgrn
[ 1 ] + j13n0bzt32_idx_1 ) / bjiazabmpo . Inertia_Value [ 1 ] ; hfuaoawbo4x .
p3pcl4mtnq [ 2 ] = ( ( ( j13n0bzt32_idx_2 + b2r5roia4c [ 2 ] ) + ( p2s2um3vln
- es4aycsodv_idx_0 ) ) + hfuaoawbo4x . jz4js4cavj [ 0 ] * hfuaoawbo4x .
jz4js4cavj [ 1 ] * hfuaoawbo4x . k3y3ixdgrn [ 2 ] ) / bjiazabmpo .
Inertia_Value [ 2 ] ; egmyq2wukd [ 0 ] = 0.0 ; egmyq2wukd [ 4 ] = -
hfuaoawbo4x . jz4js4cavj [ 0 ] ; egmyq2wukd [ 8 ] = - hfuaoawbo4x .
jz4js4cavj [ 1 ] ; egmyq2wukd [ 12 ] = - hfuaoawbo4x . jz4js4cavj [ 2 ] ;
egmyq2wukd [ 1 ] = 0.0 ; egmyq2wukd [ 5 ] = 0.0 ; egmyq2wukd [ 9 ] =
hfuaoawbo4x . jz4js4cavj [ 2 ] ; egmyq2wukd [ 13 ] = - hfuaoawbo4x .
jz4js4cavj [ 1 ] ; egmyq2wukd [ 2 ] = 0.0 ; egmyq2wukd [ 6 ] = 0.0 ;
egmyq2wukd [ 10 ] = 0.0 ; egmyq2wukd [ 14 ] = hfuaoawbo4x . jz4js4cavj [ 0 ]
; egmyq2wukd [ 3 ] = 0.0 ; egmyq2wukd [ 7 ] = 0.0 ; egmyq2wukd [ 11 ] = 0.0 ;
egmyq2wukd [ 15 ] = 0.0 ; for ( j = 0 ; j < 4 ; j ++ ) { eweqcqisny [ j << 2
] = egmyq2wukd [ j << 2 ] - egmyq2wukd [ j ] ; eweqcqisny [ ( j << 2 ) + 1 ]
= egmyq2wukd [ ( j << 2 ) + 1 ] - egmyq2wukd [ j + 4 ] ; eweqcqisny [ ( j <<
2 ) + 2 ] = egmyq2wukd [ ( j << 2 ) + 2 ] - egmyq2wukd [ j + 8 ] ; eweqcqisny
[ ( j << 2 ) + 3 ] = egmyq2wukd [ ( j << 2 ) + 3 ] - egmyq2wukd [ j + 12 ] ;
} memcpy ( & egmyq2wukd [ 0 ] , & eweqcqisny [ 0 ] , sizeof ( real_T ) << 4U
) ; for ( j = 0 ; j < 4 ; j ++ ) { hfuaoawbo4x . lekkjhfcii [ j ] = 0.0 ;
hfuaoawbo4x . lekkjhfcii [ j ] += bjiazabmpo . Gain1_Gain_objsqoebrs *
egmyq2wukd [ j ] * bv45xcfiny ; hfuaoawbo4x . lekkjhfcii [ j ] += egmyq2wukd
[ j + 4 ] * bjiazabmpo . Gain1_Gain_objsqoebrs * dd25cwjzns ; hfuaoawbo4x .
lekkjhfcii [ j ] += egmyq2wukd [ j + 8 ] * bjiazabmpo . Gain1_Gain_objsqoebrs
* kwje4y1vlu ; hfuaoawbo4x . lekkjhfcii [ j ] += egmyq2wukd [ j + 12 ] *
bjiazabmpo . Gain1_Gain_objsqoebrs * nm4t0wvumv ; } cyldeyoboi = bjiazabmpo .
e_Value * muDoubleScalarCos ( cyldeyoboi ) + bjiazabmpo .
Constant1_Value_lvvzxuwh5z ; hfuaoawbo4x . psr0r0bk4j = 1.0 / hfuaoawbo4x .
g0423fm4yn * hfuaoawbo4x . meblfsgtxo * ( cyldeyoboi * cyldeyoboi ) ;
cyldeyoboi = ( gym345g4fq_idx_0 * gym345g4fq_idx_0 + gym345g4fq_idx_1 *
gym345g4fq_idx_1 ) + gym345g4fq_idx_2 * gym345g4fq_idx_2 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . ftfgzy2fsp != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . ftfgzy2fsp
= 0 ; } kwje4y1vlu = muDoubleScalarSqrt ( cyldeyoboi ) ; } else if (
cyldeyoboi < 0.0 ) { kwje4y1vlu = - muDoubleScalarSqrt ( muDoubleScalarAbs (
cyldeyoboi ) ) ; ngg51vuviwy . ftfgzy2fsp = 1 ; } else { kwje4y1vlu =
muDoubleScalarSqrt ( cyldeyoboi ) ; } cyldeyoboi = kwje4y1vlu * kwje4y1vlu ;
cyldeyoboi = rtP_Earth . J2 * rtP_Earth . mu * hfuaoawbo4x . ifmzqc4riz / (
cyldeyoboi * cyldeyoboi ) * bjiazabmpo . Gain_Gain_ij5ephcub4 ;
of0mnfctla_idx_2 = gym345g4fq_idx_0 / kwje4y1vlu ; ozlhho1jhe_idx_0 =
gym345g4fq_idx_1 / kwje4y1vlu ; dvqz3i5ole = gym345g4fq_idx_2 / kwje4y1vlu ;
kwje4y1vlu = bjiazabmpo . Gain1_Gain_fos5u53xa3 * dvqz3i5ole ; bv45xcfiny =
kwje4y1vlu * kwje4y1vlu ; kwje4y1vlu = bv45xcfiny - bjiazabmpo .
Constant4_Value ; bv45xcfiny = ( bv45xcfiny - bjiazabmpo .
Constant3_Value_aiagav1bu5 ) * dvqz3i5ole ; nm4t0wvumv = ( gym345g4fq_idx_0 *
gym345g4fq_idx_0 + gym345g4fq_idx_1 * gym345g4fq_idx_1 ) + gym345g4fq_idx_2 *
gym345g4fq_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy .
l2hnmjwsp2 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ngg51vuviwy . l2hnmjwsp2 = 0 ; } dd25cwjzns = muDoubleScalarSqrt ( nm4t0wvumv
) ; } else if ( nm4t0wvumv < 0.0 ) { dd25cwjzns = - muDoubleScalarSqrt (
muDoubleScalarAbs ( nm4t0wvumv ) ) ; ngg51vuviwy . l2hnmjwsp2 = 1 ; } else {
dd25cwjzns = muDoubleScalarSqrt ( nm4t0wvumv ) ; } nm4t0wvumv = rtP_Earth .
mu / ( dd25cwjzns * dd25cwjzns ) * bjiazabmpo . Gain_Gain_fosanw5ymw ;
hfuaoawbo4x . jaehxyvqkj [ 0 ] = of0mnfctla_idx_2 * kwje4y1vlu * cyldeyoboi +
gym345g4fq_idx_0 / dd25cwjzns * nm4t0wvumv ; hfuaoawbo4x . jaehxyvqkj [ 1 ] =
kwje4y1vlu * ozlhho1jhe_idx_0 * cyldeyoboi + gym345g4fq_idx_1 / dd25cwjzns *
nm4t0wvumv ; hfuaoawbo4x . jaehxyvqkj [ 2 ] = gym345g4fq_idx_2 / dd25cwjzns *
nm4t0wvumv + cyldeyoboi * bv45xcfiny ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtPrevAction = ngg51vuviwy . irz310w2ge ; rtAction = - 1 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( bjiazabmpo .
DirectionCosineMatrixtoQuaternions_action != 1.0 ) { rtAction = 0 ; }
ngg51vuviwy . irz310w2ge = rtAction ; } else { rtAction = ngg51vuviwy .
irz310w2ge ; } if ( ( rtPrevAction != rtAction ) && ( rtPrevAction == 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
btdmegwoi1 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( ngg51vuviwy . gknheywe14 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } ngg51vuviwy .
gknheywe14 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( ngg51vuviwy .
fggjybp4nv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} ngg51vuviwy . fggjybp4nv = - 1 ; break ; } ngg51vuviwy . btdmegwoi1 = - 1 ;
} if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { if ( ssGetTaskTime ( rtS
, 1 ) != ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( j = 0 ; j < 3 ; j ++
) { for ( i = 0 ; i < 3 ; i ++ ) { tmp_p [ j + 3 * i ] = ( ( hfuaoawbo4x .
hypth4pdun [ 3 * j + 1 ] * hfuaoawbo4x . hypth4pdun [ 3 * i + 1 ] +
hfuaoawbo4x . hypth4pdun [ 3 * j ] * hfuaoawbo4x . hypth4pdun [ 3 * i ] ) +
hfuaoawbo4x . hypth4pdun [ 3 * j + 2 ] * hfuaoawbo4x . hypth4pdun [ 3 * i + 2
] ) + bjiazabmpo . Bias1_Bias [ 3 * i + j ] ; } } for ( j = 0 ; j < 9 ; j ++
) { iy5b1drj5g [ j ] = ( muDoubleScalarAbs ( tmp_p [ j ] ) > bjiazabmpo .
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
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( j = 0 ; j < 49 ; j ++ ) {
cyldeyoboi = 0.0026457513110645908 * ngg51vuviwy . kpt4ony32r [ j ] ; X2state
[ j ] = cyldeyoboi ; X2state [ j + 49 ] = - cyldeyoboi ; } for ( i = 0 ; i <
14 ; i ++ ) { for ( j = 0 ; j < 7 ; j ++ ) { X2state [ j + 7 * i ] +=
ngg51vuviwy . ojmnt0y3sv [ j ] ; } } for ( i = 0 ; i < 14 ; i ++ ) { for ( j
= 0 ; j < 7 ; j ++ ) { Y2 [ j + 7 * i ] = X2state [ 7 * i + j ] ; }
attitudePropagationNA_WmJbGJ68 ( & Y2 [ 7 * i ] , bjiazabmpo .
Constant2_Value_k5ggz5xbhk ) ; } for ( i = 0 ; i < 7 ; i ++ ) { Ymean [ i ] =
ngg51vuviwy . ojmnt0y3sv [ i ] ; } attitudePropagationNA_WmJbGJ68 ( Ymean ,
bjiazabmpo . Constant2_Value_k5ggz5xbhk ) ; tmp_i [ 0 ] = 0.999996999998 ;
tmp_i [ 1 ] = - 0.071428642857214286 ; UTMeanCovSqrt_bM1O4v2d ( Wmean , tmp_i
, - 999999.0 , Ymean , Y2 , ngg51vuviwy . ojmnt0y3sv , ngg51vuviwy .
kpt4ony32r ) ; memset ( & P [ 0 ] , 0 , 49U * sizeof ( real_T ) ) ; for ( j =
0 ; j < 7 ; j ++ ) { P [ j + 7 * j ] = 1.0 ; } qrFactor_dow5EKjD ( P ,
ngg51vuviwy . kpt4ony32r , bjiazabmpo . Q_Value ) ; if ( ssIsMajorTimeStep (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID5 ( int_T tid ) { real_T
chygdxgike ; real_T fdcvlsnapk_idx_1 ; real_T fdcvlsnapk_idx_2 ; real_T
ix5sio1awm ; real_T jdgqlncavi ; real_T jmiqwl4wuz_idx_1 ; real_T
jmiqwl4wuz_idx_2 ; real_T jnvxrzr0ue ; real_T ljyggpl3ml ; hfuaoawbo4x .
nj1dtdqjvk [ 0 ] = bjiazabmpo . Constant1_Value_c5r2ow4pnn [ 0 ] ;
hfuaoawbo4x . nj1dtdqjvk [ 1 ] = bjiazabmpo . Constant1_Value_c5r2ow4pnn [ 1
] ; hfuaoawbo4x . nj1dtdqjvk [ 2 ] = bjiazabmpo . Constant1_Value_c5r2ow4pnn
[ 2 ] ; hfuaoawbo4x . nj1dtdqjvk [ 3 ] = bjiazabmpo .
Constant1_Value_c5r2ow4pnn [ 3 ] ; hfuaoawbo4x . jbummyrznk = bjiazabmpo .
Gain1_Gain_l1jki2u5fa * rtP_Earth . mu ; hfuaoawbo4x . bhk0qefpw3 [ 0 ] =
bjiazabmpo . Inertia_Value [ 1 ] - bjiazabmpo . Inertia_Value [ 2 ] ;
hfuaoawbo4x . bhk0qefpw3 [ 1 ] = bjiazabmpo . Inertia_Value [ 2 ] -
bjiazabmpo . Inertia_Value [ 0 ] ; hfuaoawbo4x . bhk0qefpw3 [ 2 ] =
bjiazabmpo . Inertia_Value [ 0 ] - bjiazabmpo . Inertia_Value [ 1 ] ;
hfuaoawbo4x . ntohwlgjud [ 0 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 0
] ; hfuaoawbo4x . kox0yk51ix [ 0 ] = bjiazabmpo . Constant3_Value [ 0 ] ;
hfuaoawbo4x . fncmo3ybdw [ 0 ] = bjiazabmpo . Initialangularvelocity_Value [
0 ] ; hfuaoawbo4x . ntohwlgjud [ 1 ] = bjiazabmpo .
Constant2_Value_ialq4qchdp [ 1 ] ; hfuaoawbo4x . kox0yk51ix [ 1 ] =
bjiazabmpo . Constant3_Value [ 1 ] ; hfuaoawbo4x . fncmo3ybdw [ 1 ] =
bjiazabmpo . Initialangularvelocity_Value [ 1 ] ; hfuaoawbo4x . ntohwlgjud [
2 ] = bjiazabmpo . Constant2_Value_ialq4qchdp [ 2 ] ; hfuaoawbo4x .
kox0yk51ix [ 2 ] = bjiazabmpo . Constant3_Value [ 2 ] ; hfuaoawbo4x .
fncmo3ybdw [ 2 ] = bjiazabmpo . Initialangularvelocity_Value [ 2 ] ;
MagneticFieldInPolarCoordsTID1 ( ) ; hfuaoawbo4x . k3y3ixdgrn [ 0 ] =
bjiazabmpo . Inertia_Value [ 1 ] - bjiazabmpo . Inertia_Value [ 2 ] ;
hfuaoawbo4x . k3y3ixdgrn [ 1 ] = bjiazabmpo . Inertia_Value [ 2 ] -
bjiazabmpo . Inertia_Value [ 0 ] ; hfuaoawbo4x . k3y3ixdgrn [ 2 ] =
bjiazabmpo . Inertia_Value [ 0 ] - bjiazabmpo . Inertia_Value [ 1 ] ;
hfuaoawbo4x . ddyoytv0e2 = rtP_Const . Fe / rtP_Const . c ; hfuaoawbo4x .
f3ygbdvaty = bjiazabmpo . Gain1_Gain_km22rji0yo * bjiazabmpo .
u821stMarch_Value ; chygdxgike = bjiazabmpo . Sun_Value / ( bjiazabmpo .
a_Value * bjiazabmpo . a_Value ) / bjiazabmpo . a_Value ; jdgqlncavi =
bjiazabmpo . Constant_Value_c0ie4jx1vv - bjiazabmpo . e_Value * bjiazabmpo .
e_Value ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . iwf1qimb54 !=
0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy .
iwf1qimb54 = 0 ; } jnvxrzr0ue = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if
( jdgqlncavi < 0.0 ) { jnvxrzr0ue = - muDoubleScalarSqrt ( muDoubleScalarAbs
( jdgqlncavi ) ) ; ngg51vuviwy . iwf1qimb54 = 1 ; } else { jnvxrzr0ue =
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
if ( ssIsMajorTimeStep ( rtS ) ) { if ( ngg51vuviwy . n1xbgfghif != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . n1xbgfghif
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . n1xbgfghif = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value [ 0 ] / chygdxgike ; jnvxrzr0ue = bjiazabmpo .
Sensororientation_Value [ 1 ] / chygdxgike ; ix5sio1awm = bjiazabmpo .
Sensororientation_Value [ 2 ] / chygdxgike ; chygdxgike = bjiazabmpo .
Sensororientation_Value [ 3 ] / chygdxgike ; hfuaoawbo4x . eh5mcnwtiq = (
jnvxrzr0ue * ix5sio1awm + jdgqlncavi * chygdxgike ) * bjiazabmpo .
Gain_Gain_kw4hyen3ua ; hfuaoawbo4x . ghaons33bj = ( jnvxrzr0ue * chygdxgike -
jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain1_Gain_ckspynbpye ; hfuaoawbo4x
. ohg1wtlywy = ( ( bjiazabmpo . Constant_Value_mvbgvlatz0 - ix5sio1awm *
ix5sio1awm ) - chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_dah34tkuud
; hfuaoawbo4x . io0rqxfqo3 = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi *
chygdxgike ) * bjiazabmpo . Gain_Gain_j0m5yxxclv ; hfuaoawbo4x . a3jx4vfcgg =
( jdgqlncavi * jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo .
Gain1_Gain_gvb2uliucv ; hfuaoawbo4x . bwjkjrhjqv = ( ( bjiazabmpo .
Constant_Value_dz2dfvrlrq - jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike *
chygdxgike ) * bjiazabmpo . Gain2_Gain_opntamnvay ; hfuaoawbo4x . l5j5dkpmqj
= ( jnvxrzr0ue * chygdxgike + jdgqlncavi * ix5sio1awm ) * bjiazabmpo .
Gain_Gain_mxlhrjirx4 ; hfuaoawbo4x . lkiy512rco = ( ix5sio1awm * chygdxgike -
jdgqlncavi * jnvxrzr0ue ) * bjiazabmpo . Gain1_Gain_buk0u32kdc ; hfuaoawbo4x
. oxyjrp2dlh = ( ( bjiazabmpo . Constant_Value_kcjtlp3thi - jnvxrzr0ue *
jnvxrzr0ue ) - ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_arymbwpdh2
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
( ( bjiazabmpo . Sensororientation_Value_g0fnvenbtt [ 0 ] * bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 0 ] + bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 1 ] * bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 2 ] * bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 3 ] * bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . f4ipxf0od0 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . f4ipxf0od0
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . f4ipxf0od0 = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_g0fnvenbtt [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_g0fnvenbtt [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_g0fnvenbtt [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_g0fnvenbtt [ 3
] / chygdxgike ; hfuaoawbo4x . er433el12n = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_mppbga10gj ; hfuaoawbo4x .
g2lr2421ty = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_k32c10wlrj ; hfuaoawbo4x . n3pwxd5dop = ( (
bjiazabmpo . Constant_Value_ig5dydpz4k - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_h0pnpoqeyo ; hfuaoawbo4x
. c1tr4cgbin = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_acnf3wong0 ; hfuaoawbo4x . msphgdgaqg = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_bdr4kcs3su ;
hfuaoawbo4x . lfb2wgmhm0 = ( ( bjiazabmpo . Constant_Value_avj1x5z4q1 -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_jvmb0iaxtl ; hfuaoawbo4x . mmdcsbwnzr = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_gmuxgavjeg ; hfuaoawbo4x
. mtbvkoruwr = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_ano5s2udpx ; hfuaoawbo4x . ezimqt1hie = ( (
bjiazabmpo . Constant_Value_cnokz3qvra - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_flzsqlaiqp ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_nngxct2li0 [ 0 ] * bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 0 ] + bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 1 ] * bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 2 ] * bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 3 ] * bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . gtcrxf0n4q != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . gtcrxf0n4q
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . gtcrxf0n4q = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_nngxct2li0 [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_nngxct2li0 [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_nngxct2li0 [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_nngxct2li0 [ 3
] / chygdxgike ; hfuaoawbo4x . o4dydkbclu = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_fe12gj1vly ; hfuaoawbo4x .
jti4uwlk3m = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_eknp4eyqxu ; hfuaoawbo4x . mtwhnewhid = ( (
bjiazabmpo . Constant_Value_cnhwtv0an4 - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_ouwgam1qip ; hfuaoawbo4x
. k0s25tyxdf = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_gff5un3jdu ; hfuaoawbo4x . lixyng4w4q = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_awqbponr2k ;
hfuaoawbo4x . gf4ywczcig = ( ( bjiazabmpo . Constant_Value_ay421yp5th -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_f4ewkcswdw ; hfuaoawbo4x . iy4h2wzanu = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_la2cdkige1 ; hfuaoawbo4x
. a4edbax1z3 = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_pev0unhzff ; hfuaoawbo4x . mpste0vxzt = ( (
bjiazabmpo . Constant_Value_h3nq0lzcht - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_hw1isw0qik ; jdgqlncavi =
( ( bjiazabmpo . Sensororientation_Value_nr4vwdw5eq [ 0 ] * bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 0 ] + bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 1 ] * bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 1 ] ) + bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 2 ] * bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 2 ] ) + bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 3 ] * bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( ngg51vuviwy . lyzbn5q0nk != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; ngg51vuviwy . lyzbn5q0nk
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; ngg51vuviwy . lyzbn5q0nk = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 0 ] / chygdxgike ; jnvxrzr0ue =
bjiazabmpo . Sensororientation_Value_nr4vwdw5eq [ 1 ] / chygdxgike ;
ix5sio1awm = bjiazabmpo . Sensororientation_Value_nr4vwdw5eq [ 2 ] /
chygdxgike ; chygdxgike = bjiazabmpo . Sensororientation_Value_nr4vwdw5eq [ 3
] / chygdxgike ; hfuaoawbo4x . pmfqzyroxp = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * bjiazabmpo . Gain_Gain_evijkwb22b ; hfuaoawbo4x .
ob5dzupeki = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
bjiazabmpo . Gain1_Gain_bn3u42duxc ; hfuaoawbo4x . iti4c2htzu = ( (
bjiazabmpo . Constant_Value_jepzgetsok - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * bjiazabmpo . Gain2_Gain_e4wui4ivqw ; hfuaoawbo4x
. bnbxchsr0d = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
bjiazabmpo . Gain_Gain_hp0a4smryj ; hfuaoawbo4x . fw04vwoiew = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * bjiazabmpo . Gain1_Gain_lcdb4ouxht ;
hfuaoawbo4x . aibthzgho4 = ( ( bjiazabmpo . Constant_Value_bpjrbxcgtv -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * bjiazabmpo .
Gain2_Gain_fkes0fd4av ; hfuaoawbo4x . i0bwop3aa5 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * bjiazabmpo . Gain_Gain_ik5o0z2umm ; hfuaoawbo4x
. ihlfku2rqr = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
bjiazabmpo . Gain1_Gain_gut1ubdvx5 ; hfuaoawbo4x . eizptmd2fi = ( (
bjiazabmpo . Constant_Value_bnhvh0zo2d - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * bjiazabmpo . Gain2_Gain_ojpp20vo3d ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { fqjkpnrvjo *
_rtXAbsTol ; _rtXAbsTol = ( ( fqjkpnrvjo * ) ssGetAbsTolVector ( rtS ) ) ;
ngg51vuviwy . j3jpf41hkf = 0 ; ngg51vuviwy . ogiu2msyaa = 0 ; ngg51vuviwy .
gofnphz0kz = 0 ; ngg51vuviwy . ohqzjzllib = 0 ; _rtXAbsTol -> ozozulc01j [ 0
] = bjiazabmpo . Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ceu1xu3gg2 [ 0
] = bjiazabmpo . Integrator_AbsoluteTolerance ; _rtXAbsTol -> ozozulc01j [ 1
] = bjiazabmpo . Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ceu1xu3gg2 [ 1
] = bjiazabmpo . Integrator_AbsoluteTolerance ; _rtXAbsTol -> ozozulc01j [ 2
] = bjiazabmpo . Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ceu1xu3gg2 [ 2
] = bjiazabmpo . Integrator_AbsoluteTolerance ; ngg51vuviwy . bsrppkoaqa = 0
; UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID5 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { okm3mf5pgw *
_rtXdot ; _rtXdot = ( ( okm3mf5pgw * ) ssGetdX ( rtS ) ) ; _rtXdot ->
exrjjbh4to = hfuaoawbo4x . psr0r0bk4j ; _rtXdot -> ozozulc01j [ 0 ] =
hfuaoawbo4x . djfx2ozwz1 [ 0 ] ; _rtXdot -> ozozulc01j [ 1 ] = hfuaoawbo4x .
djfx2ozwz1 [ 1 ] ; _rtXdot -> ozozulc01j [ 2 ] = hfuaoawbo4x . djfx2ozwz1 [ 2
] ; _rtXdot -> osavuy4txz [ 0 ] = hfuaoawbo4x . lekkjhfcii [ 0 ] ; _rtXdot ->
osavuy4txz [ 1 ] = hfuaoawbo4x . lekkjhfcii [ 1 ] ; _rtXdot -> osavuy4txz [ 2
] = hfuaoawbo4x . lekkjhfcii [ 2 ] ; _rtXdot -> osavuy4txz [ 3 ] =
hfuaoawbo4x . lekkjhfcii [ 3 ] ; _rtXdot -> cxzg0u0ymm [ 0 ] = hfuaoawbo4x .
p3pcl4mtnq [ 0 ] ; _rtXdot -> ceu1xu3gg2 [ 0 ] = hfuaoawbo4x . jaehxyvqkj [ 0
] ; _rtXdot -> cxzg0u0ymm [ 1 ] = hfuaoawbo4x . p3pcl4mtnq [ 1 ] ; _rtXdot ->
ceu1xu3gg2 [ 1 ] = hfuaoawbo4x . jaehxyvqkj [ 1 ] ; _rtXdot -> cxzg0u0ymm [ 2
] = hfuaoawbo4x . p3pcl4mtnq [ 2 ] ; _rtXdot -> ceu1xu3gg2 [ 2 ] =
hfuaoawbo4x . jaehxyvqkj [ 2 ] ; } void MdlProjection ( void ) { } void
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
; } } _rtZCSV -> nplnyulgff = hfuaoawbo4x . hzxy1e3aeq - bjiazabmpo .
NormalizeVector_maxzero_g24tnzjgpe ; _rtZCSV -> ikk0l1on5i [ 0 ] = 0.0 ;
_rtZCSV -> ikk0l1on5i [ 1 ] = 0.0 ; if ( hfuaoawbo4x . h23bmldhv4 > 1.0 ) {
_rtZCSV -> ikk0l1on5i [ 0 ] = 1.0 ; } else { if ( hfuaoawbo4x . h23bmldhv4 <
- 1.0 ) { _rtZCSV -> ikk0l1on5i [ 1 ] = 1.0 ; } } } void MdlTerminate ( void
) { gcif3exjdu ( & ( ngg51vuviwy . as0qpnsv3x . rtm ) ) ; } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 14 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
5 ) ; ssSetNumBlocks ( rtS , 1197 ) ; ssSetNumBlockIO ( rtS , 129 ) ;
ssSetNumBlockParams ( rtS , 455 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.01 ) ; ssSetSampleTime ( rtS , 3 , 0.02 ) ;
ssSetSampleTime ( rtS , 4 , 0.03 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; ssSetOffsetTime ( rtS , 4 , 0.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 2669273227U ) ;
ssSetChecksumVal ( rtS , 1 , 1613633566U ) ; ssSetChecksumVal ( rtS , 2 ,
2556690104U ) ; ssSetChecksumVal ( rtS , 3 , 2016378170U ) ; }
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
numDataTypes = 18 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
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
boolean_T contStatesDisabled [ 14 ] ; static real_T absTol [ 14 ] = { 1.0E-14
, 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 ,
1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 , 1.0E-14 } ; static uint8_T
absTolControl [ 14 ] = { 0U , 1U , 1U , 1U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 1U , 1U , 1U } ; static real_T contStateJacPerturbBoundMinVec [ 14 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 14 ] ; static uint8_T
zcAttributes [ 15 ] = { ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ;
{ int i ; for ( i = 0 ; i < 14 ; ++ i ) { contStateJacPerturbBoundMinVec [ i
] = 0 ; contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } }
ssSetSolverRelTol ( rtS , 1.0E-13 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 144.0 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 0 ) ; ssSetNonContDerivSigInfos ( rtS ,
( NULL ) ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS ,
"ode113" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetAbsTolVector (
rtS , absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
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
ssSetSolverNumZcSignals ( rtS , 15 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverZcThreshold ( rtS , 1.0E-13 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 15 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 2669273227U ) ; ssSetChecksumVal ( rtS , 1 ,
1613633566U ) ; ssSetChecksumVal ( rtS , 2 , 2556690104U ) ; ssSetChecksumVal
( rtS , 3 , 2016378170U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 39 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = ( sysRanDType * ) & ngg51vuviwy . k0fulbi3y3 ; systemRan [
5 ] = ( sysRanDType * ) & ngg51vuviwy . nkkan2lumh ; systemRan [ 6 ] = (
sysRanDType * ) & ngg51vuviwy . ncyqqgn1fak . n0vodpbpn0 ; systemRan [ 7 ] =
( sysRanDType * ) & ngg51vuviwy . dhmxxudzxm ; systemRan [ 8 ] = (
sysRanDType * ) & ngg51vuviwy . ppg4ibcbt5 ; systemRan [ 9 ] = ( sysRanDType
* ) & ngg51vuviwy . oeck1vxca3 . n0vodpbpn0 ; systemRan [ 10 ] = &
rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ; systemRan [ 12 ] = (
sysRanDType * ) & ngg51vuviwy . picfdcdfap ; systemRan [ 13 ] = ( sysRanDType
* ) & ngg51vuviwy . gudujy1ejr ; systemRan [ 14 ] = ( sysRanDType * ) &
ngg51vuviwy . jeex0coj3h ; systemRan [ 15 ] = ( sysRanDType * ) & ngg51vuviwy
. bdbstwmumv ; systemRan [ 16 ] = ( sysRanDType * ) & ngg51vuviwy .
hrhkqhh3g2 ; systemRan [ 17 ] = ( sysRanDType * ) & ngg51vuviwy . opmce12fqo
; systemRan [ 18 ] = ( sysRanDType * ) & ngg51vuviwy . h1wj4fud0p ; systemRan
[ 19 ] = ( sysRanDType * ) & ngg51vuviwy . bzn0gp5jdi ; systemRan [ 20 ] = (
sysRanDType * ) & ngg51vuviwy . lzbmuq2yk2 ; systemRan [ 21 ] = ( sysRanDType
* ) & ngg51vuviwy . d530gaj1ii ; systemRan [ 22 ] = ( sysRanDType * ) &
ngg51vuviwy . a2zz5n420u ; systemRan [ 23 ] = ( sysRanDType * ) & ngg51vuviwy
. jhr0vyxdh3 ; systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = &
rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = &
rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = &
rtAlwaysEnabled ; systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] = &
rtAlwaysEnabled ; systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] = (
sysRanDType * ) & ngg51vuviwy . igjqnnyo2f ; systemRan [ 34 ] = ( sysRanDType
* ) & ngg51vuviwy . igjqnnyo2f ; systemRan [ 35 ] = & rtAlwaysEnabled ;
systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = & rtAlwaysEnabled ;
systemRan [ 38 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; } return
rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 5 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID5 ( tid ) ; }
