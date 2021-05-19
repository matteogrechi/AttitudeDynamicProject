#include "rt_logging_mmi.h"
#include "main_capi.h"
#include <math.h>
#include "main.h"
#include "main_private.h"
#include "main_dt.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 13 , & stopRequested ) ; }
rtExtModeShutdown ( 13 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 14 ; const char_T
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
] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
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
#include "attitudePropagation_jopKHuyt.h"
#include "cholUpdateFactor_jYBGg031.h"
#include "qrFactor_dow5EKjD.h"
#include "qrFactor_qzIe5HvL.h"
#include "qrFactor_yGbRjQTg.h"
#include "qr_FYLMsjgk.h"
#include "trisolve_3230mWtQ.h"
#include "trisolve_tfSt187f.h"
o2y45zbt2m o2y45zbt2m4 ; n1mubcupv3 n1mubcupv31 ; hrxu5rhe3a hrxu5rhe3af ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; void
n11z2qtnyp ( const real_T n5fwjtrtab [ 2 ] , const real_T igzjsvau3z [ 2 ] ,
const real_T aroe4yccp3 [ 2 ] , const real_T jmtcrxgana [ 2 ] , const real_T
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
1 ; } else { ex = varargin_1 [ k - 1 ] ; for ( g_k = k ; g_k < 6 ; g_k ++ ) {
if ( ex > varargin_1 [ g_k ] ) { ex = varargin_1 [ g_k ] ; k = g_k + 1 ; } }
} switch ( k ) { case 1 : localB -> m4ihnbxfaf [ 0 ] = n5fwjtrtab [ 0 ] ;
localB -> m4ihnbxfaf [ 1 ] = n5fwjtrtab [ 1 ] ; localB -> bjttcelbng [ 0 ] =
1.0 ; localB -> bjttcelbng [ 1 ] = 0.0 ; localB -> bjttcelbng [ 2 ] = 0.0 ;
localB -> bjttcelbng [ 3 ] = 0.0 ; break ; case 2 : localB -> m4ihnbxfaf [ 0
] = igzjsvau3z [ 0 ] ; localB -> m4ihnbxfaf [ 1 ] = igzjsvau3z [ 1 ] ; localB
-> bjttcelbng [ 0 ] = 0.70710678118654757 ; localB -> bjttcelbng [ 1 ] =
0.70710678118654746 ; localB -> bjttcelbng [ 2 ] = 0.0 ; localB -> bjttcelbng
[ 3 ] = 0.0 ; break ; case 3 : localB -> m4ihnbxfaf [ 0 ] = aroe4yccp3 [ 0 ]
; localB -> m4ihnbxfaf [ 1 ] = aroe4yccp3 [ 1 ] ; localB -> bjttcelbng [ 0 ]
= 6.123233995736766E-17 ; localB -> bjttcelbng [ 1 ] = 1.0 ; localB ->
bjttcelbng [ 2 ] = 0.0 ; localB -> bjttcelbng [ 3 ] = 0.0 ; break ; case 4 :
localB -> m4ihnbxfaf [ 0 ] = jmtcrxgana [ 0 ] ; localB -> m4ihnbxfaf [ 1 ] =
jmtcrxgana [ 1 ] ; localB -> bjttcelbng [ 0 ] = 0.70710678118654757 ; localB
-> bjttcelbng [ 1 ] = - 0.70710678118654746 ; localB -> bjttcelbng [ 2 ] =
0.0 ; localB -> bjttcelbng [ 3 ] = 0.0 ; break ; case 5 : localB ->
m4ihnbxfaf [ 0 ] = bw0neo01iz [ 0 ] ; localB -> m4ihnbxfaf [ 1 ] = bw0neo01iz
[ 1 ] ; localB -> bjttcelbng [ 0 ] = 0.70710678118654757 ; localB ->
bjttcelbng [ 1 ] = 0.0 ; localB -> bjttcelbng [ 2 ] = 0.70710678118654746 ;
localB -> bjttcelbng [ 3 ] = 0.0 ; break ; default : localB -> m4ihnbxfaf [ 0
] = clnqp52x4r [ 0 ] ; localB -> m4ihnbxfaf [ 1 ] = clnqp52x4r [ 1 ] ; localB
-> bjttcelbng [ 0 ] = 0.70710678118654757 ; localB -> bjttcelbng [ 1 ] = 0.0
; localB -> bjttcelbng [ 2 ] = - 0.70710678118654746 ; localB -> bjttcelbng [
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
; hrxu5rhe3af . opg1lhdczb = true ; hrxu5rhe3af . fytmukko2d = 0.0 ;
hrxu5rhe3af . jiqhomoo0v = true ; hrxu5rhe3af . jmjdutrgwi = true ;
hrxu5rhe3af . curihjwvdq = 0.0 ; hrxu5rhe3af . gxxnmirgwt = true ;
hrxu5rhe3af . ayulg3mnvk = true ; hrxu5rhe3af . oumjhalsqc = 0.0 ;
hrxu5rhe3af . cozmdzu0w1 = true ; hrxu5rhe3af . cnj1jumxqg = true ;
hrxu5rhe3af . o2yvavvn5c = 0.0 ; hrxu5rhe3af . i5keywnlob = true ;
hrxu5rhe3af . ae5papqlus = true ; hrxu5rhe3af . hz2n5lmwzt = 0.0 ;
hrxu5rhe3af . mp3yltewxi = true ; hrxu5rhe3af . brmqgwecvy = true ;
hrxu5rhe3af . g0uzej5lf1 = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . g0uzej5lf1 = ! tmp
; } else { hrxu5rhe3af . g0uzej5lf1 = 1 ; } } o2y45zbt2m4 . niydxw3dug =
hbv5azo3sw . yBlockOrdering_Y0 ; o2y45zbt2m4 . nh40mtprpn = hbv5azo3sw .
yBlockOrdering_Y0_m1krpwpsee ; } void MdlEnable ( void ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , 1.0 ) ; ;
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , 1.0 ) ; ; } void
MdlStart ( void ) { int32_T i ; uint32_T initSeed ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} o2y45zbt2m4 . amepcbkksg [ 0 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [
0 ] ; o2y45zbt2m4 . fi1wde2gl2 [ 0 ] = hbv5azo3sw . Constant3_Value [ 0 ] ;
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
anszycztem = 0 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . bnzh2jzuy5
= - 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . obuyxhugh2
= - 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch (
hrxu5rhe3af . obuyxhugh2 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } hrxu5rhe3af .
obuyxhugh2 = - 1 ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . bnzh2jzuy5 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } hrxu5rhe3af .
bnzh2jzuy5 = - 1 ; hrxu5rhe3af . j1uacuucpv = - 1 ; hrxu5rhe3af . jxtww5tjxt
= 0 ; hrxu5rhe3af . ikwlyg3xde = 0 ; hrxu5rhe3af . gtaj4wmjuq = 0 ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
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
[ 0 ] , 1 ) ; hrxu5rhe3af . dnqubg5s4k = 0 ; hrxu5rhe3af . bze1flsb15 = 0 ;
hrxu5rhe3af . pidbwsidci = 0 ; hrxu5rhe3af . ji1vknz2dr = 0 ; hrxu5rhe3af .
gltmjlakux = 0 ; hrxu5rhe3af . pwifaixjxb = 0 ; hrxu5rhe3af . haxpv4vq51 = 0
; hrxu5rhe3af . hxjxms0byf = 0 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; switch ( hrxu5rhe3af . j1uacuucpv ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
obuyxhugh2 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} hrxu5rhe3af . obuyxhugh2 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
bnzh2jzuy5 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; } hrxu5rhe3af . j1uacuucpv = - 1 ;
hrxu5rhe3af . iqs2nrdyqs = - 1 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch (
hrxu5rhe3af . hnbwguuonj ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } hrxu5rhe3af .
hnbwguuonj = - 1 ; hrxu5rhe3af . p4n3550tai = - 1 ; memcpy ( & hrxu5rhe3af .
buggjk4l1n [ 0 ] , & hbv5azo3sw . DataStoreMemoryP_InitialValue [ 0 ] , 49U *
sizeof ( real_T ) ) ; for ( i = 0 ; i < 7 ; i ++ ) { hrxu5rhe3af . j3ergpk3vu
[ i ] = hbv5azo3sw . DataStoreMemoryx_InitialValue [ i ] ; } MdlInitialize (
) ; MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) { real_T bz3m03sk4h [ 2 ]
; real_T prirsvmw33 [ 2 ] ; real_T ilztr2qrue [ 2 ] ; real_T hzexholftp [ 2 ]
; real_T jr4rimgbh0 [ 2 ] ; real_T j4yy5fljso [ 2 ] ; real_T el4y0ewlg2 [ 2 ]
; real_T mgirxq514b [ 2 ] ; real_T n4cr5voz3i [ 2 ] ; real_T naxh1rmprg [ 2 ]
; real_T ablvf05wvd [ 2 ] ; real_T jazbl50puz [ 2 ] ; static const real_T b [
10 ] = { 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.8 , 0.8 , 0.8 , 0.8 } ; static
const real_T Wmean [ 2 ] = { 1.0 , - 0.071428642857214286 } ; real_T X2 [ 98
] ; real_T Y2_e [ 98 ] ; real_T P [ 49 ] ; real_T R [ 49 ] ; real_T unusedU0
[ 49 ] ; real_T Y2_p [ 42 ] ; real_T Y2 [ 28 ] ; real_T B [ 21 ] ; real_T K [
21 ] ; real_T egmyq2wukd [ 16 ] ; real_T j2t2fbnnna [ 16 ] ; real_T Pxy [ 14
] ; real_T Sy [ 9 ] ; real_T b_I [ 9 ] ; real_T tmp_p [ 9 ] ; real_T
p1airozsub [ 7 ] ; real_T afgi1z3nug [ 4 ] ; real_T qSunSensor [ 4 ] ; real_T
eb1fnz3txo [ 3 ] ; real_T pygfqx1xx2 [ 3 ] ; real_T tmp_m [ 3 ] ; real_T
p2ib5fluuc [ 2 ] ; real_T tmp_e [ 2 ] ; real_T tmp_i [ 2 ] ; real_T
ardt1y5x0d_idx_1 ; real_T au32y1wfjp_idx_1 ; real_T b2dseb5akc_idx_1 ; real_T
clod0whodw_idx_0 ; real_T dxjf4qcaeo ; real_T emiiavfkh1 ; real_T
epx0klrbgl_idx_0 ; real_T epx0klrbgl_idx_1 ; real_T flm04egj0r ; real_T
gi3b15wlwk ; real_T hdqbs12ylt ; real_T hjrvg0fden ; real_T hkwf2out3d ;
real_T hnpfszi1fh_idx_0 ; real_T hnpfszi1fh_idx_1 ; real_T hnpfszi1fh_idx_2 ;
real_T hnrrgqitme ; real_T ht1q0lonq4_idx_1 ; real_T ikxunumo3i ; real_T
k1qmoe0iaw ; real_T l1pix2zzzf ; real_T mjhceqjgf1_idx_0 ; real_T
mjhceqjgf1_idx_1 ; real_T mnqgflhgig ; real_T myqx15ehea_idx_0 ; real_T
myqx15ehea_idx_1 ; real_T myqx15ehea_idx_2 ; real_T mzxp24sosq_idx_0 ; real_T
njulo3ucsg ; real_T nm4t0wvumv ; real_T nmd3fc4utj_idx_1 ; real_T ntqepze5kl
; real_T omuhzl1dir ; real_T oouy1fopfw_idx_1 ; real_T prv0bttwvn ; real_T
pzi3xtzla3_idx_1 ; int32_T exitg1 ; int32_T i ; int32_T i_e ; int32_T i_p ;
int8_T rtAction ; int8_T rtPrevAction ; boolean_T iy5b1drj5g [ 9 ] ;
boolean_T exitg2 ; boolean_T tmp ; SimStruct * S ; void * diag ; srClearBC (
hrxu5rhe3af . nw1rjo5a2w ) ; srClearBC ( hrxu5rhe3af . a0tdfwofzg ) ;
srClearBC ( hrxu5rhe3af . as5m3dr43z ) ; srClearBC ( hrxu5rhe3af . fimtx0wf43
) ; srClearBC ( hrxu5rhe3af . h5fod2fj2q ) ; srClearBC ( hrxu5rhe3af .
pwomc1kiz3 ) ; srClearBC ( hrxu5rhe3af . fpx2qirisn ) ; srClearBC (
hrxu5rhe3af . pmgcir2p13 ) ; srClearBC ( hrxu5rhe3af . o0pf4uvatt ) ;
srClearBC ( hrxu5rhe3af . jkjkrdx1hk ) ; srClearBC ( hrxu5rhe3af . cbsmbddbag
) ; srClearBC ( hrxu5rhe3af . fnnqkeqpmg ) ; srClearBC ( hrxu5rhe3af .
jkbsaxmqju ) ; srClearBC ( hrxu5rhe3af . noecaey35j ) ; srClearBC (
hrxu5rhe3af . olb1gflryv ) ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
RandSrc_GZ_D ( pygfqx1xx2 , & hbv5azo3sw . RandomSource1_MeanVal , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP , 1 , hrxu5rhe3af . bdotsga2iv , 1 , 3
) ; k1qmoe0iaw = hbv5azo3sw . Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [ 0 ] +
hrxu5rhe3af . iwulztso32 [ 0 ] ; o2y45zbt2m4 . p0g2tnevfk [ 0 ] = k1qmoe0iaw
; hrxu5rhe3af . iwulztso32 [ 0 ] = k1qmoe0iaw ; k1qmoe0iaw = hbv5azo3sw .
Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [ 1 ] + hrxu5rhe3af . iwulztso32 [ 1 ] ;
o2y45zbt2m4 . p0g2tnevfk [ 1 ] = k1qmoe0iaw ; hrxu5rhe3af . iwulztso32 [ 1 ]
= k1qmoe0iaw ; k1qmoe0iaw = hbv5azo3sw . Gain_Gain_jtp3rrvu3s * pygfqx1xx2 [
2 ] + hrxu5rhe3af . iwulztso32 [ 2 ] ; o2y45zbt2m4 . p0g2tnevfk [ 2 ] =
k1qmoe0iaw ; hrxu5rhe3af . iwulztso32 [ 2 ] = k1qmoe0iaw ; } if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . ckit2etwje != 0 ) {
n1mubcupv31 . kbqjtzizsx [ 0 ] = o2y45zbt2m4 . lx0bv1yu1i [ 0 ] ; n1mubcupv31
. kbqjtzizsx [ 1 ] = o2y45zbt2m4 . lx0bv1yu1i [ 1 ] ; n1mubcupv31 .
kbqjtzizsx [ 2 ] = o2y45zbt2m4 . lx0bv1yu1i [ 2 ] ; } o2y45zbt2m4 .
h20zeizqdi [ 0 ] = n1mubcupv31 . kbqjtzizsx [ 0 ] ; o2y45zbt2m4 . h20zeizqdi
[ 1 ] = n1mubcupv31 . kbqjtzizsx [ 1 ] ; o2y45zbt2m4 . h20zeizqdi [ 2 ] =
n1mubcupv31 . kbqjtzizsx [ 2 ] ; } else { o2y45zbt2m4 . h20zeizqdi [ 0 ] =
n1mubcupv31 . kbqjtzizsx [ 0 ] ; o2y45zbt2m4 . h20zeizqdi [ 1 ] = n1mubcupv31
. kbqjtzizsx [ 1 ] ; o2y45zbt2m4 . h20zeizqdi [ 2 ] = n1mubcupv31 .
kbqjtzizsx [ 2 ] ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { eb1fnz3txo [ 0 ]
= o2y45zbt2m4 . h20zeizqdi [ 0 ] ; eb1fnz3txo [ 1 ] = o2y45zbt2m4 .
h20zeizqdi [ 1 ] ; eb1fnz3txo [ 2 ] = o2y45zbt2m4 . h20zeizqdi [ 2 ] ; } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . lfqykqi1sg , &
hbv5azo3sw . RandomSource_MeanVal , 1 , & hbv5azo3sw .
RandomSource_VarianceRTP , 1 , hrxu5rhe3af . lqkanthoxg , 1 , 3 ) ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { myqx15ehea_idx_0 = ( o2y45zbt2m4 .
p0g2tnevfk [ 0 ] + eb1fnz3txo [ 0 ] ) + o2y45zbt2m4 . lfqykqi1sg [ 0 ] ;
myqx15ehea_idx_1 = ( o2y45zbt2m4 . p0g2tnevfk [ 1 ] + eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . lfqykqi1sg [ 1 ] ; myqx15ehea_idx_2 = ( o2y45zbt2m4 .
p0g2tnevfk [ 2 ] + eb1fnz3txo [ 2 ] ) + o2y45zbt2m4 . lfqykqi1sg [ 2 ] ; } if
( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . irqzxzls3s != 0 ) {
n1mubcupv31 . ezm2ooaqjl [ 0 ] = o2y45zbt2m4 . amepcbkksg [ 0 ] ; n1mubcupv31
. ezm2ooaqjl [ 1 ] = o2y45zbt2m4 . amepcbkksg [ 1 ] ; n1mubcupv31 .
ezm2ooaqjl [ 2 ] = o2y45zbt2m4 . amepcbkksg [ 2 ] ; } pygfqx1xx2 [ 0 ] =
n1mubcupv31 . ezm2ooaqjl [ 0 ] ; pygfqx1xx2 [ 1 ] = n1mubcupv31 . ezm2ooaqjl
[ 1 ] ; pygfqx1xx2 [ 2 ] = n1mubcupv31 . ezm2ooaqjl [ 2 ] ; if ( hrxu5rhe3af
. btkpsszf3k != 0 ) { n1mubcupv31 . bcrrky3g2k [ 0 ] = o2y45zbt2m4 .
a55nsryplm [ 0 ] ; n1mubcupv31 . bcrrky3g2k [ 1 ] = o2y45zbt2m4 . a55nsryplm
[ 1 ] ; n1mubcupv31 . bcrrky3g2k [ 2 ] = o2y45zbt2m4 . a55nsryplm [ 2 ] ;
n1mubcupv31 . bcrrky3g2k [ 3 ] = o2y45zbt2m4 . a55nsryplm [ 3 ] ; }
afgi1z3nug [ 0 ] = n1mubcupv31 . bcrrky3g2k [ 0 ] ; afgi1z3nug [ 1 ] =
n1mubcupv31 . bcrrky3g2k [ 1 ] ; afgi1z3nug [ 2 ] = n1mubcupv31 . bcrrky3g2k
[ 2 ] ; afgi1z3nug [ 3 ] = n1mubcupv31 . bcrrky3g2k [ 3 ] ; } else {
pygfqx1xx2 [ 0 ] = n1mubcupv31 . ezm2ooaqjl [ 0 ] ; pygfqx1xx2 [ 1 ] =
n1mubcupv31 . ezm2ooaqjl [ 1 ] ; pygfqx1xx2 [ 2 ] = n1mubcupv31 . ezm2ooaqjl
[ 2 ] ; afgi1z3nug [ 0 ] = n1mubcupv31 . bcrrky3g2k [ 0 ] ; afgi1z3nug [ 1 ]
= n1mubcupv31 . bcrrky3g2k [ 1 ] ; afgi1z3nug [ 2 ] = n1mubcupv31 .
bcrrky3g2k [ 2 ] ; afgi1z3nug [ 3 ] = n1mubcupv31 . bcrrky3g2k [ 3 ] ; }
o2y45zbt2m4 . mvqp5l5ufq [ 0 ] = hbv5azo3sw . Gain_Gain_cpl3z33sd4 *
pygfqx1xx2 [ 0 ] ; o2y45zbt2m4 . mvqp5l5ufq [ 1 ] = hbv5azo3sw .
Gain_Gain_cpl3z33sd4 * pygfqx1xx2 [ 1 ] ; o2y45zbt2m4 . mvqp5l5ufq [ 2 ] =
hbv5azo3sw . Gain_Gain_cpl3z33sd4 * pygfqx1xx2 [ 2 ] ; k1qmoe0iaw = ( (
afgi1z3nug [ 0 ] * afgi1z3nug [ 0 ] + afgi1z3nug [ 1 ] * afgi1z3nug [ 1 ] ) +
afgi1z3nug [ 2 ] * afgi1z3nug [ 2 ] ) + afgi1z3nug [ 3 ] * afgi1z3nug [ 3 ] ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . fdyoeqkdqi != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . fdyoeqkdqi
= 0 ; } nm4t0wvumv = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } else if (
k1qmoe0iaw < 0.0 ) { nm4t0wvumv = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; hrxu5rhe3af . fdyoeqkdqi = 1 ; } else { nm4t0wvumv =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } k1qmoe0iaw = afgi1z3nug [ 2 ] /
nm4t0wvumv ; l1pix2zzzf = afgi1z3nug [ 0 ] / nm4t0wvumv ; dxjf4qcaeo =
afgi1z3nug [ 1 ] / nm4t0wvumv ; nm4t0wvumv = afgi1z3nug [ 3 ] / nm4t0wvumv ;
prv0bttwvn = ( ( l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo * dxjf4qcaeo ) +
k1qmoe0iaw * k1qmoe0iaw ) + nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( hrxu5rhe3af . c3m4fwdfd0 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . c3m4fwdfd0
= 0 ; } hnrrgqitme = muDoubleScalarSqrt ( prv0bttwvn ) ; } else if (
prv0bttwvn < 0.0 ) { hnrrgqitme = - muDoubleScalarSqrt ( muDoubleScalarAbs (
prv0bttwvn ) ) ; hrxu5rhe3af . c3m4fwdfd0 = 1 ; } else { hnrrgqitme =
muDoubleScalarSqrt ( prv0bttwvn ) ; } prv0bttwvn = k1qmoe0iaw / hnrrgqitme ;
hjrvg0fden = nm4t0wvumv / hnrrgqitme ; hdqbs12ylt = dxjf4qcaeo / hnrrgqitme ;
hnrrgqitme = l1pix2zzzf / hnrrgqitme ; o2y45zbt2m4 . hwkzvkas3c = ( ( (
hbv5azo3sw . Constant_Value_klghvcvqmj - prv0bttwvn * prv0bttwvn ) -
hjrvg0fden * hjrvg0fden ) * hbv5azo3sw . Gain2_Gain_n2hlwdziix * o2y45zbt2m4
. mvqp5l5ufq [ 0 ] + ( hdqbs12ylt * prv0bttwvn + hnrrgqitme * hjrvg0fden ) *
hbv5azo3sw . Gain_Gain_deacltj5ll * o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ) + (
hdqbs12ylt * hjrvg0fden - hnrrgqitme * prv0bttwvn ) * hbv5azo3sw .
Gain1_Gain_fe0vmtwk5u * o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; o2y45zbt2m4 .
pvehregqxn = ( ( ( hbv5azo3sw . Constant_Value_h3axm4dzs2 - hdqbs12ylt *
hdqbs12ylt ) - hjrvg0fden * hjrvg0fden ) * hbv5azo3sw . Gain2_Gain_gnrwoc1vc2
* o2y45zbt2m4 . mvqp5l5ufq [ 1 ] + ( hdqbs12ylt * prv0bttwvn - hnrrgqitme *
hjrvg0fden ) * hbv5azo3sw . Gain_Gain_m0ug0pnx04 * o2y45zbt2m4 . mvqp5l5ufq [
0 ] ) + ( hnrrgqitme * hdqbs12ylt + prv0bttwvn * hjrvg0fden ) * hbv5azo3sw .
Gain1_Gain_epkzxiktj2 * o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; o2y45zbt2m4 .
fqzn4ufnnm = ( ( hdqbs12ylt * hjrvg0fden + hnrrgqitme * prv0bttwvn ) *
hbv5azo3sw . Gain_Gain_efwlgxe2sc * o2y45zbt2m4 . mvqp5l5ufq [ 0 ] + (
prv0bttwvn * hjrvg0fden - hnrrgqitme * hdqbs12ylt ) * hbv5azo3sw .
Gain1_Gain_ito2bip4nt * o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ) + ( ( hbv5azo3sw .
Constant_Value_jsi055lqf3 - hdqbs12ylt * hdqbs12ylt ) - prv0bttwvn *
prv0bttwvn ) * hbv5azo3sw . Gain2_Gain_kojiuv3vcw * o2y45zbt2m4 . mvqp5l5ufq
[ 2 ] ; if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { o2y45zbt2m4 . pcu5wlt0ol [ 0 ]
= o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 . pcu5wlt0ol [ 1 ] = o2y45zbt2m4 .
pvehregqxn ; o2y45zbt2m4 . pcu5wlt0ol [ 2 ] = o2y45zbt2m4 . fqzn4ufnnm ;
prv0bttwvn = ( o2y45zbt2m4 . pcu5wlt0ol [ 0 ] * o2y45zbt2m4 . pcu5wlt0ol [ 0
] + o2y45zbt2m4 . pcu5wlt0ol [ 1 ] * o2y45zbt2m4 . pcu5wlt0ol [ 1 ] ) +
o2y45zbt2m4 . pcu5wlt0ol [ 2 ] * o2y45zbt2m4 . pcu5wlt0ol [ 2 ] ; if (
prv0bttwvn < 0.0 ) { prv0bttwvn = - muDoubleScalarSqrt ( muDoubleScalarAbs (
prv0bttwvn ) ) ; } else { prv0bttwvn = muDoubleScalarSqrt ( prv0bttwvn ) ; }
if ( prv0bttwvn > hbv5azo3sw . NormalizeVector_maxzero ) { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . pcu5wlt0ol [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . pcu5wlt0ol
[ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . pcu5wlt0ol [ 2 ] ; afgi1z3nug [ 3 ]
= prv0bttwvn ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . pcu5wlt0ol [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . pcu5wlt0ol [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = o2y45zbt2m4 . pcu5wlt0ol [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_pw4amn2wvf ; } eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hnrrgqitme = (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . gy5dnmc0o2 + o2y45zbt2m4 . bemlv143br *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . hsxdwr2kap * eb1fnz3txo [ 2 ] ; prv0bttwvn
= muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . a3453wdy3h +
o2y45zbt2m4 . evt22h0udz * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . hr5yavkh2g *
eb1fnz3txo [ 2 ] , hnrrgqitme ) ; hnrrgqitme = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ln15xtukoj + o2y45zbt2m4 . iak2iehb01 *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . ofev2a4bu4 * eb1fnz3txo [ 2 ] , hnrrgqitme
) ; p2ib5fluuc [ 0 ] = hbv5azo3sw . Constant_Value_fvwrjd3qpo [ 0 ] +
prv0bttwvn ; p2ib5fluuc [ 1 ] = hbv5azo3sw . Constant_Value_fvwrjd3qpo [ 1 ]
+ hnrrgqitme ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
o2y45zbt2m4 . cktw3suarj , & hbv5azo3sw . RandomSource1_MeanVal_aiijehfqfo ,
1 , & hbv5azo3sw . RandomSource1_VarianceRTP_iazwfq1jw0 , 1 , hrxu5rhe3af .
ocwejjhsae , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
mzxp24sosq_idx_0 = p2ib5fluuc [ 0 ] + o2y45zbt2m4 . cktw3suarj [ 0 ] ; if (
mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat ) { bz3m03sk4h [ 0 ] =
hbv5azo3sw . Saturation_UpperSat ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw
. Saturation_LowerSat ) { bz3m03sk4h [ 0 ] = hbv5azo3sw . Saturation_LowerSat
; } else { bz3m03sk4h [ 0 ] = mzxp24sosq_idx_0 ; } mzxp24sosq_idx_0 =
p2ib5fluuc [ 1 ] + o2y45zbt2m4 . cktw3suarj [ 1 ] ; if ( mzxp24sosq_idx_0 >
hbv5azo3sw . Saturation_UpperSat ) { bz3m03sk4h [ 1 ] = hbv5azo3sw .
Saturation_UpperSat ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat ) { bz3m03sk4h [ 1 ] = hbv5azo3sw . Saturation_LowerSat ;
} else { bz3m03sk4h [ 1 ] = mzxp24sosq_idx_0 ; } o2y45zbt2m4 . nvj2jobsne [ 0
] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 . nvj2jobsne [ 1 ] = o2y45zbt2m4 .
pvehregqxn ; o2y45zbt2m4 . nvj2jobsne [ 2 ] = o2y45zbt2m4 . fqzn4ufnnm ;
flm04egj0r = ( o2y45zbt2m4 . nvj2jobsne [ 0 ] * o2y45zbt2m4 . nvj2jobsne [ 0
] + o2y45zbt2m4 . nvj2jobsne [ 1 ] * o2y45zbt2m4 . nvj2jobsne [ 1 ] ) +
o2y45zbt2m4 . nvj2jobsne [ 2 ] * o2y45zbt2m4 . nvj2jobsne [ 2 ] ; if (
flm04egj0r < 0.0 ) { flm04egj0r = - muDoubleScalarSqrt ( muDoubleScalarAbs (
flm04egj0r ) ) ; } else { flm04egj0r = muDoubleScalarSqrt ( flm04egj0r ) ; }
if ( flm04egj0r > hbv5azo3sw . NormalizeVector_maxzero_cdhvq0rirk ) {
afgi1z3nug [ 0 ] = o2y45zbt2m4 . nvj2jobsne [ 0 ] ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . nvj2jobsne [ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . nvj2jobsne
[ 2 ] ; afgi1z3nug [ 3 ] = flm04egj0r ; } else { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . nvj2jobsne [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 .
nvj2jobsne [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . nvj2jobsne [ 2 ] *
0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_peinfzh1bx ; }
eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; prv0bttwvn = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . akaurxf5cn
+ o2y45zbt2m4 . fjb4t2g0di * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . eps1xh200d *
eb1fnz3txo [ 2 ] ; flm04egj0r = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . ftiqxo4eic + o2y45zbt2m4 . cikadflncr * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . d55wbumkta * eb1fnz3txo [ 2 ] , prv0bttwvn ) ; prv0bttwvn =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . dg3licanvf +
o2y45zbt2m4 . nmsyyhec3k * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . fd0i4zg4gl *
eb1fnz3txo [ 2 ] , prv0bttwvn ) ; mzxp24sosq_idx_0 = hbv5azo3sw .
Constant_Value_o4pefzbbdu [ 0 ] + flm04egj0r ; flm04egj0r = hbv5azo3sw .
Constant_Value_o4pefzbbdu [ 1 ] + prv0bttwvn ; } if ( ssIsSampleHit ( rtS , 6
, 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . jf0z5nzend , & hbv5azo3sw .
RandomSource1_MeanVal_fskbkqfzhy , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_c0tnp0ox24 , 1 , hrxu5rhe3af . cqi0nadh0g , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { mzxp24sosq_idx_0 += o2y45zbt2m4 .
jf0z5nzend [ 0 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_iasva3d1xg ) { prirsvmw33 [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_iasva3d1xg ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk ) { prirsvmw33 [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk ; } else { prirsvmw33 [ 0 ] = mzxp24sosq_idx_0
; } mzxp24sosq_idx_0 = flm04egj0r + o2y45zbt2m4 . jf0z5nzend [ 1 ] ; if (
mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_iasva3d1xg ) { prirsvmw33
[ 1 ] = hbv5azo3sw . Saturation_UpperSat_iasva3d1xg ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_k012nv1qgk ) { prirsvmw33
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_k012nv1qgk ; } else { prirsvmw33 [ 1
] = mzxp24sosq_idx_0 ; } o2y45zbt2m4 . mfythxhofy [ 0 ] = o2y45zbt2m4 .
hwkzvkas3c ; o2y45zbt2m4 . mfythxhofy [ 1 ] = o2y45zbt2m4 . pvehregqxn ;
o2y45zbt2m4 . mfythxhofy [ 2 ] = o2y45zbt2m4 . fqzn4ufnnm ; gi3b15wlwk = (
o2y45zbt2m4 . mfythxhofy [ 0 ] * o2y45zbt2m4 . mfythxhofy [ 0 ] + o2y45zbt2m4
. mfythxhofy [ 1 ] * o2y45zbt2m4 . mfythxhofy [ 1 ] ) + o2y45zbt2m4 .
mfythxhofy [ 2 ] * o2y45zbt2m4 . mfythxhofy [ 2 ] ; if ( gi3b15wlwk < 0.0 ) {
gi3b15wlwk = - muDoubleScalarSqrt ( muDoubleScalarAbs ( gi3b15wlwk ) ) ; }
else { gi3b15wlwk = muDoubleScalarSqrt ( gi3b15wlwk ) ; } if ( gi3b15wlwk >
hbv5azo3sw . NormalizeVector_maxzero_b4q4mcfdki ) { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . mfythxhofy [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . mfythxhofy
[ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . mfythxhofy [ 2 ] ; afgi1z3nug [ 3 ]
= gi3b15wlwk ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . mfythxhofy [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . mfythxhofy [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = o2y45zbt2m4 . mfythxhofy [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_agjbvr0z5q ; } eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; flm04egj0r = (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . brdq13y0qd + o2y45zbt2m4 . h3xp3qlim0 *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . b1pqf2pbpp * eb1fnz3txo [ 2 ] ; gi3b15wlwk
= muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ornbl4mfau +
o2y45zbt2m4 . dbdvnfbtan * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . nqoad4oagc *
eb1fnz3txo [ 2 ] , flm04egj0r ) ; flm04egj0r = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . gq23czohqi + o2y45zbt2m4 . m13nwgsfs4 *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . gree3bakbj * eb1fnz3txo [ 2 ] , flm04egj0r
) ; gi3b15wlwk += hbv5azo3sw . Constant_Value_aqc3aba12o [ 0 ] ;
ht1q0lonq4_idx_1 = hbv5azo3sw . Constant_Value_aqc3aba12o [ 1 ] + flm04egj0r
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
efvttc54la , & hbv5azo3sw . RandomSource1_MeanVal_memmqqy0nt , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_ciqyogzko1 , 1 , hrxu5rhe3af .
e0e33jihoi , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
mzxp24sosq_idx_0 = gi3b15wlwk + o2y45zbt2m4 . efvttc54la [ 0 ] ; if (
mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs ) { ilztr2qrue
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_kx5yh1wv4z ) { ilztr2qrue
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_kx5yh1wv4z ; } else { ilztr2qrue [ 0
] = mzxp24sosq_idx_0 ; } mzxp24sosq_idx_0 = ht1q0lonq4_idx_1 + o2y45zbt2m4 .
efvttc54la [ 1 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_kvrw4yrrrs ) { ilztr2qrue [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_kvrw4yrrrs ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_kx5yh1wv4z ) { ilztr2qrue [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_kx5yh1wv4z ; } else { ilztr2qrue [ 1 ] = mzxp24sosq_idx_0
; } o2y45zbt2m4 . diblvbf0co [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
diblvbf0co [ 1 ] = o2y45zbt2m4 . pvehregqxn ; o2y45zbt2m4 . diblvbf0co [ 2 ]
= o2y45zbt2m4 . fqzn4ufnnm ; njulo3ucsg = ( o2y45zbt2m4 . diblvbf0co [ 0 ] *
o2y45zbt2m4 . diblvbf0co [ 0 ] + o2y45zbt2m4 . diblvbf0co [ 1 ] * o2y45zbt2m4
. diblvbf0co [ 1 ] ) + o2y45zbt2m4 . diblvbf0co [ 2 ] * o2y45zbt2m4 .
diblvbf0co [ 2 ] ; if ( njulo3ucsg < 0.0 ) { njulo3ucsg = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( njulo3ucsg ) ) ; } else { njulo3ucsg
= muDoubleScalarSqrt ( njulo3ucsg ) ; } if ( njulo3ucsg > hbv5azo3sw .
NormalizeVector_maxzero_h2g0i450y0 ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 .
diblvbf0co [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . diblvbf0co [ 1 ] ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . diblvbf0co [ 2 ] ; afgi1z3nug [ 3 ] =
njulo3ucsg ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . diblvbf0co [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = o2y45zbt2m4 . diblvbf0co [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= o2y45zbt2m4 . diblvbf0co [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_ktwwdrryx3 ; } eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; gi3b15wlwk = (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . a5drqsjnex + o2y45zbt2m4 . ndlxlyobzb *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . h5gslldsar * eb1fnz3txo [ 2 ] ; njulo3ucsg
= muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . daikka42e3 +
o2y45zbt2m4 . ek204bmiea * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . aqwdecxidu *
eb1fnz3txo [ 2 ] , gi3b15wlwk ) ; gi3b15wlwk = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ga4ycdonne + o2y45zbt2m4 . pihfnbloym *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . dpkcgsd4ym * eb1fnz3txo [ 2 ] , gi3b15wlwk
) ; njulo3ucsg += hbv5azo3sw . Constant_Value_kv3w21qse5 [ 0 ] ;
nmd3fc4utj_idx_1 = hbv5azo3sw . Constant_Value_kv3w21qse5 [ 1 ] + gi3b15wlwk
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
af3pwylngk , & hbv5azo3sw . RandomSource1_MeanVal_c0fkc2tbqq , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_f4hdv51tm4 , 1 , hrxu5rhe3af .
cwsd2g5w2m , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) {
mzxp24sosq_idx_0 = njulo3ucsg + o2y45zbt2m4 . af3pwylngk [ 0 ] ; if (
mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_byrofjxopf ) { hzexholftp
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_byrofjxopf ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_eqtwttitcd ) { hzexholftp
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_eqtwttitcd ; } else { hzexholftp [ 0
] = mzxp24sosq_idx_0 ; } mzxp24sosq_idx_0 = nmd3fc4utj_idx_1 + o2y45zbt2m4 .
af3pwylngk [ 1 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_byrofjxopf ) { hzexholftp [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_byrofjxopf ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_eqtwttitcd ) { hzexholftp [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_eqtwttitcd ; } else { hzexholftp [ 1 ] = mzxp24sosq_idx_0
; } o2y45zbt2m4 . avq3ivsxoj [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
avq3ivsxoj [ 1 ] = o2y45zbt2m4 . pvehregqxn ; o2y45zbt2m4 . avq3ivsxoj [ 2 ]
= o2y45zbt2m4 . fqzn4ufnnm ; hkwf2out3d = ( o2y45zbt2m4 . avq3ivsxoj [ 0 ] *
o2y45zbt2m4 . avq3ivsxoj [ 0 ] + o2y45zbt2m4 . avq3ivsxoj [ 1 ] * o2y45zbt2m4
. avq3ivsxoj [ 1 ] ) + o2y45zbt2m4 . avq3ivsxoj [ 2 ] * o2y45zbt2m4 .
avq3ivsxoj [ 2 ] ; if ( hkwf2out3d < 0.0 ) { hkwf2out3d = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( hkwf2out3d ) ) ; } else { hkwf2out3d
= muDoubleScalarSqrt ( hkwf2out3d ) ; } if ( hkwf2out3d > hbv5azo3sw .
NormalizeVector_maxzero_j4hegkg3gk ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 .
avq3ivsxoj [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . avq3ivsxoj [ 1 ] ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . avq3ivsxoj [ 2 ] ; afgi1z3nug [ 3 ] =
hkwf2out3d ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . avq3ivsxoj [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = o2y45zbt2m4 . avq3ivsxoj [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= o2y45zbt2m4 . avq3ivsxoj [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_aefuqipo3z ; } eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; njulo3ucsg = (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . fjxh2v44zo + o2y45zbt2m4 . ei2iplcloo *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . dpw0lpwtco * eb1fnz3txo [ 2 ] ; hkwf2out3d
= muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . jhqy0zwmu3 +
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
mzxp24sosq_idx_0 = hkwf2out3d + o2y45zbt2m4 . fk5zqxuz3h [ 0 ] ; if (
mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_llltpjmasd ) { jr4rimgbh0
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_llltpjmasd ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_od1cxjykdq ) { jr4rimgbh0
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_od1cxjykdq ; } else { jr4rimgbh0 [ 0
] = mzxp24sosq_idx_0 ; } mzxp24sosq_idx_0 = ardt1y5x0d_idx_1 + o2y45zbt2m4 .
fk5zqxuz3h [ 1 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_llltpjmasd ) { jr4rimgbh0 [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_llltpjmasd ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_od1cxjykdq ) { jr4rimgbh0 [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_od1cxjykdq ; } else { jr4rimgbh0 [ 1 ] = mzxp24sosq_idx_0
; } o2y45zbt2m4 . cztzhrui22 [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
cztzhrui22 [ 1 ] = o2y45zbt2m4 . pvehregqxn ; o2y45zbt2m4 . cztzhrui22 [ 2 ]
= o2y45zbt2m4 . fqzn4ufnnm ; emiiavfkh1 = ( o2y45zbt2m4 . cztzhrui22 [ 0 ] *
o2y45zbt2m4 . cztzhrui22 [ 0 ] + o2y45zbt2m4 . cztzhrui22 [ 1 ] * o2y45zbt2m4
. cztzhrui22 [ 1 ] ) + o2y45zbt2m4 . cztzhrui22 [ 2 ] * o2y45zbt2m4 .
cztzhrui22 [ 2 ] ; if ( emiiavfkh1 < 0.0 ) { emiiavfkh1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( emiiavfkh1 ) ) ; } else { emiiavfkh1
= muDoubleScalarSqrt ( emiiavfkh1 ) ; } if ( emiiavfkh1 > hbv5azo3sw .
NormalizeVector_maxzero_g4yscxcbyk ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 .
cztzhrui22 [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . cztzhrui22 [ 1 ] ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . cztzhrui22 [ 2 ] ; afgi1z3nug [ 3 ] =
emiiavfkh1 ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . cztzhrui22 [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = o2y45zbt2m4 . cztzhrui22 [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= o2y45zbt2m4 . cztzhrui22 [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_d3tr2oyhj4 ; } eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hkwf2out3d = (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . kp0ottklv2 + o2y45zbt2m4 . d4h0eb221l *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . ajeydhy34x * eb1fnz3txo [ 2 ] ; emiiavfkh1
= muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . d224533rgj +
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
mzxp24sosq_idx_0 = emiiavfkh1 + o2y45zbt2m4 . gqbzn03dkr [ 0 ] ; if (
mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_e1cwi1gybf ) { j4yy5fljso
[ 0 ] = hbv5azo3sw . Saturation_UpperSat_e1cwi1gybf ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_ajttgxrnng ) { j4yy5fljso
[ 0 ] = hbv5azo3sw . Saturation_LowerSat_ajttgxrnng ; } else { j4yy5fljso [ 0
] = mzxp24sosq_idx_0 ; } mzxp24sosq_idx_0 = au32y1wfjp_idx_1 + o2y45zbt2m4 .
gqbzn03dkr [ 1 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_e1cwi1gybf ) { j4yy5fljso [ 1 ] = hbv5azo3sw .
Saturation_UpperSat_e1cwi1gybf ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_ajttgxrnng ) { j4yy5fljso [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_ajttgxrnng ; } else { j4yy5fljso [ 1 ] = mzxp24sosq_idx_0
; } n11z2qtnyp ( bz3m03sk4h , prirsvmw33 , ilztr2qrue , hzexholftp ,
jr4rimgbh0 , j4yy5fljso , & o2y45zbt2m4 . ik12ax5qrt ) ; o2y45zbt2m4 .
mdvmrfnqkz [ 0 ] = o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ; o2y45zbt2m4 . mdvmrfnqkz
[ 1 ] = o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ; o2y45zbt2m4 . mdvmrfnqkz [ 2 ] =
o2y45zbt2m4 . mvqp5l5ufq [ 2 ] ; } if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . febtg0cpg5 != 0 ) { n1mubcupv31 . cjfebnqw1p = o2y45zbt2m4 .
hckf2ailv0 ; } emiiavfkh1 = n1mubcupv31 . cjfebnqw1p ; } else { emiiavfkh1 =
n1mubcupv31 . cjfebnqw1p ; } hkwf2out3d = o2y45zbt2m4 . mrzwmqiqje / (
hbv5azo3sw . e_Value * muDoubleScalarCos ( emiiavfkh1 ) + hbv5azo3sw .
Constant_Value_azddlyivju ) ; njulo3ucsg = muDoubleScalarCos ( emiiavfkh1 ) ;
gi3b15wlwk = muDoubleScalarSin ( emiiavfkh1 ) ; o2y45zbt2m4 . fj4e2b5bch [ 0
] = ( ( njulo3ucsg * o2y45zbt2m4 . ightd03wbw + o2y45zbt2m4 . kyx4elghw5 *
gi3b15wlwk ) + o2y45zbt2m4 . boco0ydrhx ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - pygfqx1xx2 [ 0 ] ; o2y45zbt2m4 .
fj4e2b5bch [ 1 ] = ( ( njulo3ucsg * o2y45zbt2m4 . kgibrayejc + o2y45zbt2m4 .
klod4yztvz * gi3b15wlwk ) + o2y45zbt2m4 . gr0fttz1x3 ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - pygfqx1xx2 [ 1 ] ; o2y45zbt2m4 .
fj4e2b5bch [ 2 ] = ( ( njulo3ucsg * o2y45zbt2m4 . lj2hsiefmb + o2y45zbt2m4 .
pqwrcdv51y * gi3b15wlwk ) + o2y45zbt2m4 . gkj1c4ecpo ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - pygfqx1xx2 [ 2 ] ; njulo3ucsg = ( (
l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo * dxjf4qcaeo ) + k1qmoe0iaw * k1qmoe0iaw
) + nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . ojltdhe2we != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . ojltdhe2we = 0 ; } hkwf2out3d = muDoubleScalarSqrt (
njulo3ucsg ) ; } else if ( njulo3ucsg < 0.0 ) { hkwf2out3d = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( njulo3ucsg ) ) ; hrxu5rhe3af .
ojltdhe2we = 1 ; } else { hkwf2out3d = muDoubleScalarSqrt ( njulo3ucsg ) ; }
njulo3ucsg = k1qmoe0iaw / hkwf2out3d ; gi3b15wlwk = nm4t0wvumv / hkwf2out3d ;
flm04egj0r = dxjf4qcaeo / hkwf2out3d ; hkwf2out3d = l1pix2zzzf / hkwf2out3d ;
o2y45zbt2m4 . k2zlzdldai [ 0 ] = ( ( ( hbv5azo3sw . Constant_Value_hn3g4e2bdf
- njulo3ucsg * njulo3ucsg ) - gi3b15wlwk * gi3b15wlwk ) * hbv5azo3sw .
Gain2_Gain_nben4kjacq * o2y45zbt2m4 . fj4e2b5bch [ 0 ] + ( flm04egj0r *
njulo3ucsg + hkwf2out3d * gi3b15wlwk ) * hbv5azo3sw . Gain_Gain_kewyutalpa *
o2y45zbt2m4 . fj4e2b5bch [ 1 ] ) + ( flm04egj0r * gi3b15wlwk - hkwf2out3d *
njulo3ucsg ) * hbv5azo3sw . Gain1_Gain_e5ngzsvcli * o2y45zbt2m4 . fj4e2b5bch
[ 2 ] ; o2y45zbt2m4 . k2zlzdldai [ 1 ] = ( ( ( hbv5azo3sw .
Constant_Value_cinqqywm1t - flm04egj0r * flm04egj0r ) - gi3b15wlwk *
gi3b15wlwk ) * hbv5azo3sw . Gain2_Gain_d4fbbaxwpd * o2y45zbt2m4 . fj4e2b5bch
[ 1 ] + ( flm04egj0r * njulo3ucsg - hkwf2out3d * gi3b15wlwk ) * hbv5azo3sw .
Gain_Gain_fouuav1ki1 * o2y45zbt2m4 . fj4e2b5bch [ 0 ] ) + ( hkwf2out3d *
flm04egj0r + njulo3ucsg * gi3b15wlwk ) * hbv5azo3sw . Gain1_Gain_lq4olh4tnx *
o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; o2y45zbt2m4 . k2zlzdldai [ 2 ] = ( (
flm04egj0r * gi3b15wlwk + hkwf2out3d * njulo3ucsg ) * hbv5azo3sw .
Gain_Gain_kc1cpqscqf * o2y45zbt2m4 . fj4e2b5bch [ 0 ] + ( njulo3ucsg *
gi3b15wlwk - hkwf2out3d * flm04egj0r ) * hbv5azo3sw . Gain1_Gain_n4q3gythod *
o2y45zbt2m4 . fj4e2b5bch [ 1 ] ) + ( ( hbv5azo3sw . Constant_Value_aglfz4cib2
- flm04egj0r * flm04egj0r ) - njulo3ucsg * njulo3ucsg ) * hbv5azo3sw .
Gain2_Gain_arhr50dupm * o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; if ( ssIsSampleHit (
rtS , 5 , 0 ) ) { o2y45zbt2m4 . aoe02aounf [ 0 ] = o2y45zbt2m4 . k2zlzdldai [
0 ] ; o2y45zbt2m4 . aoe02aounf [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ;
o2y45zbt2m4 . aoe02aounf [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ; ntqepze5kl
= ( o2y45zbt2m4 . aoe02aounf [ 0 ] * o2y45zbt2m4 . aoe02aounf [ 0 ] +
o2y45zbt2m4 . aoe02aounf [ 1 ] * o2y45zbt2m4 . aoe02aounf [ 1 ] ) +
o2y45zbt2m4 . aoe02aounf [ 2 ] * o2y45zbt2m4 . aoe02aounf [ 2 ] ; if (
ntqepze5kl < 0.0 ) { ntqepze5kl = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ntqepze5kl ) ) ; } else { ntqepze5kl = muDoubleScalarSqrt ( ntqepze5kl ) ; }
if ( ntqepze5kl > hbv5azo3sw . NormalizeVector_maxzero_bhjxf3hbxp ) {
afgi1z3nug [ 0 ] = o2y45zbt2m4 . aoe02aounf [ 0 ] ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . aoe02aounf [ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . aoe02aounf
[ 2 ] ; afgi1z3nug [ 3 ] = ntqepze5kl ; } else { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . aoe02aounf [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 .
aoe02aounf [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . aoe02aounf [ 2 ] *
0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_pu1egqm5wd ; }
eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; hkwf2out3d = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . gegkjzomxm
+ o2y45zbt2m4 . kd1qxjhyrr * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . pgs5royztd *
eb1fnz3txo [ 2 ] ; ntqepze5kl = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . olg5gqva4k + o2y45zbt2m4 . ebby2e0eey * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . kc5uinuva1 * eb1fnz3txo [ 2 ] , hkwf2out3d ) ; hkwf2out3d =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ny5fqojp01 +
o2y45zbt2m4 . g42bdhp2mr * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . mwkxuoztcf *
eb1fnz3txo [ 2 ] , hkwf2out3d ) ; clod0whodw_idx_0 = hbv5azo3sw .
Constant_Value_k3ydr0xveb [ 0 ] + ntqepze5kl ; ntqepze5kl = hbv5azo3sw .
Constant_Value_k3ydr0xveb [ 1 ] + hkwf2out3d ; } if ( ssIsSampleHit ( rtS , 6
, 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . mkpovvsjoj , & hbv5azo3sw .
RandomSource1_MeanVal_bvk35h21mf , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_k1b5meiqjj , 1 , hrxu5rhe3af . n10hslmo2a , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { mzxp24sosq_idx_0 =
clod0whodw_idx_0 + o2y45zbt2m4 . mkpovvsjoj [ 0 ] ; if ( mzxp24sosq_idx_0 >
hbv5azo3sw . Saturation_UpperSat_hvo4j1520s ) { el4y0ewlg2 [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_hvo4j1520s ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw
. Saturation_LowerSat_anwhzkhsgm ) { el4y0ewlg2 [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_anwhzkhsgm ; } else { el4y0ewlg2 [ 0 ] = mzxp24sosq_idx_0
; } mzxp24sosq_idx_0 = ntqepze5kl + o2y45zbt2m4 . mkpovvsjoj [ 1 ] ; if (
mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_hvo4j1520s ) { el4y0ewlg2
[ 1 ] = hbv5azo3sw . Saturation_UpperSat_hvo4j1520s ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_anwhzkhsgm ) { el4y0ewlg2
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_anwhzkhsgm ; } else { el4y0ewlg2 [ 1
] = mzxp24sosq_idx_0 ; } o2y45zbt2m4 . hiigrn3uvx [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . hiigrn3uvx [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . hiigrn3uvx [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
clod0whodw_idx_0 = ( o2y45zbt2m4 . hiigrn3uvx [ 0 ] * o2y45zbt2m4 .
hiigrn3uvx [ 0 ] + o2y45zbt2m4 . hiigrn3uvx [ 1 ] * o2y45zbt2m4 . hiigrn3uvx
[ 1 ] ) + o2y45zbt2m4 . hiigrn3uvx [ 2 ] * o2y45zbt2m4 . hiigrn3uvx [ 2 ] ;
if ( clod0whodw_idx_0 < 0.0 ) { clod0whodw_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( clod0whodw_idx_0 ) ) ; } else { clod0whodw_idx_0 =
muDoubleScalarSqrt ( clod0whodw_idx_0 ) ; } if ( clod0whodw_idx_0 >
hbv5azo3sw . NormalizeVector_maxzero_nx4f2adafg ) { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . hiigrn3uvx [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . hiigrn3uvx
[ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . hiigrn3uvx [ 2 ] ; afgi1z3nug [ 3 ]
= clod0whodw_idx_0 ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . hiigrn3uvx [ 0
] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . hiigrn3uvx [ 1 ] * 0.0 ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . hiigrn3uvx [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] =
hbv5azo3sw . Constant_Value_oqac1ckjba ; } eb1fnz3txo [ 0 ] = afgi1z3nug [ 0
] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ]
; eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; ntqepze5kl = (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . am2ydxy3tg + o2y45zbt2m4 . aayx0clngf *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . imjovcvzmj * eb1fnz3txo [ 2 ] ;
clod0whodw_idx_0 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
ewg4gsarwm + o2y45zbt2m4 . eqlu1laly1 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
c4imsujsyj * eb1fnz3txo [ 2 ] , ntqepze5kl ) ; ntqepze5kl =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . myxilkpyto +
o2y45zbt2m4 . jyoiaqgash * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . nfvbvcsgaf *
eb1fnz3txo [ 2 ] , ntqepze5kl ) ; epx0klrbgl_idx_0 = hbv5azo3sw .
Constant_Value_cknsmwduvj [ 0 ] + clod0whodw_idx_0 ; epx0klrbgl_idx_1 =
hbv5azo3sw . Constant_Value_cknsmwduvj [ 1 ] + ntqepze5kl ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . nyimkzd5hq , &
hbv5azo3sw . RandomSource1_MeanVal_cgugych5h2 , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_pdcijtaj4d , 1 , hrxu5rhe3af . j13dkj5h0s , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { mzxp24sosq_idx_0 =
epx0klrbgl_idx_0 + o2y45zbt2m4 . nyimkzd5hq [ 0 ] ; if ( mzxp24sosq_idx_0 >
hbv5azo3sw . Saturation_UpperSat_m5walzmpht ) { mgirxq514b [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_m5walzmpht ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw
. Saturation_LowerSat_kiy0a1gdvs ) { mgirxq514b [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_kiy0a1gdvs ; } else { mgirxq514b [ 0 ] = mzxp24sosq_idx_0
; } mzxp24sosq_idx_0 = epx0klrbgl_idx_1 + o2y45zbt2m4 . nyimkzd5hq [ 1 ] ; if
( mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_m5walzmpht ) {
mgirxq514b [ 1 ] = hbv5azo3sw . Saturation_UpperSat_m5walzmpht ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_kiy0a1gdvs ) { mgirxq514b
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_kiy0a1gdvs ; } else { mgirxq514b [ 1
] = mzxp24sosq_idx_0 ; } o2y45zbt2m4 . fllsexxjfy [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fllsexxjfy [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . fllsexxjfy [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
omuhzl1dir = ( o2y45zbt2m4 . fllsexxjfy [ 0 ] * o2y45zbt2m4 . fllsexxjfy [ 0
] + o2y45zbt2m4 . fllsexxjfy [ 1 ] * o2y45zbt2m4 . fllsexxjfy [ 1 ] ) +
o2y45zbt2m4 . fllsexxjfy [ 2 ] * o2y45zbt2m4 . fllsexxjfy [ 2 ] ; if (
omuhzl1dir < 0.0 ) { omuhzl1dir = - muDoubleScalarSqrt ( muDoubleScalarAbs (
omuhzl1dir ) ) ; } else { omuhzl1dir = muDoubleScalarSqrt ( omuhzl1dir ) ; }
if ( omuhzl1dir > hbv5azo3sw . NormalizeVector_maxzero_j5wdotj0ar ) {
afgi1z3nug [ 0 ] = o2y45zbt2m4 . fllsexxjfy [ 0 ] ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . fllsexxjfy [ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . fllsexxjfy
[ 2 ] ; afgi1z3nug [ 3 ] = omuhzl1dir ; } else { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . fllsexxjfy [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 .
fllsexxjfy [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . fllsexxjfy [ 2 ] *
0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_etis5qgp2s ; }
eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; clod0whodw_idx_0 = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
aqvhjylunl + o2y45zbt2m4 . pmy5icug2k * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
pxdeyipxtr * eb1fnz3txo [ 2 ] ; omuhzl1dir = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . bzsae5g150 + o2y45zbt2m4 . fhwu2rpyxm *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . db5wedrkq4 * eb1fnz3txo [ 2 ] ,
clod0whodw_idx_0 ) ; clod0whodw_idx_0 = muDoubleScalarAtan2 ( ( eb1fnz3txo [
0 ] * o2y45zbt2m4 . fxqr3to5iu + o2y45zbt2m4 . jzcgup51f2 * eb1fnz3txo [ 1 ]
) + o2y45zbt2m4 . b3deffzvww * eb1fnz3txo [ 2 ] , clod0whodw_idx_0 ) ;
omuhzl1dir += hbv5azo3sw . Constant_Value_mxxxqc2s25 [ 0 ] ; oouy1fopfw_idx_1
= hbv5azo3sw . Constant_Value_mxxxqc2s25 [ 1 ] + clod0whodw_idx_0 ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . cddswdr3cl , &
hbv5azo3sw . RandomSource1_MeanVal_d4idhl1tz1 , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_crqc3mkc0f , 1 , hrxu5rhe3af . k40rhthviy , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { mzxp24sosq_idx_0 = omuhzl1dir +
o2y45zbt2m4 . cddswdr3cl [ 0 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_m5kmh5w5uw ) { n4cr5voz3i [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_m5kmh5w5uw ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_i04nwcukho ) { n4cr5voz3i [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_i04nwcukho ; } else { n4cr5voz3i [ 0 ] = mzxp24sosq_idx_0
; } mzxp24sosq_idx_0 = oouy1fopfw_idx_1 + o2y45zbt2m4 . cddswdr3cl [ 1 ] ; if
( mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw ) {
n4cr5voz3i [ 1 ] = hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_i04nwcukho ) { n4cr5voz3i
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_i04nwcukho ; } else { n4cr5voz3i [ 1
] = mzxp24sosq_idx_0 ; } o2y45zbt2m4 . obyw5bjsqt [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . obyw5bjsqt [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . obyw5bjsqt [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
mnqgflhgig = ( o2y45zbt2m4 . obyw5bjsqt [ 0 ] * o2y45zbt2m4 . obyw5bjsqt [ 0
] + o2y45zbt2m4 . obyw5bjsqt [ 1 ] * o2y45zbt2m4 . obyw5bjsqt [ 1 ] ) +
o2y45zbt2m4 . obyw5bjsqt [ 2 ] * o2y45zbt2m4 . obyw5bjsqt [ 2 ] ; if (
mnqgflhgig < 0.0 ) { mnqgflhgig = - muDoubleScalarSqrt ( muDoubleScalarAbs (
mnqgflhgig ) ) ; } else { mnqgflhgig = muDoubleScalarSqrt ( mnqgflhgig ) ; }
if ( mnqgflhgig > hbv5azo3sw . NormalizeVector_maxzero_etigbudinl ) {
afgi1z3nug [ 0 ] = o2y45zbt2m4 . obyw5bjsqt [ 0 ] ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . obyw5bjsqt [ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . obyw5bjsqt
[ 2 ] ; afgi1z3nug [ 3 ] = mnqgflhgig ; } else { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . obyw5bjsqt [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 .
obyw5bjsqt [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . obyw5bjsqt [ 2 ] *
0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_loxooi2xox ; }
eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; omuhzl1dir = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . fuxsypdw5b
+ o2y45zbt2m4 . ibibxo1hc5 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . e0g1epmzzc *
eb1fnz3txo [ 2 ] ; mnqgflhgig = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] *
o2y45zbt2m4 . pmjdaqsrgv + o2y45zbt2m4 . cepjmd5gi4 * eb1fnz3txo [ 1 ] ) +
o2y45zbt2m4 . a3l2vrrg5t * eb1fnz3txo [ 2 ] , omuhzl1dir ) ; omuhzl1dir =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ivk2auaags +
o2y45zbt2m4 . ks0a4vmt2y * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . hmdscxhrrq *
eb1fnz3txo [ 2 ] , omuhzl1dir ) ; mnqgflhgig += hbv5azo3sw .
Constant_Value_pxpcd5bk3c [ 0 ] ; b2dseb5akc_idx_1 = hbv5azo3sw .
Constant_Value_pxpcd5bk3c [ 1 ] + omuhzl1dir ; } if ( ssIsSampleHit ( rtS , 6
, 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . a2f0ypmsuy , & hbv5azo3sw .
RandomSource1_MeanVal_n5f3r1zvmv , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_blin0jucej , 1 , hrxu5rhe3af . jjpbiyjnrh , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { mzxp24sosq_idx_0 = mnqgflhgig +
o2y45zbt2m4 . a2f0ypmsuy [ 0 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_c4xiqwgxlz ) { naxh1rmprg [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_c4xiqwgxlz ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_pi2aujffw1 ) { naxh1rmprg [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_pi2aujffw1 ; } else { naxh1rmprg [ 0 ] = mzxp24sosq_idx_0
; } mzxp24sosq_idx_0 = b2dseb5akc_idx_1 + o2y45zbt2m4 . a2f0ypmsuy [ 1 ] ; if
( mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz ) {
naxh1rmprg [ 1 ] = hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_pi2aujffw1 ) { naxh1rmprg
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_pi2aujffw1 ; } else { naxh1rmprg [ 1
] = mzxp24sosq_idx_0 ; } o2y45zbt2m4 . fp4h0u1qqq [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fp4h0u1qqq [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . fp4h0u1qqq [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
b2dseb5akc_idx_1 = ( o2y45zbt2m4 . fp4h0u1qqq [ 0 ] * o2y45zbt2m4 .
fp4h0u1qqq [ 0 ] + o2y45zbt2m4 . fp4h0u1qqq [ 1 ] * o2y45zbt2m4 . fp4h0u1qqq
[ 1 ] ) + o2y45zbt2m4 . fp4h0u1qqq [ 2 ] * o2y45zbt2m4 . fp4h0u1qqq [ 2 ] ;
if ( b2dseb5akc_idx_1 < 0.0 ) { b2dseb5akc_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( b2dseb5akc_idx_1 ) ) ; } else { b2dseb5akc_idx_1 =
muDoubleScalarSqrt ( b2dseb5akc_idx_1 ) ; } if ( b2dseb5akc_idx_1 >
hbv5azo3sw . NormalizeVector_maxzero_mpxbpoayb2 ) { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . fp4h0u1qqq [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fp4h0u1qqq
[ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . fp4h0u1qqq [ 2 ] ; afgi1z3nug [ 3 ]
= b2dseb5akc_idx_1 ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . fp4h0u1qqq [ 0
] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fp4h0u1qqq [ 1 ] * 0.0 ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . fp4h0u1qqq [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] =
hbv5azo3sw . Constant_Value_h114kk0gb0 ; } eb1fnz3txo [ 0 ] = afgi1z3nug [ 0
] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ]
; eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; mnqgflhgig = (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ke44k2nvd3 + o2y45zbt2m4 . bvbwt2i4ty *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . bckqvwne10 * eb1fnz3txo [ 2 ] ;
b2dseb5akc_idx_1 = muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
mf042bbyls + o2y45zbt2m4 . pvujvtillf * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
bralaspqvj * eb1fnz3txo [ 2 ] , mnqgflhgig ) ; mnqgflhgig =
muDoubleScalarAtan2 ( ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 . pvvuqzjxh5 +
o2y45zbt2m4 . nd0vnjuzbo * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . jkdvlxhrn3 *
eb1fnz3txo [ 2 ] , mnqgflhgig ) ; mjhceqjgf1_idx_0 = hbv5azo3sw .
Constant_Value_a5pfdrbwx4 [ 0 ] + b2dseb5akc_idx_1 ; mjhceqjgf1_idx_1 =
hbv5azo3sw . Constant_Value_a5pfdrbwx4 [ 1 ] + mnqgflhgig ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . ch2k5w2dnh , &
hbv5azo3sw . RandomSource1_MeanVal_kfynkp2waz , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_dvuf3vyvl4 , 1 , hrxu5rhe3af . impwbrb5ul , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { mzxp24sosq_idx_0 =
mjhceqjgf1_idx_0 + o2y45zbt2m4 . ch2k5w2dnh [ 0 ] ; if ( mzxp24sosq_idx_0 >
hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 ) { ablvf05wvd [ 0 ] = hbv5azo3sw
. Saturation_UpperSat_mq4hmkw4m2 ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw
. Saturation_LowerSat_dqoi00mxim ) { ablvf05wvd [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_dqoi00mxim ; } else { ablvf05wvd [ 0 ] = mzxp24sosq_idx_0
; } mzxp24sosq_idx_0 = mjhceqjgf1_idx_1 + o2y45zbt2m4 . ch2k5w2dnh [ 1 ] ; if
( mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 ) {
ablvf05wvd [ 1 ] = hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_dqoi00mxim ) { ablvf05wvd
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_dqoi00mxim ; } else { ablvf05wvd [ 1
] = mzxp24sosq_idx_0 ; } o2y45zbt2m4 . fe3icz0afg [ 0 ] = o2y45zbt2m4 .
k2zlzdldai [ 0 ] ; o2y45zbt2m4 . fe3icz0afg [ 1 ] = o2y45zbt2m4 . k2zlzdldai
[ 1 ] ; o2y45zbt2m4 . fe3icz0afg [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ;
ikxunumo3i = ( o2y45zbt2m4 . fe3icz0afg [ 0 ] * o2y45zbt2m4 . fe3icz0afg [ 0
] + o2y45zbt2m4 . fe3icz0afg [ 1 ] * o2y45zbt2m4 . fe3icz0afg [ 1 ] ) +
o2y45zbt2m4 . fe3icz0afg [ 2 ] * o2y45zbt2m4 . fe3icz0afg [ 2 ] ; if (
ikxunumo3i < 0.0 ) { ikxunumo3i = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ikxunumo3i ) ) ; } else { ikxunumo3i = muDoubleScalarSqrt ( ikxunumo3i ) ; }
if ( ikxunumo3i > hbv5azo3sw . NormalizeVector_maxzero_kqylmwb1gt ) {
afgi1z3nug [ 0 ] = o2y45zbt2m4 . fe3icz0afg [ 0 ] ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . fe3icz0afg [ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . fe3icz0afg
[ 2 ] ; afgi1z3nug [ 3 ] = ikxunumo3i ; } else { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . fe3icz0afg [ 0 ] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 .
fe3icz0afg [ 1 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . fe3icz0afg [ 2 ] *
0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_kd13wd1tn5 ; }
eb1fnz3txo [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; eb1fnz3txo [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; b2dseb5akc_idx_1 = ( eb1fnz3txo [ 0 ] * o2y45zbt2m4 .
lvap1gibsy + o2y45zbt2m4 . fjgl0ynn23 * eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 .
dlywnze0gh * eb1fnz3txo [ 2 ] ; ikxunumo3i = muDoubleScalarAtan2 ( (
eb1fnz3txo [ 0 ] * o2y45zbt2m4 . ekeiqfqt15 + o2y45zbt2m4 . icooi3vgxr *
eb1fnz3txo [ 1 ] ) + o2y45zbt2m4 . nhfh5pwjge * eb1fnz3txo [ 2 ] ,
b2dseb5akc_idx_1 ) ; b2dseb5akc_idx_1 = muDoubleScalarAtan2 ( ( eb1fnz3txo [
0 ] * o2y45zbt2m4 . fu44uyydbm + o2y45zbt2m4 . kif43ukmno * eb1fnz3txo [ 1 ]
) + o2y45zbt2m4 . nrvyadhccn * eb1fnz3txo [ 2 ] , b2dseb5akc_idx_1 ) ;
ikxunumo3i += hbv5azo3sw . Constant_Value_pb14rkkk1o [ 0 ] ; pzi3xtzla3_idx_1
= hbv5azo3sw . Constant_Value_pb14rkkk1o [ 1 ] + b2dseb5akc_idx_1 ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . ipb4qp4laq , &
hbv5azo3sw . RandomSource1_MeanVal_d1pxk3satq , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_cg3jlumacb , 1 , hrxu5rhe3af . ck30ytigtq , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { mzxp24sosq_idx_0 = ikxunumo3i +
o2y45zbt2m4 . ipb4qp4laq [ 0 ] ; if ( mzxp24sosq_idx_0 > hbv5azo3sw .
Saturation_UpperSat_kiybxhvwme ) { jazbl50puz [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_kiybxhvwme ; } else if ( mzxp24sosq_idx_0 < hbv5azo3sw .
Saturation_LowerSat_lktmm4bxfn ) { jazbl50puz [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_lktmm4bxfn ; } else { jazbl50puz [ 0 ] = mzxp24sosq_idx_0
; } mzxp24sosq_idx_0 = pzi3xtzla3_idx_1 + o2y45zbt2m4 . ipb4qp4laq [ 1 ] ; if
( mzxp24sosq_idx_0 > hbv5azo3sw . Saturation_UpperSat_kiybxhvwme ) {
jazbl50puz [ 1 ] = hbv5azo3sw . Saturation_UpperSat_kiybxhvwme ; } else if (
mzxp24sosq_idx_0 < hbv5azo3sw . Saturation_LowerSat_lktmm4bxfn ) { jazbl50puz
[ 1 ] = hbv5azo3sw . Saturation_LowerSat_lktmm4bxfn ; } else { jazbl50puz [ 1
] = mzxp24sosq_idx_0 ; } n11z2qtnyp ( el4y0ewlg2 , mgirxq514b , n4cr5voz3i ,
naxh1rmprg , ablvf05wvd , jazbl50puz , & o2y45zbt2m4 . cuglwsdmbh ) ;
o2y45zbt2m4 . g4hdycezvh [ 0 ] = o2y45zbt2m4 . fj4e2b5bch [ 0 ] ; o2y45zbt2m4
. g4hdycezvh [ 1 ] = o2y45zbt2m4 . fj4e2b5bch [ 1 ] ; o2y45zbt2m4 .
g4hdycezvh [ 2 ] = o2y45zbt2m4 . fj4e2b5bch [ 2 ] ; if ( hbv5azo3sw .
Enable1_Value ) { p1airozsub [ 0 ] = o2y45zbt2m4 . g4hdycezvh [ 0 ] ;
p1airozsub [ 1 ] = o2y45zbt2m4 . g4hdycezvh [ 1 ] ; p1airozsub [ 2 ] =
o2y45zbt2m4 . g4hdycezvh [ 2 ] ; p1airozsub [ 3 ] = o2y45zbt2m4 . cuglwsdmbh
. bjttcelbng [ 0 ] ; p1airozsub [ 4 ] = o2y45zbt2m4 . cuglwsdmbh . bjttcelbng
[ 1 ] ; p1airozsub [ 5 ] = o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] ;
p1airozsub [ 6 ] = o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ; o2y45zbt2m4
. niydxw3dug = hbv5azo3sw . BlockOrdering_Value ; memcpy ( & P [ 0 ] , &
hrxu5rhe3af . buggjk4l1n [ 0 ] , 49U * sizeof ( real_T ) ) ; tmp = true ; i_p
= 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( i_p < 7 ) ) { i = 0 ; do {
exitg1 = 0 ; if ( i <= i_p - 1 ) { if ( ! ( hrxu5rhe3af . buggjk4l1n [ 7 *
i_p + i ] == 0.0 ) ) { tmp = false ; exitg1 = 1 ; } else { i ++ ; } } else {
i_p ++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2
= true ; } } if ( ! tmp ) { for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { for ( i_e =
0 ; i_e < 7 ; i_e ++ ) { P [ i_e + 7 * i_p ] = hrxu5rhe3af . buggjk4l1n [ 7 *
i_e + i_p ] ; } } qr_FYLMsjgk ( P , unusedU0 , R ) ; for ( i_p = 0 ; i_p < 7
; i_p ++ ) { for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { P [ i_e + 7 * i_p ] = R [ 7
* i_e + i_p ] ; } } } for ( i_p = 0 ; i_p < 49 ; i_p ++ ) { ikxunumo3i =
0.0026457513110645908 * P [ i_p ] ; X2 [ i_p ] = ikxunumo3i ; X2 [ i_p + 49 ]
= - ikxunumo3i ; } Sy [ 0 ] = ( 1.0 - o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [
2 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] * 2.0 ) - o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 3 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] *
2.0 ; Sy [ 3 ] = 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] *
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] + 2.0 * o2y45zbt2m4 . cuglwsdmbh
. bjttcelbng [ 0 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ; Sy [ 6 ] =
- 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 0 ] * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 2 ] + 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [
1 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ; Sy [ 1 ] = 2.0 *
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh .
bjttcelbng [ 2 ] - 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 0 ] *
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ; Sy [ 4 ] = ( 1.0 - o2y45zbt2m4
. cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ]
* 2.0 ) - o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 3 ] * 2.0 ; Sy [ 7 ] = 2.0 * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 0 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] +
2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] * o2y45zbt2m4 . cuglwsdmbh
. bjttcelbng [ 3 ] ; Sy [ 2 ] = 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [
0 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] + 2.0 * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ;
Sy [ 5 ] = - 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 0 ] * o2y45zbt2m4
. cuglwsdmbh . bjttcelbng [ 1 ] + 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng
[ 2 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ; Sy [ 8 ] = ( 1.0 -
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh .
bjttcelbng [ 1 ] * 2.0 ) - o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] *
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] * 2.0 ; for ( i = 0 ; i < 14 ; i
++ ) { for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { X2 [ i_p + 7 * i ] += hrxu5rhe3af
. j3ergpk3vu [ i_p ] ; } b_I [ 0 ] = ( 1.0 - X2 [ 7 * i + 2 ] * X2 [ 7 * i +
2 ] * 2.0 ) - X2 [ 7 * i + 3 ] * X2 [ 7 * i + 3 ] * 2.0 ; b_I [ 3 ] = X2 [ 7
* i + 1 ] * 2.0 * X2 [ 7 * i + 2 ] + X2 [ 7 * i ] * 2.0 * X2 [ 7 * i + 3 ] ;
b_I [ 6 ] = X2 [ 7 * i + 1 ] * 2.0 * X2 [ 7 * i + 3 ] + X2 [ 7 * i ] * - 2.0
* X2 [ 7 * i + 2 ] ; b_I [ 1 ] = X2 [ 7 * i + 1 ] * 2.0 * X2 [ 7 * i + 2 ] -
X2 [ 7 * i ] * 2.0 * X2 [ 7 * i + 3 ] ; b_I [ 4 ] = ( 1.0 - X2 [ 7 * i + 1 ]
* X2 [ 7 * i + 1 ] * 2.0 ) - X2 [ 7 * i + 3 ] * X2 [ 7 * i + 3 ] * 2.0 ; b_I
[ 7 ] = X2 [ 7 * i + 2 ] * 2.0 * X2 [ 7 * i + 3 ] + X2 [ 7 * i ] * 2.0 * X2 [
7 * i + 1 ] ; b_I [ 2 ] = X2 [ 7 * i + 1 ] * 2.0 * X2 [ 7 * i + 3 ] + X2 [ 7
* i ] * 2.0 * X2 [ 7 * i + 2 ] ; b_I [ 5 ] = X2 [ 7 * i + 2 ] * 2.0 * X2 [ 7
* i + 3 ] + X2 [ 7 * i ] * - 2.0 * X2 [ 7 * i + 1 ] ; b_I [ 8 ] = ( 1.0 - X2
[ 7 * i + 1 ] * X2 [ 7 * i + 1 ] * 2.0 ) - X2 [ 7 * i + 2 ] * X2 [ 7 * i + 2
] * 2.0 ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { eb1fnz3txo [ i_p ] = 0.0 ; for
( i_e = 0 ; i_e < 3 ; i_e ++ ) { tmp_p [ i_p + 3 * i_e ] = 0.0 ; tmp_p [ i_p
+ 3 * i_e ] += b_I [ 3 * i_e ] * Sy [ i_p ] ; tmp_p [ i_p + 3 * i_e ] += b_I
[ 3 * i_e + 1 ] * Sy [ i_p + 3 ] ; tmp_p [ i_p + 3 * i_e ] += b_I [ 3 * i_e +
2 ] * Sy [ i_p + 6 ] ; eb1fnz3txo [ i_p ] += tmp_p [ 3 * i_e + i_p ] *
p1airozsub [ i_e ] ; } } Y2 [ i << 1 ] = muDoubleScalarAtan2 ( eb1fnz3txo [ 0
] , eb1fnz3txo [ 2 ] ) ; Y2 [ ( i << 1 ) + 1 ] = muDoubleScalarAtan2 (
eb1fnz3txo [ 1 ] , eb1fnz3txo [ 2 ] ) ; } Sy [ 0 ] = ( 1.0 - o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 2 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] *
2.0 ) - o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 3 ] * 2.0 ; Sy [ 3 ] = 2.0 * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] +
2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 0 ] * o2y45zbt2m4 . cuglwsdmbh
. bjttcelbng [ 3 ] ; Sy [ 6 ] = - 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng
[ 0 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] + 2.0 * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ;
Sy [ 1 ] = 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 2 ] - 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [
0 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ; Sy [ 4 ] = ( 1.0 -
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh .
bjttcelbng [ 1 ] * 2.0 ) - o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] *
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] * 2.0 ; Sy [ 7 ] = 2.0 *
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 0 ] * o2y45zbt2m4 . cuglwsdmbh .
bjttcelbng [ 1 ] + 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] *
o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ; Sy [ 2 ] = 2.0 * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 0 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] +
2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4 . cuglwsdmbh
. bjttcelbng [ 3 ] ; Sy [ 5 ] = - 2.0 * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng
[ 0 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] + 2.0 * o2y45zbt2m4 .
cuglwsdmbh . bjttcelbng [ 2 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 3 ] ;
Sy [ 8 ] = ( 1.0 - o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 1 ] * o2y45zbt2m4
. cuglwsdmbh . bjttcelbng [ 1 ] * 2.0 ) - o2y45zbt2m4 . cuglwsdmbh .
bjttcelbng [ 2 ] * o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 2 ] * 2.0 ; b_I [
0 ] = ( 1.0 - hrxu5rhe3af . j3ergpk3vu [ 2 ] * hrxu5rhe3af . j3ergpk3vu [ 2 ]
* 2.0 ) - hrxu5rhe3af . j3ergpk3vu [ 3 ] * hrxu5rhe3af . j3ergpk3vu [ 3 ] *
2.0 ; b_I [ 3 ] = 2.0 * hrxu5rhe3af . j3ergpk3vu [ 1 ] * hrxu5rhe3af .
j3ergpk3vu [ 2 ] + 2.0 * hrxu5rhe3af . j3ergpk3vu [ 0 ] * hrxu5rhe3af .
j3ergpk3vu [ 3 ] ; b_I [ 6 ] = - 2.0 * hrxu5rhe3af . j3ergpk3vu [ 0 ] *
hrxu5rhe3af . j3ergpk3vu [ 2 ] + 2.0 * hrxu5rhe3af . j3ergpk3vu [ 1 ] *
hrxu5rhe3af . j3ergpk3vu [ 3 ] ; b_I [ 1 ] = 2.0 * hrxu5rhe3af . j3ergpk3vu [
1 ] * hrxu5rhe3af . j3ergpk3vu [ 2 ] - 2.0 * hrxu5rhe3af . j3ergpk3vu [ 0 ] *
hrxu5rhe3af . j3ergpk3vu [ 3 ] ; b_I [ 4 ] = ( 1.0 - hrxu5rhe3af . j3ergpk3vu
[ 1 ] * hrxu5rhe3af . j3ergpk3vu [ 1 ] * 2.0 ) - hrxu5rhe3af . j3ergpk3vu [ 3
] * hrxu5rhe3af . j3ergpk3vu [ 3 ] * 2.0 ; b_I [ 7 ] = 2.0 * hrxu5rhe3af .
j3ergpk3vu [ 0 ] * hrxu5rhe3af . j3ergpk3vu [ 1 ] + 2.0 * hrxu5rhe3af .
j3ergpk3vu [ 2 ] * hrxu5rhe3af . j3ergpk3vu [ 3 ] ; b_I [ 2 ] = 2.0 *
hrxu5rhe3af . j3ergpk3vu [ 0 ] * hrxu5rhe3af . j3ergpk3vu [ 2 ] + 2.0 *
hrxu5rhe3af . j3ergpk3vu [ 1 ] * hrxu5rhe3af . j3ergpk3vu [ 3 ] ; b_I [ 5 ] =
- 2.0 * hrxu5rhe3af . j3ergpk3vu [ 0 ] * hrxu5rhe3af . j3ergpk3vu [ 1 ] + 2.0
* hrxu5rhe3af . j3ergpk3vu [ 2 ] * hrxu5rhe3af . j3ergpk3vu [ 3 ] ; b_I [ 8 ]
= ( 1.0 - hrxu5rhe3af . j3ergpk3vu [ 1 ] * hrxu5rhe3af . j3ergpk3vu [ 1 ] *
2.0 ) - hrxu5rhe3af . j3ergpk3vu [ 2 ] * hrxu5rhe3af . j3ergpk3vu [ 2 ] * 2.0
; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { eb1fnz3txo [ i_p ] = 0.0 ; for ( i_e =
0 ; i_e < 3 ; i_e ++ ) { tmp_p [ i_p + 3 * i_e ] = 0.0 ; tmp_p [ i_p + 3 *
i_e ] += b_I [ 3 * i_e ] * Sy [ i_p ] ; tmp_p [ i_p + 3 * i_e ] += b_I [ 3 *
i_e + 1 ] * Sy [ i_p + 3 ] ; tmp_p [ i_p + 3 * i_e ] += b_I [ 3 * i_e + 2 ] *
Sy [ i_p + 6 ] ; eb1fnz3txo [ i_p ] += tmp_p [ 3 * i_e + i_p ] * p1airozsub [
i_e ] ; } } tmp_e [ 0 ] = 0.999996999998 ; tmp_e [ 1 ] = -
0.071428642857214286 ; tmp_i [ 0 ] = muDoubleScalarAtan2 ( eb1fnz3txo [ 0 ] ,
eb1fnz3txo [ 2 ] ) ; tmp_i [ 1 ] = muDoubleScalarAtan2 ( eb1fnz3txo [ 1 ] ,
eb1fnz3txo [ 2 ] ) ; UTMeanCovSqrt_Nsd9dLEK ( Wmean , tmp_e , - 999999.0 ,
tmp_i , Y2 , hrxu5rhe3af . j3ergpk3vu , X2 , p2ib5fluuc , qSunSensor , Pxy )
; afgi1z3nug [ 1 ] = 0.0 ; afgi1z3nug [ 2 ] = 0.0 ; afgi1z3nug [ 0 ] = 1.0 ;
afgi1z3nug [ 3 ] = 1.0 ; qrFactor_yGbRjQTg ( afgi1z3nug , qSunSensor ,
hbv5azo3sw . R1_Value ) ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { for ( i_e = 0
; i_e < 7 ; i_e ++ ) { hrxu5rhe3af . buggjk4l1n [ i_e + 7 * i_p ] = P [ 7 *
i_e + i_p ] ; } } tmp_e [ 0 ] = o2y45zbt2m4 . cuglwsdmbh . m4ihnbxfaf [ 0 ] -
p2ib5fluuc [ 0 ] ; tmp_e [ 1 ] = o2y45zbt2m4 . cuglwsdmbh . m4ihnbxfaf [ 1 ]
- p2ib5fluuc [ 1 ] ; UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0 (
hrxu5rhe3af . j3ergpk3vu , hrxu5rhe3af . buggjk4l1n , tmp_e , Pxy ,
qSunSensor ) ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af .
jkbsaxmqju ) ; } } if ( hbv5azo3sw . Enable2_Value ) { o2y45zbt2m4 .
nh40mtprpn = o2y45zbt2m4 . niydxw3dug ; memcpy ( & P [ 0 ] , & hrxu5rhe3af .
buggjk4l1n [ 0 ] , 49U * sizeof ( real_T ) ) ; tmp = true ; i_p = 0 ; exitg2
= false ; while ( ( ! exitg2 ) && ( i_p < 7 ) ) { i = 0 ; do { exitg1 = 0 ;
if ( i <= i_p - 1 ) { if ( ! ( hrxu5rhe3af . buggjk4l1n [ 7 * i_p + i ] ==
0.0 ) ) { tmp = false ; exitg1 = 1 ; } else { i ++ ; } } else { i_p ++ ;
exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ;
} } if ( ! tmp ) { for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { for ( i_e = 0 ; i_e <
7 ; i_e ++ ) { P [ i_e + 7 * i_p ] = hrxu5rhe3af . buggjk4l1n [ 7 * i_e + i_p
] ; } } qr_FYLMsjgk ( P , unusedU0 , R ) ; for ( i_p = 0 ; i_p < 7 ; i_p ++ )
{ for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { P [ i_e + 7 * i_p ] = R [ 7 * i_e +
i_p ] ; } } } for ( i_p = 0 ; i_p < 49 ; i_p ++ ) { ikxunumo3i =
0.0026457513110645908 * P [ i_p ] ; X2 [ i_p ] = ikxunumo3i ; X2 [ i_p + 49 ]
= - ikxunumo3i ; } for ( i = 0 ; i < 14 ; i ++ ) { for ( i_p = 0 ; i_p < 7 ;
i_p ++ ) { X2 [ i_p + 7 * i ] += hrxu5rhe3af . j3ergpk3vu [ i_p ] ; } Y2 [ i
<< 1 ] = 0.0 ; Y2 [ ( i << 1 ) + 1 ] = 0.0 ; } tmp_e [ 0 ] = 0.999996999998 ;
tmp_e [ 1 ] = - 0.071428642857214286 ; tmp_i [ 0 ] = 0.0 ; tmp_i [ 1 ] = 0.0
; UTMeanCovSqrt_Nsd9dLEK ( Wmean , tmp_e , - 999999.0 , tmp_i , Y2 ,
hrxu5rhe3af . j3ergpk3vu , X2 , p2ib5fluuc , qSunSensor , Pxy ) ; afgi1z3nug
[ 1 ] = 0.0 ; afgi1z3nug [ 2 ] = 0.0 ; afgi1z3nug [ 0 ] = 1.0 ; afgi1z3nug [
3 ] = 1.0 ; qrFactor_yGbRjQTg ( afgi1z3nug , qSunSensor , hbv5azo3sw .
R2_Value ) ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { for ( i_e = 0 ; i_e < 7 ;
i_e ++ ) { hrxu5rhe3af . buggjk4l1n [ i_e + 7 * i_p ] = P [ 7 * i_e + i_p ] ;
} } tmp_e [ 0 ] = o2y45zbt2m4 . ik12ax5qrt . m4ihnbxfaf [ 0 ] - p2ib5fluuc [
0 ] ; tmp_e [ 1 ] = o2y45zbt2m4 . ik12ax5qrt . m4ihnbxfaf [ 1 ] - p2ib5fluuc
[ 1 ] ; UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0 ( hrxu5rhe3af .
j3ergpk3vu , hrxu5rhe3af . buggjk4l1n , tmp_e , Pxy , qSunSensor ) ; if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . noecaey35j ) ; } } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { if ( hbv5azo3sw . Enable3_Value ) {
memcpy ( & P [ 0 ] , & hrxu5rhe3af . buggjk4l1n [ 0 ] , 49U * sizeof ( real_T
) ) ; tmp = true ; i_p = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( i_p <
7 ) ) { i = 0 ; do { exitg1 = 0 ; if ( i <= i_p - 1 ) { if ( ! ( hrxu5rhe3af
. buggjk4l1n [ 7 * i_p + i ] == 0.0 ) ) { tmp = false ; exitg1 = 1 ; } else {
i ++ ; } } else { i_p ++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if (
exitg1 == 1 ) { exitg2 = true ; } } if ( ! tmp ) { for ( i_p = 0 ; i_p < 7 ;
i_p ++ ) { for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { P [ i_e + 7 * i_p ] =
hrxu5rhe3af . buggjk4l1n [ 7 * i_e + i_p ] ; } } qr_FYLMsjgk ( P , unusedU0 ,
R ) ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { for ( i_e = 0 ; i_e < 7 ; i_e ++ )
{ P [ i_e + 7 * i_p ] = R [ 7 * i_e + i_p ] ; } } } for ( i_p = 0 ; i_p < 49
; i_p ++ ) { ikxunumo3i = 0.0026457513110645908 * P [ i_p ] ; X2 [ i_p ] =
ikxunumo3i ; X2 [ i_p + 49 ] = - ikxunumo3i ; } for ( i = 0 ; i < 14 ; i ++ )
{ for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { X2 [ i_p + 7 * i ] += hrxu5rhe3af .
j3ergpk3vu [ i_p ] ; } Y2_p [ 3 * i ] = X2 [ 7 * i + 4 ] ; Y2_p [ 3 * i + 1 ]
= X2 [ 7 * i + 5 ] ; Y2_p [ 3 * i + 2 ] = X2 [ 7 * i + 6 ] ; } tmp_e [ 0 ] =
0.999996999998 ; tmp_e [ 1 ] = - 0.071428642857214286 ; for ( i_p = 0 ; i_p <
3 ; i_p ++ ) { tmp_m [ i_p ] = hrxu5rhe3af . j3ergpk3vu [ i_p + 4 ] ; }
UTMeanCovSqrt_LWsp5ZOJ ( Wmean , tmp_e , - 999999.0 , tmp_m , Y2_p ,
hrxu5rhe3af . j3ergpk3vu , X2 , eb1fnz3txo , Sy , K ) ; memset ( & b_I [ 0 ]
, 0 , 9U * sizeof ( real_T ) ) ; b_I [ 0 ] = 1.0 ; b_I [ 4 ] = 1.0 ; b_I [ 8
] = 1.0 ; qrFactor_qzIe5HvL ( b_I , Sy , hbv5azo3sw . R3_Value ) ; for ( i_p
= 0 ; i_p < 7 ; i_p ++ ) { B [ 3 * i_p ] = K [ i_p ] ; B [ 3 * i_p + 1 ] = K
[ i_p + 7 ] ; B [ 3 * i_p + 2 ] = K [ i_p + 14 ] ; } for ( i = 0 ; i < 7 ; i
++ ) { K [ 3 * i ] = B [ 3 * i ] ; K [ 3 * i + 1 ] = B [ 3 * i + 1 ] ; K [ 3
* i + 2 ] = B [ 3 * i + 2 ] ; } trisolve_tfSt187f ( Sy , K ) ; for ( i = 0 ;
i < 7 ; i ++ ) { B [ 3 * i ] = K [ 3 * i ] ; B [ 3 * i + 1 ] = K [ 3 * i + 1
] ; B [ 3 * i + 2 ] = K [ 3 * i + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ )
{ b_I [ 3 * i_p ] = Sy [ i_p ] ; b_I [ 3 * i_p + 1 ] = Sy [ i_p + 3 ] ; b_I [
3 * i_p + 2 ] = Sy [ i_p + 6 ] ; } trisolve_3230mWtQ ( b_I , B ) ; for ( i_p
= 0 ; i_p < 3 ; i_p ++ ) { for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { K [ i_e + 7 *
i_p ] = B [ 3 * i_e + i_p ] ; } } for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { for (
i_e = 0 ; i_e < 7 ; i_e ++ ) { hrxu5rhe3af . buggjk4l1n [ i_e + 7 * i_p ] = P
[ 7 * i_e + i_p ] ; } for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { B [ i_p + 7 * i_e
] = 0.0 ; B [ i_p + 7 * i_e ] += Sy [ 3 * i_e ] * K [ i_p ] ; B [ i_p + 7 *
i_e ] += Sy [ 3 * i_e + 1 ] * K [ i_p + 7 ] ; B [ i_p + 7 * i_e ] += Sy [ 3 *
i_e + 2 ] * K [ i_p + 14 ] ; } } cholUpdateFactor_jYBGg031 ( hrxu5rhe3af .
buggjk4l1n , B ) ; myqx15ehea_idx_0 -= eb1fnz3txo [ 0 ] ; myqx15ehea_idx_1 -=
eb1fnz3txo [ 1 ] ; myqx15ehea_idx_2 -= eb1fnz3txo [ 2 ] ; for ( i_p = 0 ; i_p
< 7 ; i_p ++ ) { hrxu5rhe3af . j3ergpk3vu [ i_p ] += ( K [ i_p + 7 ] *
myqx15ehea_idx_1 + K [ i_p ] * myqx15ehea_idx_0 ) + K [ i_p + 14 ] *
myqx15ehea_idx_2 ; } if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC (
hrxu5rhe3af . olb1gflryv ) ; } } for ( i = 0 ; i < 7 ; i ++ ) { o2y45zbt2m4 .
kncngnrvsh [ i ] = hrxu5rhe3af . j3ergpk3vu [ i ] ; } o2y45zbt2m4 .
c1cfxe21zn [ 0 ] = ( ( hbv5azo3sw . Gain_Gain_bi5br4oxvh * o2y45zbt2m4 .
kncngnrvsh [ 4 ] + o2y45zbt2m4 . kuqlbidad1 [ 0 ] ) + o2y45zbt2m4 .
kncngnrvsh [ 0 ] * o2y45zbt2m4 . kncngnrvsh [ 1 ] * hbv5azo3sw .
Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw . Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 .
op4p3vooky [ 0 ] = hbv5azo3sw . Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 .
c1cfxe21zn [ 0 ] ; o2y45zbt2m4 . c1cfxe21zn [ 1 ] = ( ( hbv5azo3sw .
Gain_Gain_bi5br4oxvh * o2y45zbt2m4 . kncngnrvsh [ 5 ] + o2y45zbt2m4 .
kuqlbidad1 [ 1 ] ) + o2y45zbt2m4 . kncngnrvsh [ 0 ] * o2y45zbt2m4 .
kncngnrvsh [ 2 ] * hbv5azo3sw . Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw .
Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 . op4p3vooky [ 1 ] = hbv5azo3sw .
Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 . c1cfxe21zn [ 1 ] ; o2y45zbt2m4 .
c1cfxe21zn [ 2 ] = ( ( hbv5azo3sw . Gain_Gain_bi5br4oxvh * o2y45zbt2m4 .
kncngnrvsh [ 6 ] + o2y45zbt2m4 . kuqlbidad1 [ 2 ] ) + o2y45zbt2m4 .
kncngnrvsh [ 0 ] * o2y45zbt2m4 . kncngnrvsh [ 3 ] * hbv5azo3sw .
Gain1_Gain_cftaqvkxoi ) * hbv5azo3sw . Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 .
op4p3vooky [ 2 ] = hbv5azo3sw . Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 .
c1cfxe21zn [ 2 ] ; } if ( ssIsSampleHit ( rtS , 10 , 0 ) ) { myqx15ehea_idx_0
= muDoubleScalarFloor ( ( 2.8421709430404007E-14 * o2y45zbt2m4 . op4p3vooky [
0 ] * hbv5azo3sw . PWM3_Period + o2y45zbt2m4 . op4p3vooky [ 0 ] * hbv5azo3sw
. PWM3_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( myqx15ehea_idx_0 ) ||
muDoubleScalarIsInf ( myqx15ehea_idx_0 ) ) { myqx15ehea_idx_0 = 0.0 ; } else
{ myqx15ehea_idx_0 = muDoubleScalarRem ( myqx15ehea_idx_0 , 4.294967296E+9 )
; } if ( ( ( ( myqx15ehea_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T
) - myqx15ehea_idx_0 : ( uint32_T ) myqx15ehea_idx_0 ) == 0U ) || (
o2y45zbt2m4 . op4p3vooky [ 0 ] <= 0.0 ) ) && hrxu5rhe3af . opg1lhdczb ) {
o2y45zbt2m4 . px02m2ansm = 0.0 ; hrxu5rhe3af . e2pe11pwxn = false ; } else {
o2y45zbt2m4 . px02m2ansm = hrxu5rhe3af . e2pe11pwxn ; } } if ( ssIsSampleHit
( rtS , 11 , 0 ) ) { myqx15ehea_idx_0 = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . op4p3vooky [ 1 ] * hbv5azo3sw .
PWM4_Period + o2y45zbt2m4 . op4p3vooky [ 1 ] * hbv5azo3sw . PWM4_Period ) /
0.1 ) ; if ( muDoubleScalarIsNaN ( myqx15ehea_idx_0 ) || muDoubleScalarIsInf
( myqx15ehea_idx_0 ) ) { myqx15ehea_idx_0 = 0.0 ; } else { myqx15ehea_idx_0 =
muDoubleScalarRem ( myqx15ehea_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
myqx15ehea_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
myqx15ehea_idx_0 : ( uint32_T ) myqx15ehea_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
op4p3vooky [ 1 ] <= 0.0 ) ) && hrxu5rhe3af . jmjdutrgwi ) { o2y45zbt2m4 .
lzgno0c45u = 0.0 ; hrxu5rhe3af . jiqhomoo0v = false ; } else { o2y45zbt2m4 .
lzgno0c45u = hrxu5rhe3af . jiqhomoo0v ; } } if ( ssIsSampleHit ( rtS , 12 , 0
) ) { myqx15ehea_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . op4p3vooky [ 2 ] * hbv5azo3sw . PWM5_Period + o2y45zbt2m4 .
op4p3vooky [ 2 ] * hbv5azo3sw . PWM5_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( myqx15ehea_idx_0 ) || muDoubleScalarIsInf (
myqx15ehea_idx_0 ) ) { myqx15ehea_idx_0 = 0.0 ; } else { myqx15ehea_idx_0 =
muDoubleScalarRem ( myqx15ehea_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
myqx15ehea_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
myqx15ehea_idx_0 : ( uint32_T ) myqx15ehea_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
op4p3vooky [ 2 ] <= 0.0 ) ) && hrxu5rhe3af . ayulg3mnvk ) { o2y45zbt2m4 .
frbnnz0j20 = 0.0 ; hrxu5rhe3af . gxxnmirgwt = false ; } else { o2y45zbt2m4 .
frbnnz0j20 = hrxu5rhe3af . gxxnmirgwt ; } } if ( ssIsSampleHit ( rtS , 4 , 0
) ) { hnpfszi1fh_idx_0 = hbv5azo3sw . Gain1_Gain_i4m04mlldw * o2y45zbt2m4 .
px02m2ansm ; hnpfszi1fh_idx_1 = hbv5azo3sw . Gain1_Gain_i4m04mlldw *
o2y45zbt2m4 . lzgno0c45u ; hnpfszi1fh_idx_2 = hbv5azo3sw .
Gain1_Gain_i4m04mlldw * o2y45zbt2m4 . frbnnz0j20 ; } if ( ssIsSampleHit ( rtS
, 8 , 0 ) ) { myqx15ehea_idx_0 = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . c1cfxe21zn [ 0 ] * hbv5azo3sw .
PWM_Period + o2y45zbt2m4 . c1cfxe21zn [ 0 ] * hbv5azo3sw . PWM_Period ) / 0.1
) ; if ( muDoubleScalarIsNaN ( myqx15ehea_idx_0 ) || muDoubleScalarIsInf (
myqx15ehea_idx_0 ) ) { myqx15ehea_idx_0 = 0.0 ; } else { myqx15ehea_idx_0 =
muDoubleScalarRem ( myqx15ehea_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
myqx15ehea_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
myqx15ehea_idx_0 : ( uint32_T ) myqx15ehea_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
c1cfxe21zn [ 0 ] <= 0.0 ) ) && hrxu5rhe3af . cnj1jumxqg ) { o2y45zbt2m4 .
ftjowoqghq = 0.0 ; hrxu5rhe3af . cozmdzu0w1 = false ; } else { o2y45zbt2m4 .
ftjowoqghq = hrxu5rhe3af . cozmdzu0w1 ; } } if ( ssIsSampleHit ( rtS , 9 , 0
) ) { myqx15ehea_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . c1cfxe21zn [ 1 ] * hbv5azo3sw . PWM1_Period + o2y45zbt2m4 .
c1cfxe21zn [ 1 ] * hbv5azo3sw . PWM1_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( myqx15ehea_idx_0 ) || muDoubleScalarIsInf (
myqx15ehea_idx_0 ) ) { myqx15ehea_idx_0 = 0.0 ; } else { myqx15ehea_idx_0 =
muDoubleScalarRem ( myqx15ehea_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
myqx15ehea_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
myqx15ehea_idx_0 : ( uint32_T ) myqx15ehea_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
c1cfxe21zn [ 1 ] <= 0.0 ) ) && hrxu5rhe3af . ae5papqlus ) { o2y45zbt2m4 .
psapwntjo4 = 0.0 ; hrxu5rhe3af . i5keywnlob = false ; } else { o2y45zbt2m4 .
psapwntjo4 = hrxu5rhe3af . i5keywnlob ; } } if ( ssIsSampleHit ( rtS , 7 , 0
) ) { myqx15ehea_idx_0 = muDoubleScalarFloor ( ( 2.8421709430404007E-14 *
o2y45zbt2m4 . c1cfxe21zn [ 2 ] * hbv5azo3sw . PWM2_Period + o2y45zbt2m4 .
c1cfxe21zn [ 2 ] * hbv5azo3sw . PWM2_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( myqx15ehea_idx_0 ) || muDoubleScalarIsInf (
myqx15ehea_idx_0 ) ) { myqx15ehea_idx_0 = 0.0 ; } else { myqx15ehea_idx_0 =
muDoubleScalarRem ( myqx15ehea_idx_0 , 4.294967296E+9 ) ; } if ( ( ( (
myqx15ehea_idx_0 < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
myqx15ehea_idx_0 : ( uint32_T ) myqx15ehea_idx_0 ) == 0U ) || ( o2y45zbt2m4 .
c1cfxe21zn [ 2 ] <= 0.0 ) ) && hrxu5rhe3af . brmqgwecvy ) { o2y45zbt2m4 .
pjlzlhabnw = 0.0 ; hrxu5rhe3af . mp3yltewxi = false ; } else { o2y45zbt2m4 .
pjlzlhabnw = hrxu5rhe3af . mp3yltewxi ; } } if ( ssIsSampleHit ( rtS , 4 , 0
) ) { hnpfszi1fh_idx_0 += o2y45zbt2m4 . ftjowoqghq ; hnpfszi1fh_idx_1 +=
o2y45zbt2m4 . psapwntjo4 ; hnpfszi1fh_idx_2 += o2y45zbt2m4 . pjlzlhabnw ;
o2y45zbt2m4 . fkulvx00jr [ 0 ] = hbv5azo3sw . Gain3_Gain_b5qqmritsc *
hnpfszi1fh_idx_0 ; o2y45zbt2m4 . fkulvx00jr [ 1 ] = hbv5azo3sw .
Gain3_Gain_b5qqmritsc * hnpfszi1fh_idx_1 ; o2y45zbt2m4 . fkulvx00jr [ 2 ] =
hbv5azo3sw . Gain3_Gain_b5qqmritsc * hnpfszi1fh_idx_2 ; } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { o2y45zbt2m4 . g20nolxhoz [ 0 ] = o2y45zbt2m4 . fkulvx00jr
[ 0 ] ; o2y45zbt2m4 . g20nolxhoz [ 1 ] = o2y45zbt2m4 . fkulvx00jr [ 1 ] ;
o2y45zbt2m4 . g20nolxhoz [ 2 ] = o2y45zbt2m4 . fkulvx00jr [ 2 ] ; }
o2y45zbt2m4 . al2bqvraok [ 0 ] = o2y45zbt2m4 . kncngnrvsh [ 4 ] - o2y45zbt2m4
. h20zeizqdi [ 0 ] ; o2y45zbt2m4 . al2bqvraok [ 1 ] = o2y45zbt2m4 .
kncngnrvsh [ 5 ] - o2y45zbt2m4 . h20zeizqdi [ 1 ] ; o2y45zbt2m4 . al2bqvraok
[ 2 ] = o2y45zbt2m4 . kncngnrvsh [ 6 ] - o2y45zbt2m4 . h20zeizqdi [ 2 ] ; if
( ssIsSampleHit ( rtS , 3 , 0 ) ) { } ikxunumo3i = ( pygfqx1xx2 [ 0 ] *
pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] *
pygfqx1xx2 [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af .
dnqubg5s4k != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . dnqubg5s4k = 0 ; } b2dseb5akc_idx_1 = muDoubleScalarSqrt (
ikxunumo3i ) ; } else if ( ikxunumo3i < 0.0 ) { b2dseb5akc_idx_1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( ikxunumo3i ) ) ; hrxu5rhe3af .
dnqubg5s4k = 1 ; } else { b2dseb5akc_idx_1 = muDoubleScalarSqrt ( ikxunumo3i
) ; } ikxunumo3i = 1.0 / ( b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) /
b2dseb5akc_idx_1 * o2y45zbt2m4 . culrexdnyf ; myqx15ehea_idx_0 = pygfqx1xx2 [
0 ] / b2dseb5akc_idx_1 ; myqx15ehea_idx_1 = pygfqx1xx2 [ 1 ] /
b2dseb5akc_idx_1 ; myqx15ehea_idx_2 = pygfqx1xx2 [ 2 ] / b2dseb5akc_idx_1 ;
b2dseb5akc_idx_1 = ( ( l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo * dxjf4qcaeo ) +
k1qmoe0iaw * k1qmoe0iaw ) + nm4t0wvumv * nm4t0wvumv ; if ( ssIsMajorTimeStep
( rtS ) ) { if ( hrxu5rhe3af . bze1flsb15 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . bze1flsb15
= 0 ; } clod0whodw_idx_0 = muDoubleScalarSqrt ( b2dseb5akc_idx_1 ) ; } else
if ( b2dseb5akc_idx_1 < 0.0 ) { clod0whodw_idx_0 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( b2dseb5akc_idx_1 ) ) ; hrxu5rhe3af . bze1flsb15 = 1 ; }
else { clod0whodw_idx_0 = muDoubleScalarSqrt ( b2dseb5akc_idx_1 ) ; }
b2dseb5akc_idx_1 = dxjf4qcaeo / clod0whodw_idx_0 ; mnqgflhgig = k1qmoe0iaw /
clod0whodw_idx_0 ; omuhzl1dir = l1pix2zzzf / clod0whodw_idx_0 ; hkwf2out3d =
nm4t0wvumv / clod0whodw_idx_0 ; clod0whodw_idx_0 = ( ( ( hbv5azo3sw .
Constant_Value_lxx0buxvfk - b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) -
hkwf2out3d * hkwf2out3d ) * hbv5azo3sw . Gain2_Gain_n32pjfxnui *
myqx15ehea_idx_1 + ( b2dseb5akc_idx_1 * mnqgflhgig - omuhzl1dir * hkwf2out3d
) * hbv5azo3sw . Gain_Gain_cf5hb10y5x * myqx15ehea_idx_0 ) + ( omuhzl1dir *
b2dseb5akc_idx_1 + mnqgflhgig * hkwf2out3d ) * hbv5azo3sw .
Gain1_Gain_gwlrw1w2b3 * myqx15ehea_idx_2 ; ntqepze5kl = ( ( b2dseb5akc_idx_1
* hkwf2out3d + omuhzl1dir * mnqgflhgig ) * hbv5azo3sw . Gain_Gain_efnax0y1dx
* myqx15ehea_idx_0 + ( mnqgflhgig * hkwf2out3d - omuhzl1dir *
b2dseb5akc_idx_1 ) * hbv5azo3sw . Gain1_Gain_ddeccjfmea * myqx15ehea_idx_1 )
+ ( ( hbv5azo3sw . Constant_Value_a2jieicat5 - b2dseb5akc_idx_1 *
b2dseb5akc_idx_1 ) - mnqgflhgig * mnqgflhgig ) * hbv5azo3sw .
Gain2_Gain_g2ebct4dqc * myqx15ehea_idx_2 ; b2dseb5akc_idx_1 = ( ( (
hbv5azo3sw . Constant_Value_bpdqgjnrbi - mnqgflhgig * mnqgflhgig ) -
hkwf2out3d * hkwf2out3d ) * hbv5azo3sw . Gain2_Gain_cko11epp5n *
myqx15ehea_idx_0 + ( b2dseb5akc_idx_1 * mnqgflhgig + omuhzl1dir * hkwf2out3d
) * hbv5azo3sw . Gain_Gain_cjicctxqb2 * myqx15ehea_idx_1 ) + (
b2dseb5akc_idx_1 * hkwf2out3d - omuhzl1dir * mnqgflhgig ) * hbv5azo3sw .
Gain1_Gain_nieh11pzcd * myqx15ehea_idx_2 ; myqx15ehea_idx_0 = o2y45zbt2m4 .
ambhfazf2y [ 0 ] * clod0whodw_idx_0 * ntqepze5kl * ikxunumo3i ;
myqx15ehea_idx_1 = o2y45zbt2m4 . ambhfazf2y [ 1 ] * ntqepze5kl *
b2dseb5akc_idx_1 * ikxunumo3i ; myqx15ehea_idx_2 = o2y45zbt2m4 . ambhfazf2y [
2 ] * b2dseb5akc_idx_1 * clod0whodw_idx_0 * ikxunumo3i ; ikxunumo3i = (
pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) +
pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . pidbwsidci != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . pidbwsidci = 0 ; } o2y45zbt2m4 . ggrj4lwkdq =
muDoubleScalarSqrt ( ikxunumo3i ) ; } else if ( ikxunumo3i < 0.0 ) {
o2y45zbt2m4 . ggrj4lwkdq = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ikxunumo3i ) ) ; hrxu5rhe3af . pidbwsidci = 1 ; } else { o2y45zbt2m4 .
ggrj4lwkdq = muDoubleScalarSqrt ( ikxunumo3i ) ; } eb1fnz3txo [ 0 ] =
pygfqx1xx2 [ 0 ] / o2y45zbt2m4 . ggrj4lwkdq ; eb1fnz3txo [ 1 ] = pygfqx1xx2 [
1 ] / o2y45zbt2m4 . ggrj4lwkdq ; eb1fnz3txo [ 2 ] = pygfqx1xx2 [ 2 ] /
o2y45zbt2m4 . ggrj4lwkdq ; ikxunumo3i = eb1fnz3txo [ 0 ] * eb1fnz3txo [ 0 ] +
eb1fnz3txo [ 1 ] * eb1fnz3txo [ 1 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . ji1vknz2dr != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . ji1vknz2dr = 0 ; } b2dseb5akc_idx_1 =
muDoubleScalarSqrt ( ikxunumo3i ) ; } else if ( ikxunumo3i < 0.0 ) {
b2dseb5akc_idx_1 = - muDoubleScalarSqrt ( muDoubleScalarAbs ( ikxunumo3i ) )
; hrxu5rhe3af . ji1vknz2dr = 1 ; } else { b2dseb5akc_idx_1 =
muDoubleScalarSqrt ( ikxunumo3i ) ; } o2y45zbt2m4 . jjuwpyarp5 =
muDoubleScalarAtan2 ( b2dseb5akc_idx_1 , eb1fnz3txo [ 2 ] ) ; mnqgflhgig =
muDoubleScalarAtan2 ( eb1fnz3txo [ 1 ] , eb1fnz3txo [ 0 ] ) ; o2y45zbt2m4 .
nyoyhdwzhr = mnqgflhgig - 6.2831853071795862 / rtP_Earth . siderealDay *
ssGetT ( rtS ) ; MagneticFieldInPolarCoords ( & o2y45zbt2m4 . ggrj4lwkdq , &
o2y45zbt2m4 . jjuwpyarp5 , & o2y45zbt2m4 . nyoyhdwzhr , & rtP_Earth .
equatorialRadius , & o2y45zbt2m4 . mfc3g102pw [ 0 ] ) ; b2dseb5akc_idx_1 =
hbv5azo3sw . Gain_Gain_m4jtdwqsx1 * o2y45zbt2m4 . jjuwpyarp5 ; ikxunumo3i =
muDoubleScalarCos ( b2dseb5akc_idx_1 ) ; omuhzl1dir = hbv5azo3sw .
Gain_Gain_cnryscy0x5 * mnqgflhgig ; mnqgflhgig = muDoubleScalarSin (
omuhzl1dir ) ; omuhzl1dir = muDoubleScalarCos ( omuhzl1dir ) ;
b2dseb5akc_idx_1 = muDoubleScalarSin ( b2dseb5akc_idx_1 ) ; mjhceqjgf1_idx_0
= ( ikxunumo3i * hbv5azo3sw . Constant_Value_hrofb0v0v5 + omuhzl1dir *
hbv5azo3sw . Constant_Value_ekkpqgqspn ) + ( b2dseb5akc_idx_1 * mnqgflhgig -
hbv5azo3sw . Constant_Value_ekkpqgqspn * hbv5azo3sw .
Constant_Value_hrofb0v0v5 ) ; hnpfszi1fh_idx_0 = ( ( ikxunumo3i * hbv5azo3sw
. Constant_Value_hrofb0v0v5 + omuhzl1dir * b2dseb5akc_idx_1 ) + ( hbv5azo3sw
. Constant_Value_ekkpqgqspn * hbv5azo3sw . Constant_Value_hrofb0v0v5 -
hbv5azo3sw . Constant_Value_ekkpqgqspn * mnqgflhgig ) ) * hbv5azo3sw .
Gain_Gain_flpxquj1at ; hnpfszi1fh_idx_1 = hnpfszi1fh_idx_0 ; p2ib5fluuc [ 0 ]
= hnpfszi1fh_idx_0 ; hnpfszi1fh_idx_0 = ( ( ikxunumo3i * mnqgflhgig +
omuhzl1dir * hbv5azo3sw . Constant_Value_ekkpqgqspn ) + ( hbv5azo3sw .
Constant_Value_ekkpqgqspn * hbv5azo3sw . Constant_Value_hrofb0v0v5 -
b2dseb5akc_idx_1 * hbv5azo3sw . Constant_Value_hrofb0v0v5 ) ) * hbv5azo3sw .
Gain_Gain_flpxquj1at ; ikxunumo3i = ikxunumo3i * omuhzl1dir - ( ( hbv5azo3sw
. Constant_Value_ekkpqgqspn * hbv5azo3sw . Constant_Value_hrofb0v0v5 +
b2dseb5akc_idx_1 * hbv5azo3sw . Constant_Value_hrofb0v0v5 ) + hbv5azo3sw .
Constant_Value_ekkpqgqspn * mnqgflhgig ) ; pzi3xtzla3_idx_1 = nm4t0wvumv *
mjhceqjgf1_idx_0 ; omuhzl1dir = k1qmoe0iaw * mjhceqjgf1_idx_0 ;
hnpfszi1fh_idx_2 = mjhceqjgf1_idx_0 ; mjhceqjgf1_idx_0 = ( l1pix2zzzf *
mjhceqjgf1_idx_0 + ikxunumo3i * dxjf4qcaeo ) + ( k1qmoe0iaw *
hnpfszi1fh_idx_0 - nm4t0wvumv * p2ib5fluuc [ 0 ] ) ; mjhceqjgf1_idx_1 = (
l1pix2zzzf * hnpfszi1fh_idx_1 + ikxunumo3i * k1qmoe0iaw ) + (
pzi3xtzla3_idx_1 - dxjf4qcaeo * hnpfszi1fh_idx_0 ) ; b2dseb5akc_idx_1 = (
l1pix2zzzf * hnpfszi1fh_idx_0 + ikxunumo3i * nm4t0wvumv ) + ( dxjf4qcaeo *
p2ib5fluuc [ 0 ] - omuhzl1dir ) ; mnqgflhgig = l1pix2zzzf * ikxunumo3i - ( (
dxjf4qcaeo * hnpfszi1fh_idx_2 + k1qmoe0iaw * hnpfszi1fh_idx_1 ) + nm4t0wvumv
* hnpfszi1fh_idx_0 ) ; ikxunumo3i = ( ( mnqgflhgig * mnqgflhgig +
mjhceqjgf1_idx_0 * mjhceqjgf1_idx_0 ) + mjhceqjgf1_idx_1 * mjhceqjgf1_idx_1 )
+ b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ; if ( ssIsMajorTimeStep ( rtS ) ) { if
( hrxu5rhe3af . gltmjlakux != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . gltmjlakux
= 0 ; } omuhzl1dir = muDoubleScalarSqrt ( ikxunumo3i ) ; } else if (
ikxunumo3i < 0.0 ) { omuhzl1dir = - muDoubleScalarSqrt ( muDoubleScalarAbs (
ikxunumo3i ) ) ; hrxu5rhe3af . gltmjlakux = 1 ; } else { omuhzl1dir =
muDoubleScalarSqrt ( ikxunumo3i ) ; } ikxunumo3i = mjhceqjgf1_idx_0 /
omuhzl1dir ; b2dseb5akc_idx_1 /= omuhzl1dir ; mnqgflhgig /= omuhzl1dir ;
ntqepze5kl = mjhceqjgf1_idx_1 / omuhzl1dir ; omuhzl1dir = ( ( ikxunumo3i *
b2dseb5akc_idx_1 + mnqgflhgig * ntqepze5kl ) * hbv5azo3sw .
Gain_Gain_fsocaetgdj * o2y45zbt2m4 . mfc3g102pw [ 0 ] + ( ntqepze5kl *
b2dseb5akc_idx_1 - mnqgflhgig * ikxunumo3i ) * hbv5azo3sw .
Gain1_Gain_igcxviai5g * o2y45zbt2m4 . mfc3g102pw [ 1 ] ) + ( ( hbv5azo3sw .
Constant_Value_nfqnghygav - ikxunumo3i * ikxunumo3i ) - ntqepze5kl *
ntqepze5kl ) * hbv5azo3sw . Gain2_Gain_mcrod3aisq * o2y45zbt2m4 . mfc3g102pw
[ 2 ] ; clod0whodw_idx_0 = ( ( ( hbv5azo3sw . Constant_Value_ollq4x5vyn -
ntqepze5kl * ntqepze5kl ) - b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) *
hbv5azo3sw . Gain2_Gain_d0aeb3inpf * o2y45zbt2m4 . mfc3g102pw [ 0 ] + (
ikxunumo3i * ntqepze5kl + mnqgflhgig * b2dseb5akc_idx_1 ) * hbv5azo3sw .
Gain_Gain_avgts0xajn * o2y45zbt2m4 . mfc3g102pw [ 1 ] ) + ( ikxunumo3i *
b2dseb5akc_idx_1 - mnqgflhgig * ntqepze5kl ) * hbv5azo3sw .
Gain1_Gain_pfgznzxep3 * o2y45zbt2m4 . mfc3g102pw [ 2 ] ; ikxunumo3i = ( ( (
hbv5azo3sw . Constant_Value_jelrytb22b - ikxunumo3i * ikxunumo3i ) -
b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) * hbv5azo3sw . Gain2_Gain_jbi3ws3ahy *
o2y45zbt2m4 . mfc3g102pw [ 1 ] + ( ikxunumo3i * ntqepze5kl - mnqgflhgig *
b2dseb5akc_idx_1 ) * hbv5azo3sw . Gain_Gain_l4qk2foong * o2y45zbt2m4 .
mfc3g102pw [ 0 ] ) + ( mnqgflhgig * ikxunumo3i + ntqepze5kl *
b2dseb5akc_idx_1 ) * hbv5azo3sw . Gain1_Gain_b2dtklqw2b * o2y45zbt2m4 .
mfc3g102pw [ 2 ] ; oouy1fopfw_idx_1 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] * omuhzl1dir ;
pzi3xtzla3_idx_1 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * clod0whodw_idx_0 ;
epx0klrbgl_idx_0 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] * ikxunumo3i ;
epx0klrbgl_idx_1 = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 2 ] * ikxunumo3i ;
ntqepze5kl = hbv5azo3sw . Spacecraftmagneticdipolebodyreferenceframe_Value [
0 ] * omuhzl1dir ; omuhzl1dir = hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 1 ] * clod0whodw_idx_0 ;
ikxunumo3i = ( o2y45zbt2m4 . k2zlzdldai [ 0 ] * o2y45zbt2m4 . k2zlzdldai [ 0
] + o2y45zbt2m4 . k2zlzdldai [ 1 ] * o2y45zbt2m4 . k2zlzdldai [ 1 ] ) +
o2y45zbt2m4 . k2zlzdldai [ 2 ] * o2y45zbt2m4 . k2zlzdldai [ 2 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . pwifaixjxb != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . pwifaixjxb
= 0 ; } b2dseb5akc_idx_1 = muDoubleScalarSqrt ( ikxunumo3i ) ; } else if (
ikxunumo3i < 0.0 ) { b2dseb5akc_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ikxunumo3i ) ) ; hrxu5rhe3af . pwifaixjxb = 1 ; } else {
b2dseb5akc_idx_1 = muDoubleScalarSqrt ( ikxunumo3i ) ; } ikxunumo3i =
rtP_Const . AU_1 / b2dseb5akc_idx_1 ; ikxunumo3i = ikxunumo3i * ikxunumo3i *
o2y45zbt2m4 . mvnud1uzgl ; hnpfszi1fh_idx_0 = o2y45zbt2m4 . k2zlzdldai [ 0 ]
/ b2dseb5akc_idx_1 ; eb1fnz3txo [ 0 ] = 0.0 ; hnpfszi1fh_idx_1 = o2y45zbt2m4
. k2zlzdldai [ 1 ] / b2dseb5akc_idx_1 ; eb1fnz3txo [ 1 ] = 0.0 ;
hnpfszi1fh_idx_2 = o2y45zbt2m4 . k2zlzdldai [ 2 ] / b2dseb5akc_idx_1 ;
eb1fnz3txo [ 2 ] = 0.0 ; for ( i = 0 ; i < 10 ; i ++ ) { hkwf2out3d = b [ i ]
; mnqgflhgig = ( rtP_Spacecraft . surfaces_normalToSurface [ 3 * i + 1 ] *
hnpfszi1fh_idx_1 + rtP_Spacecraft . surfaces_normalToSurface [ 3 * i ] *
hnpfszi1fh_idx_0 ) + rtP_Spacecraft . surfaces_normalToSurface [ 3 * i + 2 ]
* hnpfszi1fh_idx_2 ; if ( mnqgflhgig > 0.0 ) { b2dseb5akc_idx_1 = 2.0 *
hkwf2out3d * mnqgflhgig + 0.066666666666666666 ; mnqgflhgig *= - ikxunumo3i *
rtP_Spacecraft . surfaces_area [ i ] ; clod0whodw_idx_0 = ( ( 1.0 -
hkwf2out3d ) * hnpfszi1fh_idx_0 + rtP_Spacecraft . surfaces_normalToSurface [
3 * i ] * b2dseb5akc_idx_1 ) * mnqgflhgig ; mjhceqjgf1_idx_0 = rtP_Spacecraft
. surfaces_position [ 3 * i ] + rtP_Spacecraft . geometricCenter [ 0 ] ;
au32y1wfjp_idx_1 = ( rtP_Spacecraft . surfaces_normalToSurface [ 3 * i + 1 ]
* b2dseb5akc_idx_1 + ( 1.0 - hkwf2out3d ) * hnpfszi1fh_idx_1 ) * mnqgflhgig ;
mjhceqjgf1_idx_1 = rtP_Spacecraft . surfaces_position [ 3 * i + 1 ] +
rtP_Spacecraft . geometricCenter [ 1 ] ; mnqgflhgig *= rtP_Spacecraft .
surfaces_normalToSurface [ 3 * i + 2 ] * b2dseb5akc_idx_1 + ( 1.0 -
hkwf2out3d ) * hnpfszi1fh_idx_2 ; b2dseb5akc_idx_1 = rtP_Spacecraft .
surfaces_position [ 3 * i + 2 ] + rtP_Spacecraft . geometricCenter [ 2 ] ;
hkwf2out3d = eb1fnz3txo [ 0 ] ; ardt1y5x0d_idx_1 = eb1fnz3txo [ 1 ] ;
njulo3ucsg = eb1fnz3txo [ 2 ] ; eb1fnz3txo [ 0 ] = ( mjhceqjgf1_idx_1 *
mnqgflhgig - b2dseb5akc_idx_1 * au32y1wfjp_idx_1 ) + hkwf2out3d ; eb1fnz3txo
[ 1 ] = ( b2dseb5akc_idx_1 * clod0whodw_idx_0 - mjhceqjgf1_idx_0 * mnqgflhgig
) + ardt1y5x0d_idx_1 ; eb1fnz3txo [ 2 ] = ( mjhceqjgf1_idx_0 *
au32y1wfjp_idx_1 - mjhceqjgf1_idx_1 * clod0whodw_idx_0 ) + njulo3ucsg ; } }
myqx15ehea_idx_0 = ( myqx15ehea_idx_0 + eb1fnz3txo [ 0 ] ) + (
oouy1fopfw_idx_1 - epx0klrbgl_idx_1 ) ; myqx15ehea_idx_1 = ( myqx15ehea_idx_1
+ eb1fnz3txo [ 1 ] ) + ( pzi3xtzla3_idx_1 - ntqepze5kl ) ; o2y45zbt2m4 .
jg5xwtwjpe [ 0 ] = ( o2y45zbt2m4 . h20zeizqdi [ 1 ] * o2y45zbt2m4 .
h20zeizqdi [ 2 ] * o2y45zbt2m4 . jq2aut2ijb [ 0 ] + ( myqx15ehea_idx_0 +
o2y45zbt2m4 . fkulvx00jr [ 0 ] ) ) / hbv5azo3sw . Inertia_Value [ 0 ] ;
o2y45zbt2m4 . jg5xwtwjpe [ 1 ] = ( o2y45zbt2m4 . h20zeizqdi [ 2 ] *
o2y45zbt2m4 . h20zeizqdi [ 0 ] * o2y45zbt2m4 . jq2aut2ijb [ 1 ] + (
myqx15ehea_idx_1 + o2y45zbt2m4 . fkulvx00jr [ 1 ] ) ) / hbv5azo3sw .
Inertia_Value [ 1 ] ; o2y45zbt2m4 . jg5xwtwjpe [ 2 ] = ( ( ( (
myqx15ehea_idx_2 + eb1fnz3txo [ 2 ] ) + ( epx0klrbgl_idx_0 - omuhzl1dir ) ) +
o2y45zbt2m4 . fkulvx00jr [ 2 ] ) + o2y45zbt2m4 . h20zeizqdi [ 0 ] *
o2y45zbt2m4 . h20zeizqdi [ 1 ] * o2y45zbt2m4 . jq2aut2ijb [ 2 ] ) /
hbv5azo3sw . Inertia_Value [ 2 ] ; egmyq2wukd [ 0 ] = 0.0 ; egmyq2wukd [ 4 ]
= - o2y45zbt2m4 . h20zeizqdi [ 0 ] ; egmyq2wukd [ 8 ] = - o2y45zbt2m4 .
h20zeizqdi [ 1 ] ; egmyq2wukd [ 12 ] = - o2y45zbt2m4 . h20zeizqdi [ 2 ] ;
egmyq2wukd [ 1 ] = 0.0 ; egmyq2wukd [ 5 ] = 0.0 ; egmyq2wukd [ 9 ] =
o2y45zbt2m4 . h20zeizqdi [ 2 ] ; egmyq2wukd [ 13 ] = - o2y45zbt2m4 .
h20zeizqdi [ 1 ] ; egmyq2wukd [ 2 ] = 0.0 ; egmyq2wukd [ 6 ] = 0.0 ;
egmyq2wukd [ 10 ] = 0.0 ; egmyq2wukd [ 14 ] = o2y45zbt2m4 . h20zeizqdi [ 0 ]
; egmyq2wukd [ 3 ] = 0.0 ; egmyq2wukd [ 7 ] = 0.0 ; egmyq2wukd [ 11 ] = 0.0 ;
egmyq2wukd [ 15 ] = 0.0 ; for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { j2t2fbnnna [
i_p << 2 ] = egmyq2wukd [ i_p << 2 ] - egmyq2wukd [ i_p ] ; j2t2fbnnna [ (
i_p << 2 ) + 1 ] = egmyq2wukd [ ( i_p << 2 ) + 1 ] - egmyq2wukd [ i_p + 4 ] ;
j2t2fbnnna [ ( i_p << 2 ) + 2 ] = egmyq2wukd [ ( i_p << 2 ) + 2 ] -
egmyq2wukd [ i_p + 8 ] ; j2t2fbnnna [ ( i_p << 2 ) + 3 ] = egmyq2wukd [ ( i_p
<< 2 ) + 3 ] - egmyq2wukd [ i_p + 12 ] ; } memcpy ( & egmyq2wukd [ 0 ] , &
j2t2fbnnna [ 0 ] , sizeof ( real_T ) << 4U ) ; for ( i_p = 0 ; i_p < 4 ; i_p
++ ) { o2y45zbt2m4 . bwu3hh5pg3 [ i_p ] = 0.0 ; o2y45zbt2m4 . bwu3hh5pg3 [
i_p ] += hbv5azo3sw . Gain1_Gain_objsqoebrs * egmyq2wukd [ i_p ] * l1pix2zzzf
; o2y45zbt2m4 . bwu3hh5pg3 [ i_p ] += egmyq2wukd [ i_p + 4 ] * hbv5azo3sw .
Gain1_Gain_objsqoebrs * dxjf4qcaeo ; o2y45zbt2m4 . bwu3hh5pg3 [ i_p ] +=
egmyq2wukd [ i_p + 8 ] * hbv5azo3sw . Gain1_Gain_objsqoebrs * k1qmoe0iaw ;
o2y45zbt2m4 . bwu3hh5pg3 [ i_p ] += egmyq2wukd [ i_p + 12 ] * hbv5azo3sw .
Gain1_Gain_objsqoebrs * nm4t0wvumv ; } k1qmoe0iaw = hbv5azo3sw . e_Value *
muDoubleScalarCos ( emiiavfkh1 ) + hbv5azo3sw . Constant1_Value_lvvzxuwh5z ;
o2y45zbt2m4 . iunb01rvwp = 1.0 / o2y45zbt2m4 . bfud51xipp * o2y45zbt2m4 .
kp1mzqwbu3 * ( k1qmoe0iaw * k1qmoe0iaw ) ; k1qmoe0iaw = ( pygfqx1xx2 [ 0 ] *
pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) + pygfqx1xx2 [ 2 ] *
pygfqx1xx2 [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af .
g0uzej5lf1 != 0 ) { n1mubcupv31 . li1obxdvy3 [ 0 ] = o2y45zbt2m4 . fi1wde2gl2
[ 0 ] ; n1mubcupv31 . li1obxdvy3 [ 1 ] = o2y45zbt2m4 . fi1wde2gl2 [ 1 ] ;
n1mubcupv31 . li1obxdvy3 [ 2 ] = o2y45zbt2m4 . fi1wde2gl2 [ 2 ] ; }
o2y45zbt2m4 . hnvlhc15na [ 0 ] = n1mubcupv31 . li1obxdvy3 [ 0 ] ; o2y45zbt2m4
. hnvlhc15na [ 1 ] = n1mubcupv31 . li1obxdvy3 [ 1 ] ; o2y45zbt2m4 .
hnvlhc15na [ 2 ] = n1mubcupv31 . li1obxdvy3 [ 2 ] ; if ( hrxu5rhe3af .
haxpv4vq51 != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . haxpv4vq51 = 0 ; } l1pix2zzzf = muDoubleScalarSqrt ( k1qmoe0iaw
) ; } else { o2y45zbt2m4 . hnvlhc15na [ 0 ] = n1mubcupv31 . li1obxdvy3 [ 0 ]
; o2y45zbt2m4 . hnvlhc15na [ 1 ] = n1mubcupv31 . li1obxdvy3 [ 1 ] ;
o2y45zbt2m4 . hnvlhc15na [ 2 ] = n1mubcupv31 . li1obxdvy3 [ 2 ] ; if (
k1qmoe0iaw < 0.0 ) { l1pix2zzzf = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; hrxu5rhe3af . haxpv4vq51 = 1 ; } else { l1pix2zzzf =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } } k1qmoe0iaw = l1pix2zzzf * l1pix2zzzf
; k1qmoe0iaw = rtP_Earth . J2 * rtP_Earth . mu * o2y45zbt2m4 . ltnksa0t1k / (
k1qmoe0iaw * k1qmoe0iaw ) * hbv5azo3sw . Gain_Gain_ij5ephcub4 ;
hnpfszi1fh_idx_0 = pygfqx1xx2 [ 0 ] / l1pix2zzzf ; hnpfszi1fh_idx_1 =
pygfqx1xx2 [ 1 ] / l1pix2zzzf ; hnpfszi1fh_idx_2 = pygfqx1xx2 [ 2 ] /
l1pix2zzzf ; l1pix2zzzf = hbv5azo3sw . Gain1_Gain_fos5u53xa3 *
hnpfszi1fh_idx_2 ; dxjf4qcaeo = l1pix2zzzf * l1pix2zzzf ; l1pix2zzzf =
dxjf4qcaeo - hbv5azo3sw . Constant4_Value ; dxjf4qcaeo = ( dxjf4qcaeo -
hbv5azo3sw . Constant3_Value_aiagav1bu5 ) * hnpfszi1fh_idx_2 ; emiiavfkh1 = (
pygfqx1xx2 [ 0 ] * pygfqx1xx2 [ 0 ] + pygfqx1xx2 [ 1 ] * pygfqx1xx2 [ 1 ] ) +
pygfqx1xx2 [ 2 ] * pygfqx1xx2 [ 2 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . hxjxms0byf != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . hxjxms0byf = 0 ; } nm4t0wvumv = muDoubleScalarSqrt (
emiiavfkh1 ) ; } else if ( emiiavfkh1 < 0.0 ) { nm4t0wvumv = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( emiiavfkh1 ) ) ; hrxu5rhe3af .
hxjxms0byf = 1 ; } else { nm4t0wvumv = muDoubleScalarSqrt ( emiiavfkh1 ) ; }
emiiavfkh1 = rtP_Earth . mu / ( nm4t0wvumv * nm4t0wvumv ) * hbv5azo3sw .
Gain_Gain_fosanw5ymw ; o2y45zbt2m4 . gbu5abs2sz [ 0 ] = hnpfszi1fh_idx_0 *
l1pix2zzzf * k1qmoe0iaw + pygfqx1xx2 [ 0 ] / nm4t0wvumv * emiiavfkh1 ;
o2y45zbt2m4 . gbu5abs2sz [ 1 ] = l1pix2zzzf * hnpfszi1fh_idx_1 * k1qmoe0iaw +
pygfqx1xx2 [ 1 ] / nm4t0wvumv * emiiavfkh1 ; o2y45zbt2m4 . gbu5abs2sz [ 2 ] =
pygfqx1xx2 [ 2 ] / nm4t0wvumv * emiiavfkh1 + k1qmoe0iaw * dxjf4qcaeo ;
o2y45zbt2m4 . cbgxsqe0kg [ 0 ] = hbv5azo3sw . Gain_Gain_acmfvzt2nt *
o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ; o2y45zbt2m4 . cbgxsqe0kg [ 1 ] = hbv5azo3sw
. Gain_Gain_acmfvzt2nt * o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ; o2y45zbt2m4 .
cbgxsqe0kg [ 2 ] = hbv5azo3sw . Gain_Gain_acmfvzt2nt * o2y45zbt2m4 .
mvqp5l5ufq [ 2 ] ; hnpfszi1fh_idx_1 = ( o2y45zbt2m4 . cbgxsqe0kg [ 0 ] *
o2y45zbt2m4 . cbgxsqe0kg [ 0 ] + o2y45zbt2m4 . cbgxsqe0kg [ 1 ] * o2y45zbt2m4
. cbgxsqe0kg [ 1 ] ) + o2y45zbt2m4 . cbgxsqe0kg [ 2 ] * o2y45zbt2m4 .
cbgxsqe0kg [ 2 ] ; if ( hnpfszi1fh_idx_1 < 0.0 ) { o2y45zbt2m4 . kwx5xj2ngl =
- muDoubleScalarSqrt ( muDoubleScalarAbs ( hnpfszi1fh_idx_1 ) ) ; } else {
o2y45zbt2m4 . kwx5xj2ngl = muDoubleScalarSqrt ( hnpfszi1fh_idx_1 ) ; } if (
ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . ozme2zffq1 = ( o2y45zbt2m4 .
kwx5xj2ngl > hbv5azo3sw . NormalizeVector_maxzero_idjlccn1tr ) ; } if (
hrxu5rhe3af . ozme2zffq1 ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 . cbgxsqe0kg [ 0
] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . cbgxsqe0kg [ 1 ] ; afgi1z3nug [ 2 ] =
o2y45zbt2m4 . cbgxsqe0kg [ 2 ] ; afgi1z3nug [ 3 ] = o2y45zbt2m4 . kwx5xj2ngl
; } else { o2y45zbt2m4 . inxuhwzyyf [ 0 ] = o2y45zbt2m4 . cbgxsqe0kg [ 0 ] *
0.0 ; afgi1z3nug [ 0 ] = o2y45zbt2m4 . inxuhwzyyf [ 0 ] ; o2y45zbt2m4 .
inxuhwzyyf [ 1 ] = o2y45zbt2m4 . cbgxsqe0kg [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . inxuhwzyyf [ 1 ] ; o2y45zbt2m4 . inxuhwzyyf [ 2 ] = o2y45zbt2m4
. cbgxsqe0kg [ 2 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . inxuhwzyyf [ 2 ]
; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_fjyq3eus5i ; }
hnpfszi1fh_idx_2 = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; o2y45zbt2m4 .
an1hct1vdk [ 0 ] = hnpfszi1fh_idx_2 ; hnpfszi1fh_idx_0 = hnpfszi1fh_idx_2 ;
hnpfszi1fh_idx_2 = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; o2y45zbt2m4 .
an1hct1vdk [ 1 ] = hnpfszi1fh_idx_2 ; hnpfszi1fh_idx_1 = hnpfszi1fh_idx_2 ;
hnpfszi1fh_idx_2 = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; o2y45zbt2m4 .
an1hct1vdk [ 2 ] = hnpfszi1fh_idx_2 ; myqx15ehea_idx_0 = ( o2y45zbt2m4 .
hnvlhc15na [ 0 ] * o2y45zbt2m4 . hnvlhc15na [ 0 ] + o2y45zbt2m4 . hnvlhc15na
[ 1 ] * o2y45zbt2m4 . hnvlhc15na [ 1 ] ) + o2y45zbt2m4 . hnvlhc15na [ 2 ] *
o2y45zbt2m4 . hnvlhc15na [ 2 ] ; if ( myqx15ehea_idx_0 < 0.0 ) { o2y45zbt2m4
. ngj1laz0jn = - muDoubleScalarSqrt ( muDoubleScalarAbs ( myqx15ehea_idx_0 )
) ; } else { o2y45zbt2m4 . ngj1laz0jn = muDoubleScalarSqrt ( myqx15ehea_idx_0
) ; } if ( ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . pqxjs5shcl = (
o2y45zbt2m4 . ngj1laz0jn > hbv5azo3sw . NormalizeVector1_maxzero ) ; } if (
hrxu5rhe3af . pqxjs5shcl ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 . hnvlhc15na [ 0
] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . hnvlhc15na [ 1 ] ; afgi1z3nug [ 2 ] =
o2y45zbt2m4 . hnvlhc15na [ 2 ] ; afgi1z3nug [ 3 ] = o2y45zbt2m4 . ngj1laz0jn
; } else { o2y45zbt2m4 . m4a4e0kncl [ 0 ] = o2y45zbt2m4 . hnvlhc15na [ 0 ] *
0.0 ; afgi1z3nug [ 0 ] = o2y45zbt2m4 . m4a4e0kncl [ 0 ] ; o2y45zbt2m4 .
m4a4e0kncl [ 1 ] = o2y45zbt2m4 . hnvlhc15na [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . m4a4e0kncl [ 1 ] ; o2y45zbt2m4 . m4a4e0kncl [ 2 ] = o2y45zbt2m4
. hnvlhc15na [ 2 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . m4a4e0kncl [ 2 ]
; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_cpj53jxfos ; }
mjhceqjgf1_idx_0 = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; mjhceqjgf1_idx_1 =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; b2dseb5akc_idx_1 = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; o2y45zbt2m4 . gnzoqn2dsl [ 0 ] = hnpfszi1fh_idx_1 *
b2dseb5akc_idx_1 - hnpfszi1fh_idx_2 * mjhceqjgf1_idx_1 ; o2y45zbt2m4 .
gnzoqn2dsl [ 1 ] = hnpfszi1fh_idx_2 * mjhceqjgf1_idx_0 - hnpfszi1fh_idx_0 *
b2dseb5akc_idx_1 ; o2y45zbt2m4 . gnzoqn2dsl [ 2 ] = hnpfszi1fh_idx_0 *
mjhceqjgf1_idx_1 - hnpfszi1fh_idx_1 * mjhceqjgf1_idx_0 ; o2y45zbt2m4 .
pguc21lp1k [ 0 ] = o2y45zbt2m4 . gnzoqn2dsl [ 1 ] * hnpfszi1fh_idx_2 -
o2y45zbt2m4 . gnzoqn2dsl [ 2 ] * hnpfszi1fh_idx_1 ; o2y45zbt2m4 . pguc21lp1k
[ 1 ] = o2y45zbt2m4 . gnzoqn2dsl [ 2 ] * hnpfszi1fh_idx_0 - o2y45zbt2m4 .
gnzoqn2dsl [ 0 ] * hnpfszi1fh_idx_2 ; o2y45zbt2m4 . pguc21lp1k [ 2 ] =
o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * hnpfszi1fh_idx_1 - o2y45zbt2m4 . gnzoqn2dsl
[ 1 ] * hnpfszi1fh_idx_0 ; hnpfszi1fh_idx_1 = ( o2y45zbt2m4 . pguc21lp1k [ 0
] * o2y45zbt2m4 . pguc21lp1k [ 0 ] + o2y45zbt2m4 . pguc21lp1k [ 1 ] *
o2y45zbt2m4 . pguc21lp1k [ 1 ] ) + o2y45zbt2m4 . pguc21lp1k [ 2 ] *
o2y45zbt2m4 . pguc21lp1k [ 2 ] ; if ( hnpfszi1fh_idx_1 < 0.0 ) { o2y45zbt2m4
. gnhb3isuhw = - muDoubleScalarSqrt ( muDoubleScalarAbs ( hnpfszi1fh_idx_1 )
) ; } else { o2y45zbt2m4 . gnhb3isuhw = muDoubleScalarSqrt ( hnpfszi1fh_idx_1
) ; } if ( ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af . jydhsrazby = (
o2y45zbt2m4 . gnhb3isuhw > hbv5azo3sw . NormalizeVector3_maxzero ) ; } if (
hrxu5rhe3af . jydhsrazby ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 . pguc21lp1k [ 0
] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . pguc21lp1k [ 1 ] ; afgi1z3nug [ 2 ] =
o2y45zbt2m4 . pguc21lp1k [ 2 ] ; afgi1z3nug [ 3 ] = o2y45zbt2m4 . gnhb3isuhw
; } else { o2y45zbt2m4 . j5pfxwzlry [ 0 ] = o2y45zbt2m4 . pguc21lp1k [ 0 ] *
0.0 ; afgi1z3nug [ 0 ] = o2y45zbt2m4 . j5pfxwzlry [ 0 ] ; o2y45zbt2m4 .
j5pfxwzlry [ 1 ] = o2y45zbt2m4 . pguc21lp1k [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] =
o2y45zbt2m4 . j5pfxwzlry [ 1 ] ; o2y45zbt2m4 . j5pfxwzlry [ 2 ] = o2y45zbt2m4
. pguc21lp1k [ 2 ] * 0.0 ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . j5pfxwzlry [ 2 ]
; afgi1z3nug [ 3 ] = hbv5azo3sw . Constant_Value_ouyamitdob ; } o2y45zbt2m4 .
an1hct1vdk [ 3 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; o2y45zbt2m4 .
an1hct1vdk [ 4 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; o2y45zbt2m4 .
an1hct1vdk [ 5 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hnpfszi1fh_idx_1 = (
o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * o2y45zbt2m4 . gnzoqn2dsl [ 0 ] + o2y45zbt2m4
. gnzoqn2dsl [ 1 ] * o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ) + o2y45zbt2m4 .
gnzoqn2dsl [ 2 ] * o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ; if ( hnpfszi1fh_idx_1 <
0.0 ) { o2y45zbt2m4 . isiqvhsvds = - muDoubleScalarSqrt ( muDoubleScalarAbs (
hnpfszi1fh_idx_1 ) ) ; } else { o2y45zbt2m4 . isiqvhsvds = muDoubleScalarSqrt
( hnpfszi1fh_idx_1 ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af .
nfvyn45pdm = ( o2y45zbt2m4 . isiqvhsvds > hbv5azo3sw .
NormalizeVector4_maxzero ) ; } if ( hrxu5rhe3af . nfvyn45pdm ) { afgi1z3nug [
0 ] = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 .
gnzoqn2dsl [ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ;
afgi1z3nug [ 3 ] = o2y45zbt2m4 . isiqvhsvds ; } else { o2y45zbt2m4 .
du4yqg3svc [ 0 ] = o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * 0.0 ; afgi1z3nug [ 0 ] =
o2y45zbt2m4 . du4yqg3svc [ 0 ] ; o2y45zbt2m4 . du4yqg3svc [ 1 ] = o2y45zbt2m4
. gnzoqn2dsl [ 1 ] * 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . du4yqg3svc [ 1 ]
; o2y45zbt2m4 . du4yqg3svc [ 2 ] = o2y45zbt2m4 . gnzoqn2dsl [ 2 ] * 0.0 ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . du4yqg3svc [ 2 ] ; afgi1z3nug [ 3 ] =
hbv5azo3sw . Constant_Value_guhbgdhd5y ; } o2y45zbt2m4 . an1hct1vdk [ 6 ] =
afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; o2y45zbt2m4 . an1hct1vdk [ 7 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; o2y45zbt2m4 . an1hct1vdk [ 8 ] =
afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtPrevAction = hrxu5rhe3af . iqs2nrdyqs ; rtAction = - 1 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action != 1.0 ) { rtAction = 0 ; }
hrxu5rhe3af . iqs2nrdyqs = rtAction ; } else { rtAction = hrxu5rhe3af .
iqs2nrdyqs ; } if ( ( rtPrevAction != rtAction ) && ( rtPrevAction == 0 ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
j1uacuucpv ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
switch ( hrxu5rhe3af . obuyxhugh2 ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } hrxu5rhe3af .
obuyxhugh2 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
bnzh2jzuy5 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; } hrxu5rhe3af . j1uacuucpv = - 1 ;
} if ( rtAction == 0 ) { if ( 0 != rtPrevAction ) { if ( ssGetTaskTime ( rtS
, 1 ) != ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { Sy [ i_p + 3 * i_e ] = ( (
o2y45zbt2m4 . an1hct1vdk [ 3 * i_p + 1 ] * o2y45zbt2m4 . an1hct1vdk [ 3 * i_e
+ 1 ] + o2y45zbt2m4 . an1hct1vdk [ 3 * i_p ] * o2y45zbt2m4 . an1hct1vdk [ 3 *
i_e ] ) + o2y45zbt2m4 . an1hct1vdk [ 3 * i_p + 2 ] * o2y45zbt2m4 . an1hct1vdk
[ 3 * i_e + 2 ] ) + hbv5azo3sw . Bias1_Bias [ 3 * i_e + i_p ] ; } } for ( i_p
= 0 ; i_p < 9 ; i_p ++ ) { iy5b1drj5g [ i_p ] = ( muDoubleScalarAbs ( Sy [
i_p ] ) > hbv5azo3sw . DirectionCosineMatrixtoQuaternions_tolerance ) ; } tmp
= iy5b1drj5g [ 0 ] ; for ( i = 0 ; i < 8 ; i ++ ) { tmp = ( tmp || iy5b1drj5g
[ i + 1 ] ) ; } rtPrevAction = hrxu5rhe3af . j1uacuucpv ; rtAction = - 1 ; if
( muDoubleScalarAbs ( ( ( ( ( ( o2y45zbt2m4 . an1hct1vdk [ 0 ] * o2y45zbt2m4
. an1hct1vdk [ 4 ] * o2y45zbt2m4 . an1hct1vdk [ 8 ] - o2y45zbt2m4 .
an1hct1vdk [ 0 ] * o2y45zbt2m4 . an1hct1vdk [ 5 ] * o2y45zbt2m4 . an1hct1vdk
[ 7 ] ) - o2y45zbt2m4 . an1hct1vdk [ 1 ] * o2y45zbt2m4 . an1hct1vdk [ 3 ] *
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) + o2y45zbt2m4 . an1hct1vdk [ 2 ] *
o2y45zbt2m4 . an1hct1vdk [ 3 ] * o2y45zbt2m4 . an1hct1vdk [ 7 ] ) +
o2y45zbt2m4 . an1hct1vdk [ 1 ] * o2y45zbt2m4 . an1hct1vdk [ 5 ] * o2y45zbt2m4
. an1hct1vdk [ 6 ] ) - o2y45zbt2m4 . an1hct1vdk [ 2 ] * o2y45zbt2m4 .
an1hct1vdk [ 4 ] * o2y45zbt2m4 . an1hct1vdk [ 6 ] ) + hbv5azo3sw . Bias_Bias
) > hbv5azo3sw . DirectionCosineMatrixtoQuaternions_tolerance ) { rtAction =
0 ; } else { if ( tmp ) { rtAction = 1 ; } } hrxu5rhe3af . j1uacuucpv =
rtAction ; if ( rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0
: ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
obuyxhugh2 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} hrxu5rhe3af . obuyxhugh2 = - 1 ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
bnzh2jzuy5 ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
} hrxu5rhe3af . bnzh2jzuy5 = - 1 ; break ; } } switch ( rtAction ) { case 0 :
if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtPrevAction = hrxu5rhe3af .
obuyxhugh2 ; rtAction = - 1 ; if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action == 2.0 ) { rtAction = 0 ; } else {
if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action == 3.0 ) {
rtAction = 1 ; } } hrxu5rhe3af . obuyxhugh2 = rtAction ; if ( rtPrevAction !=
rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } } switch (
rtAction ) { case 0 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( hbv5azo3sw
. Constant1_Value_ftvtqjp1us != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Warning/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; }
srUpdateBC ( hrxu5rhe3af . pwomc1kiz3 ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( hbv5azo3sw
. Constant1_Value_ftvtqjp1us != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Error/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } srUpdateBC ( hrxu5rhe3af . fpx2qirisn )
; break ; } } srUpdateBC ( hrxu5rhe3af . pmgcir2p13 ) ; break ; case 1 : if (
rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart (
rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtPrevAction = hrxu5rhe3af . bnzh2jzuy5 ;
rtAction = - 1 ; if ( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action
== 2.0 ) { rtAction = 0 ; } else { if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction = 1 ; } }
hrxu5rhe3af . bnzh2jzuy5 = rtAction ; if ( rtPrevAction != rtAction ) {
switch ( rtPrevAction ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS )
; break ; } } switch ( rtAction ) { case 0 : if ( rtAction != rtPrevAction )
{ if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( hbv5azo3sw
. Constant1_Value_l2qqn3e4fv != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Warning/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; }
srUpdateBC ( hrxu5rhe3af . o0pf4uvatt ) ; break ; case 1 : if ( rtAction !=
rtPrevAction ) { if ( ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } if ( ! ( hbv5azo3sw
. Constant1_Value_l2qqn3e4fv != 0.0 ) ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 ,
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Error/Assertion"
, 2 , ssGetT ( rtS ) ) ; rt_ssSet_slErrMsg ( S , diag ) ; ssSetStopRequested
( rtS , ( int ) ssGetT ( rtS ) ) ; } srUpdateBC ( hrxu5rhe3af . jkjkrdx1hk )
; break ; } } srUpdateBC ( hrxu5rhe3af . cbsmbddbag ) ; break ; } } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . fnnqkeqpmg ) ; } } }
o2y45zbt2m4 . jgyobyjg0x = ( o2y45zbt2m4 . an1hct1vdk [ 0 ] + o2y45zbt2m4 .
an1hct1vdk [ 4 ] ) + o2y45zbt2m4 . an1hct1vdk [ 8 ] ; rtPrevAction =
hrxu5rhe3af . p4n3550tai ; if ( ssIsMajorTimeStep ( rtS ) ) { rtAction = (
int8_T ) ! ( o2y45zbt2m4 . jgyobyjg0x > 0.0 ) ; hrxu5rhe3af . p4n3550tai =
rtAction ; } else { rtAction = hrxu5rhe3af . p4n3550tai ; } if ( rtPrevAction
!= rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
hnbwguuonj ) { case 0 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
break ; case 1 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ;
case 2 : ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; }
hrxu5rhe3af . hnbwguuonj = - 1 ; break ; } } switch ( rtAction ) { case 0 :
if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) !=
ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
} } if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . kg1shmc2lb != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . kg1shmc2lb
= 0 ; } srUpdateBC ( hrxu5rhe3af . nw1rjo5a2w ) ; } else { if ( o2y45zbt2m4 .
jgyobyjg0x + hbv5azo3sw . Constant_Value < 0.0 ) { hrxu5rhe3af . kg1shmc2lb =
1 ; } } break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime
( rtS , 0 ) != ssGetTStart ( rtS ) ) {
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
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } hnpfszi1fh_idx_1 = (
( o2y45zbt2m4 . an1hct1vdk [ 4 ] - o2y45zbt2m4 . an1hct1vdk [ 0 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) + hbv5azo3sw . Constant_Value_glskcdmgi0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . ikwlyg3xde != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ikwlyg3xde
= 0 ; } o2y45zbt2m4 . hi5t21up55 = muDoubleScalarSqrt ( hnpfszi1fh_idx_1 ) ;
hrxu5rhe3af . ejudse0oqw = ( o2y45zbt2m4 . hi5t21up55 != 0.0 ) ; srUpdateBC (
hrxu5rhe3af . a0tdfwofzg ) ; } else if ( hnpfszi1fh_idx_1 < 0.0 ) {
o2y45zbt2m4 . hi5t21up55 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
hnpfszi1fh_idx_1 ) ) ; hrxu5rhe3af . ikwlyg3xde = 1 ; } else { o2y45zbt2m4 .
hi5t21up55 = muDoubleScalarSqrt ( hnpfszi1fh_idx_1 ) ; } break ; case 1 : if
( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart
( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } }
hnpfszi1fh_idx_1 = ( ( o2y45zbt2m4 . an1hct1vdk [ 8 ] - o2y45zbt2m4 .
an1hct1vdk [ 0 ] ) - o2y45zbt2m4 . an1hct1vdk [ 4 ] ) + hbv5azo3sw .
Constant_Value_p5m1vauvdr ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . gtaj4wmjuq != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . gtaj4wmjuq = 0 ; } o2y45zbt2m4 . mz4bssc4xj =
muDoubleScalarSqrt ( hnpfszi1fh_idx_1 ) ; hrxu5rhe3af . m2abnapxna = (
o2y45zbt2m4 . mz4bssc4xj != 0.0 ) ; srUpdateBC ( hrxu5rhe3af . as5m3dr43z ) ;
} else if ( hnpfszi1fh_idx_1 < 0.0 ) { o2y45zbt2m4 . mz4bssc4xj = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( hnpfszi1fh_idx_1 ) ) ; hrxu5rhe3af .
gtaj4wmjuq = 1 ; } else { o2y45zbt2m4 . mz4bssc4xj = muDoubleScalarSqrt (
hnpfszi1fh_idx_1 ) ; } break ; case 2 : if ( rtAction != rtPrevAction ) { if
( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } hnpfszi1fh_idx_1 = (
( o2y45zbt2m4 . an1hct1vdk [ 0 ] - o2y45zbt2m4 . an1hct1vdk [ 4 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) + hbv5azo3sw . Constant_Value_m2h11to3lk ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . jxtww5tjxt != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . jxtww5tjxt
= 0 ; } o2y45zbt2m4 . b51zos5ddd = muDoubleScalarSqrt ( hnpfszi1fh_idx_1 ) ;
hrxu5rhe3af . cjwjqcd1zs = ( o2y45zbt2m4 . b51zos5ddd != 0.0 ) ; srUpdateBC (
hrxu5rhe3af . fimtx0wf43 ) ; } else if ( hnpfszi1fh_idx_1 < 0.0 ) {
o2y45zbt2m4 . b51zos5ddd = - muDoubleScalarSqrt ( muDoubleScalarAbs (
hnpfszi1fh_idx_1 ) ) ; hrxu5rhe3af . jxtww5tjxt = 1 ; } else { o2y45zbt2m4 .
b51zos5ddd = muDoubleScalarSqrt ( hnpfszi1fh_idx_1 ) ; } break ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . h5fod2fj2q ) ; }
break ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i_p = 0 ; i_p < 49 ;
i_p ++ ) { hnpfszi1fh_idx_1 = 0.0026457513110645908 * hrxu5rhe3af .
buggjk4l1n [ i_p ] ; X2 [ i_p ] = hnpfszi1fh_idx_1 ; X2 [ i_p + 49 ] = -
hnpfszi1fh_idx_1 ; } for ( i = 0 ; i < 14 ; i ++ ) { for ( i_p = 0 ; i_p < 7
; i_p ++ ) { X2 [ i_p + 7 * i ] += hrxu5rhe3af . j3ergpk3vu [ i_p ] ; } } for
( i = 0 ; i < 14 ; i ++ ) { for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { Y2_e [ i_p +
7 * i ] = X2 [ 7 * i + i_p ] ; } attitudePropagation_jopKHuyt ( & Y2_e [ 7 *
i ] , o2y45zbt2m4 . g20nolxhoz ) ; } for ( i = 0 ; i < 7 ; i ++ ) {
p1airozsub [ i ] = hrxu5rhe3af . j3ergpk3vu [ i ] ; }
attitudePropagation_jopKHuyt ( p1airozsub , o2y45zbt2m4 . g20nolxhoz ) ;
tmp_e [ 0 ] = 0.999996999998 ; tmp_e [ 1 ] = - 0.071428642857214286 ;
UTMeanCovSqrt_bM1O4v2d ( Wmean , tmp_e , - 999999.0 , p1airozsub , Y2_e ,
hrxu5rhe3af . j3ergpk3vu , hrxu5rhe3af . buggjk4l1n ) ; memset ( & P [ 0 ] ,
0 , 49U * sizeof ( real_T ) ) ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { P [ i_p
+ 7 * i_p ] = 1.0 ; } qrFactor_dow5EKjD ( P , hrxu5rhe3af . buggjk4l1n ,
hbv5azo3sw . Q_Value ) ; } UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID13
( int_T tid ) { real_T bj3w2pxex3_idx_1 ; real_T bj3w2pxex3_idx_2 ; real_T
chygdxgike ; real_T ivzcgo0u3v_idx_1 ; real_T ivzcgo0u3v_idx_2 ; real_T
ix5sio1awm ; real_T jdgqlncavi ; real_T jnvxrzr0ue ; real_T ljyggpl3ml ;
o2y45zbt2m4 . amepcbkksg [ 0 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 0
] ; o2y45zbt2m4 . fi1wde2gl2 [ 0 ] = hbv5azo3sw . Constant3_Value [ 0 ] ;
o2y45zbt2m4 . amepcbkksg [ 1 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 1
] ; o2y45zbt2m4 . fi1wde2gl2 [ 1 ] = hbv5azo3sw . Constant3_Value [ 1 ] ;
o2y45zbt2m4 . amepcbkksg [ 2 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 2
] ; o2y45zbt2m4 . fi1wde2gl2 [ 2 ] = hbv5azo3sw . Constant3_Value [ 2 ] ;
o2y45zbt2m4 . culrexdnyf = hbv5azo3sw . Gain1_Gain_l1jki2u5fa * rtP_Earth .
mu ; o2y45zbt2m4 . ambhfazf2y [ 0 ] = hbv5azo3sw . Inertia_Value [ 1 ] -
hbv5azo3sw . Inertia_Value [ 2 ] ; o2y45zbt2m4 . ambhfazf2y [ 1 ] =
hbv5azo3sw . Inertia_Value [ 2 ] - hbv5azo3sw . Inertia_Value [ 0 ] ;
o2y45zbt2m4 . ambhfazf2y [ 2 ] = hbv5azo3sw . Inertia_Value [ 0 ] -
hbv5azo3sw . Inertia_Value [ 1 ] ; MagneticFieldInPolarCoordsTID1 ( ) ;
o2y45zbt2m4 . lx0bv1yu1i [ 0 ] = rtP_Spacecraft . initialAngularSpeed [ 0 ] ;
o2y45zbt2m4 . lx0bv1yu1i [ 1 ] = rtP_Spacecraft . initialAngularSpeed [ 1 ] ;
o2y45zbt2m4 . lx0bv1yu1i [ 2 ] = rtP_Spacecraft . initialAngularSpeed [ 2 ] ;
o2y45zbt2m4 . a55nsryplm [ 0 ] = rtP_Spacecraft . initialAttitude [ 0 ] ;
o2y45zbt2m4 . a55nsryplm [ 1 ] = rtP_Spacecraft . initialAttitude [ 1 ] ;
o2y45zbt2m4 . a55nsryplm [ 2 ] = rtP_Spacecraft . initialAttitude [ 2 ] ;
o2y45zbt2m4 . a55nsryplm [ 3 ] = rtP_Spacecraft . initialAttitude [ 3 ] ;
o2y45zbt2m4 . jq2aut2ijb [ 0 ] = hbv5azo3sw . Inertia_Value [ 1 ] -
hbv5azo3sw . Inertia_Value [ 2 ] ; o2y45zbt2m4 . jq2aut2ijb [ 1 ] =
hbv5azo3sw . Inertia_Value [ 2 ] - hbv5azo3sw . Inertia_Value [ 0 ] ;
o2y45zbt2m4 . jq2aut2ijb [ 2 ] = hbv5azo3sw . Inertia_Value [ 0 ] -
hbv5azo3sw . Inertia_Value [ 1 ] ; o2y45zbt2m4 . mvnud1uzgl = rtP_Const . Fe
/ rtP_Const . c ; o2y45zbt2m4 . hckf2ailv0 = hbv5azo3sw .
Gain1_Gain_km22rji0yo * hbv5azo3sw . u821stMarch_Value ; chygdxgike =
hbv5azo3sw . Sun_Value / ( hbv5azo3sw . a_Value * hbv5azo3sw . a_Value ) /
hbv5azo3sw . a_Value ; jdgqlncavi = hbv5azo3sw . Constant_Value_c0ie4jx1vv -
hbv5azo3sw . e_Value * hbv5azo3sw . e_Value ; if ( ssIsMajorTimeStep ( rtS )
) { if ( hrxu5rhe3af . nqcixj2cfc != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . nqcixj2cfc
= 0 ; } jnvxrzr0ue = muDoubleScalarSqrt ( jdgqlncavi ) ; } else if (
jdgqlncavi < 0.0 ) { jnvxrzr0ue = - muDoubleScalarSqrt ( muDoubleScalarAbs (
jdgqlncavi ) ) ; hrxu5rhe3af . nqcixj2cfc = 1 ; } else { jnvxrzr0ue =
muDoubleScalarSqrt ( jdgqlncavi ) ; } o2y45zbt2m4 . bfud51xipp = jnvxrzr0ue *
jdgqlncavi ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . gcz34svd4r
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af .
gcz34svd4r = 0 ; } o2y45zbt2m4 . kp1mzqwbu3 = muDoubleScalarSqrt ( chygdxgike
) ; } else if ( chygdxgike < 0.0 ) { o2y45zbt2m4 . kp1mzqwbu3 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( chygdxgike ) ) ; hrxu5rhe3af .
gcz34svd4r = 1 ; } else { o2y45zbt2m4 . kp1mzqwbu3 = muDoubleScalarSqrt (
chygdxgike ) ; } o2y45zbt2m4 . mrzwmqiqje = ( hbv5azo3sw .
Constant3_Value_fveye0j2gb - hbv5azo3sw . e_Value * hbv5azo3sw . e_Value ) *
hbv5azo3sw . a_Value ; muDoubleScalarSinCos ( hbv5azo3sw . u2_Gain * (
hbv5azo3sw . Gain1_Gain_byeui5d4hz * hbv5azo3sw .
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
uint32_T numTicksToNextSampleHit ; uint32_T totalTicksInPeriod ; _rtXAbsTol =
( ( d3ndefizfv * ) ssGetAbsTolVector ( rtS ) ) ; hrxu5rhe3af . ckit2etwje = 0
; _rtXAbsTol -> ezm2ooaqjl [ 0 ] = hbv5azo3sw . Integrator1_AbsoluteTolerance
; _rtXAbsTol -> ezm2ooaqjl [ 1 ] = hbv5azo3sw . Integrator1_AbsoluteTolerance
; _rtXAbsTol -> ezm2ooaqjl [ 2 ] = hbv5azo3sw . Integrator1_AbsoluteTolerance
; hrxu5rhe3af . irqzxzls3s = 0 ; hrxu5rhe3af . btkpsszf3k = 0 ; hrxu5rhe3af .
febtg0cpg5 = 0 ; if ( ssIsSampleHit ( rtS , 10 , 0 ) ) { if ( hrxu5rhe3af .
e2pe11pwxn ) { dc = o2y45zbt2m4 . op4p3vooky [ 0 ] ; if ( o2y45zbt2m4 .
op4p3vooky [ 0 ] > 1.0 ) { dc = 1.0 ; } dc = muDoubleScalarFloor ( (
2.2204460492503131E-16 * dc * hbv5azo3sw . PWM3_Period + dc * hbv5azo3sw .
PWM3_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) -
( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor (
( 2.2204460492503131E-16 * hbv5azo3sw . PWM3_Period + hbv5azo3sw .
PWM3_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } totalTicksInPeriod = dc < 0.0 ? ( uint32_T ) - (
int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; if ( numTicksToNextSampleHit
< totalTicksInPeriod ) { ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 10 , ( real_T ) numTicksToNextSampleHit ) ; ; hrxu5rhe3af . e2pe11pwxn
= false ; hrxu5rhe3af . opg1lhdczb = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . e2pe11pwxn = true ; hrxu5rhe3af .
opg1lhdczb = true ; } hrxu5rhe3af . epbwbvrls5 = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . opg1lhdczb ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * hbv5azo3sw . PWM3_Period +
hbv5azo3sw . PWM3_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 10 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( hrxu5rhe3af . epbwbvrls5 > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , hrxu5rhe3af .
epbwbvrls5 ) ; ; } } hrxu5rhe3af . e2pe11pwxn = true ; hrxu5rhe3af .
opg1lhdczb = true ; } } if ( ssIsSampleHit ( rtS , 11 , 0 ) ) { if (
hrxu5rhe3af . jiqhomoo0v ) { dc = o2y45zbt2m4 . op4p3vooky [ 1 ] ; if (
o2y45zbt2m4 . op4p3vooky [ 1 ] > 1.0 ) { dc = 1.0 ; } dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc * hbv5azo3sw .
PWM4_Period + dc * hbv5azo3sw . PWM4_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T )
- dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16
* hbv5azo3sw . PWM4_Period + hbv5azo3sw . PWM4_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; } totalTicksInPeriod
= dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ;
if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . jiqhomoo0v = false ; hrxu5rhe3af
. jmjdutrgwi = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . jiqhomoo0v = true ; hrxu5rhe3af .
jmjdutrgwi = true ; } hrxu5rhe3af . fytmukko2d = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . jmjdutrgwi ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * hbv5azo3sw . PWM4_Period +
hbv5azo3sw . PWM4_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 11 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( hrxu5rhe3af . fytmukko2d > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , hrxu5rhe3af .
fytmukko2d ) ; ; } } hrxu5rhe3af . jiqhomoo0v = true ; hrxu5rhe3af .
jmjdutrgwi = true ; } } if ( ssIsSampleHit ( rtS , 12 , 0 ) ) { if (
hrxu5rhe3af . gxxnmirgwt ) { dc = o2y45zbt2m4 . op4p3vooky [ 2 ] ; if (
o2y45zbt2m4 . op4p3vooky [ 2 ] > 1.0 ) { dc = 1.0 ; } dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc * hbv5azo3sw .
PWM5_Period + dc * hbv5azo3sw . PWM5_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T )
- dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16
* hbv5azo3sw . PWM5_Period + hbv5azo3sw . PWM5_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; } totalTicksInPeriod
= dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ;
if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . gxxnmirgwt = false ; hrxu5rhe3af
. ayulg3mnvk = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . gxxnmirgwt = true ; hrxu5rhe3af .
ayulg3mnvk = true ; } hrxu5rhe3af . curihjwvdq = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . ayulg3mnvk ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * hbv5azo3sw . PWM5_Period +
hbv5azo3sw . PWM5_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 12 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( hrxu5rhe3af . curihjwvdq > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 12 , hrxu5rhe3af .
curihjwvdq ) ; ; } } hrxu5rhe3af . gxxnmirgwt = true ; hrxu5rhe3af .
ayulg3mnvk = true ; } } if ( ssIsSampleHit ( rtS , 8 , 0 ) ) { if (
hrxu5rhe3af . cozmdzu0w1 ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; if (
o2y45zbt2m4 . c1cfxe21zn [ 0 ] > 1.0 ) { dc = 1.0 ; } dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc * hbv5azo3sw . PWM_Period
+ dc * hbv5azo3sw . PWM_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) -
( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor (
( 2.2204460492503131E-16 * hbv5azo3sw . PWM_Period + hbv5azo3sw . PWM_Period
) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) {
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
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * hbv5azo3sw . PWM_Period +
hbv5azo3sw . PWM_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 8 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( hrxu5rhe3af . oumjhalsqc > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 8 , hrxu5rhe3af .
oumjhalsqc ) ; ; } } hrxu5rhe3af . cozmdzu0w1 = true ; hrxu5rhe3af .
cnj1jumxqg = true ; } } if ( ssIsSampleHit ( rtS , 9 , 0 ) ) { if (
hrxu5rhe3af . i5keywnlob ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 1 ] ; if (
o2y45zbt2m4 . c1cfxe21zn [ 1 ] > 1.0 ) { dc = 1.0 ; } dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc * hbv5azo3sw .
PWM1_Period + dc * hbv5azo3sw . PWM1_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T )
- dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16
* hbv5azo3sw . PWM1_Period + hbv5azo3sw . PWM1_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; } totalTicksInPeriod
= dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ;
if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . i5keywnlob = false ; hrxu5rhe3af
. ae5papqlus = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . i5keywnlob = true ; hrxu5rhe3af .
ae5papqlus = true ; } hrxu5rhe3af . o2yvavvn5c = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . ae5papqlus ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * hbv5azo3sw . PWM1_Period +
hbv5azo3sw . PWM1_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 9 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( hrxu5rhe3af . o2yvavvn5c > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 9 , hrxu5rhe3af .
o2yvavvn5c ) ; ; } } hrxu5rhe3af . i5keywnlob = true ; hrxu5rhe3af .
ae5papqlus = true ; } } if ( ssIsSampleHit ( rtS , 7 , 0 ) ) { if (
hrxu5rhe3af . mp3yltewxi ) { dc = o2y45zbt2m4 . c1cfxe21zn [ 2 ] ; if (
o2y45zbt2m4 . c1cfxe21zn [ 2 ] > 1.0 ) { dc = 1.0 ; } dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * dc * hbv5azo3sw .
PWM2_Period + dc * hbv5azo3sw . PWM2_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; }
numTicksToNextSampleHit = dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T )
- dc : ( uint32_T ) dc ; dc = muDoubleScalarFloor ( ( 2.2204460492503131E-16
* hbv5azo3sw . PWM2_Period + hbv5azo3sw . PWM2_Period ) / 0.1 ) ; if (
muDoubleScalarIsNaN ( dc ) || muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; }
else { dc = muDoubleScalarRem ( dc , 4.294967296E+9 ) ; } totalTicksInPeriod
= dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - dc : ( uint32_T ) dc ;
if ( numTicksToNextSampleHit < totalTicksInPeriod ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ( real_T )
numTicksToNextSampleHit ) ; ; hrxu5rhe3af . mp3yltewxi = false ; hrxu5rhe3af
. brmqgwecvy = false ; } else {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , ( real_T )
totalTicksInPeriod ) ; ; hrxu5rhe3af . mp3yltewxi = true ; hrxu5rhe3af .
brmqgwecvy = true ; } hrxu5rhe3af . hz2n5lmwzt = totalTicksInPeriod -
numTicksToNextSampleHit ; } else { if ( hrxu5rhe3af . brmqgwecvy ) { dc =
muDoubleScalarFloor ( ( 2.2204460492503131E-16 * hbv5azo3sw . PWM2_Period +
hbv5azo3sw . PWM2_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( dc ) ||
muDoubleScalarIsInf ( dc ) ) { dc = 0.0 ; } else { dc = muDoubleScalarRem (
dc , 4.294967296E+9 ) ; } ssSetNumTicksToNextHitForControllableSampleTime (
rtS , 7 , ( real_T ) ( dc < 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) -
dc : ( uint32_T ) dc ) ) ; ; } else { if ( hrxu5rhe3af . hz2n5lmwzt > 0.0 ) {
ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 7 , hrxu5rhe3af .
hz2n5lmwzt ) ; ; } } hrxu5rhe3af . mp3yltewxi = true ; hrxu5rhe3af .
brmqgwecvy = true ; } } _rtXAbsTol -> li1obxdvy3 [ 0 ] = hbv5azo3sw .
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
else { if ( o2y45zbt2m4 . an1hct1vdk [ 8 ] > o2y45zbt2m4 . an1hct1vdk [ 0 ] )
{ _rtZCSV -> cuaynzimio [ 1 ] = 1.0 ; } } { ( ( p0mddzrq0f * )
ssGetSolverZcSignalVector ( rtS ) ) -> p5ibpoygyq = 0.0 ; } if ( hrxu5rhe3af
. hnbwguuonj == 0 ) { _rtZCSV -> p5ibpoygyq = o2y45zbt2m4 . hi5t21up55 ; } {
( ( p0mddzrq0f * ) ssGetSolverZcSignalVector ( rtS ) ) -> iyjkgpjk2z = 0.0 ;
} if ( hrxu5rhe3af . hnbwguuonj == 1 ) { _rtZCSV -> iyjkgpjk2z = o2y45zbt2m4
. mz4bssc4xj ; } { ( ( p0mddzrq0f * ) ssGetSolverZcSignalVector ( rtS ) ) ->
b5utqecrmv = 0.0 ; } if ( hrxu5rhe3af . hnbwguuonj == 2 ) { _rtZCSV ->
b5utqecrmv = o2y45zbt2m4 . b51zos5ddd ; } } } void MdlTerminate ( void ) {
gcif3exjdu ( & ( hrxu5rhe3af . p11kqkd5tq . rtm ) ) ; } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 14 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
13 ) ; ssSetNumBlocks ( rtS , 1654 ) ; ssSetNumBlockIO ( rtS , 211 ) ;
ssSetNumBlockParams ( rtS , 596 ) ; } void MdlInitializeSampleTimes ( void )
{ ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetSampleTime ( rtS , 2 , 0.01 ) ; ssSetSampleTime ( rtS , 3 , 0.03 ) ;
ssSetSampleTime ( rtS , 4 , 0.1 ) ; ssSetSampleTime ( rtS , 5 , 1.0 ) ;
ssSetSampleTime ( rtS , 6 , 2.0 ) ; ssSetSampleTime ( rtS , 7 , 0.1 ) ;
ssSetSampleTime ( rtS , 8 , 0.1 ) ; ssSetSampleTime ( rtS , 9 , 0.1 ) ;
ssSetSampleTime ( rtS , 10 , 0.1 ) ; ssSetSampleTime ( rtS , 11 , 0.1 ) ;
ssSetSampleTime ( rtS , 12 , 0.1 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 1.0 ) ; ssSetOffsetTime ( rtS , 2 , 0.0 ) ;
ssSetOffsetTime ( rtS , 3 , 0.0 ) ; ssSetOffsetTime ( rtS , 4 , 0.0 ) ;
ssSetOffsetTime ( rtS , 5 , 0.0 ) ; ssSetOffsetTime ( rtS , 6 , 0.0 ) ;
ssSetOffsetTime ( rtS , 7 , - 20.0 ) ; ssSetOffsetTime ( rtS , 8 , - 21.0 ) ;
ssSetOffsetTime ( rtS , 9 , - 22.0 ) ; ssSetOffsetTime ( rtS , 10 , - 23.0 )
; ssSetOffsetTime ( rtS , 11 , - 24.0 ) ; ssSetOffsetTime ( rtS , 12 , - 25.0
) ; } void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 47910091U )
; ssSetChecksumVal ( rtS , 1 , 3490231339U ) ; ssSetChecksumVal ( rtS , 2 ,
3896331790U ) ; ssSetChecksumVal ( rtS , 3 , 2484613374U ) ; }
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
( ( void * ) & o2y45zbt2m4 ) ) ; ssSetWorkSizeInBytes ( rtS , sizeof (
o2y45zbt2m4 ) , "BlockIO" ) ; ( void ) memset ( ( ( void * ) & o2y45zbt2m4 )
, 0 , sizeof ( o2y45zbt2m ) ) ; } { real_T * x = ( real_T * ) & n1mubcupv31 ;
ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
n1mubcupv3 ) ) ; } { void * dwork = ( void * ) & hrxu5rhe3af ; ssSetRootDWork
( rtS , dwork ) ; ssSetWorkSizeInBytes ( rtS , sizeof ( hrxu5rhe3af ) ,
"DWork" ) ; ( void ) memset ( dwork , 0 , sizeof ( hrxu5rhe3a ) ) ; } {
static DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0
, sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 20 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } main_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"main" ) ; ssSetPath ( rtS , "main" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 7200.0 ) ; dpqzzutcg1 ( rtS , 0 , 0 , & ( hrxu5rhe3af .
p11kqkd5tq . rtm ) , NULL , 0 , & ( rt_dataMapInfoPtr -> mmi ) ,
"main/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
, 0 , - 1 ) ; { char_T * tempStr = rtwCAPI_EncodePath (
"main/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
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
ssSetChecksumVal ( rtS , 0 , 47910091U ) ; ssSetChecksumVal ( rtS , 1 ,
3490231339U ) ; ssSetChecksumVal ( rtS , 2 , 3896331790U ) ; ssSetChecksumVal
( rtS , 3 , 2484613374U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 43 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = ( sysRanDType * ) &
hrxu5rhe3af . fimtx0wf43 ; systemRan [ 4 ] = ( sysRanDType * ) & hrxu5rhe3af
. a0tdfwofzg ; systemRan [ 5 ] = ( sysRanDType * ) & hrxu5rhe3af . as5m3dr43z
; systemRan [ 6 ] = ( sysRanDType * ) & hrxu5rhe3af . h5fod2fj2q ; systemRan
[ 7 ] = ( sysRanDType * ) & hrxu5rhe3af . nw1rjo5a2w ; systemRan [ 8 ] = (
sysRanDType * ) & hrxu5rhe3af . jkjkrdx1hk ; systemRan [ 9 ] = ( sysRanDType
* ) & hrxu5rhe3af . o0pf4uvatt ; systemRan [ 10 ] = ( sysRanDType * ) &
hrxu5rhe3af . cbsmbddbag ; systemRan [ 11 ] = ( sysRanDType * ) & hrxu5rhe3af
. fpx2qirisn ; systemRan [ 12 ] = ( sysRanDType * ) & hrxu5rhe3af .
pwomc1kiz3 ; systemRan [ 13 ] = ( sysRanDType * ) & hrxu5rhe3af . pmgcir2p13
; systemRan [ 14 ] = ( sysRanDType * ) & hrxu5rhe3af . fnnqkeqpmg ; systemRan
[ 15 ] = & rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ; systemRan
[ 17 ] = & rtAlwaysEnabled ; systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan
[ 19 ] = & rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan
[ 21 ] = & rtAlwaysEnabled ; systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan
[ 23 ] = & rtAlwaysEnabled ; systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan
[ 25 ] = & rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan
[ 27 ] = & rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan
[ 29 ] = & rtAlwaysEnabled ; systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan
[ 31 ] = & rtAlwaysEnabled ; systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan
[ 33 ] = ( sysRanDType * ) & hrxu5rhe3af . jkbsaxmqju ; systemRan [ 34 ] = (
sysRanDType * ) & hrxu5rhe3af . jkbsaxmqju ; systemRan [ 35 ] = ( sysRanDType
* ) & hrxu5rhe3af . noecaey35j ; systemRan [ 36 ] = ( sysRanDType * ) &
hrxu5rhe3af . noecaey35j ; systemRan [ 37 ] = ( sysRanDType * ) & hrxu5rhe3af
. olb1gflryv ; systemRan [ 38 ] = ( sysRanDType * ) & hrxu5rhe3af .
olb1gflryv ; systemRan [ 39 ] = & rtAlwaysEnabled ; systemRan [ 40 ] = &
rtAlwaysEnabled ; systemRan [ 41 ] = & rtAlwaysEnabled ; systemRan [ 42 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 13 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID13 ( tid ) ; }
