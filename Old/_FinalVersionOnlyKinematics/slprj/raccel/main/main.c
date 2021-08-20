#include "rt_logging_mmi.h"
#include "main_capi.h"
#include <math.h>
#include "main.h"
#include "main_private.h"
#include "main_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 13 , & stopRequested ) ; }
rtExtModeShutdown ( 13 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 14 ; const char_T
* gbl_raccel_Version = "9.5 (R2021a) 14-Nov-2020" ; void
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
] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#include "RandSrcCreateSeeds_64.h"
#include "RandSrcInitState_GZ.h"
#include "RandSrc_GZ_D.h"
#include "UKFCorrector_correct_00kmKqHa.h"
#include "UKFPredictorNonAdditive_predict_ixjSvTSy.h"
#include "det_i2CXN4sy.h"
#include "svd_aYJ4ZO8G.h"
o2y45zbt2m o2y45zbt2m4 ; n1mubcupv3 n1mubcupv31 ; hrxu5rhe3a hrxu5rhe3af ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
gkhm4t1rtl ( fhzhep3hld * localDW ) { localDW -> h4htzwynch = 5 ; hrxu5rhe3af
. npgo12zmto . h4htzwynch = 27 ; } void f3pmeztnvr ( SimStruct * rtS_i ) { if
( ssGetTaskTime ( rtS_i , 5 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } } void hiausv0kpy (
SimStruct * rtS_e ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ;
} void bjbtw11222 ( SimStruct * rtS_m , real_T oaxzc5oqc5 , fhzhep3hld *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( oaxzc5oqc5 != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_m , localDW -> h4htzwynch , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_m ) ) ; rt_ssReportDiagnosticAsWarning ( rtS_m , diag ) ;
} } void mqxpcbjso3 ( lpx1p3sqzx * localDW ) { localDW -> jlpifn4yub = 6 ;
hrxu5rhe3af . iyw4crazdc . jlpifn4yub = 28 ; } void dus4amarfa ( SimStruct *
rtS_g ) { if ( ssGetTaskTime ( rtS_g , 5 ) != ssGetTStart ( rtS_g ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g ) ; } } void iux4nkmqlm (
SimStruct * rtS_e ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ;
} void n0mztpd0lo ( SimStruct * rtS_p , real_T ljxoaqpxr0 , lpx1p3sqzx *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( ljxoaqpxr0 != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_p , localDW -> jlpifn4yub , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_p ) ) ; rt_ssSet_slErrMsg ( rtS_p , diag ) ;
ssSetStopRequested ( rtS_p , ( int ) ssGetT ( rtS_p ) ) ; } } void g4ih1sevaa
( f3efdxf5zj * localDW ) { localDW -> jvxfs0mjwv = 8 ; hrxu5rhe3af .
bghekfjhrb . jvxfs0mjwv = 30 ; } void pwskx14vm4 ( SimStruct * rtS_m ) { if (
ssGetTaskTime ( rtS_m , 5 ) != ssGetTStart ( rtS_m ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } } void awgtwaeg5t (
SimStruct * rtS_f ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_f ) ;
} void pefmh4xzsj ( SimStruct * rtS_c , real_T lms1yhikhs , f3efdxf5zj *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( lms1yhikhs != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_c , localDW -> jvxfs0mjwv , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_c ) ) ; rt_ssReportDiagnosticAsWarning ( rtS_c , diag ) ;
} } void n2qea35ctl ( c4n55hkoix * localDW ) { localDW -> ioyk4rkcqw = 9 ;
hrxu5rhe3af . oxb0jyodnm . ioyk4rkcqw = 31 ; } void lb5no3bsk0 ( SimStruct *
rtS_b ) { if ( ssGetTaskTime ( rtS_b , 5 ) != ssGetTStart ( rtS_b ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_b ) ; } } void mlwid4sfdn (
SimStruct * rtS_c ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ;
} void hqjl54s2qv ( SimStruct * rtS_p , real_T ip044jqtue , c4n55hkoix *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( ip044jqtue != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_p , localDW -> ioyk4rkcqw , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_p ) ) ; rt_ssSet_slErrMsg ( rtS_p , diag ) ;
ssSetStopRequested ( rtS_p , ( int ) ssGetT ( rtS_p ) ) ; } } void
MdlInitialize ( void ) { boolean_T tmp ; hrxu5rhe3af . btkpsszf3k = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { n1mubcupv31 . bcrrky3g2k [ 0 ] = 1.0 ;
n1mubcupv31 . bcrrky3g2k [ 1 ] = 0.0 ; n1mubcupv31 . bcrrky3g2k [ 2 ] = 0.0 ;
n1mubcupv31 . bcrrky3g2k [ 3 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ;
hrxu5rhe3af . btkpsszf3k = ! tmp ; } else { hrxu5rhe3af . btkpsszf3k = 1 ; }
n1mubcupv31 . kbqjtzizsx [ 0 ] = 0.0 ; n1mubcupv31 . kbqjtzizsx [ 1 ] = 0.0 ;
n1mubcupv31 . kbqjtzizsx [ 2 ] = 0.0010490819691035681 ; } hrxu5rhe3af .
iwulztso32 [ 0 ] = 0.0 ; hrxu5rhe3af . iwulztso32 [ 1 ] = 0.0 ; hrxu5rhe3af .
iwulztso32 [ 2 ] = 0.0 ; hrxu5rhe3af . ckit2etwje = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af .
ckit2etwje = ! tmp ; } else { hrxu5rhe3af . ckit2etwje = 1 ; } n1mubcupv31 .
ezm2ooaqjl [ 0 ] = 0.0 ; n1mubcupv31 . ezm2ooaqjl [ 1 ] = - 7128.137 ;
n1mubcupv31 . ezm2ooaqjl [ 2 ] = 0.0 ; } hrxu5rhe3af . epbwbvrls5 = 0.0 ;
hrxu5rhe3af . e2pe11pwxn = true ; hrxu5rhe3af . opg1lhdczb = true ;
hrxu5rhe3af . g24vxooz0v = true ; hrxu5rhe3af . l3pfqrb31o = true ;
hrxu5rhe3af . fytmukko2d = 0.0 ; hrxu5rhe3af . jiqhomoo0v = true ;
hrxu5rhe3af . jmjdutrgwi = true ; hrxu5rhe3af . gcdlpfr3qr = true ;
hrxu5rhe3af . bhx2bk5lkm = true ; hrxu5rhe3af . curihjwvdq = 0.0 ;
hrxu5rhe3af . gxxnmirgwt = true ; hrxu5rhe3af . ayulg3mnvk = true ;
hrxu5rhe3af . dmkiyir0bc = true ; hrxu5rhe3af . nlifgx53vj = true ;
hrxu5rhe3af . oumjhalsqc = 0.0 ; hrxu5rhe3af . cozmdzu0w1 = true ;
hrxu5rhe3af . cnj1jumxqg = true ; hrxu5rhe3af . ckwrsfgl5j = true ;
hrxu5rhe3af . e2cixfebva = true ; hrxu5rhe3af . o2yvavvn5c = 0.0 ;
hrxu5rhe3af . i5keywnlob = true ; hrxu5rhe3af . ae5papqlus = true ;
hrxu5rhe3af . hbtp1swogp = true ; hrxu5rhe3af . ct2fu2r1og = true ;
hrxu5rhe3af . hz2n5lmwzt = 0.0 ; hrxu5rhe3af . mp3yltewxi = true ;
hrxu5rhe3af . brmqgwecvy = true ; hrxu5rhe3af . kjzbuo2ejd = true ;
hrxu5rhe3af . ddgb0ny2wp = true ; hrxu5rhe3af . irqzxzls3s = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af .
irqzxzls3s = ! tmp ; } else { hrxu5rhe3af . irqzxzls3s = 1 ; } n1mubcupv31 .
cjfebnqw1p = 0.0 ; } hrxu5rhe3af . febtg0cpg5 = 1 ; if ( ssIsFirstInitCond (
rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . febtg0cpg5 = ! tmp
; } else { hrxu5rhe3af . febtg0cpg5 = 1 ; } n1mubcupv31 . li1obxdvy3 [ 0 ] =
0.0 ; n1mubcupv31 . li1obxdvy3 [ 1 ] = 0.0 ; n1mubcupv31 . li1obxdvy3 [ 2 ] =
- 7.478 ; } hrxu5rhe3af . g0uzej5lf1 = 1 ; if ( ssIsFirstInitCond ( rtS ) ) {
tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . g0uzej5lf1 = ! tmp
; } else { hrxu5rhe3af . g0uzej5lf1 = 1 ; } } o2y45zbt2m4 . olo2njtgqu [ 0 ]
= hbv5azo3sw . Merge_InitialOutput [ 0 ] ; o2y45zbt2m4 . olo2njtgqu [ 1 ] =
hbv5azo3sw . Merge_InitialOutput [ 1 ] ; o2y45zbt2m4 . olo2njtgqu [ 2 ] =
hbv5azo3sw . Merge_InitialOutput [ 2 ] ; o2y45zbt2m4 . olo2njtgqu [ 3 ] =
hbv5azo3sw . Merge_InitialOutput [ 3 ] ; o2y45zbt2m4 . fgtzb5d0ie =
hbv5azo3sw . yBlockOrdering_Y0 ; } void MdlEnable ( void ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , 1.0 ) ; ; } void
MdlStart ( void ) { int32_T i ; uint32_T initSeed ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} n2qea35ctl ( & hrxu5rhe3af . hqjl54s2qvo ) ; g4ih1sevaa ( & hrxu5rhe3af .
pefmh4xzsjq ) ; mqxpcbjso3 ( & hrxu5rhe3af . n0mztpd0lov ) ; gkhm4t1rtl ( &
hrxu5rhe3af . bjbtw11222c ) ; n2qea35ctl ( & hrxu5rhe3af . oxb0jyodnm ) ;
g4ih1sevaa ( & hrxu5rhe3af . bghekfjhrb ) ; mqxpcbjso3 ( & hrxu5rhe3af .
iyw4crazdc ) ; gkhm4t1rtl ( & hrxu5rhe3af . npgo12zmto ) ; awgtwaeg5t ( rtS )
; mlwid4sfdn ( rtS ) ; hrxu5rhe3af . kma110u0cd = - 1 ; hiausv0kpy ( rtS ) ;
iux4nkmqlm ( rtS ) ; hrxu5rhe3af . op3ehrh51o = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
op3ehrh51o ) { case 0 : hiausv0kpy ( rtS ) ; break ; case 1 : iux4nkmqlm (
rtS ) ; break ; } hrxu5rhe3af . op3ehrh51o = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
kma110u0cd ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 : mlwid4sfdn (
rtS ) ; break ; } hrxu5rhe3af . kma110u0cd = - 1 ; hrxu5rhe3af . dxe5u3tdqf =
- 1 ; hrxu5rhe3af . m0glaktt01 = 0 ; hrxu5rhe3af . mb3ab3hq0l = 0 ;
hrxu5rhe3af . c1p4hnj5v1 = 0 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . jjpaqm4yys
= - 1 ; hrxu5rhe3af . exhkqeoxjl = 0 ; hrxu5rhe3af . mnrneviuut = 0 ;
o2y45zbt2m4 . amepcbkksg [ 0 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 0
] ; o2y45zbt2m4 . fi1wde2gl2 [ 0 ] = hbv5azo3sw . Constant3_Value [ 0 ] ;
o2y45zbt2m4 . amepcbkksg [ 1 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 1
] ; o2y45zbt2m4 . fi1wde2gl2 [ 1 ] = hbv5azo3sw . Constant3_Value [ 1 ] ;
o2y45zbt2m4 . amepcbkksg [ 2 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 2
] ; o2y45zbt2m4 . fi1wde2gl2 [ 2 ] = hbv5azo3sw . Constant3_Value [ 2 ] ;
o2y45zbt2m4 . lx0bv1yu1i [ 0 ] = rtP_Spacecraft . initialAngularSpeed [ 0 ] ;
o2y45zbt2m4 . lx0bv1yu1i [ 1 ] = rtP_Spacecraft . initialAngularSpeed [ 1 ] ;
o2y45zbt2m4 . lx0bv1yu1i [ 2 ] = rtP_Spacecraft . initialAngularSpeed [ 2 ] ;
o2y45zbt2m4 . a55nsryplm [ 0 ] = rtP_Spacecraft . initialAttitude [ 0 ] ;
o2y45zbt2m4 . a55nsryplm [ 1 ] = rtP_Spacecraft . initialAttitude [ 1 ] ;
o2y45zbt2m4 . a55nsryplm [ 2 ] = rtP_Spacecraft . initialAttitude [ 2 ] ;
o2y45zbt2m4 . a55nsryplm [ 3 ] = rtP_Spacecraft . initialAttitude [ 3 ] ;
hrxu5rhe3af . nqcixj2cfc = 0 ; hrxu5rhe3af . gcz34svd4r = 0 ; hrxu5rhe3af .
anszycztem = 0 ; awgtwaeg5t ( rtS ) ; mlwid4sfdn ( rtS ) ; hrxu5rhe3af .
bnzh2jzuy5 = - 1 ; hiausv0kpy ( rtS ) ; iux4nkmqlm ( rtS ) ; hrxu5rhe3af .
obuyxhugh2 = - 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . obuyxhugh2 ) { case 0 : hiausv0kpy ( rtS ) ; break ;
case 1 : iux4nkmqlm ( rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
bnzh2jzuy5 ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 : mlwid4sfdn (
rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; hrxu5rhe3af . j1uacuucpv =
- 1 ; hrxu5rhe3af . jxtww5tjxt = 0 ; hrxu5rhe3af . ikwlyg3xde = 0 ;
hrxu5rhe3af . gtaj4wmjuq = 0 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . hnbwguuonj
= - 1 ; hrxu5rhe3af . kg1shmc2lb = 0 ; hrxu5rhe3af . ane43mgfgs = 0 ;
hrxu5rhe3af . hkxlm4qdro = 0 ; hrxu5rhe3af . fnu1tvdbyx = 0 ; hrxu5rhe3af .
fq3jja1aol = 0 ; hrxu5rhe3af . nbmuo2yzhf = 0 ; hrxu5rhe3af . ev5en1vf5z = 0
; hrxu5rhe3af . fdyoeqkdqi = 0 ; hrxu5rhe3af . crvsqmvbcs = 0 ; initSeed = (
uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , &
hrxu5rhe3af . c34nru5wvg , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af .
c34nru5wvg , & hrxu5rhe3af . o4uuntuq5v [ 0 ] , 1 ) ; hrxu5rhe3af .
bimi4g1wrk = 0 ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . ign3og3yoe , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . ign3og3yoe , & hrxu5rhe3af . ewhzpwb1ca
[ 0 ] , 1 ) ; hrxu5rhe3af . jlabupavh3 = 0 ; initSeed = ( uint32_T ) ( 100000
* rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . f1rxn31y0i
, 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . f1rxn31y0i , & hrxu5rhe3af .
h2f0zvrfqq [ 0 ] , 1 ) ; hrxu5rhe3af . he1tephpj4 = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
jjpaqm4yys ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
hrxu5rhe3af . jjpaqm4yys = - 1 ; hrxu5rhe3af . li05mozykd = - 1 ; initSeed =
( uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , &
hrxu5rhe3af . nydzqlwwnn , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af .
nydzqlwwnn , & hrxu5rhe3af . bdotsga2iv [ 0 ] , 1 ) ; initSeed = ( uint32_T )
( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af .
djim5bpjvv , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . djim5bpjvv , &
hrxu5rhe3af . lqkanthoxg [ 0 ] , 1 ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
dxe5u3tdqf ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . op3ehrh51o ) { case 0 : hiausv0kpy ( rtS ) ; break ;
case 1 : iux4nkmqlm ( rtS ) ; break ; } hrxu5rhe3af . op3ehrh51o = - 1 ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch
( hrxu5rhe3af . kma110u0cd ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 :
mlwid4sfdn ( rtS ) ; break ; } hrxu5rhe3af . kma110u0cd = - 1 ; break ; }
hrxu5rhe3af . dxe5u3tdqf = - 1 ; hrxu5rhe3af . dhtgbttn1t = - 1 ; hrxu5rhe3af
. dnqubg5s4k = 0 ; hrxu5rhe3af . bze1flsb15 = 0 ; hrxu5rhe3af . pidbwsidci =
0 ; hrxu5rhe3af . ji1vknz2dr = 0 ; hrxu5rhe3af . gltmjlakux = 0 ; hrxu5rhe3af
. ojltdhe2we = 0 ; hrxu5rhe3af . pwifaixjxb = 0 ; hrxu5rhe3af . haxpv4vq51 =
0 ; hrxu5rhe3af . hxjxms0byf = 0 ; memcpy ( & hrxu5rhe3af . g4x2krmhlv [ 0 ]
, & hbv5azo3sw . DataStoreMemoryP_InitialValue [ 0 ] , 49U * sizeof ( real_T
) ) ; for ( i = 0 ; i < 7 ; i ++ ) { hrxu5rhe3af . osfynlsngc [ i ] =
hbv5azo3sw . DataStoreMemoryx_InitialValue [ i ] ; }
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
j1uacuucpv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . obuyxhugh2 ) { case 0 : hiausv0kpy ( rtS ) ; break ;
case 1 : iux4nkmqlm ( rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch
( hrxu5rhe3af . bnzh2jzuy5 ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 :
mlwid4sfdn ( rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; }
hrxu5rhe3af . j1uacuucpv = - 1 ; hrxu5rhe3af . iqs2nrdyqs = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
hnbwguuonj ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
hrxu5rhe3af . hnbwguuonj = - 1 ; hrxu5rhe3af . p4n3550tai = - 1 ; initSeed =
( uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , &
hrxu5rhe3af . atmgtfljnh , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af .
atmgtfljnh , & hrxu5rhe3af . n10hslmo2a [ 0 ] , 1 ) ; initSeed = ( uint32_T )
( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af .
pa2kyvt1uy , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . pa2kyvt1uy , &
hrxu5rhe3af . j13dkj5h0s [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 *
rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . p3xkfovqki ,
1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . p3xkfovqki , & hrxu5rhe3af .
k40rhthviy [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . d1wjrwas1u , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . d1wjrwas1u , & hrxu5rhe3af . jjpbiyjnrh
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . cmfzrxdc11 , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . cmfzrxdc11 , & hrxu5rhe3af . impwbrb5ul
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . ivdqhywypm , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . ivdqhywypm , & hrxu5rhe3af . ck30ytigtq
[ 0 ] , 1 ) ; MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T
tid ) { __m128d tmp_e ; __m128d tmp_p ; real_T jdjm5atqpq [ 16 ] ; real_T
l4cpq010qq [ 16 ] ; real_T tmp [ 13 ] ; real_T M [ 9 ] ; real_T bm12tu02tt [
9 ] ; real_T diqprhsvnt [ 9 ] ; real_T g3v5bt41fg [ 9 ] ; real_T oxsh4amew4 [
9 ] ; real_T dnfnzfugcb_p [ 6 ] ; real_T b5inmoahfl [ 3 ] ; real_T gev4djbpks
[ 3 ] ; real_T hlbbwfsq2e [ 3 ] ; real_T i541kjwyuc [ 3 ] ; real_T omtubbfcif
[ 3 ] ; real_T pygfqx1xx2 [ 3 ] ; real_T a3vh3pqf0p ; real_T a5zs2cqer4_idx_4
; real_T bzqxmppt5e_idx_0 ; real_T bzqxmppt5e_idx_1 ; real_T dj1oda5ydb_idx_0
; real_T dj1oda5ydb_idx_1 ; real_T dj1oda5ydb_idx_2 ; real_T dnfnzfugcb_idx_0
; real_T dnfnzfugcb_idx_1 ; real_T dpudqxqih0 ; real_T eujiwcy0tl_idx_0 ;
real_T eujiwcy0tl_idx_1 ; real_T eujiwcy0tl_idx_2 ; real_T eujiwcy0tl_idx_3 ;
real_T hnpfszi1fh_idx_0 ; real_T hnpfszi1fh_idx_1 ; real_T hnpfszi1fh_idx_2 ;
real_T i14mskwis2 ; real_T isbrvx1pyk ; real_T je34obrpzy ; real_T jimsqf3sjt
; real_T k1qmoe0iaw ; real_T nm4t0wvumv ; real_T porr3exmvr_idx_0 ; real_T
porr3exmvr_idx_1 ; real_T ppzvhrji5y ; int32_T i ; int32_T i_p ; int8_T
rtAction ; int8_T rtPrevAction ; boolean_T oom1jmjfhv [ 9 ] ; boolean_T p ;
static const real_T b [ 10 ] = { 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.8 ,
0.8 , 0.8 , 0.8 } ; srClearBC ( hrxu5rhe3af . lwgiflcl1s ) ; srClearBC (
hrxu5rhe3af . gczym4ozql ) ; srClearBC ( hrxu5rhe3af . ihdnc2epba ) ;
srClearBC ( hrxu5rhe3af . glbjm2bh2o ) ; srClearBC ( hrxu5rhe3af . lb3hih1zhu
) ; srClearBC ( hrxu5rhe3af . bjbtw11222c . lkqtujj5qn ) ; srClearBC (
hrxu5rhe3af . n0mztpd0lov . frt22lnhun ) ; srClearBC ( hrxu5rhe3af .
p31xfuh0e2 ) ; srClearBC ( hrxu5rhe3af . pefmh4xzsjq . iftxgfmwnh ) ;
srClearBC ( hrxu5rhe3af . hqjl54s2qvo . cz2sd5ks45 ) ; srClearBC (
hrxu5rhe3af . enqbz4gbik ) ; srClearBC ( hrxu5rhe3af . dclbaaw1uo ) ;
srClearBC ( hrxu5rhe3af . pdpb34jklm ) ; srClearBC ( hrxu5rhe3af . nw1rjo5a2w
) ; srClearBC ( hrxu5rhe3af . a0tdfwofzg ) ; srClearBC ( hrxu5rhe3af .
as5m3dr43z ) ; srClearBC ( hrxu5rhe3af . fimtx0wf43 ) ; srClearBC (
hrxu5rhe3af . h5fod2fj2q ) ; srClearBC ( hrxu5rhe3af . pmgcir2p13 ) ;
srClearBC ( hrxu5rhe3af . cbsmbddbag ) ; srClearBC ( hrxu5rhe3af . fnnqkeqpmg
) ; p = ssGetIsOkayToUpdateMode ( rtS ) ; if ( p ) { if ( hrxu5rhe3af .
btkpsszf3k != 0 ) { n1mubcupv31 . bcrrky3g2k [ 0 ] = o2y45zbt2m4 . a55nsryplm
[ 0 ] ; n1mubcupv31 . bcrrky3g2k [ 1 ] = o2y45zbt2m4 . a55nsryplm [ 1 ] ;
n1mubcupv31 . bcrrky3g2k [ 2 ] = o2y45zbt2m4 . a55nsryplm [ 2 ] ; n1mubcupv31
. bcrrky3g2k [ 3 ] = o2y45zbt2m4 . a55nsryplm [ 3 ] ; } eujiwcy0tl_idx_0 =
n1mubcupv31 . bcrrky3g2k [ 0 ] ; eujiwcy0tl_idx_1 = n1mubcupv31 . bcrrky3g2k
[ 1 ] ; eujiwcy0tl_idx_2 = n1mubcupv31 . bcrrky3g2k [ 2 ] ; eujiwcy0tl_idx_3
= n1mubcupv31 . bcrrky3g2k [ 3 ] ; } else { eujiwcy0tl_idx_0 = n1mubcupv31 .
bcrrky3g2k [ 0 ] ; eujiwcy0tl_idx_1 = n1mubcupv31 . bcrrky3g2k [ 1 ] ;
eujiwcy0tl_idx_2 = n1mubcupv31 . bcrrky3g2k [ 2 ] ; eujiwcy0tl_idx_3 =
n1mubcupv31 . bcrrky3g2k [ 3 ] ; } k1qmoe0iaw = ( ( eujiwcy0tl_idx_0 *
eujiwcy0tl_idx_0 + eujiwcy0tl_idx_1 * eujiwcy0tl_idx_1 ) + eujiwcy0tl_idx_2 *
eujiwcy0tl_idx_2 ) + eujiwcy0tl_idx_3 * eujiwcy0tl_idx_3 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . fdyoeqkdqi != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . fdyoeqkdqi
= 0 ; } nm4t0wvumv = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } else if (
k1qmoe0iaw < 0.0 ) { nm4t0wvumv = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; hrxu5rhe3af . fdyoeqkdqi = 1 ; } else { nm4t0wvumv =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } k1qmoe0iaw = eujiwcy0tl_idx_0 /
nm4t0wvumv ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 7 ; i
++ ) { o2y45zbt2m4 . gr33hmjawo [ i ] = hrxu5rhe3af . osfynlsngc [ i ] ; }
o2y45zbt2m4 . fepr2tvtnf = hbv5azo3sw . BlockOrdering_Value ; o2y45zbt2m4 .
g0mrioy1px = ( ( o2y45zbt2m4 . gr33hmjawo [ 0 ] * o2y45zbt2m4 . gr33hmjawo [
0 ] + o2y45zbt2m4 . gr33hmjawo [ 1 ] * o2y45zbt2m4 . gr33hmjawo [ 1 ] ) +
o2y45zbt2m4 . gr33hmjawo [ 2 ] * o2y45zbt2m4 . gr33hmjawo [ 2 ] ) +
o2y45zbt2m4 . gr33hmjawo [ 3 ] * o2y45zbt2m4 . gr33hmjawo [ 3 ] ; }
eujiwcy0tl_idx_0 = eujiwcy0tl_idx_1 / nm4t0wvumv ; eujiwcy0tl_idx_2 /=
nm4t0wvumv ; nm4t0wvumv = eujiwcy0tl_idx_3 / nm4t0wvumv ; o2y45zbt2m4 .
aq11zi4uh2 = ( ( ( k1qmoe0iaw * o2y45zbt2m4 . gr33hmjawo [ 0 ] +
eujiwcy0tl_idx_0 * o2y45zbt2m4 . gr33hmjawo [ 1 ] ) + eujiwcy0tl_idx_2 *
o2y45zbt2m4 . gr33hmjawo [ 2 ] ) + nm4t0wvumv * o2y45zbt2m4 . gr33hmjawo [ 3
] ) / o2y45zbt2m4 . g0mrioy1px ; o2y45zbt2m4 . hjcotmhlln = ( ( (
eujiwcy0tl_idx_0 * o2y45zbt2m4 . gr33hmjawo [ 0 ] - k1qmoe0iaw * o2y45zbt2m4
. gr33hmjawo [ 1 ] ) + eujiwcy0tl_idx_2 * o2y45zbt2m4 . gr33hmjawo [ 3 ] ) -
nm4t0wvumv * o2y45zbt2m4 . gr33hmjawo [ 2 ] ) / o2y45zbt2m4 . g0mrioy1px ;
o2y45zbt2m4 . lnkbbmaxut = ( ( ( eujiwcy0tl_idx_2 * o2y45zbt2m4 . gr33hmjawo
[ 0 ] - k1qmoe0iaw * o2y45zbt2m4 . gr33hmjawo [ 2 ] ) - eujiwcy0tl_idx_0 *
o2y45zbt2m4 . gr33hmjawo [ 3 ] ) + nm4t0wvumv * o2y45zbt2m4 . gr33hmjawo [ 1
] ) / o2y45zbt2m4 . g0mrioy1px ; o2y45zbt2m4 . adm5dxedvk = ( ( (
eujiwcy0tl_idx_0 * o2y45zbt2m4 . gr33hmjawo [ 2 ] - k1qmoe0iaw * o2y45zbt2m4
. gr33hmjawo [ 3 ] ) - eujiwcy0tl_idx_2 * o2y45zbt2m4 . gr33hmjawo [ 1 ] ) +
nm4t0wvumv * o2y45zbt2m4 . gr33hmjawo [ 0 ] ) / o2y45zbt2m4 . g0mrioy1px ;
o2y45zbt2m4 . f2fo4aztpb [ 0 ] = k1qmoe0iaw ; o2y45zbt2m4 . f2fo4aztpb [ 1 ]
= eujiwcy0tl_idx_0 ; o2y45zbt2m4 . f2fo4aztpb [ 2 ] = eujiwcy0tl_idx_2 ;
o2y45zbt2m4 . f2fo4aztpb [ 3 ] = nm4t0wvumv ; if ( ssIsSampleHit ( rtS , 5 ,
0 ) ) { o2y45zbt2m4 . hiefr0yole [ 0 ] = o2y45zbt2m4 . f2fo4aztpb [ 0 ] ;
o2y45zbt2m4 . hiefr0yole [ 1 ] = o2y45zbt2m4 . f2fo4aztpb [ 1 ] ; o2y45zbt2m4
. hiefr0yole [ 2 ] = o2y45zbt2m4 . f2fo4aztpb [ 2 ] ; o2y45zbt2m4 .
hiefr0yole [ 3 ] = o2y45zbt2m4 . f2fo4aztpb [ 3 ] ; eujiwcy0tl_idx_3 = ( (
hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 0 ] * o2y45zbt2m4 .
hiefr0yole [ 0 ] - hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 1
] * o2y45zbt2m4 . hiefr0yole [ 1 ] ) - hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 2 ] * o2y45zbt2m4 . hiefr0yole [ 2
] ) - hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 3 ] *
o2y45zbt2m4 . hiefr0yole [ 3 ] ; eujiwcy0tl_idx_1 = ( ( hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 0 ] * o2y45zbt2m4 . hiefr0yole [ 1
] + o2y45zbt2m4 . hiefr0yole [ 0 ] * hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 1 ] ) + hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 2 ] * o2y45zbt2m4 . hiefr0yole [ 3
] ) - o2y45zbt2m4 . hiefr0yole [ 2 ] * hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 3 ] ; i14mskwis2 = ( ( hbv5azo3sw
. SensorattitudeBodyframe_Value_j5gua0l1cu [ 0 ] * o2y45zbt2m4 . hiefr0yole [
2 ] - hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 1 ] *
o2y45zbt2m4 . hiefr0yole [ 3 ] ) + o2y45zbt2m4 . hiefr0yole [ 0 ] *
hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 2 ] ) + o2y45zbt2m4 .
hiefr0yole [ 1 ] * hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 3
] ; je34obrpzy = ( ( hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [
0 ] * o2y45zbt2m4 . hiefr0yole [ 3 ] + hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 1 ] * o2y45zbt2m4 . hiefr0yole [ 2
] ) - o2y45zbt2m4 . hiefr0yole [ 1 ] * hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 2 ] ) + o2y45zbt2m4 . hiefr0yole [
0 ] * hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 3 ] ;
dpudqxqih0 = ( ( eujiwcy0tl_idx_3 * eujiwcy0tl_idx_3 + eujiwcy0tl_idx_1 *
eujiwcy0tl_idx_1 ) + i14mskwis2 * i14mskwis2 ) + je34obrpzy * je34obrpzy ; if
( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . crvsqmvbcs != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . crvsqmvbcs
= 0 ; } dpudqxqih0 = muDoubleScalarSqrt ( dpudqxqih0 ) ; } else if (
dpudqxqih0 < 0.0 ) { dpudqxqih0 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
dpudqxqih0 ) ) ; hrxu5rhe3af . crvsqmvbcs = 1 ; } else { dpudqxqih0 =
muDoubleScalarSqrt ( dpudqxqih0 ) ; } eujiwcy0tl_idx_3 /= dpudqxqih0 ;
eujiwcy0tl_idx_1 /= dpudqxqih0 ; i14mskwis2 /= dpudqxqih0 ; je34obrpzy /=
dpudqxqih0 ; bm12tu02tt [ 0 ] = ( ( eujiwcy0tl_idx_3 * eujiwcy0tl_idx_3 +
eujiwcy0tl_idx_1 * eujiwcy0tl_idx_1 ) - i14mskwis2 * i14mskwis2 ) -
je34obrpzy * je34obrpzy ; bm12tu02tt [ 1 ] = ( eujiwcy0tl_idx_1 * i14mskwis2
- je34obrpzy * eujiwcy0tl_idx_3 ) * hbv5azo3sw . Gain_Gain_ke0m542tvh ;
bm12tu02tt [ 2 ] = ( eujiwcy0tl_idx_3 * i14mskwis2 + eujiwcy0tl_idx_1 *
je34obrpzy ) * hbv5azo3sw . Gain_Gain_eyanrhbwuk ; bm12tu02tt [ 3 ] = (
je34obrpzy * eujiwcy0tl_idx_3 + eujiwcy0tl_idx_1 * i14mskwis2 ) * hbv5azo3sw
. Gain_Gain_irerkaxl5x ; bm12tu02tt [ 4 ] = ( ( eujiwcy0tl_idx_3 *
eujiwcy0tl_idx_3 - eujiwcy0tl_idx_1 * eujiwcy0tl_idx_1 ) + i14mskwis2 *
i14mskwis2 ) - je34obrpzy * je34obrpzy ; bm12tu02tt [ 5 ] = ( i14mskwis2 *
je34obrpzy - eujiwcy0tl_idx_3 * eujiwcy0tl_idx_1 ) * hbv5azo3sw .
Gain_Gain_pgavoonfvk ; bm12tu02tt [ 6 ] = ( eujiwcy0tl_idx_1 * je34obrpzy -
eujiwcy0tl_idx_3 * i14mskwis2 ) * hbv5azo3sw . Gain_Gain_p1y5blaq4p ;
bm12tu02tt [ 7 ] = ( eujiwcy0tl_idx_3 * eujiwcy0tl_idx_1 + i14mskwis2 *
je34obrpzy ) * hbv5azo3sw . Gain_Gain_egeq4qcrwd ; bm12tu02tt [ 8 ] = ( (
eujiwcy0tl_idx_3 * eujiwcy0tl_idx_3 - eujiwcy0tl_idx_1 * eujiwcy0tl_idx_1 ) -
i14mskwis2 * i14mskwis2 ) + je34obrpzy * je34obrpzy ; for ( i = 0 ; i < 3 ; i
++ ) { gev4djbpks [ i ] = bm12tu02tt [ i + 6 ] * hbv5azo3sw .
Star1Earthinertialframe_Value_ifkn0ogqah [ 2 ] + ( bm12tu02tt [ i + 3 ] *
hbv5azo3sw . Star1Earthinertialframe_Value_ifkn0ogqah [ 1 ] + bm12tu02tt [ i
] * hbv5azo3sw . Star1Earthinertialframe_Value_ifkn0ogqah [ 0 ] ) ; }
je34obrpzy = muDoubleScalarAtan2 ( gev4djbpks [ 0 ] , gev4djbpks [ 2 ] ) ;
dpudqxqih0 = muDoubleScalarAtan2 ( gev4djbpks [ 1 ] , gev4djbpks [ 2 ] ) ; }
if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
dgjbpbeorv , & hbv5azo3sw . RandomSource_MeanVal , 1 , & hbv5azo3sw .
RandomSource_VarianceRTP , 1 , hrxu5rhe3af . o4uuntuq5v , 1 , 2 ) ; } if (
ssIsSampleHit ( rtS , 5 , 0 ) ) { dnfnzfugcb_idx_0 = je34obrpzy + o2y45zbt2m4
. dgjbpbeorv [ 0 ] ; dnfnzfugcb_idx_1 = dpudqxqih0 + o2y45zbt2m4 . dgjbpbeorv
[ 1 ] ; gev4djbpks [ 0 ] = muDoubleScalarTan ( dnfnzfugcb_idx_0 ) ;
gev4djbpks [ 1 ] = muDoubleScalarTan ( dnfnzfugcb_idx_1 ) ; gev4djbpks [ 2 ]
= hbv5azo3sw . Constant_Value_hyw20kdmss ; isbrvx1pyk = ( gev4djbpks [ 0 ] *
gev4djbpks [ 0 ] + gev4djbpks [ 1 ] * gev4djbpks [ 1 ] ) + hbv5azo3sw .
Constant_Value_hyw20kdmss * hbv5azo3sw . Constant_Value_hyw20kdmss ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . bimi4g1wrk != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . bimi4g1wrk
= 0 ; } a3vh3pqf0p = muDoubleScalarSqrt ( isbrvx1pyk ) ; } else if (
isbrvx1pyk < 0.0 ) { a3vh3pqf0p = - muDoubleScalarSqrt ( muDoubleScalarAbs (
isbrvx1pyk ) ) ; hrxu5rhe3af . bimi4g1wrk = 1 ; } else { a3vh3pqf0p =
muDoubleScalarSqrt ( isbrvx1pyk ) ; } je34obrpzy = 1.0 / a3vh3pqf0p ;
gev4djbpks [ 0 ] *= je34obrpzy ; gev4djbpks [ 1 ] *= je34obrpzy ; je34obrpzy
*= gev4djbpks [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { omtubbfcif [ i ] =
o2y45zbt2m4 . ouubw05eym [ i + 6 ] * je34obrpzy + ( o2y45zbt2m4 . ouubw05eym
[ i + 3 ] * gev4djbpks [ 1 ] + o2y45zbt2m4 . ouubw05eym [ i ] * gev4djbpks [
0 ] ) ; b5inmoahfl [ i ] = bm12tu02tt [ i + 6 ] * hbv5azo3sw .
Star2Earthinertialframe_Value_h1kqrgh25u [ 2 ] + ( bm12tu02tt [ i + 3 ] *
hbv5azo3sw . Star2Earthinertialframe_Value_h1kqrgh25u [ 1 ] + bm12tu02tt [ i
] * hbv5azo3sw . Star2Earthinertialframe_Value_h1kqrgh25u [ 0 ] ) ; }
isbrvx1pyk = muDoubleScalarAtan2 ( b5inmoahfl [ 0 ] , b5inmoahfl [ 2 ] ) ;
a3vh3pqf0p = muDoubleScalarAtan2 ( b5inmoahfl [ 1 ] , b5inmoahfl [ 2 ] ) ; }
if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
hh1rdgrph0 , & hbv5azo3sw . RandomSource_MeanVal_pdjjnbytmo , 1 , &
hbv5azo3sw . RandomSource_VarianceRTP_k13dwuafgu , 1 , hrxu5rhe3af .
ewhzpwb1ca , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
bzqxmppt5e_idx_0 = isbrvx1pyk + o2y45zbt2m4 . hh1rdgrph0 [ 0 ] ;
bzqxmppt5e_idx_1 = a3vh3pqf0p + o2y45zbt2m4 . hh1rdgrph0 [ 1 ] ; b5inmoahfl [
0 ] = muDoubleScalarTan ( bzqxmppt5e_idx_0 ) ; b5inmoahfl [ 1 ] =
muDoubleScalarTan ( bzqxmppt5e_idx_1 ) ; b5inmoahfl [ 2 ] = hbv5azo3sw .
Constant_Value_hqwvrd4twi ; ppzvhrji5y = ( b5inmoahfl [ 0 ] * b5inmoahfl [ 0
] + b5inmoahfl [ 1 ] * b5inmoahfl [ 1 ] ) + hbv5azo3sw .
Constant_Value_hqwvrd4twi * hbv5azo3sw . Constant_Value_hqwvrd4twi ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . jlabupavh3 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . jlabupavh3
= 0 ; } jimsqf3sjt = muDoubleScalarSqrt ( ppzvhrji5y ) ; } else if (
ppzvhrji5y < 0.0 ) { jimsqf3sjt = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ppzvhrji5y ) ) ; hrxu5rhe3af . jlabupavh3 = 1 ; } else { jimsqf3sjt =
muDoubleScalarSqrt ( ppzvhrji5y ) ; } je34obrpzy = 1.0 / jimsqf3sjt ;
b5inmoahfl [ 0 ] *= je34obrpzy ; b5inmoahfl [ 1 ] *= je34obrpzy ; isbrvx1pyk
= je34obrpzy * b5inmoahfl [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { i541kjwyuc [
i ] = o2y45zbt2m4 . ouubw05eym [ i + 6 ] * isbrvx1pyk + ( o2y45zbt2m4 .
ouubw05eym [ i + 3 ] * b5inmoahfl [ 1 ] + o2y45zbt2m4 . ouubw05eym [ i ] *
b5inmoahfl [ 0 ] ) ; } for ( i = 0 ; i < 3 ; i ++ ) { b5inmoahfl [ i ] =
bm12tu02tt [ i + 6 ] * hbv5azo3sw . Star3Earthinertialframe_Value_dn3g4rngub
[ 2 ] + ( bm12tu02tt [ i + 3 ] * hbv5azo3sw .
Star3Earthinertialframe_Value_dn3g4rngub [ 1 ] + bm12tu02tt [ i ] *
hbv5azo3sw . Star3Earthinertialframe_Value_dn3g4rngub [ 0 ] ) ; } ppzvhrji5y
= muDoubleScalarAtan2 ( b5inmoahfl [ 0 ] , b5inmoahfl [ 2 ] ) ; jimsqf3sjt =
muDoubleScalarAtan2 ( b5inmoahfl [ 1 ] , b5inmoahfl [ 2 ] ) ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . pb33zpaont , &
hbv5azo3sw . RandomSource_MeanVal_c0srfhbvgi , 1 , & hbv5azo3sw .
RandomSource_VarianceRTP_ho3qok5dvb , 1 , hrxu5rhe3af . h2f0zvrfqq , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { porr3exmvr_idx_0 = ppzvhrji5y +
o2y45zbt2m4 . pb33zpaont [ 0 ] ; porr3exmvr_idx_1 = jimsqf3sjt + o2y45zbt2m4
. pb33zpaont [ 1 ] ; b5inmoahfl [ 0 ] = muDoubleScalarTan ( porr3exmvr_idx_0
) ; b5inmoahfl [ 1 ] = muDoubleScalarTan ( porr3exmvr_idx_1 ) ; b5inmoahfl [
2 ] = hbv5azo3sw . Constant_Value_f5jgk2qlyk ; ppzvhrji5y = ( b5inmoahfl [ 0
] * b5inmoahfl [ 0 ] + b5inmoahfl [ 1 ] * b5inmoahfl [ 1 ] ) + hbv5azo3sw .
Constant_Value_f5jgk2qlyk * hbv5azo3sw . Constant_Value_f5jgk2qlyk ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . he1tephpj4 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . he1tephpj4
= 0 ; } jimsqf3sjt = muDoubleScalarSqrt ( ppzvhrji5y ) ; } else if (
ppzvhrji5y < 0.0 ) { jimsqf3sjt = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ppzvhrji5y ) ) ; hrxu5rhe3af . he1tephpj4 = 1 ; } else { jimsqf3sjt =
muDoubleScalarSqrt ( ppzvhrji5y ) ; } je34obrpzy = 1.0 / jimsqf3sjt ; for ( i
= 0 ; i < 3 ; i ++ ) { bm12tu02tt [ 3 * i ] = omtubbfcif [ 0 ] * hbv5azo3sw .
Star1Earthinertialframe_Value [ i ] ; oxsh4amew4 [ 3 * i ] = i541kjwyuc [ 0 ]
* hbv5azo3sw . Star2Earthinertialframe_Value [ i ] ; bm12tu02tt [ 3 * i + 1 ]
= omtubbfcif [ 1 ] * hbv5azo3sw . Star1Earthinertialframe_Value [ i ] ;
oxsh4amew4 [ 3 * i + 1 ] = i541kjwyuc [ 1 ] * hbv5azo3sw .
Star2Earthinertialframe_Value [ i ] ; bm12tu02tt [ 3 * i + 2 ] = omtubbfcif [
2 ] * hbv5azo3sw . Star1Earthinertialframe_Value [ i ] ; oxsh4amew4 [ 3 * i +
2 ] = i541kjwyuc [ 2 ] * hbv5azo3sw . Star2Earthinertialframe_Value [ i ] ;
b5inmoahfl [ i ] *= je34obrpzy ; } for ( i = 0 ; i < 3 ; i ++ ) { gev4djbpks
[ i ] = o2y45zbt2m4 . ouubw05eym [ i + 6 ] * b5inmoahfl [ 2 ] + ( o2y45zbt2m4
. ouubw05eym [ i + 3 ] * b5inmoahfl [ 1 ] + o2y45zbt2m4 . ouubw05eym [ i ] *
b5inmoahfl [ 0 ] ) ; } for ( i = 0 ; i < 3 ; i ++ ) { diqprhsvnt [ 3 * i ] =
( bm12tu02tt [ 3 * i ] + oxsh4amew4 [ 3 * i ] ) + gev4djbpks [ 0 ] *
hbv5azo3sw . Star3Earthinertialframe_Value [ i ] ; diqprhsvnt [ 3 * i + 1 ] =
( bm12tu02tt [ 3 * i + 1 ] + oxsh4amew4 [ 3 * i + 1 ] ) + gev4djbpks [ 1 ] *
hbv5azo3sw . Star3Earthinertialframe_Value [ i ] ; diqprhsvnt [ 3 * i + 2 ] =
( bm12tu02tt [ 3 * i + 2 ] + oxsh4amew4 [ 3 * i + 2 ] ) + gev4djbpks [ 2 ] *
hbv5azo3sw . Star3Earthinertialframe_Value [ i ] ; } p = true ; for ( i = 0 ;
i < 9 ; i ++ ) { ppzvhrji5y = diqprhsvnt [ i ] ; if ( p && ( ( !
muDoubleScalarIsInf ( ppzvhrji5y ) ) && ( ! muDoubleScalarIsNaN ( ppzvhrji5y
) ) ) ) { } else { p = false ; } } if ( p ) { svd_aYJ4ZO8G ( diqprhsvnt ,
bm12tu02tt , gev4djbpks , oxsh4amew4 ) ; } else { memset ( & diqprhsvnt [ 0 ]
, 0 , 9U * sizeof ( real_T ) ) ; svd_aYJ4ZO8G ( diqprhsvnt , bm12tu02tt ,
gev4djbpks , oxsh4amew4 ) ; for ( i = 0 ; i < 9 ; i ++ ) { bm12tu02tt [ i ] =
( rtNaN ) ; oxsh4amew4 [ i ] = ( rtNaN ) ; } } memset ( & M [ 0 ] , 0 , 9U *
sizeof ( real_T ) ) ; M [ 0 ] = 1.0 ; M [ 4 ] = 1.0 ; M [ 8 ] = det_i2CXN4sy
( bm12tu02tt ) * det_i2CXN4sy ( oxsh4amew4 ) ; for ( i = 0 ; i < 3 ; i ++ ) {
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { g3v5bt41fg [ i + 3 * i_p ] = 0.0 ;
g3v5bt41fg [ i + 3 * i_p ] += M [ 3 * i_p ] * bm12tu02tt [ i ] ; g3v5bt41fg [
i + 3 * i_p ] += M [ 3 * i_p + 1 ] * bm12tu02tt [ i + 3 ] ; g3v5bt41fg [ i +
3 * i_p ] += M [ 3 * i_p + 2 ] * bm12tu02tt [ i + 6 ] ; } for ( i_p = 0 ; i_p
< 3 ; i_p ++ ) { diqprhsvnt [ i + 3 * i_p ] = 0.0 ; diqprhsvnt [ i + 3 * i_p
] += g3v5bt41fg [ i ] * oxsh4amew4 [ i_p ] ; diqprhsvnt [ i + 3 * i_p ] +=
g3v5bt41fg [ i + 3 ] * oxsh4amew4 [ i_p + 3 ] ; diqprhsvnt [ i + 3 * i_p ] +=
g3v5bt41fg [ i + 6 ] * oxsh4amew4 [ i_p + 6 ] ; } } jimsqf3sjt = ( diqprhsvnt
[ 0 ] + diqprhsvnt [ 4 ] ) + diqprhsvnt [ 8 ] ; rtPrevAction = hrxu5rhe3af .
li05mozykd ; if ( ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! (
jimsqf3sjt > 0.0 ) ; hrxu5rhe3af . li05mozykd = rtAction ; } else { rtAction
= hrxu5rhe3af . li05mozykd ; } if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . jjpaqm4yys ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } hrxu5rhe3af .
jjpaqm4yys = - 1 ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { jimsqf3sjt += hbv5azo3sw . Constant_Value ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . exhkqeoxjl != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . exhkqeoxjl
= 0 ; } ppzvhrji5y = muDoubleScalarSqrt ( jimsqf3sjt ) ; } else if (
jimsqf3sjt < 0.0 ) { ppzvhrji5y = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jimsqf3sjt ) ) ; hrxu5rhe3af . exhkqeoxjl = 1 ; } else { ppzvhrji5y =
muDoubleScalarSqrt ( jimsqf3sjt ) ; } o2y45zbt2m4 . olo2njtgqu [ 0 ] =
hbv5azo3sw . Gain_Gain * ppzvhrji5y ; jimsqf3sjt = hbv5azo3sw . Gain1_Gain *
ppzvhrji5y ; o2y45zbt2m4 . olo2njtgqu [ 1 ] = ( diqprhsvnt [ 7 ] - diqprhsvnt
[ 5 ] ) / jimsqf3sjt ; o2y45zbt2m4 . olo2njtgqu [ 2 ] = ( diqprhsvnt [ 2 ] -
diqprhsvnt [ 6 ] ) / jimsqf3sjt ; o2y45zbt2m4 . olo2njtgqu [ 3 ] = (
diqprhsvnt [ 3 ] - diqprhsvnt [ 1 ] ) / jimsqf3sjt ; } if ( ssIsMajorTimeStep
( rtS ) ) { srUpdateBC ( hrxu5rhe3af . lwgiflcl1s ) ; } break ; case 1 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 5 ) != ssGetTStart (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if (
ssIsSampleHit ( rtS , 5 , 0 ) ) { rtPrevAction = hrxu5rhe3af . jjpaqm4yys ;
if ( ( diqprhsvnt [ 4 ] > diqprhsvnt [ 0 ] ) && ( diqprhsvnt [ 4 ] >
diqprhsvnt [ 8 ] ) ) { rtAction = 0 ; } else if ( diqprhsvnt [ 8 ] >
diqprhsvnt [ 0 ] ) { rtAction = 1 ; } else { rtAction = 2 ; } hrxu5rhe3af .
jjpaqm4yys = rtAction ; if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break
; case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } }
switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { jimsqf3sjt = ( ( diqprhsvnt [ 4 ] - diqprhsvnt [ 0 ] ) -
diqprhsvnt [ 8 ] ) + hbv5azo3sw . Constant_Value_pobvkhrg1q ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . mb3ab3hq0l != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . mb3ab3hq0l
= 0 ; } ppzvhrji5y = muDoubleScalarSqrt ( jimsqf3sjt ) ; } else if (
jimsqf3sjt < 0.0 ) { ppzvhrji5y = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jimsqf3sjt ) ) ; hrxu5rhe3af . mb3ab3hq0l = 1 ; } else { ppzvhrji5y =
muDoubleScalarSqrt ( jimsqf3sjt ) ; } o2y45zbt2m4 . olo2njtgqu [ 2 ] =
hbv5azo3sw . Gain_Gain_jkk5qbvhrd * ppzvhrji5y ; if ( ppzvhrji5y != 0.0 ) {
eujiwcy0tl_idx_3 = hbv5azo3sw . Constant1_Value ; } else { eujiwcy0tl_idx_3 =
hbv5azo3sw . Constant2_Value [ 0 ] ; ppzvhrji5y = hbv5azo3sw .
Constant2_Value [ 1 ] ; } jimsqf3sjt = eujiwcy0tl_idx_3 / ppzvhrji5y ;
o2y45zbt2m4 . olo2njtgqu [ 1 ] = ( diqprhsvnt [ 1 ] + diqprhsvnt [ 3 ] ) *
jimsqf3sjt * hbv5azo3sw . Gain1_Gain_hwcrrxc31u ; o2y45zbt2m4 . olo2njtgqu [
3 ] = ( diqprhsvnt [ 5 ] + diqprhsvnt [ 7 ] ) * jimsqf3sjt * hbv5azo3sw .
Gain3_Gain ; o2y45zbt2m4 . olo2njtgqu [ 0 ] = ( diqprhsvnt [ 2 ] - diqprhsvnt
[ 6 ] ) * jimsqf3sjt * hbv5azo3sw . Gain4_Gain ; } srUpdateBC ( hrxu5rhe3af .
gczym4ozql ) ; break ; case 1 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { jimsqf3sjt = ( ( diqprhsvnt [ 8 ] - diqprhsvnt [ 0 ] ) -
diqprhsvnt [ 4 ] ) + hbv5azo3sw . Constant_Value_afybtd5xa5 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . c1p4hnj5v1 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . c1p4hnj5v1
= 0 ; } ppzvhrji5y = muDoubleScalarSqrt ( jimsqf3sjt ) ; } else if (
jimsqf3sjt < 0.0 ) { ppzvhrji5y = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jimsqf3sjt ) ) ; hrxu5rhe3af . c1p4hnj5v1 = 1 ; } else { ppzvhrji5y =
muDoubleScalarSqrt ( jimsqf3sjt ) ; } o2y45zbt2m4 . olo2njtgqu [ 3 ] =
hbv5azo3sw . Gain_Gain_js4ptfwauk * ppzvhrji5y ; if ( ppzvhrji5y != 0.0 ) {
eujiwcy0tl_idx_3 = hbv5azo3sw . Constant1_Value_ngar4yzxq0 ; } else {
eujiwcy0tl_idx_3 = hbv5azo3sw . Constant2_Value_dvdwumvekn [ 0 ] ; ppzvhrji5y
= hbv5azo3sw . Constant2_Value_dvdwumvekn [ 1 ] ; } jimsqf3sjt =
eujiwcy0tl_idx_3 / ppzvhrji5y ; o2y45zbt2m4 . olo2njtgqu [ 1 ] = ( diqprhsvnt
[ 2 ] + diqprhsvnt [ 6 ] ) * jimsqf3sjt * hbv5azo3sw . Gain1_Gain_ckvar5qtuu
; o2y45zbt2m4 . olo2njtgqu [ 2 ] = ( diqprhsvnt [ 5 ] + diqprhsvnt [ 7 ] ) *
jimsqf3sjt * hbv5azo3sw . Gain2_Gain ; o2y45zbt2m4 . olo2njtgqu [ 0 ] = (
diqprhsvnt [ 3 ] - diqprhsvnt [ 1 ] ) * jimsqf3sjt * hbv5azo3sw .
Gain3_Gain_flkrwqpj2z ; } srUpdateBC ( hrxu5rhe3af . ihdnc2epba ) ; break ;
default : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 5 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { jimsqf3sjt = ( ( diqprhsvnt [ 0 ]
- diqprhsvnt [ 4 ] ) - diqprhsvnt [ 8 ] ) + hbv5azo3sw .
Constant_Value_dchp0pj4cy ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . m0glaktt01 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . m0glaktt01 = 0 ; } ppzvhrji5y = muDoubleScalarSqrt (
jimsqf3sjt ) ; } else if ( jimsqf3sjt < 0.0 ) { ppzvhrji5y = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( jimsqf3sjt ) ) ; hrxu5rhe3af .
m0glaktt01 = 1 ; } else { ppzvhrji5y = muDoubleScalarSqrt ( jimsqf3sjt ) ; }
o2y45zbt2m4 . olo2njtgqu [ 1 ] = hbv5azo3sw . Gain_Gain_i1fq4bspbj *
ppzvhrji5y ; if ( ppzvhrji5y != 0.0 ) { eujiwcy0tl_idx_3 = hbv5azo3sw .
Constant1_Value_il1xiv44vm ; } else { eujiwcy0tl_idx_3 = hbv5azo3sw .
Constant2_Value_gu0oz414og [ 0 ] ; ppzvhrji5y = hbv5azo3sw .
Constant2_Value_gu0oz414og [ 1 ] ; } jimsqf3sjt = eujiwcy0tl_idx_3 /
ppzvhrji5y ; o2y45zbt2m4 . olo2njtgqu [ 2 ] = ( diqprhsvnt [ 1 ] + diqprhsvnt
[ 3 ] ) * jimsqf3sjt * hbv5azo3sw . Gain1_Gain_b0y5bwazer ; o2y45zbt2m4 .
olo2njtgqu [ 3 ] = ( diqprhsvnt [ 2 ] + diqprhsvnt [ 6 ] ) * jimsqf3sjt *
hbv5azo3sw . Gain2_Gain_clpxe40pxa ; o2y45zbt2m4 . olo2njtgqu [ 0 ] = (
diqprhsvnt [ 7 ] - diqprhsvnt [ 5 ] ) * jimsqf3sjt * hbv5azo3sw .
Gain3_Gain_dq4fv403xs ; } srUpdateBC ( hrxu5rhe3af . glbjm2bh2o ) ; break ; }
} if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . lb3hih1zhu )
; } break ; } o2y45zbt2m4 . dqh4fg2fl2 = ( ( o2y45zbt2m4 . olo2njtgqu [ 0 ] *
o2y45zbt2m4 . olo2njtgqu [ 0 ] + o2y45zbt2m4 . olo2njtgqu [ 1 ] * o2y45zbt2m4
. olo2njtgqu [ 1 ] ) + o2y45zbt2m4 . olo2njtgqu [ 2 ] * o2y45zbt2m4 .
olo2njtgqu [ 2 ] ) + o2y45zbt2m4 . olo2njtgqu [ 3 ] * o2y45zbt2m4 .
olo2njtgqu [ 3 ] ; } o2y45zbt2m4 . fmiudkl0xp = ( ( ( k1qmoe0iaw *
o2y45zbt2m4 . olo2njtgqu [ 0 ] + eujiwcy0tl_idx_0 * o2y45zbt2m4 . olo2njtgqu
[ 1 ] ) + eujiwcy0tl_idx_2 * o2y45zbt2m4 . olo2njtgqu [ 2 ] ) + nm4t0wvumv *
o2y45zbt2m4 . olo2njtgqu [ 3 ] ) / o2y45zbt2m4 . dqh4fg2fl2 ; o2y45zbt2m4 .
aywo03gopp = ( ( ( eujiwcy0tl_idx_0 * o2y45zbt2m4 . olo2njtgqu [ 0 ] -
k1qmoe0iaw * o2y45zbt2m4 . olo2njtgqu [ 1 ] ) + eujiwcy0tl_idx_2 *
o2y45zbt2m4 . olo2njtgqu [ 3 ] ) - nm4t0wvumv * o2y45zbt2m4 . olo2njtgqu [ 2
] ) / o2y45zbt2m4 . dqh4fg2fl2 ; o2y45zbt2m4 . ecbd1xcds1 = ( ( (
eujiwcy0tl_idx_2 * o2y45zbt2m4 . olo2njtgqu [ 0 ] - k1qmoe0iaw * o2y45zbt2m4
. olo2njtgqu [ 2 ] ) - eujiwcy0tl_idx_0 * o2y45zbt2m4 . olo2njtgqu [ 3 ] ) +
nm4t0wvumv * o2y45zbt2m4 . olo2njtgqu [ 1 ] ) / o2y45zbt2m4 . dqh4fg2fl2 ;
o2y45zbt2m4 . nabgcgokls = ( ( ( eujiwcy0tl_idx_0 * o2y45zbt2m4 . olo2njtgqu
[ 2 ] - k1qmoe0iaw * o2y45zbt2m4 . olo2njtgqu [ 3 ] ) - eujiwcy0tl_idx_2 *
o2y45zbt2m4 . olo2njtgqu [ 1 ] ) + nm4t0wvumv * o2y45zbt2m4 . olo2njtgqu [ 0
] ) / o2y45zbt2m4 . dqh4fg2fl2 ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
RandSrc_GZ_D ( pygfqx1xx2 , & hbv5azo3sw . RandomSource1_MeanVal , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP , 1 , hrxu5rhe3af . bdotsga2iv , 1 , 3
) ; ppzvhrji5y = hbv5azo3sw . Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [ 0 ] +
hrxu5rhe3af . iwulztso32 [ 0 ] ; o2y45zbt2m4 . p0g2tnevfk [ 0 ] = ppzvhrji5y
; hrxu5rhe3af . iwulztso32 [ 0 ] = ppzvhrji5y ; ppzvhrji5y = hbv5azo3sw .
Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [ 1 ] + hrxu5rhe3af . iwulztso32 [ 1 ] ;
o2y45zbt2m4 . p0g2tnevfk [ 1 ] = ppzvhrji5y ; hrxu5rhe3af . iwulztso32 [ 1 ]
= ppzvhrji5y ; ppzvhrji5y = hbv5azo3sw . Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [
2 ] + hrxu5rhe3af . iwulztso32 [ 2 ] ; o2y45zbt2m4 . p0g2tnevfk [ 2 ] =
ppzvhrji5y ; hrxu5rhe3af . iwulztso32 [ 2 ] = ppzvhrji5y ; } p =
ssGetIsOkayToUpdateMode ( rtS ) ; if ( p ) { if ( hrxu5rhe3af . ckit2etwje !=
0 ) { n1mubcupv31 . kbqjtzizsx [ 0 ] = o2y45zbt2m4 . lx0bv1yu1i [ 0 ] ;
n1mubcupv31 . kbqjtzizsx [ 1 ] = o2y45zbt2m4 . lx0bv1yu1i [ 1 ] ; n1mubcupv31
. kbqjtzizsx [ 2 ] = o2y45zbt2m4 . lx0bv1yu1i [ 2 ] ; } o2y45zbt2m4 .
h20zeizqdi [ 0 ] = n1mubcupv31 . kbqjtzizsx [ 0 ] ; o2y45zbt2m4 . h20zeizqdi
[ 1 ] = n1mubcupv31 . kbqjtzizsx [ 1 ] ; o2y45zbt2m4 . h20zeizqdi [ 2 ] =
n1mubcupv31 . kbqjtzizsx [ 2 ] ; } else { o2y45zbt2m4 . h20zeizqdi [ 0 ] =
n1mubcupv31 . kbqjtzizsx [ 0 ] ; o2y45zbt2m4 . h20zeizqdi [ 1 ] = n1mubcupv31
. kbqjtzizsx [ 1 ] ; o2y45zbt2m4 . h20zeizqdi [ 2 ] = n1mubcupv31 .
kbqjtzizsx [ 2 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { dj1oda5ydb_idx_0
= o2y45zbt2m4 . h20zeizqdi [ 0 ] ; dj1oda5ydb_idx_1 = o2y45zbt2m4 .
h20zeizqdi [ 1 ] ; dj1oda5ydb_idx_2 = o2y45zbt2m4 . h20zeizqdi [ 2 ] ; } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . lfqykqi1sg , &
hbv5azo3sw . RandomSource_MeanVal_lzp2mz4mln , 1 , & hbv5azo3sw .
RandomSource_VarianceRTP_hlnrsyc2os , 1 , hrxu5rhe3af . lqkanthoxg , 1 , 3 )
; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { dj1oda5ydb_idx_0 = ( o2y45zbt2m4 .
p0g2tnevfk [ 0 ] + dj1oda5ydb_idx_0 ) + o2y45zbt2m4 . lfqykqi1sg [ 0 ] ;
o2y45zbt2m4 . c1cfxe21zn [ 0 ] = ( ( ( dj1oda5ydb_idx_0 + o2y45zbt2m4 .
gr33hmjawo [ 4 ] ) * hbv5azo3sw . Gain_Gain_bi5br4oxvh + o2y45zbt2m4 .
kuqlbidad1 [ 0 ] ) + o2y45zbt2m4 . gr33hmjawo [ 0 ] * o2y45zbt2m4 .
gr33hmjawo [ 1 ] * hbv5azo3sw . Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw .
Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 . op4p3vooky [ 0 ] = hbv5azo3sw .
Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; hlbbwfsq2e [ 0 ] =
dj1oda5ydb_idx_0 ; dj1oda5ydb_idx_0 = ( o2y45zbt2m4 . p0g2tnevfk [ 1 ] +
dj1oda5ydb_idx_1 ) + o2y45zbt2m4 . lfqykqi1sg [ 1 ] ; o2y45zbt2m4 .
c1cfxe21zn [ 1 ] = ( ( ( dj1oda5ydb_idx_0 + o2y45zbt2m4 . gr33hmjawo [ 5 ] )
* hbv5azo3sw . Gain_Gain_bi5br4oxvh + o2y45zbt2m4 . kuqlbidad1 [ 1 ] ) +
o2y45zbt2m4 . gr33hmjawo [ 0 ] * o2y45zbt2m4 . gr33hmjawo [ 2 ] * hbv5azo3sw
. Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw . Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4
. op4p3vooky [ 1 ] = hbv5azo3sw . Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 .
c1cfxe21zn [ 1 ] ; hlbbwfsq2e [ 1 ] = dj1oda5ydb_idx_0 ; dj1oda5ydb_idx_0 = (
o2y45zbt2m4 . p0g2tnevfk [ 2 ] + dj1oda5ydb_idx_2 ) + o2y45zbt2m4 .
lfqykqi1sg [ 2 ] ; o2y45zbt2m4 . c1cfxe21zn [ 2 ] = ( ( ( dj1oda5ydb_idx_0 +
o2y45zbt2m4 . gr33hmjawo [ 6 ] ) * hbv5azo3sw . Gain_Gain_bi5br4oxvh +
o2y45zbt2m4 . kuqlbidad1 [ 2 ] ) + o2y45zbt2m4 . gr33hmjawo [ 0 ] *
o2y45zbt2m4 . gr33hmjawo [ 3 ] * hbv5azo3sw . Gain1_Gain_cftaqvkxoi ) *
hbv5azo3sw . Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 . op4p3vooky [ 2 ] =
hbv5azo3sw . Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 . c1cfxe21zn [ 2 ] ;
hlbbwfsq2e [ 2 ] = dj1oda5ydb_idx_0 ; } if ( ssIsSampleHit ( rtS , 12 , 0 ) )
{ je34obrpzy = muDoubleScalarFloor ( ( 2.8421709430404007E-14 * o2y45zbt2m4 .
op4p3vooky [ 0 ] * hbv5azo3sw . PWM3_Period + o2y45zbt2m4 . op4p3vooky [ 0 ]
* hbv5azo3sw . PWM3_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( je34obrpzy
) || muDoubleScalarIsInf ( je34obrpzy ) ) { je34obrpzy = 0.0 ; } else {
je34obrpzy = muDoubleScalarRem ( je34obrpzy , 4.294967296E+9 ) ; } if ( ( ( (
je34obrpzy < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - je34obrpzy : (
uint32_T ) je34obrpzy ) == 0U ) || ( o2y45zbt2m4 . op4p3vooky [ 0 ] <= 0.0 )
) && hrxu5rhe3af . opg1lhdczb ) { o2y45zbt2m4 . px02m2ansm = 0.0 ;
hrxu5rhe3af . e2pe11pwxn = false ; } else { o2y45zbt2m4 . px02m2ansm =
hrxu5rhe3af . e2pe11pwxn ; } } if ( ssIsSampleHit ( rtS , 11 , 0 ) ) {
je34obrpzy = muDoubleScalarFloor ( ( 2.8421709430404007E-14 * o2y45zbt2m4 .
op4p3vooky [ 1 ] * hbv5azo3sw . PWM4_Period + o2y45zbt2m4 . op4p3vooky [ 1 ]
* hbv5azo3sw . PWM4_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( je34obrpzy
) || muDoubleScalarIsInf ( je34obrpzy ) ) { je34obrpzy = 0.0 ; } else {
je34obrpzy = muDoubleScalarRem ( je34obrpzy , 4.294967296E+9 ) ; } if ( ( ( (
je34obrpzy < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - je34obrpzy : (
uint32_T ) je34obrpzy ) == 0U ) || ( o2y45zbt2m4 . op4p3vooky [ 1 ] <= 0.0 )
) && hrxu5rhe3af . jmjdutrgwi ) { o2y45zbt2m4 . lzgno0c45u = 0.0 ;
hrxu5rhe3af . jiqhomoo0v = false ; } else { o2y45zbt2m4 . lzgno0c45u =
hrxu5rhe3af . jiqhomoo0v ; } } if ( ssIsSampleHit ( rtS , 10 , 0 ) ) {
je34obrpzy = muDoubleScalarFloor ( ( 2.8421709430404007E-14 * o2y45zbt2m4 .
op4p3vooky [ 2 ] * hbv5azo3sw . PWM5_Period + o2y45zbt2m4 . op4p3vooky [ 2 ]
* hbv5azo3sw . PWM5_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( je34obrpzy
) || muDoubleScalarIsInf ( je34obrpzy ) ) { je34obrpzy = 0.0 ; } else {
je34obrpzy = muDoubleScalarRem ( je34obrpzy , 4.294967296E+9 ) ; } if ( ( ( (
je34obrpzy < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - je34obrpzy : (
uint32_T ) je34obrpzy ) == 0U ) || ( o2y45zbt2m4 . op4p3vooky [ 2 ] <= 0.0 )
) && hrxu5rhe3af . ayulg3mnvk ) { o2y45zbt2m4 . frbnnz0j20 = 0.0 ;
hrxu5rhe3af . gxxnmirgwt = false ; } else { o2y45zbt2m4 . frbnnz0j20 =
hrxu5rhe3af . gxxnmirgwt ; } } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) {
hnpfszi1fh_idx_0 = hbv5azo3sw . Gain1_Gain_i4m04mlldw * o2y45zbt2m4 .
px02m2ansm ; hnpfszi1fh_idx_1 = hbv5azo3sw . Gain1_Gain_i4m04mlldw *
o2y45zbt2m4 . lzgno0c45u ; hnpfszi1fh_idx_2 = hbv5azo3sw .
Gain1_Gain_i4m04mlldw * o2y45zbt2m4 . frbnnz0j20 ; } if ( ssIsSampleHit ( rtS
, 9 , 0 ) ) { je34obrpzy = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . c1cfxe21zn [ 0 ] * hbv5azo3sw . PWM_Period + o2y45zbt2m4 .
c1cfxe21zn [ 0 ] * hbv5azo3sw . PWM_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( je34obrpzy ) || muDoubleScalarIsInf ( je34obrpzy ) ) {
je34obrpzy = 0.0 ; } else { je34obrpzy = muDoubleScalarRem ( je34obrpzy ,
4.294967296E+9 ) ; } if ( ( ( ( je34obrpzy < 0.0 ? ( uint32_T ) - ( int32_T )
( uint32_T ) - je34obrpzy : ( uint32_T ) je34obrpzy ) == 0U ) || (
o2y45zbt2m4 . c1cfxe21zn [ 0 ] <= 0.0 ) ) && hrxu5rhe3af . cnj1jumxqg ) {
o2y45zbt2m4 . ftjowoqghq = 0.0 ; hrxu5rhe3af . cozmdzu0w1 = false ; } else {
o2y45zbt2m4 . ftjowoqghq = hrxu5rhe3af . cozmdzu0w1 ; } } if ( ssIsSampleHit
( rtS , 8 , 0 ) ) { je34obrpzy = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . c1cfxe21zn [ 1 ] * hbv5azo3sw .
PWM1_Period + o2y45zbt2m4 . c1cfxe21zn [ 1 ] * hbv5azo3sw . PWM1_Period ) /
0.1 ) ; if ( muDoubleScalarIsNaN ( je34obrpzy ) || muDoubleScalarIsInf (
je34obrpzy ) ) { je34obrpzy = 0.0 ; } else { je34obrpzy = muDoubleScalarRem (
je34obrpzy , 4.294967296E+9 ) ; } if ( ( ( ( je34obrpzy < 0.0 ? ( uint32_T )
- ( int32_T ) ( uint32_T ) - je34obrpzy : ( uint32_T ) je34obrpzy ) == 0U )
|| ( o2y45zbt2m4 . c1cfxe21zn [ 1 ] <= 0.0 ) ) && hrxu5rhe3af . ae5papqlus )
{ o2y45zbt2m4 . psapwntjo4 = 0.0 ; hrxu5rhe3af . i5keywnlob = false ; } else
{ o2y45zbt2m4 . psapwntjo4 = hrxu5rhe3af . i5keywnlob ; } } if (
ssIsSampleHit ( rtS , 7 , 0 ) ) { je34obrpzy = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . c1cfxe21zn [ 2 ] * hbv5azo3sw .
PWM2_Period + o2y45zbt2m4 . c1cfxe21zn [ 2 ] * hbv5azo3sw . PWM2_Period ) /
0.1 ) ; if ( muDoubleScalarIsNaN ( je34obrpzy ) || muDoubleScalarIsInf (
je34obrpzy ) ) { je34obrpzy = 0.0 ; } else { je34obrpzy = muDoubleScalarRem (
je34obrpzy , 4.294967296E+9 ) ; } if ( ( ( ( je34obrpzy < 0.0 ? ( uint32_T )
- ( int32_T ) ( uint32_T ) - je34obrpzy : ( uint32_T ) je34obrpzy ) == 0U )
|| ( o2y45zbt2m4 . c1cfxe21zn [ 2 ] <= 0.0 ) ) && hrxu5rhe3af . brmqgwecvy )
{ o2y45zbt2m4 . pjlzlhabnw = 0.0 ; hrxu5rhe3af . mp3yltewxi = false ; } else
{ o2y45zbt2m4 . pjlzlhabnw = hrxu5rhe3af . mp3yltewxi ; } } if (
ssIsSampleHit ( rtS , 4 , 0 ) ) { hnpfszi1fh_idx_0 += o2y45zbt2m4 .
ftjowoqghq ; hnpfszi1fh_idx_1 += o2y45zbt2m4 . psapwntjo4 ; hnpfszi1fh_idx_2
+= o2y45zbt2m4 . pjlzlhabnw ; o2y45zbt2m4 . fkulvx00jr [ 0 ] = hbv5azo3sw .
Gain3_Gain_b5qqmritsc * hnpfszi1fh_idx_0 ; o2y45zbt2m4 . fkulvx00jr [ 1 ] =
hbv5azo3sw . Gain3_Gain_b5qqmritsc * hnpfszi1fh_idx_1 ; o2y45zbt2m4 .
fkulvx00jr [ 2 ] = hbv5azo3sw . Gain3_Gain_b5qqmritsc * hnpfszi1fh_idx_2 ; }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { o2y45zbt2m4 . g20nolxhoz [ 0 ] =
o2y45zbt2m4 . fkulvx00jr [ 0 ] ; o2y45zbt2m4 . g20nolxhoz [ 1 ] = o2y45zbt2m4
. fkulvx00jr [ 1 ] ; o2y45zbt2m4 . g20nolxhoz [ 2 ] = o2y45zbt2m4 .
fkulvx00jr [ 2 ] ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { rtPrevAction =
hrxu5rhe3af . dhtgbttn1t ; rtAction = - 1 ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action != 1.0 ) {
rtAction = 0 ; } hrxu5rhe3af . dhtgbttn1t = rtAction ; } else { rtAction =
hrxu5rhe3af . dhtgbttn1t ; } if ( ( rtPrevAction != rtAction ) && (
rtPrevAction == 0 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . dxe5u3tdqf ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
op3ehrh51o ) { case 0 : hiausv0kpy ( rtS ) ; break ; case 1 : iux4nkmqlm (
rtS ) ; break ; } hrxu5rhe3af . op3ehrh51o = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
kma110u0cd ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 : mlwid4sfdn (
rtS ) ; break ; } hrxu5rhe3af . kma110u0cd = - 1 ; break ; } hrxu5rhe3af .
dxe5u3tdqf = - 1 ; } if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { if (
ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { for ( i = 0 ; i < 3 ; i ++ ) { for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { bm12tu02tt [ i + 3 * i_p ] = ( ( diqprhsvnt [ 3 * i + 1 ] *
diqprhsvnt [ 3 * i_p + 1 ] + diqprhsvnt [ 3 * i ] * diqprhsvnt [ 3 * i_p ] )
+ diqprhsvnt [ 3 * i + 2 ] * diqprhsvnt [ 3 * i_p + 2 ] ) + hbv5azo3sw .
Bias1_Bias [ 3 * i_p + i ] ; } } for ( i = 0 ; i < 9 ; i ++ ) { oom1jmjfhv [
i ] = ( muDoubleScalarAbs ( bm12tu02tt [ i ] ) > hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance ) ; } p = oom1jmjfhv [ 0 ] ; for
( i = 0 ; i < 8 ; i ++ ) { p = ( p || oom1jmjfhv [ i + 1 ] ) ; } rtPrevAction
= hrxu5rhe3af . dxe5u3tdqf ; rtAction = - 1 ; if ( muDoubleScalarAbs ( ( ( (
( ( diqprhsvnt [ 0 ] * diqprhsvnt [ 4 ] * diqprhsvnt [ 8 ] - diqprhsvnt [ 0 ]
* diqprhsvnt [ 5 ] * diqprhsvnt [ 7 ] ) - diqprhsvnt [ 1 ] * diqprhsvnt [ 3 ]
* diqprhsvnt [ 8 ] ) + diqprhsvnt [ 2 ] * diqprhsvnt [ 3 ] * diqprhsvnt [ 7 ]
) + diqprhsvnt [ 1 ] * diqprhsvnt [ 5 ] * diqprhsvnt [ 6 ] ) - diqprhsvnt [ 2
] * diqprhsvnt [ 4 ] * diqprhsvnt [ 6 ] ) + hbv5azo3sw . Bias_Bias ) >
hbv5azo3sw . DirectionCosineMatrixtoQuaternions_tolerance ) { rtAction = 0 ;
} else if ( p ) { rtAction = 1 ; } hrxu5rhe3af . dxe5u3tdqf = rtAction ; if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
op3ehrh51o ) { case 0 : hiausv0kpy ( rtS ) ; break ; case 1 : iux4nkmqlm (
rtS ) ; break ; } hrxu5rhe3af . op3ehrh51o = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
kma110u0cd ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 : mlwid4sfdn (
rtS ) ; break ; } hrxu5rhe3af . kma110u0cd = - 1 ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { rtPrevAction = hrxu5rhe3af . op3ehrh51o ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action == 2.0 ) {
rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction = 1 ; }
hrxu5rhe3af . op3ehrh51o = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : hiausv0kpy ( rtS ) ; break ; case 1 :
iux4nkmqlm ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { f3pmeztnvr ( rtS ) ; } bjbtw11222 ( rtS , hbv5azo3sw .
Constant1_Value_oiduqg4pzd , & hrxu5rhe3af . bjbtw11222c ) ; srUpdateBC (
hrxu5rhe3af . bjbtw11222c . lkqtujj5qn ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { dus4amarfa ( rtS ) ; } n0mztpd0lo ( rtS , hbv5azo3sw .
Constant1_Value_oiduqg4pzd , & hrxu5rhe3af . n0mztpd0lov ) ; srUpdateBC (
hrxu5rhe3af . n0mztpd0lov . frt22lnhun ) ; break ; } } srUpdateBC (
hrxu5rhe3af . p31xfuh0e2 ) ; break ; case 1 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { rtPrevAction = hrxu5rhe3af . kma110u0cd ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action == 2.0 ) {
rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction = 1 ; }
hrxu5rhe3af . kma110u0cd = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 :
mlwid4sfdn ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { pwskx14vm4 ( rtS ) ; } pefmh4xzsj ( rtS , hbv5azo3sw .
Constant1_Value_d3rbf1demf , & hrxu5rhe3af . pefmh4xzsjq ) ; srUpdateBC (
hrxu5rhe3af . pefmh4xzsjq . iftxgfmwnh ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { lb5no3bsk0 ( rtS ) ; } hqjl54s2qv ( rtS , hbv5azo3sw .
Constant1_Value_d3rbf1demf , & hrxu5rhe3af . hqjl54s2qvo ) ; srUpdateBC (
hrxu5rhe3af . hqjl54s2qvo . cz2sd5ks45 ) ; break ; } } srUpdateBC (
hrxu5rhe3af . enqbz4gbik ) ; break ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( hrxu5rhe3af . dclbaaw1uo ) ; } } } p = ssGetIsOkayToUpdateMode (
rtS ) ; if ( p ) { if ( hrxu5rhe3af . irqzxzls3s != 0 ) { n1mubcupv31 .
ezm2ooaqjl [ 0 ] = o2y45zbt2m4 . amepcbkksg [ 0 ] ; n1mubcupv31 . ezm2ooaqjl
[ 1 ] = o2y45zbt2m4 . amepcbkksg [ 1 ] ; n1mubcupv31 . ezm2ooaqjl [ 2 ] =
o2y45zbt2m4 . amepcbkksg [ 2 ] ; } pygfqx1xx2 [ 0 ] = n1mubcupv31 .
ezm2ooaqjl [ 0 ] ; pygfqx1xx2 [ 1 ] = n1mubcupv31 . ezm2ooaqjl [ 1 ] ;
pygfqx1xx2 [ 2 ] = n1mubcupv31 . ezm2ooaqjl [ 2 ] ; } else { pygfqx1xx2 [ 0 ]
= n1mubcupv31 . ezm2ooaqjl [ 0 ] ; pygfqx1xx2 [ 1 ] = n1mubcupv31 .
ezm2ooaqjl [ 1 ] ; pygfqx1xx2 [ 2 ] = n1mubcupv31 . ezm2ooaqjl [ 2 ] ; }
dj1oda5ydb_idx_0 = hbv5azo3sw . Gain_Gain_cpl3z33sd4 * pygfqx1xx2 [ 0 ] ;
dj1oda5ydb_idx_1 = hbv5azo3sw . Gain_Gain_cpl3z33sd4 * pygfqx1xx2 [ 1 ] ;
dj1oda5ydb_idx_2 = hbv5azo3sw . Gain_Gain_cpl3z33sd4 * pygfqx1xx2 [ 2 ] ;
ppzvhrji5y = ( pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] *
pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . dnqubg5s4k != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . dnqubg5s4k
= 0 ; } isbrvx1pyk = muDoubleScalarSqrt ( ppzvhrji5y ) ; } else if (
ppzvhrji5y < 0.0 ) { isbrvx1pyk = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ppzvhrji5y ) ) ; hrxu5rhe3af . dnqubg5s4k = 1 ; } else { isbrvx1pyk =
muDoubleScalarSqrt ( ppzvhrji5y ) ; } ppzvhrji5y = 1.0 / ( isbrvx1pyk *
isbrvx1pyk ) / isbrvx1pyk * o2y45zbt2m4 . culrexdnyf ; hnpfszi1fh_idx_0 =
pygfqx1xx2 [ 0 ] / isbrvx1pyk ; hnpfszi1fh_idx_1 = pygfqx1xx2 [ 1 ] /
isbrvx1pyk ; hnpfszi1fh_idx_2 = pygfqx1xx2 [ 2 ] / isbrvx1pyk ; isbrvx1pyk =
( ( k1qmoe0iaw * k1qmoe0iaw + eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 ) +
eujiwcy0tl_idx_2 * eujiwcy0tl_idx_2 ) + nm4t0wvumv * nm4t0wvumv ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . bze1flsb15 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . bze1flsb15
= 0 ; } je34obrpzy = muDoubleScalarSqrt ( isbrvx1pyk ) ; } else if (
isbrvx1pyk < 0.0 ) { je34obrpzy = - muDoubleScalarSqrt ( muDoubleScalarAbs (
isbrvx1pyk ) ) ; hrxu5rhe3af . bze1flsb15 = 1 ; } else { je34obrpzy =
muDoubleScalarSqrt ( isbrvx1pyk ) ; } isbrvx1pyk = eujiwcy0tl_idx_0 /
je34obrpzy ; a3vh3pqf0p = eujiwcy0tl_idx_2 / je34obrpzy ; dpudqxqih0 =
k1qmoe0iaw / je34obrpzy ; jimsqf3sjt = nm4t0wvumv / je34obrpzy ; je34obrpzy =
( ( ( hbv5azo3sw . Constant_Value_lxx0buxvfk - isbrvx1pyk * isbrvx1pyk ) -
jimsqf3sjt * jimsqf3sjt ) * hbv5azo3sw . Gain2_Gain_n32pjfxnui *
hnpfszi1fh_idx_1 + ( isbrvx1pyk * a3vh3pqf0p - dpudqxqih0 * jimsqf3sjt ) *
hbv5azo3sw . Gain_Gain_cf5hb10y5x * hnpfszi1fh_idx_0 ) + ( dpudqxqih0 *
isbrvx1pyk + a3vh3pqf0p * jimsqf3sjt ) * hbv5azo3sw . Gain1_Gain_gwlrw1w2b3 *
hnpfszi1fh_idx_2 ; eujiwcy0tl_idx_3 = ( ( isbrvx1pyk * jimsqf3sjt +
dpudqxqih0 * a3vh3pqf0p ) * hbv5azo3sw . Gain_Gain_efnax0y1dx *
hnpfszi1fh_idx_0 + ( a3vh3pqf0p * jimsqf3sjt - dpudqxqih0 * isbrvx1pyk ) *
hbv5azo3sw . Gain1_Gain_ddeccjfmea * hnpfszi1fh_idx_1 ) + ( ( hbv5azo3sw .
Constant_Value_a2jieicat5 - isbrvx1pyk * isbrvx1pyk ) - a3vh3pqf0p *
a3vh3pqf0p ) * hbv5azo3sw . Gain2_Gain_g2ebct4dqc * hnpfszi1fh_idx_2 ;
isbrvx1pyk = ( ( ( hbv5azo3sw . Constant_Value_bpdqgjnrbi - a3vh3pqf0p *
a3vh3pqf0p ) - jimsqf3sjt * jimsqf3sjt ) * hbv5azo3sw . Gain2_Gain_cko11epp5n
* hnpfszi1fh_idx_0 + ( isbrvx1pyk * a3vh3pqf0p + dpudqxqih0 * jimsqf3sjt ) *
hbv5azo3sw . Gain_Gain_cjicctxqb2 * hnpfszi1fh_idx_1 ) + ( isbrvx1pyk *
jimsqf3sjt - dpudqxqih0 * a3vh3pqf0p ) * hbv5azo3sw . Gain1_Gain_nieh11pzcd *
hnpfszi1fh_idx_2 ; hnpfszi1fh_idx_0 = o2y45zbt2m4 . ambhfazf2y [ 0 ] *
je34obrpzy * eujiwcy0tl_idx_3 * ppzvhrji5y ; hnpfszi1fh_idx_1 = o2y45zbt2m4 .
ambhfazf2y [ 1 ] * eujiwcy0tl_idx_3 * isbrvx1pyk * ppzvhrji5y ;
hnpfszi1fh_idx_2 = o2y45zbt2m4 . ambhfazf2y [ 2 ] * isbrvx1pyk * je34obrpzy *
ppzvhrji5y ; ppzvhrji5y = ( pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2
[ 1 ] * pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . pidbwsidci != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . pidbwsidci
= 0 ; } o2y45zbt2m4 . ggrj4lwkdq = muDoubleScalarSqrt ( ppzvhrji5y ) ; } else
if ( ppzvhrji5y < 0.0 ) { o2y45zbt2m4 . ggrj4lwkdq = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ppzvhrji5y ) ) ; hrxu5rhe3af . pidbwsidci = 1 ; } else {
o2y45zbt2m4 . ggrj4lwkdq = muDoubleScalarSqrt ( ppzvhrji5y ) ; } b5inmoahfl [
0 ] = pygfqx1xx2 [ 0 ] / o2y45zbt2m4 . ggrj4lwkdq ; b5inmoahfl [ 1 ] =
pygfqx1xx2 [ 1 ] / o2y45zbt2m4 . ggrj4lwkdq ; b5inmoahfl [ 2 ] = pygfqx1xx2 [
2 ] / o2y45zbt2m4 . ggrj4lwkdq ; ppzvhrji5y = b5inmoahfl [ 0 ] * b5inmoahfl [
0 ] + b5inmoahfl [ 1 ] * b5inmoahfl [ 1 ] ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( hrxu5rhe3af . ji1vknz2dr != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ji1vknz2dr
= 0 ; } isbrvx1pyk = muDoubleScalarSqrt ( ppzvhrji5y ) ; } else if (
ppzvhrji5y < 0.0 ) { isbrvx1pyk = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ppzvhrji5y ) ) ; hrxu5rhe3af . ji1vknz2dr = 1 ; } else { isbrvx1pyk =
muDoubleScalarSqrt ( ppzvhrji5y ) ; } o2y45zbt2m4 . jjuwpyarp5 =
muDoubleScalarAtan2 ( isbrvx1pyk , b5inmoahfl [ 2 ] ) ; a3vh3pqf0p =
muDoubleScalarAtan2 ( b5inmoahfl [ 1 ] , b5inmoahfl [ 0 ] ) ; o2y45zbt2m4 .
nyoyhdwzhr = a3vh3pqf0p - 6.2831853071795862 / rtP_Earth . siderealDay *
ssGetT ( rtS ) ; MagneticFieldInPolarCoords ( & o2y45zbt2m4 . ggrj4lwkdq , &
o2y45zbt2m4 . jjuwpyarp5 , & o2y45zbt2m4 . nyoyhdwzhr , & rtP_Earth .
equatorialRadius , & o2y45zbt2m4 . mfc3g102pw [ 0 ] ) ; isbrvx1pyk =
hbv5azo3sw . Gain_Gain_m4jtdwqsx1 * o2y45zbt2m4 . jjuwpyarp5 ; ppzvhrji5y =
muDoubleScalarCos ( isbrvx1pyk ) ; dpudqxqih0 = hbv5azo3sw .
Gain_Gain_cnryscy0x5 * a3vh3pqf0p ; a3vh3pqf0p = muDoubleScalarSin (
dpudqxqih0 ) ; dpudqxqih0 = muDoubleScalarCos ( dpudqxqih0 ) ; isbrvx1pyk =
muDoubleScalarSin ( isbrvx1pyk ) ; i541kjwyuc [ 0 ] = ( ppzvhrji5y *
hbv5azo3sw . Constant_Value_hrofb0v0v5 + dpudqxqih0 * hbv5azo3sw .
Constant_Value_ekkpqgqspn ) + ( isbrvx1pyk * a3vh3pqf0p - hbv5azo3sw .
Constant_Value_ekkpqgqspn * hbv5azo3sw . Constant_Value_hrofb0v0v5 ) ;
gev4djbpks [ 0 ] = i541kjwyuc [ 0 ] ; eujiwcy0tl_idx_1 = ( ( ppzvhrji5y *
hbv5azo3sw . Constant_Value_hrofb0v0v5 + dpudqxqih0 * isbrvx1pyk ) + (
hbv5azo3sw . Constant_Value_ekkpqgqspn * hbv5azo3sw .
Constant_Value_hrofb0v0v5 - hbv5azo3sw . Constant_Value_ekkpqgqspn *
a3vh3pqf0p ) ) * hbv5azo3sw . Gain_Gain_flpxquj1at ; gev4djbpks [ 1 ] =
eujiwcy0tl_idx_1 ; eujiwcy0tl_idx_3 = eujiwcy0tl_idx_1 ; eujiwcy0tl_idx_1 = (
( ppzvhrji5y * a3vh3pqf0p + dpudqxqih0 * hbv5azo3sw .
Constant_Value_ekkpqgqspn ) + ( hbv5azo3sw . Constant_Value_ekkpqgqspn *
hbv5azo3sw . Constant_Value_hrofb0v0v5 - isbrvx1pyk * hbv5azo3sw .
Constant_Value_hrofb0v0v5 ) ) * hbv5azo3sw . Gain_Gain_flpxquj1at ;
ppzvhrji5y = ppzvhrji5y * dpudqxqih0 - ( ( hbv5azo3sw .
Constant_Value_ekkpqgqspn * hbv5azo3sw . Constant_Value_hrofb0v0v5 +
isbrvx1pyk * hbv5azo3sw . Constant_Value_hrofb0v0v5 ) + hbv5azo3sw .
Constant_Value_ekkpqgqspn * a3vh3pqf0p ) ; jimsqf3sjt = nm4t0wvumv *
i541kjwyuc [ 0 ] ; je34obrpzy = eujiwcy0tl_idx_2 * i541kjwyuc [ 0 ] ;
i541kjwyuc [ 0 ] = ( k1qmoe0iaw * i541kjwyuc [ 0 ] + ppzvhrji5y *
eujiwcy0tl_idx_0 ) + ( eujiwcy0tl_idx_2 * eujiwcy0tl_idx_1 - nm4t0wvumv *
eujiwcy0tl_idx_3 ) ; i541kjwyuc [ 1 ] = ( k1qmoe0iaw * gev4djbpks [ 1 ] +
ppzvhrji5y * eujiwcy0tl_idx_2 ) + ( jimsqf3sjt - eujiwcy0tl_idx_0 *
eujiwcy0tl_idx_1 ) ; i541kjwyuc [ 2 ] = ( k1qmoe0iaw * eujiwcy0tl_idx_1 +
ppzvhrji5y * nm4t0wvumv ) + ( eujiwcy0tl_idx_0 * eujiwcy0tl_idx_3 -
je34obrpzy ) ; a3vh3pqf0p = k1qmoe0iaw * ppzvhrji5y - ( ( eujiwcy0tl_idx_0 *
gev4djbpks [ 0 ] + eujiwcy0tl_idx_2 * gev4djbpks [ 1 ] ) + nm4t0wvumv *
eujiwcy0tl_idx_1 ) ; ppzvhrji5y = ( ( a3vh3pqf0p * a3vh3pqf0p + i541kjwyuc [
0 ] * i541kjwyuc [ 0 ] ) + i541kjwyuc [ 1 ] * i541kjwyuc [ 1 ] ) + i541kjwyuc
[ 2 ] * i541kjwyuc [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . gltmjlakux != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . gltmjlakux = 0 ; } dpudqxqih0 = muDoubleScalarSqrt (
ppzvhrji5y ) ; } else if ( ppzvhrji5y < 0.0 ) { dpudqxqih0 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( ppzvhrji5y ) ) ; hrxu5rhe3af .
gltmjlakux = 1 ; } else { dpudqxqih0 = muDoubleScalarSqrt ( ppzvhrji5y ) ; }
ppzvhrji5y = i541kjwyuc [ 0 ] / dpudqxqih0 ; isbrvx1pyk = i541kjwyuc [ 2 ] /
dpudqxqih0 ; a3vh3pqf0p /= dpudqxqih0 ; eujiwcy0tl_idx_3 = i541kjwyuc [ 1 ] /
dpudqxqih0 ; dpudqxqih0 = ( ( ppzvhrji5y * isbrvx1pyk + a3vh3pqf0p *
eujiwcy0tl_idx_3 ) * hbv5azo3sw . Gain_Gain_fsocaetgdj * o2y45zbt2m4 .
mfc3g102pw [ 0 ] + ( eujiwcy0tl_idx_3 * isbrvx1pyk - a3vh3pqf0p * ppzvhrji5y
) * hbv5azo3sw . Gain1_Gain_igcxviai5g * o2y45zbt2m4 . mfc3g102pw [ 1 ] ) + (
( hbv5azo3sw . Constant_Value_nfqnghygav - ppzvhrji5y * ppzvhrji5y ) -
eujiwcy0tl_idx_3 * eujiwcy0tl_idx_3 ) * hbv5azo3sw . Gain2_Gain_mcrod3aisq *
o2y45zbt2m4 . mfc3g102pw [ 2 ] ; je34obrpzy = ( ( ( hbv5azo3sw .
Constant_Value_ollq4x5vyn - eujiwcy0tl_idx_3 * eujiwcy0tl_idx_3 ) -
isbrvx1pyk * isbrvx1pyk ) * hbv5azo3sw . Gain2_Gain_d0aeb3inpf * o2y45zbt2m4
. mfc3g102pw [ 0 ] + ( ppzvhrji5y * eujiwcy0tl_idx_3 + a3vh3pqf0p *
isbrvx1pyk ) * hbv5azo3sw . Gain_Gain_avgts0xajn * o2y45zbt2m4 . mfc3g102pw [
1 ] ) + ( ppzvhrji5y * isbrvx1pyk - a3vh3pqf0p * eujiwcy0tl_idx_3 ) *
hbv5azo3sw . Gain1_Gain_pfgznzxep3 * o2y45zbt2m4 . mfc3g102pw [ 2 ] ;
ppzvhrji5y = ( ( ( hbv5azo3sw . Constant_Value_jelrytb22b - ppzvhrji5y *
ppzvhrji5y ) - isbrvx1pyk * isbrvx1pyk ) * hbv5azo3sw . Gain2_Gain_jbi3ws3ahy
* o2y45zbt2m4 . mfc3g102pw [ 1 ] + ( ppzvhrji5y * eujiwcy0tl_idx_3 -
a3vh3pqf0p * isbrvx1pyk ) * hbv5azo3sw . Gain_Gain_l4qk2foong * o2y45zbt2m4 .
mfc3g102pw [ 0 ] ) + ( a3vh3pqf0p * ppzvhrji5y + eujiwcy0tl_idx_3 *
isbrvx1pyk ) * hbv5azo3sw . Gain1_Gain_b2dtklqw2b * o2y45zbt2m4 . mfc3g102pw
[ 2 ] ; eujiwcy0tl_idx_3 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] * dpudqxqih0 ;
jimsqf3sjt = hbv5azo3sw . Spacecraftmagneticdipolebodyreferenceframe_Value [
2 ] * je34obrpzy ; eujiwcy0tl_idx_1 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * ppzvhrji5y ;
i14mskwis2 = hbv5azo3sw . Spacecraftmagneticdipolebodyreferenceframe_Value [
2 ] * ppzvhrji5y ; a5zs2cqer4_idx_4 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * dpudqxqih0 ;
je34obrpzy *= hbv5azo3sw . Spacecraftmagneticdipolebodyreferenceframe_Value [
1 ] ; p = ssGetIsOkayToUpdateMode ( rtS ) ; if ( p ) { if ( hrxu5rhe3af .
febtg0cpg5 != 0 ) { n1mubcupv31 . cjfebnqw1p = o2y45zbt2m4 . hckf2ailv0 ; }
ppzvhrji5y = n1mubcupv31 . cjfebnqw1p ; } else { ppzvhrji5y = n1mubcupv31 .
cjfebnqw1p ; } isbrvx1pyk = o2y45zbt2m4 . mrzwmqiqje / ( hbv5azo3sw . e_Value
* muDoubleScalarCos ( ppzvhrji5y ) + hbv5azo3sw . Constant_Value_azddlyivju )
; a3vh3pqf0p = muDoubleScalarCos ( ppzvhrji5y ) ; dpudqxqih0 =
muDoubleScalarSin ( ppzvhrji5y ) ; o2y45zbt2m4 . fj4e2b5bch [ 0 ] = ( (
a3vh3pqf0p * o2y45zbt2m4 . ightd03wbw + o2y45zbt2m4 . kyx4elghw5 * dpudqxqih0
) + o2y45zbt2m4 . boco0ydrhx ) * hbv5azo3sw . Gain1_Gain_csudgssrcg *
isbrvx1pyk - pygfqx1xx2 [ 0 ] ; o2y45zbt2m4 . fj4e2b5bch [ 1 ] = ( (
a3vh3pqf0p * o2y45zbt2m4 . kgibrayejc + o2y45zbt2m4 . klod4yztvz * dpudqxqih0
) + o2y45zbt2m4 . gr0fttz1x3 ) * hbv5azo3sw . Gain1_Gain_csudgssrcg *
isbrvx1pyk - pygfqx1xx2 [ 1 ] ; o2y45zbt2m4 . fj4e2b5bch [ 2 ] = ( (
a3vh3pqf0p * o2y45zbt2m4 . lj2hsiefmb + o2y45zbt2m4 . pqwrcdv51y * dpudqxqih0
) + o2y45zbt2m4 . gkj1c4ecpo ) * hbv5azo3sw . Gain1_Gain_csudgssrcg *
isbrvx1pyk - pygfqx1xx2 [ 2 ] ; a3vh3pqf0p = ( ( k1qmoe0iaw * k1qmoe0iaw +
eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 ) + eujiwcy0tl_idx_2 * eujiwcy0tl_idx_2 )
+ nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . ojltdhe2we != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . ojltdhe2we = 0 ; } isbrvx1pyk = muDoubleScalarSqrt (
a3vh3pqf0p ) ; } else if ( a3vh3pqf0p < 0.0 ) { isbrvx1pyk = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( a3vh3pqf0p ) ) ; hrxu5rhe3af .
ojltdhe2we = 1 ; } else { isbrvx1pyk = muDoubleScalarSqrt ( a3vh3pqf0p ) ; }
eujiwcy0tl_idx_2 /= isbrvx1pyk ; nm4t0wvumv /= isbrvx1pyk ; eujiwcy0tl_idx_0
/= isbrvx1pyk ; k1qmoe0iaw /= isbrvx1pyk ; o2y45zbt2m4 . k2zlzdldai [ 0 ] = (
( ( hbv5azo3sw . Constant_Value_hn3g4e2bdf - eujiwcy0tl_idx_2 *
eujiwcy0tl_idx_2 ) - nm4t0wvumv * nm4t0wvumv ) * hbv5azo3sw .
Gain2_Gain_nben4kjacq * o2y45zbt2m4 . fj4e2b5bch [ 0 ] + ( eujiwcy0tl_idx_0 *
eujiwcy0tl_idx_2 + k1qmoe0iaw * nm4t0wvumv ) * hbv5azo3sw .
Gain_Gain_kewyutalpa * o2y45zbt2m4 . fj4e2b5bch [ 1 ] ) + ( eujiwcy0tl_idx_0
* nm4t0wvumv - k1qmoe0iaw * eujiwcy0tl_idx_2 ) * hbv5azo3sw .
Gain1_Gain_e5ngzsvcli * o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; o2y45zbt2m4 .
k2zlzdldai [ 1 ] = ( ( ( hbv5azo3sw . Constant_Value_cinqqywm1t -
eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 ) - nm4t0wvumv * nm4t0wvumv ) *
hbv5azo3sw . Gain2_Gain_d4fbbaxwpd * o2y45zbt2m4 . fj4e2b5bch [ 1 ] + (
eujiwcy0tl_idx_0 * eujiwcy0tl_idx_2 - k1qmoe0iaw * nm4t0wvumv ) * hbv5azo3sw
. Gain_Gain_fouuav1ki1 * o2y45zbt2m4 . fj4e2b5bch [ 0 ] ) + ( k1qmoe0iaw *
eujiwcy0tl_idx_0 + eujiwcy0tl_idx_2 * nm4t0wvumv ) * hbv5azo3sw .
Gain1_Gain_lq4olh4tnx * o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; o2y45zbt2m4 .
k2zlzdldai [ 2 ] = ( ( eujiwcy0tl_idx_0 * nm4t0wvumv + k1qmoe0iaw *
eujiwcy0tl_idx_2 ) * hbv5azo3sw . Gain_Gain_kc1cpqscqf * o2y45zbt2m4 .
fj4e2b5bch [ 0 ] + ( eujiwcy0tl_idx_2 * nm4t0wvumv - k1qmoe0iaw *
eujiwcy0tl_idx_0 ) * hbv5azo3sw . Gain1_Gain_n4q3gythod * o2y45zbt2m4 .
fj4e2b5bch [ 1 ] ) + ( ( hbv5azo3sw . Constant_Value_aglfz4cib2 -
eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 ) - eujiwcy0tl_idx_2 * eujiwcy0tl_idx_2 )
* hbv5azo3sw . Gain2_Gain_arhr50dupm * o2y45zbt2m4 . fj4e2b5bch [ 2 ] ;
k1qmoe0iaw = ( o2y45zbt2m4 . k2zlzdldai [ 0 ] * o2y45zbt2m4 . k2zlzdldai [ 0
] + o2y45zbt2m4 . k2zlzdldai [ 1 ] * o2y45zbt2m4 . k2zlzdldai [ 1 ] ) +
o2y45zbt2m4 . k2zlzdldai [ 2 ] * o2y45zbt2m4 . k2zlzdldai [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . pwifaixjxb != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . pwifaixjxb
= 0 ; } eujiwcy0tl_idx_0 = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } else if (
k1qmoe0iaw < 0.0 ) { eujiwcy0tl_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( k1qmoe0iaw ) ) ; hrxu5rhe3af . pwifaixjxb = 1 ; } else {
eujiwcy0tl_idx_0 = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } k1qmoe0iaw =
rtP_Const . AU_1 / eujiwcy0tl_idx_0 ; k1qmoe0iaw = k1qmoe0iaw * k1qmoe0iaw *
o2y45zbt2m4 . mvnud1uzgl ; gev4djbpks [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ]
/ eujiwcy0tl_idx_0 ; b5inmoahfl [ 0 ] = 0.0 ; gev4djbpks [ 1 ] = o2y45zbt2m4
. k2zlzdldai [ 1 ] / eujiwcy0tl_idx_0 ; b5inmoahfl [ 1 ] = 0.0 ; gev4djbpks [
2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] / eujiwcy0tl_idx_0 ; b5inmoahfl [ 2 ] =
0.0 ; for ( i = 0 ; i < 10 ; i ++ ) { nm4t0wvumv = b [ i ] ; eujiwcy0tl_idx_2
= ( rtP_Spacecraft . surfaces_normalToSurface [ 3 * i + 1 ] * gev4djbpks [ 1
] + rtP_Spacecraft . surfaces_normalToSurface [ 3 * i ] * gev4djbpks [ 0 ] )
+ rtP_Spacecraft . surfaces_normalToSurface [ 3 * i + 2 ] * gev4djbpks [ 2 ]
; if ( eujiwcy0tl_idx_2 > 0.0 ) { eujiwcy0tl_idx_0 = 2.0 * nm4t0wvumv *
eujiwcy0tl_idx_2 + 0.066666666666666666 ; eujiwcy0tl_idx_2 *= - k1qmoe0iaw *
rtP_Spacecraft . surfaces_area [ i ] ; omtubbfcif [ 0 ] = ( ( 1.0 -
nm4t0wvumv ) * gev4djbpks [ 0 ] + rtP_Spacecraft . surfaces_normalToSurface [
3 * i ] * eujiwcy0tl_idx_0 ) * eujiwcy0tl_idx_2 ; i541kjwyuc [ 0 ] =
rtP_Spacecraft . surfaces_position [ 3 * i ] + rtP_Spacecraft .
geometricCenter [ 0 ] ; omtubbfcif [ 1 ] = ( rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 1 ] * eujiwcy0tl_idx_0 + ( 1.0 -
nm4t0wvumv ) * gev4djbpks [ 1 ] ) * eujiwcy0tl_idx_2 ; i541kjwyuc [ 1 ] =
rtP_Spacecraft . surfaces_position [ 3 * i + 1 ] + rtP_Spacecraft .
geometricCenter [ 1 ] ; omtubbfcif [ 2 ] = ( rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * eujiwcy0tl_idx_0 + ( 1.0 -
nm4t0wvumv ) * gev4djbpks [ 2 ] ) * eujiwcy0tl_idx_2 ; i541kjwyuc [ 2 ] =
rtP_Spacecraft . surfaces_position [ 3 * i + 2 ] + rtP_Spacecraft .
geometricCenter [ 2 ] ; isbrvx1pyk = b5inmoahfl [ 0 ] ; nm4t0wvumv =
b5inmoahfl [ 1 ] ; eujiwcy0tl_idx_0 = b5inmoahfl [ 2 ] ; b5inmoahfl [ 0 ] = (
i541kjwyuc [ 1 ] * omtubbfcif [ 2 ] - omtubbfcif [ 1 ] * i541kjwyuc [ 2 ] ) +
isbrvx1pyk ; b5inmoahfl [ 1 ] = ( omtubbfcif [ 0 ] * i541kjwyuc [ 2 ] -
i541kjwyuc [ 0 ] * omtubbfcif [ 2 ] ) + nm4t0wvumv ; b5inmoahfl [ 2 ] = (
i541kjwyuc [ 0 ] * omtubbfcif [ 1 ] - omtubbfcif [ 0 ] * i541kjwyuc [ 1 ] ) +
eujiwcy0tl_idx_0 ; } } hnpfszi1fh_idx_0 = ( hnpfszi1fh_idx_0 + b5inmoahfl [ 0
] ) + ( eujiwcy0tl_idx_3 - i14mskwis2 ) ; hnpfszi1fh_idx_1 = (
hnpfszi1fh_idx_1 + b5inmoahfl [ 1 ] ) + ( jimsqf3sjt - a5zs2cqer4_idx_4 ) ;
o2y45zbt2m4 . jg5xwtwjpe [ 0 ] = ( o2y45zbt2m4 . h20zeizqdi [ 1 ] *
o2y45zbt2m4 . h20zeizqdi [ 2 ] * o2y45zbt2m4 . jq2aut2ijb [ 0 ] + (
hnpfszi1fh_idx_0 + o2y45zbt2m4 . fkulvx00jr [ 0 ] ) ) / hbv5azo3sw .
Inertia_Value [ 0 ] ; o2y45zbt2m4 . jg5xwtwjpe [ 1 ] = ( o2y45zbt2m4 .
h20zeizqdi [ 0 ] * o2y45zbt2m4 . h20zeizqdi [ 2 ] * o2y45zbt2m4 . jq2aut2ijb
[ 1 ] + ( hnpfszi1fh_idx_1 + o2y45zbt2m4 . fkulvx00jr [ 1 ] ) ) / hbv5azo3sw
. Inertia_Value [ 1 ] ; o2y45zbt2m4 . jg5xwtwjpe [ 2 ] = ( ( ( (
hnpfszi1fh_idx_2 + b5inmoahfl [ 2 ] ) + ( eujiwcy0tl_idx_1 - je34obrpzy ) ) +
o2y45zbt2m4 . fkulvx00jr [ 2 ] ) + o2y45zbt2m4 . h20zeizqdi [ 0 ] *
o2y45zbt2m4 . h20zeizqdi [ 1 ] * o2y45zbt2m4 . jq2aut2ijb [ 2 ] ) /
hbv5azo3sw . Inertia_Value [ 2 ] ; l4cpq010qq [ 0 ] = 0.0 ; l4cpq010qq [ 4 ]
= - o2y45zbt2m4 . h20zeizqdi [ 0 ] ; l4cpq010qq [ 8 ] = - o2y45zbt2m4 .
h20zeizqdi [ 1 ] ; l4cpq010qq [ 12 ] = - o2y45zbt2m4 . h20zeizqdi [ 2 ] ;
l4cpq010qq [ 1 ] = 0.0 ; l4cpq010qq [ 5 ] = 0.0 ; l4cpq010qq [ 9 ] =
o2y45zbt2m4 . h20zeizqdi [ 2 ] ; l4cpq010qq [ 13 ] = - o2y45zbt2m4 .
h20zeizqdi [ 1 ] ; l4cpq010qq [ 2 ] = 0.0 ; l4cpq010qq [ 6 ] = 0.0 ;
l4cpq010qq [ 10 ] = 0.0 ; l4cpq010qq [ 14 ] = o2y45zbt2m4 . h20zeizqdi [ 0 ]
; l4cpq010qq [ 3 ] = 0.0 ; l4cpq010qq [ 7 ] = 0.0 ; l4cpq010qq [ 11 ] = 0.0 ;
l4cpq010qq [ 15 ] = 0.0 ; for ( i = 0 ; i < 4 ; i ++ ) { jdjm5atqpq [ i << 2
] = l4cpq010qq [ i << 2 ] - l4cpq010qq [ i ] ; jdjm5atqpq [ ( i << 2 ) + 1 ]
= l4cpq010qq [ ( i << 2 ) + 1 ] - l4cpq010qq [ i + 4 ] ; jdjm5atqpq [ ( i <<
2 ) + 2 ] = l4cpq010qq [ ( i << 2 ) + 2 ] - l4cpq010qq [ i + 8 ] ; jdjm5atqpq
[ ( i << 2 ) + 3 ] = l4cpq010qq [ ( i << 2 ) + 3 ] - l4cpq010qq [ i + 12 ] ;
} memcpy ( & l4cpq010qq [ 0 ] , & jdjm5atqpq [ 0 ] , sizeof ( real_T ) << 4U
) ; for ( i = 0 ; i <= 2 ; i += 2 ) { _mm_storeu_pd ( & o2y45zbt2m4 .
bwu3hh5pg3 [ i ] , _mm_set1_pd ( 0.0 ) ) ; tmp_p = _mm_loadu_pd ( &
l4cpq010qq [ i ] ) ; tmp_e = _mm_loadu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ i ]
) ; _mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ i ] , _mm_add_pd (
_mm_mul_pd ( _mm_mul_pd ( _mm_set1_pd ( hbv5azo3sw . Gain1_Gain_objsqoebrs )
, tmp_p ) , _mm_set1_pd ( o2y45zbt2m4 . f2fo4aztpb [ 0 ] ) ) , tmp_e ) ) ;
tmp_p = _mm_loadu_pd ( & l4cpq010qq [ i + 4 ] ) ; tmp_e = _mm_loadu_pd ( &
o2y45zbt2m4 . bwu3hh5pg3 [ i ] ) ; _mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3
[ i ] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd (
hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd ( o2y45zbt2m4 .
f2fo4aztpb [ 1 ] ) ) , tmp_e ) ) ; tmp_p = _mm_loadu_pd ( & l4cpq010qq [ i +
8 ] ) ; tmp_e = _mm_loadu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ i ] ) ;
_mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ i ] , _mm_add_pd ( _mm_mul_pd (
_mm_mul_pd ( tmp_p , _mm_set1_pd ( hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) ,
_mm_set1_pd ( o2y45zbt2m4 . f2fo4aztpb [ 2 ] ) ) , tmp_e ) ) ; tmp_p =
_mm_loadu_pd ( & l4cpq010qq [ i + 12 ] ) ; tmp_e = _mm_loadu_pd ( &
o2y45zbt2m4 . bwu3hh5pg3 [ i ] ) ; _mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3
[ i ] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_p , _mm_set1_pd (
hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd ( o2y45zbt2m4 .
f2fo4aztpb [ 3 ] ) ) , tmp_e ) ) ; } k1qmoe0iaw = hbv5azo3sw . e_Value *
muDoubleScalarCos ( ppzvhrji5y ) + hbv5azo3sw . Constant1_Value_lvvzxuwh5z ;
o2y45zbt2m4 . iunb01rvwp = 1.0 / o2y45zbt2m4 . bfud51xipp * o2y45zbt2m4 .
kp1mzqwbu3 * ( k1qmoe0iaw * k1qmoe0iaw ) ; p = ssGetIsOkayToUpdateMode ( rtS
) ; if ( p ) { if ( hrxu5rhe3af . g0uzej5lf1 != 0 ) { n1mubcupv31 .
li1obxdvy3 [ 0 ] = o2y45zbt2m4 . fi1wde2gl2 [ 0 ] ; n1mubcupv31 . li1obxdvy3
[ 1 ] = o2y45zbt2m4 . fi1wde2gl2 [ 1 ] ; n1mubcupv31 . li1obxdvy3 [ 2 ] =
o2y45zbt2m4 . fi1wde2gl2 [ 2 ] ; } o2y45zbt2m4 . hnvlhc15na [ 0 ] =
n1mubcupv31 . li1obxdvy3 [ 0 ] ; o2y45zbt2m4 . hnvlhc15na [ 1 ] = n1mubcupv31
. li1obxdvy3 [ 1 ] ; o2y45zbt2m4 . hnvlhc15na [ 2 ] = n1mubcupv31 .
li1obxdvy3 [ 2 ] ; } else { o2y45zbt2m4 . hnvlhc15na [ 0 ] = n1mubcupv31 .
li1obxdvy3 [ 0 ] ; o2y45zbt2m4 . hnvlhc15na [ 1 ] = n1mubcupv31 . li1obxdvy3
[ 1 ] ; o2y45zbt2m4 . hnvlhc15na [ 2 ] = n1mubcupv31 . li1obxdvy3 [ 2 ] ; }
k1qmoe0iaw = ( pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] *
pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . haxpv4vq51 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . haxpv4vq51
= 0 ; } eujiwcy0tl_idx_0 = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } else if (
k1qmoe0iaw < 0.0 ) { eujiwcy0tl_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( k1qmoe0iaw ) ) ; hrxu5rhe3af . haxpv4vq51 = 1 ; } else {
eujiwcy0tl_idx_0 = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } k1qmoe0iaw =
eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 ; k1qmoe0iaw = rtP_Earth . J2 * rtP_Earth
. mu * o2y45zbt2m4 . ltnksa0t1k / ( k1qmoe0iaw * k1qmoe0iaw ) * hbv5azo3sw .
Gain_Gain_ij5ephcub4 ; gev4djbpks [ 0 ] = pygfqx1xx2 [ 0 ] / eujiwcy0tl_idx_0
; gev4djbpks [ 1 ] = pygfqx1xx2 [ 1 ] / eujiwcy0tl_idx_0 ; gev4djbpks [ 2 ] =
pygfqx1xx2 [ 2 ] / eujiwcy0tl_idx_0 ; eujiwcy0tl_idx_0 = hbv5azo3sw .
Gain1_Gain_fos5u53xa3 * gev4djbpks [ 2 ] ; eujiwcy0tl_idx_2 =
eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 ; eujiwcy0tl_idx_0 = eujiwcy0tl_idx_2 -
hbv5azo3sw . Constant4_Value ; eujiwcy0tl_idx_2 = ( eujiwcy0tl_idx_2 -
hbv5azo3sw . Constant3_Value_aiagav1bu5 ) * gev4djbpks [ 2 ] ; ppzvhrji5y = (
pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) +
pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . hxjxms0byf != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . hxjxms0byf = 0 ; } nm4t0wvumv = muDoubleScalarSqrt (
ppzvhrji5y ) ; } else if ( ppzvhrji5y < 0.0 ) { nm4t0wvumv = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( ppzvhrji5y ) ) ; hrxu5rhe3af .
hxjxms0byf = 1 ; } else { nm4t0wvumv = muDoubleScalarSqrt ( ppzvhrji5y ) ; }
ppzvhrji5y = rtP_Earth . mu / ( nm4t0wvumv * nm4t0wvumv ) * hbv5azo3sw .
Gain_Gain_fosanw5ymw ; o2y45zbt2m4 . gbu5abs2sz [ 0 ] = gev4djbpks [ 0 ] *
eujiwcy0tl_idx_0 * k1qmoe0iaw + pygfqx1xx2 [ 0 ] / nm4t0wvumv * ppzvhrji5y ;
o2y45zbt2m4 . gbu5abs2sz [ 1 ] = eujiwcy0tl_idx_0 * gev4djbpks [ 1 ] *
k1qmoe0iaw + pygfqx1xx2 [ 1 ] / nm4t0wvumv * ppzvhrji5y ; o2y45zbt2m4 .
gbu5abs2sz [ 2 ] = pygfqx1xx2 [ 2 ] / nm4t0wvumv * ppzvhrji5y + k1qmoe0iaw *
eujiwcy0tl_idx_2 ; if ( ssIsSampleHit ( rtS , 5 , 0 ) && hbv5azo3sw .
Enable1_Value ) { o2y45zbt2m4 . fgtzb5d0ie = o2y45zbt2m4 . fepr2tvtnf ;
dnfnzfugcb_p [ 0 ] = dnfnzfugcb_idx_0 ; dnfnzfugcb_p [ 2 ] = bzqxmppt5e_idx_0
; dnfnzfugcb_p [ 4 ] = porr3exmvr_idx_0 ; dnfnzfugcb_p [ 1 ] =
dnfnzfugcb_idx_1 ; dnfnzfugcb_p [ 3 ] = bzqxmppt5e_idx_1 ; dnfnzfugcb_p [ 5 ]
= porr3exmvr_idx_1 ; tmp [ 0 ] = hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 0 ] ; tmp [ 1 ] = hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 1 ] ; tmp [ 2 ] = hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 2 ] ; tmp [ 3 ] = hbv5azo3sw .
SensorattitudeBodyframe_Value_j5gua0l1cu [ 3 ] ; tmp [ 4 ] = hbv5azo3sw .
Star1Earthinertialframe_Value_ifkn0ogqah [ 0 ] ; tmp [ 7 ] = hbv5azo3sw .
Star2Earthinertialframe_Value_h1kqrgh25u [ 0 ] ; tmp [ 10 ] = hbv5azo3sw .
Star3Earthinertialframe_Value_dn3g4rngub [ 0 ] ; tmp [ 5 ] = hbv5azo3sw .
Star1Earthinertialframe_Value_ifkn0ogqah [ 1 ] ; tmp [ 8 ] = hbv5azo3sw .
Star2Earthinertialframe_Value_h1kqrgh25u [ 1 ] ; tmp [ 11 ] = hbv5azo3sw .
Star3Earthinertialframe_Value_dn3g4rngub [ 1 ] ; tmp [ 6 ] = hbv5azo3sw .
Star1Earthinertialframe_Value_ifkn0ogqah [ 2 ] ; tmp [ 9 ] = hbv5azo3sw .
Star2Earthinertialframe_Value_h1kqrgh25u [ 2 ] ; tmp [ 12 ] = hbv5azo3sw .
Star3Earthinertialframe_Value_dn3g4rngub [ 2 ] ;
UKFCorrector_correct_00kmKqHa ( dnfnzfugcb_p , hbv5azo3sw . R1_Value ,
hrxu5rhe3af . osfynlsngc , hrxu5rhe3af . g4x2krmhlv , tmp ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . pdpb34jklm ) ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
UKFPredictorNonAdditive_predict_ixjSvTSy ( hbv5azo3sw . Q_Value , hrxu5rhe3af
. osfynlsngc , hrxu5rhe3af . g4x2krmhlv , hlbbwfsq2e ) ; } o2y45zbt2m4 .
cbgxsqe0kg [ 0 ] = hbv5azo3sw . Gain_Gain_acmfvzt2nt * dj1oda5ydb_idx_0 ;
o2y45zbt2m4 . cbgxsqe0kg [ 1 ] = hbv5azo3sw . Gain_Gain_acmfvzt2nt *
dj1oda5ydb_idx_1 ; o2y45zbt2m4 . cbgxsqe0kg [ 2 ] = hbv5azo3sw .
Gain_Gain_acmfvzt2nt * dj1oda5ydb_idx_2 ; k1qmoe0iaw = ( o2y45zbt2m4 .
cbgxsqe0kg [ 0 ] * o2y45zbt2m4 . cbgxsqe0kg [ 0 ] + o2y45zbt2m4 . cbgxsqe0kg
[ 1 ] * o2y45zbt2m4 . cbgxsqe0kg [ 1 ] ) + o2y45zbt2m4 . cbgxsqe0kg [ 2 ] *
o2y45zbt2m4 . cbgxsqe0kg [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 .
kwx5xj2ngl = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ; }
else { o2y45zbt2m4 . kwx5xj2ngl = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . ozme2zffq1 = ( o2y45zbt2m4 .
kwx5xj2ngl > hbv5azo3sw . NormalizeVector_maxzero ) ; } if ( hrxu5rhe3af .
ozme2zffq1 ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 . cbgxsqe0kg [ 0 ] ;
eujiwcy0tl_idx_1 = o2y45zbt2m4 . cbgxsqe0kg [ 1 ] ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . cbgxsqe0kg [ 2 ] ; eujiwcy0tl_idx_3 = o2y45zbt2m4 . kwx5xj2ngl
; } else { o2y45zbt2m4 . inxuhwzyyf [ 0 ] = o2y45zbt2m4 . cbgxsqe0kg [ 0 ] *
0.0 ; eujiwcy0tl_idx_0 = o2y45zbt2m4 . inxuhwzyyf [ 0 ] ; o2y45zbt2m4 .
inxuhwzyyf [ 1 ] = o2y45zbt2m4 . cbgxsqe0kg [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . inxuhwzyyf [ 1 ] ; o2y45zbt2m4 . inxuhwzyyf [ 2 ] = o2y45zbt2m4
. cbgxsqe0kg [ 2 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . inxuhwzyyf [ 2 ]
; eujiwcy0tl_idx_3 = hbv5azo3sw . Constant_Value_fjyq3eus5i ; } je34obrpzy =
eujiwcy0tl_idx_0 / eujiwcy0tl_idx_3 ; o2y45zbt2m4 . an1hct1vdk [ 0 ] =
je34obrpzy ; gev4djbpks [ 0 ] = je34obrpzy ; je34obrpzy = eujiwcy0tl_idx_1 /
eujiwcy0tl_idx_3 ; o2y45zbt2m4 . an1hct1vdk [ 1 ] = je34obrpzy ; gev4djbpks [
1 ] = je34obrpzy ; je34obrpzy = eujiwcy0tl_idx_2 / eujiwcy0tl_idx_3 ;
o2y45zbt2m4 . an1hct1vdk [ 2 ] = je34obrpzy ; k1qmoe0iaw = ( o2y45zbt2m4 .
hnvlhc15na [ 0 ] * o2y45zbt2m4 . hnvlhc15na [ 0 ] + o2y45zbt2m4 . hnvlhc15na
[ 1 ] * o2y45zbt2m4 . hnvlhc15na [ 1 ] ) + o2y45zbt2m4 . hnvlhc15na [ 2 ] *
o2y45zbt2m4 . hnvlhc15na [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 .
ngj1laz0jn = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ; }
else { o2y45zbt2m4 . ngj1laz0jn = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . pqxjs5shcl = ( o2y45zbt2m4 .
ngj1laz0jn > hbv5azo3sw . NormalizeVector1_maxzero ) ; } if ( hrxu5rhe3af .
pqxjs5shcl ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 . hnvlhc15na [ 0 ] ;
eujiwcy0tl_idx_1 = o2y45zbt2m4 . hnvlhc15na [ 1 ] ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . hnvlhc15na [ 2 ] ; eujiwcy0tl_idx_3 = o2y45zbt2m4 . ngj1laz0jn
; } else { o2y45zbt2m4 . m4a4e0kncl [ 0 ] = o2y45zbt2m4 . hnvlhc15na [ 0 ] *
0.0 ; eujiwcy0tl_idx_0 = o2y45zbt2m4 . m4a4e0kncl [ 0 ] ; o2y45zbt2m4 .
m4a4e0kncl [ 1 ] = o2y45zbt2m4 . hnvlhc15na [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . m4a4e0kncl [ 1 ] ; o2y45zbt2m4 . m4a4e0kncl [ 2 ] = o2y45zbt2m4
. hnvlhc15na [ 2 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . m4a4e0kncl [ 2 ]
; eujiwcy0tl_idx_3 = hbv5azo3sw . Constant_Value_cpj53jxfos ; } i541kjwyuc [
0 ] = eujiwcy0tl_idx_0 / eujiwcy0tl_idx_3 ; i541kjwyuc [ 1 ] =
eujiwcy0tl_idx_1 / eujiwcy0tl_idx_3 ; i541kjwyuc [ 2 ] = eujiwcy0tl_idx_2 /
eujiwcy0tl_idx_3 ; o2y45zbt2m4 . gnzoqn2dsl [ 0 ] = gev4djbpks [ 1 ] *
i541kjwyuc [ 2 ] - i541kjwyuc [ 1 ] * je34obrpzy ; o2y45zbt2m4 . gnzoqn2dsl [
1 ] = i541kjwyuc [ 0 ] * je34obrpzy - gev4djbpks [ 0 ] * i541kjwyuc [ 2 ] ;
o2y45zbt2m4 . gnzoqn2dsl [ 2 ] = gev4djbpks [ 0 ] * i541kjwyuc [ 1 ] -
i541kjwyuc [ 0 ] * gev4djbpks [ 1 ] ; o2y45zbt2m4 . pguc21lp1k [ 0 ] =
o2y45zbt2m4 . gnzoqn2dsl [ 1 ] * je34obrpzy - gev4djbpks [ 1 ] * o2y45zbt2m4
. gnzoqn2dsl [ 2 ] ; o2y45zbt2m4 . pguc21lp1k [ 1 ] = gev4djbpks [ 0 ] *
o2y45zbt2m4 . gnzoqn2dsl [ 2 ] - o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * je34obrpzy
; o2y45zbt2m4 . pguc21lp1k [ 2 ] = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] *
gev4djbpks [ 1 ] - gev4djbpks [ 0 ] * o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ;
k1qmoe0iaw = ( o2y45zbt2m4 . pguc21lp1k [ 0 ] * o2y45zbt2m4 . pguc21lp1k [ 0
] + o2y45zbt2m4 . pguc21lp1k [ 1 ] * o2y45zbt2m4 . pguc21lp1k [ 1 ] ) +
o2y45zbt2m4 . pguc21lp1k [ 2 ] * o2y45zbt2m4 . pguc21lp1k [ 2 ] ; if (
k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 . gnhb3isuhw = - muDoubleScalarSqrt (
muDoubleScalarAbs ( k1qmoe0iaw ) ) ; } else { o2y45zbt2m4 . gnhb3isuhw =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } if ( ssIsMajorTimeStep ( rtS ) ) {
hrxu5rhe3af . jydhsrazby = ( o2y45zbt2m4 . gnhb3isuhw > hbv5azo3sw .
NormalizeVector3_maxzero ) ; } if ( hrxu5rhe3af . jydhsrazby ) {
eujiwcy0tl_idx_0 = o2y45zbt2m4 . pguc21lp1k [ 0 ] ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . pguc21lp1k [ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . pguc21lp1k
[ 2 ] ; eujiwcy0tl_idx_3 = o2y45zbt2m4 . gnhb3isuhw ; } else { o2y45zbt2m4 .
j5pfxwzlry [ 0 ] = o2y45zbt2m4 . pguc21lp1k [ 0 ] * 0.0 ; eujiwcy0tl_idx_0 =
o2y45zbt2m4 . j5pfxwzlry [ 0 ] ; o2y45zbt2m4 . j5pfxwzlry [ 1 ] = o2y45zbt2m4
. pguc21lp1k [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . j5pfxwzlry [ 1 ]
; o2y45zbt2m4 . j5pfxwzlry [ 2 ] = o2y45zbt2m4 . pguc21lp1k [ 2 ] * 0.0 ;
eujiwcy0tl_idx_2 = o2y45zbt2m4 . j5pfxwzlry [ 2 ] ; eujiwcy0tl_idx_3 =
hbv5azo3sw . Constant_Value_ouyamitdob ; } o2y45zbt2m4 . an1hct1vdk [ 3 ] =
eujiwcy0tl_idx_0 / eujiwcy0tl_idx_3 ; o2y45zbt2m4 . an1hct1vdk [ 4 ] =
eujiwcy0tl_idx_1 / eujiwcy0tl_idx_3 ; o2y45zbt2m4 . an1hct1vdk [ 5 ] =
eujiwcy0tl_idx_2 / eujiwcy0tl_idx_3 ; k1qmoe0iaw = ( o2y45zbt2m4 . gnzoqn2dsl
[ 0 ] * o2y45zbt2m4 . gnzoqn2dsl [ 0 ] + o2y45zbt2m4 . gnzoqn2dsl [ 1 ] *
o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ) + o2y45zbt2m4 . gnzoqn2dsl [ 2 ] *
o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 .
isiqvhsvds = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ; }
else { o2y45zbt2m4 . isiqvhsvds = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . nfvyn45pdm = ( o2y45zbt2m4 .
isiqvhsvds > hbv5azo3sw . NormalizeVector4_maxzero ) ; } if ( hrxu5rhe3af .
nfvyn45pdm ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] ;
eujiwcy0tl_idx_1 = o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ; eujiwcy0tl_idx_3 = o2y45zbt2m4 . isiqvhsvds
; } else { o2y45zbt2m4 . du4yqg3svc [ 0 ] = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] *
0.0 ; eujiwcy0tl_idx_0 = o2y45zbt2m4 . du4yqg3svc [ 0 ] ; o2y45zbt2m4 .
du4yqg3svc [ 1 ] = o2y45zbt2m4 . gnzoqn2dsl [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . du4yqg3svc [ 1 ] ; o2y45zbt2m4 . du4yqg3svc [ 2 ] = o2y45zbt2m4
. gnzoqn2dsl [ 2 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . du4yqg3svc [ 2 ]
; eujiwcy0tl_idx_3 = hbv5azo3sw . Constant_Value_guhbgdhd5y ; } o2y45zbt2m4 .
an1hct1vdk [ 6 ] = eujiwcy0tl_idx_0 / eujiwcy0tl_idx_3 ; o2y45zbt2m4 .
an1hct1vdk [ 7 ] = eujiwcy0tl_idx_1 / eujiwcy0tl_idx_3 ; o2y45zbt2m4 .
an1hct1vdk [ 8 ] = eujiwcy0tl_idx_2 / eujiwcy0tl_idx_3 ; if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtPrevAction = hrxu5rhe3af . iqs2nrdyqs ; rtAction = - 1 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd != 1.0 ) { rtAction = 0
; } hrxu5rhe3af . iqs2nrdyqs = rtAction ; } else { rtAction = hrxu5rhe3af .
iqs2nrdyqs ; } if ( ( rtPrevAction != rtAction ) && ( rtPrevAction == 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
j1uacuucpv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . obuyxhugh2 ) { case 0 : hiausv0kpy ( rtS ) ; break ;
case 1 : iux4nkmqlm ( rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch
( hrxu5rhe3af . bnzh2jzuy5 ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 :
mlwid4sfdn ( rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; }
hrxu5rhe3af . j1uacuucpv = - 1 ; } if ( rtAction == 0 ) { if ( 0 !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { for ( i = 0 ; i < 3 ; i ++ ) { for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { diqprhsvnt [ i + 3 * i_p ] = ( ( o2y45zbt2m4 . an1hct1vdk [ 3 * i
+ 1 ] * o2y45zbt2m4 . an1hct1vdk [ 3 * i_p + 1 ] + o2y45zbt2m4 . an1hct1vdk [
3 * i ] * o2y45zbt2m4 . an1hct1vdk [ 3 * i_p ] ) + o2y45zbt2m4 . an1hct1vdk [
3 * i + 2 ] * o2y45zbt2m4 . an1hct1vdk [ 3 * i_p + 2 ] ) + hbv5azo3sw .
Bias1_Bias_ipdymfxp23 [ 3 * i_p + i ] ; } } for ( i = 0 ; i < 9 ; i ++ ) {
oom1jmjfhv [ i ] = ( muDoubleScalarAbs ( diqprhsvnt [ i ] ) > hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance_lf33vmkxxr ) ; } p = oom1jmjfhv
[ 0 ] ; for ( i = 0 ; i < 8 ; i ++ ) { p = ( p || oom1jmjfhv [ i + 1 ] ) ; }
rtPrevAction = hrxu5rhe3af . j1uacuucpv ; rtAction = - 1 ; if (
muDoubleScalarAbs ( ( ( ( ( ( o2y45zbt2m4 . an1hct1vdk [ 0 ] * o2y45zbt2m4 .
an1hct1vdk [ 4 ] * o2y45zbt2m4 . an1hct1vdk [ 8 ] - o2y45zbt2m4 . an1hct1vdk
[ 0 ] * o2y45zbt2m4 . an1hct1vdk [ 5 ] * o2y45zbt2m4 . an1hct1vdk [ 7 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 1 ] * o2y45zbt2m4 . an1hct1vdk [ 3 ] * o2y45zbt2m4
. an1hct1vdk [ 8 ] ) + o2y45zbt2m4 . an1hct1vdk [ 2 ] * o2y45zbt2m4 .
an1hct1vdk [ 3 ] * o2y45zbt2m4 . an1hct1vdk [ 7 ] ) + o2y45zbt2m4 .
an1hct1vdk [ 1 ] * o2y45zbt2m4 . an1hct1vdk [ 5 ] * o2y45zbt2m4 . an1hct1vdk
[ 6 ] ) - o2y45zbt2m4 . an1hct1vdk [ 2 ] * o2y45zbt2m4 . an1hct1vdk [ 4 ] *
o2y45zbt2m4 . an1hct1vdk [ 6 ] ) + hbv5azo3sw . Bias_Bias_la31kdn2hs ) >
hbv5azo3sw . DirectionCosineMatrixtoQuaternions_tolerance_lf33vmkxxr ) {
rtAction = 0 ; } else if ( p ) { rtAction = 1 ; } hrxu5rhe3af . j1uacuucpv =
rtAction ; if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0
: ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
obuyxhugh2 ) { case 0 : hiausv0kpy ( rtS ) ; break ; case 1 : iux4nkmqlm (
rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
bnzh2jzuy5 ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 : mlwid4sfdn (
rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtPrevAction = hrxu5rhe3af . obuyxhugh2 ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 2.0
) { rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 3.0 ) { rtAction = 1
; } hrxu5rhe3af . obuyxhugh2 = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : hiausv0kpy ( rtS ) ; break ; case 1 :
iux4nkmqlm ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { f3pmeztnvr ( rtS ) ; } bjbtw11222 ( rtS , hbv5azo3sw .
Constant1_Value_ftvtqjp1us , & hrxu5rhe3af . npgo12zmto ) ; srUpdateBC (
hrxu5rhe3af . npgo12zmto . lkqtujj5qn ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { dus4amarfa ( rtS ) ; } n0mztpd0lo ( rtS , hbv5azo3sw .
Constant1_Value_ftvtqjp1us , & hrxu5rhe3af . iyw4crazdc ) ; srUpdateBC (
hrxu5rhe3af . iyw4crazdc . frt22lnhun ) ; break ; } } srUpdateBC (
hrxu5rhe3af . pmgcir2p13 ) ; break ; case 1 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtPrevAction = hrxu5rhe3af . bnzh2jzuy5 ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 2.0
) { rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 3.0 ) { rtAction = 1
; } hrxu5rhe3af . bnzh2jzuy5 = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : awgtwaeg5t ( rtS ) ; break ; case 1 :
mlwid4sfdn ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { pwskx14vm4 ( rtS ) ; } pefmh4xzsj ( rtS , hbv5azo3sw .
Constant1_Value_l2qqn3e4fv , & hrxu5rhe3af . bghekfjhrb ) ; srUpdateBC (
hrxu5rhe3af . bghekfjhrb . iftxgfmwnh ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { lb5no3bsk0 ( rtS ) ; } hqjl54s2qv ( rtS , hbv5azo3sw .
Constant1_Value_l2qqn3e4fv , & hrxu5rhe3af . oxb0jyodnm ) ; srUpdateBC (
hrxu5rhe3af . oxb0jyodnm . cz2sd5ks45 ) ; break ; } } srUpdateBC (
hrxu5rhe3af . cbsmbddbag ) ; break ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( hrxu5rhe3af . fnnqkeqpmg ) ; } } } o2y45zbt2m4 . jgyobyjg0x = (
o2y45zbt2m4 . an1hct1vdk [ 0 ] + o2y45zbt2m4 . an1hct1vdk [ 4 ] ) +
o2y45zbt2m4 . an1hct1vdk [ 8 ] ; rtPrevAction = hrxu5rhe3af . p4n3550tai ; if
( ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! ( o2y45zbt2m4 .
jgyobyjg0x > 0.0 ) ; hrxu5rhe3af . p4n3550tai = rtAction ; } else { rtAction
= hrxu5rhe3af . p4n3550tai ; } if ( rtPrevAction != rtAction ) { switch (
rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . hnbwguuonj ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } hrxu5rhe3af .
hnbwguuonj = - 1 ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . kg1shmc2lb != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . kg1shmc2lb
= 0 ; } srUpdateBC ( hrxu5rhe3af . nw1rjo5a2w ) ; } else if ( o2y45zbt2m4 .
jgyobyjg0x + hbv5azo3sw . Constant_Value_czyi20hi44 < 0.0 ) { hrxu5rhe3af .
kg1shmc2lb = 1 ; } break ; case 1 : if ( rtAction != rtPrevAction ) { if (
ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } rtPrevAction =
hrxu5rhe3af . hnbwguuonj ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( (
o2y45zbt2m4 . an1hct1vdk [ 4 ] > o2y45zbt2m4 . an1hct1vdk [ 0 ] ) && (
o2y45zbt2m4 . an1hct1vdk [ 4 ] > o2y45zbt2m4 . an1hct1vdk [ 8 ] ) ) {
rtAction = 0 ; } else if ( o2y45zbt2m4 . an1hct1vdk [ 8 ] > o2y45zbt2m4 .
an1hct1vdk [ 0 ] ) { rtAction = 1 ; } else { rtAction = 2 ; } hrxu5rhe3af .
hnbwguuonj = rtAction ; } else { rtAction = hrxu5rhe3af . hnbwguuonj ; } if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } k1qmoe0iaw = ( (
o2y45zbt2m4 . an1hct1vdk [ 4 ] - o2y45zbt2m4 . an1hct1vdk [ 0 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) + hbv5azo3sw . Constant_Value_glskcdmgi0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . ikwlyg3xde != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ikwlyg3xde
= 0 ; } o2y45zbt2m4 . hi5t21up55 = muDoubleScalarSqrt ( k1qmoe0iaw ) ;
hrxu5rhe3af . ejudse0oqw = ( o2y45zbt2m4 . hi5t21up55 != 0.0 ) ; srUpdateBC (
hrxu5rhe3af . a0tdfwofzg ) ; } else if ( k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 .
hi5t21up55 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ;
hrxu5rhe3af . ikwlyg3xde = 1 ; } else { o2y45zbt2m4 . hi5t21up55 =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } k1qmoe0iaw = ( (
o2y45zbt2m4 . an1hct1vdk [ 8 ] - o2y45zbt2m4 . an1hct1vdk [ 0 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 4 ] ) + hbv5azo3sw . Constant_Value_p5m1vauvdr ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . gtaj4wmjuq != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . gtaj4wmjuq
= 0 ; } o2y45zbt2m4 . mz4bssc4xj = muDoubleScalarSqrt ( k1qmoe0iaw ) ;
hrxu5rhe3af . m2abnapxna = ( o2y45zbt2m4 . mz4bssc4xj != 0.0 ) ; srUpdateBC (
hrxu5rhe3af . as5m3dr43z ) ; } else if ( k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 .
mz4bssc4xj = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ;
hrxu5rhe3af . gtaj4wmjuq = 1 ; } else { o2y45zbt2m4 . mz4bssc4xj =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } break ; case 2 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } k1qmoe0iaw = ( (
o2y45zbt2m4 . an1hct1vdk [ 0 ] - o2y45zbt2m4 . an1hct1vdk [ 4 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) + hbv5azo3sw . Constant_Value_m2h11to3lk ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . jxtww5tjxt != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . jxtww5tjxt
= 0 ; } o2y45zbt2m4 . b51zos5ddd = muDoubleScalarSqrt ( k1qmoe0iaw ) ;
hrxu5rhe3af . cjwjqcd1zs = ( o2y45zbt2m4 . b51zos5ddd != 0.0 ) ; srUpdateBC (
hrxu5rhe3af . fimtx0wf43 ) ; } else if ( k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 .
b51zos5ddd = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ;
hrxu5rhe3af . jxtww5tjxt = 1 ; } else { o2y45zbt2m4 . b51zos5ddd =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } break ; } if ( ssIsMajorTimeStep ( rtS
) ) { srUpdateBC ( hrxu5rhe3af . h5fod2fj2q ) ; } break ; } if (
ssIsSampleHit ( rtS , 5 , 0 ) ) { o2y45zbt2m4 . aoe02aounf [ 0 ] =
o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4 . aoe02aounf [ 1 ] = o2y45zbt2m4
. k2zlzdldai [ 1 ] ; o2y45zbt2m4 . aoe02aounf [ 2 ] = o2y45zbt2m4 .
k2zlzdldai [ 2 ] ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
o2y45zbt2m4 . mkpovvsjoj , & hbv5azo3sw . RandomSource1_MeanVal_bvk35h21mf ,
1 , & hbv5azo3sw . RandomSource1_VarianceRTP_k1b5meiqjj , 1 , hrxu5rhe3af .
n10hslmo2a , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { o2y45zbt2m4 .
hiigrn3uvx [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4 . hiigrn3uvx
[ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 . hiigrn3uvx [ 2 ] =
o2y45zbt2m4 . k2zlzdldai [ 2 ] ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) {
RandSrc_GZ_D ( o2y45zbt2m4 . nyimkzd5hq , & hbv5azo3sw .
RandomSource1_MeanVal_cgugych5h2 , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_pdcijtaj4d , 1 , hrxu5rhe3af . j13dkj5h0s , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { o2y45zbt2m4 . fllsexxjfy [ 0 ] =
o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fllsexxjfy [ 1 ] = o2y45zbt2m4
. k2zlzdldai [ 1 ] ; o2y45zbt2m4 . fllsexxjfy [ 2 ] = o2y45zbt2m4 .
k2zlzdldai [ 2 ] ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
o2y45zbt2m4 . cddswdr3cl , & hbv5azo3sw . RandomSource1_MeanVal_d4idhl1tz1 ,
1 , & hbv5azo3sw . RandomSource1_VarianceRTP_crqc3mkc0f , 1 , hrxu5rhe3af .
k40rhthviy , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { o2y45zbt2m4 .
obyw5bjsqt [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4 . obyw5bjsqt
[ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 . obyw5bjsqt [ 2 ] =
o2y45zbt2m4 . k2zlzdldai [ 2 ] ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) {
RandSrc_GZ_D ( o2y45zbt2m4 . a2f0ypmsuy , & hbv5azo3sw .
RandomSource1_MeanVal_n5f3r1zvmv , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_blin0jucej , 1 , hrxu5rhe3af . jjpbiyjnrh , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { o2y45zbt2m4 . fp4h0u1qqq [ 0 ] =
o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fp4h0u1qqq [ 1 ] = o2y45zbt2m4
. k2zlzdldai [ 1 ] ; o2y45zbt2m4 . fp4h0u1qqq [ 2 ] = o2y45zbt2m4 .
k2zlzdldai [ 2 ] ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
o2y45zbt2m4 . ch2k5w2dnh , & hbv5azo3sw . RandomSource1_MeanVal_kfynkp2waz ,
1 , & hbv5azo3sw . RandomSource1_VarianceRTP_dvuf3vyvl4 , 1 , hrxu5rhe3af .
impwbrb5ul , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { o2y45zbt2m4 .
fe3icz0afg [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fe3icz0afg
[ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 . fe3icz0afg [ 2 ] =
o2y45zbt2m4 . k2zlzdldai [ 2 ] ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) {
RandSrc_GZ_D ( o2y45zbt2m4 . ipb4qp4laq , & hbv5azo3sw .
RandomSource1_MeanVal_d1pxk3satq , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_cg3jlumacb , 1 , hrxu5rhe3af . ck30ytigtq , 1 , 2 )
; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID13 ( int_T tid ) { real_T
bj3w2pxex3_idx_1 ; real_T bj3w2pxex3_idx_2 ; real_T coah3oifuy ; real_T
eadusbq1uc ; real_T gnppsmmfpd ; real_T imwshbledt ; real_T iu00vghsak ;
real_T ivzcgo0u3v_idx_1 ; real_T ivzcgo0u3v_idx_2 ; coah3oifuy = - hbv5azo3sw
. SensorattitudeBodyframe_Value [ 1 ] ; gnppsmmfpd = - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 2 ] ; imwshbledt = - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 3 ] ; iu00vghsak = ( ( hbv5azo3sw .
SensorattitudeBodyframe_Value [ 0 ] * hbv5azo3sw .
SensorattitudeBodyframe_Value [ 0 ] + - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 1 ] * - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 1 ] ) + - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 2 ] * - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 2 ] ) + - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 3 ] * - hbv5azo3sw .
SensorattitudeBodyframe_Value [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . mnrneviuut != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . mnrneviuut = 0 ; } eadusbq1uc = muDoubleScalarSqrt (
iu00vghsak ) ; } else if ( iu00vghsak < 0.0 ) { eadusbq1uc = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( iu00vghsak ) ) ; hrxu5rhe3af .
mnrneviuut = 1 ; } else { eadusbq1uc = muDoubleScalarSqrt ( iu00vghsak ) ; }
imwshbledt /= eadusbq1uc ; gnppsmmfpd /= eadusbq1uc ; coah3oifuy /=
eadusbq1uc ; eadusbq1uc = hbv5azo3sw . SensorattitudeBodyframe_Value [ 0 ] /
eadusbq1uc ; o2y45zbt2m4 . ouubw05eym [ 0 ] = ( ( eadusbq1uc * eadusbq1uc +
coah3oifuy * coah3oifuy ) - gnppsmmfpd * gnppsmmfpd ) - imwshbledt *
imwshbledt ; o2y45zbt2m4 . ouubw05eym [ 1 ] = ( coah3oifuy * gnppsmmfpd -
imwshbledt * eadusbq1uc ) * hbv5azo3sw . Gain_Gain_jllkehyjaf ; o2y45zbt2m4 .
ouubw05eym [ 2 ] = ( eadusbq1uc * gnppsmmfpd + coah3oifuy * imwshbledt ) *
hbv5azo3sw . Gain_Gain_hmfig3lbok ; o2y45zbt2m4 . ouubw05eym [ 3 ] = (
imwshbledt * eadusbq1uc + coah3oifuy * gnppsmmfpd ) * hbv5azo3sw .
Gain_Gain_fgogcvmrol ; o2y45zbt2m4 . ouubw05eym [ 4 ] = ( ( eadusbq1uc *
eadusbq1uc - coah3oifuy * coah3oifuy ) + gnppsmmfpd * gnppsmmfpd ) -
imwshbledt * imwshbledt ; o2y45zbt2m4 . ouubw05eym [ 5 ] = ( gnppsmmfpd *
imwshbledt - eadusbq1uc * coah3oifuy ) * hbv5azo3sw . Gain_Gain_m1woqqz52k ;
o2y45zbt2m4 . ouubw05eym [ 6 ] = ( coah3oifuy * imwshbledt - eadusbq1uc *
gnppsmmfpd ) * hbv5azo3sw . Gain_Gain_lhyrdo4a3w ; o2y45zbt2m4 . ouubw05eym [
7 ] = ( eadusbq1uc * coah3oifuy + gnppsmmfpd * imwshbledt ) * hbv5azo3sw .
Gain_Gain_lwb1grxsgi ; o2y45zbt2m4 . ouubw05eym [ 8 ] = ( ( eadusbq1uc *
eadusbq1uc - coah3oifuy * coah3oifuy ) - gnppsmmfpd * gnppsmmfpd ) +
imwshbledt * imwshbledt ; o2y45zbt2m4 . amepcbkksg [ 0 ] = hbv5azo3sw .
Constant2_Value_ialq4qchdp [ 0 ] ; o2y45zbt2m4 . fi1wde2gl2 [ 0 ] =
hbv5azo3sw . Constant3_Value [ 0 ] ; o2y45zbt2m4 . amepcbkksg [ 1 ] =
hbv5azo3sw . Constant2_Value_ialq4qchdp [ 1 ] ; o2y45zbt2m4 . fi1wde2gl2 [ 1
] = hbv5azo3sw . Constant3_Value [ 1 ] ; o2y45zbt2m4 . amepcbkksg [ 2 ] =
hbv5azo3sw . Constant2_Value_ialq4qchdp [ 2 ] ; o2y45zbt2m4 . fi1wde2gl2 [ 2
] = hbv5azo3sw . Constant3_Value [ 2 ] ; o2y45zbt2m4 . culrexdnyf =
hbv5azo3sw . Gain1_Gain_l1jki2u5fa * rtP_Earth . mu ; o2y45zbt2m4 .
ambhfazf2y [ 0 ] = hbv5azo3sw . Inertia_Value [ 1 ] - hbv5azo3sw .
Inertia_Value [ 2 ] ; o2y45zbt2m4 . ambhfazf2y [ 1 ] = hbv5azo3sw .
Inertia_Value [ 2 ] - hbv5azo3sw . Inertia_Value [ 0 ] ; o2y45zbt2m4 .
ambhfazf2y [ 2 ] = hbv5azo3sw . Inertia_Value [ 0 ] - hbv5azo3sw .
Inertia_Value [ 1 ] ; MagneticFieldInPolarCoordsTID1 ( ) ; o2y45zbt2m4 .
lx0bv1yu1i [ 0 ] = rtP_Spacecraft . initialAngularSpeed [ 0 ] ; o2y45zbt2m4 .
lx0bv1yu1i [ 1 ] = rtP_Spacecraft . initialAngularSpeed [ 1 ] ; o2y45zbt2m4 .
lx0bv1yu1i [ 2 ] = rtP_Spacecraft . initialAngularSpeed [ 2 ] ; o2y45zbt2m4 .
a55nsryplm [ 0 ] = rtP_Spacecraft . initialAttitude [ 0 ] ; o2y45zbt2m4 .
a55nsryplm [ 1 ] = rtP_Spacecraft . initialAttitude [ 1 ] ; o2y45zbt2m4 .
a55nsryplm [ 2 ] = rtP_Spacecraft . initialAttitude [ 2 ] ; o2y45zbt2m4 .
a55nsryplm [ 3 ] = rtP_Spacecraft . initialAttitude [ 3 ] ; o2y45zbt2m4 .
jq2aut2ijb [ 0 ] = hbv5azo3sw . Inertia_Value [ 1 ] - hbv5azo3sw .
Inertia_Value [ 2 ] ; o2y45zbt2m4 . jq2aut2ijb [ 1 ] = hbv5azo3sw .
Inertia_Value [ 2 ] - hbv5azo3sw . Inertia_Value [ 0 ] ; o2y45zbt2m4 .
jq2aut2ijb [ 2 ] = hbv5azo3sw . Inertia_Value [ 0 ] - hbv5azo3sw .
Inertia_Value [ 1 ] ; o2y45zbt2m4 . mvnud1uzgl = rtP_Const . Fe / rtP_Const .
c ; o2y45zbt2m4 . hckf2ailv0 = hbv5azo3sw . Gain1_Gain_km22rji0yo *
hbv5azo3sw . u821stMarch_Value ; eadusbq1uc = hbv5azo3sw . Sun_Value / (
hbv5azo3sw . a_Value * hbv5azo3sw . a_Value ) / hbv5azo3sw . a_Value ;
coah3oifuy = hbv5azo3sw . Constant_Value_c0ie4jx1vv - hbv5azo3sw . e_Value *
hbv5azo3sw . e_Value ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af .
nqcixj2cfc != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . nqcixj2cfc = 0 ; } imwshbledt = muDoubleScalarSqrt ( coah3oifuy
) ; } else if ( coah3oifuy < 0.0 ) { imwshbledt = - muDoubleScalarSqrt (
muDoubleScalarAbs ( coah3oifuy ) ) ; hrxu5rhe3af . nqcixj2cfc = 1 ; } else {
imwshbledt = muDoubleScalarSqrt ( coah3oifuy ) ; } o2y45zbt2m4 . bfud51xipp =
imwshbledt * coah3oifuy ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af
. gcz34svd4r != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . gcz34svd4r = 0 ; } o2y45zbt2m4 . kp1mzqwbu3 =
muDoubleScalarSqrt ( eadusbq1uc ) ; } else if ( eadusbq1uc < 0.0 ) {
o2y45zbt2m4 . kp1mzqwbu3 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
eadusbq1uc ) ) ; hrxu5rhe3af . gcz34svd4r = 1 ; } else { o2y45zbt2m4 .
kp1mzqwbu3 = muDoubleScalarSqrt ( eadusbq1uc ) ; } o2y45zbt2m4 . mrzwmqiqje =
( hbv5azo3sw . Constant3_Value_fveye0j2gb - hbv5azo3sw . e_Value * hbv5azo3sw
. e_Value ) * hbv5azo3sw . a_Value ; muDoubleScalarSinCos ( hbv5azo3sw .
u2_Gain * ( hbv5azo3sw . Gain1_Gain_byeui5d4hz * hbv5azo3sw .
Anglebetween3rdJanto21stMarch180_Value ) , & eadusbq1uc , & coah3oifuy ) ;
muDoubleScalarSinCos ( hbv5azo3sw . u2_Gain * ( hbv5azo3sw .
Gain1_Gain_byeui5d4hz * ( hbv5azo3sw . Gain_Gain_nrquqjsjbh * hbv5azo3sw .
Ecliptic_Value ) ) , & bj3w2pxex3_idx_1 , & ivzcgo0u3v_idx_1 ) ;
muDoubleScalarSinCos ( hbv5azo3sw . u2_Gain * ( hbv5azo3sw .
Gain1_Gain_byeui5d4hz * hbv5azo3sw . Constant_Value_mgrgcefnc2 ) , &
bj3w2pxex3_idx_2 , & ivzcgo0u3v_idx_2 ) ; gnppsmmfpd = coah3oifuy *
ivzcgo0u3v_idx_1 * ivzcgo0u3v_idx_2 - eadusbq1uc * bj3w2pxex3_idx_1 *
bj3w2pxex3_idx_2 ; iu00vghsak = coah3oifuy * bj3w2pxex3_idx_1 *
ivzcgo0u3v_idx_2 - eadusbq1uc * ivzcgo0u3v_idx_1 * bj3w2pxex3_idx_2 ;
imwshbledt = coah3oifuy * ivzcgo0u3v_idx_1 * bj3w2pxex3_idx_2 + eadusbq1uc *
bj3w2pxex3_idx_1 * ivzcgo0u3v_idx_2 ; eadusbq1uc = eadusbq1uc *
ivzcgo0u3v_idx_1 * ivzcgo0u3v_idx_2 + coah3oifuy * bj3w2pxex3_idx_1 *
bj3w2pxex3_idx_2 ; coah3oifuy = ( ( gnppsmmfpd * gnppsmmfpd + iu00vghsak *
iu00vghsak ) + imwshbledt * imwshbledt ) + eadusbq1uc * eadusbq1uc ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . anszycztem != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . anszycztem
= 0 ; } coah3oifuy = muDoubleScalarSqrt ( coah3oifuy ) ; } else if (
coah3oifuy < 0.0 ) { coah3oifuy = - muDoubleScalarSqrt ( muDoubleScalarAbs (
coah3oifuy ) ) ; hrxu5rhe3af . anszycztem = 1 ; } else { coah3oifuy =
muDoubleScalarSqrt ( coah3oifuy ) ; } gnppsmmfpd /= coah3oifuy ; iu00vghsak
/= coah3oifuy ; imwshbledt /= coah3oifuy ; eadusbq1uc /= coah3oifuy ;
o2y45zbt2m4 . kyx4elghw5 = ( iu00vghsak * imwshbledt + gnppsmmfpd *
eadusbq1uc ) * hbv5azo3sw . Gain_Gain_msviodsdfg ; o2y45zbt2m4 . ightd03wbw =
( ( hbv5azo3sw . Constant_Value_mrthaqohbp - imwshbledt * imwshbledt ) -
eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_jrylcyky0d ; o2y45zbt2m4
. boco0ydrhx = ( iu00vghsak * eadusbq1uc - gnppsmmfpd * imwshbledt ) *
hbv5azo3sw . Gain1_Gain_fdnpx3hnab * hbv5azo3sw . Constant5_Value ;
o2y45zbt2m4 . kgibrayejc = ( iu00vghsak * imwshbledt - gnppsmmfpd *
eadusbq1uc ) * hbv5azo3sw . Gain_Gain_j00moojqwi ; o2y45zbt2m4 . klod4yztvz =
( ( hbv5azo3sw . Constant_Value_gob0mxnrc1 - iu00vghsak * iu00vghsak ) -
eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_jieczjcfxj ; o2y45zbt2m4
. gr0fttz1x3 = ( gnppsmmfpd * iu00vghsak + imwshbledt * eadusbq1uc ) *
hbv5azo3sw . Gain1_Gain_epavf05nx2 * hbv5azo3sw . Constant5_Value ;
o2y45zbt2m4 . lj2hsiefmb = ( iu00vghsak * eadusbq1uc + gnppsmmfpd *
imwshbledt ) * hbv5azo3sw . Gain_Gain_lxppc43sr3 ; o2y45zbt2m4 . pqwrcdv51y =
( imwshbledt * eadusbq1uc - gnppsmmfpd * iu00vghsak ) * hbv5azo3sw .
Gain1_Gain_pr0mjxkeko ; o2y45zbt2m4 . gkj1c4ecpo = ( ( hbv5azo3sw .
Constant_Value_l4ftm45smy - iu00vghsak * iu00vghsak ) - imwshbledt *
imwshbledt ) * hbv5azo3sw . Gain2_Gain_oh11qzcnsq * hbv5azo3sw .
Constant5_Value ; o2y45zbt2m4 . ltnksa0t1k = rtP_Earth . equatorialRadius *
rtP_Earth . equatorialRadius ; coah3oifuy = ( ( hbv5azo3sw .
Sensororientation_Value [ 0 ] * hbv5azo3sw . Sensororientation_Value [ 0 ] +
hbv5azo3sw . Sensororientation_Value [ 1 ] * hbv5azo3sw .
Sensororientation_Value [ 1 ] ) + hbv5azo3sw . Sensororientation_Value [ 2 ]
* hbv5azo3sw . Sensororientation_Value [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value [ 3 ] * hbv5azo3sw . Sensororientation_Value [ 3 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . ane43mgfgs != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ane43mgfgs
= 0 ; } eadusbq1uc = muDoubleScalarSqrt ( coah3oifuy ) ; } else if (
coah3oifuy < 0.0 ) { eadusbq1uc = - muDoubleScalarSqrt ( muDoubleScalarAbs (
coah3oifuy ) ) ; hrxu5rhe3af . ane43mgfgs = 1 ; } else { eadusbq1uc =
muDoubleScalarSqrt ( coah3oifuy ) ; } coah3oifuy = hbv5azo3sw .
Sensororientation_Value [ 0 ] / eadusbq1uc ; imwshbledt = hbv5azo3sw .
Sensororientation_Value [ 1 ] / eadusbq1uc ; gnppsmmfpd = hbv5azo3sw .
Sensororientation_Value [ 2 ] / eadusbq1uc ; eadusbq1uc = hbv5azo3sw .
Sensororientation_Value [ 3 ] / eadusbq1uc ; o2y45zbt2m4 . ebby2e0eey = (
imwshbledt * gnppsmmfpd + coah3oifuy * eadusbq1uc ) * hbv5azo3sw .
Gain_Gain_gakfyjlszi ; o2y45zbt2m4 . kc5uinuva1 = ( imwshbledt * eadusbq1uc -
coah3oifuy * gnppsmmfpd ) * hbv5azo3sw . Gain1_Gain_cp5gxmxv40 ; o2y45zbt2m4
. olg5gqva4k = ( ( hbv5azo3sw . Constant_Value_hucifuffuc - gnppsmmfpd *
gnppsmmfpd ) - eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_bqvzfgganp
; o2y45zbt2m4 . ny5fqojp01 = ( imwshbledt * gnppsmmfpd - coah3oifuy *
eadusbq1uc ) * hbv5azo3sw . Gain_Gain_jcxnesc51s ; o2y45zbt2m4 . mwkxuoztcf =
( coah3oifuy * imwshbledt + gnppsmmfpd * eadusbq1uc ) * hbv5azo3sw .
Gain1_Gain_e5tqo52tku ; o2y45zbt2m4 . g42bdhp2mr = ( ( hbv5azo3sw .
Constant_Value_itxm0x43si - imwshbledt * imwshbledt ) - eadusbq1uc *
eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_jxsi55a1on ; o2y45zbt2m4 . gegkjzomxm
= ( imwshbledt * eadusbq1uc + coah3oifuy * gnppsmmfpd ) * hbv5azo3sw .
Gain_Gain_omyfgx1n5h ; o2y45zbt2m4 . kd1qxjhyrr = ( gnppsmmfpd * eadusbq1uc -
coah3oifuy * imwshbledt ) * hbv5azo3sw . Gain1_Gain_n4ecq0uzvs ; o2y45zbt2m4
. pgs5royztd = ( ( hbv5azo3sw . Constant_Value_ezafw5tbx0 - imwshbledt *
imwshbledt ) - gnppsmmfpd * gnppsmmfpd ) * hbv5azo3sw . Gain2_Gain_bxmfdcbxd2
; coah3oifuy = ( ( hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 0 ] *
hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 0 ] + hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 1 ] * hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 2 ] * hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 3 ] * hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . hkxlm4qdro != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . hkxlm4qdro
= 0 ; } eadusbq1uc = muDoubleScalarSqrt ( coah3oifuy ) ; } else if (
coah3oifuy < 0.0 ) { eadusbq1uc = - muDoubleScalarSqrt ( muDoubleScalarAbs (
coah3oifuy ) ) ; hrxu5rhe3af . hkxlm4qdro = 1 ; } else { eadusbq1uc =
muDoubleScalarSqrt ( coah3oifuy ) ; } coah3oifuy = hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 0 ] / eadusbq1uc ; imwshbledt =
hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 1 ] / eadusbq1uc ;
gnppsmmfpd = hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 2 ] /
eadusbq1uc ; eadusbq1uc = hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 3
] / eadusbq1uc ; o2y45zbt2m4 . eqlu1laly1 = ( imwshbledt * gnppsmmfpd +
coah3oifuy * eadusbq1uc ) * hbv5azo3sw . Gain_Gain_cr4zczeez0 ; o2y45zbt2m4 .
c4imsujsyj = ( imwshbledt * eadusbq1uc - coah3oifuy * gnppsmmfpd ) *
hbv5azo3sw . Gain1_Gain_g12m14aft0 ; o2y45zbt2m4 . ewg4gsarwm = ( (
hbv5azo3sw . Constant_Value_kst2th0l1z - gnppsmmfpd * gnppsmmfpd ) -
eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_enxakegu4s ; o2y45zbt2m4
. myxilkpyto = ( imwshbledt * gnppsmmfpd - coah3oifuy * eadusbq1uc ) *
hbv5azo3sw . Gain_Gain_lw5hirdrrr ; o2y45zbt2m4 . nfvbvcsgaf = ( coah3oifuy *
imwshbledt + gnppsmmfpd * eadusbq1uc ) * hbv5azo3sw . Gain1_Gain_amkbhcbkvw ;
o2y45zbt2m4 . jyoiaqgash = ( ( hbv5azo3sw . Constant_Value_igmvdrtaty -
imwshbledt * imwshbledt ) - eadusbq1uc * eadusbq1uc ) * hbv5azo3sw .
Gain2_Gain_bttjb1ulla ; o2y45zbt2m4 . am2ydxy3tg = ( imwshbledt * eadusbq1uc
+ coah3oifuy * gnppsmmfpd ) * hbv5azo3sw . Gain_Gain_pmdq3xatwv ; o2y45zbt2m4
. aayx0clngf = ( gnppsmmfpd * eadusbq1uc - coah3oifuy * imwshbledt ) *
hbv5azo3sw . Gain1_Gain_bgbnv4z5nx ; o2y45zbt2m4 . imjovcvzmj = ( (
hbv5azo3sw . Constant_Value_m4goabuepu - imwshbledt * imwshbledt ) -
gnppsmmfpd * gnppsmmfpd ) * hbv5azo3sw . Gain2_Gain_cdbsbiii2b ; coah3oifuy =
( ( hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 0 ] * hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 0 ] + hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 1 ] * hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 2 ] * hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 3 ] * hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . fnu1tvdbyx != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . fnu1tvdbyx
= 0 ; } eadusbq1uc = muDoubleScalarSqrt ( coah3oifuy ) ; } else if (
coah3oifuy < 0.0 ) { eadusbq1uc = - muDoubleScalarSqrt ( muDoubleScalarAbs (
coah3oifuy ) ) ; hrxu5rhe3af . fnu1tvdbyx = 1 ; } else { eadusbq1uc =
muDoubleScalarSqrt ( coah3oifuy ) ; } coah3oifuy = hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 0 ] / eadusbq1uc ; imwshbledt =
hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 1 ] / eadusbq1uc ;
gnppsmmfpd = hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 2 ] /
eadusbq1uc ; eadusbq1uc = hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 3
] / eadusbq1uc ; o2y45zbt2m4 . fhwu2rpyxm = ( imwshbledt * gnppsmmfpd +
coah3oifuy * eadusbq1uc ) * hbv5azo3sw . Gain_Gain_pfg5czu2ug ; o2y45zbt2m4 .
db5wedrkq4 = ( imwshbledt * eadusbq1uc - coah3oifuy * gnppsmmfpd ) *
hbv5azo3sw . Gain1_Gain_lgo5besblz ; o2y45zbt2m4 . bzsae5g150 = ( (
hbv5azo3sw . Constant_Value_lntxh0ukmr - gnppsmmfpd * gnppsmmfpd ) -
eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_aaobkzaajt ; o2y45zbt2m4
. fxqr3to5iu = ( imwshbledt * gnppsmmfpd - coah3oifuy * eadusbq1uc ) *
hbv5azo3sw . Gain_Gain_dmquktubpv ; o2y45zbt2m4 . b3deffzvww = ( coah3oifuy *
imwshbledt + gnppsmmfpd * eadusbq1uc ) * hbv5azo3sw . Gain1_Gain_o20oz1n5pv ;
o2y45zbt2m4 . jzcgup51f2 = ( ( hbv5azo3sw . Constant_Value_imdxvhi4fs -
imwshbledt * imwshbledt ) - eadusbq1uc * eadusbq1uc ) * hbv5azo3sw .
Gain2_Gain_bxr0hdxmou ; o2y45zbt2m4 . aqvhjylunl = ( imwshbledt * eadusbq1uc
+ coah3oifuy * gnppsmmfpd ) * hbv5azo3sw . Gain_Gain_app3p5qkli ; o2y45zbt2m4
. pmy5icug2k = ( gnppsmmfpd * eadusbq1uc - coah3oifuy * imwshbledt ) *
hbv5azo3sw . Gain1_Gain_ggc5pki3i3 ; o2y45zbt2m4 . pxdeyipxtr = ( (
hbv5azo3sw . Constant_Value_k0omy0fwkr - imwshbledt * imwshbledt ) -
gnppsmmfpd * gnppsmmfpd ) * hbv5azo3sw . Gain2_Gain_jiiceq4a1g ; coah3oifuy =
( ( hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 0 ] * hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 0 ] + hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 1 ] * hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 2 ] * hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 3 ] * hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . fq3jja1aol != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . fq3jja1aol
= 0 ; } eadusbq1uc = muDoubleScalarSqrt ( coah3oifuy ) ; } else if (
coah3oifuy < 0.0 ) { eadusbq1uc = - muDoubleScalarSqrt ( muDoubleScalarAbs (
coah3oifuy ) ) ; hrxu5rhe3af . fq3jja1aol = 1 ; } else { eadusbq1uc =
muDoubleScalarSqrt ( coah3oifuy ) ; } coah3oifuy = hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 0 ] / eadusbq1uc ; imwshbledt =
hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 1 ] / eadusbq1uc ;
gnppsmmfpd = hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 2 ] /
eadusbq1uc ; eadusbq1uc = hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 3
] / eadusbq1uc ; o2y45zbt2m4 . cepjmd5gi4 = ( imwshbledt * gnppsmmfpd +
coah3oifuy * eadusbq1uc ) * hbv5azo3sw . Gain_Gain_kb00k2wbfq ; o2y45zbt2m4 .
a3l2vrrg5t = ( imwshbledt * eadusbq1uc - coah3oifuy * gnppsmmfpd ) *
hbv5azo3sw . Gain1_Gain_iow1llvkxc ; o2y45zbt2m4 . pmjdaqsrgv = ( (
hbv5azo3sw . Constant_Value_ba5xlpus1a - gnppsmmfpd * gnppsmmfpd ) -
eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_dtunvm3otp ; o2y45zbt2m4
. ivk2auaags = ( imwshbledt * gnppsmmfpd - coah3oifuy * eadusbq1uc ) *
hbv5azo3sw . Gain_Gain_npe4zqgyas ; o2y45zbt2m4 . hmdscxhrrq = ( coah3oifuy *
imwshbledt + gnppsmmfpd * eadusbq1uc ) * hbv5azo3sw . Gain1_Gain_fdxpyxu0o1 ;
o2y45zbt2m4 . ks0a4vmt2y = ( ( hbv5azo3sw . Constant_Value_eqda1kzn3h -
imwshbledt * imwshbledt ) - eadusbq1uc * eadusbq1uc ) * hbv5azo3sw .
Gain2_Gain_n4sn3p4zhh ; o2y45zbt2m4 . fuxsypdw5b = ( imwshbledt * eadusbq1uc
+ coah3oifuy * gnppsmmfpd ) * hbv5azo3sw . Gain_Gain_caz4q343an ; o2y45zbt2m4
. ibibxo1hc5 = ( gnppsmmfpd * eadusbq1uc - coah3oifuy * imwshbledt ) *
hbv5azo3sw . Gain1_Gain_odtb3u3w54 ; o2y45zbt2m4 . e0g1epmzzc = ( (
hbv5azo3sw . Constant_Value_j3hxujgyee - imwshbledt * imwshbledt ) -
gnppsmmfpd * gnppsmmfpd ) * hbv5azo3sw . Gain2_Gain_pl1uwnp5vb ; coah3oifuy =
( ( hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 0 ] * hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 0 ] + hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 1 ] * hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 2 ] * hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 3 ] * hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . nbmuo2yzhf != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . nbmuo2yzhf
= 0 ; } eadusbq1uc = muDoubleScalarSqrt ( coah3oifuy ) ; } else if (
coah3oifuy < 0.0 ) { eadusbq1uc = - muDoubleScalarSqrt ( muDoubleScalarAbs (
coah3oifuy ) ) ; hrxu5rhe3af . nbmuo2yzhf = 1 ; } else { eadusbq1uc =
muDoubleScalarSqrt ( coah3oifuy ) ; } coah3oifuy = hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 0 ] / eadusbq1uc ; imwshbledt =
hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 1 ] / eadusbq1uc ;
gnppsmmfpd = hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 2 ] /
eadusbq1uc ; eadusbq1uc = hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 3
] / eadusbq1uc ; o2y45zbt2m4 . pvujvtillf = ( imwshbledt * gnppsmmfpd +
coah3oifuy * eadusbq1uc ) * hbv5azo3sw . Gain_Gain_jfezxdcuu1 ; o2y45zbt2m4 .
bralaspqvj = ( imwshbledt * eadusbq1uc - coah3oifuy * gnppsmmfpd ) *
hbv5azo3sw . Gain1_Gain_mzwjkwmyds ; o2y45zbt2m4 . mf042bbyls = ( (
hbv5azo3sw . Constant_Value_myru2azkts - gnppsmmfpd * gnppsmmfpd ) -
eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_pt1tknsnuk ; o2y45zbt2m4
. pvvuqzjxh5 = ( imwshbledt * gnppsmmfpd - coah3oifuy * eadusbq1uc ) *
hbv5azo3sw . Gain_Gain_cylo5ppz5d ; o2y45zbt2m4 . jkdvlxhrn3 = ( coah3oifuy *
imwshbledt + gnppsmmfpd * eadusbq1uc ) * hbv5azo3sw . Gain1_Gain_evkyndzct5 ;
o2y45zbt2m4 . nd0vnjuzbo = ( ( hbv5azo3sw . Constant_Value_mpzaspn304 -
imwshbledt * imwshbledt ) - eadusbq1uc * eadusbq1uc ) * hbv5azo3sw .
Gain2_Gain_ogm3tj3b4p ; o2y45zbt2m4 . ke44k2nvd3 = ( imwshbledt * eadusbq1uc
+ coah3oifuy * gnppsmmfpd ) * hbv5azo3sw . Gain_Gain_lnevd4sqnk ; o2y45zbt2m4
. bvbwt2i4ty = ( gnppsmmfpd * eadusbq1uc - coah3oifuy * imwshbledt ) *
hbv5azo3sw . Gain1_Gain_f5yo2mvezp ; o2y45zbt2m4 . bckqvwne10 = ( (
hbv5azo3sw . Constant_Value_ey5twm140q - imwshbledt * imwshbledt ) -
gnppsmmfpd * gnppsmmfpd ) * hbv5azo3sw . Gain2_Gain_mg22nq4b3k ; coah3oifuy =
( ( hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 0 ] * hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 0 ] + hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 1 ] * hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 2 ] * hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 3 ] * hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . ev5en1vf5z != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ev5en1vf5z
= 0 ; } eadusbq1uc = muDoubleScalarSqrt ( coah3oifuy ) ; } else if (
coah3oifuy < 0.0 ) { eadusbq1uc = - muDoubleScalarSqrt ( muDoubleScalarAbs (
coah3oifuy ) ) ; hrxu5rhe3af . ev5en1vf5z = 1 ; } else { eadusbq1uc =
muDoubleScalarSqrt ( coah3oifuy ) ; } coah3oifuy = hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 0 ] / eadusbq1uc ; imwshbledt =
hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 1 ] / eadusbq1uc ;
gnppsmmfpd = hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 2 ] /
eadusbq1uc ; eadusbq1uc = hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 3
] / eadusbq1uc ; o2y45zbt2m4 . icooi3vgxr = ( imwshbledt * gnppsmmfpd +
coah3oifuy * eadusbq1uc ) * hbv5azo3sw . Gain_Gain_f5mrtnkemr ; o2y45zbt2m4 .
nhfh5pwjge = ( imwshbledt * eadusbq1uc - coah3oifuy * gnppsmmfpd ) *
hbv5azo3sw . Gain1_Gain_fdh0g1o02u ; o2y45zbt2m4 . ekeiqfqt15 = ( (
hbv5azo3sw . Constant_Value_kkk1dzjy3p - gnppsmmfpd * gnppsmmfpd ) -
eadusbq1uc * eadusbq1uc ) * hbv5azo3sw . Gain2_Gain_gnny303ymj ; o2y45zbt2m4
. fu44uyydbm = ( imwshbledt * gnppsmmfpd - coah3oifuy * eadusbq1uc ) *
hbv5azo3sw . Gain_Gain_bkbvyxdlek ; o2y45zbt2m4 . nrvyadhccn = ( coah3oifuy *
imwshbledt + gnppsmmfpd * eadusbq1uc ) * hbv5azo3sw . Gain1_Gain_pbfdoucssu ;
o2y45zbt2m4 . kif43ukmno = ( ( hbv5azo3sw . Constant_Value_jbyhakx4ay -
imwshbledt * imwshbledt ) - eadusbq1uc * eadusbq1uc ) * hbv5azo3sw .
Gain2_Gain_ijreebnsuw ; o2y45zbt2m4 . lvap1gibsy = ( imwshbledt * eadusbq1uc
+ coah3oifuy * gnppsmmfpd ) * hbv5azo3sw . Gain_Gain_a2lqzra5qd ; o2y45zbt2m4
. fjgl0ynn23 = ( gnppsmmfpd * eadusbq1uc - coah3oifuy * imwshbledt ) *
hbv5azo3sw . Gain1_Gain_f45poxumoe ; o2y45zbt2m4 . dlywnze0gh = ( (
hbv5azo3sw . Constant_Value_f1tb0wmrtm - imwshbledt * imwshbledt ) -
gnppsmmfpd * gnppsmmfpd ) * hbv5azo3sw . Gain2_Gain_necstpfmlp ; coah3oifuy =
0.0 * hbv5azo3sw . Inertia_Value_ionitpmuar [ 0 ] ; ivzcgo0u3v_idx_1 = 0.0 *
hbv5azo3sw . Inertia_Value_ionitpmuar [ 1 ] ; ivzcgo0u3v_idx_2 = 0.0 *
hbv5azo3sw . Inertia_Value_ionitpmuar [ 2 ] ; o2y45zbt2m4 . kuqlbidad1 [ 0 ]
= 0.0 * ivzcgo0u3v_idx_2 - 0.0 * ivzcgo0u3v_idx_1 ; o2y45zbt2m4 . kuqlbidad1
[ 1 ] = 0.0 * coah3oifuy - 0.0 * ivzcgo0u3v_idx_2 ; o2y45zbt2m4 . kuqlbidad1
[ 2 ] = 0.0 * ivzcgo0u3v_idx_1 - 0.0 * coah3oifuy ; UNUSED_PARAMETER ( tid )
; } void MdlUpdate ( int_T tid ) { d3ndefizfv * _rtXAbsTol ; real_T dc ;
uint32_T numTicksToNextSampleHit ; uint32_T totalTicksInPeriod ; SimStruct *
S ; void * diag ; _rtXAbsTol = ( ( d3ndefizfv * ) ssGetAbsTolVector ( rtS ) )
; hrxu5rhe3af . btkpsszf3k = 0 ; hrxu5rhe3af . ckit2etwje = 0 ; if (
ssIsSampleHit ( rtS , 12 , 0 ) ) { if ( hrxu5rhe3af . e2pe11pwxn ) { dc =
o2y45zbt2m4 . op4p3vooky [ 0 ] ; if ( ( hbv5azo3sw . PWM3_Period < 0.2 ) || (
muDoubleScalarIsNaN ( hbv5azo3sw . PWM3_Period ) || ( hbv5azo3sw .
PWM3_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPGDiscMode" , 4 , 3 ,
"main/PWM3/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM3_Period , 2 ,
ssGetTaskTime ( rtS , 12 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ; }
if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . g24vxooz0v ) { S = rtS ; diag
= CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleGreaterThanOne" ,
3 , 2 , ssGetTaskTime ( rtS , 12 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 0 ] , 3 ,
"main/PWM3/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . g24vxooz0v = false ; } } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * dc * hbv5azo3sw . PWM3_Period + dc * hbv5azo3sw .
PWM3_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) -
( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; if (
numTicksToNextSampleHit <= 0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr
( "Simulink:blocks:InvSamplingRateForVPG" , 5 , 3 ,
"main/PWM3/Variable Pulse Generator" , 2 , 0.1 , 2 , o2y45zbt2m4 . op4p3vooky
[ 0 ] , 2 , hbv5azo3sw . PWM3_Period , 2 , ssGetTaskTime ( rtS , 12 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM3_Period + hbv5azo3sw . PWM3_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . e2pe11pwxn = false ; hrxu5rhe3af
. opg1lhdczb = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . e2pe11pwxn = true ; hrxu5rhe3af .
opg1lhdczb = true ; } hrxu5rhe3af . epbwbvrls5 = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . opg1lhdczb ) { dc =
o2y45zbt2m4 . op4p3vooky [ 0 ] ; if ( ( hbv5azo3sw . PWM3_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM3_Period ) || ( hbv5azo3sw .
PWM3_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM3/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM3_Period , 2 ,
ssGetTaskTime ( rtS , 12 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . l3pfqrb31o ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 12 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 0 ] , 3 ,
"main/PWM3/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . l3pfqrb31o = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM3_Period + hbv5azo3sw . PWM3_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T ) ( dc
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ;
; } else if ( hrxu5rhe3af . epbwbvrls5 > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , hrxu5rhe3af .
epbwbvrls5 ) ; ; } hrxu5rhe3af . e2pe11pwxn = true ; hrxu5rhe3af . opg1lhdczb
= true ; } } if ( ssIsSampleHit ( rtS , 11 , 0 ) ) { if ( hrxu5rhe3af .
jiqhomoo0v ) { dc = o2y45zbt2m4 . op4p3vooky [ 1 ] ; if ( ( hbv5azo3sw .
PWM4_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM4_Period ) ||
( hbv5azo3sw . PWM4_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM4/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM4_Period ,
2 , ssGetTaskTime ( rtS , 11 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ;
} if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . gcdlpfr3qr ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:warnDutyCycleGreaterThanOne" , 3 , 2 , ssGetTaskTime ( rtS ,
11 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 1 ] , 3 ,
"main/PWM4/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . gcdlpfr3qr = false ; } } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * dc * hbv5azo3sw . PWM4_Period + dc * hbv5azo3sw .
PWM4_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) -
( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; if (
numTicksToNextSampleHit <= 0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr
( "Simulink:blocks:InvSamplingRateForVPG" , 5 , 3 ,
"main/PWM4/Variable Pulse Generator" , 2 , 0.1 , 2 , o2y45zbt2m4 . op4p3vooky
[ 1 ] , 2 , hbv5azo3sw . PWM4_Period , 2 , ssGetTaskTime ( rtS , 11 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM4_Period + hbv5azo3sw . PWM4_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . jiqhomoo0v = false ; hrxu5rhe3af
. jmjdutrgwi = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . jiqhomoo0v = true ; hrxu5rhe3af .
jmjdutrgwi = true ; } hrxu5rhe3af . fytmukko2d = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . jmjdutrgwi ) { dc =
o2y45zbt2m4 . op4p3vooky [ 1 ] ; if ( ( hbv5azo3sw . PWM4_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM4_Period ) || ( hbv5azo3sw .
PWM4_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM4/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM4_Period , 2 ,
ssGetTaskTime ( rtS , 11 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . bhx2bk5lkm ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 11 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 1 ] , 3 ,
"main/PWM4/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . bhx2bk5lkm = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM4_Period + hbv5azo3sw . PWM4_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , ( real_T ) ( dc
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ;
; } else if ( hrxu5rhe3af . fytmukko2d > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , hrxu5rhe3af .
fytmukko2d ) ; ; } hrxu5rhe3af . jiqhomoo0v = true ; hrxu5rhe3af . jmjdutrgwi
= true ; } } if ( ssIsSampleHit ( rtS , 10 , 0 ) ) { if ( hrxu5rhe3af .
gxxnmirgwt ) { dc = o2y45zbt2m4 . op4p3vooky [ 2 ] ; if ( ( hbv5azo3sw .
PWM5_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM5_Period ) ||
( hbv5azo3sw . PWM5_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM5/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM5_Period ,
2 , ssGetTaskTime ( rtS , 10 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ;
} if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . dmkiyir0bc ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:warnDutyCycleGreaterThanOne" , 3 , 2 , ssGetTaskTime ( rtS ,
10 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 2 ] , 3 ,
"main/PWM5/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . dmkiyir0bc = false ; } } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * dc * hbv5azo3sw . PWM5_Period + dc * hbv5azo3sw .
PWM5_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) -
( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; if (
numTicksToNextSampleHit <= 0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr
( "Simulink:blocks:InvSamplingRateForVPG" , 5 , 3 ,
"main/PWM5/Variable Pulse Generator" , 2 , 0.1 , 2 , o2y45zbt2m4 . op4p3vooky
[ 2 ] , 2 , hbv5azo3sw . PWM5_Period , 2 , ssGetTaskTime ( rtS , 10 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM5_Period + hbv5azo3sw . PWM5_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . gxxnmirgwt = false ; hrxu5rhe3af
. ayulg3mnvk = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . gxxnmirgwt = true ; hrxu5rhe3af .
ayulg3mnvk = true ; } hrxu5rhe3af . curihjwvdq = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . ayulg3mnvk ) { dc =
o2y45zbt2m4 . op4p3vooky [ 2 ] ; if ( ( hbv5azo3sw . PWM5_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM5_Period ) || ( hbv5azo3sw .
PWM5_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM5/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM5_Period , 2 ,
ssGetTaskTime ( rtS , 10 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . nlifgx53vj ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 10 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 2 ] , 3 ,
"main/PWM5/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . nlifgx53vj = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM5_Period + hbv5azo3sw . PWM5_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , ( real_T ) ( dc
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ;
; } else if ( hrxu5rhe3af . curihjwvdq > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , hrxu5rhe3af .
curihjwvdq ) ; ; } hrxu5rhe3af . gxxnmirgwt = true ; hrxu5rhe3af . ayulg3mnvk
= true ; } } if ( ssIsSampleHit ( rtS , 9 , 0 ) ) { if ( hrxu5rhe3af .
cozmdzu0w1 ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; if ( ( hbv5azo3sw .
PWM_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM_Period ) || (
hbv5azo3sw . PWM_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM_Period , 2
, ssGetTaskTime ( rtS , 9 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ; }
if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . ckwrsfgl5j ) { S = rtS ; diag
= CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleGreaterThanOne" ,
3 , 2 , ssGetTaskTime ( rtS , 9 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 0 ] , 3 ,
"main/PWM/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . ckwrsfgl5j = false ; } } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * dc * hbv5azo3sw . PWM_Period + dc * hbv5azo3sw .
PWM_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf
( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 )
; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) (
uint32_T ) - dc : ( uint32_T ) dc ; if ( numTicksToNextSampleHit <= 0U ) { S
= rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvSamplingRateForVPG" , 5 , 3 ,
"main/PWM/Variable Pulse Generator" , 2 , 0.1 , 2 , o2y45zbt2m4 . c1cfxe21zn
[ 0 ] , 2 , hbv5azo3sw . PWM_Period , 2 , ssGetTaskTime ( rtS , 9 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM_Period + hbv5azo3sw . PWM_Period )
/ 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . cozmdzu0w1 = false ; hrxu5rhe3af
. cnj1jumxqg = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . cozmdzu0w1 = true ; hrxu5rhe3af .
cnj1jumxqg = true ; } hrxu5rhe3af . oumjhalsqc = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . cnj1jumxqg ) { dc =
o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; if ( ( hbv5azo3sw . PWM_Period <= 0.0 ) || (
muDoubleScalarIsNaN ( hbv5azo3sw . PWM_Period ) || ( hbv5azo3sw . PWM_Period
== ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM_Period , 2 ,
ssGetTaskTime ( rtS , 9 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . e2cixfebva ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 9 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 0 ] , 3 ,
"main/PWM/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . e2cixfebva = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM_Period + hbv5azo3sw . PWM_Period )
/ 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T ) ( dc <
0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ; ;
} else if ( hrxu5rhe3af . oumjhalsqc > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , hrxu5rhe3af .
oumjhalsqc ) ; ; } hrxu5rhe3af . cozmdzu0w1 = true ; hrxu5rhe3af . cnj1jumxqg
= true ; } } if ( ssIsSampleHit ( rtS , 8 , 0 ) ) { if ( hrxu5rhe3af .
i5keywnlob ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 1 ] ; if ( ( hbv5azo3sw .
PWM1_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM1_Period ) ||
( hbv5azo3sw . PWM1_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM1/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM1_Period ,
2 , ssGetTaskTime ( rtS , 8 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ;
} if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . hbtp1swogp ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:warnDutyCycleGreaterThanOne" , 3 , 2 , ssGetTaskTime ( rtS ,
8 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 1 ] , 3 ,
"main/PWM1/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . hbtp1swogp = false ; } } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * dc * hbv5azo3sw . PWM1_Period + dc * hbv5azo3sw .
PWM1_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) -
( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; if (
numTicksToNextSampleHit <= 0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr
( "Simulink:blocks:InvSamplingRateForVPG" , 5 , 3 ,
"main/PWM1/Variable Pulse Generator" , 2 , 0.1 , 2 , o2y45zbt2m4 . c1cfxe21zn
[ 1 ] , 2 , hbv5azo3sw . PWM1_Period , 2 , ssGetTaskTime ( rtS , 8 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM1_Period + hbv5azo3sw . PWM1_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . i5keywnlob = false ; hrxu5rhe3af
. ae5papqlus = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . i5keywnlob = true ; hrxu5rhe3af .
ae5papqlus = true ; } hrxu5rhe3af . o2yvavvn5c = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . ae5papqlus ) { dc =
o2y45zbt2m4 . c1cfxe21zn [ 1 ] ; if ( ( hbv5azo3sw . PWM1_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM1_Period ) || ( hbv5azo3sw .
PWM1_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM1/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM1_Period , 2 ,
ssGetTaskTime ( rtS , 8 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . ct2fu2r1og ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 8 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 1 ] , 3 ,
"main/PWM1/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . ct2fu2r1og = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM1_Period + hbv5azo3sw . PWM1_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T ) ( dc <
0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ; ;
} else if ( hrxu5rhe3af . o2yvavvn5c > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , hrxu5rhe3af .
o2yvavvn5c ) ; ; } hrxu5rhe3af . i5keywnlob = true ; hrxu5rhe3af . ae5papqlus
= true ; } } if ( ssIsSampleHit ( rtS , 7 , 0 ) ) { if ( hrxu5rhe3af .
mp3yltewxi ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 2 ] ; if ( ( hbv5azo3sw .
PWM2_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM2_Period ) ||
( hbv5azo3sw . PWM2_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM2/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM2_Period ,
2 , ssGetTaskTime ( rtS , 7 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ;
} if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . kjzbuo2ejd ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:warnDutyCycleGreaterThanOne" , 3 , 2 , ssGetTaskTime ( rtS ,
7 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 2 ] , 3 ,
"main/PWM2/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . kjzbuo2ejd = false ; } } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * dc * hbv5azo3sw . PWM2_Period + dc * hbv5azo3sw .
PWM2_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) -
( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; if (
numTicksToNextSampleHit <= 0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr
( "Simulink:blocks:InvSamplingRateForVPG" , 5 , 3 ,
"main/PWM2/Variable Pulse Generator" , 2 , 0.1 , 2 , o2y45zbt2m4 . c1cfxe21zn
[ 2 ] , 2 , hbv5azo3sw . PWM2_Period , 2 , ssGetTaskTime ( rtS , 7 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM2_Period + hbv5azo3sw . PWM2_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . mp3yltewxi = false ; hrxu5rhe3af
. brmqgwecvy = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . mp3yltewxi = true ; hrxu5rhe3af .
brmqgwecvy = true ; } hrxu5rhe3af . hz2n5lmwzt = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . brmqgwecvy ) { dc =
o2y45zbt2m4 . c1cfxe21zn [ 2 ] ; if ( ( hbv5azo3sw . PWM2_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM2_Period ) || ( hbv5azo3sw .
PWM2_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM2/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM2_Period , 2 ,
ssGetTaskTime ( rtS , 7 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . ddgb0ny2wp ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 7 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 2 ] , 3 ,
"main/PWM2/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . ddgb0ny2wp = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM2_Period + hbv5azo3sw . PWM2_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ( real_T ) ( dc <
0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ; ;
} else if ( hrxu5rhe3af . hz2n5lmwzt > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , hrxu5rhe3af .
hz2n5lmwzt ) ; ; } hrxu5rhe3af . mp3yltewxi = true ; hrxu5rhe3af . brmqgwecvy
= true ; } } hrxu5rhe3af . irqzxzls3s = 0 ; hrxu5rhe3af . febtg0cpg5 = 0 ;
_rtXAbsTol -> ezm2ooaqjl [ 0 ] = hbv5azo3sw . Integrator1_AbsoluteTolerance ;
_rtXAbsTol -> li1obxdvy3 [ 0 ] = hbv5azo3sw . Integrator_AbsoluteTolerance ;
_rtXAbsTol -> ezm2ooaqjl [ 1 ] = hbv5azo3sw . Integrator1_AbsoluteTolerance ;
_rtXAbsTol -> li1obxdvy3 [ 1 ] = hbv5azo3sw . Integrator_AbsoluteTolerance ;
_rtXAbsTol -> ezm2ooaqjl [ 2 ] = hbv5azo3sw . Integrator1_AbsoluteTolerance ;
_rtXAbsTol -> li1obxdvy3 [ 2 ] = hbv5azo3sw . Integrator_AbsoluteTolerance ;
hrxu5rhe3af . g0uzej5lf1 = 0 ; UNUSED_PARAMETER ( tid ) ; } void
MdlUpdateTID13 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { hgblgktduh * _rtXdot ; _rtXdot = ( ( hgblgktduh * )
ssGetdX ( rtS ) ) ; _rtXdot -> bcrrky3g2k [ 0 ] = o2y45zbt2m4 . bwu3hh5pg3 [
0 ] ; _rtXdot -> bcrrky3g2k [ 1 ] = o2y45zbt2m4 . bwu3hh5pg3 [ 1 ] ; _rtXdot
-> bcrrky3g2k [ 2 ] = o2y45zbt2m4 . bwu3hh5pg3 [ 2 ] ; _rtXdot -> bcrrky3g2k
[ 3 ] = o2y45zbt2m4 . bwu3hh5pg3 [ 3 ] ; _rtXdot -> cjfebnqw1p = o2y45zbt2m4
. iunb01rvwp ; _rtXdot -> kbqjtzizsx [ 0 ] = o2y45zbt2m4 . jg5xwtwjpe [ 0 ] ;
_rtXdot -> ezm2ooaqjl [ 0 ] = o2y45zbt2m4 . hnvlhc15na [ 0 ] ; _rtXdot ->
li1obxdvy3 [ 0 ] = o2y45zbt2m4 . gbu5abs2sz [ 0 ] ; _rtXdot -> kbqjtzizsx [ 1
] = o2y45zbt2m4 . jg5xwtwjpe [ 1 ] ; _rtXdot -> ezm2ooaqjl [ 1 ] =
o2y45zbt2m4 . hnvlhc15na [ 1 ] ; _rtXdot -> li1obxdvy3 [ 1 ] = o2y45zbt2m4 .
gbu5abs2sz [ 1 ] ; _rtXdot -> kbqjtzizsx [ 2 ] = o2y45zbt2m4 . jg5xwtwjpe [ 2
] ; _rtXdot -> ezm2ooaqjl [ 2 ] = o2y45zbt2m4 . hnvlhc15na [ 2 ] ; _rtXdot ->
li1obxdvy3 [ 2 ] = o2y45zbt2m4 . gbu5abs2sz [ 2 ] ; } void MdlProjection (
void ) { } void MdlZeroCrossings ( void ) { p0mddzrq0f * _rtZCSV ; _rtZCSV =
( ( p0mddzrq0f * ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV ->
pe0u3adwg1 = o2y45zbt2m4 . kwx5xj2ngl - hbv5azo3sw . NormalizeVector_maxzero
; _rtZCSV -> aojfxgxmdw = o2y45zbt2m4 . ngj1laz0jn - hbv5azo3sw .
NormalizeVector1_maxzero ; _rtZCSV -> jzsx34kglq = o2y45zbt2m4 . gnhb3isuhw -
hbv5azo3sw . NormalizeVector3_maxzero ; _rtZCSV -> pd3debhlnc = o2y45zbt2m4 .
isiqvhsvds - hbv5azo3sw . NormalizeVector4_maxzero ; _rtZCSV -> ln40dtmdft =
0.0 ; if ( o2y45zbt2m4 . jgyobyjg0x > 0.0 ) { _rtZCSV -> ln40dtmdft = 1.0 ; }
{ real_T * zcsv = & ( ( ( p0mddzrq0f * ) ssGetSolverZcSignalVector ( rtS ) )
-> cuaynzimio [ 0 ] ) ; int_T i ; for ( i = 0 ; i < 5 ; i ++ ) { zcsv [ i ] =
0.0 ; } } if ( hrxu5rhe3af . p4n3550tai == 1 ) { _rtZCSV -> cuaynzimio [ 0 ]
= 0.0 ; _rtZCSV -> cuaynzimio [ 1 ] = 0.0 ; if ( ( o2y45zbt2m4 . an1hct1vdk [
4 ] > o2y45zbt2m4 . an1hct1vdk [ 0 ] ) && ( o2y45zbt2m4 . an1hct1vdk [ 4 ] >
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) ) { _rtZCSV -> cuaynzimio [ 0 ] = 1.0 ; }
else if ( o2y45zbt2m4 . an1hct1vdk [ 8 ] > o2y45zbt2m4 . an1hct1vdk [ 0 ] ) {
_rtZCSV -> cuaynzimio [ 1 ] = 1.0 ; } { ( ( p0mddzrq0f * )
ssGetSolverZcSignalVector ( rtS ) ) -> p5ibpoygyq = 0.0 ; } if ( hrxu5rhe3af
. hnbwguuonj == 0 ) { _rtZCSV -> p5ibpoygyq = o2y45zbt2m4 . hi5t21up55 ; } {
( ( p0mddzrq0f * ) ssGetSolverZcSignalVector ( rtS ) ) -> iyjkgpjk2z = 0.0 ;
} if ( hrxu5rhe3af . hnbwguuonj == 1 ) { _rtZCSV -> iyjkgpjk2z = o2y45zbt2m4
. mz4bssc4xj ; } { ( ( p0mddzrq0f * ) ssGetSolverZcSignalVector ( rtS ) ) ->
b5utqecrmv = 0.0 ; } if ( hrxu5rhe3af . hnbwguuonj == 2 ) { _rtZCSV ->
b5utqecrmv = o2y45zbt2m4 . b51zos5ddd ; } } } void MdlTerminate ( void ) {
gcif3exjdu ( & ( hrxu5rhe3af . p11kqkd5tq . rtm ) ) ; } static void
mr_main_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const
void * srcData , size_t numBytes ) ; static void mr_main_cacheDataAsMxArray (
mxArray * destArray , mwIndex i , int j , const void * srcData , size_t
numBytes ) { mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1
, numBytes , mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData (
newArray ) , ( const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber (
destArray , i , j , newArray ) ; } static void mr_main_restoreDataFromMxArray
( void * destData , const mxArray * srcArray , mwIndex i , int j , size_t
numBytes ) ; static void mr_main_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_main_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) ; static void mr_main_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber (
destArray , i , j , mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static
uint_T mr_main_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_main_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_main_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_main_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_main_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_main_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_main_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_main_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i
, int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber
( destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal )
) ; } static uint_T mr_main_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_main_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_main_GetDWork ( ) { static const char * ssDWFieldNames [ 3
] = { "o2y45zbt2m4" , "hrxu5rhe3af" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_main_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( o2y45zbt2m4
) , sizeof ( o2y45zbt2m4 ) ) ; { static const char * rtdwDataFieldNames [ 155
] = { "hrxu5rhe3af.p11kqkd5tq" , "hrxu5rhe3af.iwulztso32" ,
"hrxu5rhe3af.epbwbvrls5" , "hrxu5rhe3af.fytmukko2d" ,
"hrxu5rhe3af.curihjwvdq" , "hrxu5rhe3af.oumjhalsqc" ,
"hrxu5rhe3af.o2yvavvn5c" , "hrxu5rhe3af.hz2n5lmwzt" ,
"hrxu5rhe3af.g4x2krmhlv" , "hrxu5rhe3af.osfynlsngc" ,
"hrxu5rhe3af.c34nru5wvg" , "hrxu5rhe3af.o4uuntuq5v" ,
"hrxu5rhe3af.ign3og3yoe" , "hrxu5rhe3af.ewhzpwb1ca" ,
"hrxu5rhe3af.f1rxn31y0i" , "hrxu5rhe3af.h2f0zvrfqq" ,
"hrxu5rhe3af.nydzqlwwnn" , "hrxu5rhe3af.bdotsga2iv" ,
"hrxu5rhe3af.djim5bpjvv" , "hrxu5rhe3af.lqkanthoxg" ,
"hrxu5rhe3af.atmgtfljnh" , "hrxu5rhe3af.n10hslmo2a" ,
"hrxu5rhe3af.pa2kyvt1uy" , "hrxu5rhe3af.j13dkj5h0s" ,
"hrxu5rhe3af.p3xkfovqki" , "hrxu5rhe3af.k40rhthviy" ,
"hrxu5rhe3af.d1wjrwas1u" , "hrxu5rhe3af.jjpbiyjnrh" ,
"hrxu5rhe3af.cmfzrxdc11" , "hrxu5rhe3af.impwbrb5ul" ,
"hrxu5rhe3af.ivdqhywypm" , "hrxu5rhe3af.ck30ytigtq" ,
"hrxu5rhe3af.btkpsszf3k" , "hrxu5rhe3af.ckit2etwje" ,
"hrxu5rhe3af.irqzxzls3s" , "hrxu5rhe3af.febtg0cpg5" ,
"hrxu5rhe3af.g0uzej5lf1" , "hrxu5rhe3af.fdyoeqkdqi" ,
"hrxu5rhe3af.crvsqmvbcs" , "hrxu5rhe3af.bimi4g1wrk" ,
"hrxu5rhe3af.jlabupavh3" , "hrxu5rhe3af.he1tephpj4" ,
"hrxu5rhe3af.li05mozykd" , "hrxu5rhe3af.dhtgbttn1t" ,
"hrxu5rhe3af.dnqubg5s4k" , "hrxu5rhe3af.bze1flsb15" ,
"hrxu5rhe3af.pidbwsidci" , "hrxu5rhe3af.ji1vknz2dr" ,
"hrxu5rhe3af.gltmjlakux" , "hrxu5rhe3af.ojltdhe2we" ,
"hrxu5rhe3af.pwifaixjxb" , "hrxu5rhe3af.haxpv4vq51" ,
"hrxu5rhe3af.hxjxms0byf" , "hrxu5rhe3af.jij01p0qtw" ,
"hrxu5rhe3af.ihprlm0zdr" , "hrxu5rhe3af.jgquwrgfhd" ,
"hrxu5rhe3af.o2i4021xwh" , "hrxu5rhe3af.iqs2nrdyqs" ,
"hrxu5rhe3af.p4n3550tai" , "hrxu5rhe3af.iwklra2msj" ,
"hrxu5rhe3af.mt3gx422x1" , "hrxu5rhe3af.pug0coupbp" ,
"hrxu5rhe3af.jeg35werh5" , "hrxu5rhe3af.kz1j0tnmva" ,
"hrxu5rhe3af.lq5ek0jlzd" , "hrxu5rhe3af.mnrneviuut" ,
"hrxu5rhe3af.nqcixj2cfc" , "hrxu5rhe3af.gcz34svd4r" ,
"hrxu5rhe3af.anszycztem" , "hrxu5rhe3af.ane43mgfgs" ,
"hrxu5rhe3af.hkxlm4qdro" , "hrxu5rhe3af.fnu1tvdbyx" ,
"hrxu5rhe3af.fq3jja1aol" , "hrxu5rhe3af.nbmuo2yzhf" ,
"hrxu5rhe3af.ev5en1vf5z" , "hrxu5rhe3af.fnnqkeqpmg" ,
"hrxu5rhe3af.j1uacuucpv" , "hrxu5rhe3af.cbsmbddbag" ,
"hrxu5rhe3af.bnzh2jzuy5" , "hrxu5rhe3af.pmgcir2p13" ,
"hrxu5rhe3af.obuyxhugh2" , "hrxu5rhe3af.h5fod2fj2q" ,
"hrxu5rhe3af.hnbwguuonj" , "hrxu5rhe3af.fimtx0wf43" ,
"hrxu5rhe3af.jxtww5tjxt" , "hrxu5rhe3af.as5m3dr43z" ,
"hrxu5rhe3af.gtaj4wmjuq" , "hrxu5rhe3af.a0tdfwofzg" ,
"hrxu5rhe3af.ikwlyg3xde" , "hrxu5rhe3af.nw1rjo5a2w" ,
"hrxu5rhe3af.kg1shmc2lb" , "hrxu5rhe3af.pdpb34jklm" ,
"hrxu5rhe3af.dclbaaw1uo" , "hrxu5rhe3af.dxe5u3tdqf" ,
"hrxu5rhe3af.enqbz4gbik" , "hrxu5rhe3af.kma110u0cd" ,
"hrxu5rhe3af.p31xfuh0e2" , "hrxu5rhe3af.op3ehrh51o" ,
"hrxu5rhe3af.lb3hih1zhu" , "hrxu5rhe3af.jjpaqm4yys" ,
"hrxu5rhe3af.glbjm2bh2o" , "hrxu5rhe3af.m0glaktt01" ,
"hrxu5rhe3af.ihdnc2epba" , "hrxu5rhe3af.c1p4hnj5v1" ,
"hrxu5rhe3af.gczym4ozql" , "hrxu5rhe3af.mb3ab3hq0l" ,
"hrxu5rhe3af.lwgiflcl1s" , "hrxu5rhe3af.exhkqeoxjl" ,
"hrxu5rhe3af.e2pe11pwxn" , "hrxu5rhe3af.opg1lhdczb" ,
"hrxu5rhe3af.g24vxooz0v" , "hrxu5rhe3af.l3pfqrb31o" ,
"hrxu5rhe3af.jiqhomoo0v" , "hrxu5rhe3af.jmjdutrgwi" ,
"hrxu5rhe3af.gcdlpfr3qr" , "hrxu5rhe3af.bhx2bk5lkm" ,
"hrxu5rhe3af.gxxnmirgwt" , "hrxu5rhe3af.ayulg3mnvk" ,
"hrxu5rhe3af.dmkiyir0bc" , "hrxu5rhe3af.nlifgx53vj" ,
"hrxu5rhe3af.cozmdzu0w1" , "hrxu5rhe3af.cnj1jumxqg" ,
"hrxu5rhe3af.ckwrsfgl5j" , "hrxu5rhe3af.e2cixfebva" ,
"hrxu5rhe3af.i5keywnlob" , "hrxu5rhe3af.ae5papqlus" ,
"hrxu5rhe3af.hbtp1swogp" , "hrxu5rhe3af.ct2fu2r1og" ,
"hrxu5rhe3af.mp3yltewxi" , "hrxu5rhe3af.brmqgwecvy" ,
"hrxu5rhe3af.kjzbuo2ejd" , "hrxu5rhe3af.ddgb0ny2wp" ,
"hrxu5rhe3af.ozme2zffq1" , "hrxu5rhe3af.pqxjs5shcl" ,
"hrxu5rhe3af.jydhsrazby" , "hrxu5rhe3af.nfvyn45pdm" ,
"hrxu5rhe3af.cjwjqcd1zs" , "hrxu5rhe3af.m2abnapxna" ,
"hrxu5rhe3af.ejudse0oqw" , "hrxu5rhe3af.oxb0jyodnm.ioyk4rkcqw" ,
"hrxu5rhe3af.oxb0jyodnm.cz2sd5ks45" , "hrxu5rhe3af.bghekfjhrb.jvxfs0mjwv" ,
"hrxu5rhe3af.bghekfjhrb.iftxgfmwnh" , "hrxu5rhe3af.iyw4crazdc.jlpifn4yub" ,
"hrxu5rhe3af.iyw4crazdc.frt22lnhun" , "hrxu5rhe3af.npgo12zmto.h4htzwynch" ,
"hrxu5rhe3af.npgo12zmto.lkqtujj5qn" , "hrxu5rhe3af.hqjl54s2qvo.ioyk4rkcqw" ,
"hrxu5rhe3af.hqjl54s2qvo.cz2sd5ks45" , "hrxu5rhe3af.pefmh4xzsjq.jvxfs0mjwv" ,
"hrxu5rhe3af.pefmh4xzsjq.iftxgfmwnh" , "hrxu5rhe3af.n0mztpd0lov.jlpifn4yub" ,
"hrxu5rhe3af.n0mztpd0lov.frt22lnhun" , "hrxu5rhe3af.bjbtw11222c.h4htzwynch" ,
"hrxu5rhe3af.bjbtw11222c.lkqtujj5qn" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 155 , rtdwDataFieldNames ) ; { mxArray *
varData = mr_MagneticFieldInPolarCoords_GetDWork ( & ( hrxu5rhe3af .
p11kqkd5tq ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; }
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
hrxu5rhe3af . iwulztso32 ) , sizeof ( hrxu5rhe3af . iwulztso32 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
hrxu5rhe3af . epbwbvrls5 ) , sizeof ( hrxu5rhe3af . epbwbvrls5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
hrxu5rhe3af . fytmukko2d ) , sizeof ( hrxu5rhe3af . fytmukko2d ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
hrxu5rhe3af . curihjwvdq ) , sizeof ( hrxu5rhe3af . curihjwvdq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
hrxu5rhe3af . oumjhalsqc ) , sizeof ( hrxu5rhe3af . oumjhalsqc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
hrxu5rhe3af . o2yvavvn5c ) , sizeof ( hrxu5rhe3af . o2yvavvn5c ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
hrxu5rhe3af . hz2n5lmwzt ) , sizeof ( hrxu5rhe3af . hz2n5lmwzt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
hrxu5rhe3af . g4x2krmhlv ) , sizeof ( hrxu5rhe3af . g4x2krmhlv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
hrxu5rhe3af . osfynlsngc ) , sizeof ( hrxu5rhe3af . osfynlsngc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
hrxu5rhe3af . c34nru5wvg ) , sizeof ( hrxu5rhe3af . c34nru5wvg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
hrxu5rhe3af . o4uuntuq5v ) , sizeof ( hrxu5rhe3af . o4uuntuq5v ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
hrxu5rhe3af . ign3og3yoe ) , sizeof ( hrxu5rhe3af . ign3og3yoe ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
hrxu5rhe3af . ewhzpwb1ca ) , sizeof ( hrxu5rhe3af . ewhzpwb1ca ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
hrxu5rhe3af . f1rxn31y0i ) , sizeof ( hrxu5rhe3af . f1rxn31y0i ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
hrxu5rhe3af . h2f0zvrfqq ) , sizeof ( hrxu5rhe3af . h2f0zvrfqq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
hrxu5rhe3af . nydzqlwwnn ) , sizeof ( hrxu5rhe3af . nydzqlwwnn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
hrxu5rhe3af . bdotsga2iv ) , sizeof ( hrxu5rhe3af . bdotsga2iv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
hrxu5rhe3af . djim5bpjvv ) , sizeof ( hrxu5rhe3af . djim5bpjvv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
hrxu5rhe3af . lqkanthoxg ) , sizeof ( hrxu5rhe3af . lqkanthoxg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
hrxu5rhe3af . atmgtfljnh ) , sizeof ( hrxu5rhe3af . atmgtfljnh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
hrxu5rhe3af . n10hslmo2a ) , sizeof ( hrxu5rhe3af . n10hslmo2a ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
hrxu5rhe3af . pa2kyvt1uy ) , sizeof ( hrxu5rhe3af . pa2kyvt1uy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
hrxu5rhe3af . j13dkj5h0s ) , sizeof ( hrxu5rhe3af . j13dkj5h0s ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
hrxu5rhe3af . p3xkfovqki ) , sizeof ( hrxu5rhe3af . p3xkfovqki ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
hrxu5rhe3af . k40rhthviy ) , sizeof ( hrxu5rhe3af . k40rhthviy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
hrxu5rhe3af . d1wjrwas1u ) , sizeof ( hrxu5rhe3af . d1wjrwas1u ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
hrxu5rhe3af . jjpbiyjnrh ) , sizeof ( hrxu5rhe3af . jjpbiyjnrh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
hrxu5rhe3af . cmfzrxdc11 ) , sizeof ( hrxu5rhe3af . cmfzrxdc11 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
hrxu5rhe3af . impwbrb5ul ) , sizeof ( hrxu5rhe3af . impwbrb5ul ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
hrxu5rhe3af . ivdqhywypm ) , sizeof ( hrxu5rhe3af . ivdqhywypm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
hrxu5rhe3af . ck30ytigtq ) , sizeof ( hrxu5rhe3af . ck30ytigtq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
hrxu5rhe3af . btkpsszf3k ) , sizeof ( hrxu5rhe3af . btkpsszf3k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
hrxu5rhe3af . ckit2etwje ) , sizeof ( hrxu5rhe3af . ckit2etwje ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
hrxu5rhe3af . irqzxzls3s ) , sizeof ( hrxu5rhe3af . irqzxzls3s ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
hrxu5rhe3af . febtg0cpg5 ) , sizeof ( hrxu5rhe3af . febtg0cpg5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
hrxu5rhe3af . g0uzej5lf1 ) , sizeof ( hrxu5rhe3af . g0uzej5lf1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
hrxu5rhe3af . fdyoeqkdqi ) , sizeof ( hrxu5rhe3af . fdyoeqkdqi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
hrxu5rhe3af . crvsqmvbcs ) , sizeof ( hrxu5rhe3af . crvsqmvbcs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
hrxu5rhe3af . bimi4g1wrk ) , sizeof ( hrxu5rhe3af . bimi4g1wrk ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
hrxu5rhe3af . jlabupavh3 ) , sizeof ( hrxu5rhe3af . jlabupavh3 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
hrxu5rhe3af . he1tephpj4 ) , sizeof ( hrxu5rhe3af . he1tephpj4 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
hrxu5rhe3af . li05mozykd ) , sizeof ( hrxu5rhe3af . li05mozykd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
hrxu5rhe3af . dhtgbttn1t ) , sizeof ( hrxu5rhe3af . dhtgbttn1t ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
hrxu5rhe3af . dnqubg5s4k ) , sizeof ( hrxu5rhe3af . dnqubg5s4k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
hrxu5rhe3af . bze1flsb15 ) , sizeof ( hrxu5rhe3af . bze1flsb15 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
hrxu5rhe3af . pidbwsidci ) , sizeof ( hrxu5rhe3af . pidbwsidci ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
hrxu5rhe3af . ji1vknz2dr ) , sizeof ( hrxu5rhe3af . ji1vknz2dr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
hrxu5rhe3af . gltmjlakux ) , sizeof ( hrxu5rhe3af . gltmjlakux ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
hrxu5rhe3af . ojltdhe2we ) , sizeof ( hrxu5rhe3af . ojltdhe2we ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
hrxu5rhe3af . pwifaixjxb ) , sizeof ( hrxu5rhe3af . pwifaixjxb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
hrxu5rhe3af . haxpv4vq51 ) , sizeof ( hrxu5rhe3af . haxpv4vq51 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
hrxu5rhe3af . hxjxms0byf ) , sizeof ( hrxu5rhe3af . hxjxms0byf ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
hrxu5rhe3af . jij01p0qtw ) , sizeof ( hrxu5rhe3af . jij01p0qtw ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
hrxu5rhe3af . ihprlm0zdr ) , sizeof ( hrxu5rhe3af . ihprlm0zdr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
hrxu5rhe3af . jgquwrgfhd ) , sizeof ( hrxu5rhe3af . jgquwrgfhd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
hrxu5rhe3af . o2i4021xwh ) , sizeof ( hrxu5rhe3af . o2i4021xwh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
hrxu5rhe3af . iqs2nrdyqs ) , sizeof ( hrxu5rhe3af . iqs2nrdyqs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
hrxu5rhe3af . p4n3550tai ) , sizeof ( hrxu5rhe3af . p4n3550tai ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
hrxu5rhe3af . iwklra2msj ) , sizeof ( hrxu5rhe3af . iwklra2msj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
hrxu5rhe3af . mt3gx422x1 ) , sizeof ( hrxu5rhe3af . mt3gx422x1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
hrxu5rhe3af . pug0coupbp ) , sizeof ( hrxu5rhe3af . pug0coupbp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
hrxu5rhe3af . jeg35werh5 ) , sizeof ( hrxu5rhe3af . jeg35werh5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
hrxu5rhe3af . kz1j0tnmva ) , sizeof ( hrxu5rhe3af . kz1j0tnmva ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
hrxu5rhe3af . lq5ek0jlzd ) , sizeof ( hrxu5rhe3af . lq5ek0jlzd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
hrxu5rhe3af . mnrneviuut ) , sizeof ( hrxu5rhe3af . mnrneviuut ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
hrxu5rhe3af . nqcixj2cfc ) , sizeof ( hrxu5rhe3af . nqcixj2cfc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
hrxu5rhe3af . gcz34svd4r ) , sizeof ( hrxu5rhe3af . gcz34svd4r ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & (
hrxu5rhe3af . anszycztem ) , sizeof ( hrxu5rhe3af . anszycztem ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & (
hrxu5rhe3af . ane43mgfgs ) , sizeof ( hrxu5rhe3af . ane43mgfgs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & (
hrxu5rhe3af . hkxlm4qdro ) , sizeof ( hrxu5rhe3af . hkxlm4qdro ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void * ) & (
hrxu5rhe3af . fnu1tvdbyx ) , sizeof ( hrxu5rhe3af . fnu1tvdbyx ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void * ) & (
hrxu5rhe3af . fq3jja1aol ) , sizeof ( hrxu5rhe3af . fq3jja1aol ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void * ) & (
hrxu5rhe3af . nbmuo2yzhf ) , sizeof ( hrxu5rhe3af . nbmuo2yzhf ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void * ) & (
hrxu5rhe3af . ev5en1vf5z ) , sizeof ( hrxu5rhe3af . ev5en1vf5z ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void * ) & (
hrxu5rhe3af . fnnqkeqpmg ) , sizeof ( hrxu5rhe3af . fnnqkeqpmg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void * ) & (
hrxu5rhe3af . j1uacuucpv ) , sizeof ( hrxu5rhe3af . j1uacuucpv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void * ) & (
hrxu5rhe3af . cbsmbddbag ) , sizeof ( hrxu5rhe3af . cbsmbddbag ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void * ) & (
hrxu5rhe3af . bnzh2jzuy5 ) , sizeof ( hrxu5rhe3af . bnzh2jzuy5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void * ) & (
hrxu5rhe3af . pmgcir2p13 ) , sizeof ( hrxu5rhe3af . pmgcir2p13 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void * ) & (
hrxu5rhe3af . obuyxhugh2 ) , sizeof ( hrxu5rhe3af . obuyxhugh2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void * ) & (
hrxu5rhe3af . h5fod2fj2q ) , sizeof ( hrxu5rhe3af . h5fod2fj2q ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void * ) & (
hrxu5rhe3af . hnbwguuonj ) , sizeof ( hrxu5rhe3af . hnbwguuonj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void * ) & (
hrxu5rhe3af . fimtx0wf43 ) , sizeof ( hrxu5rhe3af . fimtx0wf43 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void * ) & (
hrxu5rhe3af . jxtww5tjxt ) , sizeof ( hrxu5rhe3af . jxtww5tjxt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const void * ) & (
hrxu5rhe3af . as5m3dr43z ) , sizeof ( hrxu5rhe3af . as5m3dr43z ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const void * ) & (
hrxu5rhe3af . gtaj4wmjuq ) , sizeof ( hrxu5rhe3af . gtaj4wmjuq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const void * ) & (
hrxu5rhe3af . a0tdfwofzg ) , sizeof ( hrxu5rhe3af . a0tdfwofzg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const void * ) & (
hrxu5rhe3af . ikwlyg3xde ) , sizeof ( hrxu5rhe3af . ikwlyg3xde ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const void * ) & (
hrxu5rhe3af . nw1rjo5a2w ) , sizeof ( hrxu5rhe3af . nw1rjo5a2w ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const void * ) & (
hrxu5rhe3af . kg1shmc2lb ) , sizeof ( hrxu5rhe3af . kg1shmc2lb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const void * ) & (
hrxu5rhe3af . pdpb34jklm ) , sizeof ( hrxu5rhe3af . pdpb34jklm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 92 , ( const void * ) & (
hrxu5rhe3af . dclbaaw1uo ) , sizeof ( hrxu5rhe3af . dclbaaw1uo ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 93 , ( const void * ) & (
hrxu5rhe3af . dxe5u3tdqf ) , sizeof ( hrxu5rhe3af . dxe5u3tdqf ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 94 , ( const void * ) & (
hrxu5rhe3af . enqbz4gbik ) , sizeof ( hrxu5rhe3af . enqbz4gbik ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 95 , ( const void * ) & (
hrxu5rhe3af . kma110u0cd ) , sizeof ( hrxu5rhe3af . kma110u0cd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 96 , ( const void * ) & (
hrxu5rhe3af . p31xfuh0e2 ) , sizeof ( hrxu5rhe3af . p31xfuh0e2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 97 , ( const void * ) & (
hrxu5rhe3af . op3ehrh51o ) , sizeof ( hrxu5rhe3af . op3ehrh51o ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 98 , ( const void * ) & (
hrxu5rhe3af . lb3hih1zhu ) , sizeof ( hrxu5rhe3af . lb3hih1zhu ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 99 , ( const void * ) & (
hrxu5rhe3af . jjpaqm4yys ) , sizeof ( hrxu5rhe3af . jjpaqm4yys ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 100 , ( const void * ) & (
hrxu5rhe3af . glbjm2bh2o ) , sizeof ( hrxu5rhe3af . glbjm2bh2o ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 101 , ( const void * ) & (
hrxu5rhe3af . m0glaktt01 ) , sizeof ( hrxu5rhe3af . m0glaktt01 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 102 , ( const void * ) & (
hrxu5rhe3af . ihdnc2epba ) , sizeof ( hrxu5rhe3af . ihdnc2epba ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 103 , ( const void * ) & (
hrxu5rhe3af . c1p4hnj5v1 ) , sizeof ( hrxu5rhe3af . c1p4hnj5v1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 104 , ( const void * ) & (
hrxu5rhe3af . gczym4ozql ) , sizeof ( hrxu5rhe3af . gczym4ozql ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 105 , ( const void * ) & (
hrxu5rhe3af . mb3ab3hq0l ) , sizeof ( hrxu5rhe3af . mb3ab3hq0l ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 106 , ( const void * ) & (
hrxu5rhe3af . lwgiflcl1s ) , sizeof ( hrxu5rhe3af . lwgiflcl1s ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 107 , ( const void * ) & (
hrxu5rhe3af . exhkqeoxjl ) , sizeof ( hrxu5rhe3af . exhkqeoxjl ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 108 , ( const void * ) & (
hrxu5rhe3af . e2pe11pwxn ) , sizeof ( hrxu5rhe3af . e2pe11pwxn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 109 , ( const void * ) & (
hrxu5rhe3af . opg1lhdczb ) , sizeof ( hrxu5rhe3af . opg1lhdczb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 110 , ( const void * ) & (
hrxu5rhe3af . g24vxooz0v ) , sizeof ( hrxu5rhe3af . g24vxooz0v ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 111 , ( const void * ) & (
hrxu5rhe3af . l3pfqrb31o ) , sizeof ( hrxu5rhe3af . l3pfqrb31o ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 112 , ( const void * ) & (
hrxu5rhe3af . jiqhomoo0v ) , sizeof ( hrxu5rhe3af . jiqhomoo0v ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 113 , ( const void * ) & (
hrxu5rhe3af . jmjdutrgwi ) , sizeof ( hrxu5rhe3af . jmjdutrgwi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 114 , ( const void * ) & (
hrxu5rhe3af . gcdlpfr3qr ) , sizeof ( hrxu5rhe3af . gcdlpfr3qr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 115 , ( const void * ) & (
hrxu5rhe3af . bhx2bk5lkm ) , sizeof ( hrxu5rhe3af . bhx2bk5lkm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 116 , ( const void * ) & (
hrxu5rhe3af . gxxnmirgwt ) , sizeof ( hrxu5rhe3af . gxxnmirgwt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 117 , ( const void * ) & (
hrxu5rhe3af . ayulg3mnvk ) , sizeof ( hrxu5rhe3af . ayulg3mnvk ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 118 , ( const void * ) & (
hrxu5rhe3af . dmkiyir0bc ) , sizeof ( hrxu5rhe3af . dmkiyir0bc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 119 , ( const void * ) & (
hrxu5rhe3af . nlifgx53vj ) , sizeof ( hrxu5rhe3af . nlifgx53vj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 120 , ( const void * ) & (
hrxu5rhe3af . cozmdzu0w1 ) , sizeof ( hrxu5rhe3af . cozmdzu0w1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 121 , ( const void * ) & (
hrxu5rhe3af . cnj1jumxqg ) , sizeof ( hrxu5rhe3af . cnj1jumxqg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 122 , ( const void * ) & (
hrxu5rhe3af . ckwrsfgl5j ) , sizeof ( hrxu5rhe3af . ckwrsfgl5j ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 123 , ( const void * ) & (
hrxu5rhe3af . e2cixfebva ) , sizeof ( hrxu5rhe3af . e2cixfebva ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 124 , ( const void * ) & (
hrxu5rhe3af . i5keywnlob ) , sizeof ( hrxu5rhe3af . i5keywnlob ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 125 , ( const void * ) & (
hrxu5rhe3af . ae5papqlus ) , sizeof ( hrxu5rhe3af . ae5papqlus ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 126 , ( const void * ) & (
hrxu5rhe3af . hbtp1swogp ) , sizeof ( hrxu5rhe3af . hbtp1swogp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 127 , ( const void * ) & (
hrxu5rhe3af . ct2fu2r1og ) , sizeof ( hrxu5rhe3af . ct2fu2r1og ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 128 , ( const void * ) & (
hrxu5rhe3af . mp3yltewxi ) , sizeof ( hrxu5rhe3af . mp3yltewxi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 129 , ( const void * ) & (
hrxu5rhe3af . brmqgwecvy ) , sizeof ( hrxu5rhe3af . brmqgwecvy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 130 , ( const void * ) & (
hrxu5rhe3af . kjzbuo2ejd ) , sizeof ( hrxu5rhe3af . kjzbuo2ejd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 131 , ( const void * ) & (
hrxu5rhe3af . ddgb0ny2wp ) , sizeof ( hrxu5rhe3af . ddgb0ny2wp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 132 , ( const void * ) & (
hrxu5rhe3af . ozme2zffq1 ) , sizeof ( hrxu5rhe3af . ozme2zffq1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 133 , ( const void * ) & (
hrxu5rhe3af . pqxjs5shcl ) , sizeof ( hrxu5rhe3af . pqxjs5shcl ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 134 , ( const void * ) & (
hrxu5rhe3af . jydhsrazby ) , sizeof ( hrxu5rhe3af . jydhsrazby ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 135 , ( const void * ) & (
hrxu5rhe3af . nfvyn45pdm ) , sizeof ( hrxu5rhe3af . nfvyn45pdm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 136 , ( const void * ) & (
hrxu5rhe3af . cjwjqcd1zs ) , sizeof ( hrxu5rhe3af . cjwjqcd1zs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 137 , ( const void * ) & (
hrxu5rhe3af . m2abnapxna ) , sizeof ( hrxu5rhe3af . m2abnapxna ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 138 , ( const void * ) & (
hrxu5rhe3af . ejudse0oqw ) , sizeof ( hrxu5rhe3af . ejudse0oqw ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 139 , ( const void * ) & (
hrxu5rhe3af . oxb0jyodnm . ioyk4rkcqw ) , sizeof ( hrxu5rhe3af . oxb0jyodnm .
ioyk4rkcqw ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 140 , ( const
void * ) & ( hrxu5rhe3af . oxb0jyodnm . cz2sd5ks45 ) , sizeof ( hrxu5rhe3af .
oxb0jyodnm . cz2sd5ks45 ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 141
, ( const void * ) & ( hrxu5rhe3af . bghekfjhrb . jvxfs0mjwv ) , sizeof (
hrxu5rhe3af . bghekfjhrb . jvxfs0mjwv ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 142 , ( const void * ) & ( hrxu5rhe3af . bghekfjhrb .
iftxgfmwnh ) , sizeof ( hrxu5rhe3af . bghekfjhrb . iftxgfmwnh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 143 , ( const void * ) & (
hrxu5rhe3af . iyw4crazdc . jlpifn4yub ) , sizeof ( hrxu5rhe3af . iyw4crazdc .
jlpifn4yub ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 144 , ( const
void * ) & ( hrxu5rhe3af . iyw4crazdc . frt22lnhun ) , sizeof ( hrxu5rhe3af .
iyw4crazdc . frt22lnhun ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 145
, ( const void * ) & ( hrxu5rhe3af . npgo12zmto . h4htzwynch ) , sizeof (
hrxu5rhe3af . npgo12zmto . h4htzwynch ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 146 , ( const void * ) & ( hrxu5rhe3af . npgo12zmto .
lkqtujj5qn ) , sizeof ( hrxu5rhe3af . npgo12zmto . lkqtujj5qn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 147 , ( const void * ) & (
hrxu5rhe3af . hqjl54s2qvo . ioyk4rkcqw ) , sizeof ( hrxu5rhe3af . hqjl54s2qvo
. ioyk4rkcqw ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 148 , ( const
void * ) & ( hrxu5rhe3af . hqjl54s2qvo . cz2sd5ks45 ) , sizeof ( hrxu5rhe3af
. hqjl54s2qvo . cz2sd5ks45 ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 ,
149 , ( const void * ) & ( hrxu5rhe3af . pefmh4xzsjq . jvxfs0mjwv ) , sizeof
( hrxu5rhe3af . pefmh4xzsjq . jvxfs0mjwv ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 150 , ( const void * ) & ( hrxu5rhe3af . pefmh4xzsjq .
iftxgfmwnh ) , sizeof ( hrxu5rhe3af . pefmh4xzsjq . iftxgfmwnh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 151 , ( const void * ) & (
hrxu5rhe3af . n0mztpd0lov . jlpifn4yub ) , sizeof ( hrxu5rhe3af . n0mztpd0lov
. jlpifn4yub ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 152 , ( const
void * ) & ( hrxu5rhe3af . n0mztpd0lov . frt22lnhun ) , sizeof ( hrxu5rhe3af
. n0mztpd0lov . frt22lnhun ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 ,
153 , ( const void * ) & ( hrxu5rhe3af . bjbtw11222c . h4htzwynch ) , sizeof
( hrxu5rhe3af . bjbtw11222c . h4htzwynch ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 154 , ( const void * ) & ( hrxu5rhe3af . bjbtw11222c .
lkqtujj5qn ) , sizeof ( hrxu5rhe3af . bjbtw11222c . lkqtujj5qn ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_main_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( o2y45zbt2m4 ) , ssDW , 0 , 0
, sizeof ( o2y45zbt2m4 ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber
( ssDW , 0 , 1 ) ; mr_MagneticFieldInPolarCoords_SetDWork ( & ( hrxu5rhe3af .
p11kqkd5tq ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iwulztso32 ) ,
rtdwData , 0 , 1 , sizeof ( hrxu5rhe3af . iwulztso32 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . epbwbvrls5 ) ,
rtdwData , 0 , 2 , sizeof ( hrxu5rhe3af . epbwbvrls5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fytmukko2d ) ,
rtdwData , 0 , 3 , sizeof ( hrxu5rhe3af . fytmukko2d ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . curihjwvdq ) ,
rtdwData , 0 , 4 , sizeof ( hrxu5rhe3af . curihjwvdq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . oumjhalsqc ) ,
rtdwData , 0 , 5 , sizeof ( hrxu5rhe3af . oumjhalsqc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o2yvavvn5c ) ,
rtdwData , 0 , 6 , sizeof ( hrxu5rhe3af . o2yvavvn5c ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hz2n5lmwzt ) ,
rtdwData , 0 , 7 , sizeof ( hrxu5rhe3af . hz2n5lmwzt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . g4x2krmhlv ) ,
rtdwData , 0 , 8 , sizeof ( hrxu5rhe3af . g4x2krmhlv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . osfynlsngc ) ,
rtdwData , 0 , 9 , sizeof ( hrxu5rhe3af . osfynlsngc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . c34nru5wvg ) ,
rtdwData , 0 , 10 , sizeof ( hrxu5rhe3af . c34nru5wvg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o4uuntuq5v ) ,
rtdwData , 0 , 11 , sizeof ( hrxu5rhe3af . o4uuntuq5v ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ign3og3yoe ) ,
rtdwData , 0 , 12 , sizeof ( hrxu5rhe3af . ign3og3yoe ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ewhzpwb1ca ) ,
rtdwData , 0 , 13 , sizeof ( hrxu5rhe3af . ewhzpwb1ca ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . f1rxn31y0i ) ,
rtdwData , 0 , 14 , sizeof ( hrxu5rhe3af . f1rxn31y0i ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . h2f0zvrfqq ) ,
rtdwData , 0 , 15 , sizeof ( hrxu5rhe3af . h2f0zvrfqq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nydzqlwwnn ) ,
rtdwData , 0 , 16 , sizeof ( hrxu5rhe3af . nydzqlwwnn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bdotsga2iv ) ,
rtdwData , 0 , 17 , sizeof ( hrxu5rhe3af . bdotsga2iv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . djim5bpjvv ) ,
rtdwData , 0 , 18 , sizeof ( hrxu5rhe3af . djim5bpjvv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lqkanthoxg ) ,
rtdwData , 0 , 19 , sizeof ( hrxu5rhe3af . lqkanthoxg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . atmgtfljnh ) ,
rtdwData , 0 , 20 , sizeof ( hrxu5rhe3af . atmgtfljnh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . n10hslmo2a ) ,
rtdwData , 0 , 21 , sizeof ( hrxu5rhe3af . n10hslmo2a ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pa2kyvt1uy ) ,
rtdwData , 0 , 22 , sizeof ( hrxu5rhe3af . pa2kyvt1uy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j13dkj5h0s ) ,
rtdwData , 0 , 23 , sizeof ( hrxu5rhe3af . j13dkj5h0s ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . p3xkfovqki ) ,
rtdwData , 0 , 24 , sizeof ( hrxu5rhe3af . p3xkfovqki ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . k40rhthviy ) ,
rtdwData , 0 , 25 , sizeof ( hrxu5rhe3af . k40rhthviy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . d1wjrwas1u ) ,
rtdwData , 0 , 26 , sizeof ( hrxu5rhe3af . d1wjrwas1u ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jjpbiyjnrh ) ,
rtdwData , 0 , 27 , sizeof ( hrxu5rhe3af . jjpbiyjnrh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cmfzrxdc11 ) ,
rtdwData , 0 , 28 , sizeof ( hrxu5rhe3af . cmfzrxdc11 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . impwbrb5ul ) ,
rtdwData , 0 , 29 , sizeof ( hrxu5rhe3af . impwbrb5ul ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ivdqhywypm ) ,
rtdwData , 0 , 30 , sizeof ( hrxu5rhe3af . ivdqhywypm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ck30ytigtq ) ,
rtdwData , 0 , 31 , sizeof ( hrxu5rhe3af . ck30ytigtq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . btkpsszf3k ) ,
rtdwData , 0 , 32 , sizeof ( hrxu5rhe3af . btkpsszf3k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ckit2etwje ) ,
rtdwData , 0 , 33 , sizeof ( hrxu5rhe3af . ckit2etwje ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . irqzxzls3s ) ,
rtdwData , 0 , 34 , sizeof ( hrxu5rhe3af . irqzxzls3s ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . febtg0cpg5 ) ,
rtdwData , 0 , 35 , sizeof ( hrxu5rhe3af . febtg0cpg5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . g0uzej5lf1 ) ,
rtdwData , 0 , 36 , sizeof ( hrxu5rhe3af . g0uzej5lf1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fdyoeqkdqi ) ,
rtdwData , 0 , 37 , sizeof ( hrxu5rhe3af . fdyoeqkdqi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . crvsqmvbcs ) ,
rtdwData , 0 , 38 , sizeof ( hrxu5rhe3af . crvsqmvbcs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bimi4g1wrk ) ,
rtdwData , 0 , 39 , sizeof ( hrxu5rhe3af . bimi4g1wrk ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jlabupavh3 ) ,
rtdwData , 0 , 40 , sizeof ( hrxu5rhe3af . jlabupavh3 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . he1tephpj4 ) ,
rtdwData , 0 , 41 , sizeof ( hrxu5rhe3af . he1tephpj4 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . li05mozykd ) ,
rtdwData , 0 , 42 , sizeof ( hrxu5rhe3af . li05mozykd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dhtgbttn1t ) ,
rtdwData , 0 , 43 , sizeof ( hrxu5rhe3af . dhtgbttn1t ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dnqubg5s4k ) ,
rtdwData , 0 , 44 , sizeof ( hrxu5rhe3af . dnqubg5s4k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bze1flsb15 ) ,
rtdwData , 0 , 45 , sizeof ( hrxu5rhe3af . bze1flsb15 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pidbwsidci ) ,
rtdwData , 0 , 46 , sizeof ( hrxu5rhe3af . pidbwsidci ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ji1vknz2dr ) ,
rtdwData , 0 , 47 , sizeof ( hrxu5rhe3af . ji1vknz2dr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gltmjlakux ) ,
rtdwData , 0 , 48 , sizeof ( hrxu5rhe3af . gltmjlakux ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ojltdhe2we ) ,
rtdwData , 0 , 49 , sizeof ( hrxu5rhe3af . ojltdhe2we ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pwifaixjxb ) ,
rtdwData , 0 , 50 , sizeof ( hrxu5rhe3af . pwifaixjxb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . haxpv4vq51 ) ,
rtdwData , 0 , 51 , sizeof ( hrxu5rhe3af . haxpv4vq51 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hxjxms0byf ) ,
rtdwData , 0 , 52 , sizeof ( hrxu5rhe3af . hxjxms0byf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jij01p0qtw ) ,
rtdwData , 0 , 53 , sizeof ( hrxu5rhe3af . jij01p0qtw ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ihprlm0zdr ) ,
rtdwData , 0 , 54 , sizeof ( hrxu5rhe3af . ihprlm0zdr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jgquwrgfhd ) ,
rtdwData , 0 , 55 , sizeof ( hrxu5rhe3af . jgquwrgfhd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o2i4021xwh ) ,
rtdwData , 0 , 56 , sizeof ( hrxu5rhe3af . o2i4021xwh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iqs2nrdyqs ) ,
rtdwData , 0 , 57 , sizeof ( hrxu5rhe3af . iqs2nrdyqs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . p4n3550tai ) ,
rtdwData , 0 , 58 , sizeof ( hrxu5rhe3af . p4n3550tai ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iwklra2msj ) ,
rtdwData , 0 , 59 , sizeof ( hrxu5rhe3af . iwklra2msj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mt3gx422x1 ) ,
rtdwData , 0 , 60 , sizeof ( hrxu5rhe3af . mt3gx422x1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pug0coupbp ) ,
rtdwData , 0 , 61 , sizeof ( hrxu5rhe3af . pug0coupbp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jeg35werh5 ) ,
rtdwData , 0 , 62 , sizeof ( hrxu5rhe3af . jeg35werh5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kz1j0tnmva ) ,
rtdwData , 0 , 63 , sizeof ( hrxu5rhe3af . kz1j0tnmva ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lq5ek0jlzd ) ,
rtdwData , 0 , 64 , sizeof ( hrxu5rhe3af . lq5ek0jlzd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mnrneviuut ) ,
rtdwData , 0 , 65 , sizeof ( hrxu5rhe3af . mnrneviuut ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nqcixj2cfc ) ,
rtdwData , 0 , 66 , sizeof ( hrxu5rhe3af . nqcixj2cfc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gcz34svd4r ) ,
rtdwData , 0 , 67 , sizeof ( hrxu5rhe3af . gcz34svd4r ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . anszycztem ) ,
rtdwData , 0 , 68 , sizeof ( hrxu5rhe3af . anszycztem ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ane43mgfgs ) ,
rtdwData , 0 , 69 , sizeof ( hrxu5rhe3af . ane43mgfgs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hkxlm4qdro ) ,
rtdwData , 0 , 70 , sizeof ( hrxu5rhe3af . hkxlm4qdro ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fnu1tvdbyx ) ,
rtdwData , 0 , 71 , sizeof ( hrxu5rhe3af . fnu1tvdbyx ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fq3jja1aol ) ,
rtdwData , 0 , 72 , sizeof ( hrxu5rhe3af . fq3jja1aol ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nbmuo2yzhf ) ,
rtdwData , 0 , 73 , sizeof ( hrxu5rhe3af . nbmuo2yzhf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ev5en1vf5z ) ,
rtdwData , 0 , 74 , sizeof ( hrxu5rhe3af . ev5en1vf5z ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fnnqkeqpmg ) ,
rtdwData , 0 , 75 , sizeof ( hrxu5rhe3af . fnnqkeqpmg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j1uacuucpv ) ,
rtdwData , 0 , 76 , sizeof ( hrxu5rhe3af . j1uacuucpv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cbsmbddbag ) ,
rtdwData , 0 , 77 , sizeof ( hrxu5rhe3af . cbsmbddbag ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bnzh2jzuy5 ) ,
rtdwData , 0 , 78 , sizeof ( hrxu5rhe3af . bnzh2jzuy5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pmgcir2p13 ) ,
rtdwData , 0 , 79 , sizeof ( hrxu5rhe3af . pmgcir2p13 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . obuyxhugh2 ) ,
rtdwData , 0 , 80 , sizeof ( hrxu5rhe3af . obuyxhugh2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . h5fod2fj2q ) ,
rtdwData , 0 , 81 , sizeof ( hrxu5rhe3af . h5fod2fj2q ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hnbwguuonj ) ,
rtdwData , 0 , 82 , sizeof ( hrxu5rhe3af . hnbwguuonj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fimtx0wf43 ) ,
rtdwData , 0 , 83 , sizeof ( hrxu5rhe3af . fimtx0wf43 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jxtww5tjxt ) ,
rtdwData , 0 , 84 , sizeof ( hrxu5rhe3af . jxtww5tjxt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . as5m3dr43z ) ,
rtdwData , 0 , 85 , sizeof ( hrxu5rhe3af . as5m3dr43z ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gtaj4wmjuq ) ,
rtdwData , 0 , 86 , sizeof ( hrxu5rhe3af . gtaj4wmjuq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . a0tdfwofzg ) ,
rtdwData , 0 , 87 , sizeof ( hrxu5rhe3af . a0tdfwofzg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ikwlyg3xde ) ,
rtdwData , 0 , 88 , sizeof ( hrxu5rhe3af . ikwlyg3xde ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nw1rjo5a2w ) ,
rtdwData , 0 , 89 , sizeof ( hrxu5rhe3af . nw1rjo5a2w ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kg1shmc2lb ) ,
rtdwData , 0 , 90 , sizeof ( hrxu5rhe3af . kg1shmc2lb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pdpb34jklm ) ,
rtdwData , 0 , 91 , sizeof ( hrxu5rhe3af . pdpb34jklm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dclbaaw1uo ) ,
rtdwData , 0 , 92 , sizeof ( hrxu5rhe3af . dclbaaw1uo ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dxe5u3tdqf ) ,
rtdwData , 0 , 93 , sizeof ( hrxu5rhe3af . dxe5u3tdqf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . enqbz4gbik ) ,
rtdwData , 0 , 94 , sizeof ( hrxu5rhe3af . enqbz4gbik ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kma110u0cd ) ,
rtdwData , 0 , 95 , sizeof ( hrxu5rhe3af . kma110u0cd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . p31xfuh0e2 ) ,
rtdwData , 0 , 96 , sizeof ( hrxu5rhe3af . p31xfuh0e2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . op3ehrh51o ) ,
rtdwData , 0 , 97 , sizeof ( hrxu5rhe3af . op3ehrh51o ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lb3hih1zhu ) ,
rtdwData , 0 , 98 , sizeof ( hrxu5rhe3af . lb3hih1zhu ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jjpaqm4yys ) ,
rtdwData , 0 , 99 , sizeof ( hrxu5rhe3af . jjpaqm4yys ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . glbjm2bh2o ) ,
rtdwData , 0 , 100 , sizeof ( hrxu5rhe3af . glbjm2bh2o ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . m0glaktt01 ) ,
rtdwData , 0 , 101 , sizeof ( hrxu5rhe3af . m0glaktt01 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ihdnc2epba ) ,
rtdwData , 0 , 102 , sizeof ( hrxu5rhe3af . ihdnc2epba ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . c1p4hnj5v1 ) ,
rtdwData , 0 , 103 , sizeof ( hrxu5rhe3af . c1p4hnj5v1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gczym4ozql ) ,
rtdwData , 0 , 104 , sizeof ( hrxu5rhe3af . gczym4ozql ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mb3ab3hq0l ) ,
rtdwData , 0 , 105 , sizeof ( hrxu5rhe3af . mb3ab3hq0l ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lwgiflcl1s ) ,
rtdwData , 0 , 106 , sizeof ( hrxu5rhe3af . lwgiflcl1s ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . exhkqeoxjl ) ,
rtdwData , 0 , 107 , sizeof ( hrxu5rhe3af . exhkqeoxjl ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e2pe11pwxn ) ,
rtdwData , 0 , 108 , sizeof ( hrxu5rhe3af . e2pe11pwxn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . opg1lhdczb ) ,
rtdwData , 0 , 109 , sizeof ( hrxu5rhe3af . opg1lhdczb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . g24vxooz0v ) ,
rtdwData , 0 , 110 , sizeof ( hrxu5rhe3af . g24vxooz0v ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . l3pfqrb31o ) ,
rtdwData , 0 , 111 , sizeof ( hrxu5rhe3af . l3pfqrb31o ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jiqhomoo0v ) ,
rtdwData , 0 , 112 , sizeof ( hrxu5rhe3af . jiqhomoo0v ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jmjdutrgwi ) ,
rtdwData , 0 , 113 , sizeof ( hrxu5rhe3af . jmjdutrgwi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gcdlpfr3qr ) ,
rtdwData , 0 , 114 , sizeof ( hrxu5rhe3af . gcdlpfr3qr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bhx2bk5lkm ) ,
rtdwData , 0 , 115 , sizeof ( hrxu5rhe3af . bhx2bk5lkm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gxxnmirgwt ) ,
rtdwData , 0 , 116 , sizeof ( hrxu5rhe3af . gxxnmirgwt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ayulg3mnvk ) ,
rtdwData , 0 , 117 , sizeof ( hrxu5rhe3af . ayulg3mnvk ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dmkiyir0bc ) ,
rtdwData , 0 , 118 , sizeof ( hrxu5rhe3af . dmkiyir0bc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nlifgx53vj ) ,
rtdwData , 0 , 119 , sizeof ( hrxu5rhe3af . nlifgx53vj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cozmdzu0w1 ) ,
rtdwData , 0 , 120 , sizeof ( hrxu5rhe3af . cozmdzu0w1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cnj1jumxqg ) ,
rtdwData , 0 , 121 , sizeof ( hrxu5rhe3af . cnj1jumxqg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ckwrsfgl5j ) ,
rtdwData , 0 , 122 , sizeof ( hrxu5rhe3af . ckwrsfgl5j ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e2cixfebva ) ,
rtdwData , 0 , 123 , sizeof ( hrxu5rhe3af . e2cixfebva ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . i5keywnlob ) ,
rtdwData , 0 , 124 , sizeof ( hrxu5rhe3af . i5keywnlob ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ae5papqlus ) ,
rtdwData , 0 , 125 , sizeof ( hrxu5rhe3af . ae5papqlus ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hbtp1swogp ) ,
rtdwData , 0 , 126 , sizeof ( hrxu5rhe3af . hbtp1swogp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ct2fu2r1og ) ,
rtdwData , 0 , 127 , sizeof ( hrxu5rhe3af . ct2fu2r1og ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mp3yltewxi ) ,
rtdwData , 0 , 128 , sizeof ( hrxu5rhe3af . mp3yltewxi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . brmqgwecvy ) ,
rtdwData , 0 , 129 , sizeof ( hrxu5rhe3af . brmqgwecvy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kjzbuo2ejd ) ,
rtdwData , 0 , 130 , sizeof ( hrxu5rhe3af . kjzbuo2ejd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ddgb0ny2wp ) ,
rtdwData , 0 , 131 , sizeof ( hrxu5rhe3af . ddgb0ny2wp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ozme2zffq1 ) ,
rtdwData , 0 , 132 , sizeof ( hrxu5rhe3af . ozme2zffq1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pqxjs5shcl ) ,
rtdwData , 0 , 133 , sizeof ( hrxu5rhe3af . pqxjs5shcl ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jydhsrazby ) ,
rtdwData , 0 , 134 , sizeof ( hrxu5rhe3af . jydhsrazby ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nfvyn45pdm ) ,
rtdwData , 0 , 135 , sizeof ( hrxu5rhe3af . nfvyn45pdm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cjwjqcd1zs ) ,
rtdwData , 0 , 136 , sizeof ( hrxu5rhe3af . cjwjqcd1zs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . m2abnapxna ) ,
rtdwData , 0 , 137 , sizeof ( hrxu5rhe3af . m2abnapxna ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ejudse0oqw ) ,
rtdwData , 0 , 138 , sizeof ( hrxu5rhe3af . ejudse0oqw ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . oxb0jyodnm .
ioyk4rkcqw ) , rtdwData , 0 , 139 , sizeof ( hrxu5rhe3af . oxb0jyodnm .
ioyk4rkcqw ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. oxb0jyodnm . cz2sd5ks45 ) , rtdwData , 0 , 140 , sizeof ( hrxu5rhe3af .
oxb0jyodnm . cz2sd5ks45 ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & (
hrxu5rhe3af . bghekfjhrb . jvxfs0mjwv ) , rtdwData , 0 , 141 , sizeof (
hrxu5rhe3af . bghekfjhrb . jvxfs0mjwv ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . bghekfjhrb . iftxgfmwnh ) , rtdwData , 0 , 142 ,
sizeof ( hrxu5rhe3af . bghekfjhrb . iftxgfmwnh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iyw4crazdc .
jlpifn4yub ) , rtdwData , 0 , 143 , sizeof ( hrxu5rhe3af . iyw4crazdc .
jlpifn4yub ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. iyw4crazdc . frt22lnhun ) , rtdwData , 0 , 144 , sizeof ( hrxu5rhe3af .
iyw4crazdc . frt22lnhun ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & (
hrxu5rhe3af . npgo12zmto . h4htzwynch ) , rtdwData , 0 , 145 , sizeof (
hrxu5rhe3af . npgo12zmto . h4htzwynch ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . npgo12zmto . lkqtujj5qn ) , rtdwData , 0 , 146 ,
sizeof ( hrxu5rhe3af . npgo12zmto . lkqtujj5qn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hqjl54s2qvo .
ioyk4rkcqw ) , rtdwData , 0 , 147 , sizeof ( hrxu5rhe3af . hqjl54s2qvo .
ioyk4rkcqw ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. hqjl54s2qvo . cz2sd5ks45 ) , rtdwData , 0 , 148 , sizeof ( hrxu5rhe3af .
hqjl54s2qvo . cz2sd5ks45 ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) &
( hrxu5rhe3af . pefmh4xzsjq . jvxfs0mjwv ) , rtdwData , 0 , 149 , sizeof (
hrxu5rhe3af . pefmh4xzsjq . jvxfs0mjwv ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . pefmh4xzsjq . iftxgfmwnh ) , rtdwData , 0 , 150
, sizeof ( hrxu5rhe3af . pefmh4xzsjq . iftxgfmwnh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . n0mztpd0lov .
jlpifn4yub ) , rtdwData , 0 , 151 , sizeof ( hrxu5rhe3af . n0mztpd0lov .
jlpifn4yub ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. n0mztpd0lov . frt22lnhun ) , rtdwData , 0 , 152 , sizeof ( hrxu5rhe3af .
n0mztpd0lov . frt22lnhun ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) &
( hrxu5rhe3af . bjbtw11222c . h4htzwynch ) , rtdwData , 0 , 153 , sizeof (
hrxu5rhe3af . bjbtw11222c . h4htzwynch ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . bjbtw11222c . lkqtujj5qn ) , rtdwData , 0 , 154
, sizeof ( hrxu5rhe3af . bjbtw11222c . lkqtujj5qn ) ) ; } } mxArray *
mr_main_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ; mwIndex
subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks = 0 ; size_t
numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 1 ] ;
disallowedBlocksInChild [ 0 ] =
mr_MagneticFieldInPolarCoords_GetSimStateDisallowedBlocks ( ) ; { size_t i ;
for ( i = 0 ; i < 1 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i
] ; if ( NULL != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) {
data = data_i ; } numBlocks += mxGetM ( data_i ) ; } } } data =
mxCreateCellMatrix ( numBlocks + 3 , 3 ) ; { static const char * blockType [
3 ] = { "Scope" , "Scope" , "Scope" , } ; static const char * blockPath [ 3 ]
= { "main/Comparison/Scope" , "main/Scope1" ,
"main/Real physics/Sun position wrt s//c/Scope" , } ; static const int reason
[ 3 ] = { 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 3 ; ++ ( subs [
0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( double ) reason [ subs [
0 ] ] ) ) ; } } { size_t i ; for ( i = 0 ; i < 1 ; ++ i ) { mxArray * data_i
= disallowedBlocksInChild [ i ] ; if ( NULL != data_i ) { mwIndex subs_i [ 2
] , offset_i ; const mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for
( subs_i [ 0 ] = 0 ; subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) {
mwIndex j ; for ( j = 0 ; j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] =
j ; offset_i = mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij =
mxGetCell ( data_i , offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ;
subs [ 1 ] = j ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; }
mxDestroyArray ( data_i ) ; } } } return data ; } void MdlInitializeSizes (
void ) { ssSetNumContStates ( rtS , 14 ) ; ssSetNumPeriodicContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 13 ) ; ssSetNumBlocks ( rtS , 1441
) ; ssSetNumBlockIO ( rtS , 150 ) ; ssSetNumBlockParams ( rtS , 533 ) ; }
void MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetSampleTime ( rtS , 3 , 0.03 ) ; ssSetSampleTime ( rtS , 4 , 0.1 ) ;
ssSetSampleTime ( rtS , 5 , 1.0 ) ; ssSetSampleTime ( rtS , 6 , 2.0 ) ;
ssSetSampleTime ( rtS , 7 , 0.1 ) ; ssSetSampleTime ( rtS , 8 , 0.1 ) ;
ssSetSampleTime ( rtS , 9 , 0.1 ) ; ssSetSampleTime ( rtS , 10 , 0.1 ) ;
ssSetSampleTime ( rtS , 11 , 0.1 ) ; ssSetSampleTime ( rtS , 12 , 0.1 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ;
ssSetOffsetTime ( rtS , 4 , 0.0 ) ; ssSetOffsetTime ( rtS , 5 , 0.0 ) ;
ssSetOffsetTime ( rtS , 6 , 0.0 ) ; ssSetOffsetTime ( rtS , 7 , - 20.0 ) ;
ssSetOffsetTime ( rtS , 8 , - 21.0 ) ; ssSetOffsetTime ( rtS , 9 , - 22.0 ) ;
ssSetOffsetTime ( rtS , 10 , - 23.0 ) ; ssSetOffsetTime ( rtS , 11 , - 24.0 )
; ssSetOffsetTime ( rtS , 12 , - 25.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 437933454U ) ; ssSetChecksumVal ( rtS , 1 ,
3791509005U ) ; ssSetChecksumVal ( rtS , 2 , 3322113795U ) ; ssSetChecksumVal
( rtS , 3 , 3236631036U ) ; }
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
( ( void * ) & o2y45zbt2m4 ) ) ; ( void ) memset ( ( ( void * ) & o2y45zbt2m4
) , 0 , sizeof ( o2y45zbt2m ) ) ; } { real_T * x = ( real_T * ) & n1mubcupv31
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
n1mubcupv3 ) ) ; } { void * dwork = ( void * ) & hrxu5rhe3af ; ssSetRootDWork
( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( hrxu5rhe3a ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 20 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } main_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"main" ) ; ssSetPath ( rtS , "main" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 21600.0 ) ; dpqzzutcg1 ( rtS , 0 , 0 , & ( hrxu5rhe3af .
p11kqkd5tq . rtm ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"main/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
, 0 , - 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( hrxu5rhe3af .
p11kqkd5tq . rtm ) , sizeof ( hrxu5rhe3af . p11kqkd5tq . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
"main/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
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
absTolControl [ 14 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 1U , 1U , 1U , 0U
, 1U , 1U , 1U } ; static real_T contStateJacPerturbBoundMinVec [ 14 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 14 ] ; static uint8_T
zcAttributes [ 10 ] = { ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) } ; static
ssNonContDerivSigInfo nonContDerivSigInfo [ 1 ] = { { 3 * sizeof ( real_T ) ,
( char * ) ( & o2y45zbt2m4 . fkulvx00jr [ 0 ] ) , ( NULL ) } } ; { int i ;
for ( i = 0 ; i < 14 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
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
ssSetSolverNumZcSignals ( rtS , 10 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverZcThreshold ( rtS , 1.0E-13 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 10 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; }
ssSetChecksumVal ( rtS , 0 , 437933454U ) ; ssSetChecksumVal ( rtS , 1 ,
3791509005U ) ; ssSetChecksumVal ( rtS , 2 , 3322113795U ) ; ssSetChecksumVal
( rtS , 3 , 3236631036U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 46 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
hrxu5rhe3af . glbjm2bh2o ; systemRan [ 2 ] = ( sysRanDType * ) & hrxu5rhe3af
. gczym4ozql ; systemRan [ 3 ] = ( sysRanDType * ) & hrxu5rhe3af . ihdnc2epba
; systemRan [ 4 ] = ( sysRanDType * ) & hrxu5rhe3af . lb3hih1zhu ; systemRan
[ 5 ] = ( sysRanDType * ) & hrxu5rhe3af . lwgiflcl1s ; systemRan [ 6 ] = (
sysRanDType * ) & hrxu5rhe3af . hqjl54s2qvo . cz2sd5ks45 ; systemRan [ 7 ] =
( sysRanDType * ) & hrxu5rhe3af . pefmh4xzsjq . iftxgfmwnh ; systemRan [ 8 ]
= ( sysRanDType * ) & hrxu5rhe3af . enqbz4gbik ; systemRan [ 9 ] = (
sysRanDType * ) & hrxu5rhe3af . n0mztpd0lov . frt22lnhun ; systemRan [ 10 ] =
( sysRanDType * ) & hrxu5rhe3af . bjbtw11222c . lkqtujj5qn ; systemRan [ 11 ]
= ( sysRanDType * ) & hrxu5rhe3af . p31xfuh0e2 ; systemRan [ 12 ] = (
sysRanDType * ) & hrxu5rhe3af . dclbaaw1uo ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = (
sysRanDType * ) & hrxu5rhe3af . pdpb34jklm ; systemRan [ 18 ] = ( sysRanDType
* ) & hrxu5rhe3af . pdpb34jklm ; systemRan [ 19 ] = & rtAlwaysEnabled ;
systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] = & rtAlwaysEnabled ;
systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] = ( sysRanDType * ) &
hrxu5rhe3af . fimtx0wf43 ; systemRan [ 24 ] = ( sysRanDType * ) & hrxu5rhe3af
. a0tdfwofzg ; systemRan [ 25 ] = ( sysRanDType * ) & hrxu5rhe3af .
as5m3dr43z ; systemRan [ 26 ] = ( sysRanDType * ) & hrxu5rhe3af . h5fod2fj2q
; systemRan [ 27 ] = ( sysRanDType * ) & hrxu5rhe3af . nw1rjo5a2w ; systemRan
[ 28 ] = ( sysRanDType * ) & hrxu5rhe3af . oxb0jyodnm . cz2sd5ks45 ;
systemRan [ 29 ] = ( sysRanDType * ) & hrxu5rhe3af . bghekfjhrb . iftxgfmwnh
; systemRan [ 30 ] = ( sysRanDType * ) & hrxu5rhe3af . cbsmbddbag ; systemRan
[ 31 ] = ( sysRanDType * ) & hrxu5rhe3af . iyw4crazdc . frt22lnhun ;
systemRan [ 32 ] = ( sysRanDType * ) & hrxu5rhe3af . npgo12zmto . lkqtujj5qn
; systemRan [ 33 ] = ( sysRanDType * ) & hrxu5rhe3af . pmgcir2p13 ; systemRan
[ 34 ] = ( sysRanDType * ) & hrxu5rhe3af . fnnqkeqpmg ; systemRan [ 35 ] = &
rtAlwaysEnabled ; systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = &
rtAlwaysEnabled ; systemRan [ 38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = &
rtAlwaysEnabled ; systemRan [ 40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = &
rtAlwaysEnabled ; systemRan [ 42 ] = & rtAlwaysEnabled ; systemRan [ 43 ] = &
rtAlwaysEnabled ; systemRan [ 44 ] = & rtAlwaysEnabled ; systemRan [ 45 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_main_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_main_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_main_SetDWork )
; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS )
) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 13 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID13 ( tid ) ; }
