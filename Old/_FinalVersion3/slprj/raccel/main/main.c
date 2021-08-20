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
#include "UTMeanCovSqrt_KqyqV2M7.h"
#include "UTMeanCovSqrt_tqdDaaPa.h"
#include "anon_yDH48dhx.h"
#include "cholUpdateFactor_LEN81FGq.h"
#include "qr_4g1gr4gZ.h"
#include "qr_rXyRqJVO.h"
#include "trisolve_D5Vfq0VZ.h"
#include "trisolve_zdTVBC8Q.h"
#include "xnrm2_sFTqT85T.h"
o2y45zbt2m o2y45zbt2m4 ; n1mubcupv3 n1mubcupv31 ; hrxu5rhe3a hrxu5rhe3af ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; static real_T
hgh4w0xkzt ( int32_T n , const real_T x [ 12 ] , int32_T ix0 ) ; static
real_T nfbjifnpg1 ( int32_T n , const real_T x [ 12 ] , int32_T ix0 , const
real_T y [ 12 ] , int32_T iy0 ) ; static void gzoimgstaj ( int32_T n , real_T
a , int32_T ix0 , const real_T y [ 12 ] , int32_T iy0 , real_T b_y [ 12 ] ) ;
static real_T hgh4w0xkzt5 ( const real_T x [ 3 ] , int32_T ix0 ) ; static
void gzoimgstaj4rmj ( int32_T n , real_T a , const real_T x [ 12 ] , int32_T
ix0 , real_T y [ 4 ] , int32_T iy0 ) ; static void gzoimgstaj4r ( int32_T n ,
real_T a , const real_T x [ 4 ] , int32_T ix0 , const real_T y [ 12 ] ,
int32_T iy0 , real_T b_y [ 12 ] ) ; static real_T nfbjifnpg1u ( const real_T
x [ 9 ] , const real_T y [ 9 ] , int32_T iy0 ) ; static void gzoimgstaj4rm (
real_T a , const real_T y [ 9 ] , int32_T iy0 , real_T b_y [ 9 ] ) ; static
void co1xaodswa ( const real_T x [ 9 ] , int32_T ix0 , int32_T iy0 , real_T
b_x [ 9 ] ) ; static void co1xaodswai ( const real_T x [ 12 ] , int32_T ix0 ,
int32_T iy0 , real_T b_x [ 12 ] ) ; static void engyc1llng ( real_T a ,
real_T b , real_T * b_a , real_T * b_b , real_T * c , real_T * s ) ; static
void a1omaibidu ( const real_T x [ 9 ] , int32_T ix0 , int32_T iy0 , real_T c
, real_T s , real_T b_x [ 9 ] ) ; static void a1omaibidur ( const real_T x [
12 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s , real_T b_x [ 12 ] )
; static void etikaj0hsn ( const real_T A [ 12 ] , real_T U [ 12 ] , real_T s
[ 3 ] , real_T V [ 9 ] ) ; void n11z2qtnyp ( const real_T n5fwjtrtab [ 2 ] ,
const real_T igzjsvau3z [ 2 ] , const real_T aroe4yccp3 [ 2 ] , const real_T
jmtcrxgana [ 2 ] , const real_T bw0neo01iz [ 2 ] , const real_T clnqp52x4r [
2 ] , g3zz1gnhke * localB ) { real_T varargin_1 [ 6 ] ; real_T ex ; int32_T
g_k ; int32_T k ; boolean_T exitg1 ; varargin_1 [ 0 ] = n5fwjtrtab [ 0 ] *
n5fwjtrtab [ 0 ] + n5fwjtrtab [ 1 ] * n5fwjtrtab [ 1 ] ; varargin_1 [ 1 ] =
igzjsvau3z [ 0 ] * igzjsvau3z [ 0 ] + igzjsvau3z [ 1 ] * igzjsvau3z [ 1 ] ;
varargin_1 [ 2 ] = aroe4yccp3 [ 0 ] * aroe4yccp3 [ 0 ] + aroe4yccp3 [ 1 ] *
aroe4yccp3 [ 1 ] ; varargin_1 [ 3 ] = jmtcrxgana [ 0 ] * jmtcrxgana [ 0 ] +
jmtcrxgana [ 1 ] * jmtcrxgana [ 1 ] ; varargin_1 [ 4 ] = bw0neo01iz [ 0 ] *
bw0neo01iz [ 0 ] + bw0neo01iz [ 1 ] * bw0neo01iz [ 1 ] ; varargin_1 [ 5 ] =
clnqp52x4r [ 0 ] * clnqp52x4r [ 0 ] + clnqp52x4r [ 1 ] * clnqp52x4r [ 1 ] ;
if ( ! muDoubleScalarIsNaN ( varargin_1 [ 0 ] ) ) { k = 1 ; } else { k = 0 ;
g_k = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( g_k < 7 ) ) { if ( !
muDoubleScalarIsNaN ( varargin_1 [ g_k - 1 ] ) ) { k = g_k ; exitg1 = true ;
} else { g_k ++ ; } } } if ( k == 0 ) { k = 1 ; } else { ex = varargin_1 [ k
- 1 ] ; for ( g_k = k ; g_k + 1 < 7 ; g_k ++ ) { if ( ex > varargin_1 [ g_k ]
) { ex = varargin_1 [ g_k ] ; k = g_k + 1 ; } } } switch ( k ) { case 1 :
localB -> nx1h2bs53u [ 0 ] = n5fwjtrtab [ 0 ] ; localB -> nx1h2bs53u [ 1 ] =
n5fwjtrtab [ 1 ] ; localB -> heq1xsib3m [ 0 ] = 1.0 ; localB -> heq1xsib3m [
1 ] = 0.0 ; localB -> heq1xsib3m [ 2 ] = 0.0 ; localB -> heq1xsib3m [ 3 ] =
0.0 ; break ; case 2 : localB -> nx1h2bs53u [ 0 ] = igzjsvau3z [ 0 ] ; localB
-> nx1h2bs53u [ 1 ] = igzjsvau3z [ 1 ] ; localB -> heq1xsib3m [ 0 ] =
0.70710678118654757 ; localB -> heq1xsib3m [ 1 ] = 0.70710678118654746 ;
localB -> heq1xsib3m [ 2 ] = 0.0 ; localB -> heq1xsib3m [ 3 ] = 0.0 ; break ;
case 3 : localB -> nx1h2bs53u [ 0 ] = aroe4yccp3 [ 0 ] ; localB -> nx1h2bs53u
[ 1 ] = aroe4yccp3 [ 1 ] ; localB -> heq1xsib3m [ 0 ] = 6.123233995736766E-17
; localB -> heq1xsib3m [ 1 ] = 1.0 ; localB -> heq1xsib3m [ 2 ] = 0.0 ;
localB -> heq1xsib3m [ 3 ] = 0.0 ; break ; case 4 : localB -> nx1h2bs53u [ 0
] = jmtcrxgana [ 0 ] ; localB -> nx1h2bs53u [ 1 ] = jmtcrxgana [ 1 ] ; localB
-> heq1xsib3m [ 0 ] = 0.70710678118654757 ; localB -> heq1xsib3m [ 1 ] = -
0.70710678118654746 ; localB -> heq1xsib3m [ 2 ] = 0.0 ; localB -> heq1xsib3m
[ 3 ] = 0.0 ; break ; case 5 : localB -> nx1h2bs53u [ 0 ] = bw0neo01iz [ 0 ]
; localB -> nx1h2bs53u [ 1 ] = bw0neo01iz [ 1 ] ; localB -> heq1xsib3m [ 0 ]
= 0.70710678118654757 ; localB -> heq1xsib3m [ 1 ] = 0.0 ; localB ->
heq1xsib3m [ 2 ] = 0.70710678118654746 ; localB -> heq1xsib3m [ 3 ] = 0.0 ;
break ; default : localB -> nx1h2bs53u [ 0 ] = clnqp52x4r [ 0 ] ; localB ->
nx1h2bs53u [ 1 ] = clnqp52x4r [ 1 ] ; localB -> heq1xsib3m [ 0 ] =
0.70710678118654757 ; localB -> heq1xsib3m [ 1 ] = 0.0 ; localB -> heq1xsib3m
[ 2 ] = - 0.70710678118654746 ; localB -> heq1xsib3m [ 3 ] = 0.0 ; break ; }
} static real_T hgh4w0xkzt ( int32_T n , const real_T x [ 12 ] , int32_T ix0
) { real_T absxk ; real_T scale ; real_T t ; real_T y ; int32_T k ; int32_T
kend ; y = 0.0 ; scale = 3.3121686421112381E-170 ; kend = ix0 + n ; for ( k =
ix0 ; k < kend ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if (
absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; }
else { t = absxk / scale ; y += t * t ; } } return scale * muDoubleScalarSqrt
( y ) ; } static real_T nfbjifnpg1 ( int32_T n , const real_T x [ 12 ] ,
int32_T ix0 , const real_T y [ 12 ] , int32_T iy0 ) { real_T d ; int32_T k ;
d = 0.0 ; for ( k = 0 ; k < n ; k ++ ) { d += x [ ( ix0 + k ) - 1 ] * y [ (
iy0 + k ) - 1 ] ; } return d ; } static void gzoimgstaj ( int32_T n , real_T
a , int32_T ix0 , const real_T y [ 12 ] , int32_T iy0 , real_T b_y [ 12 ] ) {
int32_T k ; memcpy ( & b_y [ 0 ] , & y [ 0 ] , 12U * sizeof ( real_T ) ) ; if
( ! ( a == 0.0 ) ) { for ( k = 0 ; k < n ; k ++ ) { b_y [ ( iy0 + k ) - 1 ]
+= b_y [ ( ix0 + k ) - 1 ] * a ; } } } static real_T hgh4w0xkzt5 ( const
real_T x [ 3 ] , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T t ;
real_T y ; int32_T k ; y = 0.0 ; scale = 3.3121686421112381E-170 ; for ( k =
ix0 ; k <= ix0 + 1 ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if
( absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ;
} else { t = absxk / scale ; y += t * t ; } } return scale *
muDoubleScalarSqrt ( y ) ; } static void gzoimgstaj4rmj ( int32_T n , real_T
a , const real_T x [ 12 ] , int32_T ix0 , real_T y [ 4 ] , int32_T iy0 ) {
__m128d tmp ; int32_T k ; int32_T scalarLB ; int32_T vectorUB ; if ( ! ( a ==
0.0 ) ) { scalarLB = ( n / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( k = 0 ;
k <= vectorUB ; k += 2 ) { tmp = _mm_loadu_pd ( & y [ ( iy0 + k ) - 1 ] ) ;
_mm_storeu_pd ( & y [ ( iy0 + k ) - 1 ] , _mm_add_pd ( _mm_mul_pd (
_mm_loadu_pd ( & x [ ( ix0 + k ) - 1 ] ) , _mm_set1_pd ( a ) ) , tmp ) ) ; }
for ( k = scalarLB ; k < n ; k ++ ) { y [ ( iy0 + k ) - 1 ] += x [ ( ix0 + k
) - 1 ] * a ; } } } static void gzoimgstaj4r ( int32_T n , real_T a , const
real_T x [ 4 ] , int32_T ix0 , const real_T y [ 12 ] , int32_T iy0 , real_T
b_y [ 12 ] ) { __m128d tmp ; int32_T k ; int32_T scalarLB ; int32_T vectorUB
; memcpy ( & b_y [ 0 ] , & y [ 0 ] , 12U * sizeof ( real_T ) ) ; if ( ! ( a
== 0.0 ) ) { scalarLB = ( n / 2 ) << 1 ; vectorUB = scalarLB - 2 ; for ( k =
0 ; k <= vectorUB ; k += 2 ) { tmp = _mm_loadu_pd ( & b_y [ ( iy0 + k ) - 1 ]
) ; _mm_storeu_pd ( & b_y [ ( iy0 + k ) - 1 ] , _mm_add_pd ( _mm_mul_pd (
_mm_loadu_pd ( & x [ ( ix0 + k ) - 1 ] ) , _mm_set1_pd ( a ) ) , tmp ) ) ; }
for ( k = scalarLB ; k < n ; k ++ ) { b_y [ ( iy0 + k ) - 1 ] += x [ ( ix0 +
k ) - 1 ] * a ; } } } static real_T nfbjifnpg1u ( const real_T x [ 9 ] ,
const real_T y [ 9 ] , int32_T iy0 ) { return y [ iy0 - 1 ] * x [ 1 ] + x [ 2
] * y [ iy0 ] ; } static void gzoimgstaj4rm ( real_T a , const real_T y [ 9 ]
, int32_T iy0 , real_T b_y [ 9 ] ) { memcpy ( & b_y [ 0 ] , & y [ 0 ] , 9U *
sizeof ( real_T ) ) ; if ( ! ( a == 0.0 ) ) { b_y [ iy0 - 1 ] += a * b_y [ 1
] ; b_y [ iy0 ] += a * b_y [ 2 ] ; } } static void co1xaodswa ( const real_T
x [ 9 ] , int32_T ix0 , int32_T iy0 , real_T b_x [ 9 ] ) { real_T temp ;
memcpy ( & b_x [ 0 ] , & x [ 0 ] , 9U * sizeof ( real_T ) ) ; temp = b_x [
ix0 - 1 ] ; b_x [ ix0 - 1 ] = b_x [ iy0 - 1 ] ; b_x [ iy0 - 1 ] = temp ; temp
= b_x [ ix0 ] ; b_x [ ix0 ] = b_x [ iy0 ] ; b_x [ iy0 ] = temp ; temp = b_x [
ix0 + 1 ] ; b_x [ ix0 + 1 ] = b_x [ iy0 + 1 ] ; b_x [ iy0 + 1 ] = temp ; }
static void co1xaodswai ( const real_T x [ 12 ] , int32_T ix0 , int32_T iy0 ,
real_T b_x [ 12 ] ) { real_T temp ; memcpy ( & b_x [ 0 ] , & x [ 0 ] , 12U *
sizeof ( real_T ) ) ; temp = b_x [ ix0 - 1 ] ; b_x [ ix0 - 1 ] = b_x [ iy0 -
1 ] ; b_x [ iy0 - 1 ] = temp ; temp = b_x [ ix0 ] ; b_x [ ix0 ] = b_x [ iy0 ]
; b_x [ iy0 ] = temp ; temp = b_x [ ix0 + 1 ] ; b_x [ ix0 + 1 ] = b_x [ iy0 +
1 ] ; b_x [ iy0 + 1 ] = temp ; temp = b_x [ ix0 + 2 ] ; b_x [ ix0 + 2 ] = b_x
[ iy0 + 2 ] ; b_x [ iy0 + 2 ] = temp ; } static void engyc1llng ( real_T a ,
real_T b , real_T * b_a , real_T * b_b , real_T * c , real_T * s ) { real_T
absa ; real_T absb ; real_T ads ; real_T bds ; real_T roe ; real_T scale ;
roe = b ; absa = muDoubleScalarAbs ( a ) ; absb = muDoubleScalarAbs ( b ) ;
if ( absa > absb ) { roe = a ; } scale = absa + absb ; if ( scale == 0.0 ) {
* s = 0.0 ; * c = 1.0 ; * b_a = 0.0 ; * b_b = 0.0 ; } else { ads = absa /
scale ; bds = absb / scale ; * b_a = muDoubleScalarSqrt ( ads * ads + bds *
bds ) * scale ; if ( roe < 0.0 ) { * b_a = - * b_a ; } * c = a / * b_a ; * s
= b / * b_a ; if ( absa > absb ) { * b_b = * s ; } else if ( * c != 0.0 ) { *
b_b = 1.0 / * c ; } else { * b_b = 1.0 ; } } } static void a1omaibidu ( const
real_T x [ 9 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s , real_T b_x
[ 9 ] ) { real_T temp ; memcpy ( & b_x [ 0 ] , & x [ 0 ] , 9U * sizeof (
real_T ) ) ; temp = b_x [ ix0 - 1 ] * c + b_x [ iy0 - 1 ] * s ; b_x [ iy0 - 1
] = b_x [ iy0 - 1 ] * c - b_x [ ix0 - 1 ] * s ; b_x [ ix0 - 1 ] = temp ; temp
= b_x [ ix0 ] * c + b_x [ iy0 ] * s ; b_x [ iy0 ] = b_x [ iy0 ] * c - b_x [
ix0 ] * s ; b_x [ ix0 ] = temp ; temp = b_x [ ix0 + 1 ] * c + b_x [ iy0 + 1 ]
* s ; b_x [ iy0 + 1 ] = b_x [ iy0 + 1 ] * c - b_x [ ix0 + 1 ] * s ; b_x [ ix0
+ 1 ] = temp ; } static void a1omaibidur ( const real_T x [ 12 ] , int32_T
ix0 , int32_T iy0 , real_T c , real_T s , real_T b_x [ 12 ] ) { real_T temp ;
memcpy ( & b_x [ 0 ] , & x [ 0 ] , 12U * sizeof ( real_T ) ) ; temp = b_x [
ix0 - 1 ] * c + b_x [ iy0 - 1 ] * s ; b_x [ iy0 - 1 ] = b_x [ iy0 - 1 ] * c -
b_x [ ix0 - 1 ] * s ; b_x [ ix0 - 1 ] = temp ; temp = b_x [ ix0 ] * c + b_x [
iy0 ] * s ; b_x [ iy0 ] = b_x [ iy0 ] * c - b_x [ ix0 ] * s ; b_x [ ix0 ] =
temp ; temp = b_x [ ix0 + 1 ] * c + b_x [ iy0 + 1 ] * s ; b_x [ iy0 + 1 ] =
b_x [ iy0 + 1 ] * c - b_x [ ix0 + 1 ] * s ; b_x [ ix0 + 1 ] = temp ; temp =
b_x [ ix0 + 2 ] * c + b_x [ iy0 + 2 ] * s ; b_x [ iy0 + 2 ] = b_x [ iy0 + 2 ]
* c - b_x [ ix0 + 2 ] * s ; b_x [ ix0 + 2 ] = temp ; } static void etikaj0hsn
( const real_T A [ 12 ] , real_T U [ 12 ] , real_T s [ 3 ] , real_T V [ 9 ] )
{ __m128d tmp ; real_T A_e [ 12 ] ; real_T A_p [ 12 ] ; real_T Vf [ 9 ] ;
real_T Vf_p [ 9 ] ; real_T work [ 4 ] ; real_T e [ 3 ] ; real_T s_p [ 3 ] ;
real_T emm1 ; real_T nrm ; real_T rt ; real_T shift ; real_T smm1 ; real_T
sqds ; real_T ztest ; real_T ztest0 ; int32_T b ; int32_T colqp1 ; int32_T m
; int32_T qjj ; int32_T qp1 ; int32_T qq ; int32_T scalarLB ; int32_T
vectorUB ; boolean_T apply_transform ; boolean_T exitg1 ; s_p [ 0 ] = 0.0 ; e
[ 0 ] = 0.0 ; s_p [ 1 ] = 0.0 ; e [ 1 ] = 0.0 ; s_p [ 2 ] = 0.0 ; e [ 2 ] =
0.0 ; work [ 0 ] = 0.0 ; work [ 1 ] = 0.0 ; work [ 2 ] = 0.0 ; work [ 3 ] =
0.0 ; for ( m = 0 ; m < 12 ; m ++ ) { A_p [ m ] = A [ m ] ; U [ m ] = 0.0 ; }
memset ( & Vf [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; for ( m = 0 ; m < 3 ; m
++ ) { colqp1 = m + 1 ; qp1 = m + 2 ; qq = ( ( m << 2 ) + m ) + 1 ;
apply_transform = false ; nrm = hgh4w0xkzt ( 4 - m , A_p , qq ) ; if ( nrm >
0.0 ) { apply_transform = true ; if ( A_p [ qq - 1 ] < 0.0 ) { s_p [ m ] = -
nrm ; } else { s_p [ m ] = nrm ; } if ( muDoubleScalarAbs ( s_p [ m ] ) >=
1.0020841800044864E-292 ) { nrm = 1.0 / s_p [ m ] ; b = ( qq - m ) - 1 ;
scalarLB = ( ( ( ( b - qq ) + 5 ) / 2 ) << 1 ) + qq ; vectorUB = scalarLB - 2
; for ( qjj = qq ; qjj <= vectorUB ; qjj += 2 ) { tmp = _mm_loadu_pd ( & A_p
[ qjj - 1 ] ) ; _mm_storeu_pd ( & A_p [ qjj - 1 ] , _mm_mul_pd ( tmp ,
_mm_set1_pd ( nrm ) ) ) ; } for ( qjj = scalarLB ; qjj <= b + 4 ; qjj ++ ) {
A_p [ qjj - 1 ] *= nrm ; } } else { b = ( qq - m ) - 1 ; scalarLB = ( ( ( ( b
- qq ) + 5 ) / 2 ) << 1 ) + qq ; vectorUB = scalarLB - 2 ; for ( qjj = qq ;
qjj <= vectorUB ; qjj += 2 ) { tmp = _mm_loadu_pd ( & A_p [ qjj - 1 ] ) ;
_mm_storeu_pd ( & A_p [ qjj - 1 ] , _mm_div_pd ( tmp , _mm_set1_pd ( s_p [ m
] ) ) ) ; } for ( qjj = scalarLB ; qjj <= b + 4 ; qjj ++ ) { A_p [ qjj - 1 ]
/= s_p [ m ] ; } } A_p [ qq - 1 ] ++ ; s_p [ m ] = - s_p [ m ] ; } else { s_p
[ m ] = 0.0 ; } for ( b = qp1 ; b < 4 ; b ++ ) { qjj = ( ( ( b - 1 ) << 2 ) +
m ) + 1 ; if ( apply_transform ) { memcpy ( & A_e [ 0 ] , & A_p [ 0 ] , 12U *
sizeof ( real_T ) ) ; gzoimgstaj ( 4 - m , - ( nfbjifnpg1 ( 4 - m , A_p , qq
, A_p , qjj ) / A_p [ ( m << 2 ) + m ] ) , qq , A_e , qjj , A_p ) ; } e [ b -
1 ] = A_p [ qjj - 1 ] ; } if ( colqp1 <= 4 ) { memcpy ( & U [ ( ( m << 2 ) +
colqp1 ) + - 1 ] , & A_p [ ( ( m << 2 ) + colqp1 ) + - 1 ] , ( 5 - colqp1 ) *
sizeof ( real_T ) ) ; } if ( m + 1 <= 1 ) { nrm = hgh4w0xkzt5 ( e , 2 ) ; if
( nrm == 0.0 ) { e [ 0 ] = 0.0 ; } else { if ( e [ 1 ] < 0.0 ) { rt = - nrm ;
e [ 0 ] = - nrm ; } else { rt = nrm ; e [ 0 ] = nrm ; } if (
muDoubleScalarAbs ( rt ) >= 1.0020841800044864E-292 ) { nrm = 1.0 / rt ;
scalarLB = ( ( ( ( 2 - m ) / 2 ) << 1 ) + m ) + 2 ; vectorUB = scalarLB - 2 ;
for ( qjj = qp1 ; qjj <= vectorUB ; qjj += 2 ) { tmp = _mm_loadu_pd ( & e [
qjj - 1 ] ) ; _mm_storeu_pd ( & e [ qjj - 1 ] , _mm_mul_pd ( tmp ,
_mm_set1_pd ( nrm ) ) ) ; } for ( qjj = scalarLB ; qjj < 4 ; qjj ++ ) { e [
qjj - 1 ] *= nrm ; } } else { scalarLB = ( ( ( ( 2 - m ) / 2 ) << 1 ) + m ) +
2 ; vectorUB = scalarLB - 2 ; for ( qjj = qp1 ; qjj <= vectorUB ; qjj += 2 )
{ tmp = _mm_loadu_pd ( & e [ qjj - 1 ] ) ; _mm_storeu_pd ( & e [ qjj - 1 ] ,
_mm_div_pd ( tmp , _mm_set1_pd ( rt ) ) ) ; } for ( qjj = scalarLB ; qjj < 4
; qjj ++ ) { e [ qjj - 1 ] /= rt ; } } e [ 1 ] ++ ; e [ 0 ] = - e [ 0 ] ; for
( qq = qp1 ; qq < 5 ; qq ++ ) { work [ qq - 1 ] = 0.0 ; } for ( qq = qp1 ; qq
< 4 ; qq ++ ) { gzoimgstaj4rmj ( 3 , e [ qq - 1 ] , A_p , ( ( qq - 1 ) << 2 )
+ 2 , work , 2 ) ; } for ( qq = qp1 ; qq < 4 ; qq ++ ) { memcpy ( & A_e [ 0 ]
, & A_p [ 0 ] , 12U * sizeof ( real_T ) ) ; gzoimgstaj4r ( 3 , - e [ qq - 1 ]
/ e [ 1 ] , work , 2 , A_e , ( ( qq - 1 ) << 2 ) + 2 , A_p ) ; } } for (
colqp1 = qp1 ; colqp1 < 4 ; colqp1 ++ ) { Vf [ colqp1 - 1 ] = e [ colqp1 - 1
] ; } } } m = 2 ; e [ 1 ] = A_p [ 9 ] ; e [ 2 ] = 0.0 ; for ( colqp1 = 2 ;
colqp1 >= 0 ; colqp1 -- ) { qq = ( colqp1 << 2 ) + colqp1 ; if ( s_p [ colqp1
] != 0.0 ) { for ( b = colqp1 + 2 ; b < 4 ; b ++ ) { qjj = ( ( ( b - 1 ) << 2
) + colqp1 ) + 1 ; memcpy ( & A_p [ 0 ] , & U [ 0 ] , 12U * sizeof ( real_T )
) ; gzoimgstaj ( 4 - colqp1 , - ( nfbjifnpg1 ( 4 - colqp1 , U , qq + 1 , U ,
qjj ) / U [ qq ] ) , qq + 1 , A_p , qjj , U ) ; } for ( qp1 = colqp1 + 1 ;
qp1 < 5 ; qp1 ++ ) { U [ ( qp1 + ( colqp1 << 2 ) ) - 1 ] = - U [ ( ( colqp1
<< 2 ) + qp1 ) - 1 ] ; } U [ qq ] ++ ; qp1 = colqp1 - 1 ; if ( 0 <= qp1 ) {
memset ( & U [ colqp1 << 2 ] , 0 , ( qp1 + 1 ) * sizeof ( real_T ) ) ; } }
else { U [ colqp1 << 2 ] = 0.0 ; U [ ( colqp1 << 2 ) + 1 ] = 0.0 ; U [ (
colqp1 << 2 ) + 2 ] = 0.0 ; U [ ( colqp1 << 2 ) + 3 ] = 0.0 ; U [ qq ] = 1.0
; } if ( ( colqp1 + 1 <= 1 ) && ( e [ 0 ] != 0.0 ) ) { memcpy ( & Vf_p [ 0 ]
, & Vf [ 0 ] , 9U * sizeof ( real_T ) ) ; gzoimgstaj4rm ( - ( nfbjifnpg1u (
Vf , Vf , 5 ) / Vf [ 1 ] ) , Vf_p , 5 , Vf ) ; memcpy ( & Vf_p [ 0 ] , & Vf [
0 ] , 9U * sizeof ( real_T ) ) ; gzoimgstaj4rm ( - ( nfbjifnpg1u ( Vf , Vf ,
8 ) / Vf [ 1 ] ) , Vf_p , 8 , Vf ) ; } Vf [ 3 * colqp1 ] = 0.0 ; Vf [ 3 *
colqp1 + 1 ] = 0.0 ; Vf [ 3 * colqp1 + 2 ] = 0.0 ; Vf [ colqp1 + 3 * colqp1 ]
= 1.0 ; } for ( qp1 = 0 ; qp1 < 3 ; qp1 ++ ) { smm1 = e [ qp1 ] ; if ( s_p [
qp1 ] != 0.0 ) { rt = muDoubleScalarAbs ( s_p [ qp1 ] ) ; nrm = s_p [ qp1 ] /
rt ; s_p [ qp1 ] = rt ; if ( qp1 + 1 < 3 ) { smm1 /= nrm ; } qq = qp1 << 2 ;
scalarLB = qq + 5 ; vectorUB = qq + 3 ; for ( qjj = qq + 1 ; qjj <= vectorUB
; qjj += 2 ) { tmp = _mm_loadu_pd ( & U [ qjj - 1 ] ) ; _mm_storeu_pd ( & U [
qjj - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd ( nrm ) ) ) ; } for ( qjj =
scalarLB ; qjj <= qq + 4 ; qjj ++ ) { U [ qjj - 1 ] *= nrm ; } } if ( ( qp1 +
1 < 3 ) && ( smm1 != 0.0 ) ) { rt = muDoubleScalarAbs ( smm1 ) ; nrm = rt /
smm1 ; smm1 = rt ; s_p [ qp1 + 1 ] *= nrm ; colqp1 = ( qp1 + 1 ) * 3 ;
scalarLB = colqp1 + 3 ; vectorUB = colqp1 + 1 ; for ( qjj = colqp1 + 1 ; qjj
<= vectorUB ; qjj += 2 ) { tmp = _mm_loadu_pd ( & Vf [ qjj - 1 ] ) ;
_mm_storeu_pd ( & Vf [ qjj - 1 ] , _mm_mul_pd ( tmp , _mm_set1_pd ( nrm ) ) )
; } for ( qjj = scalarLB ; qjj <= colqp1 + 3 ; qjj ++ ) { Vf [ qjj - 1 ] *=
nrm ; } } e [ qp1 ] = smm1 ; } rt = 0.0 ; nrm = muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarMax ( 0.0 , muDoubleScalarMax (
muDoubleScalarAbs ( s_p [ 0 ] ) , muDoubleScalarAbs ( e [ 0 ] ) ) ) ,
muDoubleScalarMax ( muDoubleScalarAbs ( s_p [ 1 ] ) , muDoubleScalarAbs ( e [
1 ] ) ) ) , muDoubleScalarMax ( muDoubleScalarAbs ( s_p [ 2 ] ) ,
muDoubleScalarAbs ( e [ 2 ] ) ) ) ; while ( ( m + 1 > 0 ) && ( ! ( rt >= 75.0
) ) ) { colqp1 = m ; qp1 = m ; exitg1 = false ; while ( ( ! exitg1 ) && ( qp1
> - 1 ) ) { colqp1 = qp1 ; if ( qp1 == 0 ) { exitg1 = true ; } else { ztest0
= muDoubleScalarAbs ( e [ qp1 - 1 ] ) ; if ( ( ztest0 <= ( muDoubleScalarAbs
( s_p [ qp1 - 1 ] ) + muDoubleScalarAbs ( s_p [ qp1 ] ) ) *
2.2204460492503131E-16 ) || ( ztest0 <= 1.0020841800044864E-292 ) || ( ( rt >
20.0 ) && ( ztest0 <= 2.2204460492503131E-16 * nrm ) ) ) { e [ qp1 - 1 ] =
0.0 ; exitg1 = true ; } else { qp1 -- ; } } } if ( colqp1 == m ) { ztest0 =
4.0 ; } else { qp1 = m + 1 ; qq = m + 1 ; exitg1 = false ; while ( ( ! exitg1
) && ( qq >= colqp1 ) ) { qp1 = qq ; if ( qq == colqp1 ) { exitg1 = true ; }
else { ztest0 = 0.0 ; if ( qq < m + 1 ) { ztest0 = muDoubleScalarAbs ( e [ qq
- 1 ] ) ; } if ( qq > colqp1 + 1 ) { ztest0 += muDoubleScalarAbs ( e [ qq - 2
] ) ; } ztest = muDoubleScalarAbs ( s_p [ qq - 1 ] ) ; if ( ( ztest <=
2.2204460492503131E-16 * ztest0 ) || ( ztest <= 1.0020841800044864E-292 ) ) {
s_p [ qq - 1 ] = 0.0 ; exitg1 = true ; } else { qq -- ; } } } if ( qp1 ==
colqp1 ) { ztest0 = 3.0 ; } else if ( m + 1 == qp1 ) { ztest0 = 1.0 ; } else
{ ztest0 = 2.0 ; colqp1 = qp1 ; } } switch ( ( int32_T ) ztest0 ) { case 1 :
ztest0 = e [ m - 1 ] ; e [ m - 1 ] = 0.0 ; for ( qq = m ; qq >= colqp1 + 1 ;
qq -- ) { smm1 = e [ 0 ] ; engyc1llng ( s_p [ qq - 1 ] , ztest0 , & s_p [ qq
- 1 ] , & ztest0 , & ztest , & sqds ) ; if ( qq > colqp1 + 1 ) { ztest0 = -
sqds * e [ 0 ] ; smm1 = e [ 0 ] * ztest ; } memcpy ( & Vf_p [ 0 ] , & Vf [ 0
] , 9U * sizeof ( real_T ) ) ; a1omaibidu ( Vf_p , ( qq - 1 ) * 3 + 1 , 3 * m
+ 1 , ztest , sqds , Vf ) ; e [ 0 ] = smm1 ; } break ; case 2 : ztest0 = e [
colqp1 - 1 ] ; e [ colqp1 - 1 ] = 0.0 ; for ( qp1 = colqp1 + 1 ; qp1 <= m + 1
; qp1 ++ ) { engyc1llng ( s_p [ qp1 - 1 ] , ztest0 , & s_p [ qp1 - 1 ] , &
ztest , & sqds , & smm1 ) ; ztest0 = e [ qp1 - 1 ] * - smm1 ; e [ qp1 - 1 ]
*= sqds ; memcpy ( & A_p [ 0 ] , & U [ 0 ] , 12U * sizeof ( real_T ) ) ;
a1omaibidur ( A_p , ( ( qp1 - 1 ) << 2 ) + 1 , ( ( colqp1 - 1 ) << 2 ) + 1 ,
sqds , smm1 , U ) ; } break ; case 3 : ztest = muDoubleScalarMax (
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarAbs
( s_p [ m ] ) , muDoubleScalarAbs ( s_p [ m - 1 ] ) ) , muDoubleScalarAbs ( e
[ m - 1 ] ) ) , muDoubleScalarAbs ( s_p [ colqp1 ] ) ) , muDoubleScalarAbs (
e [ colqp1 ] ) ) ; ztest0 = s_p [ m ] / ztest ; smm1 = s_p [ m - 1 ] / ztest
; emm1 = e [ m - 1 ] / ztest ; sqds = s_p [ colqp1 ] / ztest ; smm1 = ( (
smm1 + ztest0 ) * ( smm1 - ztest0 ) + emm1 * emm1 ) / 2.0 ; emm1 *= ztest0 ;
emm1 *= emm1 ; if ( ( smm1 != 0.0 ) || ( emm1 != 0.0 ) ) { shift =
muDoubleScalarSqrt ( smm1 * smm1 + emm1 ) ; if ( smm1 < 0.0 ) { shift = -
shift ; } shift = emm1 / ( smm1 + shift ) ; } else { shift = 0.0 ; } ztest0 =
( sqds + ztest0 ) * ( sqds - ztest0 ) + shift ; ztest = e [ colqp1 ] / ztest
* sqds ; for ( qq = colqp1 + 1 ; qq <= m ; qq ++ ) { engyc1llng ( ztest0 ,
ztest , & sqds , & smm1 , & emm1 , & shift ) ; if ( qq > colqp1 + 1 ) { e [ 0
] = sqds ; } ztest0 = s_p [ qq - 1 ] * emm1 + e [ qq - 1 ] * shift ; e [ qq -
1 ] = e [ qq - 1 ] * emm1 - s_p [ qq - 1 ] * shift ; ztest = shift * s_p [ qq
] ; s_p [ qq ] *= emm1 ; memcpy ( & Vf_p [ 0 ] , & Vf [ 0 ] , 9U * sizeof (
real_T ) ) ; a1omaibidu ( Vf_p , ( qq - 1 ) * 3 + 1 , 3 * qq + 1 , emm1 ,
shift , Vf ) ; engyc1llng ( ztest0 , ztest , & s_p [ qq - 1 ] , & sqds , &
smm1 , & emm1 ) ; ztest0 = e [ qq - 1 ] * smm1 + emm1 * s_p [ qq ] ; s_p [ qq
] = e [ qq - 1 ] * - emm1 + smm1 * s_p [ qq ] ; ztest = emm1 * e [ qq ] ; e [
qq ] *= smm1 ; memcpy ( & A_p [ 0 ] , & U [ 0 ] , 12U * sizeof ( real_T ) ) ;
a1omaibidur ( A_p , ( ( qq - 1 ) << 2 ) + 1 , ( qq << 2 ) + 1 , smm1 , emm1 ,
U ) ; } e [ m - 1 ] = ztest0 ; rt ++ ; break ; default : if ( s_p [ colqp1 ]
< 0.0 ) { s_p [ colqp1 ] = - s_p [ colqp1 ] ; qq = 3 * colqp1 ; scalarLB = qq
+ 3 ; vectorUB = qq + 1 ; for ( qjj = qq + 1 ; qjj <= vectorUB ; qjj += 2 ) {
tmp = _mm_loadu_pd ( & Vf [ qjj - 1 ] ) ; _mm_storeu_pd ( & Vf [ qjj - 1 ] ,
_mm_mul_pd ( tmp , _mm_set1_pd ( - 1.0 ) ) ) ; } for ( qjj = scalarLB ; qjj
<= qq + 3 ; qjj ++ ) { Vf [ qjj - 1 ] = - Vf [ qjj - 1 ] ; } } qp1 = colqp1 +
1 ; while ( ( colqp1 + 1 < 3 ) && ( s_p [ colqp1 ] < s_p [ qp1 ] ) ) { rt =
s_p [ colqp1 ] ; s_p [ colqp1 ] = s_p [ qp1 ] ; s_p [ qp1 ] = rt ; memcpy ( &
Vf_p [ 0 ] , & Vf [ 0 ] , 9U * sizeof ( real_T ) ) ; co1xaodswa ( Vf_p , 3 *
colqp1 + 1 , ( colqp1 + 1 ) * 3 + 1 , Vf ) ; memcpy ( & A_p [ 0 ] , & U [ 0 ]
, 12U * sizeof ( real_T ) ) ; co1xaodswai ( A_p , ( colqp1 << 2 ) + 1 , ( (
colqp1 + 1 ) << 2 ) + 1 , U ) ; colqp1 = qp1 ; qp1 ++ ; } rt = 0.0 ; m -- ;
break ; } } for ( m = 0 ; m < 3 ; m ++ ) { s [ m ] = s_p [ m ] ; V [ 3 * m ]
= Vf [ 3 * m ] ; V [ 3 * m + 1 ] = Vf [ 3 * m + 1 ] ; V [ 3 * m + 2 ] = Vf [
3 * m + 2 ] ; } } void MdlInitialize ( void ) { boolean_T tmp ; hrxu5rhe3af .
irqzxzls3s = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { n1mubcupv31 . ezm2ooaqjl
[ 0 ] = 0.0 ; n1mubcupv31 . ezm2ooaqjl [ 1 ] = - 7128.137 ; n1mubcupv31 .
ezm2ooaqjl [ 2 ] = 0.0 ; tmp = slIsRapidAcceleratorSimulating ( ) ; if ( tmp
) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af .
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
; } else { hrxu5rhe3af . febtg0cpg5 = 1 ; } n1mubcupv31 . kbqjtzizsx [ 0 ] =
0.0 ; n1mubcupv31 . kbqjtzizsx [ 1 ] = 0.0 ; n1mubcupv31 . kbqjtzizsx [ 2 ] =
0.0010490819691035681 ; } hrxu5rhe3af . lwlvgtt2ve = ( rtInf ) ; hrxu5rhe3af
. ajsna343fp = ( rtInf ) ; hrxu5rhe3af . epbwbvrls5 = 0.0 ; hrxu5rhe3af .
e2pe11pwxn = true ; hrxu5rhe3af . opg1lhdczb = true ; hrxu5rhe3af .
g24vxooz0v = true ; hrxu5rhe3af . l3pfqrb31o = true ; hrxu5rhe3af .
fytmukko2d = 0.0 ; hrxu5rhe3af . jiqhomoo0v = true ; hrxu5rhe3af . jmjdutrgwi
= true ; hrxu5rhe3af . gcdlpfr3qr = true ; hrxu5rhe3af . bhx2bk5lkm = true ;
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
hrxu5rhe3af . ckit2etwje = 1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp =
ssGetGlobalInitialStatesAvailable ( rtS ) ; hrxu5rhe3af . ckit2etwje = ! tmp
; } else { hrxu5rhe3af . ckit2etwje = 1 ; } n1mubcupv31 . li1obxdvy3 [ 0 ] =
0.0 ; n1mubcupv31 . li1obxdvy3 [ 1 ] = 0.0 ; n1mubcupv31 . li1obxdvy3 [ 2 ] =
- 7.478 ; } hrxu5rhe3af . iwulztso32 [ 0 ] = 0.0 ; hrxu5rhe3af . iwulztso32 [
1 ] = 0.0 ; hrxu5rhe3af . iwulztso32 [ 2 ] = 0.0 ; hrxu5rhe3af . g0uzej5lf1 =
1 ; if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ;
hrxu5rhe3af . g0uzej5lf1 = ! tmp ; } else { hrxu5rhe3af . g0uzej5lf1 = 1 ; }
} o2y45zbt2m4 . niydxw3dug = hbv5azo3sw . yBlockOrdering_Y0 ; o2y45zbt2m4 .
nh40mtprpn = hbv5azo3sw . yBlockOrdering_Y0_m1krpwpsee ; } void MdlEnable (
void ) { ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 10 , 1.0 ) ;
; ssSetNumTicksToNextHitForControllableSampleTime ( rtS , 11 , 1.0 ) ; ;
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
; hrxu5rhe3af . izrtkkf042 = 0 ; hrxu5rhe3af . fdyoeqkdqi = 0 ; hrxu5rhe3af .
c3m4fwdfd0 = 0 ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . amd2k325eq , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . amd2k325eq , & hrxu5rhe3af . ocwejjhsae
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . lo1lp4gtvt , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . lo1lp4gtvt , & hrxu5rhe3af . cqi0nadh0g
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . popvcsddq3 , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . popvcsddq3 , & hrxu5rhe3af . e0e33jihoi
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af . bkcg3g1zoi , 1 ) ;
RandSrcInitState_GZ ( & hrxu5rhe3af . bkcg3g1zoi , & hrxu5rhe3af . cwsd2g5w2m
[ 0 ] , 1 ) ; initSeed = ( uint32_T ) ( 100000 * rand ( ) ) ;
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
[ 0 ] , 1 ) ; hrxu5rhe3af . h1ivipllz5 . isInitialized = 0 ; hrxu5rhe3af .
i41btnckgk = true ; hrxu5rhe3af . h1ivipllz5 . isInitialized = 1 ;
hrxu5rhe3af . h1ivipllz5 . inputVarSize . f1 [ 0 ] = 4U ; hrxu5rhe3af .
h1ivipllz5 . inputVarSize . f1 [ 1 ] = 3U ; for ( i = 0 ; i < 6 ; i ++ ) {
hrxu5rhe3af . h1ivipllz5 . inputVarSize . f1 [ i + 2 ] = 1U ; } initSeed = (
uint32_T ) ( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , &
hrxu5rhe3af . nydzqlwwnn , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af .
nydzqlwwnn , & hrxu5rhe3af . bdotsga2iv [ 0 ] , 1 ) ; initSeed = ( uint32_T )
( 100000 * rand ( ) ) ; RandSrcCreateSeeds_64 ( initSeed , & hrxu5rhe3af .
djim5bpjvv , 1 ) ; RandSrcInitState_GZ ( & hrxu5rhe3af . djim5bpjvv , &
hrxu5rhe3af . lqkanthoxg [ 0 ] , 1 ) ; hrxu5rhe3af . dnqubg5s4k = 0 ;
hrxu5rhe3af . bze1flsb15 = 0 ; hrxu5rhe3af . pidbwsidci = 0 ; hrxu5rhe3af .
ji1vknz2dr = 0 ; hrxu5rhe3af . gltmjlakux = 0 ; hrxu5rhe3af . pwifaixjxb = 0
; hrxu5rhe3af . haxpv4vq51 = 0 ; hrxu5rhe3af . hxjxms0byf = 0 ;
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
hrxu5rhe3af . iqs2nrdyqs = - 1 ; ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch (
hrxu5rhe3af . hnbwguuonj ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 1 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; case 2 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; break ; } hrxu5rhe3af .
hnbwguuonj = - 1 ; hrxu5rhe3af . p4n3550tai = - 1 ; memcpy ( & hrxu5rhe3af .
buggjk4l1n [ 0 ] , & hbv5azo3sw . DataStoreMemoryP_InitialValue [ 0 ] ,
sizeof ( real_T ) << 4U ) ; hrxu5rhe3af . j3ergpk3vu [ 0 ] = hbv5azo3sw .
DataStoreMemoryx_InitialValue [ 0 ] ; hrxu5rhe3af . j3ergpk3vu [ 1 ] =
hbv5azo3sw . DataStoreMemoryx_InitialValue [ 1 ] ; hrxu5rhe3af . j3ergpk3vu [
2 ] = hbv5azo3sw . DataStoreMemoryx_InitialValue [ 2 ] ; hrxu5rhe3af .
j3ergpk3vu [ 3 ] = hbv5azo3sw . DataStoreMemoryx_InitialValue [ 3 ] ;
MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) { real_T
bz3m03sk4h [ 2 ] ; real_T prirsvmw33 [ 2 ] ; real_T ilztr2qrue [ 2 ] ; real_T
hzexholftp [ 2 ] ; real_T jr4rimgbh0 [ 2 ] ; real_T j4yy5fljso [ 2 ] ; real_T
el4y0ewlg2 [ 2 ] ; real_T mgirxq514b [ 2 ] ; real_T n4cr5voz3i [ 2 ] ; real_T
naxh1rmprg [ 2 ] ; real_T ablvf05wvd [ 2 ] ; real_T jazbl50puz [ 2 ] ;
__m128d tmp_e ; __m128d tmp_g ; __m128d tmp_i ; __m128d tmp_j ; __m128d tmp_m
; real_T X2 [ 32 ] ; real_T Y2_p [ 32 ] ; real_T Y2 [ 16 ] ; real_T Y2_e [ 16
] ; real_T y_e [ 16 ] ; real_T U [ 12 ] ; real_T oo2amcyqcx [ 12 ] ; real_T V
[ 9 ] ; real_T V_p [ 9 ] ; real_T tmp [ 9 ] ; real_T K [ 8 ] ; real_T Pxy [ 8
] ; real_T y_i [ 8 ] ; real_T p1airozsub [ 7 ] ; real_T afgi1z3nug [ 4 ] ;
real_T b_I [ 4 ] ; real_T y [ 4 ] ; real_T ( * lastU ) [ 4 ] ; real_T
ezr3pqqzqh [ 3 ] ; real_T plz0cvxflt [ 3 ] ; real_T p2ib5fluuc [ 2 ] ; real_T
tmp_p [ 2 ] ; real_T ardt1y5x0d_idx_1 ; real_T au32y1wfjp_idx_1 ; real_T
b2dseb5akc_idx_1 ; real_T clod0whodw_idx_0 ; real_T dxjf4qcaeo ; real_T
emiiavfkh1 ; real_T epx0klrbgl_idx_0 ; real_T epx0klrbgl_idx_1 ; real_T
flm04egj0r ; real_T gi3b15wlwk ; real_T hdqbs12ylt ; real_T hjrvg0fden ;
real_T hkwf2out3d ; real_T hnpfszi1fh_idx_0 ; real_T hnpfszi1fh_idx_1 ;
real_T hnpfszi1fh_idx_2 ; real_T hnrrgqitme ; real_T ht1q0lonq4_idx_1 ;
real_T ikxunumo3i ; real_T k1qmoe0iaw ; real_T l1pix2zzzf ; real_T
lv0mc01z2o_idx_0 ; real_T lv0mc01z2o_idx_1 ; real_T lv0mc01z2o_idx_2 ; real_T
mjhceqjgf1_idx_0 ; real_T mjhceqjgf1_idx_1 ; real_T mnqgflhgig ; real_T
myqx15ehea_idx_0 ; real_T myqx15ehea_idx_1 ; real_T myqx15ehea_idx_2 ; real_T
mzxp24sosq_idx_0 ; real_T njulo3ucsg ; real_T nm4t0wvumv ; real_T
nmd3fc4utj_idx_1 ; real_T ntqepze5kl ; real_T omuhzl1dir ; real_T
oouy1fopfw_idx_1 ; real_T prv0bttwvn ; real_T pzi3xtzla3_idx_1 ; int32_T
aoffset ; int32_T ar ; int32_T coffset ; int32_T d ; int32_T i ; int32_T r ;
int32_T vcol ; int8_T inSize [ 8 ] ; int8_T rtAction ; int8_T rtPrevAction ;
boolean_T b [ 12 ] ; boolean_T b_p [ 12 ] ; boolean_T iy5b1drj5g [ 9 ] ;
boolean_T y_p ; SimStruct * S ; void * diag ; static const real_T b_e [ 10 ]
= { 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.8 , 0.8 , 0.8 , 0.8 } ; int32_T i_p
; boolean_T exitg1 ; srClearBC ( hrxu5rhe3af . nw1rjo5a2w ) ; srClearBC (
hrxu5rhe3af . a0tdfwofzg ) ; srClearBC ( hrxu5rhe3af . as5m3dr43z ) ;
srClearBC ( hrxu5rhe3af . fimtx0wf43 ) ; srClearBC ( hrxu5rhe3af . h5fod2fj2q
) ; srClearBC ( hrxu5rhe3af . pwomc1kiz3 ) ; srClearBC ( hrxu5rhe3af .
fpx2qirisn ) ; srClearBC ( hrxu5rhe3af . pmgcir2p13 ) ; srClearBC (
hrxu5rhe3af . o0pf4uvatt ) ; srClearBC ( hrxu5rhe3af . jkjkrdx1hk ) ;
srClearBC ( hrxu5rhe3af . cbsmbddbag ) ; srClearBC ( hrxu5rhe3af . fnnqkeqpmg
) ; srClearBC ( hrxu5rhe3af . jkbsaxmqju ) ; srClearBC ( hrxu5rhe3af .
noecaey35j ) ; y_p = ssGetIsOkayToUpdateMode ( rtS ) ; if ( y_p ) { if (
hrxu5rhe3af . irqzxzls3s != 0 ) { n1mubcupv31 . ezm2ooaqjl [ 0 ] =
o2y45zbt2m4 . amepcbkksg [ 0 ] ; n1mubcupv31 . ezm2ooaqjl [ 1 ] = o2y45zbt2m4
. amepcbkksg [ 1 ] ; n1mubcupv31 . ezm2ooaqjl [ 2 ] = o2y45zbt2m4 .
amepcbkksg [ 2 ] ; } lv0mc01z2o_idx_0 = n1mubcupv31 . ezm2ooaqjl [ 0 ] ;
lv0mc01z2o_idx_1 = n1mubcupv31 . ezm2ooaqjl [ 1 ] ; lv0mc01z2o_idx_2 =
n1mubcupv31 . ezm2ooaqjl [ 2 ] ; } else { lv0mc01z2o_idx_0 = n1mubcupv31 .
ezm2ooaqjl [ 0 ] ; lv0mc01z2o_idx_1 = n1mubcupv31 . ezm2ooaqjl [ 1 ] ;
lv0mc01z2o_idx_2 = n1mubcupv31 . ezm2ooaqjl [ 2 ] ; } o2y45zbt2m4 .
mvqp5l5ufq [ 0 ] = hbv5azo3sw . Gain_Gain_cpl3z33sd4 * lv0mc01z2o_idx_0 ;
o2y45zbt2m4 . mvqp5l5ufq [ 1 ] = hbv5azo3sw . Gain_Gain_cpl3z33sd4 *
lv0mc01z2o_idx_1 ; o2y45zbt2m4 . mvqp5l5ufq [ 2 ] = hbv5azo3sw .
Gain_Gain_cpl3z33sd4 * lv0mc01z2o_idx_2 ; y_p = ssGetIsOkayToUpdateMode ( rtS
) ; if ( y_p ) { if ( hrxu5rhe3af . btkpsszf3k != 0 ) { n1mubcupv31 .
bcrrky3g2k [ 0 ] = o2y45zbt2m4 . a55nsryplm [ 0 ] ; n1mubcupv31 . bcrrky3g2k
[ 1 ] = o2y45zbt2m4 . a55nsryplm [ 1 ] ; n1mubcupv31 . bcrrky3g2k [ 2 ] =
o2y45zbt2m4 . a55nsryplm [ 2 ] ; n1mubcupv31 . bcrrky3g2k [ 3 ] = o2y45zbt2m4
. a55nsryplm [ 3 ] ; } afgi1z3nug [ 0 ] = n1mubcupv31 . bcrrky3g2k [ 0 ] ;
afgi1z3nug [ 1 ] = n1mubcupv31 . bcrrky3g2k [ 1 ] ; afgi1z3nug [ 2 ] =
n1mubcupv31 . bcrrky3g2k [ 2 ] ; afgi1z3nug [ 3 ] = n1mubcupv31 . bcrrky3g2k
[ 3 ] ; } else { afgi1z3nug [ 0 ] = n1mubcupv31 . bcrrky3g2k [ 0 ] ;
afgi1z3nug [ 1 ] = n1mubcupv31 . bcrrky3g2k [ 1 ] ; afgi1z3nug [ 2 ] =
n1mubcupv31 . bcrrky3g2k [ 2 ] ; afgi1z3nug [ 3 ] = n1mubcupv31 . bcrrky3g2k
[ 3 ] ; } k1qmoe0iaw = ( ( afgi1z3nug [ 0 ] * afgi1z3nug [ 0 ] + afgi1z3nug [
1 ] * afgi1z3nug [ 1 ] ) + afgi1z3nug [ 2 ] * afgi1z3nug [ 2 ] ) + afgi1z3nug
[ 3 ] * afgi1z3nug [ 3 ] ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . fdyoeqkdqi != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . fdyoeqkdqi = 0 ; } nm4t0wvumv = muDoubleScalarSqrt (
k1qmoe0iaw ) ; } else if ( k1qmoe0iaw < 0.0 ) { nm4t0wvumv = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( k1qmoe0iaw ) ) ; hrxu5rhe3af .
fdyoeqkdqi = 1 ; } else { nm4t0wvumv = muDoubleScalarSqrt ( k1qmoe0iaw ) ; }
k1qmoe0iaw = afgi1z3nug [ 2 ] / nm4t0wvumv ; l1pix2zzzf = afgi1z3nug [ 0 ] /
nm4t0wvumv ; dxjf4qcaeo = afgi1z3nug [ 1 ] / nm4t0wvumv ; nm4t0wvumv =
afgi1z3nug [ 3 ] / nm4t0wvumv ; prv0bttwvn = ( ( l1pix2zzzf * l1pix2zzzf +
dxjf4qcaeo * dxjf4qcaeo ) + k1qmoe0iaw * k1qmoe0iaw ) + nm4t0wvumv *
nm4t0wvumv ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . c3m4fwdfd0
!= 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af .
c3m4fwdfd0 = 0 ; } hnrrgqitme = muDoubleScalarSqrt ( prv0bttwvn ) ; } else if
( prv0bttwvn < 0.0 ) { hnrrgqitme = - muDoubleScalarSqrt ( muDoubleScalarAbs
( prv0bttwvn ) ) ; hrxu5rhe3af . c3m4fwdfd0 = 1 ; } else { hnrrgqitme =
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
Constant_Value_pw4amn2wvf ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hnrrgqitme = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . gy5dnmc0o2 + o2y45zbt2m4 . bemlv143br *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . hsxdwr2kap * plz0cvxflt [ 2 ] ; prv0bttwvn
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . a3453wdy3h +
o2y45zbt2m4 . evt22h0udz * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . hr5yavkh2g *
plz0cvxflt [ 2 ] , hnrrgqitme ) ; hnrrgqitme = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . ln15xtukoj + o2y45zbt2m4 . iak2iehb01 *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . ofev2a4bu4 * plz0cvxflt [ 2 ] , hnrrgqitme
) ; p2ib5fluuc [ 0 ] = hbv5azo3sw . Constant_Value_fvwrjd3qpo [ 0 ] +
prv0bttwvn ; p2ib5fluuc [ 1 ] = hbv5azo3sw . Constant_Value_fvwrjd3qpo [ 1 ]
+ hnrrgqitme ; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D (
o2y45zbt2m4 . cktw3suarj , & hbv5azo3sw . RandomSource1_MeanVal , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP , 1 , hrxu5rhe3af . ocwejjhsae , 1 , 2
) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme = p2ib5fluuc [ 0 ] +
o2y45zbt2m4 . cktw3suarj [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat ) { bz3m03sk4h [ 0 ] = hbv5azo3sw . Saturation_UpperSat ;
} else if ( hnrrgqitme < hbv5azo3sw . Saturation_LowerSat ) { bz3m03sk4h [ 0
] = hbv5azo3sw . Saturation_LowerSat ; } else { bz3m03sk4h [ 0 ] = hnrrgqitme
; } hnrrgqitme = p2ib5fluuc [ 1 ] + o2y45zbt2m4 . cktw3suarj [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat ) { bz3m03sk4h [ 1 ] =
hbv5azo3sw . Saturation_UpperSat ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat ) { bz3m03sk4h [ 1 ] = hbv5azo3sw . Saturation_LowerSat ;
} else { bz3m03sk4h [ 1 ] = hnrrgqitme ; } o2y45zbt2m4 . nvj2jobsne [ 0 ] =
o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 . nvj2jobsne [ 1 ] = o2y45zbt2m4 .
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
plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; prv0bttwvn = ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . akaurxf5cn
+ o2y45zbt2m4 . fjb4t2g0di * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . eps1xh200d *
plz0cvxflt [ 2 ] ; flm04egj0r = muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] *
o2y45zbt2m4 . ftiqxo4eic + o2y45zbt2m4 . cikadflncr * plz0cvxflt [ 1 ] ) +
o2y45zbt2m4 . d55wbumkta * plz0cvxflt [ 2 ] , prv0bttwvn ) ; prv0bttwvn =
muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . dg3licanvf +
o2y45zbt2m4 . nmsyyhec3k * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . fd0i4zg4gl *
plz0cvxflt [ 2 ] , prv0bttwvn ) ; mzxp24sosq_idx_0 = hbv5azo3sw .
Constant_Value_o4pefzbbdu [ 0 ] + flm04egj0r ; flm04egj0r = hbv5azo3sw .
Constant_Value_o4pefzbbdu [ 1 ] + prv0bttwvn ; } if ( ssIsSampleHit ( rtS , 6
, 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . jf0z5nzend , & hbv5azo3sw .
RandomSource1_MeanVal_fskbkqfzhy , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_c0tnp0ox24 , 1 , hrxu5rhe3af . cqi0nadh0g , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme = mzxp24sosq_idx_0 +
o2y45zbt2m4 . jf0z5nzend [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_iasva3d1xg ) { prirsvmw33 [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_iasva3d1xg ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk ) { prirsvmw33 [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk ; } else { prirsvmw33 [ 0 ] = hnrrgqitme ; }
hnrrgqitme = flm04egj0r + o2y45zbt2m4 . jf0z5nzend [ 1 ] ; if ( hnrrgqitme >
hbv5azo3sw . Saturation_UpperSat_iasva3d1xg ) { prirsvmw33 [ 1 ] = hbv5azo3sw
. Saturation_UpperSat_iasva3d1xg ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk ) { prirsvmw33 [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk ; } else { prirsvmw33 [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . mfythxhofy [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
mfythxhofy [ 1 ] = o2y45zbt2m4 . pvehregqxn ; o2y45zbt2m4 . mfythxhofy [ 2 ]
= o2y45zbt2m4 . fqzn4ufnnm ; gi3b15wlwk = ( o2y45zbt2m4 . mfythxhofy [ 0 ] *
o2y45zbt2m4 . mfythxhofy [ 0 ] + o2y45zbt2m4 . mfythxhofy [ 1 ] * o2y45zbt2m4
. mfythxhofy [ 1 ] ) + o2y45zbt2m4 . mfythxhofy [ 2 ] * o2y45zbt2m4 .
mfythxhofy [ 2 ] ; if ( gi3b15wlwk < 0.0 ) { gi3b15wlwk = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( gi3b15wlwk ) ) ; } else { gi3b15wlwk
= muDoubleScalarSqrt ( gi3b15wlwk ) ; } if ( gi3b15wlwk > hbv5azo3sw .
NormalizeVector_maxzero_b4q4mcfdki ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 .
mfythxhofy [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . mfythxhofy [ 1 ] ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . mfythxhofy [ 2 ] ; afgi1z3nug [ 3 ] =
gi3b15wlwk ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . mfythxhofy [ 0 ] * 0.0
; afgi1z3nug [ 1 ] = o2y45zbt2m4 . mfythxhofy [ 1 ] * 0.0 ; afgi1z3nug [ 2 ]
= o2y45zbt2m4 . mfythxhofy [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_agjbvr0z5q ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; flm04egj0r = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . brdq13y0qd + o2y45zbt2m4 . h3xp3qlim0 *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . b1pqf2pbpp * plz0cvxflt [ 2 ] ; gi3b15wlwk
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . ornbl4mfau +
o2y45zbt2m4 . dbdvnfbtan * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . nqoad4oagc *
plz0cvxflt [ 2 ] , flm04egj0r ) ; flm04egj0r = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . gq23czohqi + o2y45zbt2m4 . m13nwgsfs4 *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . gree3bakbj * plz0cvxflt [ 2 ] , flm04egj0r
) ; gi3b15wlwk += hbv5azo3sw . Constant_Value_aqc3aba12o [ 0 ] ;
ht1q0lonq4_idx_1 = hbv5azo3sw . Constant_Value_aqc3aba12o [ 1 ] + flm04egj0r
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
efvttc54la , & hbv5azo3sw . RandomSource1_MeanVal_memmqqy0nt , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_ciqyogzko1 , 1 , hrxu5rhe3af .
e0e33jihoi , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme =
gi3b15wlwk + o2y45zbt2m4 . efvttc54la [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_kvrw4yrrrs ) { ilztr2qrue [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_kvrw4yrrrs ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_kx5yh1wv4z ) { ilztr2qrue [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_kx5yh1wv4z ; } else { ilztr2qrue [ 0 ] = hnrrgqitme ; }
hnrrgqitme = ht1q0lonq4_idx_1 + o2y45zbt2m4 . efvttc54la [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs ) { ilztr2qrue [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_kx5yh1wv4z ) { ilztr2qrue [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_kx5yh1wv4z ; } else { ilztr2qrue [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . diblvbf0co [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
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
Constant_Value_ktwwdrryx3 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; gi3b15wlwk = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . a5drqsjnex + o2y45zbt2m4 . ndlxlyobzb *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . h5gslldsar * plz0cvxflt [ 2 ] ; njulo3ucsg
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . daikka42e3 +
o2y45zbt2m4 . ek204bmiea * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . aqwdecxidu *
plz0cvxflt [ 2 ] , gi3b15wlwk ) ; gi3b15wlwk = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . ga4ycdonne + o2y45zbt2m4 . pihfnbloym *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . dpkcgsd4ym * plz0cvxflt [ 2 ] , gi3b15wlwk
) ; njulo3ucsg += hbv5azo3sw . Constant_Value_kv3w21qse5 [ 0 ] ;
nmd3fc4utj_idx_1 = hbv5azo3sw . Constant_Value_kv3w21qse5 [ 1 ] + gi3b15wlwk
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
af3pwylngk , & hbv5azo3sw . RandomSource1_MeanVal_c0fkc2tbqq , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_f4hdv51tm4 , 1 , hrxu5rhe3af .
cwsd2g5w2m , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme =
njulo3ucsg + o2y45zbt2m4 . af3pwylngk [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_byrofjxopf ) { hzexholftp [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_byrofjxopf ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_eqtwttitcd ) { hzexholftp [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_eqtwttitcd ; } else { hzexholftp [ 0 ] = hnrrgqitme ; }
hnrrgqitme = nmd3fc4utj_idx_1 + o2y45zbt2m4 . af3pwylngk [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_byrofjxopf ) { hzexholftp [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_byrofjxopf ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_eqtwttitcd ) { hzexholftp [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_eqtwttitcd ; } else { hzexholftp [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . avq3ivsxoj [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
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
Constant_Value_aefuqipo3z ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; njulo3ucsg = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . fjxh2v44zo + o2y45zbt2m4 . ei2iplcloo *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . dpw0lpwtco * plz0cvxflt [ 2 ] ; hkwf2out3d
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . jhqy0zwmu3 +
o2y45zbt2m4 . c23uk112gn * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . eq1sfn3btk *
plz0cvxflt [ 2 ] , njulo3ucsg ) ; njulo3ucsg = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . iuke2eyfra + o2y45zbt2m4 . kwmlekgm0w *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . bw33cb1smq * plz0cvxflt [ 2 ] , njulo3ucsg
) ; hkwf2out3d += hbv5azo3sw . Constant_Value_ei4qxougxr [ 0 ] ;
ardt1y5x0d_idx_1 = hbv5azo3sw . Constant_Value_ei4qxougxr [ 1 ] + njulo3ucsg
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
fk5zqxuz3h , & hbv5azo3sw . RandomSource1_MeanVal_d5xz2yhw3l , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_g12uaggma2 , 1 , hrxu5rhe3af .
pbvxmucjj5 , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme =
hkwf2out3d + o2y45zbt2m4 . fk5zqxuz3h [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_llltpjmasd ) { jr4rimgbh0 [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_llltpjmasd ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_od1cxjykdq ) { jr4rimgbh0 [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_od1cxjykdq ; } else { jr4rimgbh0 [ 0 ] = hnrrgqitme ; }
hnrrgqitme = ardt1y5x0d_idx_1 + o2y45zbt2m4 . fk5zqxuz3h [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_llltpjmasd ) { jr4rimgbh0 [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_llltpjmasd ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_od1cxjykdq ) { jr4rimgbh0 [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_od1cxjykdq ; } else { jr4rimgbh0 [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . cztzhrui22 [ 0 ] = o2y45zbt2m4 . hwkzvkas3c ; o2y45zbt2m4 .
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
Constant_Value_d3tr2oyhj4 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; hkwf2out3d = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . kp0ottklv2 + o2y45zbt2m4 . d4h0eb221l *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . ajeydhy34x * plz0cvxflt [ 2 ] ; emiiavfkh1
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . d224533rgj +
o2y45zbt2m4 . i01jbvlzhi * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . ksqsb0wny4 *
plz0cvxflt [ 2 ] , hkwf2out3d ) ; hkwf2out3d = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . d0h2bkxm2a + o2y45zbt2m4 . llcjil2ppz *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . jpbug4sdyr * plz0cvxflt [ 2 ] , hkwf2out3d
) ; emiiavfkh1 += hbv5azo3sw . Constant_Value_lod4m2end1 [ 0 ] ;
au32y1wfjp_idx_1 = hbv5azo3sw . Constant_Value_lod4m2end1 [ 1 ] + hkwf2out3d
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
gqbzn03dkr , & hbv5azo3sw . RandomSource1_MeanVal_jxhxrhz3me , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_bdmhqmxko4 , 1 , hrxu5rhe3af .
alynay3xx0 , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme =
emiiavfkh1 + o2y45zbt2m4 . gqbzn03dkr [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_e1cwi1gybf ) { j4yy5fljso [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_e1cwi1gybf ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_ajttgxrnng ) { j4yy5fljso [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_ajttgxrnng ; } else { j4yy5fljso [ 0 ] = hnrrgqitme ; }
hnrrgqitme = au32y1wfjp_idx_1 + o2y45zbt2m4 . gqbzn03dkr [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_e1cwi1gybf ) { j4yy5fljso [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_e1cwi1gybf ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_ajttgxrnng ) { j4yy5fljso [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_ajttgxrnng ; } else { j4yy5fljso [ 1 ] = hnrrgqitme ; }
n11z2qtnyp ( bz3m03sk4h , prirsvmw33 , ilztr2qrue , hzexholftp , jr4rimgbh0 ,
j4yy5fljso , & o2y45zbt2m4 . ik12ax5qrt ) ; o2y45zbt2m4 . mdvmrfnqkz [ 0 ] =
o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ; o2y45zbt2m4 . mdvmrfnqkz [ 1 ] = o2y45zbt2m4
. mvqp5l5ufq [ 1 ] ; o2y45zbt2m4 . mdvmrfnqkz [ 2 ] = o2y45zbt2m4 .
mvqp5l5ufq [ 2 ] ; } y_p = ssGetIsOkayToUpdateMode ( rtS ) ; if ( y_p ) { if
( hrxu5rhe3af . febtg0cpg5 != 0 ) { n1mubcupv31 . cjfebnqw1p = o2y45zbt2m4 .
hckf2ailv0 ; } emiiavfkh1 = n1mubcupv31 . cjfebnqw1p ; } else { emiiavfkh1 =
n1mubcupv31 . cjfebnqw1p ; } hkwf2out3d = o2y45zbt2m4 . mrzwmqiqje / (
hbv5azo3sw . e_Value * muDoubleScalarCos ( emiiavfkh1 ) + hbv5azo3sw .
Constant_Value_azddlyivju ) ; njulo3ucsg = muDoubleScalarCos ( emiiavfkh1 ) ;
gi3b15wlwk = muDoubleScalarSin ( emiiavfkh1 ) ; o2y45zbt2m4 . fj4e2b5bch [ 0
] = ( ( njulo3ucsg * o2y45zbt2m4 . ightd03wbw + o2y45zbt2m4 . kyx4elghw5 *
gi3b15wlwk ) + o2y45zbt2m4 . boco0ydrhx ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - lv0mc01z2o_idx_0 ; o2y45zbt2m4 .
fj4e2b5bch [ 1 ] = ( ( njulo3ucsg * o2y45zbt2m4 . kgibrayejc + o2y45zbt2m4 .
klod4yztvz * gi3b15wlwk ) + o2y45zbt2m4 . gr0fttz1x3 ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - lv0mc01z2o_idx_1 ; o2y45zbt2m4 .
fj4e2b5bch [ 2 ] = ( ( njulo3ucsg * o2y45zbt2m4 . lj2hsiefmb + o2y45zbt2m4 .
pqwrcdv51y * gi3b15wlwk ) + o2y45zbt2m4 . gkj1c4ecpo ) * hbv5azo3sw .
Gain1_Gain_csudgssrcg * hkwf2out3d - lv0mc01z2o_idx_2 ; njulo3ucsg = ( (
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
plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] =
afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ; plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] /
afgi1z3nug [ 3 ] ; hkwf2out3d = ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . gegkjzomxm
+ o2y45zbt2m4 . kd1qxjhyrr * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . pgs5royztd *
plz0cvxflt [ 2 ] ; ntqepze5kl = muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] *
o2y45zbt2m4 . olg5gqva4k + o2y45zbt2m4 . ebby2e0eey * plz0cvxflt [ 1 ] ) +
o2y45zbt2m4 . kc5uinuva1 * plz0cvxflt [ 2 ] , hkwf2out3d ) ; hkwf2out3d =
muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . ny5fqojp01 +
o2y45zbt2m4 . g42bdhp2mr * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . mwkxuoztcf *
plz0cvxflt [ 2 ] , hkwf2out3d ) ; clod0whodw_idx_0 = hbv5azo3sw .
Constant_Value_k3ydr0xveb [ 0 ] + ntqepze5kl ; ntqepze5kl = hbv5azo3sw .
Constant_Value_k3ydr0xveb [ 1 ] + hkwf2out3d ; } if ( ssIsSampleHit ( rtS , 6
, 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . mkpovvsjoj , & hbv5azo3sw .
RandomSource1_MeanVal_bvk35h21mf , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_k1b5meiqjj , 1 , hrxu5rhe3af . n10hslmo2a , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme = clod0whodw_idx_0 +
o2y45zbt2m4 . mkpovvsjoj [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_hvo4j1520s ) { el4y0ewlg2 [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_hvo4j1520s ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_anwhzkhsgm ) { el4y0ewlg2 [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_anwhzkhsgm ; } else { el4y0ewlg2 [ 0 ] = hnrrgqitme ; }
hnrrgqitme = ntqepze5kl + o2y45zbt2m4 . mkpovvsjoj [ 1 ] ; if ( hnrrgqitme >
hbv5azo3sw . Saturation_UpperSat_hvo4j1520s ) { el4y0ewlg2 [ 1 ] = hbv5azo3sw
. Saturation_UpperSat_hvo4j1520s ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_anwhzkhsgm ) { el4y0ewlg2 [ 1 ] = hbv5azo3sw .
Saturation_LowerSat_anwhzkhsgm ; } else { el4y0ewlg2 [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . hiigrn3uvx [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4
. hiigrn3uvx [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 .
hiigrn3uvx [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ; clod0whodw_idx_0 = (
o2y45zbt2m4 . hiigrn3uvx [ 0 ] * o2y45zbt2m4 . hiigrn3uvx [ 0 ] + o2y45zbt2m4
. hiigrn3uvx [ 1 ] * o2y45zbt2m4 . hiigrn3uvx [ 1 ] ) + o2y45zbt2m4 .
hiigrn3uvx [ 2 ] * o2y45zbt2m4 . hiigrn3uvx [ 2 ] ; if ( clod0whodw_idx_0 <
0.0 ) { clod0whodw_idx_0 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
clod0whodw_idx_0 ) ) ; } else { clod0whodw_idx_0 = muDoubleScalarSqrt (
clod0whodw_idx_0 ) ; } if ( clod0whodw_idx_0 > hbv5azo3sw .
NormalizeVector_maxzero_nx4f2adafg ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 .
hiigrn3uvx [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . hiigrn3uvx [ 1 ] ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . hiigrn3uvx [ 2 ] ; afgi1z3nug [ 3 ] =
clod0whodw_idx_0 ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . hiigrn3uvx [ 0 ]
* 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . hiigrn3uvx [ 1 ] * 0.0 ; afgi1z3nug
[ 2 ] = o2y45zbt2m4 . hiigrn3uvx [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw
. Constant_Value_oqac1ckjba ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; ntqepze5kl = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . am2ydxy3tg + o2y45zbt2m4 . aayx0clngf *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . imjovcvzmj * plz0cvxflt [ 2 ] ;
clod0whodw_idx_0 = muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 .
ewg4gsarwm + o2y45zbt2m4 . eqlu1laly1 * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 .
c4imsujsyj * plz0cvxflt [ 2 ] , ntqepze5kl ) ; ntqepze5kl =
muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . myxilkpyto +
o2y45zbt2m4 . jyoiaqgash * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . nfvbvcsgaf *
plz0cvxflt [ 2 ] , ntqepze5kl ) ; epx0klrbgl_idx_0 = hbv5azo3sw .
Constant_Value_cknsmwduvj [ 0 ] + clod0whodw_idx_0 ; epx0klrbgl_idx_1 =
hbv5azo3sw . Constant_Value_cknsmwduvj [ 1 ] + ntqepze5kl ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . nyimkzd5hq , &
hbv5azo3sw . RandomSource1_MeanVal_cgugych5h2 , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_pdcijtaj4d , 1 , hrxu5rhe3af . j13dkj5h0s , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme = epx0klrbgl_idx_0 +
o2y45zbt2m4 . nyimkzd5hq [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_m5walzmpht ) { mgirxq514b [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_m5walzmpht ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_kiy0a1gdvs ) { mgirxq514b [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_kiy0a1gdvs ; } else { mgirxq514b [ 0 ] = hnrrgqitme ; }
hnrrgqitme = epx0klrbgl_idx_1 + o2y45zbt2m4 . nyimkzd5hq [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_m5walzmpht ) { mgirxq514b [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_m5walzmpht ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_kiy0a1gdvs ) { mgirxq514b [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_kiy0a1gdvs ; } else { mgirxq514b [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . fllsexxjfy [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4
. fllsexxjfy [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 .
fllsexxjfy [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ; omuhzl1dir = (
o2y45zbt2m4 . fllsexxjfy [ 0 ] * o2y45zbt2m4 . fllsexxjfy [ 0 ] + o2y45zbt2m4
. fllsexxjfy [ 1 ] * o2y45zbt2m4 . fllsexxjfy [ 1 ] ) + o2y45zbt2m4 .
fllsexxjfy [ 2 ] * o2y45zbt2m4 . fllsexxjfy [ 2 ] ; if ( omuhzl1dir < 0.0 ) {
omuhzl1dir = - muDoubleScalarSqrt ( muDoubleScalarAbs ( omuhzl1dir ) ) ; }
else { omuhzl1dir = muDoubleScalarSqrt ( omuhzl1dir ) ; } if ( omuhzl1dir >
hbv5azo3sw . NormalizeVector_maxzero_j5wdotj0ar ) { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . fllsexxjfy [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fllsexxjfy
[ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . fllsexxjfy [ 2 ] ; afgi1z3nug [ 3 ]
= omuhzl1dir ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . fllsexxjfy [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fllsexxjfy [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = o2y45zbt2m4 . fllsexxjfy [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_etis5qgp2s ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; clod0whodw_idx_0 = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . aqvhjylunl + o2y45zbt2m4 . pmy5icug2k *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . pxdeyipxtr * plz0cvxflt [ 2 ] ; omuhzl1dir
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . bzsae5g150 +
o2y45zbt2m4 . fhwu2rpyxm * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . db5wedrkq4 *
plz0cvxflt [ 2 ] , clod0whodw_idx_0 ) ; clod0whodw_idx_0 =
muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . fxqr3to5iu +
o2y45zbt2m4 . jzcgup51f2 * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . b3deffzvww *
plz0cvxflt [ 2 ] , clod0whodw_idx_0 ) ; omuhzl1dir += hbv5azo3sw .
Constant_Value_mxxxqc2s25 [ 0 ] ; oouy1fopfw_idx_1 = hbv5azo3sw .
Constant_Value_mxxxqc2s25 [ 1 ] + clod0whodw_idx_0 ; } if ( ssIsSampleHit (
rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . cddswdr3cl , & hbv5azo3sw .
RandomSource1_MeanVal_d4idhl1tz1 , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_crqc3mkc0f , 1 , hrxu5rhe3af . k40rhthviy , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme = omuhzl1dir +
o2y45zbt2m4 . cddswdr3cl [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_m5kmh5w5uw ) { n4cr5voz3i [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_m5kmh5w5uw ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_i04nwcukho ) { n4cr5voz3i [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_i04nwcukho ; } else { n4cr5voz3i [ 0 ] = hnrrgqitme ; }
hnrrgqitme = oouy1fopfw_idx_1 + o2y45zbt2m4 . cddswdr3cl [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw ) { n4cr5voz3i [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_i04nwcukho ) { n4cr5voz3i [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_i04nwcukho ; } else { n4cr5voz3i [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . obyw5bjsqt [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4
. obyw5bjsqt [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 .
obyw5bjsqt [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ; mnqgflhgig = (
o2y45zbt2m4 . obyw5bjsqt [ 0 ] * o2y45zbt2m4 . obyw5bjsqt [ 0 ] + o2y45zbt2m4
. obyw5bjsqt [ 1 ] * o2y45zbt2m4 . obyw5bjsqt [ 1 ] ) + o2y45zbt2m4 .
obyw5bjsqt [ 2 ] * o2y45zbt2m4 . obyw5bjsqt [ 2 ] ; if ( mnqgflhgig < 0.0 ) {
mnqgflhgig = - muDoubleScalarSqrt ( muDoubleScalarAbs ( mnqgflhgig ) ) ; }
else { mnqgflhgig = muDoubleScalarSqrt ( mnqgflhgig ) ; } if ( mnqgflhgig >
hbv5azo3sw . NormalizeVector_maxzero_etigbudinl ) { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . obyw5bjsqt [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . obyw5bjsqt
[ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . obyw5bjsqt [ 2 ] ; afgi1z3nug [ 3 ]
= mnqgflhgig ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . obyw5bjsqt [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . obyw5bjsqt [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = o2y45zbt2m4 . obyw5bjsqt [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_loxooi2xox ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; omuhzl1dir = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . fuxsypdw5b + o2y45zbt2m4 . ibibxo1hc5 *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . e0g1epmzzc * plz0cvxflt [ 2 ] ; mnqgflhgig
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . pmjdaqsrgv +
o2y45zbt2m4 . cepjmd5gi4 * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . a3l2vrrg5t *
plz0cvxflt [ 2 ] , omuhzl1dir ) ; omuhzl1dir = muDoubleScalarAtan2 ( (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . ivk2auaags + o2y45zbt2m4 . ks0a4vmt2y *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . hmdscxhrrq * plz0cvxflt [ 2 ] , omuhzl1dir
) ; mnqgflhgig += hbv5azo3sw . Constant_Value_pxpcd5bk3c [ 0 ] ;
b2dseb5akc_idx_1 = hbv5azo3sw . Constant_Value_pxpcd5bk3c [ 1 ] + omuhzl1dir
; } if ( ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 .
a2f0ypmsuy , & hbv5azo3sw . RandomSource1_MeanVal_n5f3r1zvmv , 1 , &
hbv5azo3sw . RandomSource1_VarianceRTP_blin0jucej , 1 , hrxu5rhe3af .
jjpbiyjnrh , 1 , 2 ) ; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme =
mnqgflhgig + o2y45zbt2m4 . a2f0ypmsuy [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_c4xiqwgxlz ) { naxh1rmprg [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_c4xiqwgxlz ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_pi2aujffw1 ) { naxh1rmprg [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_pi2aujffw1 ; } else { naxh1rmprg [ 0 ] = hnrrgqitme ; }
hnrrgqitme = b2dseb5akc_idx_1 + o2y45zbt2m4 . a2f0ypmsuy [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz ) { naxh1rmprg [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_pi2aujffw1 ) { naxh1rmprg [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_pi2aujffw1 ; } else { naxh1rmprg [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . fp4h0u1qqq [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4
. fp4h0u1qqq [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 .
fp4h0u1qqq [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ; b2dseb5akc_idx_1 = (
o2y45zbt2m4 . fp4h0u1qqq [ 0 ] * o2y45zbt2m4 . fp4h0u1qqq [ 0 ] + o2y45zbt2m4
. fp4h0u1qqq [ 1 ] * o2y45zbt2m4 . fp4h0u1qqq [ 1 ] ) + o2y45zbt2m4 .
fp4h0u1qqq [ 2 ] * o2y45zbt2m4 . fp4h0u1qqq [ 2 ] ; if ( b2dseb5akc_idx_1 <
0.0 ) { b2dseb5akc_idx_1 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
b2dseb5akc_idx_1 ) ) ; } else { b2dseb5akc_idx_1 = muDoubleScalarSqrt (
b2dseb5akc_idx_1 ) ; } if ( b2dseb5akc_idx_1 > hbv5azo3sw .
NormalizeVector_maxzero_mpxbpoayb2 ) { afgi1z3nug [ 0 ] = o2y45zbt2m4 .
fp4h0u1qqq [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fp4h0u1qqq [ 1 ] ;
afgi1z3nug [ 2 ] = o2y45zbt2m4 . fp4h0u1qqq [ 2 ] ; afgi1z3nug [ 3 ] =
b2dseb5akc_idx_1 ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . fp4h0u1qqq [ 0 ]
* 0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fp4h0u1qqq [ 1 ] * 0.0 ; afgi1z3nug
[ 2 ] = o2y45zbt2m4 . fp4h0u1qqq [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw
. Constant_Value_h114kk0gb0 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; mnqgflhgig = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . ke44k2nvd3 + o2y45zbt2m4 . bvbwt2i4ty *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . bckqvwne10 * plz0cvxflt [ 2 ] ;
b2dseb5akc_idx_1 = muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 .
mf042bbyls + o2y45zbt2m4 . pvujvtillf * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 .
bralaspqvj * plz0cvxflt [ 2 ] , mnqgflhgig ) ; mnqgflhgig =
muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . pvvuqzjxh5 +
o2y45zbt2m4 . nd0vnjuzbo * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . jkdvlxhrn3 *
plz0cvxflt [ 2 ] , mnqgflhgig ) ; mjhceqjgf1_idx_0 = hbv5azo3sw .
Constant_Value_a5pfdrbwx4 [ 0 ] + b2dseb5akc_idx_1 ; mjhceqjgf1_idx_1 =
hbv5azo3sw . Constant_Value_a5pfdrbwx4 [ 1 ] + mnqgflhgig ; } if (
ssIsSampleHit ( rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . ch2k5w2dnh , &
hbv5azo3sw . RandomSource1_MeanVal_kfynkp2waz , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_dvuf3vyvl4 , 1 , hrxu5rhe3af . impwbrb5ul , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme = mjhceqjgf1_idx_0 +
o2y45zbt2m4 . ch2k5w2dnh [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_mq4hmkw4m2 ) { ablvf05wvd [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_mq4hmkw4m2 ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_dqoi00mxim ) { ablvf05wvd [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_dqoi00mxim ; } else { ablvf05wvd [ 0 ] = hnrrgqitme ; }
hnrrgqitme = mjhceqjgf1_idx_1 + o2y45zbt2m4 . ch2k5w2dnh [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 ) { ablvf05wvd [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_dqoi00mxim ) { ablvf05wvd [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_dqoi00mxim ; } else { ablvf05wvd [ 1 ] = hnrrgqitme ; }
o2y45zbt2m4 . fe3icz0afg [ 0 ] = o2y45zbt2m4 . k2zlzdldai [ 0 ] ; o2y45zbt2m4
. fe3icz0afg [ 1 ] = o2y45zbt2m4 . k2zlzdldai [ 1 ] ; o2y45zbt2m4 .
fe3icz0afg [ 2 ] = o2y45zbt2m4 . k2zlzdldai [ 2 ] ; ikxunumo3i = (
o2y45zbt2m4 . fe3icz0afg [ 0 ] * o2y45zbt2m4 . fe3icz0afg [ 0 ] + o2y45zbt2m4
. fe3icz0afg [ 1 ] * o2y45zbt2m4 . fe3icz0afg [ 1 ] ) + o2y45zbt2m4 .
fe3icz0afg [ 2 ] * o2y45zbt2m4 . fe3icz0afg [ 2 ] ; if ( ikxunumo3i < 0.0 ) {
ikxunumo3i = - muDoubleScalarSqrt ( muDoubleScalarAbs ( ikxunumo3i ) ) ; }
else { ikxunumo3i = muDoubleScalarSqrt ( ikxunumo3i ) ; } if ( ikxunumo3i >
hbv5azo3sw . NormalizeVector_maxzero_kqylmwb1gt ) { afgi1z3nug [ 0 ] =
o2y45zbt2m4 . fe3icz0afg [ 0 ] ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fe3icz0afg
[ 1 ] ; afgi1z3nug [ 2 ] = o2y45zbt2m4 . fe3icz0afg [ 2 ] ; afgi1z3nug [ 3 ]
= ikxunumo3i ; } else { afgi1z3nug [ 0 ] = o2y45zbt2m4 . fe3icz0afg [ 0 ] *
0.0 ; afgi1z3nug [ 1 ] = o2y45zbt2m4 . fe3icz0afg [ 1 ] * 0.0 ; afgi1z3nug [
2 ] = o2y45zbt2m4 . fe3icz0afg [ 2 ] * 0.0 ; afgi1z3nug [ 3 ] = hbv5azo3sw .
Constant_Value_kd13wd1tn5 ; } plz0cvxflt [ 0 ] = afgi1z3nug [ 0 ] /
afgi1z3nug [ 3 ] ; plz0cvxflt [ 1 ] = afgi1z3nug [ 1 ] / afgi1z3nug [ 3 ] ;
plz0cvxflt [ 2 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; b2dseb5akc_idx_1 = (
plz0cvxflt [ 0 ] * o2y45zbt2m4 . lvap1gibsy + o2y45zbt2m4 . fjgl0ynn23 *
plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . dlywnze0gh * plz0cvxflt [ 2 ] ; ikxunumo3i
= muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . ekeiqfqt15 +
o2y45zbt2m4 . icooi3vgxr * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . nhfh5pwjge *
plz0cvxflt [ 2 ] , b2dseb5akc_idx_1 ) ; b2dseb5akc_idx_1 =
muDoubleScalarAtan2 ( ( plz0cvxflt [ 0 ] * o2y45zbt2m4 . fu44uyydbm +
o2y45zbt2m4 . kif43ukmno * plz0cvxflt [ 1 ] ) + o2y45zbt2m4 . nrvyadhccn *
plz0cvxflt [ 2 ] , b2dseb5akc_idx_1 ) ; ikxunumo3i += hbv5azo3sw .
Constant_Value_pb14rkkk1o [ 0 ] ; pzi3xtzla3_idx_1 = hbv5azo3sw .
Constant_Value_pb14rkkk1o [ 1 ] + b2dseb5akc_idx_1 ; } if ( ssIsSampleHit (
rtS , 6 , 0 ) ) { RandSrc_GZ_D ( o2y45zbt2m4 . ipb4qp4laq , & hbv5azo3sw .
RandomSource1_MeanVal_d1pxk3satq , 1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_cg3jlumacb , 1 , hrxu5rhe3af . ck30ytigtq , 1 , 2 )
; } if ( ssIsSampleHit ( rtS , 5 , 0 ) ) { hnrrgqitme = ikxunumo3i +
o2y45zbt2m4 . ipb4qp4laq [ 0 ] ; if ( hnrrgqitme > hbv5azo3sw .
Saturation_UpperSat_kiybxhvwme ) { jazbl50puz [ 0 ] = hbv5azo3sw .
Saturation_UpperSat_kiybxhvwme ; } else if ( hnrrgqitme < hbv5azo3sw .
Saturation_LowerSat_lktmm4bxfn ) { jazbl50puz [ 0 ] = hbv5azo3sw .
Saturation_LowerSat_lktmm4bxfn ; } else { jazbl50puz [ 0 ] = hnrrgqitme ; }
hnrrgqitme = pzi3xtzla3_idx_1 + o2y45zbt2m4 . ipb4qp4laq [ 1 ] ; if (
hnrrgqitme > hbv5azo3sw . Saturation_UpperSat_kiybxhvwme ) { jazbl50puz [ 1 ]
= hbv5azo3sw . Saturation_UpperSat_kiybxhvwme ; } else if ( hnrrgqitme <
hbv5azo3sw . Saturation_LowerSat_lktmm4bxfn ) { jazbl50puz [ 1 ] = hbv5azo3sw
. Saturation_LowerSat_lktmm4bxfn ; } else { jazbl50puz [ 1 ] = hnrrgqitme ; }
n11z2qtnyp ( el4y0ewlg2 , mgirxq514b , n4cr5voz3i , naxh1rmprg , ablvf05wvd ,
jazbl50puz , & o2y45zbt2m4 . cuglwsdmbh ) ; o2y45zbt2m4 . g4hdycezvh [ 0 ] =
o2y45zbt2m4 . fj4e2b5bch [ 0 ] ; o2y45zbt2m4 . g4hdycezvh [ 1 ] = o2y45zbt2m4
. fj4e2b5bch [ 1 ] ; o2y45zbt2m4 . g4hdycezvh [ 2 ] = o2y45zbt2m4 .
fj4e2b5bch [ 2 ] ; if ( hbv5azo3sw . Enable1_Value ) { p1airozsub [ 0 ] =
o2y45zbt2m4 . g4hdycezvh [ 0 ] ; p1airozsub [ 1 ] = o2y45zbt2m4 . g4hdycezvh
[ 1 ] ; p1airozsub [ 2 ] = o2y45zbt2m4 . g4hdycezvh [ 2 ] ; p1airozsub [ 3 ]
= o2y45zbt2m4 . cuglwsdmbh . heq1xsib3m [ 0 ] ; p1airozsub [ 4 ] =
o2y45zbt2m4 . cuglwsdmbh . heq1xsib3m [ 1 ] ; p1airozsub [ 5 ] = o2y45zbt2m4
. cuglwsdmbh . heq1xsib3m [ 2 ] ; p1airozsub [ 6 ] = o2y45zbt2m4 . cuglwsdmbh
. heq1xsib3m [ 3 ] ; o2y45zbt2m4 . niydxw3dug = hbv5azo3sw .
BlockOrdering_Value ; for ( vcol = 0 ; vcol <= 14 ; vcol += 2 ) { tmp_j =
_mm_loadu_pd ( & hrxu5rhe3af . buggjk4l1n [ vcol ] ) ; tmp_j = _mm_mul_pd (
_mm_set1_pd ( 0.002 ) , tmp_j ) ; _mm_storeu_pd ( & X2 [ vcol ] , tmp_j ) ;
_mm_storeu_pd ( & X2 [ vcol + 16 ] , _mm_mul_pd ( tmp_j , _mm_set1_pd ( - 1.0
) ) ) ; } for ( i = 0 ; i < 8 ; i ++ ) { X2 [ i << 2 ] += hrxu5rhe3af .
j3ergpk3vu [ 0 ] ; X2 [ ( i << 2 ) + 1 ] += hrxu5rhe3af . j3ergpk3vu [ 1 ] ;
X2 [ ( i << 2 ) + 2 ] += hrxu5rhe3af . j3ergpk3vu [ 2 ] ; X2 [ ( i << 2 ) + 3
] += hrxu5rhe3af . j3ergpk3vu [ 3 ] ; } anon_yDH48dhx ( & p1airozsub [ 3 ] ,
V ) ; for ( i = 0 ; i < 8 ; i ++ ) { anon_yDH48dhx ( & X2 [ i << 2 ] , tmp )
; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { plz0cvxflt [ vcol ] = 0.0 ; for (
coffset = 0 ; coffset < 3 ; coffset ++ ) { V_p [ vcol + 3 * coffset ] = 0.0 ;
V_p [ vcol + 3 * coffset ] += tmp [ 3 * coffset ] * V [ vcol ] ; V_p [ vcol +
3 * coffset ] += tmp [ 3 * coffset + 1 ] * V [ vcol + 3 ] ; V_p [ vcol + 3 *
coffset ] += tmp [ 3 * coffset + 2 ] * V [ vcol + 6 ] ; plz0cvxflt [ vcol ]
+= V_p [ 3 * coffset + vcol ] * p1airozsub [ coffset ] ; } } Y2 [ i << 1 ] =
muDoubleScalarAtan2 ( plz0cvxflt [ 0 ] , plz0cvxflt [ 2 ] ) ; Y2 [ ( i << 1 )
+ 1 ] = muDoubleScalarAtan2 ( plz0cvxflt [ 1 ] , plz0cvxflt [ 2 ] ) ; }
anon_yDH48dhx ( & p1airozsub [ 3 ] , V ) ; anon_yDH48dhx ( hrxu5rhe3af .
j3ergpk3vu , tmp ) ; for ( vcol = 0 ; vcol < 3 ; vcol ++ ) { plz0cvxflt [
vcol ] = 0.0 ; for ( coffset = 0 ; coffset < 3 ; coffset ++ ) { V_p [ vcol +
3 * coffset ] = 0.0 ; V_p [ vcol + 3 * coffset ] += tmp [ 3 * coffset ] * V [
vcol ] ; V_p [ vcol + 3 * coffset ] += tmp [ 3 * coffset + 1 ] * V [ vcol + 3
] ; V_p [ vcol + 3 * coffset ] += tmp [ 3 * coffset + 2 ] * V [ vcol + 6 ] ;
plz0cvxflt [ vcol ] += V_p [ 3 * coffset + vcol ] * p1airozsub [ coffset ] ;
} } tmp_p [ 0 ] = muDoubleScalarAtan2 ( plz0cvxflt [ 0 ] , plz0cvxflt [ 2 ] )
; tmp_p [ 1 ] = muDoubleScalarAtan2 ( plz0cvxflt [ 1 ] , plz0cvxflt [ 2 ] ) ;
UTMeanCovSqrt_KqyqV2M7 ( tmp_p , Y2 , hrxu5rhe3af . j3ergpk3vu , X2 ,
p2ib5fluuc , afgi1z3nug , Pxy ) ; b_I [ 1 ] = 0.0 ; b_I [ 2 ] = 0.0 ; b_I [ 0
] = 1.0 ; b_I [ 3 ] = 1.0 ; for ( vcol = 0 ; vcol < 2 ; vcol ++ ) { coffset =
vcol << 1 ; y [ coffset ] = b_I [ vcol + 2 ] * afgi1z3nug [ 1 ] + afgi1z3nug
[ 0 ] * b_I [ vcol ] ; y [ coffset + 1 ] = b_I [ vcol + 2 ] * afgi1z3nug [ 3
] + afgi1z3nug [ 2 ] * b_I [ vcol ] ; } y_i [ 0 ] = y [ 0 ] ; y_i [ 2 ] =
hbv5azo3sw . R1_Value [ 0 ] ; y_i [ 1 ] = y [ 1 ] ; y_i [ 3 ] = hbv5azo3sw .
R1_Value [ 2 ] ; y_i [ 4 ] = y [ 2 ] ; y_i [ 6 ] = hbv5azo3sw . R1_Value [ 1
] ; y_i [ 5 ] = y [ 3 ] ; y_i [ 7 ] = hbv5azo3sw . R1_Value [ 3 ] ;
qr_rXyRqJVO ( y_i , K , b_I ) ; afgi1z3nug [ 0 ] = b_I [ 0 ] ; afgi1z3nug [ 1
] = b_I [ 2 ] ; afgi1z3nug [ 2 ] = b_I [ 1 ] ; afgi1z3nug [ 3 ] = b_I [ 3 ] ;
for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { K [ vcol << 1 ] = Pxy [ vcol ] ; K [
( vcol << 1 ) + 1 ] = Pxy [ vcol + 4 ] ; } for ( ar = 0 ; ar < 4 ; ar ++ ) {
Pxy [ ar << 1 ] = K [ ar << 1 ] ; Pxy [ ( ar << 1 ) + 1 ] = K [ ( ar << 1 ) +
1 ] ; } trisolve_zdTVBC8Q ( afgi1z3nug , Pxy ) ; for ( coffset = 0 ; coffset
< 4 ; coffset ++ ) { y_i [ coffset << 1 ] = Pxy [ coffset << 1 ] ; y_i [ (
coffset << 1 ) + 1 ] = Pxy [ ( coffset << 1 ) + 1 ] ; } y [ 0 ] = b_I [ 0 ] ;
y [ 1 ] = b_I [ 1 ] ; y [ 2 ] = b_I [ 2 ] ; y [ 3 ] = b_I [ 3 ] ;
trisolve_D5Vfq0VZ ( y , y_i ) ; for ( vcol = 0 ; vcol < 2 ; vcol ++ ) { K [
vcol << 2 ] = y_i [ vcol ] ; K [ ( vcol << 2 ) + 1 ] = y_i [ vcol + 2 ] ; K [
( vcol << 2 ) + 2 ] = y_i [ vcol + 4 ] ; K [ ( vcol << 2 ) + 3 ] = y_i [ vcol
+ 6 ] ; } for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { Y2 [ vcol << 2 ] =
hrxu5rhe3af . buggjk4l1n [ vcol ] ; Y2 [ ( vcol << 2 ) + 1 ] = hrxu5rhe3af .
buggjk4l1n [ vcol + 4 ] ; Y2 [ ( vcol << 2 ) + 2 ] = hrxu5rhe3af . buggjk4l1n
[ vcol + 8 ] ; Y2 [ ( vcol << 2 ) + 3 ] = hrxu5rhe3af . buggjk4l1n [ vcol +
12 ] ; } memcpy ( & hrxu5rhe3af . buggjk4l1n [ 0 ] , & Y2 [ 0 ] , sizeof (
real_T ) << 4U ) ; for ( vcol = 0 ; vcol < 2 ; vcol ++ ) { for ( coffset = 0
; coffset <= 2 ; coffset += 2 ) { _mm_storeu_pd ( & Pxy [ coffset + ( vcol <<
2 ) ] , _mm_set1_pd ( 0.0 ) ) ; tmp_j = _mm_loadu_pd ( & K [ coffset ] ) ;
tmp_g = _mm_loadu_pd ( & Pxy [ ( vcol << 2 ) + coffset ] ) ; _mm_storeu_pd (
& Pxy [ coffset + ( vcol << 2 ) ] , _mm_add_pd ( tmp_g , _mm_mul_pd (
_mm_set1_pd ( afgi1z3nug [ vcol << 1 ] ) , tmp_j ) ) ) ; tmp_j = _mm_loadu_pd
( & K [ coffset + 4 ] ) ; tmp_g = _mm_loadu_pd ( & Pxy [ ( vcol << 2 ) +
coffset ] ) ; _mm_storeu_pd ( & Pxy [ coffset + ( vcol << 2 ) ] , _mm_add_pd
( _mm_mul_pd ( _mm_set1_pd ( afgi1z3nug [ ( vcol << 1 ) + 1 ] ) , tmp_j ) ,
tmp_g ) ) ; } } cholUpdateFactor_LEN81FGq ( hrxu5rhe3af . buggjk4l1n , Pxy )
; ikxunumo3i = o2y45zbt2m4 . cuglwsdmbh . nx1h2bs53u [ 0 ] - p2ib5fluuc [ 0 ]
; pzi3xtzla3_idx_1 = o2y45zbt2m4 . cuglwsdmbh . nx1h2bs53u [ 1 ] - p2ib5fluuc
[ 1 ] ; for ( vcol = 0 ; vcol <= 2 ; vcol += 2 ) { tmp_j = _mm_loadu_pd ( & K
[ vcol + 4 ] ) ; tmp_g = _mm_loadu_pd ( & K [ vcol ] ) ; tmp_m = _mm_loadu_pd
( & hrxu5rhe3af . j3ergpk3vu [ vcol ] ) ; _mm_storeu_pd ( & hrxu5rhe3af .
j3ergpk3vu [ vcol ] , _mm_add_pd ( _mm_add_pd ( _mm_mul_pd ( tmp_j ,
_mm_set1_pd ( pzi3xtzla3_idx_1 ) ) , _mm_mul_pd ( tmp_g , _mm_set1_pd (
ikxunumo3i ) ) ) , tmp_m ) ) ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( hrxu5rhe3af . jkbsaxmqju ) ; } } if ( hbv5azo3sw . Enable2_Value
) { o2y45zbt2m4 . nh40mtprpn = o2y45zbt2m4 . niydxw3dug ; for ( vcol = 0 ;
vcol <= 14 ; vcol += 2 ) { tmp_j = _mm_loadu_pd ( & hrxu5rhe3af . buggjk4l1n
[ vcol ] ) ; tmp_j = _mm_mul_pd ( _mm_set1_pd ( 0.002 ) , tmp_j ) ;
_mm_storeu_pd ( & X2 [ vcol ] , tmp_j ) ; _mm_storeu_pd ( & X2 [ vcol + 16 ]
, _mm_mul_pd ( tmp_j , _mm_set1_pd ( - 1.0 ) ) ) ; } for ( i = 0 ; i < 8 ; i
++ ) { X2 [ i << 2 ] += hrxu5rhe3af . j3ergpk3vu [ 0 ] ; X2 [ ( i << 2 ) + 1
] += hrxu5rhe3af . j3ergpk3vu [ 1 ] ; X2 [ ( i << 2 ) + 2 ] += hrxu5rhe3af .
j3ergpk3vu [ 2 ] ; X2 [ ( i << 2 ) + 3 ] += hrxu5rhe3af . j3ergpk3vu [ 3 ] ;
Y2 [ i << 1 ] = 0.0 ; Y2 [ ( i << 1 ) + 1 ] = 0.0 ; } tmp_p [ 0 ] = 0.0 ;
tmp_p [ 1 ] = 0.0 ; UTMeanCovSqrt_KqyqV2M7 ( tmp_p , Y2 , hrxu5rhe3af .
j3ergpk3vu , X2 , p2ib5fluuc , afgi1z3nug , Pxy ) ; b_I [ 1 ] = 0.0 ; b_I [ 2
] = 0.0 ; b_I [ 0 ] = 1.0 ; b_I [ 3 ] = 1.0 ; for ( vcol = 0 ; vcol < 2 ;
vcol ++ ) { coffset = vcol << 1 ; y [ coffset ] = b_I [ vcol + 2 ] *
afgi1z3nug [ 1 ] + afgi1z3nug [ 0 ] * b_I [ vcol ] ; y [ coffset + 1 ] = b_I
[ vcol + 2 ] * afgi1z3nug [ 3 ] + afgi1z3nug [ 2 ] * b_I [ vcol ] ; } y_i [ 0
] = y [ 0 ] ; y_i [ 2 ] = hbv5azo3sw . R2_Value [ 0 ] ; y_i [ 1 ] = y [ 1 ] ;
y_i [ 3 ] = hbv5azo3sw . R2_Value [ 2 ] ; y_i [ 4 ] = y [ 2 ] ; y_i [ 6 ] =
hbv5azo3sw . R2_Value [ 1 ] ; y_i [ 5 ] = y [ 3 ] ; y_i [ 7 ] = hbv5azo3sw .
R2_Value [ 3 ] ; qr_rXyRqJVO ( y_i , K , b_I ) ; afgi1z3nug [ 0 ] = b_I [ 0 ]
; afgi1z3nug [ 1 ] = b_I [ 2 ] ; afgi1z3nug [ 2 ] = b_I [ 1 ] ; afgi1z3nug [
3 ] = b_I [ 3 ] ; for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { K [ vcol << 1 ] =
Pxy [ vcol ] ; K [ ( vcol << 1 ) + 1 ] = Pxy [ vcol + 4 ] ; } for ( ar = 0 ;
ar < 4 ; ar ++ ) { Pxy [ ar << 1 ] = K [ ar << 1 ] ; Pxy [ ( ar << 1 ) + 1 ]
= K [ ( ar << 1 ) + 1 ] ; } trisolve_zdTVBC8Q ( afgi1z3nug , Pxy ) ; for (
coffset = 0 ; coffset < 4 ; coffset ++ ) { y_i [ coffset << 1 ] = Pxy [
coffset << 1 ] ; y_i [ ( coffset << 1 ) + 1 ] = Pxy [ ( coffset << 1 ) + 1 ]
; } y [ 0 ] = b_I [ 0 ] ; y [ 1 ] = b_I [ 1 ] ; y [ 2 ] = b_I [ 2 ] ; y [ 3 ]
= b_I [ 3 ] ; trisolve_D5Vfq0VZ ( y , y_i ) ; for ( vcol = 0 ; vcol < 2 ;
vcol ++ ) { K [ vcol << 2 ] = y_i [ vcol ] ; K [ ( vcol << 2 ) + 1 ] = y_i [
vcol + 2 ] ; K [ ( vcol << 2 ) + 2 ] = y_i [ vcol + 4 ] ; K [ ( vcol << 2 ) +
3 ] = y_i [ vcol + 6 ] ; } for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { Y2 [ vcol
<< 2 ] = hrxu5rhe3af . buggjk4l1n [ vcol ] ; Y2 [ ( vcol << 2 ) + 1 ] =
hrxu5rhe3af . buggjk4l1n [ vcol + 4 ] ; Y2 [ ( vcol << 2 ) + 2 ] =
hrxu5rhe3af . buggjk4l1n [ vcol + 8 ] ; Y2 [ ( vcol << 2 ) + 3 ] =
hrxu5rhe3af . buggjk4l1n [ vcol + 12 ] ; } memcpy ( & hrxu5rhe3af .
buggjk4l1n [ 0 ] , & Y2 [ 0 ] , sizeof ( real_T ) << 4U ) ; for ( vcol = 0 ;
vcol < 2 ; vcol ++ ) { for ( coffset = 0 ; coffset <= 2 ; coffset += 2 ) {
_mm_storeu_pd ( & Pxy [ coffset + ( vcol << 2 ) ] , _mm_set1_pd ( 0.0 ) ) ;
tmp_j = _mm_loadu_pd ( & K [ coffset ] ) ; tmp_g = _mm_loadu_pd ( & Pxy [ (
vcol << 2 ) + coffset ] ) ; _mm_storeu_pd ( & Pxy [ coffset + ( vcol << 2 ) ]
, _mm_add_pd ( tmp_g , _mm_mul_pd ( _mm_set1_pd ( afgi1z3nug [ vcol << 1 ] )
, tmp_j ) ) ) ; tmp_j = _mm_loadu_pd ( & K [ coffset + 4 ] ) ; tmp_g =
_mm_loadu_pd ( & Pxy [ ( vcol << 2 ) + coffset ] ) ; _mm_storeu_pd ( & Pxy [
coffset + ( vcol << 2 ) ] , _mm_add_pd ( _mm_mul_pd ( _mm_set1_pd (
afgi1z3nug [ ( vcol << 1 ) + 1 ] ) , tmp_j ) , tmp_g ) ) ; } }
cholUpdateFactor_LEN81FGq ( hrxu5rhe3af . buggjk4l1n , Pxy ) ; ikxunumo3i =
o2y45zbt2m4 . ik12ax5qrt . nx1h2bs53u [ 0 ] - p2ib5fluuc [ 0 ] ;
pzi3xtzla3_idx_1 = o2y45zbt2m4 . ik12ax5qrt . nx1h2bs53u [ 1 ] - p2ib5fluuc [
1 ] ; for ( vcol = 0 ; vcol <= 2 ; vcol += 2 ) { tmp_j = _mm_loadu_pd ( & K [
vcol + 4 ] ) ; tmp_g = _mm_loadu_pd ( & K [ vcol ] ) ; tmp_m = _mm_loadu_pd (
& hrxu5rhe3af . j3ergpk3vu [ vcol ] ) ; _mm_storeu_pd ( & hrxu5rhe3af .
j3ergpk3vu [ vcol ] , _mm_add_pd ( _mm_add_pd ( _mm_mul_pd ( tmp_j ,
_mm_set1_pd ( pzi3xtzla3_idx_1 ) ) , _mm_mul_pd ( tmp_g , _mm_set1_pd (
ikxunumo3i ) ) ) , tmp_m ) ) ; } if ( ssIsMajorTimeStep ( rtS ) ) {
srUpdateBC ( hrxu5rhe3af . noecaey35j ) ; } } } if ( ssIsSampleHit ( rtS , 2
, 0 ) ) { o2y45zbt2m4 . kncngnrvsh [ 0 ] = hrxu5rhe3af . j3ergpk3vu [ 0 ] ;
o2y45zbt2m4 . kncngnrvsh [ 1 ] = hrxu5rhe3af . j3ergpk3vu [ 1 ] ; o2y45zbt2m4
. kncngnrvsh [ 2 ] = hrxu5rhe3af . j3ergpk3vu [ 2 ] ; o2y45zbt2m4 .
kncngnrvsh [ 3 ] = hrxu5rhe3af . j3ergpk3vu [ 3 ] ; oo2amcyqcx [ 0 ] =
hbv5azo3sw . Gain4_Gain_emojkepltb * - o2y45zbt2m4 . kncngnrvsh [ 1 ] ;
oo2amcyqcx [ 4 ] = hbv5azo3sw . Gain4_Gain_emojkepltb * - o2y45zbt2m4 .
kncngnrvsh [ 2 ] ; oo2amcyqcx [ 8 ] = hbv5azo3sw . Gain4_Gain_emojkepltb * -
o2y45zbt2m4 . kncngnrvsh [ 3 ] ; oo2amcyqcx [ 1 ] = hbv5azo3sw .
Gain4_Gain_emojkepltb * o2y45zbt2m4 . kncngnrvsh [ 0 ] ; oo2amcyqcx [ 5 ] =
hbv5azo3sw . Gain4_Gain_emojkepltb * - o2y45zbt2m4 . kncngnrvsh [ 3 ] ;
oo2amcyqcx [ 9 ] = hbv5azo3sw . Gain4_Gain_emojkepltb * o2y45zbt2m4 .
kncngnrvsh [ 1 ] ; oo2amcyqcx [ 2 ] = hbv5azo3sw . Gain4_Gain_emojkepltb *
o2y45zbt2m4 . kncngnrvsh [ 3 ] ; oo2amcyqcx [ 6 ] = hbv5azo3sw .
Gain4_Gain_emojkepltb * - o2y45zbt2m4 . kncngnrvsh [ 1 ] ; oo2amcyqcx [ 10 ]
= hbv5azo3sw . Gain4_Gain_emojkepltb * o2y45zbt2m4 . kncngnrvsh [ 0 ] ;
oo2amcyqcx [ 3 ] = hbv5azo3sw . Gain4_Gain_emojkepltb * - o2y45zbt2m4 .
kncngnrvsh [ 2 ] ; oo2amcyqcx [ 7 ] = hbv5azo3sw . Gain4_Gain_emojkepltb *
o2y45zbt2m4 . kncngnrvsh [ 1 ] ; oo2amcyqcx [ 11 ] = hbv5azo3sw .
Gain4_Gain_emojkepltb * o2y45zbt2m4 . kncngnrvsh [ 0 ] ; inSize [ 0 ] = 4 ;
inSize [ 1 ] = 3 ; for ( vcol = 0 ; vcol < 6 ; vcol ++ ) { inSize [ vcol + 2
] = 1 ; } i = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( i < 8 ) ) { if (
hrxu5rhe3af . h1ivipllz5 . inputVarSize . f1 [ i ] != ( uint32_T ) inSize [ i
] ) { for ( vcol = 0 ; vcol < 8 ; vcol ++ ) { hrxu5rhe3af . h1ivipllz5 .
inputVarSize . f1 [ vcol ] = ( uint32_T ) inSize [ vcol ] ; } exitg1 = true ;
} else { i ++ ; } } for ( i = 0 ; i < 12 ; i ++ ) { ikxunumo3i = oo2amcyqcx [
i ] ; b [ i ] = muDoubleScalarIsInf ( ikxunumo3i ) ; b_p [ i ] =
muDoubleScalarIsNaN ( ikxunumo3i ) ; } y_p = true ; i = 0 ; exitg1 = false ;
while ( ( ! exitg1 ) && ( i < 12 ) ) { if ( b [ i ] || b_p [ i ] ) { y_p =
false ; exitg1 = true ; } else { i ++ ; } } if ( y_p ) { for ( i = 0 ; i < 12
; i ++ ) { o2y45zbt2m4 . a00kizuzww [ i ] = 0.0 ; if ( y_p ) { ikxunumo3i =
oo2amcyqcx [ i ] ; if ( ( ! muDoubleScalarIsInf ( ikxunumo3i ) ) && ( !
muDoubleScalarIsNaN ( ikxunumo3i ) ) ) { } else { y_p = false ; } } else {
y_p = false ; } } if ( ! y_p ) { for ( i = 0 ; i < 12 ; i ++ ) { o2y45zbt2m4
. a00kizuzww [ i ] = ( rtNaN ) ; } } else { etikaj0hsn ( oo2amcyqcx , U ,
plz0cvxflt , V ) ; ikxunumo3i = muDoubleScalarAbs ( plz0cvxflt [ 0 ] ) ; if (
( ! muDoubleScalarIsInf ( ikxunumo3i ) ) && ( ! muDoubleScalarIsNaN (
ikxunumo3i ) ) ) { if ( ikxunumo3i <= 2.2250738585072014E-308 ) { ikxunumo3i
= 4.94065645841247E-324 ; } else { frexp ( ikxunumo3i , & r ) ; ikxunumo3i =
ldexp ( 1.0 , r - 53 ) ; } } else { ikxunumo3i = ( rtNaN ) ; } ikxunumo3i *=
4.0 ; r = - 1 ; i = 0 ; while ( ( i < 3 ) && ( plz0cvxflt [ i ] > ikxunumo3i
) ) { r ++ ; i ++ ; } if ( r + 1 > 0 ) { vcol = 3 ; for ( coffset = 0 ;
coffset <= r ; coffset ++ ) { ikxunumo3i = 1.0 / plz0cvxflt [ coffset ] ;
aoffset = vcol - 2 ; for ( i = vcol - 2 ; i <= aoffset ; i += 2 ) { tmp_j =
_mm_loadu_pd ( & V [ i - 1 ] ) ; _mm_storeu_pd ( & V [ i - 1 ] , _mm_mul_pd (
tmp_j , _mm_set1_pd ( ikxunumo3i ) ) ) ; } for ( i = vcol ; i <= vcol ; i ++
) { V [ i - 1 ] *= ikxunumo3i ; } vcol += 3 ; } for ( i = 0 ; i <= 9 ; i += 3
) { for ( coffset = i + 1 ; coffset <= i + 3 ; coffset ++ ) { o2y45zbt2m4 .
a00kizuzww [ coffset - 1 ] = 0.0 ; } } vcol = 0 ; for ( i = 0 ; i <= 9 ; i +=
3 ) { ar = 0 ; vcol ++ ; d = ( r << 2 ) + vcol ; for ( coffset = vcol ;
coffset <= d ; coffset += 4 ) { for ( aoffset = i + 1 ; aoffset <= i + 3 ;
aoffset ++ ) { o2y45zbt2m4 . a00kizuzww [ aoffset - 1 ] += V [ ( ( ar +
aoffset ) - i ) - 1 ] * U [ coffset - 1 ] ; } ar += 3 ; } } } } } else {
memset ( & o2y45zbt2m4 . a00kizuzww [ 0 ] , 0 , 12U * sizeof ( real_T ) ) ; }
} if ( ( hrxu5rhe3af . lwlvgtt2ve >= ssGetT ( rtS ) ) && ( hrxu5rhe3af .
ajsna343fp >= ssGetT ( rtS ) ) ) { afgi1z3nug [ 0 ] = 0.0 ; afgi1z3nug [ 1 ]
= 0.0 ; afgi1z3nug [ 2 ] = 0.0 ; afgi1z3nug [ 3 ] = 0.0 ; } else { ikxunumo3i
= hrxu5rhe3af . lwlvgtt2ve ; lastU = & hrxu5rhe3af . fcn1wq25nc ; if (
hrxu5rhe3af . lwlvgtt2ve < hrxu5rhe3af . ajsna343fp ) { if ( hrxu5rhe3af .
ajsna343fp < ssGetT ( rtS ) ) { ikxunumo3i = hrxu5rhe3af . ajsna343fp ; lastU
= & hrxu5rhe3af . eoflwqidz3 ; } } else if ( hrxu5rhe3af . lwlvgtt2ve >=
ssGetT ( rtS ) ) { ikxunumo3i = hrxu5rhe3af . ajsna343fp ; lastU = &
hrxu5rhe3af . eoflwqidz3 ; } ikxunumo3i = ssGetT ( rtS ) - ikxunumo3i ;
afgi1z3nug [ 0 ] = ( o2y45zbt2m4 . kncngnrvsh [ 0 ] - ( * lastU ) [ 0 ] ) /
ikxunumo3i ; afgi1z3nug [ 1 ] = ( o2y45zbt2m4 . kncngnrvsh [ 1 ] - ( * lastU
) [ 1 ] ) / ikxunumo3i ; afgi1z3nug [ 2 ] = ( o2y45zbt2m4 . kncngnrvsh [ 2 ]
- ( * lastU ) [ 2 ] ) / ikxunumo3i ; afgi1z3nug [ 3 ] = ( o2y45zbt2m4 .
kncngnrvsh [ 3 ] - ( * lastU ) [ 3 ] ) / ikxunumo3i ; } for ( vcol = 0 ; vcol
< 3 ; vcol ++ ) { o2y45zbt2m4 . mhup2avl2j [ vcol ] = 0.0 ; o2y45zbt2m4 .
mhup2avl2j [ vcol ] += o2y45zbt2m4 . a00kizuzww [ vcol ] * afgi1z3nug [ 0 ] ;
o2y45zbt2m4 . mhup2avl2j [ vcol ] += o2y45zbt2m4 . a00kizuzww [ vcol + 3 ] *
afgi1z3nug [ 1 ] ; o2y45zbt2m4 . mhup2avl2j [ vcol ] += o2y45zbt2m4 .
a00kizuzww [ vcol + 6 ] * afgi1z3nug [ 2 ] ; o2y45zbt2m4 . mhup2avl2j [ vcol
] += o2y45zbt2m4 . a00kizuzww [ vcol + 9 ] * afgi1z3nug [ 3 ] ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { o2y45zbt2m4 . d1vosmg1qx [ 0 ] =
o2y45zbt2m4 . kncngnrvsh [ 0 ] * o2y45zbt2m4 . kncngnrvsh [ 1 ] * hbv5azo3sw
. Gain1_Gain_cftaqvkxoi ; o2y45zbt2m4 . d1vosmg1qx [ 1 ] = o2y45zbt2m4 .
kncngnrvsh [ 0 ] * o2y45zbt2m4 . kncngnrvsh [ 2 ] * hbv5azo3sw .
Gain1_Gain_cftaqvkxoi ; o2y45zbt2m4 . d1vosmg1qx [ 2 ] = o2y45zbt2m4 .
kncngnrvsh [ 0 ] * o2y45zbt2m4 . kncngnrvsh [ 3 ] * hbv5azo3sw .
Gain1_Gain_cftaqvkxoi ; } o2y45zbt2m4 . c1cfxe21zn [ 0 ] = ( ( hbv5azo3sw .
Gain_Gain_bi5br4oxvh * o2y45zbt2m4 . mhup2avl2j [ 0 ] + o2y45zbt2m4 .
kuqlbidad1 [ 0 ] ) + o2y45zbt2m4 . d1vosmg1qx [ 0 ] ) * hbv5azo3sw .
Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 . op4p3vooky [ 0 ] = hbv5azo3sw .
Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 . c1cfxe21zn [ 0 ] ; o2y45zbt2m4 .
c1cfxe21zn [ 1 ] = ( ( hbv5azo3sw . Gain_Gain_bi5br4oxvh * o2y45zbt2m4 .
mhup2avl2j [ 1 ] + o2y45zbt2m4 . kuqlbidad1 [ 1 ] ) + o2y45zbt2m4 .
d1vosmg1qx [ 1 ] ) * hbv5azo3sw . Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 .
op4p3vooky [ 1 ] = hbv5azo3sw . Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 .
c1cfxe21zn [ 1 ] ; o2y45zbt2m4 . c1cfxe21zn [ 2 ] = ( ( hbv5azo3sw .
Gain_Gain_bi5br4oxvh * o2y45zbt2m4 . mhup2avl2j [ 2 ] + o2y45zbt2m4 .
kuqlbidad1 [ 2 ] ) + o2y45zbt2m4 . d1vosmg1qx [ 2 ] ) * hbv5azo3sw .
Gain2_Gain_lwwetqjf5s ; o2y45zbt2m4 . op4p3vooky [ 2 ] = hbv5azo3sw .
Gain_Gain_eb5rzn1cjw * o2y45zbt2m4 . c1cfxe21zn [ 2 ] ; if ( ssIsSampleHit (
rtS , 10 , 0 ) ) { ikxunumo3i = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . op4p3vooky [ 0 ] * hbv5azo3sw .
PWM3_Period + o2y45zbt2m4 . op4p3vooky [ 0 ] * hbv5azo3sw . PWM3_Period ) /
0.1 ) ; if ( muDoubleScalarIsNaN ( ikxunumo3i ) || muDoubleScalarIsInf (
ikxunumo3i ) ) { ikxunumo3i = 0.0 ; } else { ikxunumo3i = muDoubleScalarRem (
ikxunumo3i , 4.294967296E+9 ) ; } if ( ( ( ( ikxunumo3i < 0.0 ? ( uint32_T )
- ( int32_T ) ( uint32_T ) - ikxunumo3i : ( uint32_T ) ikxunumo3i ) == 0U )
|| ( o2y45zbt2m4 . op4p3vooky [ 0 ] <= 0.0 ) ) && hrxu5rhe3af . opg1lhdczb )
{ o2y45zbt2m4 . px02m2ansm = 0.0 ; hrxu5rhe3af . e2pe11pwxn = false ; } else
{ o2y45zbt2m4 . px02m2ansm = hrxu5rhe3af . e2pe11pwxn ; } } if (
ssIsSampleHit ( rtS , 11 , 0 ) ) { ikxunumo3i = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . op4p3vooky [ 1 ] * hbv5azo3sw .
PWM4_Period + o2y45zbt2m4 . op4p3vooky [ 1 ] * hbv5azo3sw . PWM4_Period ) /
0.1 ) ; if ( muDoubleScalarIsNaN ( ikxunumo3i ) || muDoubleScalarIsInf (
ikxunumo3i ) ) { ikxunumo3i = 0.0 ; } else { ikxunumo3i = muDoubleScalarRem (
ikxunumo3i , 4.294967296E+9 ) ; } if ( ( ( ( ikxunumo3i < 0.0 ? ( uint32_T )
- ( int32_T ) ( uint32_T ) - ikxunumo3i : ( uint32_T ) ikxunumo3i ) == 0U )
|| ( o2y45zbt2m4 . op4p3vooky [ 1 ] <= 0.0 ) ) && hrxu5rhe3af . jmjdutrgwi )
{ o2y45zbt2m4 . lzgno0c45u = 0.0 ; hrxu5rhe3af . jiqhomoo0v = false ; } else
{ o2y45zbt2m4 . lzgno0c45u = hrxu5rhe3af . jiqhomoo0v ; } } if (
ssIsSampleHit ( rtS , 12 , 0 ) ) { ikxunumo3i = muDoubleScalarFloor ( (
2.8421709430404007E-14 * o2y45zbt2m4 . op4p3vooky [ 2 ] * hbv5azo3sw .
PWM5_Period + o2y45zbt2m4 . op4p3vooky [ 2 ] * hbv5azo3sw . PWM5_Period ) /
0.1 ) ; if ( muDoubleScalarIsNaN ( ikxunumo3i ) || muDoubleScalarIsInf (
ikxunumo3i ) ) { ikxunumo3i = 0.0 ; } else { ikxunumo3i = muDoubleScalarRem (
ikxunumo3i , 4.294967296E+9 ) ; } if ( ( ( ( ikxunumo3i < 0.0 ? ( uint32_T )
- ( int32_T ) ( uint32_T ) - ikxunumo3i : ( uint32_T ) ikxunumo3i ) == 0U )
|| ( o2y45zbt2m4 . op4p3vooky [ 2 ] <= 0.0 ) ) && hrxu5rhe3af . ayulg3mnvk )
{ o2y45zbt2m4 . frbnnz0j20 = 0.0 ; hrxu5rhe3af . gxxnmirgwt = false ; } else
{ o2y45zbt2m4 . frbnnz0j20 = hrxu5rhe3af . gxxnmirgwt ; } } if (
ssIsSampleHit ( rtS , 4 , 0 ) ) { hnpfszi1fh_idx_0 = hbv5azo3sw .
Gain1_Gain_i4m04mlldw * o2y45zbt2m4 . px02m2ansm ; hnpfszi1fh_idx_1 =
hbv5azo3sw . Gain1_Gain_i4m04mlldw * o2y45zbt2m4 . lzgno0c45u ;
hnpfszi1fh_idx_2 = hbv5azo3sw . Gain1_Gain_i4m04mlldw * o2y45zbt2m4 .
frbnnz0j20 ; } if ( ssIsSampleHit ( rtS , 8 , 0 ) ) { ikxunumo3i =
muDoubleScalarFloor ( ( 2.8421709430404007E-14 * o2y45zbt2m4 . c1cfxe21zn [ 0
] * hbv5azo3sw . PWM_Period + o2y45zbt2m4 . c1cfxe21zn [ 0 ] * hbv5azo3sw .
PWM_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( ikxunumo3i ) ||
muDoubleScalarIsInf ( ikxunumo3i ) ) { ikxunumo3i = 0.0 ; } else { ikxunumo3i
= muDoubleScalarRem ( ikxunumo3i , 4.294967296E+9 ) ; } if ( ( ( ( ikxunumo3i
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - ikxunumo3i : ( uint32_T )
ikxunumo3i ) == 0U ) || ( o2y45zbt2m4 . c1cfxe21zn [ 0 ] <= 0.0 ) ) &&
hrxu5rhe3af . cnj1jumxqg ) { o2y45zbt2m4 . ftjowoqghq = 0.0 ; hrxu5rhe3af .
cozmdzu0w1 = false ; } else { o2y45zbt2m4 . ftjowoqghq = hrxu5rhe3af .
cozmdzu0w1 ; } } if ( ssIsSampleHit ( rtS , 9 , 0 ) ) { ikxunumo3i =
muDoubleScalarFloor ( ( 2.8421709430404007E-14 * o2y45zbt2m4 . c1cfxe21zn [ 1
] * hbv5azo3sw . PWM1_Period + o2y45zbt2m4 . c1cfxe21zn [ 1 ] * hbv5azo3sw .
PWM1_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( ikxunumo3i ) ||
muDoubleScalarIsInf ( ikxunumo3i ) ) { ikxunumo3i = 0.0 ; } else { ikxunumo3i
= muDoubleScalarRem ( ikxunumo3i , 4.294967296E+9 ) ; } if ( ( ( ( ikxunumo3i
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - ikxunumo3i : ( uint32_T )
ikxunumo3i ) == 0U ) || ( o2y45zbt2m4 . c1cfxe21zn [ 1 ] <= 0.0 ) ) &&
hrxu5rhe3af . ae5papqlus ) { o2y45zbt2m4 . psapwntjo4 = 0.0 ; hrxu5rhe3af .
i5keywnlob = false ; } else { o2y45zbt2m4 . psapwntjo4 = hrxu5rhe3af .
i5keywnlob ; } } if ( ssIsSampleHit ( rtS , 7 , 0 ) ) { ikxunumo3i =
muDoubleScalarFloor ( ( 2.8421709430404007E-14 * o2y45zbt2m4 . c1cfxe21zn [ 2
] * hbv5azo3sw . PWM2_Period + o2y45zbt2m4 . c1cfxe21zn [ 2 ] * hbv5azo3sw .
PWM2_Period ) / 0.1 ) ; if ( muDoubleScalarIsNaN ( ikxunumo3i ) ||
muDoubleScalarIsInf ( ikxunumo3i ) ) { ikxunumo3i = 0.0 ; } else { ikxunumo3i
= muDoubleScalarRem ( ikxunumo3i , 4.294967296E+9 ) ; } if ( ( ( ( ikxunumo3i
< 0.0 ? ( uint32_T ) - ( int32_T ) ( uint32_T ) - ikxunumo3i : ( uint32_T )
ikxunumo3i ) == 0U ) || ( o2y45zbt2m4 . c1cfxe21zn [ 2 ] <= 0.0 ) ) &&
hrxu5rhe3af . brmqgwecvy ) { o2y45zbt2m4 . pjlzlhabnw = 0.0 ; hrxu5rhe3af .
mp3yltewxi = false ; } else { o2y45zbt2m4 . pjlzlhabnw = hrxu5rhe3af .
mp3yltewxi ; } } if ( ssIsSampleHit ( rtS , 4 , 0 ) ) { hnpfszi1fh_idx_0 +=
o2y45zbt2m4 . ftjowoqghq ; hnpfszi1fh_idx_1 += o2y45zbt2m4 . psapwntjo4 ;
hnpfszi1fh_idx_2 += o2y45zbt2m4 . pjlzlhabnw ; o2y45zbt2m4 . fkulvx00jr [ 0 ]
= hbv5azo3sw . Gain3_Gain_b5qqmritsc * hnpfszi1fh_idx_0 ; o2y45zbt2m4 .
fkulvx00jr [ 1 ] = hbv5azo3sw . Gain3_Gain_b5qqmritsc * hnpfszi1fh_idx_1 ;
o2y45zbt2m4 . fkulvx00jr [ 2 ] = hbv5azo3sw . Gain3_Gain_b5qqmritsc *
hnpfszi1fh_idx_2 ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { o2y45zbt2m4 .
g20nolxhoz [ 0 ] = o2y45zbt2m4 . fkulvx00jr [ 0 ] ; o2y45zbt2m4 . g20nolxhoz
[ 1 ] = o2y45zbt2m4 . fkulvx00jr [ 1 ] ; o2y45zbt2m4 . g20nolxhoz [ 2 ] =
o2y45zbt2m4 . fkulvx00jr [ 2 ] ; b2dseb5akc_idx_1 = 3.3121686421112381E-170 ;
mnqgflhgig = muDoubleScalarAbs ( o2y45zbt2m4 . kncngnrvsh [ 1 ] ) ; if (
mnqgflhgig > 3.3121686421112381E-170 ) { ikxunumo3i = 1.0 ; b2dseb5akc_idx_1
= mnqgflhgig ; } else { omuhzl1dir = mnqgflhgig / 3.3121686421112381E-170 ;
ikxunumo3i = omuhzl1dir * omuhzl1dir ; } mnqgflhgig = muDoubleScalarAbs (
o2y45zbt2m4 . kncngnrvsh [ 2 ] ) ; if ( mnqgflhgig > b2dseb5akc_idx_1 ) {
omuhzl1dir = b2dseb5akc_idx_1 / mnqgflhgig ; ikxunumo3i = ikxunumo3i *
omuhzl1dir * omuhzl1dir + 1.0 ; b2dseb5akc_idx_1 = mnqgflhgig ; } else {
omuhzl1dir = mnqgflhgig / b2dseb5akc_idx_1 ; ikxunumo3i += omuhzl1dir *
omuhzl1dir ; } mnqgflhgig = muDoubleScalarAbs ( o2y45zbt2m4 . kncngnrvsh [ 3
] ) ; if ( mnqgflhgig > b2dseb5akc_idx_1 ) { omuhzl1dir = b2dseb5akc_idx_1 /
mnqgflhgig ; ikxunumo3i = ikxunumo3i * omuhzl1dir * omuhzl1dir + 1.0 ;
b2dseb5akc_idx_1 = mnqgflhgig ; } else { omuhzl1dir = mnqgflhgig /
b2dseb5akc_idx_1 ; ikxunumo3i += omuhzl1dir * omuhzl1dir ; } ikxunumo3i =
b2dseb5akc_idx_1 * muDoubleScalarSqrt ( ikxunumo3i ) ; o2y45zbt2m4 .
nmbndl4hhg = 114.59155902616465 * ikxunumo3i ; } y_p =
ssGetIsOkayToUpdateMode ( rtS ) ; if ( y_p ) { if ( hrxu5rhe3af . ckit2etwje
!= 0 ) { n1mubcupv31 . kbqjtzizsx [ 0 ] = o2y45zbt2m4 . lx0bv1yu1i [ 0 ] ;
n1mubcupv31 . kbqjtzizsx [ 1 ] = o2y45zbt2m4 . lx0bv1yu1i [ 1 ] ; n1mubcupv31
. kbqjtzizsx [ 2 ] = o2y45zbt2m4 . lx0bv1yu1i [ 2 ] ; } o2y45zbt2m4 .
h20zeizqdi [ 0 ] = n1mubcupv31 . kbqjtzizsx [ 0 ] ; o2y45zbt2m4 . h20zeizqdi
[ 1 ] = n1mubcupv31 . kbqjtzizsx [ 1 ] ; o2y45zbt2m4 . h20zeizqdi [ 2 ] =
n1mubcupv31 . kbqjtzizsx [ 2 ] ; } else { o2y45zbt2m4 . h20zeizqdi [ 0 ] =
n1mubcupv31 . kbqjtzizsx [ 0 ] ; o2y45zbt2m4 . h20zeizqdi [ 1 ] = n1mubcupv31
. kbqjtzizsx [ 1 ] ; o2y45zbt2m4 . h20zeizqdi [ 2 ] = n1mubcupv31 .
kbqjtzizsx [ 2 ] ; } o2y45zbt2m4 . al2bqvraok [ 0 ] = o2y45zbt2m4 .
mhup2avl2j [ 0 ] - o2y45zbt2m4 . h20zeizqdi [ 0 ] ; o2y45zbt2m4 . al2bqvraok
[ 1 ] = o2y45zbt2m4 . mhup2avl2j [ 1 ] - o2y45zbt2m4 . h20zeizqdi [ 1 ] ;
o2y45zbt2m4 . al2bqvraok [ 2 ] = o2y45zbt2m4 . mhup2avl2j [ 2 ] - o2y45zbt2m4
. h20zeizqdi [ 2 ] ; ikxunumo3i = ( ( l1pix2zzzf * l1pix2zzzf + dxjf4qcaeo *
dxjf4qcaeo ) + k1qmoe0iaw * k1qmoe0iaw ) + nm4t0wvumv * nm4t0wvumv ;
o2y45zbt2m4 . p1h2ekhznv = ( ( ( o2y45zbt2m4 . kncngnrvsh [ 0 ] * l1pix2zzzf
+ o2y45zbt2m4 . kncngnrvsh [ 1 ] * dxjf4qcaeo ) + o2y45zbt2m4 . kncngnrvsh [
2 ] * k1qmoe0iaw ) + o2y45zbt2m4 . kncngnrvsh [ 3 ] * nm4t0wvumv ) /
ikxunumo3i ; o2y45zbt2m4 . fd0rbysv5e = ( ( ( o2y45zbt2m4 . kncngnrvsh [ 1 ]
* l1pix2zzzf - o2y45zbt2m4 . kncngnrvsh [ 0 ] * dxjf4qcaeo ) + o2y45zbt2m4 .
kncngnrvsh [ 2 ] * nm4t0wvumv ) - o2y45zbt2m4 . kncngnrvsh [ 3 ] * k1qmoe0iaw
) / ikxunumo3i ; o2y45zbt2m4 . pnf1jlsyd1 = ( ( ( o2y45zbt2m4 . kncngnrvsh [
2 ] * l1pix2zzzf - o2y45zbt2m4 . kncngnrvsh [ 0 ] * k1qmoe0iaw ) -
o2y45zbt2m4 . kncngnrvsh [ 1 ] * nm4t0wvumv ) + o2y45zbt2m4 . kncngnrvsh [ 3
] * dxjf4qcaeo ) / ikxunumo3i ; o2y45zbt2m4 . jcjo2imsjo = ( ( ( o2y45zbt2m4
. kncngnrvsh [ 1 ] * k1qmoe0iaw - o2y45zbt2m4 . kncngnrvsh [ 0 ] * nm4t0wvumv
) - o2y45zbt2m4 . kncngnrvsh [ 2 ] * dxjf4qcaeo ) + o2y45zbt2m4 . kncngnrvsh
[ 3 ] * l1pix2zzzf ) / ikxunumo3i ; if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
RandSrc_GZ_D ( ezr3pqqzqh , & hbv5azo3sw . RandomSource1_MeanVal_arywbior3i ,
1 , & hbv5azo3sw . RandomSource1_VarianceRTP_ionnsyjv5n , 1 , hrxu5rhe3af .
bdotsga2iv , 1 , 3 ) ; hnpfszi1fh_idx_1 = hbv5azo3sw . Gain1_Gain_muvypx1rsb
* ezr3pqqzqh [ 0 ] * hbv5azo3sw . Gain_Gain_jtp3rrvu3s ; hnpfszi1fh_idx_2 =
hrxu5rhe3af . iwulztso32 [ 0 ] + hnpfszi1fh_idx_1 ; o2y45zbt2m4 . p0g2tnevfk
[ 0 ] = hnpfszi1fh_idx_2 ; hrxu5rhe3af . iwulztso32 [ 0 ] = hnpfszi1fh_idx_2
; ezr3pqqzqh [ 0 ] = hnpfszi1fh_idx_1 ; hnpfszi1fh_idx_1 = hbv5azo3sw .
Gain1_Gain_muvypx1rsb * ezr3pqqzqh [ 1 ] * hbv5azo3sw . Gain_Gain_jtp3rrvu3s
; hnpfszi1fh_idx_2 = hrxu5rhe3af . iwulztso32 [ 1 ] + hnpfszi1fh_idx_1 ;
o2y45zbt2m4 . p0g2tnevfk [ 1 ] = hnpfszi1fh_idx_2 ; hrxu5rhe3af . iwulztso32
[ 1 ] = hnpfszi1fh_idx_2 ; ezr3pqqzqh [ 1 ] = hnpfszi1fh_idx_1 ;
hnpfszi1fh_idx_1 = hbv5azo3sw . Gain1_Gain_muvypx1rsb * ezr3pqqzqh [ 2 ] *
hbv5azo3sw . Gain_Gain_jtp3rrvu3s ; hnpfszi1fh_idx_2 = hrxu5rhe3af .
iwulztso32 [ 2 ] + hnpfszi1fh_idx_1 ; o2y45zbt2m4 . p0g2tnevfk [ 2 ] =
hnpfszi1fh_idx_2 ; hrxu5rhe3af . iwulztso32 [ 2 ] = hnpfszi1fh_idx_2 ;
ezr3pqqzqh [ 2 ] = hnpfszi1fh_idx_1 ; RandSrc_GZ_D ( ezr3pqqzqh , &
hbv5azo3sw . RandomSource_MeanVal , 1 , & hbv5azo3sw .
RandomSource_VarianceRTP , 1 , hrxu5rhe3af . lqkanthoxg , 1 , 3 ) ;
o2y45zbt2m4 . hm4dh5kqpp [ 0 ] = hbv5azo3sw . Gain2_Gain_gh1g3dgcoc *
ezr3pqqzqh [ 0 ] ; o2y45zbt2m4 . hm4dh5kqpp [ 1 ] = hbv5azo3sw .
Gain2_Gain_gh1g3dgcoc * ezr3pqqzqh [ 1 ] ; o2y45zbt2m4 . hm4dh5kqpp [ 2 ] =
hbv5azo3sw . Gain2_Gain_gh1g3dgcoc * ezr3pqqzqh [ 2 ] ; } if ( ssIsSampleHit
( rtS , 2 , 0 ) ) { myqx15ehea_idx_0 = ( o2y45zbt2m4 . p0g2tnevfk [ 0 ] +
o2y45zbt2m4 . h20zeizqdi [ 0 ] ) + o2y45zbt2m4 . hm4dh5kqpp [ 0 ] ;
myqx15ehea_idx_1 = ( o2y45zbt2m4 . p0g2tnevfk [ 1 ] + o2y45zbt2m4 .
h20zeizqdi [ 1 ] ) + o2y45zbt2m4 . hm4dh5kqpp [ 1 ] ; myqx15ehea_idx_2 = (
o2y45zbt2m4 . p0g2tnevfk [ 2 ] + o2y45zbt2m4 . h20zeizqdi [ 2 ] ) +
o2y45zbt2m4 . hm4dh5kqpp [ 2 ] ; } ikxunumo3i = ( lv0mc01z2o_idx_0 *
lv0mc01z2o_idx_0 + lv0mc01z2o_idx_1 * lv0mc01z2o_idx_1 ) + lv0mc01z2o_idx_2 *
lv0mc01z2o_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af .
dnqubg5s4k != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
hrxu5rhe3af . dnqubg5s4k = 0 ; } b2dseb5akc_idx_1 = muDoubleScalarSqrt (
ikxunumo3i ) ; } else if ( ikxunumo3i < 0.0 ) { b2dseb5akc_idx_1 = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( ikxunumo3i ) ) ; hrxu5rhe3af .
dnqubg5s4k = 1 ; } else { b2dseb5akc_idx_1 = muDoubleScalarSqrt ( ikxunumo3i
) ; } ikxunumo3i = 1.0 / ( b2dseb5akc_idx_1 * b2dseb5akc_idx_1 ) /
b2dseb5akc_idx_1 * o2y45zbt2m4 . culrexdnyf ; ezr3pqqzqh [ 0 ] =
lv0mc01z2o_idx_0 / b2dseb5akc_idx_1 ; ezr3pqqzqh [ 1 ] = lv0mc01z2o_idx_1 /
b2dseb5akc_idx_1 ; ezr3pqqzqh [ 2 ] = lv0mc01z2o_idx_2 / b2dseb5akc_idx_1 ;
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
hkwf2out3d * hkwf2out3d ) * hbv5azo3sw . Gain2_Gain_n32pjfxnui * ezr3pqqzqh [
1 ] + ( b2dseb5akc_idx_1 * mnqgflhgig - omuhzl1dir * hkwf2out3d ) *
hbv5azo3sw . Gain_Gain_cf5hb10y5x * ezr3pqqzqh [ 0 ] ) + ( omuhzl1dir *
b2dseb5akc_idx_1 + mnqgflhgig * hkwf2out3d ) * hbv5azo3sw .
Gain1_Gain_gwlrw1w2b3 * ezr3pqqzqh [ 2 ] ; ntqepze5kl = ( ( b2dseb5akc_idx_1
* hkwf2out3d + omuhzl1dir * mnqgflhgig ) * hbv5azo3sw . Gain_Gain_efnax0y1dx
* ezr3pqqzqh [ 0 ] + ( mnqgflhgig * hkwf2out3d - omuhzl1dir *
b2dseb5akc_idx_1 ) * hbv5azo3sw . Gain1_Gain_ddeccjfmea * ezr3pqqzqh [ 1 ] )
+ ( ( hbv5azo3sw . Constant_Value_a2jieicat5 - b2dseb5akc_idx_1 *
b2dseb5akc_idx_1 ) - mnqgflhgig * mnqgflhgig ) * hbv5azo3sw .
Gain2_Gain_g2ebct4dqc * ezr3pqqzqh [ 2 ] ; b2dseb5akc_idx_1 = ( ( (
hbv5azo3sw . Constant_Value_bpdqgjnrbi - mnqgflhgig * mnqgflhgig ) -
hkwf2out3d * hkwf2out3d ) * hbv5azo3sw . Gain2_Gain_cko11epp5n * ezr3pqqzqh [
0 ] + ( b2dseb5akc_idx_1 * mnqgflhgig + omuhzl1dir * hkwf2out3d ) *
hbv5azo3sw . Gain_Gain_cjicctxqb2 * ezr3pqqzqh [ 1 ] ) + ( b2dseb5akc_idx_1 *
hkwf2out3d - omuhzl1dir * mnqgflhgig ) * hbv5azo3sw . Gain1_Gain_nieh11pzcd *
ezr3pqqzqh [ 2 ] ; ezr3pqqzqh [ 0 ] = o2y45zbt2m4 . ambhfazf2y [ 0 ] *
clod0whodw_idx_0 * ntqepze5kl * ikxunumo3i ; ezr3pqqzqh [ 1 ] = o2y45zbt2m4 .
ambhfazf2y [ 1 ] * ntqepze5kl * b2dseb5akc_idx_1 * ikxunumo3i ; ezr3pqqzqh [
2 ] = o2y45zbt2m4 . ambhfazf2y [ 2 ] * b2dseb5akc_idx_1 * clod0whodw_idx_0 *
ikxunumo3i ; ikxunumo3i = ( lv0mc01z2o_idx_0 * lv0mc01z2o_idx_0 +
lv0mc01z2o_idx_1 * lv0mc01z2o_idx_1 ) + lv0mc01z2o_idx_2 * lv0mc01z2o_idx_2 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . pidbwsidci != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . pidbwsidci
= 0 ; } o2y45zbt2m4 . ggrj4lwkdq = muDoubleScalarSqrt ( ikxunumo3i ) ; } else
if ( ikxunumo3i < 0.0 ) { o2y45zbt2m4 . ggrj4lwkdq = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ikxunumo3i ) ) ; hrxu5rhe3af . pidbwsidci = 1 ; } else {
o2y45zbt2m4 . ggrj4lwkdq = muDoubleScalarSqrt ( ikxunumo3i ) ; } plz0cvxflt [
0 ] = lv0mc01z2o_idx_0 / o2y45zbt2m4 . ggrj4lwkdq ; plz0cvxflt [ 1 ] =
lv0mc01z2o_idx_1 / o2y45zbt2m4 . ggrj4lwkdq ; plz0cvxflt [ 2 ] =
lv0mc01z2o_idx_2 / o2y45zbt2m4 . ggrj4lwkdq ; ikxunumo3i = plz0cvxflt [ 0 ] *
plz0cvxflt [ 0 ] + plz0cvxflt [ 1 ] * plz0cvxflt [ 1 ] ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . ji1vknz2dr != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ji1vknz2dr
= 0 ; } b2dseb5akc_idx_1 = muDoubleScalarSqrt ( ikxunumo3i ) ; } else if (
ikxunumo3i < 0.0 ) { b2dseb5akc_idx_1 = - muDoubleScalarSqrt (
muDoubleScalarAbs ( ikxunumo3i ) ) ; hrxu5rhe3af . ji1vknz2dr = 1 ; } else {
b2dseb5akc_idx_1 = muDoubleScalarSqrt ( ikxunumo3i ) ; } o2y45zbt2m4 .
jjuwpyarp5 = muDoubleScalarAtan2 ( b2dseb5akc_idx_1 , plz0cvxflt [ 2 ] ) ;
mnqgflhgig = muDoubleScalarAtan2 ( plz0cvxflt [ 1 ] , plz0cvxflt [ 0 ] ) ;
o2y45zbt2m4 . nyoyhdwzhr = mnqgflhgig - 6.2831853071795862 / rtP_Earth .
siderealDay * ssGetT ( rtS ) ; MagneticFieldInPolarCoords ( & o2y45zbt2m4 .
ggrj4lwkdq , & o2y45zbt2m4 . jjuwpyarp5 , & o2y45zbt2m4 . nyoyhdwzhr , &
rtP_Earth . equatorialRadius , & o2y45zbt2m4 . mfc3g102pw [ 0 ] ) ;
b2dseb5akc_idx_1 = hbv5azo3sw . Gain_Gain_m4jtdwqsx1 * o2y45zbt2m4 .
jjuwpyarp5 ; ikxunumo3i = muDoubleScalarCos ( b2dseb5akc_idx_1 ) ; omuhzl1dir
= hbv5azo3sw . Gain_Gain_cnryscy0x5 * mnqgflhgig ; mnqgflhgig =
muDoubleScalarSin ( omuhzl1dir ) ; omuhzl1dir = muDoubleScalarCos (
omuhzl1dir ) ; b2dseb5akc_idx_1 = muDoubleScalarSin ( b2dseb5akc_idx_1 ) ;
mjhceqjgf1_idx_0 = ( ikxunumo3i * hbv5azo3sw . Constant_Value_hrofb0v0v5 +
omuhzl1dir * hbv5azo3sw . Constant_Value_ekkpqgqspn ) + ( b2dseb5akc_idx_1 *
mnqgflhgig - hbv5azo3sw . Constant_Value_ekkpqgqspn * hbv5azo3sw .
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
/ b2dseb5akc_idx_1 ; plz0cvxflt [ 0 ] = 0.0 ; hnpfszi1fh_idx_1 = o2y45zbt2m4
. k2zlzdldai [ 1 ] / b2dseb5akc_idx_1 ; plz0cvxflt [ 1 ] = 0.0 ;
hnpfszi1fh_idx_2 = o2y45zbt2m4 . k2zlzdldai [ 2 ] / b2dseb5akc_idx_1 ;
plz0cvxflt [ 2 ] = 0.0 ; for ( vcol = 0 ; vcol < 10 ; vcol ++ ) { hkwf2out3d
= b_e [ vcol ] ; mnqgflhgig = ( rtP_Spacecraft . surfaces_normalToSurface [ 3
* vcol + 1 ] * hnpfszi1fh_idx_1 + rtP_Spacecraft . surfaces_normalToSurface [
3 * vcol ] * hnpfszi1fh_idx_0 ) + rtP_Spacecraft . surfaces_normalToSurface [
3 * vcol + 2 ] * hnpfszi1fh_idx_2 ; if ( mnqgflhgig > 0.0 ) {
b2dseb5akc_idx_1 = 2.0 * hkwf2out3d * mnqgflhgig + 0.066666666666666666 ;
mnqgflhgig *= - ikxunumo3i * rtP_Spacecraft . surfaces_area [ vcol ] ;
clod0whodw_idx_0 = ( ( 1.0 - hkwf2out3d ) * hnpfszi1fh_idx_0 + rtP_Spacecraft
. surfaces_normalToSurface [ 3 * vcol ] * b2dseb5akc_idx_1 ) * mnqgflhgig ;
mjhceqjgf1_idx_0 = rtP_Spacecraft . surfaces_position [ 3 * vcol ] +
rtP_Spacecraft . geometricCenter [ 0 ] ; au32y1wfjp_idx_1 = ( rtP_Spacecraft
. surfaces_normalToSurface [ 3 * vcol + 1 ] * b2dseb5akc_idx_1 + ( 1.0 -
hkwf2out3d ) * hnpfszi1fh_idx_1 ) * mnqgflhgig ; mjhceqjgf1_idx_1 =
rtP_Spacecraft . surfaces_position [ 3 * vcol + 1 ] + rtP_Spacecraft .
geometricCenter [ 1 ] ; mnqgflhgig *= rtP_Spacecraft .
surfaces_normalToSurface [ 3 * vcol + 2 ] * b2dseb5akc_idx_1 + ( 1.0 -
hkwf2out3d ) * hnpfszi1fh_idx_2 ; b2dseb5akc_idx_1 = rtP_Spacecraft .
surfaces_position [ 3 * vcol + 2 ] + rtP_Spacecraft . geometricCenter [ 2 ] ;
hkwf2out3d = plz0cvxflt [ 0 ] ; ardt1y5x0d_idx_1 = plz0cvxflt [ 1 ] ;
njulo3ucsg = plz0cvxflt [ 2 ] ; plz0cvxflt [ 0 ] = ( mjhceqjgf1_idx_1 *
mnqgflhgig - au32y1wfjp_idx_1 * b2dseb5akc_idx_1 ) + hkwf2out3d ; plz0cvxflt
[ 1 ] = ( clod0whodw_idx_0 * b2dseb5akc_idx_1 - mjhceqjgf1_idx_0 * mnqgflhgig
) + ardt1y5x0d_idx_1 ; plz0cvxflt [ 2 ] = ( mjhceqjgf1_idx_0 *
au32y1wfjp_idx_1 - clod0whodw_idx_0 * mjhceqjgf1_idx_1 ) + njulo3ucsg ; } }
ezr3pqqzqh [ 0 ] = ( ezr3pqqzqh [ 0 ] + plz0cvxflt [ 0 ] ) + (
oouy1fopfw_idx_1 - epx0klrbgl_idx_1 ) ; ezr3pqqzqh [ 1 ] = ( ezr3pqqzqh [ 1 ]
+ plz0cvxflt [ 1 ] ) + ( pzi3xtzla3_idx_1 - ntqepze5kl ) ; o2y45zbt2m4 .
jg5xwtwjpe [ 0 ] = ( o2y45zbt2m4 . h20zeizqdi [ 1 ] * o2y45zbt2m4 .
h20zeizqdi [ 2 ] * o2y45zbt2m4 . jq2aut2ijb [ 0 ] + ( ezr3pqqzqh [ 0 ] +
o2y45zbt2m4 . fkulvx00jr [ 0 ] ) ) / hbv5azo3sw . Inertia_Value [ 0 ] ;
o2y45zbt2m4 . jg5xwtwjpe [ 1 ] = ( o2y45zbt2m4 . h20zeizqdi [ 0 ] *
o2y45zbt2m4 . h20zeizqdi [ 2 ] * o2y45zbt2m4 . jq2aut2ijb [ 1 ] + (
ezr3pqqzqh [ 1 ] + o2y45zbt2m4 . fkulvx00jr [ 1 ] ) ) / hbv5azo3sw .
Inertia_Value [ 1 ] ; o2y45zbt2m4 . jg5xwtwjpe [ 2 ] = ( ( ( ( ezr3pqqzqh [ 2
] + plz0cvxflt [ 2 ] ) + ( epx0klrbgl_idx_0 - omuhzl1dir ) ) + o2y45zbt2m4 .
fkulvx00jr [ 2 ] ) + o2y45zbt2m4 . h20zeizqdi [ 0 ] * o2y45zbt2m4 .
h20zeizqdi [ 1 ] * o2y45zbt2m4 . jq2aut2ijb [ 2 ] ) / hbv5azo3sw .
Inertia_Value [ 2 ] ; Y2 [ 0 ] = 0.0 ; Y2 [ 4 ] = - o2y45zbt2m4 . h20zeizqdi
[ 0 ] ; Y2 [ 8 ] = - o2y45zbt2m4 . h20zeizqdi [ 1 ] ; Y2 [ 12 ] = -
o2y45zbt2m4 . h20zeizqdi [ 2 ] ; Y2 [ 1 ] = 0.0 ; Y2 [ 5 ] = 0.0 ; Y2 [ 9 ] =
o2y45zbt2m4 . h20zeizqdi [ 2 ] ; Y2 [ 13 ] = - o2y45zbt2m4 . h20zeizqdi [ 1 ]
; Y2 [ 2 ] = 0.0 ; Y2 [ 6 ] = 0.0 ; Y2 [ 10 ] = 0.0 ; Y2 [ 14 ] = o2y45zbt2m4
. h20zeizqdi [ 0 ] ; Y2 [ 3 ] = 0.0 ; Y2 [ 7 ] = 0.0 ; Y2 [ 11 ] = 0.0 ; Y2 [
15 ] = 0.0 ; for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { Y2_e [ vcol << 2 ] = Y2
[ vcol << 2 ] - Y2 [ vcol ] ; Y2_e [ ( vcol << 2 ) + 1 ] = Y2 [ ( vcol << 2 )
+ 1 ] - Y2 [ vcol + 4 ] ; Y2_e [ ( vcol << 2 ) + 2 ] = Y2 [ ( vcol << 2 ) + 2
] - Y2 [ vcol + 8 ] ; Y2_e [ ( vcol << 2 ) + 3 ] = Y2 [ ( vcol << 2 ) + 3 ] -
Y2 [ vcol + 12 ] ; } memcpy ( & Y2 [ 0 ] , & Y2_e [ 0 ] , sizeof ( real_T )
<< 4U ) ; for ( vcol = 0 ; vcol <= 2 ; vcol += 2 ) { _mm_storeu_pd ( &
o2y45zbt2m4 . bwu3hh5pg3 [ vcol ] , _mm_set1_pd ( 0.0 ) ) ; tmp_j =
_mm_loadu_pd ( & Y2 [ vcol ] ) ; tmp_g = _mm_loadu_pd ( & o2y45zbt2m4 .
bwu3hh5pg3 [ vcol ] ) ; _mm_storeu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ vcol ] ,
_mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( _mm_set1_pd ( hbv5azo3sw .
Gain1_Gain_objsqoebrs ) , tmp_j ) , _mm_set1_pd ( l1pix2zzzf ) ) , tmp_g ) )
; tmp_j = _mm_loadu_pd ( & Y2 [ vcol + 4 ] ) ; tmp_g = _mm_loadu_pd ( &
o2y45zbt2m4 . bwu3hh5pg3 [ vcol ] ) ; _mm_storeu_pd ( & o2y45zbt2m4 .
bwu3hh5pg3 [ vcol ] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_j ,
_mm_set1_pd ( hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd (
dxjf4qcaeo ) ) , tmp_g ) ) ; tmp_j = _mm_loadu_pd ( & Y2 [ vcol + 8 ] ) ;
tmp_g = _mm_loadu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ vcol ] ) ; _mm_storeu_pd
( & o2y45zbt2m4 . bwu3hh5pg3 [ vcol ] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd
( tmp_j , _mm_set1_pd ( hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd
( k1qmoe0iaw ) ) , tmp_g ) ) ; tmp_j = _mm_loadu_pd ( & Y2 [ vcol + 12 ] ) ;
tmp_g = _mm_loadu_pd ( & o2y45zbt2m4 . bwu3hh5pg3 [ vcol ] ) ; _mm_storeu_pd
( & o2y45zbt2m4 . bwu3hh5pg3 [ vcol ] , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd
( tmp_j , _mm_set1_pd ( hbv5azo3sw . Gain1_Gain_objsqoebrs ) ) , _mm_set1_pd
( nm4t0wvumv ) ) , tmp_g ) ) ; } k1qmoe0iaw = hbv5azo3sw . e_Value *
muDoubleScalarCos ( emiiavfkh1 ) + hbv5azo3sw . Constant1_Value_lvvzxuwh5z ;
o2y45zbt2m4 . iunb01rvwp = 1.0 / o2y45zbt2m4 . bfud51xipp * o2y45zbt2m4 .
kp1mzqwbu3 * ( k1qmoe0iaw * k1qmoe0iaw ) ; y_p = ssGetIsOkayToUpdateMode (
rtS ) ; if ( y_p ) { if ( hrxu5rhe3af . g0uzej5lf1 != 0 ) { n1mubcupv31 .
li1obxdvy3 [ 0 ] = o2y45zbt2m4 . fi1wde2gl2 [ 0 ] ; n1mubcupv31 . li1obxdvy3
[ 1 ] = o2y45zbt2m4 . fi1wde2gl2 [ 1 ] ; n1mubcupv31 . li1obxdvy3 [ 2 ] =
o2y45zbt2m4 . fi1wde2gl2 [ 2 ] ; } o2y45zbt2m4 . hnvlhc15na [ 0 ] =
n1mubcupv31 . li1obxdvy3 [ 0 ] ; o2y45zbt2m4 . hnvlhc15na [ 1 ] = n1mubcupv31
. li1obxdvy3 [ 1 ] ; o2y45zbt2m4 . hnvlhc15na [ 2 ] = n1mubcupv31 .
li1obxdvy3 [ 2 ] ; } else { o2y45zbt2m4 . hnvlhc15na [ 0 ] = n1mubcupv31 .
li1obxdvy3 [ 0 ] ; o2y45zbt2m4 . hnvlhc15na [ 1 ] = n1mubcupv31 . li1obxdvy3
[ 1 ] ; o2y45zbt2m4 . hnvlhc15na [ 2 ] = n1mubcupv31 . li1obxdvy3 [ 2 ] ; }
k1qmoe0iaw = ( lv0mc01z2o_idx_0 * lv0mc01z2o_idx_0 + lv0mc01z2o_idx_1 *
lv0mc01z2o_idx_1 ) + lv0mc01z2o_idx_2 * lv0mc01z2o_idx_2 ; if (
ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . haxpv4vq51 != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . haxpv4vq51
= 0 ; } l1pix2zzzf = muDoubleScalarSqrt ( k1qmoe0iaw ) ; } else if (
k1qmoe0iaw < 0.0 ) { l1pix2zzzf = - muDoubleScalarSqrt ( muDoubleScalarAbs (
k1qmoe0iaw ) ) ; hrxu5rhe3af . haxpv4vq51 = 1 ; } else { l1pix2zzzf =
muDoubleScalarSqrt ( k1qmoe0iaw ) ; } k1qmoe0iaw = l1pix2zzzf * l1pix2zzzf ;
k1qmoe0iaw = rtP_Earth . J2 * rtP_Earth . mu * o2y45zbt2m4 . ltnksa0t1k / (
k1qmoe0iaw * k1qmoe0iaw ) * hbv5azo3sw . Gain_Gain_ij5ephcub4 ;
hnpfszi1fh_idx_0 = lv0mc01z2o_idx_0 / l1pix2zzzf ; hnpfszi1fh_idx_1 =
lv0mc01z2o_idx_1 / l1pix2zzzf ; hnpfszi1fh_idx_2 = lv0mc01z2o_idx_2 /
l1pix2zzzf ; l1pix2zzzf = hbv5azo3sw . Gain1_Gain_fos5u53xa3 *
hnpfszi1fh_idx_2 ; dxjf4qcaeo = l1pix2zzzf * l1pix2zzzf ; l1pix2zzzf =
dxjf4qcaeo - hbv5azo3sw . Constant4_Value ; dxjf4qcaeo = ( dxjf4qcaeo -
hbv5azo3sw . Constant3_Value_aiagav1bu5 ) * hnpfszi1fh_idx_2 ; emiiavfkh1 = (
lv0mc01z2o_idx_0 * lv0mc01z2o_idx_0 + lv0mc01z2o_idx_1 * lv0mc01z2o_idx_1 ) +
lv0mc01z2o_idx_2 * lv0mc01z2o_idx_2 ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . hxjxms0byf != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . hxjxms0byf = 0 ; } nm4t0wvumv = muDoubleScalarSqrt (
emiiavfkh1 ) ; } else if ( emiiavfkh1 < 0.0 ) { nm4t0wvumv = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( emiiavfkh1 ) ) ; hrxu5rhe3af .
hxjxms0byf = 1 ; } else { nm4t0wvumv = muDoubleScalarSqrt ( emiiavfkh1 ) ; }
emiiavfkh1 = rtP_Earth . mu / ( nm4t0wvumv * nm4t0wvumv ) * hbv5azo3sw .
Gain_Gain_fosanw5ymw ; o2y45zbt2m4 . gbu5abs2sz [ 0 ] = hnpfszi1fh_idx_0 *
l1pix2zzzf * k1qmoe0iaw + lv0mc01z2o_idx_0 / nm4t0wvumv * emiiavfkh1 ;
o2y45zbt2m4 . gbu5abs2sz [ 1 ] = l1pix2zzzf * hnpfszi1fh_idx_1 * k1qmoe0iaw +
lv0mc01z2o_idx_1 / nm4t0wvumv * emiiavfkh1 ; o2y45zbt2m4 . gbu5abs2sz [ 2 ] =
lv0mc01z2o_idx_2 / nm4t0wvumv * emiiavfkh1 + k1qmoe0iaw * dxjf4qcaeo ;
o2y45zbt2m4 . cbgxsqe0kg [ 0 ] = hbv5azo3sw . Gain_Gain_acmfvzt2nt *
o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ; o2y45zbt2m4 . cbgxsqe0kg [ 1 ] = hbv5azo3sw
. Gain_Gain_acmfvzt2nt * o2y45zbt2m4 . mvqp5l5ufq [ 1 ] ; o2y45zbt2m4 .
cbgxsqe0kg [ 2 ] = hbv5azo3sw . Gain_Gain_acmfvzt2nt * o2y45zbt2m4 .
mvqp5l5ufq [ 2 ] ; lv0mc01z2o_idx_0 = ( o2y45zbt2m4 . cbgxsqe0kg [ 0 ] *
o2y45zbt2m4 . cbgxsqe0kg [ 0 ] + o2y45zbt2m4 . cbgxsqe0kg [ 1 ] * o2y45zbt2m4
. cbgxsqe0kg [ 1 ] ) + o2y45zbt2m4 . cbgxsqe0kg [ 2 ] * o2y45zbt2m4 .
cbgxsqe0kg [ 2 ] ; if ( lv0mc01z2o_idx_0 < 0.0 ) { o2y45zbt2m4 . kwx5xj2ngl =
- muDoubleScalarSqrt ( muDoubleScalarAbs ( lv0mc01z2o_idx_0 ) ) ; } else {
o2y45zbt2m4 . kwx5xj2ngl = muDoubleScalarSqrt ( lv0mc01z2o_idx_0 ) ; } if (
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
an1hct1vdk [ 2 ] = hnpfszi1fh_idx_2 ; lv0mc01z2o_idx_0 = ( o2y45zbt2m4 .
hnvlhc15na [ 0 ] * o2y45zbt2m4 . hnvlhc15na [ 0 ] + o2y45zbt2m4 . hnvlhc15na
[ 1 ] * o2y45zbt2m4 . hnvlhc15na [ 1 ] ) + o2y45zbt2m4 . hnvlhc15na [ 2 ] *
o2y45zbt2m4 . hnvlhc15na [ 2 ] ; if ( lv0mc01z2o_idx_0 < 0.0 ) { o2y45zbt2m4
. ngj1laz0jn = - muDoubleScalarSqrt ( muDoubleScalarAbs ( lv0mc01z2o_idx_0 )
) ; } else { o2y45zbt2m4 . ngj1laz0jn = muDoubleScalarSqrt ( lv0mc01z2o_idx_0
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
b2dseb5akc_idx_1 - mjhceqjgf1_idx_1 * hnpfszi1fh_idx_2 ; o2y45zbt2m4 .
gnzoqn2dsl [ 1 ] = mjhceqjgf1_idx_0 * hnpfszi1fh_idx_2 - hnpfszi1fh_idx_0 *
b2dseb5akc_idx_1 ; o2y45zbt2m4 . gnzoqn2dsl [ 2 ] = hnpfszi1fh_idx_0 *
mjhceqjgf1_idx_1 - mjhceqjgf1_idx_0 * hnpfszi1fh_idx_1 ; o2y45zbt2m4 .
pguc21lp1k [ 0 ] = o2y45zbt2m4 . gnzoqn2dsl [ 1 ] * hnpfszi1fh_idx_2 -
hnpfszi1fh_idx_1 * o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ; o2y45zbt2m4 . pguc21lp1k
[ 1 ] = hnpfszi1fh_idx_0 * o2y45zbt2m4 . gnzoqn2dsl [ 2 ] - o2y45zbt2m4 .
gnzoqn2dsl [ 0 ] * hnpfszi1fh_idx_2 ; o2y45zbt2m4 . pguc21lp1k [ 2 ] =
o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * hnpfszi1fh_idx_1 - hnpfszi1fh_idx_0 *
o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ; lv0mc01z2o_idx_0 = ( o2y45zbt2m4 .
pguc21lp1k [ 0 ] * o2y45zbt2m4 . pguc21lp1k [ 0 ] + o2y45zbt2m4 . pguc21lp1k
[ 1 ] * o2y45zbt2m4 . pguc21lp1k [ 1 ] ) + o2y45zbt2m4 . pguc21lp1k [ 2 ] *
o2y45zbt2m4 . pguc21lp1k [ 2 ] ; if ( lv0mc01z2o_idx_0 < 0.0 ) { o2y45zbt2m4
. gnhb3isuhw = - muDoubleScalarSqrt ( muDoubleScalarAbs ( lv0mc01z2o_idx_0 )
) ; } else { o2y45zbt2m4 . gnhb3isuhw = muDoubleScalarSqrt ( lv0mc01z2o_idx_0
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
an1hct1vdk [ 5 ] = afgi1z3nug [ 2 ] / afgi1z3nug [ 3 ] ; lv0mc01z2o_idx_0 = (
o2y45zbt2m4 . gnzoqn2dsl [ 0 ] * o2y45zbt2m4 . gnzoqn2dsl [ 0 ] + o2y45zbt2m4
. gnzoqn2dsl [ 1 ] * o2y45zbt2m4 . gnzoqn2dsl [ 1 ] ) + o2y45zbt2m4 .
gnzoqn2dsl [ 2 ] * o2y45zbt2m4 . gnzoqn2dsl [ 2 ] ; if ( lv0mc01z2o_idx_0 <
0.0 ) { o2y45zbt2m4 . isiqvhsvds = - muDoubleScalarSqrt ( muDoubleScalarAbs (
lv0mc01z2o_idx_0 ) ) ; } else { o2y45zbt2m4 . isiqvhsvds = muDoubleScalarSqrt
( lv0mc01z2o_idx_0 ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { hrxu5rhe3af .
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
rtS ) ; } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { for ( vcol = 0 ; vcol < 3
; vcol ++ ) { for ( coffset = 0 ; coffset < 3 ; coffset ++ ) { tmp [ vcol + 3
* coffset ] = ( ( o2y45zbt2m4 . an1hct1vdk [ 3 * vcol + 1 ] * o2y45zbt2m4 .
an1hct1vdk [ 3 * coffset + 1 ] + o2y45zbt2m4 . an1hct1vdk [ 3 * vcol ] *
o2y45zbt2m4 . an1hct1vdk [ 3 * coffset ] ) + o2y45zbt2m4 . an1hct1vdk [ 3 *
vcol + 2 ] * o2y45zbt2m4 . an1hct1vdk [ 3 * coffset + 2 ] ) + hbv5azo3sw .
Bias1_Bias [ 3 * coffset + vcol ] ; } } for ( vcol = 0 ; vcol < 9 ; vcol ++ )
{ iy5b1drj5g [ vcol ] = ( muDoubleScalarAbs ( tmp [ vcol ] ) > hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance ) ; } y_p = iy5b1drj5g [ 0 ] ;
for ( i = 0 ; i < 8 ; i ++ ) { y_p = ( y_p || iy5b1drj5g [ i + 1 ] ) ; }
rtPrevAction = hrxu5rhe3af . j1uacuucpv ; rtAction = - 1 ; if (
muDoubleScalarAbs ( ( ( ( ( ( o2y45zbt2m4 . an1hct1vdk [ 0 ] * o2y45zbt2m4 .
an1hct1vdk [ 4 ] * o2y45zbt2m4 . an1hct1vdk [ 8 ] - o2y45zbt2m4 . an1hct1vdk
[ 0 ] * o2y45zbt2m4 . an1hct1vdk [ 5 ] * o2y45zbt2m4 . an1hct1vdk [ 7 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 1 ] * o2y45zbt2m4 . an1hct1vdk [ 3 ] * o2y45zbt2m4
. an1hct1vdk [ 8 ] ) + o2y45zbt2m4 . an1hct1vdk [ 2 ] * o2y45zbt2m4 .
an1hct1vdk [ 3 ] * o2y45zbt2m4 . an1hct1vdk [ 7 ] ) + o2y45zbt2m4 .
an1hct1vdk [ 1 ] * o2y45zbt2m4 . an1hct1vdk [ 5 ] * o2y45zbt2m4 . an1hct1vdk
[ 6 ] ) - o2y45zbt2m4 . an1hct1vdk [ 2 ] * o2y45zbt2m4 . an1hct1vdk [ 4 ] *
o2y45zbt2m4 . an1hct1vdk [ 6 ] ) + hbv5azo3sw . Bias_Bias ) > hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance ) { rtAction = 0 ; } else if (
y_p ) { rtAction = 1 ; } hrxu5rhe3af . j1uacuucpv = rtAction ; if (
rtPrevAction != rtAction ) { switch ( rtPrevAction ) { case 0 :
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; switch ( hrxu5rhe3af .
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
DirectionCosineMatrixtoQuaternions_action == 2.0 ) { rtAction = 0 ; } else if
( hbv5azo3sw . DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction
= 1 ; } hrxu5rhe3af . obuyxhugh2 = rtAction ; if ( rtPrevAction != rtAction )
{ switch ( rtPrevAction ) { case 0 :
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
== 2.0 ) { rtAction = 0 ; } else if ( hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action == 3.0 ) { rtAction = 1 ; }
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
= 0 ; } srUpdateBC ( hrxu5rhe3af . nw1rjo5a2w ) ; } else if ( o2y45zbt2m4 .
jgyobyjg0x + hbv5azo3sw . Constant_Value < 0.0 ) { hrxu5rhe3af . kg1shmc2lb =
1 ; } break ; case 1 : if ( rtAction != rtPrevAction ) { if ( ssGetTaskTime (
rtS , 0 ) != ssGetTStart ( rtS ) ) {
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
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } lv0mc01z2o_idx_0 = (
( o2y45zbt2m4 . an1hct1vdk [ 4 ] - o2y45zbt2m4 . an1hct1vdk [ 0 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) + hbv5azo3sw . Constant_Value_glskcdmgi0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . ikwlyg3xde != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . ikwlyg3xde
= 0 ; } o2y45zbt2m4 . hi5t21up55 = muDoubleScalarSqrt ( lv0mc01z2o_idx_0 ) ;
hrxu5rhe3af . ejudse0oqw = ( o2y45zbt2m4 . hi5t21up55 != 0.0 ) ; srUpdateBC (
hrxu5rhe3af . a0tdfwofzg ) ; } else if ( lv0mc01z2o_idx_0 < 0.0 ) {
o2y45zbt2m4 . hi5t21up55 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
lv0mc01z2o_idx_0 ) ) ; hrxu5rhe3af . ikwlyg3xde = 1 ; } else { o2y45zbt2m4 .
hi5t21up55 = muDoubleScalarSqrt ( lv0mc01z2o_idx_0 ) ; } break ; case 1 : if
( rtAction != rtPrevAction ) { if ( ssGetTaskTime ( rtS , 0 ) != ssGetTStart
( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } }
lv0mc01z2o_idx_0 = ( ( o2y45zbt2m4 . an1hct1vdk [ 8 ] - o2y45zbt2m4 .
an1hct1vdk [ 0 ] ) - o2y45zbt2m4 . an1hct1vdk [ 4 ] ) + hbv5azo3sw .
Constant_Value_p5m1vauvdr ; if ( ssIsMajorTimeStep ( rtS ) ) { if (
hrxu5rhe3af . gtaj4wmjuq != 0 ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; hrxu5rhe3af . gtaj4wmjuq = 0 ; } o2y45zbt2m4 . mz4bssc4xj =
muDoubleScalarSqrt ( lv0mc01z2o_idx_0 ) ; hrxu5rhe3af . m2abnapxna = (
o2y45zbt2m4 . mz4bssc4xj != 0.0 ) ; srUpdateBC ( hrxu5rhe3af . as5m3dr43z ) ;
} else if ( lv0mc01z2o_idx_0 < 0.0 ) { o2y45zbt2m4 . mz4bssc4xj = -
muDoubleScalarSqrt ( muDoubleScalarAbs ( lv0mc01z2o_idx_0 ) ) ; hrxu5rhe3af .
gtaj4wmjuq = 1 ; } else { o2y45zbt2m4 . mz4bssc4xj = muDoubleScalarSqrt (
lv0mc01z2o_idx_0 ) ; } break ; case 2 : if ( rtAction != rtPrevAction ) { if
( ssGetTaskTime ( rtS , 0 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } lv0mc01z2o_idx_0 = (
( o2y45zbt2m4 . an1hct1vdk [ 0 ] - o2y45zbt2m4 . an1hct1vdk [ 4 ] ) -
o2y45zbt2m4 . an1hct1vdk [ 8 ] ) + hbv5azo3sw . Constant_Value_m2h11to3lk ;
if ( ssIsMajorTimeStep ( rtS ) ) { if ( hrxu5rhe3af . jxtww5tjxt != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; hrxu5rhe3af . jxtww5tjxt
= 0 ; } o2y45zbt2m4 . b51zos5ddd = muDoubleScalarSqrt ( lv0mc01z2o_idx_0 ) ;
hrxu5rhe3af . cjwjqcd1zs = ( o2y45zbt2m4 . b51zos5ddd != 0.0 ) ; srUpdateBC (
hrxu5rhe3af . fimtx0wf43 ) ; } else if ( lv0mc01z2o_idx_0 < 0.0 ) {
o2y45zbt2m4 . b51zos5ddd = - muDoubleScalarSqrt ( muDoubleScalarAbs (
lv0mc01z2o_idx_0 ) ) ; hrxu5rhe3af . jxtww5tjxt = 1 ; } else { o2y45zbt2m4 .
b51zos5ddd = muDoubleScalarSqrt ( lv0mc01z2o_idx_0 ) ; } break ; } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( hrxu5rhe3af . h5fod2fj2q ) ; }
break ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( vcol = 0 ; vcol <= 14
; vcol += 2 ) { tmp_j = _mm_loadu_pd ( & hrxu5rhe3af . buggjk4l1n [ vcol ] )
; tmp_j = _mm_mul_pd ( _mm_set1_pd ( 0.002 ) , tmp_j ) ; _mm_storeu_pd ( & X2
[ vcol ] , tmp_j ) ; _mm_storeu_pd ( & X2 [ vcol + 16 ] , _mm_mul_pd ( tmp_j
, _mm_set1_pd ( - 1.0 ) ) ) ; } for ( i = 0 ; i < 8 ; i ++ ) { Y2 [ 0 ] = 0.0
; Y2 [ 4 ] = - myqx15ehea_idx_0 ; Y2 [ 8 ] = - myqx15ehea_idx_1 ; Y2 [ 12 ] =
- myqx15ehea_idx_2 ; Y2 [ 1 ] = 0.0 ; Y2 [ 5 ] = 0.0 ; Y2 [ 9 ] =
myqx15ehea_idx_2 ; Y2 [ 13 ] = - myqx15ehea_idx_1 ; Y2 [ 2 ] = 0.0 ; Y2 [ 6 ]
= 0.0 ; Y2 [ 10 ] = 0.0 ; Y2 [ 14 ] = myqx15ehea_idx_0 ; Y2 [ 3 ] = 0.0 ; X2
[ i << 2 ] += hrxu5rhe3af . j3ergpk3vu [ 0 ] ; Y2 [ 7 ] = 0.0 ; X2 [ ( i << 2
) + 1 ] += hrxu5rhe3af . j3ergpk3vu [ 1 ] ; Y2 [ 11 ] = 0.0 ; X2 [ ( i << 2 )
+ 2 ] += hrxu5rhe3af . j3ergpk3vu [ 2 ] ; Y2 [ 15 ] = 0.0 ; X2 [ ( i << 2 ) +
3 ] += hrxu5rhe3af . j3ergpk3vu [ 3 ] ; for ( vcol = 0 ; vcol < 4 ; vcol ++ )
{ Y2_e [ vcol << 2 ] = Y2 [ vcol << 2 ] - Y2 [ vcol ] ; Y2_e [ ( vcol << 2 )
+ 1 ] = Y2 [ ( vcol << 2 ) + 1 ] - Y2 [ vcol + 4 ] ; Y2_e [ ( vcol << 2 ) + 2
] = Y2 [ ( vcol << 2 ) + 2 ] - Y2 [ vcol + 8 ] ; Y2_e [ ( vcol << 2 ) + 3 ] =
Y2 [ ( vcol << 2 ) + 3 ] - Y2 [ vcol + 12 ] ; } memcpy ( & Y2 [ 0 ] , & Y2_e
[ 0 ] , sizeof ( real_T ) << 4U ) ; for ( vcol = 0 ; vcol <= 2 ; vcol += 2 )
{ tmp_j = _mm_loadu_pd ( & Y2 [ vcol ] ) ; tmp_g = _mm_loadu_pd ( & Y2 [ vcol
+ 4 ] ) ; tmp_m = _mm_loadu_pd ( & Y2 [ vcol + 8 ] ) ; tmp_e = _mm_loadu_pd (
& Y2 [ vcol + 12 ] ) ; tmp_i = _mm_loadu_pd ( & X2 [ ( i << 2 ) + vcol ] ) ;
_mm_storeu_pd ( & afgi1z3nug [ vcol ] , _mm_add_pd ( tmp_i , _mm_mul_pd (
_mm_set1_pd ( 0.01 ) , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_e ,
_mm_set1_pd ( 0.5 ) ) , _mm_set1_pd ( X2 [ ( i << 2 ) + 3 ] ) ) , _mm_add_pd
( _mm_mul_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( 0.5 ) ) , _mm_set1_pd ( X2
[ ( i << 2 ) + 2 ] ) ) , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_g ,
_mm_set1_pd ( 0.5 ) ) , _mm_set1_pd ( X2 [ ( i << 2 ) + 1 ] ) ) , _mm_add_pd
( _mm_mul_pd ( _mm_mul_pd ( _mm_set1_pd ( 0.5 ) , tmp_j ) , _mm_set1_pd ( X2
[ i << 2 ] ) ) , _mm_set1_pd ( 0.0 ) ) ) ) ) ) ) ) ; } lv0mc01z2o_idx_0 =
xnrm2_sFTqT85T ( afgi1z3nug ) ; Y2_p [ i << 2 ] = afgi1z3nug [ 0 ] /
lv0mc01z2o_idx_0 ; Y2_p [ ( i << 2 ) + 1 ] = afgi1z3nug [ 1 ] /
lv0mc01z2o_idx_0 ; Y2_p [ ( i << 2 ) + 2 ] = afgi1z3nug [ 2 ] /
lv0mc01z2o_idx_0 ; Y2_p [ ( i << 2 ) + 3 ] = afgi1z3nug [ 3 ] /
lv0mc01z2o_idx_0 ; } Y2 [ 0 ] = 0.0 ; Y2 [ 4 ] = - myqx15ehea_idx_0 ; Y2 [ 8
] = - myqx15ehea_idx_1 ; Y2 [ 12 ] = - myqx15ehea_idx_2 ; Y2 [ 1 ] = 0.0 ; Y2
[ 5 ] = 0.0 ; Y2 [ 9 ] = myqx15ehea_idx_2 ; Y2 [ 13 ] = - myqx15ehea_idx_1 ;
Y2 [ 2 ] = 0.0 ; Y2 [ 6 ] = 0.0 ; Y2 [ 10 ] = 0.0 ; Y2 [ 14 ] =
myqx15ehea_idx_0 ; Y2 [ 3 ] = 0.0 ; Y2 [ 7 ] = 0.0 ; Y2 [ 11 ] = 0.0 ; Y2 [
15 ] = 0.0 ; for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { Y2_e [ vcol << 2 ] = Y2
[ vcol << 2 ] - Y2 [ vcol ] ; Y2_e [ ( vcol << 2 ) + 1 ] = Y2 [ ( vcol << 2 )
+ 1 ] - Y2 [ vcol + 4 ] ; Y2_e [ ( vcol << 2 ) + 2 ] = Y2 [ ( vcol << 2 ) + 2
] - Y2 [ vcol + 8 ] ; Y2_e [ ( vcol << 2 ) + 3 ] = Y2 [ ( vcol << 2 ) + 3 ] -
Y2 [ vcol + 12 ] ; } memcpy ( & Y2 [ 0 ] , & Y2_e [ 0 ] , sizeof ( real_T )
<< 4U ) ; for ( vcol = 0 ; vcol <= 2 ; vcol += 2 ) { tmp_j = _mm_loadu_pd ( &
Y2 [ vcol ] ) ; tmp_g = _mm_loadu_pd ( & Y2 [ vcol + 4 ] ) ; tmp_m =
_mm_loadu_pd ( & Y2 [ vcol + 8 ] ) ; tmp_e = _mm_loadu_pd ( & Y2 [ vcol + 12
] ) ; tmp_i = _mm_loadu_pd ( & hrxu5rhe3af . j3ergpk3vu [ vcol ] ) ;
_mm_storeu_pd ( & afgi1z3nug [ vcol ] , _mm_add_pd ( _mm_mul_pd ( _mm_set1_pd
( 0.01 ) , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( tmp_e , _mm_set1_pd ( 0.5 )
) , _mm_set1_pd ( hrxu5rhe3af . j3ergpk3vu [ 3 ] ) ) , _mm_add_pd (
_mm_mul_pd ( _mm_mul_pd ( tmp_m , _mm_set1_pd ( 0.5 ) ) , _mm_set1_pd (
hrxu5rhe3af . j3ergpk3vu [ 2 ] ) ) , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd (
tmp_g , _mm_set1_pd ( 0.5 ) ) , _mm_set1_pd ( hrxu5rhe3af . j3ergpk3vu [ 1 ]
) ) , _mm_add_pd ( _mm_mul_pd ( _mm_mul_pd ( _mm_set1_pd ( 0.5 ) , tmp_j ) ,
_mm_set1_pd ( hrxu5rhe3af . j3ergpk3vu [ 0 ] ) ) , _mm_set1_pd ( 0.0 ) ) ) )
) ) , tmp_i ) ) ; } lv0mc01z2o_idx_0 = xnrm2_sFTqT85T ( afgi1z3nug ) ;
afgi1z3nug [ 0 ] /= lv0mc01z2o_idx_0 ; afgi1z3nug [ 1 ] /= lv0mc01z2o_idx_0 ;
afgi1z3nug [ 2 ] /= lv0mc01z2o_idx_0 ; afgi1z3nug [ 3 ] /= lv0mc01z2o_idx_0 ;
for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { b_I [ i_p ] = hrxu5rhe3af . j3ergpk3vu [
i_p ] ; } UTMeanCovSqrt_tqdDaaPa ( afgi1z3nug , Y2_p , b_I , X2 , hrxu5rhe3af
. j3ergpk3vu , Y2_e , Y2 ) ; memset ( & Y2 [ 0 ] , 0 , sizeof ( real_T ) <<
4U ) ; Y2 [ 0 ] = 1.0 ; Y2 [ 5 ] = 1.0 ; Y2 [ 10 ] = 1.0 ; Y2 [ 15 ] = 1.0 ;
for ( ar = 0 ; ar < 4 ; ar ++ ) { coffset = ar << 2 ; for ( vcol = 0 ; vcol <
4 ; vcol ++ ) { aoffset = vcol << 2 ; y_e [ coffset + vcol ] = ( ( Y2_e [
aoffset + 1 ] * Y2 [ ar + 4 ] + Y2_e [ aoffset ] * Y2 [ ar ] ) + Y2_e [
aoffset + 2 ] * Y2 [ ar + 8 ] ) + Y2_e [ aoffset + 3 ] * Y2 [ ar + 12 ] ; } }
for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { Y2_p [ vcol << 3 ] = y_e [ vcol << 2
] ; Y2_p [ ( vcol << 3 ) + 4 ] = hbv5azo3sw . Q_Value [ vcol ] ; Y2_p [ (
vcol << 3 ) + 1 ] = y_e [ ( vcol << 2 ) + 1 ] ; Y2_p [ ( vcol << 3 ) + 5 ] =
hbv5azo3sw . Q_Value [ vcol + 4 ] ; Y2_p [ ( vcol << 3 ) + 2 ] = y_e [ ( vcol
<< 2 ) + 2 ] ; Y2_p [ ( vcol << 3 ) + 6 ] = hbv5azo3sw . Q_Value [ vcol + 8 ]
; Y2_p [ ( vcol << 3 ) + 3 ] = y_e [ ( vcol << 2 ) + 3 ] ; Y2_p [ ( vcol << 3
) + 7 ] = hbv5azo3sw . Q_Value [ vcol + 12 ] ; } qr_4g1gr4gZ ( Y2_p , X2 , Y2
) ; for ( vcol = 0 ; vcol < 4 ; vcol ++ ) { hrxu5rhe3af . buggjk4l1n [ vcol
<< 2 ] = Y2 [ vcol ] ; hrxu5rhe3af . buggjk4l1n [ ( vcol << 2 ) + 1 ] = Y2 [
vcol + 4 ] ; hrxu5rhe3af . buggjk4l1n [ ( vcol << 2 ) + 2 ] = Y2 [ vcol + 8 ]
; hrxu5rhe3af . buggjk4l1n [ ( vcol << 2 ) + 3 ] = Y2 [ vcol + 12 ] ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID13 ( int_T tid ) { real_T
bj3w2pxex3_idx_1 ; real_T bj3w2pxex3_idx_2 ; real_T chygdxgike ; real_T
ivzcgo0u3v_idx_1 ; real_T ivzcgo0u3v_idx_2 ; real_T ix5sio1awm ; real_T
jdgqlncavi ; real_T jnvxrzr0ue ; real_T ljyggpl3ml ; o2y45zbt2m4 . amepcbkksg
[ 0 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 0 ] ; o2y45zbt2m4 .
fi1wde2gl2 [ 0 ] = hbv5azo3sw . Constant3_Value [ 0 ] ; o2y45zbt2m4 .
amepcbkksg [ 1 ] = hbv5azo3sw . Constant2_Value_ialq4qchdp [ 1 ] ;
o2y45zbt2m4 . fi1wde2gl2 [ 1 ] = hbv5azo3sw . Constant3_Value [ 1 ] ;
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
; } void MdlUpdate ( int_T tid ) { d3ndefizfv * _rtXAbsTol ; real_T ( * lastU
) [ 4 ] ; real_T dc ; uint32_T numTicksToNextSampleHit ; uint32_T
totalTicksInPeriod ; SimStruct * S ; void * diag ; _rtXAbsTol = ( (
d3ndefizfv * ) ssGetAbsTolVector ( rtS ) ) ; _rtXAbsTol -> ezm2ooaqjl [ 0 ] =
hbv5azo3sw . Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ezm2ooaqjl [ 1 ] =
hbv5azo3sw . Integrator1_AbsoluteTolerance ; _rtXAbsTol -> ezm2ooaqjl [ 2 ] =
hbv5azo3sw . Integrator1_AbsoluteTolerance ; hrxu5rhe3af . irqzxzls3s = 0 ;
hrxu5rhe3af . btkpsszf3k = 0 ; hrxu5rhe3af . febtg0cpg5 = 0 ; if (
hrxu5rhe3af . lwlvgtt2ve == ( rtInf ) ) { hrxu5rhe3af . lwlvgtt2ve = ssGetT (
rtS ) ; lastU = & hrxu5rhe3af . fcn1wq25nc ; } else if ( hrxu5rhe3af .
ajsna343fp == ( rtInf ) ) { hrxu5rhe3af . ajsna343fp = ssGetT ( rtS ) ; lastU
= & hrxu5rhe3af . eoflwqidz3 ; } else if ( hrxu5rhe3af . lwlvgtt2ve <
hrxu5rhe3af . ajsna343fp ) { hrxu5rhe3af . lwlvgtt2ve = ssGetT ( rtS ) ;
lastU = & hrxu5rhe3af . fcn1wq25nc ; } else { hrxu5rhe3af . ajsna343fp =
ssGetT ( rtS ) ; lastU = & hrxu5rhe3af . eoflwqidz3 ; } ( * lastU ) [ 0 ] =
o2y45zbt2m4 . kncngnrvsh [ 0 ] ; ( * lastU ) [ 1 ] = o2y45zbt2m4 . kncngnrvsh
[ 1 ] ; ( * lastU ) [ 2 ] = o2y45zbt2m4 . kncngnrvsh [ 2 ] ; ( * lastU ) [ 3
] = o2y45zbt2m4 . kncngnrvsh [ 3 ] ; if ( ssIsSampleHit ( rtS , 10 , 0 ) ) {
if ( hrxu5rhe3af . e2pe11pwxn ) { dc = o2y45zbt2m4 . op4p3vooky [ 0 ] ; if (
( hbv5azo3sw . PWM3_Period < 0.2 ) || ( muDoubleScalarIsNaN ( hbv5azo3sw .
PWM3_Period ) || ( hbv5azo3sw . PWM3_Period == ( rtInf ) ) ) ) { S = rtS ;
diag = CreateDiagnosticAsVoidPtr (
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
= true ; } } hrxu5rhe3af . ckit2etwje = 0 ; _rtXAbsTol -> li1obxdvy3 [ 0 ] =
hbv5azo3sw . Integrator_AbsoluteTolerance ; _rtXAbsTol -> li1obxdvy3 [ 1 ] =
hbv5azo3sw . Integrator_AbsoluteTolerance ; _rtXAbsTol -> li1obxdvy3 [ 2 ] =
hbv5azo3sw . Integrator_AbsoluteTolerance ; hrxu5rhe3af . g0uzej5lf1 = 0 ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID13 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { hgblgktduh *
_rtXdot ; _rtXdot = ( ( hgblgktduh * ) ssGetdX ( rtS ) ) ; _rtXdot ->
ezm2ooaqjl [ 0 ] = o2y45zbt2m4 . hnvlhc15na [ 0 ] ; _rtXdot -> ezm2ooaqjl [ 1
] = o2y45zbt2m4 . hnvlhc15na [ 1 ] ; _rtXdot -> ezm2ooaqjl [ 2 ] =
o2y45zbt2m4 . hnvlhc15na [ 2 ] ; _rtXdot -> bcrrky3g2k [ 0 ] = o2y45zbt2m4 .
bwu3hh5pg3 [ 0 ] ; _rtXdot -> bcrrky3g2k [ 1 ] = o2y45zbt2m4 . bwu3hh5pg3 [ 1
] ; _rtXdot -> bcrrky3g2k [ 2 ] = o2y45zbt2m4 . bwu3hh5pg3 [ 2 ] ; _rtXdot ->
bcrrky3g2k [ 3 ] = o2y45zbt2m4 . bwu3hh5pg3 [ 3 ] ; _rtXdot -> cjfebnqw1p =
o2y45zbt2m4 . iunb01rvwp ; _rtXdot -> kbqjtzizsx [ 0 ] = o2y45zbt2m4 .
jg5xwtwjpe [ 0 ] ; _rtXdot -> li1obxdvy3 [ 0 ] = o2y45zbt2m4 . gbu5abs2sz [ 0
] ; _rtXdot -> kbqjtzizsx [ 1 ] = o2y45zbt2m4 . jg5xwtwjpe [ 1 ] ; _rtXdot ->
li1obxdvy3 [ 1 ] = o2y45zbt2m4 . gbu5abs2sz [ 1 ] ; _rtXdot -> kbqjtzizsx [ 2
] = o2y45zbt2m4 . jg5xwtwjpe [ 2 ] ; _rtXdot -> li1obxdvy3 [ 2 ] =
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
) , sizeof ( o2y45zbt2m4 ) ) ; { static const char * rtdwDataFieldNames [ 146
] = { "hrxu5rhe3af.p11kqkd5tq" , "hrxu5rhe3af.h1ivipllz5" ,
"hrxu5rhe3af.lwlvgtt2ve" , "hrxu5rhe3af.fcn1wq25nc" ,
"hrxu5rhe3af.ajsna343fp" , "hrxu5rhe3af.eoflwqidz3" ,
"hrxu5rhe3af.epbwbvrls5" , "hrxu5rhe3af.fytmukko2d" ,
"hrxu5rhe3af.curihjwvdq" , "hrxu5rhe3af.oumjhalsqc" ,
"hrxu5rhe3af.o2yvavvn5c" , "hrxu5rhe3af.hz2n5lmwzt" ,
"hrxu5rhe3af.iwulztso32" , "hrxu5rhe3af.buggjk4l1n" ,
"hrxu5rhe3af.j3ergpk3vu" , "hrxu5rhe3af.amd2k325eq" ,
"hrxu5rhe3af.ocwejjhsae" , "hrxu5rhe3af.lo1lp4gtvt" ,
"hrxu5rhe3af.cqi0nadh0g" , "hrxu5rhe3af.popvcsddq3" ,
"hrxu5rhe3af.e0e33jihoi" , "hrxu5rhe3af.bkcg3g1zoi" ,
"hrxu5rhe3af.cwsd2g5w2m" , "hrxu5rhe3af.ebpr404rrn" ,
"hrxu5rhe3af.pbvxmucjj5" , "hrxu5rhe3af.h31khffg0k" ,
"hrxu5rhe3af.alynay3xx0" , "hrxu5rhe3af.atmgtfljnh" ,
"hrxu5rhe3af.n10hslmo2a" , "hrxu5rhe3af.pa2kyvt1uy" ,
"hrxu5rhe3af.j13dkj5h0s" , "hrxu5rhe3af.p3xkfovqki" ,
"hrxu5rhe3af.k40rhthviy" , "hrxu5rhe3af.d1wjrwas1u" ,
"hrxu5rhe3af.jjpbiyjnrh" , "hrxu5rhe3af.cmfzrxdc11" ,
"hrxu5rhe3af.impwbrb5ul" , "hrxu5rhe3af.ivdqhywypm" ,
"hrxu5rhe3af.ck30ytigtq" , "hrxu5rhe3af.nydzqlwwnn" ,
"hrxu5rhe3af.bdotsga2iv" , "hrxu5rhe3af.djim5bpjvv" ,
"hrxu5rhe3af.lqkanthoxg" , "hrxu5rhe3af.irqzxzls3s" ,
"hrxu5rhe3af.btkpsszf3k" , "hrxu5rhe3af.febtg0cpg5" ,
"hrxu5rhe3af.ckit2etwje" , "hrxu5rhe3af.g0uzej5lf1" ,
"hrxu5rhe3af.fdyoeqkdqi" , "hrxu5rhe3af.c3m4fwdfd0" ,
"hrxu5rhe3af.kgzb050drs" , "hrxu5rhe3af.o3hynk2drm" ,
"hrxu5rhe3af.pm5qqx3zuz" , "hrxu5rhe3af.omdgfehj41" ,
"hrxu5rhe3af.hsphg0gng2" , "hrxu5rhe3af.mdstjcyjyx" ,
"hrxu5rhe3af.ojltdhe2we" , "hrxu5rhe3af.iwklra2msj" ,
"hrxu5rhe3af.mt3gx422x1" , "hrxu5rhe3af.pug0coupbp" ,
"hrxu5rhe3af.jeg35werh5" , "hrxu5rhe3af.kz1j0tnmva" ,
"hrxu5rhe3af.lq5ek0jlzd" , "hrxu5rhe3af.dnqubg5s4k" ,
"hrxu5rhe3af.bze1flsb15" , "hrxu5rhe3af.pidbwsidci" ,
"hrxu5rhe3af.ji1vknz2dr" , "hrxu5rhe3af.gltmjlakux" ,
"hrxu5rhe3af.pwifaixjxb" , "hrxu5rhe3af.haxpv4vq51" ,
"hrxu5rhe3af.hxjxms0byf" , "hrxu5rhe3af.jij01p0qtw" ,
"hrxu5rhe3af.ihprlm0zdr" , "hrxu5rhe3af.jgquwrgfhd" ,
"hrxu5rhe3af.o2i4021xwh" , "hrxu5rhe3af.iqs2nrdyqs" ,
"hrxu5rhe3af.p4n3550tai" , "hrxu5rhe3af.nqcixj2cfc" ,
"hrxu5rhe3af.gcz34svd4r" , "hrxu5rhe3af.anszycztem" ,
"hrxu5rhe3af.ane43mgfgs" , "hrxu5rhe3af.hkxlm4qdro" ,
"hrxu5rhe3af.fnu1tvdbyx" , "hrxu5rhe3af.fq3jja1aol" ,
"hrxu5rhe3af.nbmuo2yzhf" , "hrxu5rhe3af.ev5en1vf5z" ,
"hrxu5rhe3af.btkemo1frv" , "hrxu5rhe3af.cag24nmzzp" ,
"hrxu5rhe3af.lptvxysd1c" , "hrxu5rhe3af.mt3v1tg0wr" ,
"hrxu5rhe3af.apfxbvz3qg" , "hrxu5rhe3af.izrtkkf042" ,
"hrxu5rhe3af.noecaey35j" , "hrxu5rhe3af.jkbsaxmqju" ,
"hrxu5rhe3af.fnnqkeqpmg" , "hrxu5rhe3af.j1uacuucpv" ,
"hrxu5rhe3af.cbsmbddbag" , "hrxu5rhe3af.bnzh2jzuy5" ,
"hrxu5rhe3af.jkjkrdx1hk" , "hrxu5rhe3af.o0pf4uvatt" ,
"hrxu5rhe3af.pmgcir2p13" , "hrxu5rhe3af.obuyxhugh2" ,
"hrxu5rhe3af.fpx2qirisn" , "hrxu5rhe3af.pwomc1kiz3" ,
"hrxu5rhe3af.h5fod2fj2q" , "hrxu5rhe3af.hnbwguuonj" ,
"hrxu5rhe3af.fimtx0wf43" , "hrxu5rhe3af.jxtww5tjxt" ,
"hrxu5rhe3af.as5m3dr43z" , "hrxu5rhe3af.gtaj4wmjuq" ,
"hrxu5rhe3af.a0tdfwofzg" , "hrxu5rhe3af.ikwlyg3xde" ,
"hrxu5rhe3af.nw1rjo5a2w" , "hrxu5rhe3af.kg1shmc2lb" ,
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
"hrxu5rhe3af.ejudse0oqw" , "hrxu5rhe3af.i41btnckgk" , } ; mxArray * rtdwData
= mxCreateStructMatrix ( 1 , 1 , 146 , rtdwDataFieldNames ) ; { mxArray *
varData = mr_MagneticFieldInPolarCoords_GetDWork ( & ( hrxu5rhe3af .
p11kqkd5tq ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; }
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) & (
hrxu5rhe3af . h1ivipllz5 ) , sizeof ( hrxu5rhe3af . h1ivipllz5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & (
hrxu5rhe3af . lwlvgtt2ve ) , sizeof ( hrxu5rhe3af . lwlvgtt2ve ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & (
hrxu5rhe3af . fcn1wq25nc ) , sizeof ( hrxu5rhe3af . fcn1wq25nc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
hrxu5rhe3af . ajsna343fp ) , sizeof ( hrxu5rhe3af . ajsna343fp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
hrxu5rhe3af . eoflwqidz3 ) , sizeof ( hrxu5rhe3af . eoflwqidz3 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
hrxu5rhe3af . epbwbvrls5 ) , sizeof ( hrxu5rhe3af . epbwbvrls5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
hrxu5rhe3af . fytmukko2d ) , sizeof ( hrxu5rhe3af . fytmukko2d ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
hrxu5rhe3af . curihjwvdq ) , sizeof ( hrxu5rhe3af . curihjwvdq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
hrxu5rhe3af . oumjhalsqc ) , sizeof ( hrxu5rhe3af . oumjhalsqc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
hrxu5rhe3af . o2yvavvn5c ) , sizeof ( hrxu5rhe3af . o2yvavvn5c ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
hrxu5rhe3af . hz2n5lmwzt ) , sizeof ( hrxu5rhe3af . hz2n5lmwzt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
hrxu5rhe3af . iwulztso32 ) , sizeof ( hrxu5rhe3af . iwulztso32 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
hrxu5rhe3af . buggjk4l1n ) , sizeof ( hrxu5rhe3af . buggjk4l1n ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
hrxu5rhe3af . j3ergpk3vu ) , sizeof ( hrxu5rhe3af . j3ergpk3vu ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
hrxu5rhe3af . amd2k325eq ) , sizeof ( hrxu5rhe3af . amd2k325eq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
hrxu5rhe3af . ocwejjhsae ) , sizeof ( hrxu5rhe3af . ocwejjhsae ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
hrxu5rhe3af . lo1lp4gtvt ) , sizeof ( hrxu5rhe3af . lo1lp4gtvt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
hrxu5rhe3af . cqi0nadh0g ) , sizeof ( hrxu5rhe3af . cqi0nadh0g ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
hrxu5rhe3af . popvcsddq3 ) , sizeof ( hrxu5rhe3af . popvcsddq3 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
hrxu5rhe3af . e0e33jihoi ) , sizeof ( hrxu5rhe3af . e0e33jihoi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
hrxu5rhe3af . bkcg3g1zoi ) , sizeof ( hrxu5rhe3af . bkcg3g1zoi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
hrxu5rhe3af . cwsd2g5w2m ) , sizeof ( hrxu5rhe3af . cwsd2g5w2m ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
hrxu5rhe3af . ebpr404rrn ) , sizeof ( hrxu5rhe3af . ebpr404rrn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
hrxu5rhe3af . pbvxmucjj5 ) , sizeof ( hrxu5rhe3af . pbvxmucjj5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
hrxu5rhe3af . h31khffg0k ) , sizeof ( hrxu5rhe3af . h31khffg0k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
hrxu5rhe3af . alynay3xx0 ) , sizeof ( hrxu5rhe3af . alynay3xx0 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
hrxu5rhe3af . atmgtfljnh ) , sizeof ( hrxu5rhe3af . atmgtfljnh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
hrxu5rhe3af . n10hslmo2a ) , sizeof ( hrxu5rhe3af . n10hslmo2a ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
hrxu5rhe3af . pa2kyvt1uy ) , sizeof ( hrxu5rhe3af . pa2kyvt1uy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
hrxu5rhe3af . j13dkj5h0s ) , sizeof ( hrxu5rhe3af . j13dkj5h0s ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
hrxu5rhe3af . p3xkfovqki ) , sizeof ( hrxu5rhe3af . p3xkfovqki ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
hrxu5rhe3af . k40rhthviy ) , sizeof ( hrxu5rhe3af . k40rhthviy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
hrxu5rhe3af . d1wjrwas1u ) , sizeof ( hrxu5rhe3af . d1wjrwas1u ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
hrxu5rhe3af . jjpbiyjnrh ) , sizeof ( hrxu5rhe3af . jjpbiyjnrh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
hrxu5rhe3af . cmfzrxdc11 ) , sizeof ( hrxu5rhe3af . cmfzrxdc11 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
hrxu5rhe3af . impwbrb5ul ) , sizeof ( hrxu5rhe3af . impwbrb5ul ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
hrxu5rhe3af . ivdqhywypm ) , sizeof ( hrxu5rhe3af . ivdqhywypm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
hrxu5rhe3af . ck30ytigtq ) , sizeof ( hrxu5rhe3af . ck30ytigtq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
hrxu5rhe3af . nydzqlwwnn ) , sizeof ( hrxu5rhe3af . nydzqlwwnn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
hrxu5rhe3af . bdotsga2iv ) , sizeof ( hrxu5rhe3af . bdotsga2iv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
hrxu5rhe3af . djim5bpjvv ) , sizeof ( hrxu5rhe3af . djim5bpjvv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
hrxu5rhe3af . lqkanthoxg ) , sizeof ( hrxu5rhe3af . lqkanthoxg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
hrxu5rhe3af . irqzxzls3s ) , sizeof ( hrxu5rhe3af . irqzxzls3s ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
hrxu5rhe3af . btkpsszf3k ) , sizeof ( hrxu5rhe3af . btkpsszf3k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
hrxu5rhe3af . febtg0cpg5 ) , sizeof ( hrxu5rhe3af . febtg0cpg5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
hrxu5rhe3af . ckit2etwje ) , sizeof ( hrxu5rhe3af . ckit2etwje ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
hrxu5rhe3af . g0uzej5lf1 ) , sizeof ( hrxu5rhe3af . g0uzej5lf1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
hrxu5rhe3af . fdyoeqkdqi ) , sizeof ( hrxu5rhe3af . fdyoeqkdqi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
hrxu5rhe3af . c3m4fwdfd0 ) , sizeof ( hrxu5rhe3af . c3m4fwdfd0 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
hrxu5rhe3af . kgzb050drs ) , sizeof ( hrxu5rhe3af . kgzb050drs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
hrxu5rhe3af . o3hynk2drm ) , sizeof ( hrxu5rhe3af . o3hynk2drm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
hrxu5rhe3af . pm5qqx3zuz ) , sizeof ( hrxu5rhe3af . pm5qqx3zuz ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
hrxu5rhe3af . omdgfehj41 ) , sizeof ( hrxu5rhe3af . omdgfehj41 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
hrxu5rhe3af . hsphg0gng2 ) , sizeof ( hrxu5rhe3af . hsphg0gng2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
hrxu5rhe3af . mdstjcyjyx ) , sizeof ( hrxu5rhe3af . mdstjcyjyx ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
hrxu5rhe3af . ojltdhe2we ) , sizeof ( hrxu5rhe3af . ojltdhe2we ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
hrxu5rhe3af . iwklra2msj ) , sizeof ( hrxu5rhe3af . iwklra2msj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
hrxu5rhe3af . mt3gx422x1 ) , sizeof ( hrxu5rhe3af . mt3gx422x1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
hrxu5rhe3af . pug0coupbp ) , sizeof ( hrxu5rhe3af . pug0coupbp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
hrxu5rhe3af . jeg35werh5 ) , sizeof ( hrxu5rhe3af . jeg35werh5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
hrxu5rhe3af . kz1j0tnmva ) , sizeof ( hrxu5rhe3af . kz1j0tnmva ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
hrxu5rhe3af . lq5ek0jlzd ) , sizeof ( hrxu5rhe3af . lq5ek0jlzd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
hrxu5rhe3af . dnqubg5s4k ) , sizeof ( hrxu5rhe3af . dnqubg5s4k ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
hrxu5rhe3af . bze1flsb15 ) , sizeof ( hrxu5rhe3af . bze1flsb15 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
hrxu5rhe3af . pidbwsidci ) , sizeof ( hrxu5rhe3af . pidbwsidci ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
hrxu5rhe3af . ji1vknz2dr ) , sizeof ( hrxu5rhe3af . ji1vknz2dr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
hrxu5rhe3af . gltmjlakux ) , sizeof ( hrxu5rhe3af . gltmjlakux ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & (
hrxu5rhe3af . pwifaixjxb ) , sizeof ( hrxu5rhe3af . pwifaixjxb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & (
hrxu5rhe3af . haxpv4vq51 ) , sizeof ( hrxu5rhe3af . haxpv4vq51 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & (
hrxu5rhe3af . hxjxms0byf ) , sizeof ( hrxu5rhe3af . hxjxms0byf ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void * ) & (
hrxu5rhe3af . jij01p0qtw ) , sizeof ( hrxu5rhe3af . jij01p0qtw ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void * ) & (
hrxu5rhe3af . ihprlm0zdr ) , sizeof ( hrxu5rhe3af . ihprlm0zdr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void * ) & (
hrxu5rhe3af . jgquwrgfhd ) , sizeof ( hrxu5rhe3af . jgquwrgfhd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void * ) & (
hrxu5rhe3af . o2i4021xwh ) , sizeof ( hrxu5rhe3af . o2i4021xwh ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void * ) & (
hrxu5rhe3af . iqs2nrdyqs ) , sizeof ( hrxu5rhe3af . iqs2nrdyqs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void * ) & (
hrxu5rhe3af . p4n3550tai ) , sizeof ( hrxu5rhe3af . p4n3550tai ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void * ) & (
hrxu5rhe3af . nqcixj2cfc ) , sizeof ( hrxu5rhe3af . nqcixj2cfc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void * ) & (
hrxu5rhe3af . gcz34svd4r ) , sizeof ( hrxu5rhe3af . gcz34svd4r ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void * ) & (
hrxu5rhe3af . anszycztem ) , sizeof ( hrxu5rhe3af . anszycztem ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void * ) & (
hrxu5rhe3af . ane43mgfgs ) , sizeof ( hrxu5rhe3af . ane43mgfgs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void * ) & (
hrxu5rhe3af . hkxlm4qdro ) , sizeof ( hrxu5rhe3af . hkxlm4qdro ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void * ) & (
hrxu5rhe3af . fnu1tvdbyx ) , sizeof ( hrxu5rhe3af . fnu1tvdbyx ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void * ) & (
hrxu5rhe3af . fq3jja1aol ) , sizeof ( hrxu5rhe3af . fq3jja1aol ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void * ) & (
hrxu5rhe3af . nbmuo2yzhf ) , sizeof ( hrxu5rhe3af . nbmuo2yzhf ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const void * ) & (
hrxu5rhe3af . ev5en1vf5z ) , sizeof ( hrxu5rhe3af . ev5en1vf5z ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const void * ) & (
hrxu5rhe3af . btkemo1frv ) , sizeof ( hrxu5rhe3af . btkemo1frv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const void * ) & (
hrxu5rhe3af . cag24nmzzp ) , sizeof ( hrxu5rhe3af . cag24nmzzp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const void * ) & (
hrxu5rhe3af . lptvxysd1c ) , sizeof ( hrxu5rhe3af . lptvxysd1c ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const void * ) & (
hrxu5rhe3af . mt3v1tg0wr ) , sizeof ( hrxu5rhe3af . mt3v1tg0wr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const void * ) & (
hrxu5rhe3af . apfxbvz3qg ) , sizeof ( hrxu5rhe3af . apfxbvz3qg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const void * ) & (
hrxu5rhe3af . izrtkkf042 ) , sizeof ( hrxu5rhe3af . izrtkkf042 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 92 , ( const void * ) & (
hrxu5rhe3af . noecaey35j ) , sizeof ( hrxu5rhe3af . noecaey35j ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 93 , ( const void * ) & (
hrxu5rhe3af . jkbsaxmqju ) , sizeof ( hrxu5rhe3af . jkbsaxmqju ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 94 , ( const void * ) & (
hrxu5rhe3af . fnnqkeqpmg ) , sizeof ( hrxu5rhe3af . fnnqkeqpmg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 95 , ( const void * ) & (
hrxu5rhe3af . j1uacuucpv ) , sizeof ( hrxu5rhe3af . j1uacuucpv ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 96 , ( const void * ) & (
hrxu5rhe3af . cbsmbddbag ) , sizeof ( hrxu5rhe3af . cbsmbddbag ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 97 , ( const void * ) & (
hrxu5rhe3af . bnzh2jzuy5 ) , sizeof ( hrxu5rhe3af . bnzh2jzuy5 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 98 , ( const void * ) & (
hrxu5rhe3af . jkjkrdx1hk ) , sizeof ( hrxu5rhe3af . jkjkrdx1hk ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 99 , ( const void * ) & (
hrxu5rhe3af . o0pf4uvatt ) , sizeof ( hrxu5rhe3af . o0pf4uvatt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 100 , ( const void * ) & (
hrxu5rhe3af . pmgcir2p13 ) , sizeof ( hrxu5rhe3af . pmgcir2p13 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 101 , ( const void * ) & (
hrxu5rhe3af . obuyxhugh2 ) , sizeof ( hrxu5rhe3af . obuyxhugh2 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 102 , ( const void * ) & (
hrxu5rhe3af . fpx2qirisn ) , sizeof ( hrxu5rhe3af . fpx2qirisn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 103 , ( const void * ) & (
hrxu5rhe3af . pwomc1kiz3 ) , sizeof ( hrxu5rhe3af . pwomc1kiz3 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 104 , ( const void * ) & (
hrxu5rhe3af . h5fod2fj2q ) , sizeof ( hrxu5rhe3af . h5fod2fj2q ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 105 , ( const void * ) & (
hrxu5rhe3af . hnbwguuonj ) , sizeof ( hrxu5rhe3af . hnbwguuonj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 106 , ( const void * ) & (
hrxu5rhe3af . fimtx0wf43 ) , sizeof ( hrxu5rhe3af . fimtx0wf43 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 107 , ( const void * ) & (
hrxu5rhe3af . jxtww5tjxt ) , sizeof ( hrxu5rhe3af . jxtww5tjxt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 108 , ( const void * ) & (
hrxu5rhe3af . as5m3dr43z ) , sizeof ( hrxu5rhe3af . as5m3dr43z ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 109 , ( const void * ) & (
hrxu5rhe3af . gtaj4wmjuq ) , sizeof ( hrxu5rhe3af . gtaj4wmjuq ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 110 , ( const void * ) & (
hrxu5rhe3af . a0tdfwofzg ) , sizeof ( hrxu5rhe3af . a0tdfwofzg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 111 , ( const void * ) & (
hrxu5rhe3af . ikwlyg3xde ) , sizeof ( hrxu5rhe3af . ikwlyg3xde ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 112 , ( const void * ) & (
hrxu5rhe3af . nw1rjo5a2w ) , sizeof ( hrxu5rhe3af . nw1rjo5a2w ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 113 , ( const void * ) & (
hrxu5rhe3af . kg1shmc2lb ) , sizeof ( hrxu5rhe3af . kg1shmc2lb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 114 , ( const void * ) & (
hrxu5rhe3af . e2pe11pwxn ) , sizeof ( hrxu5rhe3af . e2pe11pwxn ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 115 , ( const void * ) & (
hrxu5rhe3af . opg1lhdczb ) , sizeof ( hrxu5rhe3af . opg1lhdczb ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 116 , ( const void * ) & (
hrxu5rhe3af . g24vxooz0v ) , sizeof ( hrxu5rhe3af . g24vxooz0v ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 117 , ( const void * ) & (
hrxu5rhe3af . l3pfqrb31o ) , sizeof ( hrxu5rhe3af . l3pfqrb31o ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 118 , ( const void * ) & (
hrxu5rhe3af . jiqhomoo0v ) , sizeof ( hrxu5rhe3af . jiqhomoo0v ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 119 , ( const void * ) & (
hrxu5rhe3af . jmjdutrgwi ) , sizeof ( hrxu5rhe3af . jmjdutrgwi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 120 , ( const void * ) & (
hrxu5rhe3af . gcdlpfr3qr ) , sizeof ( hrxu5rhe3af . gcdlpfr3qr ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 121 , ( const void * ) & (
hrxu5rhe3af . bhx2bk5lkm ) , sizeof ( hrxu5rhe3af . bhx2bk5lkm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 122 , ( const void * ) & (
hrxu5rhe3af . gxxnmirgwt ) , sizeof ( hrxu5rhe3af . gxxnmirgwt ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 123 , ( const void * ) & (
hrxu5rhe3af . ayulg3mnvk ) , sizeof ( hrxu5rhe3af . ayulg3mnvk ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 124 , ( const void * ) & (
hrxu5rhe3af . dmkiyir0bc ) , sizeof ( hrxu5rhe3af . dmkiyir0bc ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 125 , ( const void * ) & (
hrxu5rhe3af . nlifgx53vj ) , sizeof ( hrxu5rhe3af . nlifgx53vj ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 126 , ( const void * ) & (
hrxu5rhe3af . cozmdzu0w1 ) , sizeof ( hrxu5rhe3af . cozmdzu0w1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 127 , ( const void * ) & (
hrxu5rhe3af . cnj1jumxqg ) , sizeof ( hrxu5rhe3af . cnj1jumxqg ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 128 , ( const void * ) & (
hrxu5rhe3af . ckwrsfgl5j ) , sizeof ( hrxu5rhe3af . ckwrsfgl5j ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 129 , ( const void * ) & (
hrxu5rhe3af . e2cixfebva ) , sizeof ( hrxu5rhe3af . e2cixfebva ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 130 , ( const void * ) & (
hrxu5rhe3af . i5keywnlob ) , sizeof ( hrxu5rhe3af . i5keywnlob ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 131 , ( const void * ) & (
hrxu5rhe3af . ae5papqlus ) , sizeof ( hrxu5rhe3af . ae5papqlus ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 132 , ( const void * ) & (
hrxu5rhe3af . hbtp1swogp ) , sizeof ( hrxu5rhe3af . hbtp1swogp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 133 , ( const void * ) & (
hrxu5rhe3af . ct2fu2r1og ) , sizeof ( hrxu5rhe3af . ct2fu2r1og ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 134 , ( const void * ) & (
hrxu5rhe3af . mp3yltewxi ) , sizeof ( hrxu5rhe3af . mp3yltewxi ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 135 , ( const void * ) & (
hrxu5rhe3af . brmqgwecvy ) , sizeof ( hrxu5rhe3af . brmqgwecvy ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 136 , ( const void * ) & (
hrxu5rhe3af . kjzbuo2ejd ) , sizeof ( hrxu5rhe3af . kjzbuo2ejd ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 137 , ( const void * ) & (
hrxu5rhe3af . ddgb0ny2wp ) , sizeof ( hrxu5rhe3af . ddgb0ny2wp ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 138 , ( const void * ) & (
hrxu5rhe3af . ozme2zffq1 ) , sizeof ( hrxu5rhe3af . ozme2zffq1 ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 139 , ( const void * ) & (
hrxu5rhe3af . pqxjs5shcl ) , sizeof ( hrxu5rhe3af . pqxjs5shcl ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 140 , ( const void * ) & (
hrxu5rhe3af . jydhsrazby ) , sizeof ( hrxu5rhe3af . jydhsrazby ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 141 , ( const void * ) & (
hrxu5rhe3af . nfvyn45pdm ) , sizeof ( hrxu5rhe3af . nfvyn45pdm ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 142 , ( const void * ) & (
hrxu5rhe3af . cjwjqcd1zs ) , sizeof ( hrxu5rhe3af . cjwjqcd1zs ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 143 , ( const void * ) & (
hrxu5rhe3af . m2abnapxna ) , sizeof ( hrxu5rhe3af . m2abnapxna ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 144 , ( const void * ) & (
hrxu5rhe3af . ejudse0oqw ) , sizeof ( hrxu5rhe3af . ejudse0oqw ) ) ;
mr_main_cacheDataAsMxArray ( rtdwData , 0 , 145 , ( const void * ) & (
hrxu5rhe3af . i41btnckgk ) , sizeof ( hrxu5rhe3af . i41btnckgk ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_main_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( o2y45zbt2m4 ) , ssDW , 0 , 0
, sizeof ( o2y45zbt2m4 ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber
( ssDW , 0 , 1 ) ; mr_MagneticFieldInPolarCoords_SetDWork ( & ( hrxu5rhe3af .
p11kqkd5tq ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . h1ivipllz5 ) ,
rtdwData , 0 , 1 , sizeof ( hrxu5rhe3af . h1ivipllz5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lwlvgtt2ve ) ,
rtdwData , 0 , 2 , sizeof ( hrxu5rhe3af . lwlvgtt2ve ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fcn1wq25nc ) ,
rtdwData , 0 , 3 , sizeof ( hrxu5rhe3af . fcn1wq25nc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ajsna343fp ) ,
rtdwData , 0 , 4 , sizeof ( hrxu5rhe3af . ajsna343fp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . eoflwqidz3 ) ,
rtdwData , 0 , 5 , sizeof ( hrxu5rhe3af . eoflwqidz3 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . epbwbvrls5 ) ,
rtdwData , 0 , 6 , sizeof ( hrxu5rhe3af . epbwbvrls5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fytmukko2d ) ,
rtdwData , 0 , 7 , sizeof ( hrxu5rhe3af . fytmukko2d ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . curihjwvdq ) ,
rtdwData , 0 , 8 , sizeof ( hrxu5rhe3af . curihjwvdq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . oumjhalsqc ) ,
rtdwData , 0 , 9 , sizeof ( hrxu5rhe3af . oumjhalsqc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o2yvavvn5c ) ,
rtdwData , 0 , 10 , sizeof ( hrxu5rhe3af . o2yvavvn5c ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hz2n5lmwzt ) ,
rtdwData , 0 , 11 , sizeof ( hrxu5rhe3af . hz2n5lmwzt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iwulztso32 ) ,
rtdwData , 0 , 12 , sizeof ( hrxu5rhe3af . iwulztso32 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . buggjk4l1n ) ,
rtdwData , 0 , 13 , sizeof ( hrxu5rhe3af . buggjk4l1n ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j3ergpk3vu ) ,
rtdwData , 0 , 14 , sizeof ( hrxu5rhe3af . j3ergpk3vu ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . amd2k325eq ) ,
rtdwData , 0 , 15 , sizeof ( hrxu5rhe3af . amd2k325eq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ocwejjhsae ) ,
rtdwData , 0 , 16 , sizeof ( hrxu5rhe3af . ocwejjhsae ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lo1lp4gtvt ) ,
rtdwData , 0 , 17 , sizeof ( hrxu5rhe3af . lo1lp4gtvt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cqi0nadh0g ) ,
rtdwData , 0 , 18 , sizeof ( hrxu5rhe3af . cqi0nadh0g ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . popvcsddq3 ) ,
rtdwData , 0 , 19 , sizeof ( hrxu5rhe3af . popvcsddq3 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e0e33jihoi ) ,
rtdwData , 0 , 20 , sizeof ( hrxu5rhe3af . e0e33jihoi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bkcg3g1zoi ) ,
rtdwData , 0 , 21 , sizeof ( hrxu5rhe3af . bkcg3g1zoi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cwsd2g5w2m ) ,
rtdwData , 0 , 22 , sizeof ( hrxu5rhe3af . cwsd2g5w2m ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ebpr404rrn ) ,
rtdwData , 0 , 23 , sizeof ( hrxu5rhe3af . ebpr404rrn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pbvxmucjj5 ) ,
rtdwData , 0 , 24 , sizeof ( hrxu5rhe3af . pbvxmucjj5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . h31khffg0k ) ,
rtdwData , 0 , 25 , sizeof ( hrxu5rhe3af . h31khffg0k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . alynay3xx0 ) ,
rtdwData , 0 , 26 , sizeof ( hrxu5rhe3af . alynay3xx0 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . atmgtfljnh ) ,
rtdwData , 0 , 27 , sizeof ( hrxu5rhe3af . atmgtfljnh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . n10hslmo2a ) ,
rtdwData , 0 , 28 , sizeof ( hrxu5rhe3af . n10hslmo2a ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pa2kyvt1uy ) ,
rtdwData , 0 , 29 , sizeof ( hrxu5rhe3af . pa2kyvt1uy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j13dkj5h0s ) ,
rtdwData , 0 , 30 , sizeof ( hrxu5rhe3af . j13dkj5h0s ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . p3xkfovqki ) ,
rtdwData , 0 , 31 , sizeof ( hrxu5rhe3af . p3xkfovqki ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . k40rhthviy ) ,
rtdwData , 0 , 32 , sizeof ( hrxu5rhe3af . k40rhthviy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . d1wjrwas1u ) ,
rtdwData , 0 , 33 , sizeof ( hrxu5rhe3af . d1wjrwas1u ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jjpbiyjnrh ) ,
rtdwData , 0 , 34 , sizeof ( hrxu5rhe3af . jjpbiyjnrh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cmfzrxdc11 ) ,
rtdwData , 0 , 35 , sizeof ( hrxu5rhe3af . cmfzrxdc11 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . impwbrb5ul ) ,
rtdwData , 0 , 36 , sizeof ( hrxu5rhe3af . impwbrb5ul ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ivdqhywypm ) ,
rtdwData , 0 , 37 , sizeof ( hrxu5rhe3af . ivdqhywypm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ck30ytigtq ) ,
rtdwData , 0 , 38 , sizeof ( hrxu5rhe3af . ck30ytigtq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nydzqlwwnn ) ,
rtdwData , 0 , 39 , sizeof ( hrxu5rhe3af . nydzqlwwnn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bdotsga2iv ) ,
rtdwData , 0 , 40 , sizeof ( hrxu5rhe3af . bdotsga2iv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . djim5bpjvv ) ,
rtdwData , 0 , 41 , sizeof ( hrxu5rhe3af . djim5bpjvv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lqkanthoxg ) ,
rtdwData , 0 , 42 , sizeof ( hrxu5rhe3af . lqkanthoxg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . irqzxzls3s ) ,
rtdwData , 0 , 43 , sizeof ( hrxu5rhe3af . irqzxzls3s ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . btkpsszf3k ) ,
rtdwData , 0 , 44 , sizeof ( hrxu5rhe3af . btkpsszf3k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . febtg0cpg5 ) ,
rtdwData , 0 , 45 , sizeof ( hrxu5rhe3af . febtg0cpg5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ckit2etwje ) ,
rtdwData , 0 , 46 , sizeof ( hrxu5rhe3af . ckit2etwje ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . g0uzej5lf1 ) ,
rtdwData , 0 , 47 , sizeof ( hrxu5rhe3af . g0uzej5lf1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fdyoeqkdqi ) ,
rtdwData , 0 , 48 , sizeof ( hrxu5rhe3af . fdyoeqkdqi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . c3m4fwdfd0 ) ,
rtdwData , 0 , 49 , sizeof ( hrxu5rhe3af . c3m4fwdfd0 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kgzb050drs ) ,
rtdwData , 0 , 50 , sizeof ( hrxu5rhe3af . kgzb050drs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o3hynk2drm ) ,
rtdwData , 0 , 51 , sizeof ( hrxu5rhe3af . o3hynk2drm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pm5qqx3zuz ) ,
rtdwData , 0 , 52 , sizeof ( hrxu5rhe3af . pm5qqx3zuz ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . omdgfehj41 ) ,
rtdwData , 0 , 53 , sizeof ( hrxu5rhe3af . omdgfehj41 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hsphg0gng2 ) ,
rtdwData , 0 , 54 , sizeof ( hrxu5rhe3af . hsphg0gng2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mdstjcyjyx ) ,
rtdwData , 0 , 55 , sizeof ( hrxu5rhe3af . mdstjcyjyx ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ojltdhe2we ) ,
rtdwData , 0 , 56 , sizeof ( hrxu5rhe3af . ojltdhe2we ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iwklra2msj ) ,
rtdwData , 0 , 57 , sizeof ( hrxu5rhe3af . iwklra2msj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mt3gx422x1 ) ,
rtdwData , 0 , 58 , sizeof ( hrxu5rhe3af . mt3gx422x1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pug0coupbp ) ,
rtdwData , 0 , 59 , sizeof ( hrxu5rhe3af . pug0coupbp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jeg35werh5 ) ,
rtdwData , 0 , 60 , sizeof ( hrxu5rhe3af . jeg35werh5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kz1j0tnmva ) ,
rtdwData , 0 , 61 , sizeof ( hrxu5rhe3af . kz1j0tnmva ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lq5ek0jlzd ) ,
rtdwData , 0 , 62 , sizeof ( hrxu5rhe3af . lq5ek0jlzd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dnqubg5s4k ) ,
rtdwData , 0 , 63 , sizeof ( hrxu5rhe3af . dnqubg5s4k ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bze1flsb15 ) ,
rtdwData , 0 , 64 , sizeof ( hrxu5rhe3af . bze1flsb15 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pidbwsidci ) ,
rtdwData , 0 , 65 , sizeof ( hrxu5rhe3af . pidbwsidci ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ji1vknz2dr ) ,
rtdwData , 0 , 66 , sizeof ( hrxu5rhe3af . ji1vknz2dr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gltmjlakux ) ,
rtdwData , 0 , 67 , sizeof ( hrxu5rhe3af . gltmjlakux ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pwifaixjxb ) ,
rtdwData , 0 , 68 , sizeof ( hrxu5rhe3af . pwifaixjxb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . haxpv4vq51 ) ,
rtdwData , 0 , 69 , sizeof ( hrxu5rhe3af . haxpv4vq51 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hxjxms0byf ) ,
rtdwData , 0 , 70 , sizeof ( hrxu5rhe3af . hxjxms0byf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jij01p0qtw ) ,
rtdwData , 0 , 71 , sizeof ( hrxu5rhe3af . jij01p0qtw ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ihprlm0zdr ) ,
rtdwData , 0 , 72 , sizeof ( hrxu5rhe3af . ihprlm0zdr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jgquwrgfhd ) ,
rtdwData , 0 , 73 , sizeof ( hrxu5rhe3af . jgquwrgfhd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o2i4021xwh ) ,
rtdwData , 0 , 74 , sizeof ( hrxu5rhe3af . o2i4021xwh ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . iqs2nrdyqs ) ,
rtdwData , 0 , 75 , sizeof ( hrxu5rhe3af . iqs2nrdyqs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . p4n3550tai ) ,
rtdwData , 0 , 76 , sizeof ( hrxu5rhe3af . p4n3550tai ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nqcixj2cfc ) ,
rtdwData , 0 , 77 , sizeof ( hrxu5rhe3af . nqcixj2cfc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gcz34svd4r ) ,
rtdwData , 0 , 78 , sizeof ( hrxu5rhe3af . gcz34svd4r ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . anszycztem ) ,
rtdwData , 0 , 79 , sizeof ( hrxu5rhe3af . anszycztem ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ane43mgfgs ) ,
rtdwData , 0 , 80 , sizeof ( hrxu5rhe3af . ane43mgfgs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hkxlm4qdro ) ,
rtdwData , 0 , 81 , sizeof ( hrxu5rhe3af . hkxlm4qdro ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fnu1tvdbyx ) ,
rtdwData , 0 , 82 , sizeof ( hrxu5rhe3af . fnu1tvdbyx ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fq3jja1aol ) ,
rtdwData , 0 , 83 , sizeof ( hrxu5rhe3af . fq3jja1aol ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nbmuo2yzhf ) ,
rtdwData , 0 , 84 , sizeof ( hrxu5rhe3af . nbmuo2yzhf ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ev5en1vf5z ) ,
rtdwData , 0 , 85 , sizeof ( hrxu5rhe3af . ev5en1vf5z ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . btkemo1frv ) ,
rtdwData , 0 , 86 , sizeof ( hrxu5rhe3af . btkemo1frv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cag24nmzzp ) ,
rtdwData , 0 , 87 , sizeof ( hrxu5rhe3af . cag24nmzzp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . lptvxysd1c ) ,
rtdwData , 0 , 88 , sizeof ( hrxu5rhe3af . lptvxysd1c ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mt3v1tg0wr ) ,
rtdwData , 0 , 89 , sizeof ( hrxu5rhe3af . mt3v1tg0wr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . apfxbvz3qg ) ,
rtdwData , 0 , 90 , sizeof ( hrxu5rhe3af . apfxbvz3qg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . izrtkkf042 ) ,
rtdwData , 0 , 91 , sizeof ( hrxu5rhe3af . izrtkkf042 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . noecaey35j ) ,
rtdwData , 0 , 92 , sizeof ( hrxu5rhe3af . noecaey35j ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jkbsaxmqju ) ,
rtdwData , 0 , 93 , sizeof ( hrxu5rhe3af . jkbsaxmqju ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fnnqkeqpmg ) ,
rtdwData , 0 , 94 , sizeof ( hrxu5rhe3af . fnnqkeqpmg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . j1uacuucpv ) ,
rtdwData , 0 , 95 , sizeof ( hrxu5rhe3af . j1uacuucpv ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cbsmbddbag ) ,
rtdwData , 0 , 96 , sizeof ( hrxu5rhe3af . cbsmbddbag ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bnzh2jzuy5 ) ,
rtdwData , 0 , 97 , sizeof ( hrxu5rhe3af . bnzh2jzuy5 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jkjkrdx1hk ) ,
rtdwData , 0 , 98 , sizeof ( hrxu5rhe3af . jkjkrdx1hk ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . o0pf4uvatt ) ,
rtdwData , 0 , 99 , sizeof ( hrxu5rhe3af . o0pf4uvatt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pmgcir2p13 ) ,
rtdwData , 0 , 100 , sizeof ( hrxu5rhe3af . pmgcir2p13 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . obuyxhugh2 ) ,
rtdwData , 0 , 101 , sizeof ( hrxu5rhe3af . obuyxhugh2 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fpx2qirisn ) ,
rtdwData , 0 , 102 , sizeof ( hrxu5rhe3af . fpx2qirisn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pwomc1kiz3 ) ,
rtdwData , 0 , 103 , sizeof ( hrxu5rhe3af . pwomc1kiz3 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . h5fod2fj2q ) ,
rtdwData , 0 , 104 , sizeof ( hrxu5rhe3af . h5fod2fj2q ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hnbwguuonj ) ,
rtdwData , 0 , 105 , sizeof ( hrxu5rhe3af . hnbwguuonj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . fimtx0wf43 ) ,
rtdwData , 0 , 106 , sizeof ( hrxu5rhe3af . fimtx0wf43 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jxtww5tjxt ) ,
rtdwData , 0 , 107 , sizeof ( hrxu5rhe3af . jxtww5tjxt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . as5m3dr43z ) ,
rtdwData , 0 , 108 , sizeof ( hrxu5rhe3af . as5m3dr43z ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gtaj4wmjuq ) ,
rtdwData , 0 , 109 , sizeof ( hrxu5rhe3af . gtaj4wmjuq ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . a0tdfwofzg ) ,
rtdwData , 0 , 110 , sizeof ( hrxu5rhe3af . a0tdfwofzg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ikwlyg3xde ) ,
rtdwData , 0 , 111 , sizeof ( hrxu5rhe3af . ikwlyg3xde ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nw1rjo5a2w ) ,
rtdwData , 0 , 112 , sizeof ( hrxu5rhe3af . nw1rjo5a2w ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kg1shmc2lb ) ,
rtdwData , 0 , 113 , sizeof ( hrxu5rhe3af . kg1shmc2lb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e2pe11pwxn ) ,
rtdwData , 0 , 114 , sizeof ( hrxu5rhe3af . e2pe11pwxn ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . opg1lhdczb ) ,
rtdwData , 0 , 115 , sizeof ( hrxu5rhe3af . opg1lhdczb ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . g24vxooz0v ) ,
rtdwData , 0 , 116 , sizeof ( hrxu5rhe3af . g24vxooz0v ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . l3pfqrb31o ) ,
rtdwData , 0 , 117 , sizeof ( hrxu5rhe3af . l3pfqrb31o ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jiqhomoo0v ) ,
rtdwData , 0 , 118 , sizeof ( hrxu5rhe3af . jiqhomoo0v ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jmjdutrgwi ) ,
rtdwData , 0 , 119 , sizeof ( hrxu5rhe3af . jmjdutrgwi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gcdlpfr3qr ) ,
rtdwData , 0 , 120 , sizeof ( hrxu5rhe3af . gcdlpfr3qr ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . bhx2bk5lkm ) ,
rtdwData , 0 , 121 , sizeof ( hrxu5rhe3af . bhx2bk5lkm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . gxxnmirgwt ) ,
rtdwData , 0 , 122 , sizeof ( hrxu5rhe3af . gxxnmirgwt ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ayulg3mnvk ) ,
rtdwData , 0 , 123 , sizeof ( hrxu5rhe3af . ayulg3mnvk ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . dmkiyir0bc ) ,
rtdwData , 0 , 124 , sizeof ( hrxu5rhe3af . dmkiyir0bc ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nlifgx53vj ) ,
rtdwData , 0 , 125 , sizeof ( hrxu5rhe3af . nlifgx53vj ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cozmdzu0w1 ) ,
rtdwData , 0 , 126 , sizeof ( hrxu5rhe3af . cozmdzu0w1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cnj1jumxqg ) ,
rtdwData , 0 , 127 , sizeof ( hrxu5rhe3af . cnj1jumxqg ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ckwrsfgl5j ) ,
rtdwData , 0 , 128 , sizeof ( hrxu5rhe3af . ckwrsfgl5j ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . e2cixfebva ) ,
rtdwData , 0 , 129 , sizeof ( hrxu5rhe3af . e2cixfebva ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . i5keywnlob ) ,
rtdwData , 0 , 130 , sizeof ( hrxu5rhe3af . i5keywnlob ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ae5papqlus ) ,
rtdwData , 0 , 131 , sizeof ( hrxu5rhe3af . ae5papqlus ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . hbtp1swogp ) ,
rtdwData , 0 , 132 , sizeof ( hrxu5rhe3af . hbtp1swogp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ct2fu2r1og ) ,
rtdwData , 0 , 133 , sizeof ( hrxu5rhe3af . ct2fu2r1og ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . mp3yltewxi ) ,
rtdwData , 0 , 134 , sizeof ( hrxu5rhe3af . mp3yltewxi ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . brmqgwecvy ) ,
rtdwData , 0 , 135 , sizeof ( hrxu5rhe3af . brmqgwecvy ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . kjzbuo2ejd ) ,
rtdwData , 0 , 136 , sizeof ( hrxu5rhe3af . kjzbuo2ejd ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ddgb0ny2wp ) ,
rtdwData , 0 , 137 , sizeof ( hrxu5rhe3af . ddgb0ny2wp ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ozme2zffq1 ) ,
rtdwData , 0 , 138 , sizeof ( hrxu5rhe3af . ozme2zffq1 ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . pqxjs5shcl ) ,
rtdwData , 0 , 139 , sizeof ( hrxu5rhe3af . pqxjs5shcl ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . jydhsrazby ) ,
rtdwData , 0 , 140 , sizeof ( hrxu5rhe3af . jydhsrazby ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . nfvyn45pdm ) ,
rtdwData , 0 , 141 , sizeof ( hrxu5rhe3af . nfvyn45pdm ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . cjwjqcd1zs ) ,
rtdwData , 0 , 142 , sizeof ( hrxu5rhe3af . cjwjqcd1zs ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . m2abnapxna ) ,
rtdwData , 0 , 143 , sizeof ( hrxu5rhe3af . m2abnapxna ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . ejudse0oqw ) ,
rtdwData , 0 , 144 , sizeof ( hrxu5rhe3af . ejudse0oqw ) ) ;
mr_main_restoreDataFromMxArray ( ( void * ) & ( hrxu5rhe3af . i41btnckgk ) ,
rtdwData , 0 , 145 , sizeof ( hrxu5rhe3af . i41btnckgk ) ) ; } } mxArray *
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
"MATLABSystem" , } ; static const char * blockPath [ 8 ] = { "main/Scope1" ,
"main/Scope2" , "main/Scope3" , "main/Scope5" , "main/Gyro reading/Scope" ,
"main/Real physics/Sun position wrt s//c/Scope" , "main/Scope4" ,
"main/Pseudoinverse" , } ; static const int reason [ 8 ] = { 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 5 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 8 ; ++ ( subs [ 0 ] )
) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
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
( rtS , 0 ) ; ssSetNumSampleTimes ( rtS , 13 ) ; ssSetNumBlocks ( rtS , 1686
) ; ssSetNumBlockIO ( rtS , 218 ) ; ssSetNumBlockParams ( rtS , 518 ) ; }
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
ssSetChecksumVal ( rtS , 0 , 3050408842U ) ; ssSetChecksumVal ( rtS , 1 ,
2580869559U ) ; ssSetChecksumVal ( rtS , 2 , 1326524716U ) ; ssSetChecksumVal
( rtS , 3 , 1093264084U ) ; }
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
numDataTypes = 21 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
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
absTolControl [ 14 ] = { 1U , 1U , 1U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
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
ssSetChecksumVal ( rtS , 0 , 3050408842U ) ; ssSetChecksumVal ( rtS , 1 ,
2580869559U ) ; ssSetChecksumVal ( rtS , 2 , 1326524716U ) ; ssSetChecksumVal
( rtS , 3 , 1093264084U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 44 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = ( sysRanDType * ) & hrxu5rhe3af . fimtx0wf43 ; systemRan [
7 ] = ( sysRanDType * ) & hrxu5rhe3af . a0tdfwofzg ; systemRan [ 8 ] = (
sysRanDType * ) & hrxu5rhe3af . as5m3dr43z ; systemRan [ 9 ] = ( sysRanDType
* ) & hrxu5rhe3af . h5fod2fj2q ; systemRan [ 10 ] = ( sysRanDType * ) &
hrxu5rhe3af . nw1rjo5a2w ; systemRan [ 11 ] = ( sysRanDType * ) & hrxu5rhe3af
. jkjkrdx1hk ; systemRan [ 12 ] = ( sysRanDType * ) & hrxu5rhe3af .
o0pf4uvatt ; systemRan [ 13 ] = ( sysRanDType * ) & hrxu5rhe3af . cbsmbddbag
; systemRan [ 14 ] = ( sysRanDType * ) & hrxu5rhe3af . fpx2qirisn ; systemRan
[ 15 ] = ( sysRanDType * ) & hrxu5rhe3af . pwomc1kiz3 ; systemRan [ 16 ] = (
sysRanDType * ) & hrxu5rhe3af . pmgcir2p13 ; systemRan [ 17 ] = ( sysRanDType
* ) & hrxu5rhe3af . fnnqkeqpmg ; systemRan [ 18 ] = & rtAlwaysEnabled ;
systemRan [ 19 ] = & rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ;
systemRan [ 21 ] = & rtAlwaysEnabled ; systemRan [ 22 ] = & rtAlwaysEnabled ;
systemRan [ 23 ] = & rtAlwaysEnabled ; systemRan [ 24 ] = & rtAlwaysEnabled ;
systemRan [ 25 ] = & rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ;
systemRan [ 27 ] = & rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ;
systemRan [ 29 ] = & rtAlwaysEnabled ; systemRan [ 30 ] = & rtAlwaysEnabled ;
systemRan [ 31 ] = & rtAlwaysEnabled ; systemRan [ 32 ] = & rtAlwaysEnabled ;
systemRan [ 33 ] = & rtAlwaysEnabled ; systemRan [ 34 ] = & rtAlwaysEnabled ;
systemRan [ 35 ] = & rtAlwaysEnabled ; systemRan [ 36 ] = ( sysRanDType * ) &
hrxu5rhe3af . jkbsaxmqju ; systemRan [ 37 ] = ( sysRanDType * ) & hrxu5rhe3af
. jkbsaxmqju ; systemRan [ 38 ] = ( sysRanDType * ) & hrxu5rhe3af .
noecaey35j ; systemRan [ 39 ] = ( sysRanDType * ) & hrxu5rhe3af . noecaey35j
; systemRan [ 40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = & rtAlwaysEnabled
; systemRan [ 42 ] = & rtAlwaysEnabled ; systemRan [ 43 ] = & rtAlwaysEnabled
; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_main_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_main_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_main_SetDWork )
; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS )
) { return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 13 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID13 ( tid ) ; }
