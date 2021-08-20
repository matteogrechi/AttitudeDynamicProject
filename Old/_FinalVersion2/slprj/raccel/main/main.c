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
#include "UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_WKjIFSsL.h"
#include "UKFCorrector_correctStateAndSqrtCovariance_D74IKMW2.h"
#include "UKFCorrector_correct_0DukvtxL.h"
#include "UKFCorrector_correct_jE8bEoap.h"
#include "UTMeanCovSqrt_dhYnfSkp.h"
#include "anon_yDH48dhx.h"
#include "attitudePropagation_EwVCPsTf.h"
#include "norm_fF2boBZW.h"
#include "qrFactor_Yb0wPWvf.h"
o2y45zbt2m o2y45zbt2m4 ; n1mubcupv3 n1mubcupv31 ; hrxu5rhe3a hrxu5rhe3af ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
m5wgi0ctev ( af2tclfwpd * localDW ) { localDW -> emkgbeqqs5 = 5 ; hrxu5rhe3af
. npgo12zmto . emkgbeqqs5 = 21 ; } void elhxh1fuui ( SimStruct * rtS_i ) { if
( ssGetTaskTime ( rtS_i , 5 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } } void k3uunhzc5w (
SimStruct * rtS_e ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ;
} void bbjtuydtdk ( SimStruct * rtS_m , real_T acaa5rmmuy , af2tclfwpd *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( acaa5rmmuy != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_m , localDW -> emkgbeqqs5 , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_m ) ) ; rt_ssReportDiagnosticAsWarning ( rtS_m , diag ) ;
} } void pyvvbdnqxo ( fciynmlasr * localDW ) { localDW -> cyzypjm5pc = 6 ;
hrxu5rhe3af . iyw4crazdc . cyzypjm5pc = 22 ; } void lo0d5ti0wo ( SimStruct *
rtS_g ) { if ( ssGetTaskTime ( rtS_g , 5 ) != ssGetTStart ( rtS_g ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_g ) ; } } void pkoiaofkhx (
SimStruct * rtS_e ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_e ) ;
} void bqx0vc3mud ( SimStruct * rtS_p , real_T nomilzrnj1 , fciynmlasr *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( nomilzrnj1 != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_p , localDW -> cyzypjm5pc , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_p ) ) ; rt_ssSet_slErrMsg ( rtS_p , diag ) ;
ssSetStopRequested ( rtS_p , ( int ) ssGetT ( rtS_p ) ) ; } } void eyp20xikbr
( jouayqdpoi * localDW ) { localDW -> fbhgjn50of = 8 ; hrxu5rhe3af .
bghekfjhrb . fbhgjn50of = 24 ; } void ciw1a3ycef ( SimStruct * rtS_m ) { if (
ssGetTaskTime ( rtS_m , 5 ) != ssGetTStart ( rtS_m ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_m ) ; } } void leyfenaqjz (
SimStruct * rtS_f ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_f ) ;
} void n53cqmpclo ( SimStruct * rtS_c , real_T cgdmdwlmhh , jouayqdpoi *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( cgdmdwlmhh != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_c , localDW -> fbhgjn50of , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_c ) ) ; rt_ssReportDiagnosticAsWarning ( rtS_c , diag ) ;
} } void lvepdtsvu1 ( f2fu2ihnng * localDW ) { localDW -> dmloqodxqz = 9 ;
hrxu5rhe3af . oxb0jyodnm . dmloqodxqz = 25 ; } void pzicdihqt4 ( SimStruct *
rtS_b ) { if ( ssGetTaskTime ( rtS_b , 5 ) != ssGetTStart ( rtS_b ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_b ) ; } } void dd41awjj4d (
SimStruct * rtS_c ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_c ) ;
} void prxbfmvl1e ( SimStruct * rtS_p , real_T nrozvfkekm , f2fu2ihnng *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( nrozvfkekm != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_p , localDW -> dmloqodxqz , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_p ) ) ; rt_ssSet_slErrMsg ( rtS_p , diag ) ;
ssSetStopRequested ( rtS_p , ( int ) ssGetT ( rtS_p ) ) ; } } void n11z2qtnyp
( const real_T n5fwjtrtab [ 2 ] , const real_T igzjsvau3z [ 2 ] , const
real_T aroe4yccp3 [ 2 ] , const real_T jmtcrxgana [ 2 ] , const real_T
bw0neo01iz [ 2 ] , const real_T clnqp52x4r [ 2 ] , g3zz1gnhke * localB ) {
real_T varargin_1 [ 6 ] ; real_T ex ; int32_T g_k ; int32_T k ; boolean_T
exitg1 ; varargin_1 [ 0 ] = n5fwjtrtab [ 0 ] * n5fwjtrtab [ 0 ] + n5fwjtrtab
[ 1 ] * n5fwjtrtab [ 1 ] ; varargin_1 [ 1 ] = igzjsvau3z [ 0 ] * igzjsvau3z [
0 ] + igzjsvau3z [ 1 ] * igzjsvau3z [ 1 ] ; varargin_1 [ 2 ] = aroe4yccp3 [ 0
] * aroe4yccp3 [ 0 ] + aroe4yccp3 [ 1 ] * aroe4yccp3 [ 1 ] ; varargin_1 [ 3 ]
= jmtcrxgana [ 0 ] * jmtcrxgana [ 0 ] + jmtcrxgana [ 1 ] * jmtcrxgana [ 1 ] ;
varargin_1 [ 4 ] = bw0neo01iz [ 0 ] * bw0neo01iz [ 0 ] + bw0neo01iz [ 1 ] *
bw0neo01iz [ 1 ] ; varargin_1 [ 5 ] = clnqp52x4r [ 0 ] * clnqp52x4r [ 0 ] +
clnqp52x4r [ 1 ] * clnqp52x4r [ 1 ] ; if ( ! muDoubleScalarIsNaN ( varargin_1
[ 0 ] ) ) { k = 1 ; } else { k = 0 ; g_k = 2 ; exitg1 = false ; while ( ( !
exitg1 ) && ( g_k < 7 ) ) { if ( ! muDoubleScalarIsNaN ( varargin_1 [ g_k - 1
] ) ) { k = g_k ; exitg1 = true ; } else { g_k ++ ; } } } if ( k == 0 ) { k =
1 ; } else { ex = varargin_1 [ k - 1 ] ; for ( g_k = k ; g_k + 1 < 7 ; g_k ++
) { if ( ex > varargin_1 [ g_k ] ) { ex = varargin_1 [ g_k ] ; k = g_k + 1 ;
} } } switch ( k ) { case 1 : localB -> nx1h2bs53u [ 0 ] = n5fwjtrtab [ 0 ] ;
localB -> nx1h2bs53u [ 1 ] = n5fwjtrtab [ 1 ] ; localB -> heq1xsib3m [ 0 ] =
1.0 ; localB -> heq1xsib3m [ 1 ] = 0.0 ; localB -> heq1xsib3m [ 2 ] = 0.0 ;
localB -> heq1xsib3m [ 3 ] = 0.0 ; break ; case 2 : localB -> nx1h2bs53u [ 0
] = igzjsvau3z [ 0 ] ; localB -> nx1h2bs53u [ 1 ] = igzjsvau3z [ 1 ] ; localB
-> heq1xsib3m [ 0 ] = 0.70710678118654757 ; localB -> heq1xsib3m [ 1 ] =
0.70710678118654746 ; localB -> heq1xsib3m [ 2 ] = 0.0 ; localB -> heq1xsib3m
[ 3 ] = 0.0 ; break ; case 3 : localB -> nx1h2bs53u [ 0 ] = aroe4yccp3 [ 0 ]
; localB -> nx1h2bs53u [ 1 ] = aroe4yccp3 [ 1 ] ; localB -> heq1xsib3m [ 0 ]
= 6.123233995736766E-17 ; localB -> heq1xsib3m [ 1 ] = 1.0 ; localB ->
heq1xsib3m [ 2 ] = 0.0 ; localB -> heq1xsib3m [ 3 ] = 0.0 ; break ; case 4 :
localB -> nx1h2bs53u [ 0 ] = jmtcrxgana [ 0 ] ; localB -> nx1h2bs53u [ 1 ] =
jmtcrxgana [ 1 ] ; localB -> heq1xsib3m [ 0 ] = 0.70710678118654757 ; localB
-> heq1xsib3m [ 1 ] = - 0.70710678118654746 ; localB -> heq1xsib3m [ 2 ] =
0.0 ; localB -> heq1xsib3m [ 3 ] = 0.0 ; break ; case 5 : localB ->
nx1h2bs53u [ 0 ] = bw0neo01iz [ 0 ] ; localB -> nx1h2bs53u [ 1 ] = bw0neo01iz
[ 1 ] ; localB -> heq1xsib3m [ 0 ] = 0.70710678118654757 ; localB ->
heq1xsib3m [ 1 ] = 0.0 ; localB -> heq1xsib3m [ 2 ] = 0.70710678118654746 ;
localB -> heq1xsib3m [ 3 ] = 0.0 ; break ; default : localB -> nx1h2bs53u [ 0
] = clnqp52x4r [ 0 ] ; localB -> nx1h2bs53u [ 1 ] = clnqp52x4r [ 1 ] ; localB
-> heq1xsib3m [ 0 ] = 0.70710678118654757 ; localB -> heq1xsib3m [ 1 ] = 0.0
; localB -> heq1xsib3m [ 2 ] = - 0.70710678118654746 ; localB -> heq1xsib3m [
3 ] = 0.0 ; break ; } } void MdlInitialize ( void ) { boolean_T tmp ;
hrxu5rhe3af . iwulztso32 [ 0 ] = 0.0 ; hrxu5rhe3af . iwulztso32 [ 1 ] = 0.0 ;
hrxu5rhe3af . iwulztso32 [ 2 ] = 0.0 ; hrxu5rhe3af . ckit2etwje = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { n1mubcupv31 . kbqjtzizsx [ 0 ] = 0.0 ;
n1mubcupv31 . kbqjtzizsx [ 1 ] = 0.0 ; n1mubcupv31 . kbqjtzizsx [ 2 ] =
0.0010490819691035681 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp )
{ tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . ckit2etwje
= ! tmp ; } else { hrxu5rhe3af . ckit2etwje = 1 ; } n1mubcupv31 . ezm2ooaqjl
[ 0 ] = 0.0 ; n1mubcupv31 . ezm2ooaqjl [ 1 ] = - 7128.137 ; n1mubcupv31 .
ezm2ooaqjl [ 2 ] = 0.0 ; } hrxu5rhe3af . irqzxzls3s = 1 ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af .
irqzxzls3s = ! tmp ; } else { hrxu5rhe3af . irqzxzls3s = 1 ; } n1mubcupv31 .
bcrrky3g2k [ 0 ] = 0.5 ; n1mubcupv31 . bcrrky3g2k [ 1 ] = - 0.5 ; n1mubcupv31
. bcrrky3g2k [ 2 ] = - 0.5 ; n1mubcupv31 . bcrrky3g2k [ 3 ] = 0.5 ; }
hrxu5rhe3af . btkpsszf3k = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . btkpsszf3k = ! tmp
; } else { hrxu5rhe3af . btkpsszf3k = 1 ; } n1mubcupv31 . cjfebnqw1p = 0.0 ;
} hrxu5rhe3af . febtg0cpg5 = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . febtg0cpg5 = ! tmp
; } else { hrxu5rhe3af . febtg0cpg5 = 1 ; } n1mubcupv31 . li1obxdvy3 [ 0 ] =
0.0 ; n1mubcupv31 . li1obxdvy3 [ 1 ] = 0.0 ; n1mubcupv31 . li1obxdvy3 [ 2 ] =
- 7.478 ; } hrxu5rhe3af . epbwbvrls5 = 0.0 ; hrxu5rhe3af . e2pe11pwxn = true
; hrxu5rhe3af . opg1lhdczb = true ; hrxu5rhe3af . g24vxooz0v = true ;
hrxu5rhe3af . l3pfqrb31o = true ; hrxu5rhe3af . fytmukko2d = 0.0 ;
hrxu5rhe3af . jiqhomoo0v = true ; hrxu5rhe3af . jmjdutrgwi = true ;
hrxu5rhe3af . gcdlpfr3qr = true ; hrxu5rhe3af . bhx2bk5lkm = true ;
hrxu5rhe3af . curihjwvdq = 0.0 ; hrxu5rhe3af . gxxnmirgwt = true ;
hrxu5rhe3af . ayulg3mnvk = true ; hrxu5rhe3af . dmkiyir0bc = true ;
hrxu5rhe3af . nlifgx53vj = true ; hrxu5rhe3af . oumjhalsqc = 0.0 ;
hrxu5rhe3af . cozmdzu0w1 = true ; hrxu5rhe3af . cnj1jumxqg = true ;
hrxu5rhe3af . ckwrsfgl5j = true ; hrxu5rhe3af . e2cixfebva = true ;
hrxu5rhe3af . o2yvavvn5c = 0.0 ; hrxu5rhe3af . i5keywnlob = true ;
hrxu5rhe3af . ae5papqlus = true ; hrxu5rhe3af . hbtp1swogp = true ;
hrxu5rhe3af . ct2fu2r1og = true ; hrxu5rhe3af . hz2n5lmwzt = 0.0 ;
hrxu5rhe3af . mp3yltewxi = true ; hrxu5rhe3af . brmqgwecvy = true ;
hrxu5rhe3af . kjzbuo2ejd = true ; hrxu5rhe3af . ddgb0ny2wp = true ;
hrxu5rhe3af . g0uzej5lf1 = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . g0uzej5lf1 = ! tmp
; } else { hrxu5rhe3af . g0uzej5lf1 = 1 ; } } o2y45zbt2m4 . niydxw3dug =
hbv5azo3sw . yBlockOrdering_Y0 ; o2y45zbt2m4 . nh40mtprpn = hbv5azo3sw .
yBlockOrdering_Y0_m1krpwpsee ; o2y45zbt2m4 . ktdjes0xaw [ 0 ] = hbv5azo3sw .
Merge_InitialOutput [ 0 ] ; o2y45zbt2m4 . ktdjes0xaw [ 1 ] = hbv5azo3sw .
Merge_InitialOutput [ 1 ] ; o2y45zbt2m4 . ktdjes0xaw [ 2 ] = hbv5azo3sw .
Merge_InitialOutput [ 2 ] ; o2y45zbt2m4 . ktdjes0xaw [ 3 ] = hbv5azo3sw .
Merge_InitialOutput [ 3 ] ; } void MdlEnable ( void ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , 1.0 ) ; ; } void
MdlStart ( void ) { uint32_T initSeed ; { bool externalInputIsInDatasetFormat
= false ; void * pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} lvepdtsvu1 ( & hrxu5rhe3af . prxbfmvl1en ) ; eyp20xikbr ( & hrxu5rhe3af .
n53cqmpcloj ) ; pyvvbdnqxo ( & hrxu5rhe3af . bqx0vc3mudn ) ; m5wgi0ctev ( &
hrxu5rhe3af . bbjtuydtdkk ) ; lvepdtsvu1 ( & hrxu5rhe3af . oxb0jyodnm ) ;
eyp20xikbr ( & hrxu5rhe3af . bghekfjhrb ) ; pyvvbdnqxo ( & hrxu5rhe3af .
iyw4crazdc ) ; m5wgi0ctev ( & hrxu5rhe3af . npgo12zmto ) ; leyfenaqjz ( rtS )
; dd41awjj4d ( rtS ) ; hrxu5rhe3af . em2alijyyt = - 1 ; k3uunhzc5w ( rtS ) ;
pkoiaofkhx ( rtS ) ; hrxu5rhe3af . mhqfolepov = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
mhqfolepov ) { case 0 : k3uunhzc5w ( rtS ) ; break ; case 1 : pkoiaofkhx (
rtS ) ; break ; } hrxu5rhe3af . mhqfolepov = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
em2alijyyt ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 : dd41awjj4d (
rtS ) ; break ; } hrxu5rhe3af . em2alijyyt = - 1 ; hrxu5rhe3af . nblxudhi3p =
- 1 ; hrxu5rhe3af . km2naim34i = 0 ; hrxu5rhe3af . nmzrmeybue = 0 ;
hrxu5rhe3af . obn5brrvbj = 0 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . lfywehbssn
= - 1 ; hrxu5rhe3af . px2vytyfy2 = 0 ; o2y45zbt2m4 . amepcbkksg [ 0 ] =
hbv5azo3sw . Constant2_Value_ialq4qchdp [ 0 ] ; o2y45zbt2m4 . fi1wde2gl2 [ 0
] = hbv5azo3sw . Constant3_Value [ 0 ] ; o2y45zbt2m4 . amepcbkksg [ 1 ] =
hbv5azo3sw . Constant2_Value_ialq4qchdp [ 1 ] ; o2y45zbt2m4 . fi1wde2gl2 [ 1
] = hbv5azo3sw . Constant3_Value [ 1 ] ; o2y45zbt2m4 . amepcbkksg [ 2 ] =
hbv5azo3sw . Constant2_Value_ialq4qchdp [ 2 ] ; o2y45zbt2m4 . fi1wde2gl2 [ 2
] = hbv5azo3sw . Constant3_Value [ 2 ] ; o2y45zbt2m4 . lx0bv1yu1i [ 0 ] =
rtP_Spacecraft . initialAngularSpeed [ 0 ] ; o2y45zbt2m4 . lx0bv1yu1i [ 1 ] =
rtP_Spacecraft . initialAngularSpeed [ 1 ] ; o2y45zbt2m4 . lx0bv1yu1i [ 2 ] =
rtP_Spacecraft . initialAngularSpeed [ 2 ] ; o2y45zbt2m4 . a55nsryplm [ 0 ] =
rtP_Spacecraft . initialAttitude [ 0 ] ; o2y45zbt2m4 . a55nsryplm [ 1 ] =
rtP_Spacecraft . initialAttitude [ 1 ] ; o2y45zbt2m4 . a55nsryplm [ 2 ] =
rtP_Spacecraft . initialAttitude [ 2 ] ; o2y45zbt2m4 . a55nsryplm [ 3 ] =
rtP_Spacecraft . initialAttitude [ 3 ] ; hrxu5rhe3af . nqcixj2cfc = 0 ;
hrxu5rhe3af . gcz34svd4r = 0 ; hrxu5rhe3af . anszycztem = 0 ; leyfenaqjz (
rtS ) ; dd41awjj4d ( rtS ) ; hrxu5rhe3af . bnzh2jzuy5 = - 1 ; k3uunhzc5w (
rtS ) ; pkoiaofkhx ( rtS ) ; hrxu5rhe3af . obuyxhugh2 = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
obuyxhugh2 ) { case 0 : k3uunhzc5w ( rtS ) ; break ; case 1 : pkoiaofkhx (
rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
bnzh2jzuy5 ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 : dd41awjj4d (
rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; hrxu5rhe3af . j1uacuucpv =
- 1 ; hrxu5rhe3af . jxtww5tjxt = 0 ; hrxu5rhe3af . ikwlyg3xde = 0 ;
hrxu5rhe3af . gtaj4wmjuq = 0 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . hnbwguuonj
= - 1 ; hrxu5rhe3af . kg1shmc2lb = 0 ; hrxu5rhe3af . ane43mgfgs = 0 ;
hrxu5rhe3af . hkxlm4qdro = 0 ; hrxu5rhe3af . fnu1tvdbyx = 0 ; hrxu5rhe3af .
fq3jja1aol = 0 ; hrxu5rhe3af . nbmuo2yzhf = 0 ; hrxu5rhe3af . ev5en1vf5z = 0
; hrxu5rhe3af . btkemo1frv = 0 ; hrxu5rhe3af . cag24nmzzp = 0 ; hrxu5rhe3af .
lptvxysd1c = 0 ; hrxu5rhe3af . mt3v1tg0wr = 0 ; hrxu5rhe3af . apfxbvz3qg = 0
; hrxu5rhe3af . izrtkkf042 = 0 ; initSeed = ( uint32_T ) ( 100000 * rand ( )
) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . nydzqlwwnn , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . nydzqlwwnn , & hrxu5rhe3af . bdotsga2iv
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . djim5bpjvv , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . djim5bpjvv , & hrxu5rhe3af . lqkanthoxg
[ 0 ] , 1 ) ; hrxu5rhe3af . fdyoeqkdqi = 0 ; hrxu5rhe3af . c3m4fwdfd0 = 0 ;
initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 (
initSeed , & hrxu5rhe3af . amd2k325eq , 1 ) ; RandSrcInitState_GZ ( &
hrxu5rhe3af . amd2k325eq , & hrxu5rhe3af . ocwejjhsae [ 0 ] , 1 ) ; initSeed
= ( uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , &
hrxu5rhe3af . lo1lp4gtvt , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af .
lo1lp4gtvt , & hrxu5rhe3af . cqi0nadh0g [ 0 ] , 1 ) ; initSeed = ( uint32_T )
( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af .
popvcsddq3 , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . popvcsddq3 , &
hrxu5rhe3af . e0e33jihoi [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 *
rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . bkcg3g1zoi ,
1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . bkcg3g1zoi , & hrxu5rhe3af .
cwsd2g5w2m [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . ebpr404rrn , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . ebpr404rrn , & hrxu5rhe3af . pbvxmucjj5
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . h31khffg0k , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . h31khffg0k , & hrxu5rhe3af . alynay3xx0
[ 0 ] , 1 ) ; hrxu5rhe3af . ojltdhe2we = 0 ; initSeed = ( uint32_T ) ( 100000
* rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . atmgtfljnh
, 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . atmgtfljnh , & hrxu5rhe3af .
n10hslmo2a [ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . pa2kyvt1uy , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . pa2kyvt1uy , & hrxu5rhe3af . j13dkj5h0s
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . p3xkfovqki , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . p3xkfovqki , & hrxu5rhe3af . k40rhthviy
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . d1wjrwas1u , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . d1wjrwas1u , & hrxu5rhe3af . jjpbiyjnrh
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . cmfzrxdc11 , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . cmfzrxdc11 , & hrxu5rhe3af . impwbrb5ul
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . ivdqhywypm , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . ivdqhywypm , & hrxu5rhe3af . ck30ytigtq
[ 0 ] , 1 ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
lfywehbssn ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
hrxu5rhe3af . lfywehbssn = - 1 ; hrxu5rhe3af . goaeac5x5p = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
nblxudhi3p ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . mhqfolepov ) { case 0 : k3uunhzc5w ( rtS ) ; break ;
case 1 : pkoiaofkhx ( rtS ) ; break ; } hrxu5rhe3af . mhqfolepov = - 1 ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch
( hrxu5rhe3af . em2alijyyt ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 :
dd41awjj4d ( rtS ) ; break ; } hrxu5rhe3af . em2alijyyt = - 1 ; break ; }
hrxu5rhe3af . nblxudhi3p = - 1 ; hrxu5rhe3af . ltjhqpbfjo = - 1 ; hrxu5rhe3af
. dnqubg5s4k = 0 ; hrxu5rhe3af . bze1flsb15 = 0 ; hrxu5rhe3af . pidbwsidci =
0 ; hrxu5rhe3af . ji1vknz2dr = 0 ; hrxu5rhe3af . gltmjlakux = 0 ; hrxu5rhe3af
. pwifaixjxb = 0 ; hrxu5rhe3af . haxpv4vq51 = 0 ; hrxu5rhe3af . hxjxms0byf =
0 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af
. j1uacuucpv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; switch ( hrxu5rhe3af . obuyxhugh2 ) { case 0 : k3uunhzc5w ( rtS ) ; break ;
case 1 : pkoiaofkhx ( rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch
( hrxu5rhe3af . bnzh2jzuy5 ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 :
dd41awjj4d ( rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; }
hrxu5rhe3af . j1uacuucpv = - 1 ; hrxu5rhe3af . iqs2nrdyqs = - 1 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
hnbwguuonj ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
hrxu5rhe3af . hnbwguuonj = - 1 ; hrxu5rhe3af . p4n3550tai = - 1 ; memcpy ( &
hrxu5rhe3af . buggjk4l1n [ 0 ] , & hbv5azo3sw . DataStoreMemoryP_InitialValue
[ 0 ] , 100U * sizeof ( real_T ) ) ; memcpy ( & hrxu5rhe3af . j3ergpk3vu [ 0
] , & hbv5azo3sw . DataStoreMemoryx_InitialValue [ 0 ] , 10U * sizeof (
real_T ) ) ; MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T
tid ) { real_T bz3m03sk4h [ 2 ] ; real_T prirsvmw33 [ 2 ] ; real_T ilztr2qrue
[ 2 ] ; real_T hzexholftp [ 2 ] ; real_T jr4rimgbh0 [ 2 ] ; real_T j4yy5fljso
[ 2 ] ; real_T el4y0ewlg2 [ 2 ] ; real_T mgirxq514b [ 2 ] ; real_T n4cr5voz3i
[ 2 ] ; real_T naxh1rmprg [ 2 ] ; real_T ablvf05wvd [ 2 ] ; real_T jazbl50puz
[ 2 ] ; __m128d tmp_i ; __m128d tmp_m ; real_T X2state [ 200 ] ; real_T Y2 [
200 ] ; real_T sqrtP [ 100 ] ; real_T Pxy [ 30 ] ; real_T jdjm5atqpq [ 16 ] ;
real_T l4cpq010qq [ 16 ] ; real_T c [ 10 ] ; real_T kalbs1u0ur [ 9 ] ; real_T
sBF [ 9 ] ; real_T sECI [ 9 ] ; real_T tmp_p [ 7 ] ; real_T eb1fnz3txo [ 3 ]
; real_T hlbbwfsq2e [ 3 ] ; real_T jh4pm1ykge [ 3 ] ; real_T myqx15ehea [ 3 ]
; real_T pygfqx1xx2 [ 3 ] ; real_T tmp_e [ 3 ] ; real_T ardt1y5x0d_idx_1 ;
real_T au32y1wfjp_idx_1 ; real_T b2dseb5akc_idx_0 ; real_T b2dseb5akc_idx_1 ;
real_T clod0whodw_idx_0 ; real_T clod0whodw_idx_1 ; real_T cxn41j5ndz_idx_0 ;
real_T dxjf4qcaeo ; real_T emiiavfkh1 ; real_T epx0klrbgl_idx_0 ; real_T
epx0klrbgl_idx_1 ; real_T eujiwcy0tl_idx_0 ; real_T eujiwcy0tl_idx_1 ; real_T
eujiwcy0tl_idx_2 ; real_T hkwf2out3d ; real_T ht1q0lonq4_idx_0 ; real_T
ht1q0lonq4_idx_1 ; real_T k1qmoe0iaw ; real_T l1pix2zzzf ; real_T ln02qvajo4
; real_T mjhceqjgf1_idx_1 ; real_T mzxp24sosq_idx_0 ; real_T mzxp24sosq_idx_1
; real_T njulo3ucsg ; real_T nm4t0wvumv ; real_T nmd3fc4utj_idx_0 ; real_T
nmd3fc4utj_idx_1 ; real_T oouy1fopfw_idx_0 ; real_T oouy1fopfw_idx_1 ; real_T
prv0bttwvn ; real_T pzi3xtzla3_idx_0 ; real_T pzi3xtzla3_idx_1 ; int32_T i ;
int32_T k ; int8_T rtAction ; int8_T rtPrevAction ; boolean_T aghig0gren [ 9
] ; boolean_T tmp ; static const real_T b [ 10 ] = { 0.5 , 0.5 , 0.5 , 0.5 ,
0.5 , 0.5 , 0.8 , 0.8 , 0.8 , 0.8 } ; real_T tmp_g [ 10 ] ; srClearBC (
hrxu5rhe3af . olmlfoy1xv ) ; srClearBC ( hrxu5rhe3af . jaivnsj01n ) ;
srClearBC ( hrxu5rhe3af . hp3mldh5cv ) ; srClearBC ( hrxu5rhe3af . hka1eluehh
) ; srClearBC ( hrxu5rhe3af . lx00lot5dg ) ; srClearBC ( hrxu5rhe3af .
bbjtuydtdkk . cfhkcft2t2 ) ; srClearBC ( hrxu5rhe3af . bqx0vc3mudn .
dmwbxxl3xx ) ; srClearBC ( hrxu5rhe3af . mvvvr4qg3a ) ; srClearBC (
hrxu5rhe3af . n53cqmpcloj . ogcbvjea2u ) ; srClearBC ( hrxu5rhe3af .
prxbfmvl1en . k5qbhboafq ) ; srClearBC ( hrxu5rhe3af . kunox0dfsg ) ;
srClearBC ( hrxu5rhe3af . duwlcgfzra ) ; srClearBC ( hrxu5rhe3af . nw1rjo5a2w
) ; srClearBC ( hrxu5rhe3af . a0tdfwofzg ) ; srClearBC ( hrxu5rhe3af .
as5m3dr43z ) ; srClearBC ( hrxu5rhe3af . fimtx0wf43 ) ; srClearBC (
hrxu5rhe3af . h5fod2fj2q ) ; srClearBC ( hrxu5rhe3af . pmgcir2p13 ) ;
srClearBC ( hrxu5rhe3af . cbsmbddbag ) ; srClearBC ( hrxu5rhe3af . fnnqkeqpmg
) ; srClearBC ( hrxu5rhe3af . jkbsaxmqju ) ; srClearBC ( hrxu5rhe3af .
noecaey35j ) ; srClearBC ( hrxu5rhe3af . olb1gflryv ) ; if ( ssIsSampleHit (
rtS , 3 , 0 ) ) { RandSrc_GZ_D ( pygfqx1xx2 , & hbv5azo3sw .
RandomSource1_MeanVal , 1 , & hbv5azo3sw . RandomSource1_VarianceRTP , 1 ,
hrxu5rhe3af . bdotsga2iv , 1 , 3 ) ; k1qmoe0iaw = hbv5azo3sw .
Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [ 0 ] + hrxu5rhe3af . iwulztso32 [ 0 ] ;
o2y45zbt2m4 . p0g2tnevfk [ 0 ] = k1qmoe0iaw ; hrxu5rhe3af . iwulztso32 [ 0 ]
= k1qmoe0iaw ; k1qmoe0iaw = hbv5azo3sw . Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [
1 ] + hrxu5rhe3af . iwulztso32 [ 1 ] ; o2y45zbt2m4 . p0g2tnevfk [ 1 ] =
k1qmoe0iaw ; hrxu5rhe3af . iwulztso32 [ 1 ] = k1qmoe0iaw ; k1qmoe0iaw =
hbv5azo3sw . Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [ 2 ] + hrxu5rhe3af .
iwulztso32 [ 2 ] ; o2y45zbt2m4 . p0g2tnevfk [ 2 ] = k1qmoe0iaw ; hrxu5rhe3af
. iwulztso32 [ 2 ] = k1qmoe0iaw ; } tmp = ssGetIsOkayToUpdateMode ( rtS ) ;
if ( tmp ) { if ( hrxu5rhe3af . ckit2etwje != 0 ) { n1mubcupv31 . kbqjtzizsx
[ 0 ] = o2y45zbt2m4 . lx0bv1yu1i [ 0 ] ; n1mubcupv31 . kbqjtzizsx [ 1 ] =
o2y45zbt2m4 . lx0bv1yu1i [ 1 ] ; n1mubcupv31 . kbqjtzizsx [ 2 ] = o2y45zbt2m4
. lx0bv1yu1i [ 2 ] ; } o2y45zbt2m4 . h20zeizqdi [ 0 ] = n1mubcupv31 .
kbqjtzizsx [ 0 ] ; o2y45zbt2m4 . h20zeizqdi [ 1 ] = n1mubcupv31 . kbqjtzizsx
[ 1 ] ; o2y45zbt2m4 . h20zeizqdi [ 2 ] = n1mubcupv31 . kbqjtzizsx [ 2 ] ; }
else { o2y45zbt2m4 . h20zeizqdi [ 0 ] = n1mubcupv31 . kbqjtzizsx [ 0 ] ;
o2y45zbt2m4 . h20zeizqdi [ 1 ] = n1mubcupv31 . kbqjtzizsx [ 1 ] ; o2y45zbt2m4
. h20zeizqdi [ 2 ] = n1mubcupv31 . kbqjtzizsx [ 2 ] ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { eb1fnz3txo [ 0 ] = o2y45zbt2m4 . h20zeizqdi [ 0 ] ;
eb1fnz3txo [ 1 ] = o2y45zbt2m4 . h20zeizqdi [ 1 ] ; eb1fnz3txo [ 2 ] =
o2y45zbt2m4 . h20zeizqdi [ 2 ] ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
RandSrc_GZ_D ( o2y45zbt2m4 . lfqykqi1sg , & hbv5azo3sw . RandomSource_MeanVal
, 1 , & hbv5azo3sw . RandomSource_VarianceRTP , 1 , hrxu5rhe3af . lqkanthoxg
, 1 , 3 ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { hlbbwfsq2e [ 0 ] = (
o2y45zbt2m4 . p0g2tnevfk [ 0 ] + eb1fnz3txo [ 0 ] ) + o2y45zbt2m4 .
lfqykqi1sg [ 0 ] ; hlbbwfsq2e [ 1 ] = ( o2y45zbt2m4 . p0g2tnevfk [ 1 ] +
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . lfqykqi1sg [ 1 ] ; hlbbwfsq2e [ 2 ] = (
o2y45zbt2m4 . p0g2tnevfk [ 2 ] + eb1fnz3txo [ 2 ] ) + o2y45zbt2m4 .
lfqykqi1sg [ 2 ] ; } tmp = ssGetIsOkayToUpdateMode ( rtS ) ; if ( tmp ) { if
( hrxu5rhe3af . irqzxzls3s != 0 ) { n1mubcupv31 . ezm2ooaqjl [ 0 ] =
o2y45zbt2m4 . amepcbkksg [ 0 ] ; n1mubcupv31 . ezm2ooaqjl [ 1 ] = o2y45zbt2m4
. amepcbkksg [ 1 ] ; n1mubcupv31 . ezm2ooaqjl [ 2 ] = o2y45zbt2m4 .
amepcbkksg [ 2 ] ; } pygfqx1xx2 [ 0 ] = n1mubcupv31 . ezm2ooaqjl [ 0 ] ;
pygfqx1xx2 [ 1 ] = n1mubcupv31 . ezm2ooaqjl [ 1 ] ; pygfqx1xx2 [ 2 ] =
n1mubcupv31 . ezm2ooaqjl [ 2 ] ; } else { pygfqx1xx2 [ 0 ] = n1mubcupv31 .
ezm2ooaqjl [ 0 ] ; pygfqx1xx2 [ 1 ] = n1mubcupv31 . ezm2ooaqjl [ 1 ] ;
pygfqx1xx2 [ 2 ] = n1mubcupv31 . ezm2ooaqjl [ 2 ] ; } o2y45zbt2m4 .
mvqp5l5ufq [ 0 ] = hbv5azo3sw . Gain_Gain_cpl3z33sd4 * pygfqx1xx2 [ 0 ] ;
o2y45zbt2m4 . mvqp5l5ufq [ 1 ] = hbv5azo3sw . Gain_Gain_cpl3z33sd4 *
pygfqx1xx2 [ 1 ] ; o2y45zbt2m4 . mvqp5l5ufq [ 2 ] = hbv5azo3sw .
Gain_Gain_cpl3z33sd4 * pygfqx1xx2 [ 2 ] ; tmp = ssGetIsOkayToUpdateMode ( rtS
) ; if ( tmp ) { if ( hrxu5rhe3af . btkpsszf3k != 0 ) { n1mubcupv31 .
bcrrky3g2k [ 0 ] = o2y45zbt2m4 . a55nsryplm [ 0 ] ; n1mubcupv31 . bcrrky3g2k
[ 1 ] = o2y45zbt2m4 . a55nsryplm [ 1 ] ; n1mubcupv31 . bcrrky3g2k [ 2 ] =
o2y45zbt2m4 . a55nsryplm [ 2 ] ; n1mubcupv31 . bcrrky3g2k [ 3 ] = o2y45zbt2m4
. a55nsryplm [ 3 ] ; } eujiwcy0tl_idx_0 = n1mubcupv31 . bcrrky3g2k [ 0 ] ;
eujiwcy0tl_idx_1 = n1mubcupv31 . bcrrky3g2k [ 1 ] ; eujiwcy0tl_idx_2 =
n1mubcupv31 . bcrrky3g2k [ 2 ] ; prv0bttwvn = n1mubcupv31 . bcrrky3g2k [ 3 ]
; } else { eujiwcy0tl_idx_0 = n1mubcupv31 . bcrrky3g2k [ 0 ] ;
eujiwcy0tl_idx_1 = n1mubcupv31 . bcrrky3g2k [ 1 ] ; eujiwcy0tl_idx_2 =
n1mubcupv31 . bcrrky3g2k [ 2 ] ; prv0bttwvn = n1mubcupv31 . bcrrky3g2k [ 3 ]
; } k1qmoe0iaw = ( ( eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 + eujiwcy0tl_idx_1 *
eujiwcy0tl_idx_1 ) + eujiwcy0tl_idx_2 * eujiwcy0tl_idx_2 ) + prv0bttwvn *
prv0bttwvn ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . fdyoeqkdqi
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af .
fdyoeqkdqi = 0 ; } nm4t0wvumv = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } else if
( k1qmoe0iaw < 0.0 ) { nm4t0wvumv = - muDoubleScalarSqrt ( muDoubleScalarAbs
( k1qmoe0iaw ) ) ; hrxu5rhe3af . fdyoeqkdqi = 1 ; } else { nm4t0wvumv =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } k1qmoe0iaw = eujiwcy0tl_idx_2 /
nm4t0wvumv ; l1pix2zzzf = eujiwcy0tl_idx_0 / nm4t0wvumv ; dxjf4qcaeo =
eujiwcy0tl_idx_1 / nm4t0wvumv ; nm4t0wvumv = prv0bttwvn / nm4t0wvumv ;
prv0bttwvn = ( ( l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo * dxjf4qcaeo ) +
k1qmoe0iaw * k1qmoe0iaw ) + nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( hrxu5rhe3af . c3m4fwdfd0 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . c3m4fwdfd0
= 0 ; } eujiwcy0tl_idx_2 = muDoubleScalarSqrt ( prv0bttwvn ) ; } else if (
prv0bttwvn < 0.0 ) { eujiwcy0tl_idx_2 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( prv0bttwvn ) ) ; hrxu5rhe3af . c3m4fwdfd0 = 1 ; } else {
eujiwcy0tl_idx_2 = muDoubleScalarSqrt ( prv0bttwvn ) ; } prv0bttwvn =
k1qmoe0iaw / eujiwcy0tl_idx_2 ; eujiwcy0tl_idx_1 = nm4t0wvumv /
eujiwcy0tl_idx_2 ; eujiwcy0tl_idx_0 = dxjf4qcaeo / eujiwcy0tl_idx_2 ;
eujiwcy0tl_idx_2 = l1pix2zzzf / eujiwcy0tl_idx_2 ; o2y45zbt2m4 . hwkzvkas3c =
( ( ( hbv5azo3sw . Constant_Value_klghvcvqmj - prv0bttwvn * prv0bttwvn ) -
eujiwcy0tl_idx_1 * eujiwcy0tl_idx_1 ) * hbv5azo3sw . Gain2_Gain_n2hlwdziix *
o2y45zbt2m4 . mvqp5l5ufq [ 0 ] + ( eujiwcy0tl_idx_0 * prv0bttwvn +
eujiwcy0tl_idx_2 * eujiwcy0tl_idx_1 ) * hbv5azo3sw . Gain_Gain_deacltj5ll *
o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ) + ( eujiwcy0tl_idx_0 * eujiwcy0tl_idx_1 -
eujiwcy0tl_idx_2 * prv0bttwvn ) * hbv5azo3sw . Gain1_Gain_fe0vmtwk5u *
o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; o2y45zbt2m4 . pvehregqxn = ( ( ( hbv5azo3sw
. Constant_Value_h3axm4dzs2 - eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0 ) -
eujiwcy0tl_idx_1 * eujiwcy0tl_idx_1 ) * hbv5azo3sw . Gain2_Gain_gnrwoc1vc2 *
o2y45zbt2m4 . mvqp5l5ufq [ 1 ] + ( eujiwcy0tl_idx_0 * prv0bttwvn -
eujiwcy0tl_idx_2 * eujiwcy0tl_idx_1 ) * hbv5azo3sw . Gain_Gain_m0ug0pnx04 *
o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ) + ( eujiwcy0tl_idx_2 * eujiwcy0tl_idx_0 +
prv0bttwvn * eujiwcy0tl_idx_1 ) * hbv5azo3sw . Gain1_Gain_epkzxiktj2 *
o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; o2y45zbt2m4 . fqzn4ufnnm = ( (
eujiwcy0tl_idx_0 * eujiwcy0tl_idx_1 + eujiwcy0tl_idx_2 * prv0bttwvn ) *
hbv5azo3sw . Gain_Gain_efwlgxe2sc * o2y45zbt2m4 . mvqp5l5ufq [ 0 ] + (
prv0bttwvn * eujiwcy0tl_idx_1 - eujiwcy0tl_idx_2 * eujiwcy0tl_idx_0 ) *
hbv5azo3sw . Gain1_Gain_ito2bip4nt * o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ) + ( (
hbv5azo3sw . Constant_Value_jsi055lqf3 - eujiwcy0tl_idx_0 * eujiwcy0tl_idx_0
) - prv0bttwvn * prv0bttwvn ) * hbv5azo3sw . Gain2_Gain_kojiuv3vcw *
o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
o2y45zbt2m4 . pcu5wlt0ol [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
pcu5wlt0ol [ 1 ] = o2y45zbt2m4 . pvehregqxn ; o2y45zbt2m4 . pcu5wlt0ol [ 2 ]
= o2y45zbt2m4 . fqzn4ufnnm ; prv0bttwvn = ( o2y45zbt2m4 . pcu5wlt0ol [ 0 ] *
o2y45zbt2m4 . pcu5wlt0ol [ 0 ] + o2y45zbt2m4 . pcu5wlt0ol [ 1 ] * o2y45zbt2m4
. pcu5wlt0ol [ 1 ] ) + o2y45zbt2m4 . pcu5wlt0ol [ 2 ] * o2y45zbt2m4 .
pcu5wlt0ol [ 2 ] ; if ( prv0bttwvn < 0.0 ) { prv0bttwvn = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( prv0bttwvn ) ) ; } else { prv0bttwvn
= muDoubleScalarSqrt ( prv0bttwvn ) ; } if ( prv0bttwvn > hbv5azo3sw .
NormalizeVector_maxzero ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 . pcu5wlt0ol [ 0 ]
; eujiwcy0tl_idx_1 = o2y45zbt2m4 . pcu5wlt0ol [ 1 ] ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . pcu5wlt0ol [ 2 ] ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 .
pcu5wlt0ol [ 0 ] * 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . pcu5wlt0ol [ 1 ] *
0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . pcu5wlt0ol [ 2 ] * 0.0 ; prv0bttwvn =
hbv5azo3sw . Constant_Value_pw4amn2wvf ; } eb1fnz3txo [ 0 ] =
eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 /
prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ;
eujiwcy0tl_idx_2 = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . gy5dnmc0o2 +
o2y45zbt2m4 . bemlv143br * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . hsxdwr2kap *
eb1fnz3txo [ 2 ] ; prv0bttwvn = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . a3453wdy3h + o2y45zbt2m4 . evt22h0udz * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . hr5yavkh2g * eb1fnz3txo [ 2 ] , eujiwcy0tl_idx_2 ) ;
eujiwcy0tl_idx_2 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
ln15xtukoj + o2y45zbt2m4 . iak2iehb01 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
ofev2a4bu4 * eb1fnz3txo [ 2 ] , eujiwcy0tl_idx_2 ) ; cxn41j5ndz_idx_0 =
hbv5azo3sw . Constant_Value_fvwrjd3qpo [ 0 ] + prv0bttwvn ; njulo3ucsg =
hbv5azo3sw . Constant_Value_fvwrjd3qpo [ 1 ] + eujiwcy0tl_idx_2 ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . cktw3suarj , &
hbv5azo3sw . RandomSource1_MeanVal_aiijehfqfo , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_iazwfq1jw0 , 1 , hrxu5rhe3af . ocwejjhsae , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 += o2y45zbt2m4 .
cktw3suarj [ 0 ] ; if ( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat )
{ bz3m03sk4h [ 0 ] = hbv5azo3sw . Saturation_UpperSat ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat ) { bz3m03sk4h [ 0 ] =
hbv5azo3sw . Saturation_LowerSat ; } else { bz3m03sk4h [ 0 ] =
cxn41j5ndz_idx_0 ; } cxn41j5ndz_idx_0 = njulo3ucsg + o2y45zbt2m4 . cktw3suarj
[ 1 ] ; if ( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat ) {
bz3m03sk4h [ 1 ] = hbv5azo3sw . Saturation_UpperSat ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat ) { bz3m03sk4h [ 1 ] =
hbv5azo3sw . Saturation_LowerSat ; } else { bz3m03sk4h [ 1 ] =
cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . nvj2jobsne [ 0 ] = o2y45zbt2m4 .
hwkzvkas3c ; o2y45zbt2m4 . nvj2jobsne [ 1 ] = o2y45zbt2m4 . pvehregqxn ;
o2y45zbt2m4 . nvj2jobsne [ 2 ] = o2y45zbt2m4 . fqzn4ufnnm ; cxn41j5ndz_idx_0
= ( o2y45zbt2m4 . nvj2jobsne [ 0 ] * o2y45zbt2m4 . nvj2jobsne [ 0 ] +
o2y45zbt2m4 . nvj2jobsne [ 1 ] * o2y45zbt2m4 . nvj2jobsne [ 1 ] ) +
o2y45zbt2m4 . nvj2jobsne [ 2 ] * o2y45zbt2m4 . nvj2jobsne [ 2 ] ; if (
cxn41j5ndz_idx_0 < 0.0 ) { cxn41j5ndz_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( cxn41j5ndz_idx_0 ) ) ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarSqrt ( cxn41j5ndz_idx_0 ) ; } if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . NormalizeVector_maxzero_cdhvq0rirk ) { eujiwcy0tl_idx_0 =
o2y45zbt2m4 . nvj2jobsne [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . nvj2jobsne
[ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . nvj2jobsne [ 2 ] ; prv0bttwvn =
cxn41j5ndz_idx_0 ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 . nvj2jobsne [ 0 ]
* 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . nvj2jobsne [ 1 ] * 0.0 ;
eujiwcy0tl_idx_2 = o2y45zbt2m4 . nvj2jobsne [ 2 ] * 0.0 ; prv0bttwvn =
hbv5azo3sw . Constant_Value_peinfzh1bx ; } eb1fnz3txo [ 0 ] =
eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 /
prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; prv0bttwvn =
( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . akaurxf5cn + o2y45zbt2m4 . fjb4t2g0di *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . eps1xh200d * eb1fnz3txo [ 2 ] ;
cxn41j5ndz_idx_0 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
ftiqxo4eic + o2y45zbt2m4 . cikadflncr * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
d55wbumkta * eb1fnz3txo [ 2 ] , prv0bttwvn ) ; prv0bttwvn =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . dg3licanvf +
o2y45zbt2m4 . nmsyyhec3k * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . fd0i4zg4gl *
eb1fnz3txo [ 2 ] , prv0bttwvn ) ; mzxp24sosq_idx_0 = hbv5azo3sw .
Constant_Value_o4pefzbbdu [ 0 ] + cxn41j5ndz_idx_0 ; mzxp24sosq_idx_1 =
hbv5azo3sw . Constant_Value_o4pefzbbdu [ 1 ] + prv0bttwvn ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . jf0z5nzend , &
hbv5azo3sw . RandomSource1_MeanVal_fskbkqfzhy , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_c0tnp0ox24 , 1 , hrxu5rhe3af . cqi0nadh0g , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 =
mzxp24sosq_idx_0 + o2y45zbt2m4 . jf0z5nzend [ 0 ] ; if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . Saturation_UpperSat_iasva3d1xg ) { prirsvmw33 [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_iasva3d1xg ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw
. Saturation_LowerSat_k012nv1qgk ) { prirsvmw33 [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk ; } else { prirsvmw33 [ 0 ] = cxn41j5ndz_idx_0
; } cxn41j5ndz_idx_0 = mzxp24sosq_idx_1 + o2y45zbt2m4 . jf0z5nzend [ 1 ] ; if
( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_iasva3d1xg ) {
prirsvmw33 [ 1 ] = hbv5azo3sw . Saturation_UpperSat_iasva3d1xg ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_k012nv1qgk ) { prirsvmw33
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_k012nv1qgk ; } else { prirsvmw33 [ 1
] = cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . mfythxhofy [ 0 ] = o2y45zbt2m4 .
hwkzvkas3c ; o2y45zbt2m4 . mfythxhofy [ 1 ] = o2y45zbt2m4 . pvehregqxn ;
o2y45zbt2m4 . mfythxhofy [ 2 ] = o2y45zbt2m4 . fqzn4ufnnm ; prv0bttwvn = (
o2y45zbt2m4 . mfythxhofy [ 0 ] * o2y45zbt2m4 . mfythxhofy [ 0 ] + o2y45zbt2m4
. mfythxhofy [ 1 ] * o2y45zbt2m4 . mfythxhofy [ 1 ] ) + o2y45zbt2m4 .
mfythxhofy [ 2 ] * o2y45zbt2m4 . mfythxhofy [ 2 ] ; if ( prv0bttwvn < 0.0 ) {
prv0bttwvn = - muDoubleScalarSqrt ( muDoubleScalarAbs ( prv0bttwvn ) ) ; }
else { prv0bttwvn = muDoubleScalarSqrt ( prv0bttwvn ) ; } if ( prv0bttwvn >
hbv5azo3sw . NormalizeVector_maxzero_b4q4mcfdki ) { eujiwcy0tl_idx_0 =
o2y45zbt2m4 . mfythxhofy [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . mfythxhofy
[ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . mfythxhofy [ 2 ] ; } else {
eujiwcy0tl_idx_0 = o2y45zbt2m4 . mfythxhofy [ 0 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . mfythxhofy [ 1 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 .
mfythxhofy [ 2 ] * 0.0 ; prv0bttwvn = hbv5azo3sw . Constant_Value_agjbvr0z5q
; } eb1fnz3txo [ 0 ] = eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] =
eujiwcy0tl_idx_1 / prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 /
prv0bttwvn ; cxn41j5ndz_idx_0 = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . brdq13y0qd
+ o2y45zbt2m4 . h3xp3qlim0 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . b1pqf2pbpp *
eb1fnz3txo [ 2 ] ; prv0bttwvn = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . ornbl4mfau + o2y45zbt2m4 . dbdvnfbtan * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . nqoad4oagc * eb1fnz3txo [ 2 ] , cxn41j5ndz_idx_0 ) ;
cxn41j5ndz_idx_0 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
gq23czohqi + o2y45zbt2m4 . m13nwgsfs4 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
gree3bakbj * eb1fnz3txo [ 2 ] , cxn41j5ndz_idx_0 ) ; ht1q0lonq4_idx_0 =
hbv5azo3sw . Constant_Value_aqc3aba12o [ 0 ] + prv0bttwvn ; ht1q0lonq4_idx_1
= hbv5azo3sw . Constant_Value_aqc3aba12o [ 1 ] + cxn41j5ndz_idx_0 ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . efvttc54la , &
hbv5azo3sw . RandomSource1_MeanVal_memmqqy0nt , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_ciqyogzko1 , 1 , hrxu5rhe3af . e0e33jihoi , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 =
ht1q0lonq4_idx_0 + o2y45zbt2m4 . efvttc54la [ 0 ] ; if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs ) { ilztr2qrue [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_kvrw4yrrrs ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw
. Saturation_LowerSat_kx5yh1wv4z ) { ilztr2qrue [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_kx5yh1wv4z ; } else { ilztr2qrue [ 0 ] = cxn41j5ndz_idx_0
; } cxn41j5ndz_idx_0 = ht1q0lonq4_idx_1 + o2y45zbt2m4 . efvttc54la [ 1 ] ; if
( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs ) {
ilztr2qrue [ 1 ] = hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_kx5yh1wv4z ) { ilztr2qrue
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_kx5yh1wv4z ; } else { ilztr2qrue [ 1
] = cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . diblvbf0co [ 0 ] = o2y45zbt2m4 .
hwkzvkas3c ; o2y45zbt2m4 . diblvbf0co [ 1 ] = o2y45zbt2m4 . pvehregqxn ;
o2y45zbt2m4 . diblvbf0co [ 2 ] = o2y45zbt2m4 . fqzn4ufnnm ; njulo3ucsg = (
o2y45zbt2m4 . diblvbf0co [ 0 ] * o2y45zbt2m4 . diblvbf0co [ 0 ] + o2y45zbt2m4
. diblvbf0co [ 1 ] * o2y45zbt2m4 . diblvbf0co [ 1 ] ) + o2y45zbt2m4 .
diblvbf0co [ 2 ] * o2y45zbt2m4 . diblvbf0co [ 2 ] ; if ( njulo3ucsg < 0.0 ) {
njulo3ucsg = - muDoubleScalarSqrt ( muDoubleScalarAbs ( njulo3ucsg ) ) ; }
else { njulo3ucsg = muDoubleScalarSqrt ( njulo3ucsg ) ; } if ( njulo3ucsg >
hbv5azo3sw . NormalizeVector_maxzero_h2g0i450y0 ) { eujiwcy0tl_idx_0 =
o2y45zbt2m4 . diblvbf0co [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . diblvbf0co
[ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . diblvbf0co [ 2 ] ; prv0bttwvn =
njulo3ucsg ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 . diblvbf0co [ 0 ] * 0.0
; eujiwcy0tl_idx_1 = o2y45zbt2m4 . diblvbf0co [ 1 ] * 0.0 ; eujiwcy0tl_idx_2
= o2y45zbt2m4 . diblvbf0co [ 2 ] * 0.0 ; prv0bttwvn = hbv5azo3sw .
Constant_Value_ktwwdrryx3 ; } eb1fnz3txo [ 0 ] = eujiwcy0tl_idx_0 /
prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 / prv0bttwvn ; eb1fnz3txo [
2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; prv0bttwvn = ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . a5drqsjnex + o2y45zbt2m4 . ndlxlyobzb * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . h5gslldsar * eb1fnz3txo [ 2 ] ; njulo3ucsg =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . daikka42e3 +
o2y45zbt2m4 . ek204bmiea * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . aqwdecxidu *
eb1fnz3txo [ 2 ] , prv0bttwvn ) ; prv0bttwvn = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ga4ycdonne + o2y45zbt2m4 . pihfnbloym *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . dpkcgsd4ym * eb1fnz3txo [ 2 ] , prv0bttwvn
) ; nmd3fc4utj_idx_0 = hbv5azo3sw . Constant_Value_kv3w21qse5 [ 0 ] +
njulo3ucsg ; nmd3fc4utj_idx_1 = hbv5azo3sw . Constant_Value_kv3w21qse5 [ 1 ]
+ prv0bttwvn ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
o2y45zbt2m4 . af3pwylngk , & hbv5azo3sw . RandomSource1_MeanVal_c0fkc2tbqq ,
1 , & hbv5azo3sw . RandomSource1_VarianceRTP_f4hdv51tm4 , 1 , hrxu5rhe3af .
cwsd2g5w2m , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
cxn41j5ndz_idx_0 = nmd3fc4utj_idx_0 + o2y45zbt2m4 . af3pwylngk [ 0 ] ; if (
cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_byrofjxopf ) { hzexholftp
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_byrofjxopf ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_eqtwttitcd ) { hzexholftp
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_eqtwttitcd ; } else { hzexholftp [ 0
] = cxn41j5ndz_idx_0 ; } cxn41j5ndz_idx_0 = nmd3fc4utj_idx_1 + o2y45zbt2m4 .
af3pwylngk [ 1 ] ; if ( cxn41j5ndz_idx_0 > hbv5azo3sw .
Saturation_UpperSat_byrofjxopf ) { hzexholftp [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_byrofjxopf ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw .
Saturation_LowerSat_eqtwttitcd ) { hzexholftp [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_eqtwttitcd ; } else { hzexholftp [ 1 ] = cxn41j5ndz_idx_0
; } o2y45zbt2m4 . avq3ivsxoj [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
avq3ivsxoj [ 1 ] = o2y45zbt2m4 . pvehregqxn ; o2y45zbt2m4 . avq3ivsxoj [ 2 ]
= o2y45zbt2m4 . fqzn4ufnnm ; hkwf2out3d = ( o2y45zbt2m4 . avq3ivsxoj [ 0 ] *
o2y45zbt2m4 . avq3ivsxoj [ 0 ] + o2y45zbt2m4 . avq3ivsxoj [ 1 ] * o2y45zbt2m4
. avq3ivsxoj [ 1 ] ) + o2y45zbt2m4 . avq3ivsxoj [ 2 ] * o2y45zbt2m4 .
avq3ivsxoj [ 2 ] ; if ( hkwf2out3d < 0.0 ) { hkwf2out3d = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( hkwf2out3d ) ) ; } else { hkwf2out3d
= muDoubleScalarSqrt ( hkwf2out3d ) ; } if ( hkwf2out3d > hbv5azo3sw .
NormalizeVector_maxzero_j4hegkg3gk ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 .
avq3ivsxoj [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . avq3ivsxoj [ 1 ] ;
eujiwcy0tl_idx_2 = o2y45zbt2m4 . avq3ivsxoj [ 2 ] ; prv0bttwvn = hkwf2out3d ;
} else { eujiwcy0tl_idx_0 = o2y45zbt2m4 . avq3ivsxoj [ 0 ] * 0.0 ;
eujiwcy0tl_idx_1 = o2y45zbt2m4 . avq3ivsxoj [ 1 ] * 0.0 ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . avq3ivsxoj [ 2 ] * 0.0 ; prv0bttwvn = hbv5azo3sw .
Constant_Value_aefuqipo3z ; } eb1fnz3txo [ 0 ] = eujiwcy0tl_idx_0 /
prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 / prv0bttwvn ; eb1fnz3txo [
2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; njulo3ucsg = ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . fjxh2v44zo + o2y45zbt2m4 . ei2iplcloo * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . dpw0lpwtco * eb1fnz3txo [ 2 ] ; hkwf2out3d =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . jhqy0zwmu3 +
o2y45zbt2m4 . c23uk112gn * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . eq1sfn3btk *
eb1fnz3txo [ 2 ] , njulo3ucsg ) ; njulo3ucsg = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . iuke2eyfra + o2y45zbt2m4 . kwmlekgm0w *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . bw33cb1smq * eb1fnz3txo [ 2 ] , njulo3ucsg
) ; hkwf2out3d += hbv5azo3sw . Constant_Value_ei4qxougxr [ 0 ] ;
ardt1y5x0d_idx_1 = hbv5azo3sw . Constant_Value_ei4qxougxr [ 1 ] + njulo3ucsg
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
fk5zqxuz3h , & hbv5azo3sw . RandomSource1_MeanVal_d5xz2yhw3l , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_g12uaggma2 , 1 , hrxu5rhe3af .
pbvxmucjj5 , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
cxn41j5ndz_idx_0 = hkwf2out3d + o2y45zbt2m4 . fk5zqxuz3h [ 0 ] ; if (
cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_llltpjmasd ) { jr4rimgbh0
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_llltpjmasd ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_od1cxjykdq ) { jr4rimgbh0
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_od1cxjykdq ; } else { jr4rimgbh0 [ 0
] = cxn41j5ndz_idx_0 ; } cxn41j5ndz_idx_0 = ardt1y5x0d_idx_1 + o2y45zbt2m4 .
fk5zqxuz3h [ 1 ] ; if ( cxn41j5ndz_idx_0 > hbv5azo3sw .
Saturation_UpperSat_llltpjmasd ) { jr4rimgbh0 [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_llltpjmasd ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw .
Saturation_LowerSat_od1cxjykdq ) { jr4rimgbh0 [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_od1cxjykdq ; } else { jr4rimgbh0 [ 1 ] = cxn41j5ndz_idx_0
; } o2y45zbt2m4 . cztzhrui22 [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
cztzhrui22 [ 1 ] = o2y45zbt2m4 . pvehregqxn ; o2y45zbt2m4 . cztzhrui22 [ 2 ]
= o2y45zbt2m4 . fqzn4ufnnm ; emiiavfkh1 = ( o2y45zbt2m4 . cztzhrui22 [ 0 ] *
o2y45zbt2m4 . cztzhrui22 [ 0 ] + o2y45zbt2m4 . cztzhrui22 [ 1 ] * o2y45zbt2m4
. cztzhrui22 [ 1 ] ) + o2y45zbt2m4 . cztzhrui22 [ 2 ] * o2y45zbt2m4 .
cztzhrui22 [ 2 ] ; if ( emiiavfkh1 < 0.0 ) { emiiavfkh1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( emiiavfkh1 ) ) ; } else { emiiavfkh1
= muDoubleScalarSqrt ( emiiavfkh1 ) ; } if ( emiiavfkh1 > hbv5azo3sw .
NormalizeVector_maxzero_g4yscxcbyk ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 .
cztzhrui22 [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . cztzhrui22 [ 1 ] ;
eujiwcy0tl_idx_2 = o2y45zbt2m4 . cztzhrui22 [ 2 ] ; prv0bttwvn = emiiavfkh1 ;
} else { eujiwcy0tl_idx_0 = o2y45zbt2m4 . cztzhrui22 [ 0 ] * 0.0 ;
eujiwcy0tl_idx_1 = o2y45zbt2m4 . cztzhrui22 [ 1 ] * 0.0 ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . cztzhrui22 [ 2 ] * 0.0 ; prv0bttwvn = hbv5azo3sw .
Constant_Value_d3tr2oyhj4 ; } eb1fnz3txo [ 0 ] = eujiwcy0tl_idx_0 /
prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 / prv0bttwvn ; eb1fnz3txo [
2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; hkwf2out3d = ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . kp0ottklv2 + o2y45zbt2m4 . d4h0eb221l * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . ajeydhy34x * eb1fnz3txo [ 2 ] ; emiiavfkh1 =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . d224533rgj +
o2y45zbt2m4 . i01jbvlzhi * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . ksqsb0wny4 *
eb1fnz3txo [ 2 ] , hkwf2out3d ) ; hkwf2out3d = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . d0h2bkxm2a + o2y45zbt2m4 . llcjil2ppz *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . jpbug4sdyr * eb1fnz3txo [ 2 ] , hkwf2out3d
) ; emiiavfkh1 += hbv5azo3sw . Constant_Value_lod4m2end1 [ 0 ] ;
au32y1wfjp_idx_1 = hbv5azo3sw . Constant_Value_lod4m2end1 [ 1 ] + hkwf2out3d
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
gqbzn03dkr , & hbv5azo3sw . RandomSource1_MeanVal_jxhxrhz3me , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_bdmhqmxko4 , 1 , hrxu5rhe3af .
alynay3xx0 , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
cxn41j5ndz_idx_0 = emiiavfkh1 + o2y45zbt2m4 . gqbzn03dkr [ 0 ] ; if (
cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_e1cwi1gybf ) { j4yy5fljso
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_e1cwi1gybf ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_ajttgxrnng ) { j4yy5fljso
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_ajttgxrnng ; } else { j4yy5fljso [ 0
] = cxn41j5ndz_idx_0 ; } cxn41j5ndz_idx_0 = au32y1wfjp_idx_1 + o2y45zbt2m4 .
gqbzn03dkr [ 1 ] ; if ( cxn41j5ndz_idx_0 > hbv5azo3sw .
Saturation_UpperSat_e1cwi1gybf ) { j4yy5fljso [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_e1cwi1gybf ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw .
Saturation_LowerSat_ajttgxrnng ) { j4yy5fljso [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_ajttgxrnng ; } else { j4yy5fljso [ 1 ] = cxn41j5ndz_idx_0
; } n11z2qtnyp ( bz3m03sk4h , prirsvmw33 , ilztr2qrue , hzexholftp ,
jr4rimgbh0 , j4yy5fljso , & o2y45zbt2m4 . ik12ax5qrt ) ; o2y45zbt2m4 .
mdvmrfnqkz [ 0 ] = o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ; o2y45zbt2m4 . mdvmrfnqkz
[ 1 ] = o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ; o2y45zbt2m4 . mdvmrfnqkz [ 2 ] =
o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; } tmp = ssGetIsOkayToUpdateMode ( rtS ) ; if
( tmp ) { if ( hrxu5rhe3af . febtg0cpg5 != 0 ) { n1mubcupv31 . cjfebnqw1p =
o2y45zbt2m4 . hckf2ailv0 ; } emiiavfkh1 = n1mubcupv31 . cjfebnqw1p ; } else {
emiiavfkh1 = n1mubcupv31 . cjfebnqw1p ; } hkwf2out3d = o2y45zbt2m4 .
mrzwmqiqje / ( hbv5azo3sw . e_Value * muDoubleScalarCos ( emiiavfkh1 ) +
hbv5azo3sw . Constant_Value_azddlyivju ) ; njulo3ucsg = muDoubleScalarCos (
emiiavfkh1 ) ; prv0bttwvn = muDoubleScalarSin ( emiiavfkh1 ) ; o2y45zbt2m4 .
fj4e2b5bch [ 0 ] = ( ( njulo3ucsg * o2y45zbt2m4 . ightd03wbw + o2y45zbt2m4 .
kyx4elghw5 * prv0bttwvn ) + o2y45zbt2m4 . boco0ydrhx ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - pygfqx1xx2 [ 0 ] ; o2y45zbt2m4 .
fj4e2b5bch [ 1 ] = ( ( njulo3ucsg * o2y45zbt2m4 . kgibrayejc + o2y45zbt2m4 .
klod4yztvz * prv0bttwvn ) + o2y45zbt2m4 . gr0fttz1x3 ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - pygfqx1xx2 [ 1 ] ; o2y45zbt2m4 .
fj4e2b5bch [ 2 ] = ( ( njulo3ucsg * o2y45zbt2m4 . lj2hsiefmb + o2y45zbt2m4 .
pqwrcdv51y * prv0bttwvn ) + o2y45zbt2m4 . gkj1c4ecpo ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - pygfqx1xx2 [ 2 ] ; njulo3ucsg = ( (
l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo * dxjf4qcaeo ) + k1qmoe0iaw * k1qmoe0iaw
) + nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . ojltdhe2we != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . ojltdhe2we = 0 ; } hkwf2out3d = muDoubleScalarSqrt (
njulo3ucsg ) ; } else if ( njulo3ucsg < 0.0 ) { hkwf2out3d = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( njulo3ucsg ) ) ; hrxu5rhe3af .
ojltdhe2we = 1 ; } else { hkwf2out3d = muDoubleScalarSqrt ( njulo3ucsg ) ; }
njulo3ucsg = k1qmoe0iaw / hkwf2out3d ; prv0bttwvn = nm4t0wvumv / hkwf2out3d ;
cxn41j5ndz_idx_0 = dxjf4qcaeo / hkwf2out3d ; hkwf2out3d = l1pix2zzzf /
hkwf2out3d ; o2y45zbt2m4 . k2zlzdldai [ 0 ] = ( ( ( hbv5azo3sw .
Constant_Value_hn3g4e2bdf - njulo3ucsg * njulo3ucsg ) - prv0bttwvn *
prv0bttwvn ) * hbv5azo3sw . Gain2_Gain_nben4kjacq * o2y45zbt2m4 . fj4e2b5bch
[ 0 ] + ( cxn41j5ndz_idx_0 * njulo3ucsg + hkwf2out3d * prv0bttwvn ) *
hbv5azo3sw . Gain_Gain_kewyutalpa * o2y45zbt2m4 . fj4e2b5bch [ 1 ] ) + (
cxn41j5ndz_idx_0 * prv0bttwvn - hkwf2out3d * njulo3ucsg ) * hbv5azo3sw .
Gain1_Gain_e5ngzsvcli * o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; o2y45zbt2m4 .
k2zlzdldai [ 1 ] = ( ( ( hbv5azo3sw . Constant_Value_cinqqywm1t -
cxn41j5ndz_idx_0 * cxn41j5ndz_idx_0 ) - prv0bttwvn * prv0bttwvn ) *
hbv5azo3sw . Gain2_Gain_d4fbbaxwpd * o2y45zbt2m4 . fj4e2b5bch [ 1 ] + (
cxn41j5ndz_idx_0 * njulo3ucsg - hkwf2out3d * prv0bttwvn ) * hbv5azo3sw .
Gain_Gain_fouuav1ki1 * o2y45zbt2m4 . fj4e2b5bch [ 0 ] ) + ( hkwf2out3d *
cxn41j5ndz_idx_0 + njulo3ucsg * prv0bttwvn ) * hbv5azo3sw .
Gain1_Gain_lq4olh4tnx * o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; o2y45zbt2m4 .
k2zlzdldai [ 2 ] = ( ( cxn41j5ndz_idx_0 * prv0bttwvn + hkwf2out3d *
njulo3ucsg ) * hbv5azo3sw . Gain_Gain_kc1cpqscqf * o2y45zbt2m4 . fj4e2b5bch [
0 ] + ( njulo3ucsg * prv0bttwvn - hkwf2out3d * cxn41j5ndz_idx_0 ) *
hbv5azo3sw . Gain1_Gain_n4q3gythod * o2y45zbt2m4 . fj4e2b5bch [ 1 ] ) + ( (
hbv5azo3sw . Constant_Value_aglfz4cib2 - cxn41j5ndz_idx_0 * cxn41j5ndz_idx_0
) - njulo3ucsg * njulo3ucsg ) * hbv5azo3sw . Gain2_Gain_arhr50dupm *
o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
o2y45zbt2m4 . aoe02aounf [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4
. aoe02aounf [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 .
aoe02aounf [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ; prv0bttwvn = (
o2y45zbt2m4 . aoe02aounf [ 0 ] * o2y45zbt2m4 . aoe02aounf [ 0 ] + o2y45zbt2m4
. aoe02aounf [ 1 ] * o2y45zbt2m4 . aoe02aounf [ 1 ] ) + o2y45zbt2m4 .
aoe02aounf [ 2 ] * o2y45zbt2m4 . aoe02aounf [ 2 ] ; if ( prv0bttwvn < 0.0 ) {
prv0bttwvn = - muDoubleScalarSqrt ( muDoubleScalarAbs ( prv0bttwvn ) ) ; }
else { prv0bttwvn = muDoubleScalarSqrt ( prv0bttwvn ) ; } if ( prv0bttwvn >
hbv5azo3sw . NormalizeVector_maxzero_bhjxf3hbxp ) { eujiwcy0tl_idx_0 =
o2y45zbt2m4 . aoe02aounf [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . aoe02aounf
[ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . aoe02aounf [ 2 ] ; } else {
eujiwcy0tl_idx_0 = o2y45zbt2m4 . aoe02aounf [ 0 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . aoe02aounf [ 1 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 .
aoe02aounf [ 2 ] * 0.0 ; prv0bttwvn = hbv5azo3sw . Constant_Value_pu1egqm5wd
; } eb1fnz3txo [ 0 ] = eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] =
eujiwcy0tl_idx_1 / prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 /
prv0bttwvn ; hkwf2out3d = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . gegkjzomxm +
o2y45zbt2m4 . kd1qxjhyrr * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . pgs5royztd *
eb1fnz3txo [ 2 ] ; prv0bttwvn = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . olg5gqva4k + o2y45zbt2m4 . ebby2e0eey * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . kc5uinuva1 * eb1fnz3txo [ 2 ] , hkwf2out3d ) ; hkwf2out3d =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ny5fqojp01 +
o2y45zbt2m4 . g42bdhp2mr * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . mwkxuoztcf *
eb1fnz3txo [ 2 ] , hkwf2out3d ) ; clod0whodw_idx_0 = hbv5azo3sw .
Constant_Value_k3ydr0xveb [ 0 ] + prv0bttwvn ; clod0whodw_idx_1 = hbv5azo3sw
. Constant_Value_k3ydr0xveb [ 1 ] + hkwf2out3d ; } if ( ssIsSampleHit ( rtS ,
6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . mkpovvsjoj , & hbv5azo3sw .
RandomSource1_MeanVal_bvk35h21mf , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_k1b5meiqjj , 1 , hrxu5rhe3af . n10hslmo2a , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 =
clod0whodw_idx_0 + o2y45zbt2m4 . mkpovvsjoj [ 0 ] ; if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . Saturation_UpperSat_hvo4j1520s ) { el4y0ewlg2 [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_hvo4j1520s ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw
. Saturation_LowerSat_anwhzkhsgm ) { el4y0ewlg2 [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_anwhzkhsgm ; } else { el4y0ewlg2 [ 0 ] = cxn41j5ndz_idx_0
; } cxn41j5ndz_idx_0 = clod0whodw_idx_1 + o2y45zbt2m4 . mkpovvsjoj [ 1 ] ; if
( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_hvo4j1520s ) {
el4y0ewlg2 [ 1 ] = hbv5azo3sw . Saturation_UpperSat_hvo4j1520s ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_anwhzkhsgm ) { el4y0ewlg2
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_anwhzkhsgm ; } else { el4y0ewlg2 [ 1
] = cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . hiigrn3uvx [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . hiigrn3uvx [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . hiigrn3uvx [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
cxn41j5ndz_idx_0 = ( o2y45zbt2m4 . hiigrn3uvx [ 0 ] * o2y45zbt2m4 .
hiigrn3uvx [ 0 ] + o2y45zbt2m4 . hiigrn3uvx [ 1 ] * o2y45zbt2m4 . hiigrn3uvx
[ 1 ] ) + o2y45zbt2m4 . hiigrn3uvx [ 2 ] * o2y45zbt2m4 . hiigrn3uvx [ 2 ] ;
if ( cxn41j5ndz_idx_0 < 0.0 ) { cxn41j5ndz_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( cxn41j5ndz_idx_0 ) ) ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarSqrt ( cxn41j5ndz_idx_0 ) ; } if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . NormalizeVector_maxzero_nx4f2adafg ) { eujiwcy0tl_idx_0 =
o2y45zbt2m4 . hiigrn3uvx [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . hiigrn3uvx
[ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . hiigrn3uvx [ 2 ] ; prv0bttwvn =
cxn41j5ndz_idx_0 ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 . hiigrn3uvx [ 0 ]
* 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . hiigrn3uvx [ 1 ] * 0.0 ;
eujiwcy0tl_idx_2 = o2y45zbt2m4 . hiigrn3uvx [ 2 ] * 0.0 ; prv0bttwvn =
hbv5azo3sw . Constant_Value_oqac1ckjba ; } eb1fnz3txo [ 0 ] =
eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 /
prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; prv0bttwvn =
( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . am2ydxy3tg + o2y45zbt2m4 . aayx0clngf *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . imjovcvzmj * eb1fnz3txo [ 2 ] ;
cxn41j5ndz_idx_0 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
ewg4gsarwm + o2y45zbt2m4 . eqlu1laly1 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
c4imsujsyj * eb1fnz3txo [ 2 ] , prv0bttwvn ) ; prv0bttwvn =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . myxilkpyto +
o2y45zbt2m4 . jyoiaqgash * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . nfvbvcsgaf *
eb1fnz3txo [ 2 ] , prv0bttwvn ) ; epx0klrbgl_idx_0 = hbv5azo3sw .
Constant_Value_cknsmwduvj [ 0 ] + cxn41j5ndz_idx_0 ; epx0klrbgl_idx_1 =
hbv5azo3sw . Constant_Value_cknsmwduvj [ 1 ] + prv0bttwvn ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . nyimkzd5hq , &
hbv5azo3sw . RandomSource1_MeanVal_cgugych5h2 , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_pdcijtaj4d , 1 , hrxu5rhe3af . j13dkj5h0s , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 =
epx0klrbgl_idx_0 + o2y45zbt2m4 . nyimkzd5hq [ 0 ] ; if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . Saturation_UpperSat_m5walzmpht ) { mgirxq514b [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_m5walzmpht ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw
. Saturation_LowerSat_kiy0a1gdvs ) { mgirxq514b [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_kiy0a1gdvs ; } else { mgirxq514b [ 0 ] = cxn41j5ndz_idx_0
; } cxn41j5ndz_idx_0 = epx0klrbgl_idx_1 + o2y45zbt2m4 . nyimkzd5hq [ 1 ] ; if
( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_m5walzmpht ) {
mgirxq514b [ 1 ] = hbv5azo3sw . Saturation_UpperSat_m5walzmpht ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_kiy0a1gdvs ) { mgirxq514b
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_kiy0a1gdvs ; } else { mgirxq514b [ 1
] = cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . fllsexxjfy [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fllsexxjfy [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . fllsexxjfy [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
prv0bttwvn = ( o2y45zbt2m4 . fllsexxjfy [ 0 ] * o2y45zbt2m4 . fllsexxjfy [ 0
] + o2y45zbt2m4 . fllsexxjfy [ 1 ] * o2y45zbt2m4 . fllsexxjfy [ 1 ] ) +
o2y45zbt2m4 . fllsexxjfy [ 2 ] * o2y45zbt2m4 . fllsexxjfy [ 2 ] ; if (
prv0bttwvn < 0.0 ) { prv0bttwvn = - muDoubleScalarSqrt ( muDoubleScalarAbs (
prv0bttwvn ) ) ; } else { prv0bttwvn = muDoubleScalarSqrt ( prv0bttwvn ) ; }
if ( prv0bttwvn > hbv5azo3sw . NormalizeVector_maxzero_j5wdotj0ar ) {
eujiwcy0tl_idx_0 = o2y45zbt2m4 . fllsexxjfy [ 0 ] ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . fllsexxjfy [ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . fllsexxjfy
[ 2 ] ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 . fllsexxjfy [ 0 ] * 0.0 ;
eujiwcy0tl_idx_1 = o2y45zbt2m4 . fllsexxjfy [ 1 ] * 0.0 ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . fllsexxjfy [ 2 ] * 0.0 ; prv0bttwvn = hbv5azo3sw .
Constant_Value_etis5qgp2s ; } eb1fnz3txo [ 0 ] = eujiwcy0tl_idx_0 /
prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 / prv0bttwvn ; eb1fnz3txo [
2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; cxn41j5ndz_idx_0 = ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . aqvhjylunl + o2y45zbt2m4 . pmy5icug2k * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . pxdeyipxtr * eb1fnz3txo [ 2 ] ; prv0bttwvn =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . bzsae5g150 +
o2y45zbt2m4 . fhwu2rpyxm * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . db5wedrkq4 *
eb1fnz3txo [ 2 ] , cxn41j5ndz_idx_0 ) ; cxn41j5ndz_idx_0 =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . fxqr3to5iu +
o2y45zbt2m4 . jzcgup51f2 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . b3deffzvww *
eb1fnz3txo [ 2 ] , cxn41j5ndz_idx_0 ) ; oouy1fopfw_idx_0 = hbv5azo3sw .
Constant_Value_mxxxqc2s25 [ 0 ] + prv0bttwvn ; oouy1fopfw_idx_1 = hbv5azo3sw
. Constant_Value_mxxxqc2s25 [ 1 ] + cxn41j5ndz_idx_0 ; } if ( ssIsSampleHit (
rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . cddswdr3cl , & hbv5azo3sw .
RandomSource1_MeanVal_d4idhl1tz1 , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_crqc3mkc0f , 1 , hrxu5rhe3af . k40rhthviy , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 =
oouy1fopfw_idx_0 + o2y45zbt2m4 . cddswdr3cl [ 0 ] ; if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw ) { n4cr5voz3i [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_m5kmh5w5uw ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw
. Saturation_LowerSat_i04nwcukho ) { n4cr5voz3i [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_i04nwcukho ; } else { n4cr5voz3i [ 0 ] = cxn41j5ndz_idx_0
; } cxn41j5ndz_idx_0 = oouy1fopfw_idx_1 + o2y45zbt2m4 . cddswdr3cl [ 1 ] ; if
( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw ) {
n4cr5voz3i [ 1 ] = hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_i04nwcukho ) { n4cr5voz3i
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_i04nwcukho ; } else { n4cr5voz3i [ 1
] = cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . obyw5bjsqt [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . obyw5bjsqt [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . obyw5bjsqt [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
cxn41j5ndz_idx_0 = ( o2y45zbt2m4 . obyw5bjsqt [ 0 ] * o2y45zbt2m4 .
obyw5bjsqt [ 0 ] + o2y45zbt2m4 . obyw5bjsqt [ 1 ] * o2y45zbt2m4 . obyw5bjsqt
[ 1 ] ) + o2y45zbt2m4 . obyw5bjsqt [ 2 ] * o2y45zbt2m4 . obyw5bjsqt [ 2 ] ;
if ( cxn41j5ndz_idx_0 < 0.0 ) { cxn41j5ndz_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( cxn41j5ndz_idx_0 ) ) ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarSqrt ( cxn41j5ndz_idx_0 ) ; } if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . NormalizeVector_maxzero_etigbudinl ) { eujiwcy0tl_idx_0 =
o2y45zbt2m4 . obyw5bjsqt [ 0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . obyw5bjsqt
[ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . obyw5bjsqt [ 2 ] ; prv0bttwvn =
cxn41j5ndz_idx_0 ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 . obyw5bjsqt [ 0 ]
* 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . obyw5bjsqt [ 1 ] * 0.0 ;
eujiwcy0tl_idx_2 = o2y45zbt2m4 . obyw5bjsqt [ 2 ] * 0.0 ; prv0bttwvn =
hbv5azo3sw . Constant_Value_loxooi2xox ; } eb1fnz3txo [ 0 ] =
eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 /
prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; prv0bttwvn =
( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . fuxsypdw5b + o2y45zbt2m4 . ibibxo1hc5 *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . e0g1epmzzc * eb1fnz3txo [ 2 ] ;
cxn41j5ndz_idx_0 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
pmjdaqsrgv + o2y45zbt2m4 . cepjmd5gi4 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
a3l2vrrg5t * eb1fnz3txo [ 2 ] , prv0bttwvn ) ; prv0bttwvn =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ivk2auaags +
o2y45zbt2m4 . ks0a4vmt2y * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . hmdscxhrrq *
eb1fnz3txo [ 2 ] , prv0bttwvn ) ; b2dseb5akc_idx_0 = hbv5azo3sw .
Constant_Value_pxpcd5bk3c [ 0 ] + cxn41j5ndz_idx_0 ; b2dseb5akc_idx_1 =
hbv5azo3sw . Constant_Value_pxpcd5bk3c [ 1 ] + prv0bttwvn ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . a2f0ypmsuy , &
hbv5azo3sw . RandomSource1_MeanVal_n5f3r1zvmv , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_blin0jucej , 1 , hrxu5rhe3af . jjpbiyjnrh , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 =
b2dseb5akc_idx_0 + o2y45zbt2m4 . a2f0ypmsuy [ 0 ] ; if ( cxn41j5ndz_idx_0 >
hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz ) { naxh1rmprg [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_c4xiqwgxlz ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw
. Saturation_LowerSat_pi2aujffw1 ) { naxh1rmprg [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_pi2aujffw1 ; } else { naxh1rmprg [ 0 ] = cxn41j5ndz_idx_0
; } cxn41j5ndz_idx_0 = b2dseb5akc_idx_1 + o2y45zbt2m4 . a2f0ypmsuy [ 1 ] ; if
( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz ) {
naxh1rmprg [ 1 ] = hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_pi2aujffw1 ) { naxh1rmprg
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_pi2aujffw1 ; } else { naxh1rmprg [ 1
] = cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . fp4h0u1qqq [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fp4h0u1qqq [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . fp4h0u1qqq [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
ln02qvajo4 = ( o2y45zbt2m4 . fp4h0u1qqq [ 0 ] * o2y45zbt2m4 . fp4h0u1qqq [ 0
] + o2y45zbt2m4 . fp4h0u1qqq [ 1 ] * o2y45zbt2m4 . fp4h0u1qqq [ 1 ] ) +
o2y45zbt2m4 . fp4h0u1qqq [ 2 ] * o2y45zbt2m4 . fp4h0u1qqq [ 2 ] ; if (
ln02qvajo4 < 0.0 ) { ln02qvajo4 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ln02qvajo4 ) ) ; } else { ln02qvajo4 = muDoubleScalarSqrt ( ln02qvajo4 ) ; }
if ( ln02qvajo4 > hbv5azo3sw . NormalizeVector_maxzero_mpxbpoayb2 ) {
eujiwcy0tl_idx_0 = o2y45zbt2m4 . fp4h0u1qqq [ 0 ] ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . fp4h0u1qqq [ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . fp4h0u1qqq
[ 2 ] ; prv0bttwvn = ln02qvajo4 ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 .
fp4h0u1qqq [ 0 ] * 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . fp4h0u1qqq [ 1 ] *
0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . fp4h0u1qqq [ 2 ] * 0.0 ; prv0bttwvn =
hbv5azo3sw . Constant_Value_h114kk0gb0 ; } eb1fnz3txo [ 0 ] =
eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 /
prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ;
cxn41j5ndz_idx_0 = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ke44k2nvd3 +
o2y45zbt2m4 . bvbwt2i4ty * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . bckqvwne10 *
eb1fnz3txo [ 2 ] ; ln02qvajo4 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . mf042bbyls + o2y45zbt2m4 . pvujvtillf * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . bralaspqvj * eb1fnz3txo [ 2 ] , cxn41j5ndz_idx_0 ) ;
cxn41j5ndz_idx_0 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
pvvuqzjxh5 + o2y45zbt2m4 . nd0vnjuzbo * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
jkdvlxhrn3 * eb1fnz3txo [ 2 ] , cxn41j5ndz_idx_0 ) ; ln02qvajo4 += hbv5azo3sw
. Constant_Value_a5pfdrbwx4 [ 0 ] ; mjhceqjgf1_idx_1 = hbv5azo3sw .
Constant_Value_a5pfdrbwx4 [ 1 ] + cxn41j5ndz_idx_0 ; } if ( ssIsSampleHit (
rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . ch2k5w2dnh , & hbv5azo3sw .
RandomSource1_MeanVal_kfynkp2waz , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_dvuf3vyvl4 , 1 , hrxu5rhe3af . impwbrb5ul , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 = ln02qvajo4 +
o2y45zbt2m4 . ch2k5w2dnh [ 0 ] ; if ( cxn41j5ndz_idx_0 > hbv5azo3sw .
Saturation_UpperSat_mq4hmkw4m2 ) { ablvf05wvd [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_mq4hmkw4m2 ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw .
Saturation_LowerSat_dqoi00mxim ) { ablvf05wvd [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_dqoi00mxim ; } else { ablvf05wvd [ 0 ] = cxn41j5ndz_idx_0
; } cxn41j5ndz_idx_0 = mjhceqjgf1_idx_1 + o2y45zbt2m4 . ch2k5w2dnh [ 1 ] ; if
( cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 ) {
ablvf05wvd [ 1 ] = hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_dqoi00mxim ) { ablvf05wvd
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_dqoi00mxim ; } else { ablvf05wvd [ 1
] = cxn41j5ndz_idx_0 ; } o2y45zbt2m4 . fe3icz0afg [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fe3icz0afg [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . fe3icz0afg [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
njulo3ucsg = ( o2y45zbt2m4 . fe3icz0afg [ 0 ] * o2y45zbt2m4 . fe3icz0afg [ 0
] + o2y45zbt2m4 . fe3icz0afg [ 1 ] * o2y45zbt2m4 . fe3icz0afg [ 1 ] ) +
o2y45zbt2m4 . fe3icz0afg [ 2 ] * o2y45zbt2m4 . fe3icz0afg [ 2 ] ; if (
njulo3ucsg < 0.0 ) { njulo3ucsg = - muDoubleScalarSqrt ( muDoubleScalarAbs (
njulo3ucsg ) ) ; } else { njulo3ucsg = muDoubleScalarSqrt ( njulo3ucsg ) ; }
if ( njulo3ucsg > hbv5azo3sw . NormalizeVector_maxzero_kqylmwb1gt ) {
eujiwcy0tl_idx_0 = o2y45zbt2m4 . fe3icz0afg [ 0 ] ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . fe3icz0afg [ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . fe3icz0afg
[ 2 ] ; prv0bttwvn = njulo3ucsg ; } else { eujiwcy0tl_idx_0 = o2y45zbt2m4 .
fe3icz0afg [ 0 ] * 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . fe3icz0afg [ 1 ] *
0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . fe3icz0afg [ 2 ] * 0.0 ; prv0bttwvn =
hbv5azo3sw . Constant_Value_kd13wd1tn5 ; } eb1fnz3txo [ 0 ] =
eujiwcy0tl_idx_0 / prv0bttwvn ; eb1fnz3txo [ 1 ] = eujiwcy0tl_idx_1 /
prv0bttwvn ; eb1fnz3txo [ 2 ] = eujiwcy0tl_idx_2 / prv0bttwvn ; ln02qvajo4 =
( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . lvap1gibsy + o2y45zbt2m4 . fjgl0ynn23 *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . dlywnze0gh * eb1fnz3txo [ 2 ] ; njulo3ucsg
= muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ekeiqfqt15 +
o2y45zbt2m4 . icooi3vgxr * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . nhfh5pwjge *
eb1fnz3txo [ 2 ] , ln02qvajo4 ) ; ln02qvajo4 = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . fu44uyydbm + o2y45zbt2m4 . kif43ukmno *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . nrvyadhccn * eb1fnz3txo [ 2 ] , ln02qvajo4
) ; pzi3xtzla3_idx_0 = hbv5azo3sw . Constant_Value_pb14rkkk1o [ 0 ] +
njulo3ucsg ; pzi3xtzla3_idx_1 = hbv5azo3sw . Constant_Value_pb14rkkk1o [ 1 ]
+ ln02qvajo4 ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
o2y45zbt2m4 . ipb4qp4laq , & hbv5azo3sw . RandomSource1_MeanVal_d1pxk3satq ,
1 , & hbv5azo3sw . RandomSource1_VarianceRTP_cg3jlumacb , 1 , hrxu5rhe3af .
ck30ytigtq , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
cxn41j5ndz_idx_0 = pzi3xtzla3_idx_0 + o2y45zbt2m4 . ipb4qp4laq [ 0 ] ; if (
cxn41j5ndz_idx_0 > hbv5azo3sw . Saturation_UpperSat_kiybxhvwme ) { jazbl50puz
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_kiybxhvwme ; } else if (
cxn41j5ndz_idx_0 < hbv5azo3sw . Saturation_LowerSat_lktmm4bxfn ) { jazbl50puz
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_lktmm4bxfn ; } else { jazbl50puz [ 0
] = cxn41j5ndz_idx_0 ; } cxn41j5ndz_idx_0 = pzi3xtzla3_idx_1 + o2y45zbt2m4 .
ipb4qp4laq [ 1 ] ; if ( cxn41j5ndz_idx_0 > hbv5azo3sw .
Saturation_UpperSat_kiybxhvwme ) { jazbl50puz [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_kiybxhvwme ; } else if ( cxn41j5ndz_idx_0 < hbv5azo3sw .
Saturation_LowerSat_lktmm4bxfn ) { jazbl50puz [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_lktmm4bxfn ; } else { jazbl50puz [ 1 ] = cxn41j5ndz_idx_0
; } n11z2qtnyp ( el4y0ewlg2 , mgirxq514b , n4cr5voz3i , naxh1rmprg ,
ablvf05wvd , jazbl50puz , & o2y45zbt2m4 . cuglwsdmbh ) ; o2y45zbt2m4 .
g4hdycezvh [ 0 ] = o2y45zbt2m4 . fj4e2b5bch [ 0 ] ; o2y45zbt2m4 . g4hdycezvh
[ 1 ] = o2y45zbt2m4 . fj4e2b5bch [ 1 ] ; o2y45zbt2m4 . g4hdycezvh [ 2 ] =
o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; if ( hbv5azo3sw . Enable1_Value ) {
o2y45zbt2m4 . niydxw3dug = hbv5azo3sw . BlockOrdering_Value ; tmp_p [ 0 ] =
o2y45zbt2m4 . g4hdycezvh [ 0 ] ; tmp_p [ 1 ] = o2y45zbt2m4 . g4hdycezvh [ 1 ]
; tmp_p [ 2 ] = o2y45zbt2m4 . g4hdycezvh [ 2 ] ; tmp_p [ 3 ] = o2y45zbt2m4 .
cuglwsdmbh . heq1xsib3m [ 0 ] ; tmp_p [ 4 ] = o2y45zbt2m4 . cuglwsdmbh .
heq1xsib3m [ 1 ] ; tmp_p [ 5 ] = o2y45zbt2m4 . cuglwsdmbh . heq1xsib3m [ 2 ]
; tmp_p [ 6 ] = o2y45zbt2m4 . cuglwsdmbh . heq1xsib3m [ 3 ] ;
UKFCorrector_correct_0DukvtxL ( o2y45zbt2m4 . cuglwsdmbh . nx1h2bs53u ,
hbv5azo3sw . R1_Value , hrxu5rhe3af . j3ergpk3vu , hrxu5rhe3af . buggjk4l1n ,
tmp_p ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af .
jkbsaxmqju ) ; } } if ( hbv5azo3sw . Enable2_Value ) { o2y45zbt2m4 .
nh40mtprpn = o2y45zbt2m4 . niydxw3dug ; UKFCorrector_correct_jE8bEoap (
o2y45zbt2m4 . ik12ax5qrt . nx1h2bs53u , hbv5azo3sw . R2_Value , hrxu5rhe3af .
j3ergpk3vu , hrxu5rhe3af . buggjk4l1n ) ; if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( hrxu5rhe3af . noecaey35j ) ; } } } if ( ssIsSampleHit ( rtS , 2
, 0 ) ) { if ( hbv5azo3sw . Enable3_Value ) {
UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_WKjIFSsL (
hbv5azo3sw . R3_Value , hrxu5rhe3af . j3ergpk3vu , hrxu5rhe3af . buggjk4l1n ,
eb1fnz3txo , Pxy , sBF ) ; for ( i = 0 ; i < 10 ; i ++ ) { for ( k = 0 ; k <
10 ; k ++ ) { sqrtP [ k + 10 * i ] = hrxu5rhe3af . buggjk4l1n [ 10 * k + i ]
; } } memcpy ( & hrxu5rhe3af . buggjk4l1n [ 0 ] , & sqrtP [ 0 ] , 100U *
sizeof ( real_T ) ) ; myqx15ehea [ 0 ] = hlbbwfsq2e [ 0 ] - eb1fnz3txo [ 0 ]
; myqx15ehea [ 1 ] = hlbbwfsq2e [ 1 ] - eb1fnz3txo [ 1 ] ; myqx15ehea [ 2 ] =
hlbbwfsq2e [ 2 ] - eb1fnz3txo [ 2 ] ;
UKFCorrector_correctStateAndSqrtCovariance_D74IKMW2 ( hrxu5rhe3af .
j3ergpk3vu , hrxu5rhe3af . buggjk4l1n , myqx15ehea , Pxy , sBF ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . olb1gflryv ) ; } }
memcpy ( & o2y45zbt2m4 . kncngnrvsh [ 0 ] , & hrxu5rhe3af . j3ergpk3vu [ 0 ]
, 10U * sizeof ( real_T ) ) ; o2y45zbt2m4 . c1cfxe21zn [ 0 ] = ( ( hbv5azo3sw
. Gain_Gain_bi5br4oxvh * o2y45zbt2m4 . kncngnrvsh [ 4 ] + o2y45zbt2m4 .
kuqlbidad1 [ 0 ] ) + o2y45zbt2m4 . kncngnrvsh [ 0 ] * o2y45zbt2m4 .
kncngnrvsh [ 1 ] * hbv5azo3sw . Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw .
Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 . op4p3vooky [ 0 ] = hbv5azo3sw .
Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; o2y45zbt2m4 .
c1cfxe21zn [ 1 ] = ( ( hbv5azo3sw . Gain_Gain_bi5br4oxvh * o2y45zbt2m4 .
kncngnrvsh [ 5 ] + o2y45zbt2m4 . kuqlbidad1 [ 1 ] ) + o2y45zbt2m4 .
kncngnrvsh [ 0 ] * o2y45zbt2m4 . kncngnrvsh [ 2 ] * hbv5azo3sw .
Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw . Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 .
op4p3vooky [ 1 ] = hbv5azo3sw . Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 .
c1cfxe21zn [ 1 ] ; o2y45zbt2m4 . c1cfxe21zn [ 2 ] = ( ( hbv5azo3sw .
Gain_Gain_bi5br4oxvh * o2y45zbt2m4 . kncngnrvsh [ 6 ] + o2y45zbt2m4 .
kuqlbidad1 [ 2 ] ) + o2y45zbt2m4 . kncngnrvsh [ 0 ] * o2y45zbt2m4 .
kncngnrvsh [ 3 ] * hbv5azo3sw . Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw .
Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 . op4p3vooky [ 2 ] = hbv5azo3sw .
Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 . c1cfxe21zn [ 2 ] ; } if ( ssIsSampleHit
( rtS , 10 , 0 ) ) { cxn41j5ndz_idx_0 = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . op4p3vooky [ 0 ] * hbv5azo3sw .
PWM3_Period + o2y45zbt2m4 . op4p3vooky [ 0 ] * hbv5azo3sw . PWM3_Period ) /
0.1 ) ; if ( muDoubleScalarIsNaN ( cxn41j5ndz_idx_0 ) || muDoubleScalarIsInf
( cxn41j5ndz_idx_0 ) ) { cxn41j5ndz_idx_0 = 0.0 ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarRem ( cxn41j5ndz_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
cxn41j5ndz_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
cxn41j5ndz_idx_0 : ( uint32_T ) cxn41j5ndz_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
op4p3vooky [ 0 ] <= 0.0 ) ) && hrxu5rhe3af . opg1lhdczb ) { o2y45zbt2m4 .
px02m2ansm = 0.0 ; hrxu5rhe3af . e2pe11pwxn = false ; } else { o2y45zbt2m4 .
px02m2ansm = hrxu5rhe3af . e2pe11pwxn ; } } if ( ssIsSampleHit ( rtS , 11 , 0
) ) { cxn41j5ndz_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . op4p3vooky [ 1 ] * hbv5azo3sw . PWM4_Period + o2y45zbt2m4 .
op4p3vooky [ 1 ] * hbv5azo3sw . PWM4_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( cxn41j5ndz_idx_0 ) || muDoubleScalarIsInf (
cxn41j5ndz_idx_0 ) ) { cxn41j5ndz_idx_0 = 0.0 ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarRem ( cxn41j5ndz_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
cxn41j5ndz_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
cxn41j5ndz_idx_0 : ( uint32_T ) cxn41j5ndz_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
op4p3vooky [ 1 ] <= 0.0 ) ) && hrxu5rhe3af . jmjdutrgwi ) { o2y45zbt2m4 .
lzgno0c45u = 0.0 ; hrxu5rhe3af . jiqhomoo0v = false ; } else { o2y45zbt2m4 .
lzgno0c45u = hrxu5rhe3af . jiqhomoo0v ; } } if ( ssIsSampleHit ( rtS , 12 , 0
) ) { cxn41j5ndz_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . op4p3vooky [ 2 ] * hbv5azo3sw . PWM5_Period + o2y45zbt2m4 .
op4p3vooky [ 2 ] * hbv5azo3sw . PWM5_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( cxn41j5ndz_idx_0 ) || muDoubleScalarIsInf (
cxn41j5ndz_idx_0 ) ) { cxn41j5ndz_idx_0 = 0.0 ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarRem ( cxn41j5ndz_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
cxn41j5ndz_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
cxn41j5ndz_idx_0 : ( uint32_T ) cxn41j5ndz_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
op4p3vooky [ 2 ] <= 0.0 ) ) && hrxu5rhe3af . ayulg3mnvk ) { o2y45zbt2m4 .
frbnnz0j20 = 0.0 ; hrxu5rhe3af . gxxnmirgwt = false ; } else { o2y45zbt2m4 .
frbnnz0j20 = hrxu5rhe3af . gxxnmirgwt ; } } if ( ssIsSampleHit ( rtS , 4 , 0
) ) { jh4pm1ykge [ 0 ] = hbv5azo3sw . Gain1_Gain_i4m04mlldw * o2y45zbt2m4 .
px02m2ansm ; jh4pm1ykge [ 1 ] = hbv5azo3sw . Gain1_Gain_i4m04mlldw *
o2y45zbt2m4 . lzgno0c45u ; jh4pm1ykge [ 2 ] = hbv5azo3sw .
Gain1_Gain_i4m04mlldw * o2y45zbt2m4 . frbnnz0j20 ; } if ( ssIsSampleHit ( rtS
, 8 , 0 ) ) { cxn41j5ndz_idx_0 = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . c1cfxe21zn [ 0 ] * hbv5azo3sw .
PWM_Period + o2y45zbt2m4 . c1cfxe21zn [ 0 ] * hbv5azo3sw . PWM_Period ) / 0.1
) ; if ( muDoubleScalarIsNaN ( cxn41j5ndz_idx_0 ) || muDoubleScalarIsInf (
cxn41j5ndz_idx_0 ) ) { cxn41j5ndz_idx_0 = 0.0 ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarRem ( cxn41j5ndz_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
cxn41j5ndz_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
cxn41j5ndz_idx_0 : ( uint32_T ) cxn41j5ndz_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
c1cfxe21zn [ 0 ] <= 0.0 ) ) && hrxu5rhe3af . cnj1jumxqg ) { o2y45zbt2m4 .
ftjowoqghq = 0.0 ; hrxu5rhe3af . cozmdzu0w1 = false ; } else { o2y45zbt2m4 .
ftjowoqghq = hrxu5rhe3af . cozmdzu0w1 ; } } if ( ssIsSampleHit ( rtS , 9 , 0
) ) { cxn41j5ndz_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . c1cfxe21zn [ 1 ] * hbv5azo3sw . PWM1_Period + o2y45zbt2m4 .
c1cfxe21zn [ 1 ] * hbv5azo3sw . PWM1_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( cxn41j5ndz_idx_0 ) || muDoubleScalarIsInf (
cxn41j5ndz_idx_0 ) ) { cxn41j5ndz_idx_0 = 0.0 ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarRem ( cxn41j5ndz_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
cxn41j5ndz_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
cxn41j5ndz_idx_0 : ( uint32_T ) cxn41j5ndz_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
c1cfxe21zn [ 1 ] <= 0.0 ) ) && hrxu5rhe3af . ae5papqlus ) { o2y45zbt2m4 .
psapwntjo4 = 0.0 ; hrxu5rhe3af . i5keywnlob = false ; } else { o2y45zbt2m4 .
psapwntjo4 = hrxu5rhe3af . i5keywnlob ; } } if ( ssIsSampleHit ( rtS , 7 , 0
) ) { cxn41j5ndz_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . c1cfxe21zn [ 2 ] * hbv5azo3sw . PWM2_Period + o2y45zbt2m4 .
c1cfxe21zn [ 2 ] * hbv5azo3sw . PWM2_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( cxn41j5ndz_idx_0 ) || muDoubleScalarIsInf (
cxn41j5ndz_idx_0 ) ) { cxn41j5ndz_idx_0 = 0.0 ; } else { cxn41j5ndz_idx_0 =
muDoubleScalarRem ( cxn41j5ndz_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
cxn41j5ndz_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
cxn41j5ndz_idx_0 : ( uint32_T ) cxn41j5ndz_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
c1cfxe21zn [ 2 ] <= 0.0 ) ) && hrxu5rhe3af . brmqgwecvy ) { o2y45zbt2m4 .
pjlzlhabnw = 0.0 ; hrxu5rhe3af . mp3yltewxi = false ; } else { o2y45zbt2m4 .
pjlzlhabnw = hrxu5rhe3af . mp3yltewxi ; } } if ( ssIsSampleHit ( rtS , 4 , 0
) ) { cxn41j5ndz_idx_0 = jh4pm1ykge [ 0 ] ; pzi3xtzla3_idx_0 = jh4pm1ykge [ 1
] ; pzi3xtzla3_idx_1 = jh4pm1ykge [ 2 ] ; o2y45zbt2m4 . fkulvx00jr [ 0 ] = (
cxn41j5ndz_idx_0 + o2y45zbt2m4 . ftjowoqghq ) * hbv5azo3sw .
Gain3_Gain_b5qqmritsc ; o2y45zbt2m4 . fkulvx00jr [ 1 ] = ( pzi3xtzla3_idx_0 +
o2y45zbt2m4 . psapwntjo4 ) * hbv5azo3sw . Gain3_Gain_b5qqmritsc ; o2y45zbt2m4
. fkulvx00jr [ 2 ] = ( pzi3xtzla3_idx_1 + o2y45zbt2m4 . pjlzlhabnw ) *
hbv5azo3sw . Gain3_Gain_b5qqmritsc ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
o2y45zbt2m4 . g20nolxhoz [ 0 ] = o2y45zbt2m4 . fkulvx00jr [ 0 ] ; o2y45zbt2m4
. g20nolxhoz [ 1 ] = o2y45zbt2m4 . fkulvx00jr [ 1 ] ; o2y45zbt2m4 .
g20nolxhoz [ 2 ] = o2y45zbt2m4 . fkulvx00jr [ 2 ] ; ln02qvajo4 =
3.3121686421112381E-170 ; cxn41j5ndz_idx_0 = muDoubleScalarAbs ( o2y45zbt2m4
. kncngnrvsh [ 1 ] ) ; if ( cxn41j5ndz_idx_0 > 3.3121686421112381E-170 ) {
njulo3ucsg = 1.0 ; ln02qvajo4 = cxn41j5ndz_idx_0 ; } else { prv0bttwvn =
cxn41j5ndz_idx_0 / 3.3121686421112381E-170 ; njulo3ucsg = prv0bttwvn *
prv0bttwvn ; } cxn41j5ndz_idx_0 = muDoubleScalarAbs ( o2y45zbt2m4 .
kncngnrvsh [ 2 ] ) ; if ( cxn41j5ndz_idx_0 > ln02qvajo4 ) { prv0bttwvn =
ln02qvajo4 / cxn41j5ndz_idx_0 ; njulo3ucsg = njulo3ucsg * prv0bttwvn *
prv0bttwvn + 1.0 ; ln02qvajo4 = cxn41j5ndz_idx_0 ; } else { prv0bttwvn =
cxn41j5ndz_idx_0 / ln02qvajo4 ; njulo3ucsg += prv0bttwvn * prv0bttwvn ; }
cxn41j5ndz_idx_0 = muDoubleScalarAbs ( o2y45zbt2m4 . kncngnrvsh [ 3 ] ) ; if
( cxn41j5ndz_idx_0 > ln02qvajo4 ) { prv0bttwvn = ln02qvajo4 /
cxn41j5ndz_idx_0 ; njulo3ucsg = njulo3ucsg * prv0bttwvn * prv0bttwvn + 1.0 ;
ln02qvajo4 = cxn41j5ndz_idx_0 ; } else { prv0bttwvn = cxn41j5ndz_idx_0 /
ln02qvajo4 ; njulo3ucsg += prv0bttwvn * prv0bttwvn ; } njulo3ucsg =
ln02qvajo4 * muDoubleScalarSqrt ( njulo3ucsg ) ; o2y45zbt2m4 . nmbndl4hhg =
114.59155902616465 * njulo3ucsg ; } o2y45zbt2m4 . al2bqvraok [ 0 ] =
o2y45zbt2m4 . kncngnrvsh [ 4 ] - o2y45zbt2m4 . h20zeizqdi [ 0 ] ; o2y45zbt2m4
. al2bqvraok [ 1 ] = o2y45zbt2m4 . kncngnrvsh [ 5 ] - o2y45zbt2m4 .
h20zeizqdi [ 1 ] ; o2y45zbt2m4 . al2bqvraok [ 2 ] = o2y45zbt2m4 . kncngnrvsh
[ 6 ] - o2y45zbt2m4 . h20zeizqdi [ 2 ] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hlbbwfsq2e [ 0 ] =
muDoubleScalarTan ( o2y45zbt2m4 . cuglwsdmbh . nx1h2bs53u [ 0 ] ) ;
hlbbwfsq2e [ 1 ] = muDoubleScalarTan ( o2y45zbt2m4 . cuglwsdmbh . nx1h2bs53u
[ 1 ] ) ; hlbbwfsq2e [ 2 ] = 1.0 ; cxn41j5ndz_idx_0 = norm_fF2boBZW (
hlbbwfsq2e ) ; hlbbwfsq2e [ 0 ] /= cxn41j5ndz_idx_0 ; hlbbwfsq2e [ 1 ] /=
cxn41j5ndz_idx_0 ; cxn41j5ndz_idx_0 = 1.0 / cxn41j5ndz_idx_0 ; anon_yDH48dhx
( o2y45zbt2m4 . cuglwsdmbh . heq1xsib3m , kalbs1u0ur ) ; for ( i = 0 ; i < 3
; i ++ ) { myqx15ehea [ i ] = kalbs1u0ur [ i + 6 ] * cxn41j5ndz_idx_0 + (
kalbs1u0ur [ i + 3 ] * hlbbwfsq2e [ 1 ] + kalbs1u0ur [ i ] * hlbbwfsq2e [ 0 ]
) ; } jh4pm1ykge [ 0 ] = muDoubleScalarTan ( o2y45zbt2m4 . ik12ax5qrt .
nx1h2bs53u [ 0 ] ) ; jh4pm1ykge [ 1 ] = muDoubleScalarTan ( o2y45zbt2m4 .
ik12ax5qrt . nx1h2bs53u [ 1 ] ) ; jh4pm1ykge [ 2 ] = 1.0 ; cxn41j5ndz_idx_0 =
norm_fF2boBZW ( jh4pm1ykge ) ; jh4pm1ykge [ 0 ] /= cxn41j5ndz_idx_0 ;
jh4pm1ykge [ 1 ] /= cxn41j5ndz_idx_0 ; cxn41j5ndz_idx_0 = 1.0 /
cxn41j5ndz_idx_0 ; anon_yDH48dhx ( o2y45zbt2m4 . ik12ax5qrt . heq1xsib3m ,
kalbs1u0ur ) ; for ( i = 0 ; i < 3 ; i ++ ) { tmp_e [ i ] = kalbs1u0ur [ i +
6 ] * cxn41j5ndz_idx_0 + ( kalbs1u0ur [ i + 3 ] * jh4pm1ykge [ 1 ] +
kalbs1u0ur [ i ] * jh4pm1ykge [ 0 ] ) ; } memset ( & sBF [ 0 ] , 0 , 9U *
sizeof ( real_T ) ) ; sBF [ 0 ] = tmp_e [ 0 ] ; sBF [ 1 ] = tmp_e [ 1 ] ; sBF
[ 2 ] = tmp_e [ 2 ] ; cxn41j5ndz_idx_0 = norm_fF2boBZW ( & sBF [ 0 ] ) ; sBF
[ 0 ] = tmp_e [ 0 ] / cxn41j5ndz_idx_0 ; sBF [ 1 ] = tmp_e [ 1 ] /
cxn41j5ndz_idx_0 ; pzi3xtzla3_idx_0 = tmp_e [ 2 ] / cxn41j5ndz_idx_0 ; sBF [
2 ] = tmp_e [ 2 ] / cxn41j5ndz_idx_0 ; sBF [ 3 ] = tmp_e [ 1 ] * myqx15ehea [
2 ] - myqx15ehea [ 1 ] * tmp_e [ 2 ] ; sBF [ 4 ] = myqx15ehea [ 0 ] * tmp_e [
2 ] - tmp_e [ 0 ] * myqx15ehea [ 2 ] ; sBF [ 5 ] = tmp_e [ 0 ] * myqx15ehea [
1 ] - myqx15ehea [ 0 ] * tmp_e [ 1 ] ; cxn41j5ndz_idx_0 = norm_fF2boBZW ( &
sBF [ 3 ] ) ; sBF [ 3 ] /= cxn41j5ndz_idx_0 ; sBF [ 4 ] /= cxn41j5ndz_idx_0 ;
pzi3xtzla3_idx_1 = sBF [ 5 ] / cxn41j5ndz_idx_0 ; sBF [ 5 ] /=
cxn41j5ndz_idx_0 ; sBF [ 6 ] = sBF [ 1 ] * pzi3xtzla3_idx_1 - sBF [ 4 ] *
pzi3xtzla3_idx_0 ; sBF [ 7 ] = sBF [ 3 ] * pzi3xtzla3_idx_0 - sBF [ 0 ] *
pzi3xtzla3_idx_1 ; sBF [ 8 ] = sBF [ 0 ] * sBF [ 4 ] - sBF [ 1 ] * sBF [ 3 ]
; memset ( & sECI [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; sECI [ 0 ] =
o2y45zbt2m4 . mdvmrfnqkz [ 0 ] ; sECI [ 1 ] = o2y45zbt2m4 . mdvmrfnqkz [ 1 ]
; sECI [ 2 ] = o2y45zbt2m4 . mdvmrfnqkz [ 2 ] ; cxn41j5ndz_idx_0 =
norm_fF2boBZW ( & sECI [ 0 ] ) ; sECI [ 0 ] = o2y45zbt2m4 . mdvmrfnqkz [ 0 ]
/ cxn41j5ndz_idx_0 ; sECI [ 1 ] = o2y45zbt2m4 . mdvmrfnqkz [ 1 ] /
cxn41j5ndz_idx_0 ; pzi3xtzla3_idx_0 = o2y45zbt2m4 . mdvmrfnqkz [ 2 ] /
cxn41j5ndz_idx_0 ; sECI [ 2 ] = o2y45zbt2m4 . mdvmrfnqkz [ 2 ] /
cxn41j5ndz_idx_0 ; sECI [ 3 ] = o2y45zbt2m4 . mdvmrfnqkz [ 1 ] * o2y45zbt2m4
. g4hdycezvh [ 2 ] - o2y45zbt2m4 . g4hdycezvh [ 1 ] * o2y45zbt2m4 .
mdvmrfnqkz [ 2 ] ; sECI [ 4 ] = o2y45zbt2m4 . g4hdycezvh [ 0 ] * o2y45zbt2m4
. mdvmrfnqkz [ 2 ] - o2y45zbt2m4 . mdvmrfnqkz [ 0 ] * o2y45zbt2m4 .
g4hdycezvh [ 2 ] ; sECI [ 5 ] = o2y45zbt2m4 . mdvmrfnqkz [ 0 ] * o2y45zbt2m4
. g4hdycezvh [ 1 ] - o2y45zbt2m4 . g4hdycezvh [ 0 ] * o2y45zbt2m4 .
mdvmrfnqkz [ 1 ] ; cxn41j5ndz_idx_0 = norm_fF2boBZW ( & sECI [ 3 ] ) ; sECI [
3 ] /= cxn41j5ndz_idx_0 ; sECI [ 4 ] /= cxn41j5ndz_idx_0 ; pzi3xtzla3_idx_1 =
sECI [ 5 ] / cxn41j5ndz_idx_0 ; sECI [ 5 ] /= cxn41j5ndz_idx_0 ; sECI [ 6 ] =
sECI [ 1 ] * pzi3xtzla3_idx_1 - sECI [ 4 ] * pzi3xtzla3_idx_0 ; sECI [ 7 ] =
sECI [ 3 ] * pzi3xtzla3_idx_0 - sECI [ 0 ] * pzi3xtzla3_idx_1 ; sECI [ 8 ] =
sECI [ 0 ] * sECI [ 4 ] - sECI [ 1 ] * sECI [ 3 ] ; for ( i = 0 ; i < 3 ; i
++ ) { for ( k = 0 ; k < 3 ; k ++ ) { kalbs1u0ur [ i + 3 * k ] = 0.0 ;
kalbs1u0ur [ i + 3 * k ] += sBF [ i ] * sECI [ k ] ; kalbs1u0ur [ i + 3 * k ]
+= sBF [ i + 3 ] * sECI [ k + 3 ] ; kalbs1u0ur [ i + 3 * k ] += sBF [ i + 6 ]
* sECI [ k + 6 ] ; } } cxn41j5ndz_idx_0 = ( kalbs1u0ur [ 0 ] + kalbs1u0ur [ 4
] ) + kalbs1u0ur [ 8 ] ; rtPrevAction = hrxu5rhe3af . goaeac5x5p ; if (
ssIsMajorTimeStep ( rtS ) ) { rtAction = ( int8_T ) ! ( cxn41j5ndz_idx_0 >
0.0 ) ; hrxu5rhe3af . goaeac5x5p = rtAction ; } else { rtAction = hrxu5rhe3af
. goaeac5x5p ; } if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) {
case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1
: ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
lfywehbssn ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
hrxu5rhe3af . lfywehbssn = - 1 ; break ; } } switch ( rtAction ) { case 0 :
if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 5 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 += hbv5azo3sw .
Constant_Value ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af .
px2vytyfy2 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . px2vytyfy2 = 0 ; } njulo3ucsg = muDoubleScalarSqrt (
cxn41j5ndz_idx_0 ) ; } else if ( cxn41j5ndz_idx_0 < 0.0 ) { njulo3ucsg = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( cxn41j5ndz_idx_0 ) ) ; hrxu5rhe3af .
px2vytyfy2 = 1 ; } else { njulo3ucsg = muDoubleScalarSqrt ( cxn41j5ndz_idx_0
) ; } o2y45zbt2m4 . ktdjes0xaw [ 0 ] = hbv5azo3sw . Gain_Gain * njulo3ucsg ;
cxn41j5ndz_idx_0 = hbv5azo3sw . Gain1_Gain * njulo3ucsg ; o2y45zbt2m4 .
ktdjes0xaw [ 1 ] = ( kalbs1u0ur [ 7 ] - kalbs1u0ur [ 5 ] ) / cxn41j5ndz_idx_0
; o2y45zbt2m4 . ktdjes0xaw [ 2 ] = ( kalbs1u0ur [ 2 ] - kalbs1u0ur [ 6 ] ) /
cxn41j5ndz_idx_0 ; o2y45zbt2m4 . ktdjes0xaw [ 3 ] = ( kalbs1u0ur [ 3 ] -
kalbs1u0ur [ 1 ] ) / cxn41j5ndz_idx_0 ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( hrxu5rhe3af . olmlfoy1xv ) ; } break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { rtPrevAction = hrxu5rhe3af . lfywehbssn ; if ( ( kalbs1u0ur
[ 4 ] > kalbs1u0ur [ 0 ] ) && ( kalbs1u0ur [ 4 ] > kalbs1u0ur [ 8 ] ) ) {
rtAction = 0 ; } else if ( kalbs1u0ur [ 8 ] > kalbs1u0ur [ 0 ] ) { rtAction =
1 ; } else { rtAction = 2 ; } hrxu5rhe3af . lfywehbssn = rtAction ; if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 = ( ( kalbs1u0ur [ 4 ] - kalbs1u0ur [ 0 ]
) - kalbs1u0ur [ 8 ] ) + hbv5azo3sw . Constant_Value_fz025lyiwx ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . nmzrmeybue != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . nmzrmeybue
= 0 ; } njulo3ucsg = muDoubleScalarSqrt ( cxn41j5ndz_idx_0 ) ; } else if (
cxn41j5ndz_idx_0 < 0.0 ) { njulo3ucsg = - muDoubleScalarSqrt (
muDoubleScalarAbs ( cxn41j5ndz_idx_0 ) ) ; hrxu5rhe3af . nmzrmeybue = 1 ; }
else { njulo3ucsg = muDoubleScalarSqrt ( cxn41j5ndz_idx_0 ) ; } o2y45zbt2m4 .
ktdjes0xaw [ 2 ] = hbv5azo3sw . Gain_Gain_iwt0st0rzi * njulo3ucsg ; if (
njulo3ucsg != 0.0 ) { cxn41j5ndz_idx_0 = hbv5azo3sw . Constant1_Value ; }
else { cxn41j5ndz_idx_0 = hbv5azo3sw . Constant2_Value [ 0 ] ; njulo3ucsg =
hbv5azo3sw . Constant2_Value [ 1 ] ; } cxn41j5ndz_idx_0 /= njulo3ucsg ;
o2y45zbt2m4 . ktdjes0xaw [ 1 ] = ( kalbs1u0ur [ 1 ] + kalbs1u0ur [ 3 ] ) *
cxn41j5ndz_idx_0 * hbv5azo3sw . Gain1_Gain_nfpwthwaye ; o2y45zbt2m4 .
ktdjes0xaw [ 3 ] = ( kalbs1u0ur [ 5 ] + kalbs1u0ur [ 7 ] ) * cxn41j5ndz_idx_0
* hbv5azo3sw . Gain3_Gain ; o2y45zbt2m4 . ktdjes0xaw [ 0 ] = ( kalbs1u0ur [ 2
] - kalbs1u0ur [ 6 ] ) * cxn41j5ndz_idx_0 * hbv5azo3sw . Gain4_Gain ; }
srUpdateBC ( hrxu5rhe3af . jaivnsj01n ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 = ( ( kalbs1u0ur [ 8 ] - kalbs1u0ur [ 0 ]
) - kalbs1u0ur [ 4 ] ) + hbv5azo3sw . Constant_Value_g1hmmrw0mg ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . obn5brrvbj != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . obn5brrvbj
= 0 ; } njulo3ucsg = muDoubleScalarSqrt ( cxn41j5ndz_idx_0 ) ; } else if (
cxn41j5ndz_idx_0 < 0.0 ) { njulo3ucsg = - muDoubleScalarSqrt (
muDoubleScalarAbs ( cxn41j5ndz_idx_0 ) ) ; hrxu5rhe3af . obn5brrvbj = 1 ; }
else { njulo3ucsg = muDoubleScalarSqrt ( cxn41j5ndz_idx_0 ) ; } o2y45zbt2m4 .
ktdjes0xaw [ 3 ] = hbv5azo3sw . Gain_Gain_btqrwsiywm * njulo3ucsg ; if (
njulo3ucsg != 0.0 ) { cxn41j5ndz_idx_0 = hbv5azo3sw .
Constant1_Value_juzf4g22fl ; } else { cxn41j5ndz_idx_0 = hbv5azo3sw .
Constant2_Value_j1w3p3nqwm [ 0 ] ; njulo3ucsg = hbv5azo3sw .
Constant2_Value_j1w3p3nqwm [ 1 ] ; } cxn41j5ndz_idx_0 /= njulo3ucsg ;
o2y45zbt2m4 . ktdjes0xaw [ 1 ] = ( kalbs1u0ur [ 2 ] + kalbs1u0ur [ 6 ] ) *
cxn41j5ndz_idx_0 * hbv5azo3sw . Gain1_Gain_hckkrvkfud ; o2y45zbt2m4 .
ktdjes0xaw [ 2 ] = ( kalbs1u0ur [ 5 ] + kalbs1u0ur [ 7 ] ) * cxn41j5ndz_idx_0
* hbv5azo3sw . Gain2_Gain ; o2y45zbt2m4 . ktdjes0xaw [ 0 ] = ( kalbs1u0ur [ 3
] - kalbs1u0ur [ 1 ] ) * cxn41j5ndz_idx_0 * hbv5azo3sw .
Gain3_Gain_js3cz41u3x ; } srUpdateBC ( hrxu5rhe3af . hp3mldh5cv ) ; break ;
default : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 5 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { cxn41j5ndz_idx_0 = ( ( kalbs1u0ur
[ 0 ] - kalbs1u0ur [ 4 ] ) - kalbs1u0ur [ 8 ] ) + hbv5azo3sw .
Constant_Value_aj0beqlhap ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . km2naim34i != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . km2naim34i = 0 ; } njulo3ucsg = muDoubleScalarSqrt (
cxn41j5ndz_idx_0 ) ; } else if ( cxn41j5ndz_idx_0 < 0.0 ) { njulo3ucsg = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( cxn41j5ndz_idx_0 ) ) ; hrxu5rhe3af .
km2naim34i = 1 ; } else { njulo3ucsg = muDoubleScalarSqrt ( cxn41j5ndz_idx_0
) ; } o2y45zbt2m4 . ktdjes0xaw [ 1 ] = hbv5azo3sw . Gain_Gain_o0vagw33z0 *
njulo3ucsg ; if ( njulo3ucsg != 0.0 ) { cxn41j5ndz_idx_0 = hbv5azo3sw .
Constant1_Value_ijkyohanlb ; } else { cxn41j5ndz_idx_0 = hbv5azo3sw .
Constant2_Value_l5clkhiwr2 [ 0 ] ; njulo3ucsg = hbv5azo3sw .
Constant2_Value_l5clkhiwr2 [ 1 ] ; } cxn41j5ndz_idx_0 /= njulo3ucsg ;
o2y45zbt2m4 . ktdjes0xaw [ 2 ] = ( kalbs1u0ur [ 1 ] + kalbs1u0ur [ 3 ] ) *
cxn41j5ndz_idx_0 * hbv5azo3sw . Gain1_Gain_juwv0ndgmj ; o2y45zbt2m4 .
ktdjes0xaw [ 3 ] = ( kalbs1u0ur [ 2 ] + kalbs1u0ur [ 6 ] ) * cxn41j5ndz_idx_0
* hbv5azo3sw . Gain2_Gain_eyjvfdefnl ; o2y45zbt2m4 . ktdjes0xaw [ 0 ] = (
kalbs1u0ur [ 7 ] - kalbs1u0ur [ 5 ] ) * cxn41j5ndz_idx_0 * hbv5azo3sw .
Gain3_Gain_neo4wlccgm ; } srUpdateBC ( hrxu5rhe3af . hka1eluehh ) ; break ; }
} if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . lx00lot5dg )
; } break ; } } cxn41j5ndz_idx_0 = ( ( l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo *
dxjf4qcaeo ) + k1qmoe0iaw * k1qmoe0iaw ) + nm4t0wvumv * nm4t0wvumv ;
o2y45zbt2m4 . jv2vmwnuhi = ( ( ( o2y45zbt2m4 . kncngnrvsh [ 0 ] * l1pix2zzzf
+ o2y45zbt2m4 . kncngnrvsh [ 1 ] * dxjf4qcaeo ) + o2y45zbt2m4 . kncngnrvsh [
2 ] * k1qmoe0iaw ) + o2y45zbt2m4 . kncngnrvsh [ 3 ] * nm4t0wvumv ) /
cxn41j5ndz_idx_0 ; o2y45zbt2m4 . etlydwc4vq = ( ( ( o2y45zbt2m4 . kncngnrvsh
[ 1 ] * l1pix2zzzf - o2y45zbt2m4 . kncngnrvsh [ 0 ] * dxjf4qcaeo ) +
o2y45zbt2m4 . kncngnrvsh [ 2 ] * nm4t0wvumv ) - o2y45zbt2m4 . kncngnrvsh [ 3
] * k1qmoe0iaw ) / cxn41j5ndz_idx_0 ; o2y45zbt2m4 . hvroq353ld = ( ( (
o2y45zbt2m4 . kncngnrvsh [ 2 ] * l1pix2zzzf - o2y45zbt2m4 . kncngnrvsh [ 0 ]
* k1qmoe0iaw ) - o2y45zbt2m4 . kncngnrvsh [ 1 ] * nm4t0wvumv ) + o2y45zbt2m4
. kncngnrvsh [ 3 ] * dxjf4qcaeo ) / cxn41j5ndz_idx_0 ; o2y45zbt2m4 .
cgit3icmpi = ( ( ( o2y45zbt2m4 . kncngnrvsh [ 1 ] * k1qmoe0iaw - o2y45zbt2m4
. kncngnrvsh [ 0 ] * nm4t0wvumv ) - o2y45zbt2m4 . kncngnrvsh [ 2 ] *
dxjf4qcaeo ) + o2y45zbt2m4 . kncngnrvsh [ 3 ] * l1pix2zzzf ) /
cxn41j5ndz_idx_0 ; if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { rtPrevAction =
hrxu5rhe3af . ltjhqpbfjo ; rtAction = - 1 ; if ( ssIsMajorTimeStep ( rtS ) )
{ if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action != 1.0 ) {
rtAction = 0 ; } hrxu5rhe3af . ltjhqpbfjo = rtAction ; } else { rtAction =
hrxu5rhe3af . ltjhqpbfjo ; } if ( ( rtPrevAction != rtAction ) && (
rtPrevAction == 0 ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . nblxudhi3p ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
mhqfolepov ) { case 0 : k3uunhzc5w ( rtS ) ; break ; case 1 : pkoiaofkhx (
rtS ) ; break ; } hrxu5rhe3af . mhqfolepov = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
em2alijyyt ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 : dd41awjj4d (
rtS ) ; break ; } hrxu5rhe3af . em2alijyyt = - 1 ; break ; } hrxu5rhe3af .
nblxudhi3p = - 1 ; } if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { if (
ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { for ( i = 0 ; i < 3 ; i ++ ) { for ( k = 0 ; k < 3 ; k ++ )
{ sBF [ i + 3 * k ] = ( ( kalbs1u0ur [ 3 * i + 1 ] * kalbs1u0ur [ 3 * k + 1 ]
+ kalbs1u0ur [ 3 * i ] * kalbs1u0ur [ 3 * k ] ) + kalbs1u0ur [ 3 * i + 2 ] *
kalbs1u0ur [ 3 * k + 2 ] ) + hbv5azo3sw . Bias1_Bias [ 3 * k + i ] ; } } for
( i = 0 ; i < 9 ; i ++ ) { aghig0gren [ i ] = ( muDoubleScalarAbs ( sBF [ i ]
) > hbv5azo3sw . DirectionCosineMatrixtoQuaternions_tolerance ) ; } tmp =
aghig0gren [ 0 ] ; for ( k = 0 ; k < 8 ; k ++ ) { tmp = ( tmp || aghig0gren [
k + 1 ] ) ; } rtPrevAction = hrxu5rhe3af . nblxudhi3p ; rtAction = - 1 ; if (
muDoubleScalarAbs ( ( ( ( ( ( kalbs1u0ur [ 0 ] * kalbs1u0ur [ 4 ] *
kalbs1u0ur [ 8 ] - kalbs1u0ur [ 0 ] * kalbs1u0ur [ 5 ] * kalbs1u0ur [ 7 ] ) -
kalbs1u0ur [ 1 ] * kalbs1u0ur [ 3 ] * kalbs1u0ur [ 8 ] ) + kalbs1u0ur [ 2 ] *
kalbs1u0ur [ 3 ] * kalbs1u0ur [ 7 ] ) + kalbs1u0ur [ 1 ] * kalbs1u0ur [ 5 ] *
kalbs1u0ur [ 6 ] ) - kalbs1u0ur [ 2 ] * kalbs1u0ur [ 4 ] * kalbs1u0ur [ 6 ] )
+ hbv5azo3sw . Bias_Bias ) > hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance ) { rtAction = 0 ; } else if (
tmp ) { rtAction = 1 ; } hrxu5rhe3af . nblxudhi3p = rtAction ; if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
mhqfolepov ) { case 0 : k3uunhzc5w ( rtS ) ; break ; case 1 : pkoiaofkhx (
rtS ) ; break ; } hrxu5rhe3af . mhqfolepov = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
em2alijyyt ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 : dd41awjj4d (
rtS ) ; break ; } hrxu5rhe3af . em2alijyyt = - 1 ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { rtPrevAction = hrxu5rhe3af . mhqfolepov ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action == 2.0 ) {
rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction = 1 ; }
hrxu5rhe3af . mhqfolepov = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : k3uunhzc5w ( rtS ) ; break ; case 1 :
pkoiaofkhx ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { elhxh1fuui ( rtS ) ; } bbjtuydtdk ( rtS , hbv5azo3sw .
Constant1_Value_pmm0hyhaw2 , & hrxu5rhe3af . bbjtuydtdkk ) ; srUpdateBC (
hrxu5rhe3af . bbjtuydtdkk . cfhkcft2t2 ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { lo0d5ti0wo ( rtS ) ; } bqx0vc3mud ( rtS , hbv5azo3sw .
Constant1_Value_pmm0hyhaw2 , & hrxu5rhe3af . bqx0vc3mudn ) ; srUpdateBC (
hrxu5rhe3af . bqx0vc3mudn . dmwbxxl3xx ) ; break ; } } srUpdateBC (
hrxu5rhe3af . mvvvr4qg3a ) ; break ; case 1 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( rtS , 5 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { rtPrevAction = hrxu5rhe3af . em2alijyyt ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action == 2.0 ) {
rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction = 1 ; }
hrxu5rhe3af . em2alijyyt = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 :
dd41awjj4d ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { ciw1a3ycef ( rtS ) ; } n53cqmpclo ( rtS , hbv5azo3sw .
Constant1_Value_ct0h0v3l03 , & hrxu5rhe3af . n53cqmpcloj ) ; srUpdateBC (
hrxu5rhe3af . n53cqmpcloj . ogcbvjea2u ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { pzicdihqt4 ( rtS ) ; } prxbfmvl1e ( rtS , hbv5azo3sw .
Constant1_Value_ct0h0v3l03 , & hrxu5rhe3af . prxbfmvl1en ) ; srUpdateBC (
hrxu5rhe3af . prxbfmvl1en . k5qbhboafq ) ; break ; } } srUpdateBC (
hrxu5rhe3af . kunox0dfsg ) ; break ; } } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( hrxu5rhe3af . duwlcgfzra ) ; } } } if ( ssIsSampleHit ( rtS , 3
, 0 ) ) { } pzi3xtzla3_idx_1 = ( pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] +
pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . dnqubg5s4k != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . dnqubg5s4k
= 0 ; } b2dseb5akc_idx_1 = muDoubleScalarSqrt ( pzi3xtzla3_idx_1 ) ; } else
if ( pzi3xtzla3_idx_1 < 0.0 ) { b2dseb5akc_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( pzi3xtzla3_idx_1 ) ) ; hrxu5rhe3af . dnqubg5s4k = 1 ; }
else { b2dseb5akc_idx_1 = muDoubleScalarSqrt ( pzi3xtzla3_idx_1 ) ; }
pzi3xtzla3_idx_1 = 1.0 / ( b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) /
b2dseb5akc_idx_1 * o2y45zbt2m4 . culrexdnyf ; hlbbwfsq2e [ 0 ] = pygfqx1xx2 [
0 ] / b2dseb5akc_idx_1 ; hlbbwfsq2e [ 1 ] = pygfqx1xx2 [ 1 ] /
b2dseb5akc_idx_1 ; hlbbwfsq2e [ 2 ] = pygfqx1xx2 [ 2 ] / b2dseb5akc_idx_1 ;
b2dseb5akc_idx_1 = ( ( l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo * dxjf4qcaeo ) +
k1qmoe0iaw * k1qmoe0iaw ) + nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( hrxu5rhe3af . bze1flsb15 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . bze1flsb15
= 0 ; } pzi3xtzla3_idx_0 = muDoubleScalarSqrt ( b2dseb5akc_idx_1 ) ; } else
if ( b2dseb5akc_idx_1 < 0.0 ) { pzi3xtzla3_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( b2dseb5akc_idx_1 ) ) ; hrxu5rhe3af . bze1flsb15 = 1 ; }
else { pzi3xtzla3_idx_0 = muDoubleScalarSqrt ( b2dseb5akc_idx_1 ) ; }
b2dseb5akc_idx_1 = dxjf4qcaeo / pzi3xtzla3_idx_0 ; prv0bttwvn = k1qmoe0iaw /
pzi3xtzla3_idx_0 ; oouy1fopfw_idx_0 = l1pix2zzzf / pzi3xtzla3_idx_0 ;
cxn41j5ndz_idx_0 = nm4t0wvumv / pzi3xtzla3_idx_0 ; pzi3xtzla3_idx_0 = ( ( (
hbv5azo3sw . Constant_Value_lxx0buxvfk - b2dseb5akc_idx_1 * b2dseb5akc_idx_1
) - cxn41j5ndz_idx_0 * cxn41j5ndz_idx_0 ) * hbv5azo3sw .
Gain2_Gain_n32pjfxnui * hlbbwfsq2e [ 1 ] + ( b2dseb5akc_idx_1 * prv0bttwvn -
oouy1fopfw_idx_0 * cxn41j5ndz_idx_0 ) * hbv5azo3sw . Gain_Gain_cf5hb10y5x *
hlbbwfsq2e [ 0 ] ) + ( oouy1fopfw_idx_0 * b2dseb5akc_idx_1 + prv0bttwvn *
cxn41j5ndz_idx_0 ) * hbv5azo3sw . Gain1_Gain_gwlrw1w2b3 * hlbbwfsq2e [ 2 ] ;
ln02qvajo4 = ( ( b2dseb5akc_idx_1 * cxn41j5ndz_idx_0 + oouy1fopfw_idx_0 *
prv0bttwvn ) * hbv5azo3sw . Gain_Gain_efnax0y1dx * hlbbwfsq2e [ 0 ] + (
prv0bttwvn * cxn41j5ndz_idx_0 - oouy1fopfw_idx_0 * b2dseb5akc_idx_1 ) *
hbv5azo3sw . Gain1_Gain_ddeccjfmea * hlbbwfsq2e [ 1 ] ) + ( ( hbv5azo3sw .
Constant_Value_a2jieicat5 - b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) -
prv0bttwvn * prv0bttwvn ) * hbv5azo3sw . Gain2_Gain_g2ebct4dqc * hlbbwfsq2e [
2 ] ; b2dseb5akc_idx_1 = ( ( ( hbv5azo3sw . Constant_Value_bpdqgjnrbi -
prv0bttwvn * prv0bttwvn ) - cxn41j5ndz_idx_0 * cxn41j5ndz_idx_0 ) *
hbv5azo3sw . Gain2_Gain_cko11epp5n * hlbbwfsq2e [ 0 ] + ( b2dseb5akc_idx_1 *
prv0bttwvn + oouy1fopfw_idx_0 * cxn41j5ndz_idx_0 ) * hbv5azo3sw .
Gain_Gain_cjicctxqb2 * hlbbwfsq2e [ 1 ] ) + ( b2dseb5akc_idx_1 *
cxn41j5ndz_idx_0 - oouy1fopfw_idx_0 * prv0bttwvn ) * hbv5azo3sw .
Gain1_Gain_nieh11pzcd * hlbbwfsq2e [ 2 ] ; hlbbwfsq2e [ 0 ] = o2y45zbt2m4 .
ambhfazf2y [ 0 ] * pzi3xtzla3_idx_0 * ln02qvajo4 * pzi3xtzla3_idx_1 ;
hlbbwfsq2e [ 1 ] = o2y45zbt2m4 . ambhfazf2y [ 1 ] * ln02qvajo4 *
b2dseb5akc_idx_1 * pzi3xtzla3_idx_1 ; hlbbwfsq2e [ 2 ] = o2y45zbt2m4 .
ambhfazf2y [ 2 ] * b2dseb5akc_idx_1 * pzi3xtzla3_idx_0 * pzi3xtzla3_idx_1 ;
pzi3xtzla3_idx_1 = ( pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] *
pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . pidbwsidci != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . pidbwsidci
= 0 ; } o2y45zbt2m4 . ggrj4lwkdq = muDoubleScalarSqrt ( pzi3xtzla3_idx_1 ) ;
} else if ( pzi3xtzla3_idx_1 < 0.0 ) { o2y45zbt2m4 . ggrj4lwkdq = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( pzi3xtzla3_idx_1 ) ) ; hrxu5rhe3af .
pidbwsidci = 1 ; } else { o2y45zbt2m4 . ggrj4lwkdq = muDoubleScalarSqrt (
pzi3xtzla3_idx_1 ) ; } eb1fnz3txo [ 0 ] = pygfqx1xx2 [ 0 ] / o2y45zbt2m4 .
ggrj4lwkdq ; eb1fnz3txo [ 1 ] = pygfqx1xx2 [ 1 ] / o2y45zbt2m4 . ggrj4lwkdq ;
eb1fnz3txo [ 2 ] = pygfqx1xx2 [ 2 ] / o2y45zbt2m4 . ggrj4lwkdq ;
pzi3xtzla3_idx_1 = eb1fnz3txo [ 0 ] * eb1fnz3txo [ 0 ] + eb1fnz3txo [ 1 ] *
eb1fnz3txo [ 1 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af .
ji1vknz2dr != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . ji1vknz2dr = 0 ; } b2dseb5akc_idx_1 = muDoubleScalarSqrt (
pzi3xtzla3_idx_1 ) ; } else if ( pzi3xtzla3_idx_1 < 0.0 ) { b2dseb5akc_idx_1
= - muDoubleScalarSqrt ( muDoubleScalarAbs ( pzi3xtzla3_idx_1 ) ) ;
hrxu5rhe3af . ji1vknz2dr = 1 ; } else { b2dseb5akc_idx_1 = muDoubleScalarSqrt
( pzi3xtzla3_idx_1 ) ; } o2y45zbt2m4 . jjuwpyarp5 = muDoubleScalarAtan2 (
b2dseb5akc_idx_1 , eb1fnz3txo [ 2 ] ) ; prv0bttwvn = muDoubleScalarAtan2 (
eb1fnz3txo [ 1 ] , eb1fnz3txo [ 0 ] ) ; o2y45zbt2m4 . nyoyhdwzhr = prv0bttwvn
- 6.2831853071795862 / rtP_Earth . siderealDay * ssGetT ( rtS ) ;
MagneticFieldInPolarCoords ( & o2y45zbt2m4 . ggrj4lwkdq , & o2y45zbt2m4 .
jjuwpyarp5 , & o2y45zbt2m4 . nyoyhdwzhr , & rtP_Earth . equatorialRadius , &
o2y45zbt2m4 . mfc3g102pw [ 0 ] ) ; b2dseb5akc_idx_1 = hbv5azo3sw .
Gain_Gain_m4jtdwqsx1 * o2y45zbt2m4 . jjuwpyarp5 ; pzi3xtzla3_idx_1 =
muDoubleScalarCos ( b2dseb5akc_idx_1 ) ; oouy1fopfw_idx_0 = hbv5azo3sw .
Gain_Gain_cnryscy0x5 * prv0bttwvn ; prv0bttwvn = muDoubleScalarSin (
oouy1fopfw_idx_0 ) ; oouy1fopfw_idx_0 = muDoubleScalarCos ( oouy1fopfw_idx_0
) ; b2dseb5akc_idx_1 = muDoubleScalarSin ( b2dseb5akc_idx_1 ) ;
pzi3xtzla3_idx_0 = ( pzi3xtzla3_idx_1 * hbv5azo3sw .
Constant_Value_hrofb0v0v5 + oouy1fopfw_idx_0 * hbv5azo3sw .
Constant_Value_ekkpqgqspn ) + ( b2dseb5akc_idx_1 * prv0bttwvn - hbv5azo3sw .
Constant_Value_ekkpqgqspn * hbv5azo3sw . Constant_Value_hrofb0v0v5 ) ;
jh4pm1ykge [ 0 ] = pzi3xtzla3_idx_0 ; oouy1fopfw_idx_1 = ( ( pzi3xtzla3_idx_1
* hbv5azo3sw . Constant_Value_hrofb0v0v5 + oouy1fopfw_idx_0 *
b2dseb5akc_idx_1 ) + ( hbv5azo3sw . Constant_Value_ekkpqgqspn * hbv5azo3sw .
Constant_Value_hrofb0v0v5 - hbv5azo3sw . Constant_Value_ekkpqgqspn *
prv0bttwvn ) ) * hbv5azo3sw . Gain_Gain_flpxquj1at ; jh4pm1ykge [ 1 ] =
oouy1fopfw_idx_1 ; cxn41j5ndz_idx_0 = oouy1fopfw_idx_1 ; oouy1fopfw_idx_1 = (
( pzi3xtzla3_idx_1 * prv0bttwvn + oouy1fopfw_idx_0 * hbv5azo3sw .
Constant_Value_ekkpqgqspn ) + ( hbv5azo3sw . Constant_Value_ekkpqgqspn *
hbv5azo3sw . Constant_Value_hrofb0v0v5 - b2dseb5akc_idx_1 * hbv5azo3sw .
Constant_Value_hrofb0v0v5 ) ) * hbv5azo3sw . Gain_Gain_flpxquj1at ;
pzi3xtzla3_idx_1 = pzi3xtzla3_idx_1 * oouy1fopfw_idx_0 - ( ( hbv5azo3sw .
Constant_Value_ekkpqgqspn * hbv5azo3sw . Constant_Value_hrofb0v0v5 +
b2dseb5akc_idx_1 * hbv5azo3sw . Constant_Value_hrofb0v0v5 ) + hbv5azo3sw .
Constant_Value_ekkpqgqspn * prv0bttwvn ) ; mjhceqjgf1_idx_1 = nm4t0wvumv *
pzi3xtzla3_idx_0 ; oouy1fopfw_idx_0 = k1qmoe0iaw * pzi3xtzla3_idx_0 ;
pzi3xtzla3_idx_0 = ( l1pix2zzzf * pzi3xtzla3_idx_0 + pzi3xtzla3_idx_1 *
dxjf4qcaeo ) + ( k1qmoe0iaw * oouy1fopfw_idx_1 - nm4t0wvumv *
cxn41j5ndz_idx_0 ) ; ln02qvajo4 = ( l1pix2zzzf * jh4pm1ykge [ 1 ] +
pzi3xtzla3_idx_1 * k1qmoe0iaw ) + ( mjhceqjgf1_idx_1 - dxjf4qcaeo *
oouy1fopfw_idx_1 ) ; b2dseb5akc_idx_1 = ( l1pix2zzzf * oouy1fopfw_idx_1 +
pzi3xtzla3_idx_1 * nm4t0wvumv ) + ( dxjf4qcaeo * cxn41j5ndz_idx_0 -
oouy1fopfw_idx_0 ) ; prv0bttwvn = l1pix2zzzf * pzi3xtzla3_idx_1 - ( (
dxjf4qcaeo * jh4pm1ykge [ 0 ] + k1qmoe0iaw * jh4pm1ykge [ 1 ] ) + nm4t0wvumv
* oouy1fopfw_idx_1 ) ; pzi3xtzla3_idx_1 = ( ( prv0bttwvn * prv0bttwvn +
pzi3xtzla3_idx_0 * pzi3xtzla3_idx_0 ) + ln02qvajo4 * ln02qvajo4 ) +
b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . gltmjlakux != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . gltmjlakux = 0 ; } oouy1fopfw_idx_0 =
muDoubleScalarSqrt ( pzi3xtzla3_idx_1 ) ; } else if ( pzi3xtzla3_idx_1 < 0.0
) { oouy1fopfw_idx_0 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
pzi3xtzla3_idx_1 ) ) ; hrxu5rhe3af . gltmjlakux = 1 ; } else {
oouy1fopfw_idx_0 = muDoubleScalarSqrt ( pzi3xtzla3_idx_1 ) ; }
pzi3xtzla3_idx_1 = pzi3xtzla3_idx_0 / oouy1fopfw_idx_0 ; b2dseb5akc_idx_1 /=
oouy1fopfw_idx_0 ; prv0bttwvn /= oouy1fopfw_idx_0 ; ln02qvajo4 /=
oouy1fopfw_idx_0 ; oouy1fopfw_idx_0 = ( ( pzi3xtzla3_idx_1 * b2dseb5akc_idx_1
+ prv0bttwvn * ln02qvajo4 ) * hbv5azo3sw . Gain_Gain_fsocaetgdj * o2y45zbt2m4
. mfc3g102pw [ 0 ] + ( ln02qvajo4 * b2dseb5akc_idx_1 - prv0bttwvn *
pzi3xtzla3_idx_1 ) * hbv5azo3sw . Gain1_Gain_igcxviai5g * o2y45zbt2m4 .
mfc3g102pw [ 1 ] ) + ( ( hbv5azo3sw . Constant_Value_nfqnghygav -
pzi3xtzla3_idx_1 * pzi3xtzla3_idx_1 ) - ln02qvajo4 * ln02qvajo4 ) *
hbv5azo3sw . Gain2_Gain_mcrod3aisq * o2y45zbt2m4 . mfc3g102pw [ 2 ] ;
pzi3xtzla3_idx_0 = ( ( ( hbv5azo3sw . Constant_Value_ollq4x5vyn - ln02qvajo4
* ln02qvajo4 ) - b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) * hbv5azo3sw .
Gain2_Gain_d0aeb3inpf * o2y45zbt2m4 . mfc3g102pw [ 0 ] + ( pzi3xtzla3_idx_1 *
ln02qvajo4 + prv0bttwvn * b2dseb5akc_idx_1 ) * hbv5azo3sw .
Gain_Gain_avgts0xajn * o2y45zbt2m4 . mfc3g102pw [ 1 ] ) + ( pzi3xtzla3_idx_1
* b2dseb5akc_idx_1 - prv0bttwvn * ln02qvajo4 ) * hbv5azo3sw .
Gain1_Gain_pfgznzxep3 * o2y45zbt2m4 . mfc3g102pw [ 2 ] ; pzi3xtzla3_idx_1 = (
( ( hbv5azo3sw . Constant_Value_jelrytb22b - pzi3xtzla3_idx_1 *
pzi3xtzla3_idx_1 ) - b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) * hbv5azo3sw .
Gain2_Gain_jbi3ws3ahy * o2y45zbt2m4 . mfc3g102pw [ 1 ] + ( pzi3xtzla3_idx_1 *
ln02qvajo4 - prv0bttwvn * b2dseb5akc_idx_1 ) * hbv5azo3sw .
Gain_Gain_l4qk2foong * o2y45zbt2m4 . mfc3g102pw [ 0 ] ) + ( prv0bttwvn *
pzi3xtzla3_idx_1 + ln02qvajo4 * b2dseb5akc_idx_1 ) * hbv5azo3sw .
Gain1_Gain_b2dtklqw2b * o2y45zbt2m4 . mfc3g102pw [ 2 ] ; cxn41j5ndz_idx_0 =
hbv5azo3sw . Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] *
oouy1fopfw_idx_0 ; mjhceqjgf1_idx_1 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * pzi3xtzla3_idx_0 ;
oouy1fopfw_idx_1 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * pzi3xtzla3_idx_1 ;
b2dseb5akc_idx_0 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * pzi3xtzla3_idx_1 ;
eujiwcy0tl_idx_2 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * oouy1fopfw_idx_0 ;
oouy1fopfw_idx_0 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] * pzi3xtzla3_idx_0 ;
pzi3xtzla3_idx_1 = ( o2y45zbt2m4 . k2zlzdldai [ 0 ] * o2y45zbt2m4 .
k2zlzdldai [ 0 ] + o2y45zbt2m4 . k2zlzdldai [ 1 ] * o2y45zbt2m4 . k2zlzdldai
[ 1 ] ) + o2y45zbt2m4 . k2zlzdldai [ 2 ] * o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . pwifaixjxb != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . pwifaixjxb
= 0 ; } b2dseb5akc_idx_1 = muDoubleScalarSqrt ( pzi3xtzla3_idx_1 ) ; } else
if ( pzi3xtzla3_idx_1 < 0.0 ) { b2dseb5akc_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( pzi3xtzla3_idx_1 ) ) ; hrxu5rhe3af . pwifaixjxb = 1 ; }
else { b2dseb5akc_idx_1 = muDoubleScalarSqrt ( pzi3xtzla3_idx_1 ) ; }
pzi3xtzla3_idx_1 = rtP_Const . AU_1 / b2dseb5akc_idx_1 ; pzi3xtzla3_idx_1 =
pzi3xtzla3_idx_1 * pzi3xtzla3_idx_1 * o2y45zbt2m4 . mvnud1uzgl ; jh4pm1ykge [
0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] / b2dseb5akc_idx_1 ; eb1fnz3txo [ 0 ] =
0.0 ; jh4pm1ykge [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] / b2dseb5akc_idx_1 ;
eb1fnz3txo [ 1 ] = 0.0 ; jh4pm1ykge [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] /
b2dseb5akc_idx_1 ; eb1fnz3txo [ 2 ] = 0.0 ; for ( i = 0 ; i < 10 ; i ++ ) {
epx0klrbgl_idx_0 = b [ i ] ; prv0bttwvn = ( rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 1 ] * jh4pm1ykge [ 1 ] + rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i ] * jh4pm1ykge [ 0 ] ) + rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * jh4pm1ykge [ 2 ] ; if ( prv0bttwvn >
0.0 ) { b2dseb5akc_idx_1 = 2.0 * epx0klrbgl_idx_0 * prv0bttwvn +
0.066666666666666666 ; prv0bttwvn *= - pzi3xtzla3_idx_1 * rtP_Spacecraft .
surfaces_area [ i ] ; clod0whodw_idx_0 = ( ( 1.0 - epx0klrbgl_idx_0 ) *
jh4pm1ykge [ 0 ] + rtP_Spacecraft . surfaces_normalToSurface [ 3 * i ] *
b2dseb5akc_idx_1 ) * prv0bttwvn ; pzi3xtzla3_idx_0 = rtP_Spacecraft .
surfaces_position [ 3 * i ] + rtP_Spacecraft . geometricCenter [ 0 ] ;
clod0whodw_idx_1 = ( rtP_Spacecraft . surfaces_normalToSurface [ 3 * i + 1 ]
* b2dseb5akc_idx_1 + ( 1.0 - epx0klrbgl_idx_0 ) * jh4pm1ykge [ 1 ] ) *
prv0bttwvn ; ln02qvajo4 = rtP_Spacecraft . surfaces_position [ 3 * i + 1 ] +
rtP_Spacecraft . geometricCenter [ 1 ] ; prv0bttwvn *= rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * b2dseb5akc_idx_1 + ( 1.0 -
epx0klrbgl_idx_0 ) * jh4pm1ykge [ 2 ] ; b2dseb5akc_idx_1 = rtP_Spacecraft .
surfaces_position [ 3 * i + 2 ] + rtP_Spacecraft . geometricCenter [ 2 ] ;
epx0klrbgl_idx_0 = eb1fnz3txo [ 0 ] ; epx0klrbgl_idx_1 = eb1fnz3txo [ 1 ] ;
eujiwcy0tl_idx_1 = eb1fnz3txo [ 2 ] ; eb1fnz3txo [ 0 ] = ( ln02qvajo4 *
prv0bttwvn - clod0whodw_idx_1 * b2dseb5akc_idx_1 ) + epx0klrbgl_idx_0 ;
eb1fnz3txo [ 1 ] = ( clod0whodw_idx_0 * b2dseb5akc_idx_1 - pzi3xtzla3_idx_0 *
prv0bttwvn ) + epx0klrbgl_idx_1 ; eb1fnz3txo [ 2 ] = ( pzi3xtzla3_idx_0 *
clod0whodw_idx_1 - clod0whodw_idx_0 * ln02qvajo4 ) + eujiwcy0tl_idx_1 ; } }
hlbbwfsq2e [ 0 ] = ( hlbbwfsq2e [ 0 ] + eb1fnz3txo [ 0 ] ) + (
cxn41j5ndz_idx_0 - b2dseb5akc_idx_0 ) ; hlbbwfsq2e [ 1 ] = ( hlbbwfsq2e [ 1 ]
+ eb1fnz3txo [ 1 ] ) + ( mjhceqjgf1_idx_1 - eujiwcy0tl_idx_2 ) ; o2y45zbt2m4
. jg5xwtwjpe [ 0 ] = ( o2y45zbt2m4 . h20zeizqdi [ 1 ] * o2y45zbt2m4 .
h20zeizqdi [ 2 ] * o2y45zbt2m4 . jq2aut2ijb [ 0 ] + ( hlbbwfsq2e [ 0 ] +
o2y45zbt2m4 . fkulvx00jr [ 0 ] ) ) / hbv5azo3sw . Inertia_Value [ 0 ] ;
o2y45zbt2m4 . jg5xwtwjpe [ 1 ] = ( o2y45zbt2m4 . h20zeizqdi [ 0 ] *
o2y45zbt2m4 . h20zeizqdi [ 2 ] * o2y45zbt2m4 . jq2aut2ijb [ 1 ] + (
hlbbwfsq2e [ 1 ] + o2y45zbt2m4 . fkulvx00jr [ 1 ] ) ) / hbv5azo3sw .
Inertia_Value [ 1 ] ; o2y45zbt2m4 . jg5xwtwjpe [ 2 ] = ( ( ( ( hlbbwfsq2e [ 2
] + eb1fnz3txo [ 2 ] ) + ( oouy1fopfw_idx_1 - oouy1fopfw_idx_0 ) ) +
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
bwu3hh5pg3 [ i ] , _mm_set1_pd ( 0.0 ) ) ; tmp_i = _mm_loadu_pd ( &
l4cpq010qq [ i ] ) ; tmp_m = _mm_loadu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ i ]
) ; _mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ i ] , _mm_add_pd (
_mm_mul_pd ( _mm_mul_pd ( _mm_set1_pd ( hbv5azo3sw . Gain1_Gain_objsqoebrs )
, tmp_i ) , _mm_set1_pd ( l1pix2zzzf ) ) , tmp_m ) ) ; tmp_i = _mm_loadu_pd (
& l4cpq010qq [ i + 4 ] ) ; tmp_m = _mm_loadu_pd ( & o2y45zbt2m4 . bwu3hh5pg3
[ i ] ) ; _mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ i ] , _mm_add_pd (
_mm_mul_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd ( hbv5azo3sw .
Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd ( dxjf4qcaeo ) ) , tmp_m ) ) ; tmp_i
= _mm_loadu_pd ( & l4cpq010qq [ i + 8 ] ) ; tmp_m = _mm_loadu_pd ( &
o2y45zbt2m4 . bwu3hh5pg3 [ i ] ) ; _mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3
[ i ] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd (
hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd ( k1qmoe0iaw ) ) , tmp_m
) ) ; tmp_i = _mm_loadu_pd ( & l4cpq010qq [ i + 12 ] ) ; tmp_m = _mm_loadu_pd
( & o2y45zbt2m4 . bwu3hh5pg3 [ i ] ) ; _mm_storeu_pd ( & o2y45zbt2m4 .
bwu3hh5pg3 [ i ] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_i , _mm_set1_pd
( hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd ( nm4t0wvumv ) ) ,
tmp_m ) ) ; } k1qmoe0iaw = hbv5azo3sw . e_Value * muDoubleScalarCos (
emiiavfkh1 ) + hbv5azo3sw . Constant1_Value_lvvzxuwh5z ; o2y45zbt2m4 .
iunb01rvwp = 1.0 / o2y45zbt2m4 . bfud51xipp * o2y45zbt2m4 . kp1mzqwbu3 * (
k1qmoe0iaw * k1qmoe0iaw ) ; tmp = ssGetIsOkayToUpdateMode ( rtS ) ; if ( tmp
) { if ( hrxu5rhe3af . g0uzej5lf1 != 0 ) { n1mubcupv31 . li1obxdvy3 [ 0 ] =
o2y45zbt2m4 . fi1wde2gl2 [ 0 ] ; n1mubcupv31 . li1obxdvy3 [ 1 ] = o2y45zbt2m4
. fi1wde2gl2 [ 1 ] ; n1mubcupv31 . li1obxdvy3 [ 2 ] = o2y45zbt2m4 .
fi1wde2gl2 [ 2 ] ; } o2y45zbt2m4 . hnvlhc15na [ 0 ] = n1mubcupv31 .
li1obxdvy3 [ 0 ] ; o2y45zbt2m4 . hnvlhc15na [ 1 ] = n1mubcupv31 . li1obxdvy3
[ 1 ] ; o2y45zbt2m4 . hnvlhc15na [ 2 ] = n1mubcupv31 . li1obxdvy3 [ 2 ] ; }
else { o2y45zbt2m4 . hnvlhc15na [ 0 ] = n1mubcupv31 . li1obxdvy3 [ 0 ] ;
o2y45zbt2m4 . hnvlhc15na [ 1 ] = n1mubcupv31 . li1obxdvy3 [ 1 ] ; o2y45zbt2m4
. hnvlhc15na [ 2 ] = n1mubcupv31 . li1obxdvy3 [ 2 ] ; } k1qmoe0iaw = (
pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) +
pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . haxpv4vq51 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . haxpv4vq51 = 0 ; } l1pix2zzzf = muDoubleScalarSqrt (
k1qmoe0iaw ) ; } else if ( k1qmoe0iaw < 0.0 ) { l1pix2zzzf = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ; hrxu5rhe3af .
haxpv4vq51 = 1 ; } else { l1pix2zzzf = muDoubleScalarSqrt ( k1qmoe0iaw ) ; }
k1qmoe0iaw = l1pix2zzzf * l1pix2zzzf ; k1qmoe0iaw = rtP_Earth . J2 *
rtP_Earth . mu * o2y45zbt2m4 . ltnksa0t1k / ( k1qmoe0iaw * k1qmoe0iaw ) *
hbv5azo3sw . Gain_Gain_ij5ephcub4 ; jh4pm1ykge [ 0 ] = pygfqx1xx2 [ 0 ] /
l1pix2zzzf ; jh4pm1ykge [ 1 ] = pygfqx1xx2 [ 1 ] / l1pix2zzzf ; jh4pm1ykge [
2 ] = pygfqx1xx2 [ 2 ] / l1pix2zzzf ; l1pix2zzzf = hbv5azo3sw .
Gain1_Gain_fos5u53xa3 * jh4pm1ykge [ 2 ] ; dxjf4qcaeo = l1pix2zzzf *
l1pix2zzzf ; l1pix2zzzf = dxjf4qcaeo - hbv5azo3sw . Constant4_Value ;
dxjf4qcaeo = ( dxjf4qcaeo - hbv5azo3sw . Constant3_Value_aiagav1bu5 ) *
jh4pm1ykge [ 2 ] ; emiiavfkh1 = ( pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] +
pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . hxjxms0byf != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . hxjxms0byf
= 0 ; } nm4t0wvumv = muDoubleScalarSqrt ( emiiavfkh1 ) ; } else if (
emiiavfkh1 < 0.0 ) { nm4t0wvumv = - muDoubleScalarSqrt ( muDoubleScalarAbs (
emiiavfkh1 ) ) ; hrxu5rhe3af . hxjxms0byf = 1 ; } else { nm4t0wvumv =
muDoubleScalarSqrt ( emiiavfkh1 ) ; } emiiavfkh1 = rtP_Earth . mu / (
nm4t0wvumv * nm4t0wvumv ) * hbv5azo3sw . Gain_Gain_fosanw5ymw ; o2y45zbt2m4 .
gbu5abs2sz [ 0 ] = jh4pm1ykge [ 0 ] * l1pix2zzzf * k1qmoe0iaw + pygfqx1xx2 [
0 ] / nm4t0wvumv * emiiavfkh1 ; o2y45zbt2m4 . gbu5abs2sz [ 1 ] = l1pix2zzzf *
jh4pm1ykge [ 1 ] * k1qmoe0iaw + pygfqx1xx2 [ 1 ] / nm4t0wvumv * emiiavfkh1 ;
o2y45zbt2m4 . gbu5abs2sz [ 2 ] = pygfqx1xx2 [ 2 ] / nm4t0wvumv * emiiavfkh1 +
k1qmoe0iaw * dxjf4qcaeo ; o2y45zbt2m4 . cbgxsqe0kg [ 0 ] = hbv5azo3sw .
Gain_Gain_acmfvzt2nt * o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ; o2y45zbt2m4 .
cbgxsqe0kg [ 1 ] = hbv5azo3sw . Gain_Gain_acmfvzt2nt * o2y45zbt2m4 .
mvqp5l5ufq [ 1 ] ; o2y45zbt2m4 . cbgxsqe0kg [ 2 ] = hbv5azo3sw .
Gain_Gain_acmfvzt2nt * o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; k1qmoe0iaw = (
o2y45zbt2m4 . cbgxsqe0kg [ 0 ] * o2y45zbt2m4 . cbgxsqe0kg [ 0 ] + o2y45zbt2m4
. cbgxsqe0kg [ 1 ] * o2y45zbt2m4 . cbgxsqe0kg [ 1 ] ) + o2y45zbt2m4 .
cbgxsqe0kg [ 2 ] * o2y45zbt2m4 . cbgxsqe0kg [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) {
o2y45zbt2m4 . kwx5xj2ngl = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; } else { o2y45zbt2m4 . kwx5xj2ngl = muDoubleScalarSqrt (
k1qmoe0iaw ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . ozme2zffq1
= ( o2y45zbt2m4 . kwx5xj2ngl > hbv5azo3sw .
NormalizeVector_maxzero_idjlccn1tr ) ; } if ( hrxu5rhe3af . ozme2zffq1 ) {
eujiwcy0tl_idx_0 = o2y45zbt2m4 . cbgxsqe0kg [ 0 ] ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . cbgxsqe0kg [ 1 ] ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . cbgxsqe0kg
[ 2 ] ; prv0bttwvn = o2y45zbt2m4 . kwx5xj2ngl ; } else { o2y45zbt2m4 .
inxuhwzyyf [ 0 ] = o2y45zbt2m4 . cbgxsqe0kg [ 0 ] * 0.0 ; eujiwcy0tl_idx_0 =
o2y45zbt2m4 . inxuhwzyyf [ 0 ] ; o2y45zbt2m4 . inxuhwzyyf [ 1 ] = o2y45zbt2m4
. cbgxsqe0kg [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . inxuhwzyyf [ 1 ]
; o2y45zbt2m4 . inxuhwzyyf [ 2 ] = o2y45zbt2m4 . cbgxsqe0kg [ 2 ] * 0.0 ;
eujiwcy0tl_idx_2 = o2y45zbt2m4 . inxuhwzyyf [ 2 ] ; prv0bttwvn = hbv5azo3sw .
Constant_Value_fjyq3eus5i ; } cxn41j5ndz_idx_0 = eujiwcy0tl_idx_0 /
prv0bttwvn ; o2y45zbt2m4 . an1hct1vdk [ 0 ] = cxn41j5ndz_idx_0 ; jh4pm1ykge [
0 ] = cxn41j5ndz_idx_0 ; cxn41j5ndz_idx_0 = eujiwcy0tl_idx_1 / prv0bttwvn ;
o2y45zbt2m4 . an1hct1vdk [ 1 ] = cxn41j5ndz_idx_0 ; jh4pm1ykge [ 1 ] =
cxn41j5ndz_idx_0 ; cxn41j5ndz_idx_0 = eujiwcy0tl_idx_2 / prv0bttwvn ;
o2y45zbt2m4 . an1hct1vdk [ 2 ] = cxn41j5ndz_idx_0 ; k1qmoe0iaw = (
o2y45zbt2m4 . hnvlhc15na [ 0 ] * o2y45zbt2m4 . hnvlhc15na [ 0 ] + o2y45zbt2m4
. hnvlhc15na [ 1 ] * o2y45zbt2m4 . hnvlhc15na [ 1 ] ) + o2y45zbt2m4 .
hnvlhc15na [ 2 ] * o2y45zbt2m4 . hnvlhc15na [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) {
o2y45zbt2m4 . ngj1laz0jn = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; } else { o2y45zbt2m4 . ngj1laz0jn = muDoubleScalarSqrt (
k1qmoe0iaw ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . pqxjs5shcl
= ( o2y45zbt2m4 . ngj1laz0jn > hbv5azo3sw . NormalizeVector1_maxzero ) ; } if
( hrxu5rhe3af . pqxjs5shcl ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 . hnvlhc15na [
0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . hnvlhc15na [ 1 ] ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . hnvlhc15na [ 2 ] ; prv0bttwvn = o2y45zbt2m4 . ngj1laz0jn ; }
else { o2y45zbt2m4 . m4a4e0kncl [ 0 ] = o2y45zbt2m4 . hnvlhc15na [ 0 ] * 0.0
; eujiwcy0tl_idx_0 = o2y45zbt2m4 . m4a4e0kncl [ 0 ] ; o2y45zbt2m4 .
m4a4e0kncl [ 1 ] = o2y45zbt2m4 . hnvlhc15na [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . m4a4e0kncl [ 1 ] ; o2y45zbt2m4 . m4a4e0kncl [ 2 ] = o2y45zbt2m4
. hnvlhc15na [ 2 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . m4a4e0kncl [ 2 ]
; prv0bttwvn = hbv5azo3sw . Constant_Value_cpj53jxfos ; } pzi3xtzla3_idx_0 =
eujiwcy0tl_idx_0 / prv0bttwvn ; ln02qvajo4 = eujiwcy0tl_idx_1 / prv0bttwvn ;
b2dseb5akc_idx_1 = eujiwcy0tl_idx_2 / prv0bttwvn ; o2y45zbt2m4 . gnzoqn2dsl [
0 ] = jh4pm1ykge [ 1 ] * b2dseb5akc_idx_1 - ln02qvajo4 * cxn41j5ndz_idx_0 ;
o2y45zbt2m4 . gnzoqn2dsl [ 1 ] = pzi3xtzla3_idx_0 * cxn41j5ndz_idx_0 -
jh4pm1ykge [ 0 ] * b2dseb5akc_idx_1 ; o2y45zbt2m4 . gnzoqn2dsl [ 2 ] =
jh4pm1ykge [ 0 ] * ln02qvajo4 - pzi3xtzla3_idx_0 * jh4pm1ykge [ 1 ] ;
o2y45zbt2m4 . pguc21lp1k [ 0 ] = o2y45zbt2m4 . gnzoqn2dsl [ 1 ] *
cxn41j5ndz_idx_0 - jh4pm1ykge [ 1 ] * o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ;
o2y45zbt2m4 . pguc21lp1k [ 1 ] = jh4pm1ykge [ 0 ] * o2y45zbt2m4 . gnzoqn2dsl
[ 2 ] - o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * cxn41j5ndz_idx_0 ; o2y45zbt2m4 .
pguc21lp1k [ 2 ] = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * jh4pm1ykge [ 1 ] -
jh4pm1ykge [ 0 ] * o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ; k1qmoe0iaw = (
o2y45zbt2m4 . pguc21lp1k [ 0 ] * o2y45zbt2m4 . pguc21lp1k [ 0 ] + o2y45zbt2m4
. pguc21lp1k [ 1 ] * o2y45zbt2m4 . pguc21lp1k [ 1 ] ) + o2y45zbt2m4 .
pguc21lp1k [ 2 ] * o2y45zbt2m4 . pguc21lp1k [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) {
o2y45zbt2m4 . gnhb3isuhw = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; } else { o2y45zbt2m4 . gnhb3isuhw = muDoubleScalarSqrt (
k1qmoe0iaw ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . jydhsrazby
= ( o2y45zbt2m4 . gnhb3isuhw > hbv5azo3sw . NormalizeVector3_maxzero ) ; } if
( hrxu5rhe3af . jydhsrazby ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 . pguc21lp1k [
0 ] ; eujiwcy0tl_idx_1 = o2y45zbt2m4 . pguc21lp1k [ 1 ] ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . pguc21lp1k [ 2 ] ; prv0bttwvn = o2y45zbt2m4 . gnhb3isuhw ; }
else { o2y45zbt2m4 . j5pfxwzlry [ 0 ] = o2y45zbt2m4 . pguc21lp1k [ 0 ] * 0.0
; eujiwcy0tl_idx_0 = o2y45zbt2m4 . j5pfxwzlry [ 0 ] ; o2y45zbt2m4 .
j5pfxwzlry [ 1 ] = o2y45zbt2m4 . pguc21lp1k [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . j5pfxwzlry [ 1 ] ; o2y45zbt2m4 . j5pfxwzlry [ 2 ] = o2y45zbt2m4
. pguc21lp1k [ 2 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . j5pfxwzlry [ 2 ]
; prv0bttwvn = hbv5azo3sw . Constant_Value_ouyamitdob ; } o2y45zbt2m4 .
an1hct1vdk [ 3 ] = eujiwcy0tl_idx_0 / prv0bttwvn ; o2y45zbt2m4 . an1hct1vdk [
4 ] = eujiwcy0tl_idx_1 / prv0bttwvn ; o2y45zbt2m4 . an1hct1vdk [ 5 ] =
eujiwcy0tl_idx_2 / prv0bttwvn ; k1qmoe0iaw = ( o2y45zbt2m4 . gnzoqn2dsl [ 0 ]
* o2y45zbt2m4 . gnzoqn2dsl [ 0 ] + o2y45zbt2m4 . gnzoqn2dsl [ 1 ] *
o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ) + o2y45zbt2m4 . gnzoqn2dsl [ 2 ] *
o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ; if ( k1qmoe0iaw < 0.0 ) { o2y45zbt2m4 .
isiqvhsvds = - muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ; }
else { o2y45zbt2m4 . isiqvhsvds = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . nfvyn45pdm = ( o2y45zbt2m4 .
isiqvhsvds > hbv5azo3sw . NormalizeVector4_maxzero ) ; } if ( hrxu5rhe3af .
nfvyn45pdm ) { eujiwcy0tl_idx_0 = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] ;
eujiwcy0tl_idx_1 = o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ; eujiwcy0tl_idx_2 =
o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ; prv0bttwvn = o2y45zbt2m4 . isiqvhsvds ; }
else { o2y45zbt2m4 . du4yqg3svc [ 0 ] = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * 0.0
; eujiwcy0tl_idx_0 = o2y45zbt2m4 . du4yqg3svc [ 0 ] ; o2y45zbt2m4 .
du4yqg3svc [ 1 ] = o2y45zbt2m4 . gnzoqn2dsl [ 1 ] * 0.0 ; eujiwcy0tl_idx_1 =
o2y45zbt2m4 . du4yqg3svc [ 1 ] ; o2y45zbt2m4 . du4yqg3svc [ 2 ] = o2y45zbt2m4
. gnzoqn2dsl [ 2 ] * 0.0 ; eujiwcy0tl_idx_2 = o2y45zbt2m4 . du4yqg3svc [ 2 ]
; prv0bttwvn = hbv5azo3sw . Constant_Value_guhbgdhd5y ; } o2y45zbt2m4 .
an1hct1vdk [ 6 ] = eujiwcy0tl_idx_0 / prv0bttwvn ; o2y45zbt2m4 . an1hct1vdk [
7 ] = eujiwcy0tl_idx_1 / prv0bttwvn ; o2y45zbt2m4 . an1hct1vdk [ 8 ] =
eujiwcy0tl_idx_2 / prv0bttwvn ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtPrevAction = hrxu5rhe3af . iqs2nrdyqs ; rtAction = - 1 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd != 1.0 ) { rtAction = 0
; } hrxu5rhe3af . iqs2nrdyqs = rtAction ; } else { rtAction = hrxu5rhe3af .
iqs2nrdyqs ; } if ( ( rtPrevAction != rtAction ) && ( rtPrevAction == 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
j1uacuucpv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . obuyxhugh2 ) { case 0 : k3uunhzc5w ( rtS ) ; break ;
case 1 : pkoiaofkhx ( rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch
( hrxu5rhe3af . bnzh2jzuy5 ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 :
dd41awjj4d ( rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; }
hrxu5rhe3af . j1uacuucpv = - 1 ; } if ( rtAction == 0 ) { if ( 0 !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { for ( i = 0 ; i < 3 ; i ++ ) { for ( k = 0 ; k < 3 ; k ++ )
{ kalbs1u0ur [ i + 3 * k ] = ( ( o2y45zbt2m4 . an1hct1vdk [ 3 * i + 1 ] *
o2y45zbt2m4 . an1hct1vdk [ 3 * k + 1 ] + o2y45zbt2m4 . an1hct1vdk [ 3 * i ] *
o2y45zbt2m4 . an1hct1vdk [ 3 * k ] ) + o2y45zbt2m4 . an1hct1vdk [ 3 * i + 2 ]
* o2y45zbt2m4 . an1hct1vdk [ 3 * k + 2 ] ) + hbv5azo3sw .
Bias1_Bias_ipdymfxp23 [ 3 * k + i ] ; } } for ( i = 0 ; i < 9 ; i ++ ) {
aghig0gren [ i ] = ( muDoubleScalarAbs ( kalbs1u0ur [ i ] ) > hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance_lf33vmkxxr ) ; } tmp =
aghig0gren [ 0 ] ; for ( k = 0 ; k < 8 ; k ++ ) { tmp = ( tmp || aghig0gren [
k + 1 ] ) ; } rtPrevAction = hrxu5rhe3af . j1uacuucpv ; rtAction = - 1 ; if (
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
rtAction = 0 ; } else if ( tmp ) { rtAction = 1 ; } hrxu5rhe3af . j1uacuucpv
= rtAction ; if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case
0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af
. obuyxhugh2 ) { case 0 : k3uunhzc5w ( rtS ) ; break ; case 1 : pkoiaofkhx (
rtS ) ; break ; } hrxu5rhe3af . obuyxhugh2 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
bnzh2jzuy5 ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 : dd41awjj4d (
rtS ) ; break ; } hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtPrevAction = hrxu5rhe3af . obuyxhugh2 ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 2.0
) { rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 3.0 ) { rtAction = 1
; } hrxu5rhe3af . obuyxhugh2 = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : k3uunhzc5w ( rtS ) ; break ; case 1 :
pkoiaofkhx ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { elhxh1fuui ( rtS ) ; } bbjtuydtdk ( rtS , hbv5azo3sw .
Constant1_Value_ftvtqjp1us , & hrxu5rhe3af . npgo12zmto ) ; srUpdateBC (
hrxu5rhe3af . npgo12zmto . cfhkcft2t2 ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { lo0d5ti0wo ( rtS ) ; } bqx0vc3mud ( rtS , hbv5azo3sw .
Constant1_Value_ftvtqjp1us , & hrxu5rhe3af . iyw4crazdc ) ; srUpdateBC (
hrxu5rhe3af . iyw4crazdc . dmwbxxl3xx ) ; break ; } } srUpdateBC (
hrxu5rhe3af . pmgcir2p13 ) ; break ; case 1 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtPrevAction = hrxu5rhe3af . bnzh2jzuy5 ; rtAction = - 1 ;
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 2.0
) { rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd == 3.0 ) { rtAction = 1
; } hrxu5rhe3af . bnzh2jzuy5 = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : leyfenaqjz ( rtS ) ; break ; case 1 :
dd41awjj4d ( rtS ) ; break ; } } switch ( rtAction ) { case 0 : if ( rtAction
!= rtPrevAction ) { ciw1a3ycef ( rtS ) ; } n53cqmpclo ( rtS , hbv5azo3sw .
Constant1_Value_l2qqn3e4fv , & hrxu5rhe3af . bghekfjhrb ) ; srUpdateBC (
hrxu5rhe3af . bghekfjhrb . ogcbvjea2u ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { pzicdihqt4 ( rtS ) ; } prxbfmvl1e ( rtS , hbv5azo3sw .
Constant1_Value_l2qqn3e4fv , & hrxu5rhe3af . oxb0jyodnm ) ; srUpdateBC (
hrxu5rhe3af . oxb0jyodnm . k5qbhboafq ) ; break ; } } srUpdateBC (
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
ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i <= 98 ; i += 2 ) { tmp_i =
_mm_loadu_pd ( & hrxu5rhe3af . buggjk4l1n [ i ] ) ; tmp_i = _mm_mul_pd (
_mm_set1_pd ( 0.0031622776601683794 ) , tmp_i ) ; _mm_storeu_pd ( & X2state [
i ] , tmp_i ) ; _mm_storeu_pd ( & X2state [ i + 100 ] , _mm_mul_pd ( tmp_i ,
_mm_set1_pd ( - 1.0 ) ) ) ; } for ( k = 0 ; k < 20 ; k ++ ) { for ( i = 0 ; i
<= 8 ; i += 2 ) { tmp_i = _mm_loadu_pd ( & X2state [ 10 * k + i ] ) ; tmp_m =
_mm_loadu_pd ( & hrxu5rhe3af . j3ergpk3vu [ i ] ) ; _mm_storeu_pd ( & X2state
[ i + 10 * k ] , _mm_add_pd ( tmp_i , tmp_m ) ) ; } } for ( k = 0 ; k < 20 ;
k ++ ) { memcpy ( & Y2 [ k * 10 ] , & X2state [ k * 10 ] , 10U * sizeof (
real_T ) ) ; attitudePropagation_EwVCPsTf ( & Y2 [ 10 * k ] , o2y45zbt2m4 .
g20nolxhoz ) ; } memcpy ( & c [ 0 ] , & hrxu5rhe3af . j3ergpk3vu [ 0 ] , 10U
* sizeof ( real_T ) ) ; attitudePropagation_EwVCPsTf ( c , o2y45zbt2m4 .
g20nolxhoz ) ; memcpy ( & tmp_g [ 0 ] , & hrxu5rhe3af . j3ergpk3vu [ 0 ] ,
10U * sizeof ( real_T ) ) ; UTMeanCovSqrt_dhYnfSkp ( c , Y2 , tmp_g , X2state
, hrxu5rhe3af . j3ergpk3vu , hrxu5rhe3af . buggjk4l1n , sqrtP ) ; memset ( &
sqrtP [ 0 ] , 0 , 100U * sizeof ( real_T ) ) ; for ( k = 0 ; k < 10 ; k ++ )
{ sqrtP [ k + 10 * k ] = 1.0 ; } qrFactor_Yb0wPWvf ( sqrtP , hrxu5rhe3af .
buggjk4l1n , hbv5azo3sw . Q_Value ) ; } UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID13 ( int_T tid ) { real_T bj3w2pxex3_idx_1 ; real_T
bj3w2pxex3_idx_2 ; real_T chygdxgike ; real_T ivzcgo0u3v_idx_1 ; real_T
ivzcgo0u3v_idx_2 ; real_T ix5sio1awm ; real_T jdgqlncavi ; real_T jnvxrzr0ue
; real_T ljyggpl3ml ; o2y45zbt2m4 . amepcbkksg [ 0 ] = hbv5azo3sw .
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
hbv5azo3sw . u821stMarch_Value ; chygdxgike = hbv5azo3sw . Sun_Value / (
hbv5azo3sw . a_Value * hbv5azo3sw . a_Value ) / hbv5azo3sw . a_Value ;
jdgqlncavi = hbv5azo3sw . Constant_Value_c0ie4jx1vv - hbv5azo3sw . e_Value *
hbv5azo3sw . e_Value ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af .
nqcixj2cfc != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . nqcixj2cfc = 0 ; } jnvxrzr0ue = muDoubleScalarSqrt ( jdgqlncavi
) ; } else if ( jdgqlncavi < 0.0 ) { jnvxrzr0ue = - muDoubleScalarSqrt (
muDoubleScalarAbs ( jdgqlncavi ) ) ; hrxu5rhe3af . nqcixj2cfc = 1 ; } else {
jnvxrzr0ue = muDoubleScalarSqrt ( jdgqlncavi ) ; } o2y45zbt2m4 . bfud51xipp =
jnvxrzr0ue * jdgqlncavi ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af
. gcz34svd4r != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . gcz34svd4r = 0 ; } o2y45zbt2m4 . kp1mzqwbu3 =
muDoubleScalarSqrt ( chygdxgike ) ; } else if ( chygdxgike < 0.0 ) {
o2y45zbt2m4 . kp1mzqwbu3 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
chygdxgike ) ) ; hrxu5rhe3af . gcz34svd4r = 1 ; } else { o2y45zbt2m4 .
kp1mzqwbu3 = muDoubleScalarSqrt ( chygdxgike ) ; } o2y45zbt2m4 . mrzwmqiqje =
( hbv5azo3sw . Constant3_Value_fveye0j2gb - hbv5azo3sw . e_Value * hbv5azo3sw
. e_Value ) * hbv5azo3sw . a_Value ; muDoubleScalarSinCos ( hbv5azo3sw .
u2_Gain * ( hbv5azo3sw . Gain1_Gain_byeui5d4hz * hbv5azo3sw .
Anglebetween3rdJanto21stMarch180_Value ) , & chygdxgike , & jdgqlncavi ) ;
muDoubleScalarSinCos ( hbv5azo3sw . u2_Gain * ( hbv5azo3sw .
Gain1_Gain_byeui5d4hz * ( hbv5azo3sw . Gain_Gain_nrquqjsjbh * hbv5azo3sw .
Ecliptic_Value ) ) , & bj3w2pxex3_idx_1 , & ivzcgo0u3v_idx_1 ) ;
muDoubleScalarSinCos ( hbv5azo3sw . u2_Gain * ( hbv5azo3sw .
Gain1_Gain_byeui5d4hz * hbv5azo3sw . Constant_Value_mgrgcefnc2 ) , &
bj3w2pxex3_idx_2 , & ivzcgo0u3v_idx_2 ) ; ix5sio1awm = jdgqlncavi *
ivzcgo0u3v_idx_1 * ivzcgo0u3v_idx_2 - chygdxgike * bj3w2pxex3_idx_1 *
bj3w2pxex3_idx_2 ; ljyggpl3ml = jdgqlncavi * bj3w2pxex3_idx_1 *
ivzcgo0u3v_idx_2 - chygdxgike * ivzcgo0u3v_idx_1 * bj3w2pxex3_idx_2 ;
jnvxrzr0ue = jdgqlncavi * ivzcgo0u3v_idx_1 * bj3w2pxex3_idx_2 + chygdxgike *
bj3w2pxex3_idx_1 * ivzcgo0u3v_idx_2 ; chygdxgike = chygdxgike *
ivzcgo0u3v_idx_1 * ivzcgo0u3v_idx_2 + jdgqlncavi * bj3w2pxex3_idx_1 *
bj3w2pxex3_idx_2 ; jdgqlncavi = ( ( ix5sio1awm * ix5sio1awm + ljyggpl3ml *
ljyggpl3ml ) + jnvxrzr0ue * jnvxrzr0ue ) + chygdxgike * chygdxgike ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . anszycztem != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . anszycztem
= 0 ; } jdgqlncavi = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { jdgqlncavi = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . anszycztem = 1 ; } else { jdgqlncavi =
muDoubleScalarSqrt ( jdgqlncavi ) ; } ix5sio1awm /= jdgqlncavi ; ljyggpl3ml
/= jdgqlncavi ; jnvxrzr0ue /= jdgqlncavi ; chygdxgike /= jdgqlncavi ;
o2y45zbt2m4 . kyx4elghw5 = ( ljyggpl3ml * jnvxrzr0ue + ix5sio1awm *
chygdxgike ) * hbv5azo3sw . Gain_Gain_msviodsdfg ; o2y45zbt2m4 . ightd03wbw =
( ( hbv5azo3sw . Constant_Value_mrthaqohbp - jnvxrzr0ue * jnvxrzr0ue ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_jrylcyky0d ; o2y45zbt2m4
. boco0ydrhx = ( ljyggpl3ml * chygdxgike - ix5sio1awm * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_fdnpx3hnab * hbv5azo3sw . Constant5_Value ;
o2y45zbt2m4 . kgibrayejc = ( ljyggpl3ml * jnvxrzr0ue - ix5sio1awm *
chygdxgike ) * hbv5azo3sw . Gain_Gain_j00moojqwi ; o2y45zbt2m4 . klod4yztvz =
( ( hbv5azo3sw . Constant_Value_gob0mxnrc1 - ljyggpl3ml * ljyggpl3ml ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_jieczjcfxj ; o2y45zbt2m4
. gr0fttz1x3 = ( ix5sio1awm * ljyggpl3ml + jnvxrzr0ue * chygdxgike ) *
hbv5azo3sw . Gain1_Gain_epavf05nx2 * hbv5azo3sw . Constant5_Value ;
o2y45zbt2m4 . lj2hsiefmb = ( ljyggpl3ml * chygdxgike + ix5sio1awm *
jnvxrzr0ue ) * hbv5azo3sw . Gain_Gain_lxppc43sr3 ; o2y45zbt2m4 . pqwrcdv51y =
( jnvxrzr0ue * chygdxgike - ix5sio1awm * ljyggpl3ml ) * hbv5azo3sw .
Gain1_Gain_pr0mjxkeko ; o2y45zbt2m4 . gkj1c4ecpo = ( ( hbv5azo3sw .
Constant_Value_l4ftm45smy - ljyggpl3ml * ljyggpl3ml ) - jnvxrzr0ue *
jnvxrzr0ue ) * hbv5azo3sw . Gain2_Gain_oh11qzcnsq * hbv5azo3sw .
Constant5_Value ; o2y45zbt2m4 . ltnksa0t1k = rtP_Earth . equatorialRadius *
rtP_Earth . equatorialRadius ; jdgqlncavi = ( ( hbv5azo3sw .
Sensororientation_Value [ 0 ] * hbv5azo3sw . Sensororientation_Value [ 0 ] +
hbv5azo3sw . Sensororientation_Value [ 1 ] * hbv5azo3sw .
Sensororientation_Value [ 1 ] ) + hbv5azo3sw . Sensororientation_Value [ 2 ]
* hbv5azo3sw . Sensororientation_Value [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value [ 3 ] * hbv5azo3sw . Sensororientation_Value [ 3 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . ane43mgfgs != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ane43mgfgs
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . ane43mgfgs = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value [ 0 ] / chygdxgike ; jnvxrzr0ue = hbv5azo3sw .
Sensororientation_Value [ 1 ] / chygdxgike ; ix5sio1awm = hbv5azo3sw .
Sensororientation_Value [ 2 ] / chygdxgike ; chygdxgike = hbv5azo3sw .
Sensororientation_Value [ 3 ] / chygdxgike ; o2y45zbt2m4 . ebby2e0eey = (
jnvxrzr0ue * ix5sio1awm + jdgqlncavi * chygdxgike ) * hbv5azo3sw .
Gain_Gain_gakfyjlszi ; o2y45zbt2m4 . kc5uinuva1 = ( jnvxrzr0ue * chygdxgike -
jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain1_Gain_cp5gxmxv40 ; o2y45zbt2m4
. olg5gqva4k = ( ( hbv5azo3sw . Constant_Value_hucifuffuc - ix5sio1awm *
ix5sio1awm ) - chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_bqvzfgganp
; o2y45zbt2m4 . ny5fqojp01 = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi *
chygdxgike ) * hbv5azo3sw . Gain_Gain_jcxnesc51s ; o2y45zbt2m4 . mwkxuoztcf =
( jdgqlncavi * jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw .
Gain1_Gain_e5tqo52tku ; o2y45zbt2m4 . g42bdhp2mr = ( ( hbv5azo3sw .
Constant_Value_itxm0x43si - jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike *
chygdxgike ) * hbv5azo3sw . Gain2_Gain_jxsi55a1on ; o2y45zbt2m4 . gegkjzomxm
= ( jnvxrzr0ue * chygdxgike + jdgqlncavi * ix5sio1awm ) * hbv5azo3sw .
Gain_Gain_omyfgx1n5h ; o2y45zbt2m4 . kd1qxjhyrr = ( ix5sio1awm * chygdxgike -
jdgqlncavi * jnvxrzr0ue ) * hbv5azo3sw . Gain1_Gain_n4ecq0uzvs ; o2y45zbt2m4
. pgs5royztd = ( ( hbv5azo3sw . Constant_Value_ezafw5tbx0 - jnvxrzr0ue *
jnvxrzr0ue ) - ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_bxmfdcbxd2
; jdgqlncavi = ( ( hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 0 ] *
hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 0 ] + hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 1 ] * hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 2 ] * hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 3 ] * hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . hkxlm4qdro != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . hkxlm4qdro
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . hkxlm4qdro = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_hlfjdstuhw [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 3
] / chygdxgike ; o2y45zbt2m4 . eqlu1laly1 = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_cr4zczeez0 ; o2y45zbt2m4 .
c4imsujsyj = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_g12m14aft0 ; o2y45zbt2m4 . ewg4gsarwm = ( (
hbv5azo3sw . Constant_Value_kst2th0l1z - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_enxakegu4s ; o2y45zbt2m4
. myxilkpyto = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_lw5hirdrrr ; o2y45zbt2m4 . nfvbvcsgaf = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_amkbhcbkvw ;
o2y45zbt2m4 . jyoiaqgash = ( ( hbv5azo3sw . Constant_Value_igmvdrtaty -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_bttjb1ulla ; o2y45zbt2m4 . am2ydxy3tg = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_pmdq3xatwv ; o2y45zbt2m4
. aayx0clngf = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_bgbnv4z5nx ; o2y45zbt2m4 . imjovcvzmj = ( (
hbv5azo3sw . Constant_Value_m4goabuepu - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_cdbsbiii2b ; jdgqlncavi =
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
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . fnu1tvdbyx = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_cwstcpopt3 [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 3
] / chygdxgike ; o2y45zbt2m4 . fhwu2rpyxm = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_pfg5czu2ug ; o2y45zbt2m4 .
db5wedrkq4 = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_lgo5besblz ; o2y45zbt2m4 . bzsae5g150 = ( (
hbv5azo3sw . Constant_Value_lntxh0ukmr - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_aaobkzaajt ; o2y45zbt2m4
. fxqr3to5iu = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_dmquktubpv ; o2y45zbt2m4 . b3deffzvww = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_o20oz1n5pv ;
o2y45zbt2m4 . jzcgup51f2 = ( ( hbv5azo3sw . Constant_Value_imdxvhi4fs -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_bxr0hdxmou ; o2y45zbt2m4 . aqvhjylunl = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_app3p5qkli ; o2y45zbt2m4
. pmy5icug2k = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_ggc5pki3i3 ; o2y45zbt2m4 . pxdeyipxtr = ( (
hbv5azo3sw . Constant_Value_k0omy0fwkr - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_jiiceq4a1g ; jdgqlncavi =
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
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . fq3jja1aol = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_escjrdlkcn [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 3
] / chygdxgike ; o2y45zbt2m4 . cepjmd5gi4 = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_kb00k2wbfq ; o2y45zbt2m4 .
a3l2vrrg5t = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_iow1llvkxc ; o2y45zbt2m4 . pmjdaqsrgv = ( (
hbv5azo3sw . Constant_Value_ba5xlpus1a - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_dtunvm3otp ; o2y45zbt2m4
. ivk2auaags = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_npe4zqgyas ; o2y45zbt2m4 . hmdscxhrrq = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_fdxpyxu0o1 ;
o2y45zbt2m4 . ks0a4vmt2y = ( ( hbv5azo3sw . Constant_Value_eqda1kzn3h -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_n4sn3p4zhh ; o2y45zbt2m4 . fuxsypdw5b = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_caz4q343an ; o2y45zbt2m4
. ibibxo1hc5 = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_odtb3u3w54 ; o2y45zbt2m4 . e0g1epmzzc = ( (
hbv5azo3sw . Constant_Value_j3hxujgyee - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_pl1uwnp5vb ; jdgqlncavi =
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
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . nbmuo2yzhf = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_ezbdisr3i3 [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 3
] / chygdxgike ; o2y45zbt2m4 . pvujvtillf = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_jfezxdcuu1 ; o2y45zbt2m4 .
bralaspqvj = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_mzwjkwmyds ; o2y45zbt2m4 . mf042bbyls = ( (
hbv5azo3sw . Constant_Value_myru2azkts - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_pt1tknsnuk ; o2y45zbt2m4
. pvvuqzjxh5 = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_cylo5ppz5d ; o2y45zbt2m4 . jkdvlxhrn3 = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_evkyndzct5 ;
o2y45zbt2m4 . nd0vnjuzbo = ( ( hbv5azo3sw . Constant_Value_mpzaspn304 -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_ogm3tj3b4p ; o2y45zbt2m4 . ke44k2nvd3 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_lnevd4sqnk ; o2y45zbt2m4
. bvbwt2i4ty = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_f5yo2mvezp ; o2y45zbt2m4 . bckqvwne10 = ( (
hbv5azo3sw . Constant_Value_ey5twm140q - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_mg22nq4b3k ; jdgqlncavi =
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
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . ev5en1vf5z = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_luhksxjjam [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 3
] / chygdxgike ; o2y45zbt2m4 . icooi3vgxr = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_f5mrtnkemr ; o2y45zbt2m4 .
nhfh5pwjge = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_fdh0g1o02u ; o2y45zbt2m4 . ekeiqfqt15 = ( (
hbv5azo3sw . Constant_Value_kkk1dzjy3p - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_gnny303ymj ; o2y45zbt2m4
. fu44uyydbm = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_bkbvyxdlek ; o2y45zbt2m4 . nrvyadhccn = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_pbfdoucssu ;
o2y45zbt2m4 . kif43ukmno = ( ( hbv5azo3sw . Constant_Value_jbyhakx4ay -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_ijreebnsuw ; o2y45zbt2m4 . lvap1gibsy = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_a2lqzra5qd ; o2y45zbt2m4
. fjgl0ynn23 = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_f45poxumoe ; o2y45zbt2m4 . dlywnze0gh = ( (
hbv5azo3sw . Constant_Value_f1tb0wmrtm - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_necstpfmlp ; jdgqlncavi =
( ( hbv5azo3sw . Sensororientation_Value_c1w03cmwlz [ 0 ] * hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 0 ] + hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 1 ] * hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 2 ] * hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 3 ] * hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . btkemo1frv != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . btkemo1frv
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . btkemo1frv = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_c1w03cmwlz [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_c1w03cmwlz [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_c1w03cmwlz [ 3
] / chygdxgike ; o2y45zbt2m4 . evt22h0udz = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_jom4zjkqot ; o2y45zbt2m4 .
hr5yavkh2g = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_ec5n4vlyml ; o2y45zbt2m4 . a3453wdy3h = ( (
hbv5azo3sw . Constant_Value_c0bcxggzid - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_ppb55hsf22 ; o2y45zbt2m4
. ln15xtukoj = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_owfxeyg0hz ; o2y45zbt2m4 . ofev2a4bu4 = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_azstchlb2n ;
o2y45zbt2m4 . iak2iehb01 = ( ( hbv5azo3sw . Constant_Value_cd21hrcv55 -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_azs3a4y21d ; o2y45zbt2m4 . gy5dnmc0o2 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_lp1ded333l ; o2y45zbt2m4
. bemlv143br = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_e5iewy4mku ; o2y45zbt2m4 . hsxdwr2kap = ( (
hbv5azo3sw . Constant_Value_i1rjqidmbj - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_p50urd0soy ; jdgqlncavi =
( ( hbv5azo3sw . Sensororientation_Value_f1bimmtkao [ 0 ] * hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 0 ] + hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 1 ] * hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 2 ] * hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 3 ] * hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . cag24nmzzp != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . cag24nmzzp
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . cag24nmzzp = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_f1bimmtkao [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_f1bimmtkao [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_f1bimmtkao [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_f1bimmtkao [ 3
] / chygdxgike ; o2y45zbt2m4 . cikadflncr = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_aqtmdzg5ve ; o2y45zbt2m4 .
d55wbumkta = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_luiia42t5t ; o2y45zbt2m4 . ftiqxo4eic = ( (
hbv5azo3sw . Constant_Value_i54as2vhie - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_mb2nt12ulg ; o2y45zbt2m4
. dg3licanvf = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_lychsiugxc ; o2y45zbt2m4 . fd0i4zg4gl = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_b1eddp32tw ;
o2y45zbt2m4 . nmsyyhec3k = ( ( hbv5azo3sw . Constant_Value_ogstggr2j3 -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_nfkayg1huw ; o2y45zbt2m4 . akaurxf5cn = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_nuvyvhffsa ; o2y45zbt2m4
. fjb4t2g0di = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_ci4cvxslsl ; o2y45zbt2m4 . eps1xh200d = ( (
hbv5azo3sw . Constant_Value_oetlq3b1z2 - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_ktgwyxzbfl ; jdgqlncavi =
( ( hbv5azo3sw . Sensororientation_Value_gzezhgiiva [ 0 ] * hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 0 ] + hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 1 ] * hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 2 ] * hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 3 ] * hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . lptvxysd1c != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . lptvxysd1c
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . lptvxysd1c = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_gzezhgiiva [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_gzezhgiiva [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_gzezhgiiva [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_gzezhgiiva [ 3
] / chygdxgike ; o2y45zbt2m4 . dbdvnfbtan = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_mrg5lsnokn ; o2y45zbt2m4 .
nqoad4oagc = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_hbwgr3wfvo ; o2y45zbt2m4 . ornbl4mfau = ( (
hbv5azo3sw . Constant_Value_dqtse52l4d - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_ez1qvjlr1d ; o2y45zbt2m4
. gq23czohqi = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_hiv2r3l01b ; o2y45zbt2m4 . gree3bakbj = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_pxrflmc1o4 ;
o2y45zbt2m4 . m13nwgsfs4 = ( ( hbv5azo3sw . Constant_Value_aocyzox0ld -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_g5qbykwveo ; o2y45zbt2m4 . brdq13y0qd = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_hgfy5zqhxv ; o2y45zbt2m4
. h3xp3qlim0 = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_eo1xrtusyu ; o2y45zbt2m4 . b1pqf2pbpp = ( (
hbv5azo3sw . Constant_Value_atme3hmtbv - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_ismz453fn1 ; jdgqlncavi =
( ( hbv5azo3sw . Sensororientation_Value_pvtoldl5dv [ 0 ] * hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 0 ] + hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 1 ] * hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 2 ] * hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 3 ] * hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . mt3v1tg0wr != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . mt3v1tg0wr
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . mt3v1tg0wr = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_pvtoldl5dv [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_pvtoldl5dv [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_pvtoldl5dv [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_pvtoldl5dv [ 3
] / chygdxgike ; o2y45zbt2m4 . ek204bmiea = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_ena5yszh4w ; o2y45zbt2m4 .
aqwdecxidu = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_eqkjxlvbiq ; o2y45zbt2m4 . daikka42e3 = ( (
hbv5azo3sw . Constant_Value_epgscsipyz - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_k0lo0mgba2 ; o2y45zbt2m4
. ga4ycdonne = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_j4d3hvhs43 ; o2y45zbt2m4 . dpkcgsd4ym = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_ceiu2lnwhi ;
o2y45zbt2m4 . pihfnbloym = ( ( hbv5azo3sw . Constant_Value_h300vfl4mv -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_htyiogkmpg ; o2y45zbt2m4 . a5drqsjnex = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_k42ekcf23x ; o2y45zbt2m4
. ndlxlyobzb = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_izo4ouweai ; o2y45zbt2m4 . h5gslldsar = ( (
hbv5azo3sw . Constant_Value_apsk02wc0m - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_bgeppzp5tr ; jdgqlncavi =
( ( hbv5azo3sw . Sensororientation_Value_g4fybr4ojz [ 0 ] * hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 0 ] + hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 1 ] * hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 2 ] * hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 3 ] * hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . apfxbvz3qg != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . apfxbvz3qg
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . apfxbvz3qg = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_g4fybr4ojz [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_g4fybr4ojz [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_g4fybr4ojz [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_g4fybr4ojz [ 3
] / chygdxgike ; o2y45zbt2m4 . c23uk112gn = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_crryondw0o ; o2y45zbt2m4 .
eq1sfn3btk = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_lzvj53au2u ; o2y45zbt2m4 . jhqy0zwmu3 = ( (
hbv5azo3sw . Constant_Value_oi0kxpowja - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_perzcljgjz ; o2y45zbt2m4
. iuke2eyfra = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_evjcc1eafd ; o2y45zbt2m4 . bw33cb1smq = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_gns40wabnm ;
o2y45zbt2m4 . kwmlekgm0w = ( ( hbv5azo3sw . Constant_Value_bx4ma4qdmb -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_i0hel0ofcl ; o2y45zbt2m4 . fjxh2v44zo = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_mniibtfrh4 ; o2y45zbt2m4
. ei2iplcloo = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_dsk352okyn ; o2y45zbt2m4 . dpw0lpwtco = ( (
hbv5azo3sw . Constant_Value_ihm1fmgdud - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_f4f4o3e0ao ; jdgqlncavi =
( ( hbv5azo3sw . Sensororientation_Value_bfbchbxuif [ 0 ] * hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 0 ] + hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 1 ] * hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 1 ] ) + hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 2 ] * hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 2 ] ) + hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 3 ] * hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) {
if ( hrxu5rhe3af . izrtkkf042 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . izrtkkf042
= 0 ; } chygdxgike = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { chygdxgike = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . izrtkkf042 = 1 ; } else { chygdxgike =
muDoubleScalarSqrt ( jdgqlncavi ) ; } jdgqlncavi = hbv5azo3sw .
Sensororientation_Value_bfbchbxuif [ 0 ] / chygdxgike ; jnvxrzr0ue =
hbv5azo3sw . Sensororientation_Value_bfbchbxuif [ 1 ] / chygdxgike ;
ix5sio1awm = hbv5azo3sw . Sensororientation_Value_bfbchbxuif [ 2 ] /
chygdxgike ; chygdxgike = hbv5azo3sw . Sensororientation_Value_bfbchbxuif [ 3
] / chygdxgike ; o2y45zbt2m4 . i01jbvlzhi = ( jnvxrzr0ue * ix5sio1awm +
jdgqlncavi * chygdxgike ) * hbv5azo3sw . Gain_Gain_l3rthal15j ; o2y45zbt2m4 .
ksqsb0wny4 = ( jnvxrzr0ue * chygdxgike - jdgqlncavi * ix5sio1awm ) *
hbv5azo3sw . Gain1_Gain_dizs3vyxgq ; o2y45zbt2m4 . d224533rgj = ( (
hbv5azo3sw . Constant_Value_j5awaeon0r - ix5sio1awm * ix5sio1awm ) -
chygdxgike * chygdxgike ) * hbv5azo3sw . Gain2_Gain_im22oggu52 ; o2y45zbt2m4
. d0h2bkxm2a = ( jnvxrzr0ue * ix5sio1awm - jdgqlncavi * chygdxgike ) *
hbv5azo3sw . Gain_Gain_pvyl4t2yw0 ; o2y45zbt2m4 . jpbug4sdyr = ( jdgqlncavi *
jnvxrzr0ue + ix5sio1awm * chygdxgike ) * hbv5azo3sw . Gain1_Gain_gqxohufbgj ;
o2y45zbt2m4 . llcjil2ppz = ( ( hbv5azo3sw . Constant_Value_a1zgpg42vr -
jnvxrzr0ue * jnvxrzr0ue ) - chygdxgike * chygdxgike ) * hbv5azo3sw .
Gain2_Gain_axoynd5pv4 ; o2y45zbt2m4 . kp0ottklv2 = ( jnvxrzr0ue * chygdxgike
+ jdgqlncavi * ix5sio1awm ) * hbv5azo3sw . Gain_Gain_gnoc2rqmdh ; o2y45zbt2m4
. d4h0eb221l = ( ix5sio1awm * chygdxgike - jdgqlncavi * jnvxrzr0ue ) *
hbv5azo3sw . Gain1_Gain_ckkbstydzz ; o2y45zbt2m4 . ajeydhy34x = ( (
hbv5azo3sw . Constant_Value_dbnrgxoczr - jnvxrzr0ue * jnvxrzr0ue ) -
ix5sio1awm * ix5sio1awm ) * hbv5azo3sw . Gain2_Gain_bq1ops2rb1 ; jdgqlncavi =
0.0 * hbv5azo3sw . Inertia_Value_ionitpmuar [ 0 ] ; ivzcgo0u3v_idx_1 = 0.0 *
hbv5azo3sw . Inertia_Value_ionitpmuar [ 1 ] ; ivzcgo0u3v_idx_2 = 0.0 *
hbv5azo3sw . Inertia_Value_ionitpmuar [ 2 ] ; o2y45zbt2m4 . kuqlbidad1 [ 0 ]
= 0.0 * ivzcgo0u3v_idx_2 - 0.0 * ivzcgo0u3v_idx_1 ; o2y45zbt2m4 . kuqlbidad1
[ 1 ] = 0.0 * jdgqlncavi - 0.0 * ivzcgo0u3v_idx_2 ; o2y45zbt2m4 . kuqlbidad1
[ 2 ] = 0.0 * ivzcgo0u3v_idx_1 - 0.0 * jdgqlncavi ; UNUSED_PARAMETER ( tid )
; } void MdlUpdate ( int_T tid ) { d3ndefizfv * _rtXAbsTol ; real_T dc ;
uint32_T numTicksToNextSampleHit ; uint32_T totalTicksInPeriod ; SimStruct *
S ; void * diag ; _rtXAbsTol = ( ( d3ndefizfv * ) ssGetAbsTolVector ( rtS ) )
; hrxu5rhe3af . ckit2etwje = 0 ; _rtXAbsTol -> ezm2ooaqjl [ 0 ] = hbv5azo3sw
. Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ezm2ooaqjl [ 1 ] = hbv5azo3sw
. Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ezm2ooaqjl [ 2 ] = hbv5azo3sw
. Integrator1_AbsoluteTolerance ; hrxu5rhe3af . irqzxzls3s = 0 ; hrxu5rhe3af
. btkpsszf3k = 0 ; hrxu5rhe3af . febtg0cpg5 = 0 ; if ( ssIsSampleHit ( rtS ,
10 , 0 ) ) { if ( hrxu5rhe3af . e2pe11pwxn ) { dc = o2y45zbt2m4 . op4p3vooky
[ 0 ] ; if ( ( hbv5azo3sw . PWM3_Period < 0.2 ) || ( muDoubleScalarIsNaN (
hbv5azo3sw . PWM3_Period ) || ( hbv5azo3sw . PWM3_Period == ( rtInf ) ) ) ) {
S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPGDiscMode" , 4 , 3 ,
"main/PWM3/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM3_Period , 2 ,
ssGetTaskTime ( rtS , 10 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ; }
if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . g24vxooz0v ) { S = rtS ; diag
= CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleGreaterThanOne" ,
3 , 2 , ssGetTaskTime ( rtS , 10 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 0 ] , 3 ,
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
[ 0 ] , 2 , hbv5azo3sw . PWM3_Period , 2 , ssGetTaskTime ( rtS , 10 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM3_Period + hbv5azo3sw . PWM3_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . e2pe11pwxn = false ; hrxu5rhe3af
. opg1lhdczb = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . e2pe11pwxn = true ; hrxu5rhe3af .
opg1lhdczb = true ; } hrxu5rhe3af . epbwbvrls5 = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . opg1lhdczb ) { dc =
o2y45zbt2m4 . op4p3vooky [ 0 ] ; if ( ( hbv5azo3sw . PWM3_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM3_Period ) || ( hbv5azo3sw .
PWM3_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM3/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM3_Period , 2 ,
ssGetTaskTime ( rtS , 10 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . l3pfqrb31o ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 10 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 0 ] , 3 ,
"main/PWM3/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . l3pfqrb31o = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM3_Period + hbv5azo3sw . PWM3_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , ( real_T ) ( dc
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ;
; } else if ( hrxu5rhe3af . epbwbvrls5 > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , hrxu5rhe3af .
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
= true ; } } if ( ssIsSampleHit ( rtS , 12 , 0 ) ) { if ( hrxu5rhe3af .
gxxnmirgwt ) { dc = o2y45zbt2m4 . op4p3vooky [ 2 ] ; if ( ( hbv5azo3sw .
PWM5_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM5_Period ) ||
( hbv5azo3sw . PWM5_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM5/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM5_Period ,
2 , ssGetTaskTime ( rtS , 12 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ;
} if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . dmkiyir0bc ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:warnDutyCycleGreaterThanOne" , 3 , 2 , ssGetTaskTime ( rtS ,
12 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 2 ] , 3 ,
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
[ 2 ] , 2 , hbv5azo3sw . PWM5_Period , 2 , ssGetTaskTime ( rtS , 12 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM5_Period + hbv5azo3sw . PWM5_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . gxxnmirgwt = false ; hrxu5rhe3af
. ayulg3mnvk = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . gxxnmirgwt = true ; hrxu5rhe3af .
ayulg3mnvk = true ; } hrxu5rhe3af . curihjwvdq = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . ayulg3mnvk ) { dc =
o2y45zbt2m4 . op4p3vooky [ 2 ] ; if ( ( hbv5azo3sw . PWM5_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM5_Period ) || ( hbv5azo3sw .
PWM5_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM5/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM5_Period , 2 ,
ssGetTaskTime ( rtS , 12 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . nlifgx53vj ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 12 ) , 2 , o2y45zbt2m4 . op4p3vooky [ 2 ] , 3 ,
"main/PWM5/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . nlifgx53vj = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM5_Period + hbv5azo3sw . PWM5_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T ) ( dc
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ;
; } else if ( hrxu5rhe3af . curihjwvdq > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , hrxu5rhe3af .
curihjwvdq ) ; ; } hrxu5rhe3af . gxxnmirgwt = true ; hrxu5rhe3af . ayulg3mnvk
= true ; } } if ( ssIsSampleHit ( rtS , 8 , 0 ) ) { if ( hrxu5rhe3af .
cozmdzu0w1 ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; if ( ( hbv5azo3sw .
PWM_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM_Period ) || (
hbv5azo3sw . PWM_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM_Period , 2
, ssGetTaskTime ( rtS , 8 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ; }
if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . ckwrsfgl5j ) { S = rtS ; diag
= CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleGreaterThanOne" ,
3 , 2 , ssGetTaskTime ( rtS , 8 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 0 ] , 3 ,
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
[ 0 ] , 2 , hbv5azo3sw . PWM_Period , 2 , ssGetTaskTime ( rtS , 8 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM_Period + hbv5azo3sw . PWM_Period )
/ 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . cozmdzu0w1 = false ; hrxu5rhe3af
. cnj1jumxqg = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . cozmdzu0w1 = true ; hrxu5rhe3af .
cnj1jumxqg = true ; } hrxu5rhe3af . oumjhalsqc = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . cnj1jumxqg ) { dc =
o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; if ( ( hbv5azo3sw . PWM_Period <= 0.0 ) || (
muDoubleScalarIsNaN ( hbv5azo3sw . PWM_Period ) || ( hbv5azo3sw . PWM_Period
== ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM_Period , 2 ,
ssGetTaskTime ( rtS , 8 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . e2cixfebva ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 8 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 0 ] , 3 ,
"main/PWM/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . e2cixfebva = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM_Period + hbv5azo3sw . PWM_Period )
/ 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , ( real_T ) ( dc <
0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ; ;
} else if ( hrxu5rhe3af . oumjhalsqc > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , hrxu5rhe3af .
oumjhalsqc ) ; ; } hrxu5rhe3af . cozmdzu0w1 = true ; hrxu5rhe3af . cnj1jumxqg
= true ; } } if ( ssIsSampleHit ( rtS , 9 , 0 ) ) { if ( hrxu5rhe3af .
i5keywnlob ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 1 ] ; if ( ( hbv5azo3sw .
PWM1_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw . PWM1_Period ) ||
( hbv5azo3sw . PWM1_Period == ( rtInf ) ) ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:InvInputPeriodForVPGDiscMode" ,
4 , 3 , "main/PWM1/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM1_Period ,
2 , ssGetTaskTime ( rtS , 9 ) , 2 , 0.1 ) ; rt_ssSet_slErrMsg ( S , diag ) ;
} if ( dc > 1.0 ) { dc = 1.0 ; if ( hrxu5rhe3af . hbtp1swogp ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:warnDutyCycleGreaterThanOne" , 3 , 2 , ssGetTaskTime ( rtS ,
9 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 1 ] , 3 ,
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
[ 1 ] , 2 , hbv5azo3sw . PWM1_Period , 2 , ssGetTaskTime ( rtS , 9 ) ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM1_Period + hbv5azo3sw . PWM1_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc
: ( uint32_T ) dc ; if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . i5keywnlob = false ; hrxu5rhe3af
. ae5papqlus = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . i5keywnlob = true ; hrxu5rhe3af .
ae5papqlus = true ; } hrxu5rhe3af . o2yvavvn5c = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . ae5papqlus ) { dc =
o2y45zbt2m4 . c1cfxe21zn [ 1 ] ; if ( ( hbv5azo3sw . PWM1_Period <= 0.0 ) ||
( muDoubleScalarIsNaN ( hbv5azo3sw . PWM1_Period ) || ( hbv5azo3sw .
PWM1_Period == ( rtInf ) ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:InvInputPeriodForVPG" , 3 , 3 ,
"main/PWM1/Variable Pulse Generator" , 2 , hbv5azo3sw . PWM1_Period , 2 ,
ssGetTaskTime ( rtS , 9 ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; } if ( ( dc <
0.0 ) && hrxu5rhe3af . ct2fu2r1og ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:warnDutyCycleLessThanZero" , 3 ,
2 , ssGetTaskTime ( rtS , 9 ) , 2 , o2y45zbt2m4 . c1cfxe21zn [ 1 ] , 3 ,
"main/PWM1/Variable Pulse Generator" ) ; rt_ssReportDiagnosticAsWarning ( S ,
diag ) ; hrxu5rhe3af . ct2fu2r1og = false ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * hbv5azo3sw . PWM1_Period + hbv5azo3sw . PWM1_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
dc = 0.0 ; } else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T ) ( dc <
0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ) ) ; ;
} else if ( hrxu5rhe3af . o2yvavvn5c > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , hrxu5rhe3af .
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
= true ; } } _rtXAbsTol -> li1obxdvy3 [ 0 ] = hbv5azo3sw .
Integrator_AbsoluteTolerance ; _rtXAbsTol -> li1obxdvy3 [ 1 ] = hbv5azo3sw .
Integrator_AbsoluteTolerance ; _rtXAbsTol -> li1obxdvy3 [ 2 ] = hbv5azo3sw .
Integrator_AbsoluteTolerance ; hrxu5rhe3af . g0uzej5lf1 = 0 ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID13 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { hgblgktduh *
_rtXdot ; _rtXdot = ( ( hgblgktduh * ) ssGetdX ( rtS ) ) ; _rtXdot ->
kbqjtzizsx [ 0 ] = o2y45zbt2m4 . jg5xwtwjpe [ 0 ] ; _rtXdot -> ezm2ooaqjl [ 0
] = o2y45zbt2m4 . hnvlhc15na [ 0 ] ; _rtXdot -> kbqjtzizsx [ 1 ] =
o2y45zbt2m4 . jg5xwtwjpe [ 1 ] ; _rtXdot -> ezm2ooaqjl [ 1 ] = o2y45zbt2m4 .
hnvlhc15na [ 1 ] ; _rtXdot -> kbqjtzizsx [ 2 ] = o2y45zbt2m4 . jg5xwtwjpe [ 2
] ; _rtXdot -> ezm2ooaqjl [ 2 ] = o2y45zbt2m4 . hnvlhc15na [ 2 ] ; _rtXdot ->
bcrrky3g2k [ 0 ] = o2y45zbt2m4 . bwu3hh5pg3 [ 0 ] ; _rtXdot -> bcrrky3g2k [ 1
] = o2y45zbt2m4 . bwu3hh5pg3 [ 1 ] ; _rtXdot -> bcrrky3g2k [ 2 ] =
o2y45zbt2m4 . bwu3hh5pg3 [ 2 ] ; _rtXdot -> bcrrky3g2k [ 3 ] = o2y45zbt2m4 .
bwu3hh5pg3 [ 3 ] ; _rtXdot -> cjfebnqw1p = o2y45zbt2m4 . iunb01rvwp ; _rtXdot
-> li1obxdvy3 [ 0 ] = o2y45zbt2m4 . gbu5abs2sz [ 0 ] ; _rtXdot -> li1obxdvy3
[ 1 ] = o2y45zbt2m4 . gbu5abs2sz [ 1 ] ; _rtXdot -> li1obxdvy3 [ 2 ] =
o2y45zbt2m4 . gbu5abs2sz [ 2 ] ; } void MdlProjection ( void ) { } void
MdlZeroCrossings ( void ) { p0mddzrq0f * _rtZCSV ; _rtZCSV = ( ( p0mddzrq0f *
) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> pe0u3adwg1 = o2y45zbt2m4 .
kwx5xj2ngl - hbv5azo3sw . NormalizeVector_maxzero_idjlccn1tr ; _rtZCSV ->
aojfxgxmdw = o2y45zbt2m4 . ngj1laz0jn - hbv5azo3sw . NormalizeVector1_maxzero
; _rtZCSV -> jzsx34kglq = o2y45zbt2m4 . gnhb3isuhw - hbv5azo3sw .
NormalizeVector3_maxzero ; _rtZCSV -> pd3debhlnc = o2y45zbt2m4 . isiqvhsvds -
hbv5azo3sw . NormalizeVector4_maxzero ; _rtZCSV -> ln40dtmdft = 0.0 ; if (
o2y45zbt2m4 . jgyobyjg0x > 0.0 ) { _rtZCSV -> ln40dtmdft = 1.0 ; } { real_T *
zcsv = & ( ( ( p0mddzrq0f * ) ssGetSolverZcSignalVector ( rtS ) ) ->
cuaynzimio [ 0 ] ) ; int_T i ; for ( i = 0 ; i < 5 ; i ++ ) { zcsv [ i ] =
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
) , sizeof ( o2y45zbt2m4 ) ) ; { static const char * rtdwDataFieldNames [ 171
] = { "hrxu5rhe3af.p11kqkd5tq" , "hrxu5rhe3af.iwulztso32" ,
"hrxu5rhe3af.epbwbvrls5" , "hrxu5rhe3af.fytmukko2d" ,
"hrxu5rhe3af.curihjwvdq" , "hrxu5rhe3af.oumjhalsqc" ,
"hrxu5rhe3af.o2yvavvn5c" , "hrxu5rhe3af.hz2n5lmwzt" ,
"hrxu5rhe3af.buggjk4l1n" , "hrxu5rhe3af.j3ergpk3vu" ,
"hrxu5rhe3af.nydzqlwwnn" , "hrxu5rhe3af.bdotsga2iv" ,
"hrxu5rhe3af.djim5bpjvv" , "hrxu5rhe3af.lqkanthoxg" ,
"hrxu5rhe3af.amd2k325eq" , "hrxu5rhe3af.ocwejjhsae" ,
"hrxu5rhe3af.lo1lp4gtvt" , "hrxu5rhe3af.cqi0nadh0g" ,
"hrxu5rhe3af.popvcsddq3" , "hrxu5rhe3af.e0e33jihoi" ,
"hrxu5rhe3af.bkcg3g1zoi" , "hrxu5rhe3af.cwsd2g5w2m" ,
"hrxu5rhe3af.ebpr404rrn" , "hrxu5rhe3af.pbvxmucjj5" ,
"hrxu5rhe3af.h31khffg0k" , "hrxu5rhe3af.alynay3xx0" ,
"hrxu5rhe3af.atmgtfljnh" , "hrxu5rhe3af.n10hslmo2a" ,
"hrxu5rhe3af.pa2kyvt1uy" , "hrxu5rhe3af.j13dkj5h0s" ,
"hrxu5rhe3af.p3xkfovqki" , "hrxu5rhe3af.k40rhthviy" ,
"hrxu5rhe3af.d1wjrwas1u" , "hrxu5rhe3af.jjpbiyjnrh" ,
"hrxu5rhe3af.cmfzrxdc11" , "hrxu5rhe3af.impwbrb5ul" ,
"hrxu5rhe3af.ivdqhywypm" , "hrxu5rhe3af.ck30ytigtq" ,
"hrxu5rhe3af.ckit2etwje" , "hrxu5rhe3af.irqzxzls3s" ,
"hrxu5rhe3af.btkpsszf3k" , "hrxu5rhe3af.febtg0cpg5" ,
"hrxu5rhe3af.g0uzej5lf1" , "hrxu5rhe3af.fdyoeqkdqi" ,
"hrxu5rhe3af.c3m4fwdfd0" , "hrxu5rhe3af.kgzb050drs" ,
"hrxu5rhe3af.o3hynk2drm" , "hrxu5rhe3af.pm5qqx3zuz" ,
"hrxu5rhe3af.omdgfehj41" , "hrxu5rhe3af.hsphg0gng2" ,
"hrxu5rhe3af.mdstjcyjyx" , "hrxu5rhe3af.ojltdhe2we" ,
"hrxu5rhe3af.iwklra2msj" , "hrxu5rhe3af.mt3gx422x1" ,
"hrxu5rhe3af.pug0coupbp" , "hrxu5rhe3af.jeg35werh5" ,
"hrxu5rhe3af.kz1j0tnmva" , "hrxu5rhe3af.lq5ek0jlzd" ,
"hrxu5rhe3af.goaeac5x5p" , "hrxu5rhe3af.ltjhqpbfjo" ,
"hrxu5rhe3af.dnqubg5s4k" , "hrxu5rhe3af.bze1flsb15" ,
"hrxu5rhe3af.pidbwsidci" , "hrxu5rhe3af.ji1vknz2dr" ,
"hrxu5rhe3af.gltmjlakux" , "hrxu5rhe3af.pwifaixjxb" ,
"hrxu5rhe3af.haxpv4vq51" , "hrxu5rhe3af.hxjxms0byf" ,
"hrxu5rhe3af.jij01p0qtw" , "hrxu5rhe3af.ihprlm0zdr" ,
"hrxu5rhe3af.jgquwrgfhd" , "hrxu5rhe3af.o2i4021xwh" ,
"hrxu5rhe3af.iqs2nrdyqs" , "hrxu5rhe3af.p4n3550tai" ,
"hrxu5rhe3af.nqcixj2cfc" , "hrxu5rhe3af.gcz34svd4r" ,
"hrxu5rhe3af.anszycztem" , "hrxu5rhe3af.ane43mgfgs" ,
"hrxu5rhe3af.hkxlm4qdro" , "hrxu5rhe3af.fnu1tvdbyx" ,
"hrxu5rhe3af.fq3jja1aol" , "hrxu5rhe3af.nbmuo2yzhf" ,
"hrxu5rhe3af.ev5en1vf5z" , "hrxu5rhe3af.btkemo1frv" ,
"hrxu5rhe3af.cag24nmzzp" , "hrxu5rhe3af.lptvxysd1c" ,
"hrxu5rhe3af.mt3v1tg0wr" , "hrxu5rhe3af.apfxbvz3qg" ,
"hrxu5rhe3af.izrtkkf042" , "hrxu5rhe3af.olb1gflryv" ,
"hrxu5rhe3af.noecaey35j" , "hrxu5rhe3af.jkbsaxmqju" ,
"hrxu5rhe3af.fnnqkeqpmg" , "hrxu5rhe3af.j1uacuucpv" ,
"hrxu5rhe3af.cbsmbddbag" , "hrxu5rhe3af.bnzh2jzuy5" ,
"hrxu5rhe3af.pmgcir2p13" , "hrxu5rhe3af.obuyxhugh2" ,
"hrxu5rhe3af.h5fod2fj2q" , "hrxu5rhe3af.hnbwguuonj" ,
"hrxu5rhe3af.fimtx0wf43" , "hrxu5rhe3af.jxtww5tjxt" ,
"hrxu5rhe3af.as5m3dr43z" , "hrxu5rhe3af.gtaj4wmjuq" ,
"hrxu5rhe3af.a0tdfwofzg" , "hrxu5rhe3af.ikwlyg3xde" ,
"hrxu5rhe3af.nw1rjo5a2w" , "hrxu5rhe3af.kg1shmc2lb" ,
"hrxu5rhe3af.duwlcgfzra" , "hrxu5rhe3af.nblxudhi3p" ,
"hrxu5rhe3af.kunox0dfsg" , "hrxu5rhe3af.em2alijyyt" ,
"hrxu5rhe3af.mvvvr4qg3a" , "hrxu5rhe3af.mhqfolepov" ,
"hrxu5rhe3af.lx00lot5dg" , "hrxu5rhe3af.lfywehbssn" ,
"hrxu5rhe3af.hka1eluehh" , "hrxu5rhe3af.km2naim34i" ,
"hrxu5rhe3af.hp3mldh5cv" , "hrxu5rhe3af.obn5brrvbj" ,
"hrxu5rhe3af.jaivnsj01n" , "hrxu5rhe3af.nmzrmeybue" ,
"hrxu5rhe3af.olmlfoy1xv" , "hrxu5rhe3af.px2vytyfy2" ,
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
"hrxu5rhe3af.ejudse0oqw" , "hrxu5rhe3af.oxb0jyodnm.dmloqodxqz" ,
"hrxu5rhe3af.oxb0jyodnm.k5qbhboafq" , "hrxu5rhe3af.bghekfjhrb.fbhgjn50of" ,
"hrxu5rhe3af.bghekfjhrb.ogcbvjea2u" , "hrxu5rhe3af.iyw4crazdc.cyzypjm5pc" ,
"hrxu5rhe3af.iyw4crazdc.dmwbxxl3xx" , "hrxu5rhe3af.npgo12zmto.emkgbeqqs5" ,
"hrxu5rhe3af.npgo12zmto.cfhkcft2t2" , "hrxu5rhe3af.prxbfmvl1en.dmloqodxqz" ,
"hrxu5rhe3af.prxbfmvl1en.k5qbhboafq" , "hrxu5rhe3af.n53cqmpcloj.fbhgjn50of" ,
"hrxu5rhe3af.n53cqmpcloj.ogcbvjea2u" , "hrxu5rhe3af.bqx0vc3mudn.cyzypjm5pc" ,
"hrxu5rhe3af.bqx0vc3mudn.dmwbxxl3xx" , "hrxu5rhe3af.bbjtuydtdkk.emkgbeqqs5" ,
"hrxu5rhe3af.bbjtuydtdkk.cfhkcft2t2" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 171 , rtdwDataFieldNames ) ; { mxArray *
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
hrxu5rhe3af . buggjk4l1n ) , sizeof ( hrxu5rhe3af . buggjk4l1n ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
hrxu5rhe3af . j3ergpk3vu ) , sizeof ( hrxu5rhe3af . j3ergpk3vu ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
hrxu5rhe3af . nydzqlwwnn ) , sizeof ( hrxu5rhe3af . nydzqlwwnn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
hrxu5rhe3af . bdotsga2iv ) , sizeof ( hrxu5rhe3af . bdotsga2iv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
hrxu5rhe3af . djim5bpjvv ) , sizeof ( hrxu5rhe3af . djim5bpjvv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
hrxu5rhe3af . lqkanthoxg ) , sizeof ( hrxu5rhe3af . lqkanthoxg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
hrxu5rhe3af . amd2k325eq ) , sizeof ( hrxu5rhe3af . amd2k325eq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
hrxu5rhe3af . ocwejjhsae ) , sizeof ( hrxu5rhe3af . ocwejjhsae ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
hrxu5rhe3af . lo1lp4gtvt ) , sizeof ( hrxu5rhe3af . lo1lp4gtvt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
hrxu5rhe3af . cqi0nadh0g ) , sizeof ( hrxu5rhe3af . cqi0nadh0g ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
hrxu5rhe3af . popvcsddq3 ) , sizeof ( hrxu5rhe3af . popvcsddq3 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
hrxu5rhe3af . e0e33jihoi ) , sizeof ( hrxu5rhe3af . e0e33jihoi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
hrxu5rhe3af . bkcg3g1zoi ) , sizeof ( hrxu5rhe3af . bkcg3g1zoi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
hrxu5rhe3af . cwsd2g5w2m ) , sizeof ( hrxu5rhe3af . cwsd2g5w2m ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
hrxu5rhe3af . ebpr404rrn ) , sizeof ( hrxu5rhe3af . ebpr404rrn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
hrxu5rhe3af . pbvxmucjj5 ) , sizeof ( hrxu5rhe3af . pbvxmucjj5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
hrxu5rhe3af . h31khffg0k ) , sizeof ( hrxu5rhe3af . h31khffg0k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
hrxu5rhe3af . alynay3xx0 ) , sizeof ( hrxu5rhe3af . alynay3xx0 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
hrxu5rhe3af . atmgtfljnh ) , sizeof ( hrxu5rhe3af . atmgtfljnh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
hrxu5rhe3af . n10hslmo2a ) , sizeof ( hrxu5rhe3af . n10hslmo2a ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
hrxu5rhe3af . pa2kyvt1uy ) , sizeof ( hrxu5rhe3af . pa2kyvt1uy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
hrxu5rhe3af . j13dkj5h0s ) , sizeof ( hrxu5rhe3af . j13dkj5h0s ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
hrxu5rhe3af . p3xkfovqki ) , sizeof ( hrxu5rhe3af . p3xkfovqki ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
hrxu5rhe3af . k40rhthviy ) , sizeof ( hrxu5rhe3af . k40rhthviy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
hrxu5rhe3af . d1wjrwas1u ) , sizeof ( hrxu5rhe3af . d1wjrwas1u ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
hrxu5rhe3af . jjpbiyjnrh ) , sizeof ( hrxu5rhe3af . jjpbiyjnrh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
hrxu5rhe3af . cmfzrxdc11 ) , sizeof ( hrxu5rhe3af . cmfzrxdc11 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
hrxu5rhe3af . impwbrb5ul ) , sizeof ( hrxu5rhe3af . impwbrb5ul ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
hrxu5rhe3af . ivdqhywypm ) , sizeof ( hrxu5rhe3af . ivdqhywypm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
hrxu5rhe3af . ck30ytigtq ) , sizeof ( hrxu5rhe3af . ck30ytigtq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
hrxu5rhe3af . ckit2etwje ) , sizeof ( hrxu5rhe3af . ckit2etwje ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
hrxu5rhe3af . irqzxzls3s ) , sizeof ( hrxu5rhe3af . irqzxzls3s ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
hrxu5rhe3af . btkpsszf3k ) , sizeof ( hrxu5rhe3af . btkpsszf3k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
hrxu5rhe3af . febtg0cpg5 ) , sizeof ( hrxu5rhe3af . febtg0cpg5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
hrxu5rhe3af . g0uzej5lf1 ) , sizeof ( hrxu5rhe3af . g0uzej5lf1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
hrxu5rhe3af . fdyoeqkdqi ) , sizeof ( hrxu5rhe3af . fdyoeqkdqi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
hrxu5rhe3af . c3m4fwdfd0 ) , sizeof ( hrxu5rhe3af . c3m4fwdfd0 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
hrxu5rhe3af . kgzb050drs ) , sizeof ( hrxu5rhe3af . kgzb050drs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
hrxu5rhe3af . o3hynk2drm ) , sizeof ( hrxu5rhe3af . o3hynk2drm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
hrxu5rhe3af . pm5qqx3zuz ) , sizeof ( hrxu5rhe3af . pm5qqx3zuz ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
hrxu5rhe3af . omdgfehj41 ) , sizeof ( hrxu5rhe3af . omdgfehj41 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
hrxu5rhe3af . hsphg0gng2 ) , sizeof ( hrxu5rhe3af . hsphg0gng2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
hrxu5rhe3af . mdstjcyjyx ) , sizeof ( hrxu5rhe3af . mdstjcyjyx ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
hrxu5rhe3af . ojltdhe2we ) , sizeof ( hrxu5rhe3af . ojltdhe2we ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
hrxu5rhe3af . iwklra2msj ) , sizeof ( hrxu5rhe3af . iwklra2msj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
hrxu5rhe3af . mt3gx422x1 ) , sizeof ( hrxu5rhe3af . mt3gx422x1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
hrxu5rhe3af . pug0coupbp ) , sizeof ( hrxu5rhe3af . pug0coupbp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
hrxu5rhe3af . jeg35werh5 ) , sizeof ( hrxu5rhe3af . jeg35werh5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
hrxu5rhe3af . kz1j0tnmva ) , sizeof ( hrxu5rhe3af . kz1j0tnmva ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
hrxu5rhe3af . lq5ek0jlzd ) , sizeof ( hrxu5rhe3af . lq5ek0jlzd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
hrxu5rhe3af . goaeac5x5p ) , sizeof ( hrxu5rhe3af . goaeac5x5p ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
hrxu5rhe3af . ltjhqpbfjo ) , sizeof ( hrxu5rhe3af . ltjhqpbfjo ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
hrxu5rhe3af . dnqubg5s4k ) , sizeof ( hrxu5rhe3af . dnqubg5s4k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
hrxu5rhe3af . bze1flsb15 ) , sizeof ( hrxu5rhe3af . bze1flsb15 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
hrxu5rhe3af . pidbwsidci ) , sizeof ( hrxu5rhe3af . pidbwsidci ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
hrxu5rhe3af . ji1vknz2dr ) , sizeof ( hrxu5rhe3af . ji1vknz2dr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
hrxu5rhe3af . gltmjlakux ) , sizeof ( hrxu5rhe3af . gltmjlakux ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
hrxu5rhe3af . pwifaixjxb ) , sizeof ( hrxu5rhe3af . pwifaixjxb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
hrxu5rhe3af . haxpv4vq51 ) , sizeof ( hrxu5rhe3af . haxpv4vq51 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
hrxu5rhe3af . hxjxms0byf ) , sizeof ( hrxu5rhe3af . hxjxms0byf ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & (
hrxu5rhe3af . jij01p0qtw ) , sizeof ( hrxu5rhe3af . jij01p0qtw ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & (
hrxu5rhe3af . ihprlm0zdr ) , sizeof ( hrxu5rhe3af . ihprlm0zdr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & (
hrxu5rhe3af . jgquwrgfhd ) , sizeof ( hrxu5rhe3af . jgquwrgfhd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void * ) & (
hrxu5rhe3af . o2i4021xwh ) , sizeof ( hrxu5rhe3af . o2i4021xwh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void * ) & (
hrxu5rhe3af . iqs2nrdyqs ) , sizeof ( hrxu5rhe3af . iqs2nrdyqs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void * ) & (
hrxu5rhe3af . p4n3550tai ) , sizeof ( hrxu5rhe3af . p4n3550tai ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void * ) & (
hrxu5rhe3af . nqcixj2cfc ) , sizeof ( hrxu5rhe3af . nqcixj2cfc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void * ) & (
hrxu5rhe3af . gcz34svd4r ) , sizeof ( hrxu5rhe3af . gcz34svd4r ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void * ) & (
hrxu5rhe3af . anszycztem ) , sizeof ( hrxu5rhe3af . anszycztem ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void * ) & (
hrxu5rhe3af . ane43mgfgs ) , sizeof ( hrxu5rhe3af . ane43mgfgs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void * ) & (
hrxu5rhe3af . hkxlm4qdro ) , sizeof ( hrxu5rhe3af . hkxlm4qdro ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void * ) & (
hrxu5rhe3af . fnu1tvdbyx ) , sizeof ( hrxu5rhe3af . fnu1tvdbyx ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void * ) & (
hrxu5rhe3af . fq3jja1aol ) , sizeof ( hrxu5rhe3af . fq3jja1aol ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void * ) & (
hrxu5rhe3af . nbmuo2yzhf ) , sizeof ( hrxu5rhe3af . nbmuo2yzhf ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void * ) & (
hrxu5rhe3af . ev5en1vf5z ) , sizeof ( hrxu5rhe3af . ev5en1vf5z ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void * ) & (
hrxu5rhe3af . btkemo1frv ) , sizeof ( hrxu5rhe3af . btkemo1frv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void * ) & (
hrxu5rhe3af . cag24nmzzp ) , sizeof ( hrxu5rhe3af . cag24nmzzp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const void * ) & (
hrxu5rhe3af . lptvxysd1c ) , sizeof ( hrxu5rhe3af . lptvxysd1c ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const void * ) & (
hrxu5rhe3af . mt3v1tg0wr ) , sizeof ( hrxu5rhe3af . mt3v1tg0wr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const void * ) & (
hrxu5rhe3af . apfxbvz3qg ) , sizeof ( hrxu5rhe3af . apfxbvz3qg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const void * ) & (
hrxu5rhe3af . izrtkkf042 ) , sizeof ( hrxu5rhe3af . izrtkkf042 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const void * ) & (
hrxu5rhe3af . olb1gflryv ) , sizeof ( hrxu5rhe3af . olb1gflryv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const void * ) & (
hrxu5rhe3af . noecaey35j ) , sizeof ( hrxu5rhe3af . noecaey35j ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const void * ) & (
hrxu5rhe3af . jkbsaxmqju ) , sizeof ( hrxu5rhe3af . jkbsaxmqju ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 92 , ( const void * ) & (
hrxu5rhe3af . fnnqkeqpmg ) , sizeof ( hrxu5rhe3af . fnnqkeqpmg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 93 , ( const void * ) & (
hrxu5rhe3af . j1uacuucpv ) , sizeof ( hrxu5rhe3af . j1uacuucpv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 94 , ( const void * ) & (
hrxu5rhe3af . cbsmbddbag ) , sizeof ( hrxu5rhe3af . cbsmbddbag ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 95 , ( const void * ) & (
hrxu5rhe3af . bnzh2jzuy5 ) , sizeof ( hrxu5rhe3af . bnzh2jzuy5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 96 , ( const void * ) & (
hrxu5rhe3af . pmgcir2p13 ) , sizeof ( hrxu5rhe3af . pmgcir2p13 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 97 , ( const void * ) & (
hrxu5rhe3af . obuyxhugh2 ) , sizeof ( hrxu5rhe3af . obuyxhugh2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 98 , ( const void * ) & (
hrxu5rhe3af . h5fod2fj2q ) , sizeof ( hrxu5rhe3af . h5fod2fj2q ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 99 , ( const void * ) & (
hrxu5rhe3af . hnbwguuonj ) , sizeof ( hrxu5rhe3af . hnbwguuonj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 100 , ( const void * ) & (
hrxu5rhe3af . fimtx0wf43 ) , sizeof ( hrxu5rhe3af . fimtx0wf43 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 101 , ( const void * ) & (
hrxu5rhe3af . jxtww5tjxt ) , sizeof ( hrxu5rhe3af . jxtww5tjxt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 102 , ( const void * ) & (
hrxu5rhe3af . as5m3dr43z ) , sizeof ( hrxu5rhe3af . as5m3dr43z ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 103 , ( const void * ) & (
hrxu5rhe3af . gtaj4wmjuq ) , sizeof ( hrxu5rhe3af . gtaj4wmjuq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 104 , ( const void * ) & (
hrxu5rhe3af . a0tdfwofzg ) , sizeof ( hrxu5rhe3af . a0tdfwofzg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 105 , ( const void * ) & (
hrxu5rhe3af . ikwlyg3xde ) , sizeof ( hrxu5rhe3af . ikwlyg3xde ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 106 , ( const void * ) & (
hrxu5rhe3af . nw1rjo5a2w ) , sizeof ( hrxu5rhe3af . nw1rjo5a2w ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 107 , ( const void * ) & (
hrxu5rhe3af . kg1shmc2lb ) , sizeof ( hrxu5rhe3af . kg1shmc2lb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 108 , ( const void * ) & (
hrxu5rhe3af . duwlcgfzra ) , sizeof ( hrxu5rhe3af . duwlcgfzra ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 109 , ( const void * ) & (
hrxu5rhe3af . nblxudhi3p ) , sizeof ( hrxu5rhe3af . nblxudhi3p ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 110 , ( const void * ) & (
hrxu5rhe3af . kunox0dfsg ) , sizeof ( hrxu5rhe3af . kunox0dfsg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 111 , ( const void * ) & (
hrxu5rhe3af . em2alijyyt ) , sizeof ( hrxu5rhe3af . em2alijyyt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 112 , ( const void * ) & (
hrxu5rhe3af . mvvvr4qg3a ) , sizeof ( hrxu5rhe3af . mvvvr4qg3a ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 113 , ( const void * ) & (
hrxu5rhe3af . mhqfolepov ) , sizeof ( hrxu5rhe3af . mhqfolepov ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 114 , ( const void * ) & (
hrxu5rhe3af . lx00lot5dg ) , sizeof ( hrxu5rhe3af . lx00lot5dg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 115 , ( const void * ) & (
hrxu5rhe3af . lfywehbssn ) , sizeof ( hrxu5rhe3af . lfywehbssn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 116 , ( const void * ) & (
hrxu5rhe3af . hka1eluehh ) , sizeof ( hrxu5rhe3af . hka1eluehh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 117 , ( const void * ) & (
hrxu5rhe3af . km2naim34i ) , sizeof ( hrxu5rhe3af . km2naim34i ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 118 , ( const void * ) & (
hrxu5rhe3af . hp3mldh5cv ) , sizeof ( hrxu5rhe3af . hp3mldh5cv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 119 , ( const void * ) & (
hrxu5rhe3af . obn5brrvbj ) , sizeof ( hrxu5rhe3af . obn5brrvbj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 120 , ( const void * ) & (
hrxu5rhe3af . jaivnsj01n ) , sizeof ( hrxu5rhe3af . jaivnsj01n ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 121 , ( const void * ) & (
hrxu5rhe3af . nmzrmeybue ) , sizeof ( hrxu5rhe3af . nmzrmeybue ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 122 , ( const void * ) & (
hrxu5rhe3af . olmlfoy1xv ) , sizeof ( hrxu5rhe3af . olmlfoy1xv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 123 , ( const void * ) & (
hrxu5rhe3af . px2vytyfy2 ) , sizeof ( hrxu5rhe3af . px2vytyfy2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 124 , ( const void * ) & (
hrxu5rhe3af . e2pe11pwxn ) , sizeof ( hrxu5rhe3af . e2pe11pwxn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 125 , ( const void * ) & (
hrxu5rhe3af . opg1lhdczb ) , sizeof ( hrxu5rhe3af . opg1lhdczb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 126 , ( const void * ) & (
hrxu5rhe3af . g24vxooz0v ) , sizeof ( hrxu5rhe3af . g24vxooz0v ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 127 , ( const void * ) & (
hrxu5rhe3af . l3pfqrb31o ) , sizeof ( hrxu5rhe3af . l3pfqrb31o ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 128 , ( const void * ) & (
hrxu5rhe3af . jiqhomoo0v ) , sizeof ( hrxu5rhe3af . jiqhomoo0v ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 129 , ( const void * ) & (
hrxu5rhe3af . jmjdutrgwi ) , sizeof ( hrxu5rhe3af . jmjdutrgwi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 130 , ( const void * ) & (
hrxu5rhe3af . gcdlpfr3qr ) , sizeof ( hrxu5rhe3af . gcdlpfr3qr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 131 , ( const void * ) & (
hrxu5rhe3af . bhx2bk5lkm ) , sizeof ( hrxu5rhe3af . bhx2bk5lkm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 132 , ( const void * ) & (
hrxu5rhe3af . gxxnmirgwt ) , sizeof ( hrxu5rhe3af . gxxnmirgwt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 133 , ( const void * ) & (
hrxu5rhe3af . ayulg3mnvk ) , sizeof ( hrxu5rhe3af . ayulg3mnvk ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 134 , ( const void * ) & (
hrxu5rhe3af . dmkiyir0bc ) , sizeof ( hrxu5rhe3af . dmkiyir0bc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 135 , ( const void * ) & (
hrxu5rhe3af . nlifgx53vj ) , sizeof ( hrxu5rhe3af . nlifgx53vj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 136 , ( const void * ) & (
hrxu5rhe3af . cozmdzu0w1 ) , sizeof ( hrxu5rhe3af . cozmdzu0w1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 137 , ( const void * ) & (
hrxu5rhe3af . cnj1jumxqg ) , sizeof ( hrxu5rhe3af . cnj1jumxqg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 138 , ( const void * ) & (
hrxu5rhe3af . ckwrsfgl5j ) , sizeof ( hrxu5rhe3af . ckwrsfgl5j ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 139 , ( const void * ) & (
hrxu5rhe3af . e2cixfebva ) , sizeof ( hrxu5rhe3af . e2cixfebva ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 140 , ( const void * ) & (
hrxu5rhe3af . i5keywnlob ) , sizeof ( hrxu5rhe3af . i5keywnlob ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 141 , ( const void * ) & (
hrxu5rhe3af . ae5papqlus ) , sizeof ( hrxu5rhe3af . ae5papqlus ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 142 , ( const void * ) & (
hrxu5rhe3af . hbtp1swogp ) , sizeof ( hrxu5rhe3af . hbtp1swogp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 143 , ( const void * ) & (
hrxu5rhe3af . ct2fu2r1og ) , sizeof ( hrxu5rhe3af . ct2fu2r1og ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 144 , ( const void * ) & (
hrxu5rhe3af . mp3yltewxi ) , sizeof ( hrxu5rhe3af . mp3yltewxi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 145 , ( const void * ) & (
hrxu5rhe3af . brmqgwecvy ) , sizeof ( hrxu5rhe3af . brmqgwecvy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 146 , ( const void * ) & (
hrxu5rhe3af . kjzbuo2ejd ) , sizeof ( hrxu5rhe3af . kjzbuo2ejd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 147 , ( const void * ) & (
hrxu5rhe3af . ddgb0ny2wp ) , sizeof ( hrxu5rhe3af . ddgb0ny2wp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 148 , ( const void * ) & (
hrxu5rhe3af . ozme2zffq1 ) , sizeof ( hrxu5rhe3af . ozme2zffq1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 149 , ( const void * ) & (
hrxu5rhe3af . pqxjs5shcl ) , sizeof ( hrxu5rhe3af . pqxjs5shcl ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 150 , ( const void * ) & (
hrxu5rhe3af . jydhsrazby ) , sizeof ( hrxu5rhe3af . jydhsrazby ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 151 , ( const void * ) & (
hrxu5rhe3af . nfvyn45pdm ) , sizeof ( hrxu5rhe3af . nfvyn45pdm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 152 , ( const void * ) & (
hrxu5rhe3af . cjwjqcd1zs ) , sizeof ( hrxu5rhe3af . cjwjqcd1zs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 153 , ( const void * ) & (
hrxu5rhe3af . m2abnapxna ) , sizeof ( hrxu5rhe3af . m2abnapxna ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 154 , ( const void * ) & (
hrxu5rhe3af . ejudse0oqw ) , sizeof ( hrxu5rhe3af . ejudse0oqw ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 155 , ( const void * ) & (
hrxu5rhe3af . oxb0jyodnm . dmloqodxqz ) , sizeof ( hrxu5rhe3af . oxb0jyodnm .
dmloqodxqz ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 156 , ( const
void * ) & ( hrxu5rhe3af . oxb0jyodnm . k5qbhboafq ) , sizeof ( hrxu5rhe3af .
oxb0jyodnm . k5qbhboafq ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 157
, ( const void * ) & ( hrxu5rhe3af . bghekfjhrb . fbhgjn50of ) , sizeof (
hrxu5rhe3af . bghekfjhrb . fbhgjn50of ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 158 , ( const void * ) & ( hrxu5rhe3af . bghekfjhrb .
ogcbvjea2u ) , sizeof ( hrxu5rhe3af . bghekfjhrb . ogcbvjea2u ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 159 , ( const void * ) & (
hrxu5rhe3af . iyw4crazdc . cyzypjm5pc ) , sizeof ( hrxu5rhe3af . iyw4crazdc .
cyzypjm5pc ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 160 , ( const
void * ) & ( hrxu5rhe3af . iyw4crazdc . dmwbxxl3xx ) , sizeof ( hrxu5rhe3af .
iyw4crazdc . dmwbxxl3xx ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 161
, ( const void * ) & ( hrxu5rhe3af . npgo12zmto . emkgbeqqs5 ) , sizeof (
hrxu5rhe3af . npgo12zmto . emkgbeqqs5 ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 162 , ( const void * ) & ( hrxu5rhe3af . npgo12zmto .
cfhkcft2t2 ) , sizeof ( hrxu5rhe3af . npgo12zmto . cfhkcft2t2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 163 , ( const void * ) & (
hrxu5rhe3af . prxbfmvl1en . dmloqodxqz ) , sizeof ( hrxu5rhe3af . prxbfmvl1en
. dmloqodxqz ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 164 , ( const
void * ) & ( hrxu5rhe3af . prxbfmvl1en . k5qbhboafq ) , sizeof ( hrxu5rhe3af
. prxbfmvl1en . k5qbhboafq ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 ,
165 , ( const void * ) & ( hrxu5rhe3af . n53cqmpcloj . fbhgjn50of ) , sizeof
( hrxu5rhe3af . n53cqmpcloj . fbhgjn50of ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 166 , ( const void * ) & ( hrxu5rhe3af . n53cqmpcloj .
ogcbvjea2u ) , sizeof ( hrxu5rhe3af . n53cqmpcloj . ogcbvjea2u ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 167 , ( const void * ) & (
hrxu5rhe3af . bqx0vc3mudn . cyzypjm5pc ) , sizeof ( hrxu5rhe3af . bqx0vc3mudn
. cyzypjm5pc ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 , 168 , ( const
void * ) & ( hrxu5rhe3af . bqx0vc3mudn . dmwbxxl3xx ) , sizeof ( hrxu5rhe3af
. bqx0vc3mudn . dmwbxxl3xx ) ) ; mr_main_cacheDataAsMxArray ( rtdwData , 0 ,
169 , ( const void * ) & ( hrxu5rhe3af . bbjtuydtdkk . emkgbeqqs5 ) , sizeof
( hrxu5rhe3af . bbjtuydtdkk . emkgbeqqs5 ) ) ; mr_main_cacheDataAsMxArray (
rtdwData , 0 , 170 , ( const void * ) & ( hrxu5rhe3af . bbjtuydtdkk .
cfhkcft2t2 ) , sizeof ( hrxu5rhe3af . bbjtuydtdkk . cfhkcft2t2 ) ) ;
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
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . buggjk4l1n ) ,
rtdwData , 0 , 8 , sizeof ( hrxu5rhe3af . buggjk4l1n ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j3ergpk3vu ) ,
rtdwData , 0 , 9 , sizeof ( hrxu5rhe3af . j3ergpk3vu ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nydzqlwwnn ) ,
rtdwData , 0 , 10 , sizeof ( hrxu5rhe3af . nydzqlwwnn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bdotsga2iv ) ,
rtdwData , 0 , 11 , sizeof ( hrxu5rhe3af . bdotsga2iv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . djim5bpjvv ) ,
rtdwData , 0 , 12 , sizeof ( hrxu5rhe3af . djim5bpjvv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lqkanthoxg ) ,
rtdwData , 0 , 13 , sizeof ( hrxu5rhe3af . lqkanthoxg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . amd2k325eq ) ,
rtdwData , 0 , 14 , sizeof ( hrxu5rhe3af . amd2k325eq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ocwejjhsae ) ,
rtdwData , 0 , 15 , sizeof ( hrxu5rhe3af . ocwejjhsae ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lo1lp4gtvt ) ,
rtdwData , 0 , 16 , sizeof ( hrxu5rhe3af . lo1lp4gtvt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cqi0nadh0g ) ,
rtdwData , 0 , 17 , sizeof ( hrxu5rhe3af . cqi0nadh0g ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . popvcsddq3 ) ,
rtdwData , 0 , 18 , sizeof ( hrxu5rhe3af . popvcsddq3 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e0e33jihoi ) ,
rtdwData , 0 , 19 , sizeof ( hrxu5rhe3af . e0e33jihoi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bkcg3g1zoi ) ,
rtdwData , 0 , 20 , sizeof ( hrxu5rhe3af . bkcg3g1zoi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cwsd2g5w2m ) ,
rtdwData , 0 , 21 , sizeof ( hrxu5rhe3af . cwsd2g5w2m ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ebpr404rrn ) ,
rtdwData , 0 , 22 , sizeof ( hrxu5rhe3af . ebpr404rrn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pbvxmucjj5 ) ,
rtdwData , 0 , 23 , sizeof ( hrxu5rhe3af . pbvxmucjj5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . h31khffg0k ) ,
rtdwData , 0 , 24 , sizeof ( hrxu5rhe3af . h31khffg0k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . alynay3xx0 ) ,
rtdwData , 0 , 25 , sizeof ( hrxu5rhe3af . alynay3xx0 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . atmgtfljnh ) ,
rtdwData , 0 , 26 , sizeof ( hrxu5rhe3af . atmgtfljnh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . n10hslmo2a ) ,
rtdwData , 0 , 27 , sizeof ( hrxu5rhe3af . n10hslmo2a ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pa2kyvt1uy ) ,
rtdwData , 0 , 28 , sizeof ( hrxu5rhe3af . pa2kyvt1uy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j13dkj5h0s ) ,
rtdwData , 0 , 29 , sizeof ( hrxu5rhe3af . j13dkj5h0s ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . p3xkfovqki ) ,
rtdwData , 0 , 30 , sizeof ( hrxu5rhe3af . p3xkfovqki ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . k40rhthviy ) ,
rtdwData , 0 , 31 , sizeof ( hrxu5rhe3af . k40rhthviy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . d1wjrwas1u ) ,
rtdwData , 0 , 32 , sizeof ( hrxu5rhe3af . d1wjrwas1u ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jjpbiyjnrh ) ,
rtdwData , 0 , 33 , sizeof ( hrxu5rhe3af . jjpbiyjnrh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cmfzrxdc11 ) ,
rtdwData , 0 , 34 , sizeof ( hrxu5rhe3af . cmfzrxdc11 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . impwbrb5ul ) ,
rtdwData , 0 , 35 , sizeof ( hrxu5rhe3af . impwbrb5ul ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ivdqhywypm ) ,
rtdwData , 0 , 36 , sizeof ( hrxu5rhe3af . ivdqhywypm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ck30ytigtq ) ,
rtdwData , 0 , 37 , sizeof ( hrxu5rhe3af . ck30ytigtq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ckit2etwje ) ,
rtdwData , 0 , 38 , sizeof ( hrxu5rhe3af . ckit2etwje ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . irqzxzls3s ) ,
rtdwData , 0 , 39 , sizeof ( hrxu5rhe3af . irqzxzls3s ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . btkpsszf3k ) ,
rtdwData , 0 , 40 , sizeof ( hrxu5rhe3af . btkpsszf3k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . febtg0cpg5 ) ,
rtdwData , 0 , 41 , sizeof ( hrxu5rhe3af . febtg0cpg5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . g0uzej5lf1 ) ,
rtdwData , 0 , 42 , sizeof ( hrxu5rhe3af . g0uzej5lf1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fdyoeqkdqi ) ,
rtdwData , 0 , 43 , sizeof ( hrxu5rhe3af . fdyoeqkdqi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . c3m4fwdfd0 ) ,
rtdwData , 0 , 44 , sizeof ( hrxu5rhe3af . c3m4fwdfd0 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kgzb050drs ) ,
rtdwData , 0 , 45 , sizeof ( hrxu5rhe3af . kgzb050drs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o3hynk2drm ) ,
rtdwData , 0 , 46 , sizeof ( hrxu5rhe3af . o3hynk2drm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pm5qqx3zuz ) ,
rtdwData , 0 , 47 , sizeof ( hrxu5rhe3af . pm5qqx3zuz ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . omdgfehj41 ) ,
rtdwData , 0 , 48 , sizeof ( hrxu5rhe3af . omdgfehj41 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hsphg0gng2 ) ,
rtdwData , 0 , 49 , sizeof ( hrxu5rhe3af . hsphg0gng2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mdstjcyjyx ) ,
rtdwData , 0 , 50 , sizeof ( hrxu5rhe3af . mdstjcyjyx ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ojltdhe2we ) ,
rtdwData , 0 , 51 , sizeof ( hrxu5rhe3af . ojltdhe2we ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iwklra2msj ) ,
rtdwData , 0 , 52 , sizeof ( hrxu5rhe3af . iwklra2msj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mt3gx422x1 ) ,
rtdwData , 0 , 53 , sizeof ( hrxu5rhe3af . mt3gx422x1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pug0coupbp ) ,
rtdwData , 0 , 54 , sizeof ( hrxu5rhe3af . pug0coupbp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jeg35werh5 ) ,
rtdwData , 0 , 55 , sizeof ( hrxu5rhe3af . jeg35werh5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kz1j0tnmva ) ,
rtdwData , 0 , 56 , sizeof ( hrxu5rhe3af . kz1j0tnmva ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lq5ek0jlzd ) ,
rtdwData , 0 , 57 , sizeof ( hrxu5rhe3af . lq5ek0jlzd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . goaeac5x5p ) ,
rtdwData , 0 , 58 , sizeof ( hrxu5rhe3af . goaeac5x5p ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ltjhqpbfjo ) ,
rtdwData , 0 , 59 , sizeof ( hrxu5rhe3af . ltjhqpbfjo ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dnqubg5s4k ) ,
rtdwData , 0 , 60 , sizeof ( hrxu5rhe3af . dnqubg5s4k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bze1flsb15 ) ,
rtdwData , 0 , 61 , sizeof ( hrxu5rhe3af . bze1flsb15 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pidbwsidci ) ,
rtdwData , 0 , 62 , sizeof ( hrxu5rhe3af . pidbwsidci ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ji1vknz2dr ) ,
rtdwData , 0 , 63 , sizeof ( hrxu5rhe3af . ji1vknz2dr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gltmjlakux ) ,
rtdwData , 0 , 64 , sizeof ( hrxu5rhe3af . gltmjlakux ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pwifaixjxb ) ,
rtdwData , 0 , 65 , sizeof ( hrxu5rhe3af . pwifaixjxb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . haxpv4vq51 ) ,
rtdwData , 0 , 66 , sizeof ( hrxu5rhe3af . haxpv4vq51 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hxjxms0byf ) ,
rtdwData , 0 , 67 , sizeof ( hrxu5rhe3af . hxjxms0byf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jij01p0qtw ) ,
rtdwData , 0 , 68 , sizeof ( hrxu5rhe3af . jij01p0qtw ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ihprlm0zdr ) ,
rtdwData , 0 , 69 , sizeof ( hrxu5rhe3af . ihprlm0zdr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jgquwrgfhd ) ,
rtdwData , 0 , 70 , sizeof ( hrxu5rhe3af . jgquwrgfhd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o2i4021xwh ) ,
rtdwData , 0 , 71 , sizeof ( hrxu5rhe3af . o2i4021xwh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iqs2nrdyqs ) ,
rtdwData , 0 , 72 , sizeof ( hrxu5rhe3af . iqs2nrdyqs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . p4n3550tai ) ,
rtdwData , 0 , 73 , sizeof ( hrxu5rhe3af . p4n3550tai ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nqcixj2cfc ) ,
rtdwData , 0 , 74 , sizeof ( hrxu5rhe3af . nqcixj2cfc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gcz34svd4r ) ,
rtdwData , 0 , 75 , sizeof ( hrxu5rhe3af . gcz34svd4r ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . anszycztem ) ,
rtdwData , 0 , 76 , sizeof ( hrxu5rhe3af . anszycztem ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ane43mgfgs ) ,
rtdwData , 0 , 77 , sizeof ( hrxu5rhe3af . ane43mgfgs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hkxlm4qdro ) ,
rtdwData , 0 , 78 , sizeof ( hrxu5rhe3af . hkxlm4qdro ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fnu1tvdbyx ) ,
rtdwData , 0 , 79 , sizeof ( hrxu5rhe3af . fnu1tvdbyx ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fq3jja1aol ) ,
rtdwData , 0 , 80 , sizeof ( hrxu5rhe3af . fq3jja1aol ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nbmuo2yzhf ) ,
rtdwData , 0 , 81 , sizeof ( hrxu5rhe3af . nbmuo2yzhf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ev5en1vf5z ) ,
rtdwData , 0 , 82 , sizeof ( hrxu5rhe3af . ev5en1vf5z ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . btkemo1frv ) ,
rtdwData , 0 , 83 , sizeof ( hrxu5rhe3af . btkemo1frv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cag24nmzzp ) ,
rtdwData , 0 , 84 , sizeof ( hrxu5rhe3af . cag24nmzzp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lptvxysd1c ) ,
rtdwData , 0 , 85 , sizeof ( hrxu5rhe3af . lptvxysd1c ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mt3v1tg0wr ) ,
rtdwData , 0 , 86 , sizeof ( hrxu5rhe3af . mt3v1tg0wr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . apfxbvz3qg ) ,
rtdwData , 0 , 87 , sizeof ( hrxu5rhe3af . apfxbvz3qg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . izrtkkf042 ) ,
rtdwData , 0 , 88 , sizeof ( hrxu5rhe3af . izrtkkf042 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . olb1gflryv ) ,
rtdwData , 0 , 89 , sizeof ( hrxu5rhe3af . olb1gflryv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . noecaey35j ) ,
rtdwData , 0 , 90 , sizeof ( hrxu5rhe3af . noecaey35j ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jkbsaxmqju ) ,
rtdwData , 0 , 91 , sizeof ( hrxu5rhe3af . jkbsaxmqju ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fnnqkeqpmg ) ,
rtdwData , 0 , 92 , sizeof ( hrxu5rhe3af . fnnqkeqpmg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j1uacuucpv ) ,
rtdwData , 0 , 93 , sizeof ( hrxu5rhe3af . j1uacuucpv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cbsmbddbag ) ,
rtdwData , 0 , 94 , sizeof ( hrxu5rhe3af . cbsmbddbag ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bnzh2jzuy5 ) ,
rtdwData , 0 , 95 , sizeof ( hrxu5rhe3af . bnzh2jzuy5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pmgcir2p13 ) ,
rtdwData , 0 , 96 , sizeof ( hrxu5rhe3af . pmgcir2p13 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . obuyxhugh2 ) ,
rtdwData , 0 , 97 , sizeof ( hrxu5rhe3af . obuyxhugh2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . h5fod2fj2q ) ,
rtdwData , 0 , 98 , sizeof ( hrxu5rhe3af . h5fod2fj2q ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hnbwguuonj ) ,
rtdwData , 0 , 99 , sizeof ( hrxu5rhe3af . hnbwguuonj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fimtx0wf43 ) ,
rtdwData , 0 , 100 , sizeof ( hrxu5rhe3af . fimtx0wf43 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jxtww5tjxt ) ,
rtdwData , 0 , 101 , sizeof ( hrxu5rhe3af . jxtww5tjxt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . as5m3dr43z ) ,
rtdwData , 0 , 102 , sizeof ( hrxu5rhe3af . as5m3dr43z ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gtaj4wmjuq ) ,
rtdwData , 0 , 103 , sizeof ( hrxu5rhe3af . gtaj4wmjuq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . a0tdfwofzg ) ,
rtdwData , 0 , 104 , sizeof ( hrxu5rhe3af . a0tdfwofzg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ikwlyg3xde ) ,
rtdwData , 0 , 105 , sizeof ( hrxu5rhe3af . ikwlyg3xde ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nw1rjo5a2w ) ,
rtdwData , 0 , 106 , sizeof ( hrxu5rhe3af . nw1rjo5a2w ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kg1shmc2lb ) ,
rtdwData , 0 , 107 , sizeof ( hrxu5rhe3af . kg1shmc2lb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . duwlcgfzra ) ,
rtdwData , 0 , 108 , sizeof ( hrxu5rhe3af . duwlcgfzra ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nblxudhi3p ) ,
rtdwData , 0 , 109 , sizeof ( hrxu5rhe3af . nblxudhi3p ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kunox0dfsg ) ,
rtdwData , 0 , 110 , sizeof ( hrxu5rhe3af . kunox0dfsg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . em2alijyyt ) ,
rtdwData , 0 , 111 , sizeof ( hrxu5rhe3af . em2alijyyt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mvvvr4qg3a ) ,
rtdwData , 0 , 112 , sizeof ( hrxu5rhe3af . mvvvr4qg3a ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mhqfolepov ) ,
rtdwData , 0 , 113 , sizeof ( hrxu5rhe3af . mhqfolepov ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lx00lot5dg ) ,
rtdwData , 0 , 114 , sizeof ( hrxu5rhe3af . lx00lot5dg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lfywehbssn ) ,
rtdwData , 0 , 115 , sizeof ( hrxu5rhe3af . lfywehbssn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hka1eluehh ) ,
rtdwData , 0 , 116 , sizeof ( hrxu5rhe3af . hka1eluehh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . km2naim34i ) ,
rtdwData , 0 , 117 , sizeof ( hrxu5rhe3af . km2naim34i ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hp3mldh5cv ) ,
rtdwData , 0 , 118 , sizeof ( hrxu5rhe3af . hp3mldh5cv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . obn5brrvbj ) ,
rtdwData , 0 , 119 , sizeof ( hrxu5rhe3af . obn5brrvbj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jaivnsj01n ) ,
rtdwData , 0 , 120 , sizeof ( hrxu5rhe3af . jaivnsj01n ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nmzrmeybue ) ,
rtdwData , 0 , 121 , sizeof ( hrxu5rhe3af . nmzrmeybue ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . olmlfoy1xv ) ,
rtdwData , 0 , 122 , sizeof ( hrxu5rhe3af . olmlfoy1xv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . px2vytyfy2 ) ,
rtdwData , 0 , 123 , sizeof ( hrxu5rhe3af . px2vytyfy2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e2pe11pwxn ) ,
rtdwData , 0 , 124 , sizeof ( hrxu5rhe3af . e2pe11pwxn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . opg1lhdczb ) ,
rtdwData , 0 , 125 , sizeof ( hrxu5rhe3af . opg1lhdczb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . g24vxooz0v ) ,
rtdwData , 0 , 126 , sizeof ( hrxu5rhe3af . g24vxooz0v ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . l3pfqrb31o ) ,
rtdwData , 0 , 127 , sizeof ( hrxu5rhe3af . l3pfqrb31o ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jiqhomoo0v ) ,
rtdwData , 0 , 128 , sizeof ( hrxu5rhe3af . jiqhomoo0v ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jmjdutrgwi ) ,
rtdwData , 0 , 129 , sizeof ( hrxu5rhe3af . jmjdutrgwi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gcdlpfr3qr ) ,
rtdwData , 0 , 130 , sizeof ( hrxu5rhe3af . gcdlpfr3qr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bhx2bk5lkm ) ,
rtdwData , 0 , 131 , sizeof ( hrxu5rhe3af . bhx2bk5lkm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gxxnmirgwt ) ,
rtdwData , 0 , 132 , sizeof ( hrxu5rhe3af . gxxnmirgwt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ayulg3mnvk ) ,
rtdwData , 0 , 133 , sizeof ( hrxu5rhe3af . ayulg3mnvk ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dmkiyir0bc ) ,
rtdwData , 0 , 134 , sizeof ( hrxu5rhe3af . dmkiyir0bc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nlifgx53vj ) ,
rtdwData , 0 , 135 , sizeof ( hrxu5rhe3af . nlifgx53vj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cozmdzu0w1 ) ,
rtdwData , 0 , 136 , sizeof ( hrxu5rhe3af . cozmdzu0w1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cnj1jumxqg ) ,
rtdwData , 0 , 137 , sizeof ( hrxu5rhe3af . cnj1jumxqg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ckwrsfgl5j ) ,
rtdwData , 0 , 138 , sizeof ( hrxu5rhe3af . ckwrsfgl5j ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e2cixfebva ) ,
rtdwData , 0 , 139 , sizeof ( hrxu5rhe3af . e2cixfebva ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . i5keywnlob ) ,
rtdwData , 0 , 140 , sizeof ( hrxu5rhe3af . i5keywnlob ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ae5papqlus ) ,
rtdwData , 0 , 141 , sizeof ( hrxu5rhe3af . ae5papqlus ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hbtp1swogp ) ,
rtdwData , 0 , 142 , sizeof ( hrxu5rhe3af . hbtp1swogp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ct2fu2r1og ) ,
rtdwData , 0 , 143 , sizeof ( hrxu5rhe3af . ct2fu2r1og ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mp3yltewxi ) ,
rtdwData , 0 , 144 , sizeof ( hrxu5rhe3af . mp3yltewxi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . brmqgwecvy ) ,
rtdwData , 0 , 145 , sizeof ( hrxu5rhe3af . brmqgwecvy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kjzbuo2ejd ) ,
rtdwData , 0 , 146 , sizeof ( hrxu5rhe3af . kjzbuo2ejd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ddgb0ny2wp ) ,
rtdwData , 0 , 147 , sizeof ( hrxu5rhe3af . ddgb0ny2wp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ozme2zffq1 ) ,
rtdwData , 0 , 148 , sizeof ( hrxu5rhe3af . ozme2zffq1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pqxjs5shcl ) ,
rtdwData , 0 , 149 , sizeof ( hrxu5rhe3af . pqxjs5shcl ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jydhsrazby ) ,
rtdwData , 0 , 150 , sizeof ( hrxu5rhe3af . jydhsrazby ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nfvyn45pdm ) ,
rtdwData , 0 , 151 , sizeof ( hrxu5rhe3af . nfvyn45pdm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cjwjqcd1zs ) ,
rtdwData , 0 , 152 , sizeof ( hrxu5rhe3af . cjwjqcd1zs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . m2abnapxna ) ,
rtdwData , 0 , 153 , sizeof ( hrxu5rhe3af . m2abnapxna ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ejudse0oqw ) ,
rtdwData , 0 , 154 , sizeof ( hrxu5rhe3af . ejudse0oqw ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . oxb0jyodnm .
dmloqodxqz ) , rtdwData , 0 , 155 , sizeof ( hrxu5rhe3af . oxb0jyodnm .
dmloqodxqz ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. oxb0jyodnm . k5qbhboafq ) , rtdwData , 0 , 156 , sizeof ( hrxu5rhe3af .
oxb0jyodnm . k5qbhboafq ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & (
hrxu5rhe3af . bghekfjhrb . fbhgjn50of ) , rtdwData , 0 , 157 , sizeof (
hrxu5rhe3af . bghekfjhrb . fbhgjn50of ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . bghekfjhrb . ogcbvjea2u ) , rtdwData , 0 , 158 ,
sizeof ( hrxu5rhe3af . bghekfjhrb . ogcbvjea2u ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iyw4crazdc .
cyzypjm5pc ) , rtdwData , 0 , 159 , sizeof ( hrxu5rhe3af . iyw4crazdc .
cyzypjm5pc ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. iyw4crazdc . dmwbxxl3xx ) , rtdwData , 0 , 160 , sizeof ( hrxu5rhe3af .
iyw4crazdc . dmwbxxl3xx ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & (
hrxu5rhe3af . npgo12zmto . emkgbeqqs5 ) , rtdwData , 0 , 161 , sizeof (
hrxu5rhe3af . npgo12zmto . emkgbeqqs5 ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . npgo12zmto . cfhkcft2t2 ) , rtdwData , 0 , 162 ,
sizeof ( hrxu5rhe3af . npgo12zmto . cfhkcft2t2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . prxbfmvl1en .
dmloqodxqz ) , rtdwData , 0 , 163 , sizeof ( hrxu5rhe3af . prxbfmvl1en .
dmloqodxqz ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. prxbfmvl1en . k5qbhboafq ) , rtdwData , 0 , 164 , sizeof ( hrxu5rhe3af .
prxbfmvl1en . k5qbhboafq ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) &
( hrxu5rhe3af . n53cqmpcloj . fbhgjn50of ) , rtdwData , 0 , 165 , sizeof (
hrxu5rhe3af . n53cqmpcloj . fbhgjn50of ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . n53cqmpcloj . ogcbvjea2u ) , rtdwData , 0 , 166
, sizeof ( hrxu5rhe3af . n53cqmpcloj . ogcbvjea2u ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bqx0vc3mudn .
cyzypjm5pc ) , rtdwData , 0 , 167 , sizeof ( hrxu5rhe3af . bqx0vc3mudn .
cyzypjm5pc ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af
. bqx0vc3mudn . dmwbxxl3xx ) , rtdwData , 0 , 168 , sizeof ( hrxu5rhe3af .
bqx0vc3mudn . dmwbxxl3xx ) ) ; mr_main_restoreDataFromMxArray ( ( void * ) &
( hrxu5rhe3af . bbjtuydtdkk . emkgbeqqs5 ) , rtdwData , 0 , 169 , sizeof (
hrxu5rhe3af . bbjtuydtdkk . emkgbeqqs5 ) ) ; mr_main_restoreDataFromMxArray (
( void * ) & ( hrxu5rhe3af . bbjtuydtdkk . cfhkcft2t2 ) , rtdwData , 0 , 170
, sizeof ( hrxu5rhe3af . bbjtuydtdkk . cfhkcft2t2 ) ) ; } } mxArray *
mr_main_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ; mwIndex
subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks = 0 ; size_t
numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 1 ] ;
disallowedBlocksInChild [ 0 ] =
mr_MagneticFieldInPolarCoords_GetSimStateDisallowedBlocks ( ) ; { size_t i ;
for ( i = 0 ; i < 1 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i
] ; if ( NULL != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) {
data = data_i ; } numBlocks += mxGetM ( data_i ) ; } } } data =
mxCreateCellMatrix ( numBlocks + 8 , 3 ) ; { static const char * blockType [
8 ] = { "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , } ; static const char * blockPath [ 8 ] = { "main/Scope1" ,
"main/Scope2" , "main/Scope3" , "main/Scope4" , "main/Scope5" , "main/Scope6"
, "main/Gyro reading/Scope" , "main/Real physics/Sun position wrt s//c/Scope"
, } ; static const int reason [ 8 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , } ;
for ( subs [ 0 ] = 0 ; subs [ 0 ] < 8 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0
; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } {
size_t i ; for ( i = 0 ; i < 1 ; ++ i ) { mxArray * data_i =
disallowedBlocksInChild [ i ] ; if ( NULL != data_i ) { mwIndex subs_i [ 2 ]
, offset_i ; const mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for (
subs_i [ 0 ] = 0 ; subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex
j ; for ( j = 0 ; j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ;
offset_i = mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij =
mxGetCell ( data_i , offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ;
subs [ 1 ] = j ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; }
mxDestroyArray ( data_i ) ; } } } return data ; } void MdlInitializeSizes (
void ) { ssSetNumContStates ( rtS , 14 ) ; ssSetNumPeriodicContStates ( rtS ,
0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 13 ) ; ssSetNumBlocks ( rtS , 1788
) ; ssSetNumBlockIO ( rtS , 217 ) ; ssSetNumBlockParams ( rtS , 746 ) ; }
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
ssSetChecksumVal ( rtS , 0 , 3886126751U ) ; ssSetChecksumVal ( rtS , 1 ,
2914424905U ) ; ssSetChecksumVal ( rtS , 2 , 4150336366U ) ; ssSetChecksumVal
( rtS , 3 , 3650237027U ) ; }
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
absTolControl [ 14 ] = { 0U , 0U , 0U , 1U , 1U , 1U , 0U , 0U , 0U , 0U , 0U
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
ssSetChecksumVal ( rtS , 0 , 3886126751U ) ; ssSetChecksumVal ( rtS , 1 ,
2914424905U ) ; ssSetChecksumVal ( rtS , 2 , 4150336366U ) ; ssSetChecksumVal
( rtS , 3 , 3650237027U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 57 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = ( sysRanDType * ) &
hrxu5rhe3af . hka1eluehh ; systemRan [ 2 ] = ( sysRanDType * ) & hrxu5rhe3af
. jaivnsj01n ; systemRan [ 3 ] = ( sysRanDType * ) & hrxu5rhe3af . hp3mldh5cv
; systemRan [ 4 ] = ( sysRanDType * ) & hrxu5rhe3af . lx00lot5dg ; systemRan
[ 5 ] = ( sysRanDType * ) & hrxu5rhe3af . olmlfoy1xv ; systemRan [ 6 ] = (
sysRanDType * ) & hrxu5rhe3af . prxbfmvl1en . k5qbhboafq ; systemRan [ 7 ] =
( sysRanDType * ) & hrxu5rhe3af . n53cqmpcloj . ogcbvjea2u ; systemRan [ 8 ]
= ( sysRanDType * ) & hrxu5rhe3af . kunox0dfsg ; systemRan [ 9 ] = (
sysRanDType * ) & hrxu5rhe3af . bqx0vc3mudn . dmwbxxl3xx ; systemRan [ 10 ] =
( sysRanDType * ) & hrxu5rhe3af . bbjtuydtdkk . cfhkcft2t2 ; systemRan [ 11 ]
= ( sysRanDType * ) & hrxu5rhe3af . mvvvr4qg3a ; systemRan [ 12 ] = (
sysRanDType * ) & hrxu5rhe3af . duwlcgfzra ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan [ 17 ] = (
sysRanDType * ) & hrxu5rhe3af . fimtx0wf43 ; systemRan [ 18 ] = ( sysRanDType
* ) & hrxu5rhe3af . a0tdfwofzg ; systemRan [ 19 ] = ( sysRanDType * ) &
hrxu5rhe3af . as5m3dr43z ; systemRan [ 20 ] = ( sysRanDType * ) & hrxu5rhe3af
. h5fod2fj2q ; systemRan [ 21 ] = ( sysRanDType * ) & hrxu5rhe3af .
nw1rjo5a2w ; systemRan [ 22 ] = ( sysRanDType * ) & hrxu5rhe3af . oxb0jyodnm
. k5qbhboafq ; systemRan [ 23 ] = ( sysRanDType * ) & hrxu5rhe3af .
bghekfjhrb . ogcbvjea2u ; systemRan [ 24 ] = ( sysRanDType * ) & hrxu5rhe3af
. cbsmbddbag ; systemRan [ 25 ] = ( sysRanDType * ) & hrxu5rhe3af .
iyw4crazdc . dmwbxxl3xx ; systemRan [ 26 ] = ( sysRanDType * ) & hrxu5rhe3af
. npgo12zmto . cfhkcft2t2 ; systemRan [ 27 ] = ( sysRanDType * ) &
hrxu5rhe3af . pmgcir2p13 ; systemRan [ 28 ] = ( sysRanDType * ) & hrxu5rhe3af
. fnnqkeqpmg ; systemRan [ 29 ] = & rtAlwaysEnabled ; systemRan [ 30 ] = &
rtAlwaysEnabled ; systemRan [ 31 ] = & rtAlwaysEnabled ; systemRan [ 32 ] = &
rtAlwaysEnabled ; systemRan [ 33 ] = & rtAlwaysEnabled ; systemRan [ 34 ] = &
rtAlwaysEnabled ; systemRan [ 35 ] = & rtAlwaysEnabled ; systemRan [ 36 ] = &
rtAlwaysEnabled ; systemRan [ 37 ] = & rtAlwaysEnabled ; systemRan [ 38 ] = &
rtAlwaysEnabled ; systemRan [ 39 ] = & rtAlwaysEnabled ; systemRan [ 40 ] = &
rtAlwaysEnabled ; systemRan [ 41 ] = & rtAlwaysEnabled ; systemRan [ 42 ] = &
rtAlwaysEnabled ; systemRan [ 43 ] = & rtAlwaysEnabled ; systemRan [ 44 ] = &
rtAlwaysEnabled ; systemRan [ 45 ] = & rtAlwaysEnabled ; systemRan [ 46 ] = &
rtAlwaysEnabled ; systemRan [ 47 ] = ( sysRanDType * ) & hrxu5rhe3af .
jkbsaxmqju ; systemRan [ 48 ] = ( sysRanDType * ) & hrxu5rhe3af . jkbsaxmqju
; systemRan [ 49 ] = ( sysRanDType * ) & hrxu5rhe3af . noecaey35j ; systemRan
[ 50 ] = ( sysRanDType * ) & hrxu5rhe3af . noecaey35j ; systemRan [ 51 ] = (
sysRanDType * ) & hrxu5rhe3af . olb1gflryv ; systemRan [ 52 ] = ( sysRanDType
* ) & hrxu5rhe3af . olb1gflryv ; systemRan [ 53 ] = & rtAlwaysEnabled ;
systemRan [ 54 ] = & rtAlwaysEnabled ; systemRan [ 55 ] = & rtAlwaysEnabled ;
systemRan [ 56 ] = & rtAlwaysEnabled ; rteiSetModelMappingInfoPtr (
ssGetRTWExtModeInfo ( rtS ) , & ssGetModelMappingInfo ( rtS ) ) ;
rteiSetChecksumsPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) )
; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_main_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_main_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_main_SetDWork )
; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS )
) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 13 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID13 ( tid ) ; }
