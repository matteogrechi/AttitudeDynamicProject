#include "MagneticFieldInPolarCoords_capi.h"
#include "MagneticFieldInPolarCoords.h"
#include "MagneticFieldInPolarCoords_private.h"
static RegMdlInfo rtMdlInfo_MagneticFieldInPolarCoords [ 40 ] = { {
"mcbsajulppp" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "hipyxcztgk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "bw3lskucmt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "jvfq42kheq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "fe0zuklz4o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "cuvb1zjqrc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "gwdecz2kia" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "f05a1spide" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "iijvhsgyvw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "k24j4pp5y0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "behbyqxyk1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "ljdd0f31vu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "kumxrta3kw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "gn5bp5tvyj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "ijtm1vmywe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "gcif3exjdu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "ni4veaxung" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "pueme1egfa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "p2ianspbkn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "dpqzzutcg1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "lsojpv41h5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "fctiszmyrq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "MagneticFieldInPolarCoords" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "k5gkszj54j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "h2lg3bhhwp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "kp2qugkbnc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , {
"mr_MagneticFieldInPolarCoords_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "mr_MagneticFieldInPolarCoords_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "mr_MagneticFieldInPolarCoords_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * )
"MagneticFieldInPolarCoords" } , { "MagneticFieldInPolarCoords.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"MagneticFieldInPolarCoords.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void *
) "MagneticFieldInPolarCoords" } } ; oevxbl42bkl oevxbl42bk = { 1.0E-9 , { -
29615.0 , - 2267.0 , 1341.0 , 935.0 , - 1728.0 , 3072.0 , - 2290.0 , 787.0 ,
0.0 , 1672.0 , 1253.0 , 251.0 , 0.0 , 0.0 , 715.0 , - 405.0 , 0.0 , 0.0 , 0.0
, 110.0 } , { 0.0 , 0.0 , 0.0 , 0.0 , 5186.0 , - 2478.0 , - 227.0 , 272.0 ,
0.0 , - 458.0 , 296.0 , - 232.0 , 0.0 , 0.0 , - 492.0 , 119.0 , 0.0 , 0.0 ,
0.0 , - 304.0 } } ; void MagneticFieldInPolarCoords ( const real_T *
peq5wcq255 , const real_T * crwerj13u0 , const real_T * gbzf5nc1fx , const
real_T * citdcutmxr , real_T fwwpi5cfp0 [ 3 ] ) { real_T t10 ; real_T t11 ;
real_T t12 ; real_T t13 ; real_T t14 ; real_T t15 ; real_T t16 ; real_T t17 ;
real_T t17_tmp ; real_T t2 ; real_T t21 ; real_T t22 ; real_T t23 ; real_T
t24 ; real_T t25 ; real_T t3 ; real_T t37 ; real_T t37_tmp ; real_T t4 ;
real_T t41 ; real_T t47 ; real_T t5 ; real_T t6 ; real_T t65 ; real_T t68 ;
real_T t68_tmp ; real_T t7 ; real_T t72 ; real_T t75 ; real_T t77 ; real_T
t78 ; real_T t8 ; real_T t81 ; real_T t82 ; real_T t83 ; real_T t83_tmp ;
real_T t85_tmp ; real_T t86 ; real_T tmp ; real_T tmp_e ; real_T tmp_i ;
real_T tmp_m ; real_T tmp_p ; boolean_T t61 ; t2 = muDoubleScalarCos ( *
gbzf5nc1fx ) ; t3 = muDoubleScalarCos ( * crwerj13u0 ) ; t4 =
muDoubleScalarSin ( * gbzf5nc1fx ) ; t5 = muDoubleScalarSin ( * crwerj13u0 )
; t6 = muDoubleScalarPower ( * citdcutmxr , 3.0 ) ; t7 = muDoubleScalarPower
( * citdcutmxr , 4.0 ) ; t8 = muDoubleScalarPower ( * citdcutmxr , 5.0 ) ;
t10 = * gbzf5nc1fx * 2.0 ; t11 = * gbzf5nc1fx * 3.0 ; t12 = * gbzf5nc1fx *
4.0 ; t24 = 1.0 / * peq5wcq255 ; t13 = muDoubleScalarCos ( t10 ) ; t14 =
muDoubleScalarCos ( t11 ) ; t15 = muDoubleScalarCos ( t12 ) ; t16 = t3 * t3 ;
t17 = muDoubleScalarPower ( t3 , 3.0 ) ; t10 = muDoubleScalarSin ( t10 ) ;
t11 = muDoubleScalarSin ( t11 ) ; t12 = muDoubleScalarSin ( t12 ) ; t21 = t5
* t5 ; t22 = muDoubleScalarPower ( t5 , 3.0 ) ; t25 = muDoubleScalarPower (
t24 , 3.0 ) ; t37_tmp = oevxbl42bk . P_1 [ 4 ] * t2 ; t37 = t37_tmp * t5 ;
t68_tmp = oevxbl42bk . P_1 [ 5 ] * t2 ; t68 = t68_tmp * t3 * t5 *
1.7320508075688772 ; t23 = t21 * t21 ; t41 = t5 * t16 ; t47 = t41 * 2.0 ; t65
= t16 + - t21 ; t78 = ( t3 / 5.0 + - t17 ) + t3 * t21 * 2.0 ; t61 = ( - ( 1.0
/ t5 * * crwerj13u0 ) != 0.0 ) ; t41 = t5 / 5.0 + - t41 ; t75 = t21 / 7.0 +
t16 * - t21 ; t17_tmp = t3 * t5 ; t17 = ( t17_tmp * 0.2857142857142857 + t3 *
t22 * 2.0 ) + - ( t5 * t17 * 2.0 ) ; t81 = ( - ( t5 * 0.26666666666666666 ) +
t47 ) + ( t16 - 0.33333333333333331 ) * t5 ; t47 = t22 + - t47 ; t72 = - (
t16 * t21 * 3.0 ) + t23 ; t77 = - ( ( t16 - 0.33333333333333331 ) * t3 ) + t3
* 0.26666666666666666 ; t83_tmp = oevxbl42bk . P_1 [ 6 ] * t2 *
1.4142135623730951 * 1.7320508075688772 ; t83 = t83_tmp * t41 * 1.25 ; t82 =
t17_tmp * 0.22857142857142856 + t3 * t41 ; t85_tmp = oevxbl42bk . P_1 [ 7 ] *
t2 * 1.4142135623730951 * 2.23606797749979 ; t2 = t85_tmp * t82 * 1.75 ; t86
= ( ( t16 * 0.22857142857142856 + - ( t21 * 0.22857142857142856 ) ) + - ( t5
* t41 ) ) + t3 * t78 ; tmp = * citdcutmxr * t24 ; tmp_p = oevxbl42bk . P_1 [
11 ] * t13 * 2.23606797749979 ; tmp_e = oevxbl42bk . P_2 [ 6 ] * t4 *
1.4142135623730951 * 1.7320508075688772 ; tmp_i = oevxbl42bk . P_2 [ 11 ] *
t10 * 2.23606797749979 ; tmp_m = oevxbl42bk . P_2 [ 7 ] * t4 *
1.4142135623730951 * 2.23606797749979 ; fwwpi5cfp0 [ 0 ] = ( ( ( ( ( ( ( ( (
( ( t17_tmp * 0.51428571428571423 + t5 * t77 ) - t3 * t81 ) * oevxbl42bk .
P_1 [ 3 ] * - 4.375 + tmp_p * t17 * 1.75 ) + tmp_i * t17 * 1.75 ) -
oevxbl42bk . P_1 [ 19 ] * t3 * t15 * t22 * 5.9160797830996161 / 2.0 ) +
t85_tmp * t86 * 1.75 ) + oevxbl42bk . P_1 [ 15 ] * t14 * 1.4142135623730951 *
5.9160797830996161 * t72 / 4.0 ) - oevxbl42bk . P_2 [ 19 ] * t3 * t12 * t22 *
5.9160797830996161 / 2.0 ) + tmp_m * t86 * 1.75 ) + oevxbl42bk . P_2 [ 15 ] *
t11 * 1.4142135623730951 * 5.9160797830996161 * t72 / 4.0 ) * tmp * 6.0 + ( (
( ( ( ( ( oevxbl42bk . P_1 [ 10 ] * t13 * 3.872983346207417 * t47 / 2.0 +
oevxbl42bk . P_1 [ 2 ] * t81 * 2.5 ) + oevxbl42bk . P_2 [ 10 ] * t10 *
3.872983346207417 * t47 / 2.0 ) + t83_tmp * t78 * 1.25 ) + tmp_e * t78 * 1.25
) - oevxbl42bk . P_1 [ 14 ] * t3 * t14 * t21 * 1.4142135623730951 *
2.23606797749979 * 0.75 ) - oevxbl42bk . P_2 [ 14 ] * t3 * t11 * t21 *
1.4142135623730951 * 2.23606797749979 * 0.75 ) * tmp * 5.0 + ( ( t37_tmp * t3
+ - oevxbl42bk . P_1 [ 0 ] * t5 ) + oevxbl42bk . P_2 [ 4 ] * t3 * t4 ) * tmp
* - 3.0 ) ) - ( ( ( ( oevxbl42bk . P_1 [ 1 ] * t3 * t5 * - 3.0 + t68_tmp *
1.7320508075688772 * t65 ) + oevxbl42bk . P_2 [ 5 ] * t4 * 1.7320508075688772
* t65 ) + oevxbl42bk . P_1 [ 9 ] * t3 * t5 * t13 * 1.7320508075688772 ) +
oevxbl42bk . P_2 [ 9 ] * t3 * t5 * t10 * 1.7320508075688772 ) * tmp * 4.0 ;
tmp = oevxbl42bk . P_1 [ 10 ] * t3 ; t17 = oevxbl42bk . P_1 [ 15 ] * t3 ;
t37_tmp = tmp * t13 * t21 * 3.872983346207417 ; t68_tmp = oevxbl42bk . P_1 [
14 ] * t14 * t22 * 1.4142135623730951 * 2.23606797749979 ; t8 *=
muDoubleScalarPower ( t24 , 5.0 ) ; t13 = oevxbl42bk . P_1 [ 9 ] * t13 * t21
* 1.7320508075688772 ; t7 *= muDoubleScalarPower ( t24 , 4.0 ) ; t24 = t6 *
t25 ; t15 = oevxbl42bk . P_1 [ 19 ] * t15 * t23 * 5.9160797830996161 ; tmp_p
*= t75 ; t14 = t17 * t14 * t22 * 1.4142135623730951 * 5.9160797830996161 ; t6
= t6 * t6 * ( t25 * t25 ) ; fwwpi5cfp0 [ 1 ] = ( ( ( ( ( ( t37_tmp + - t83 )
+ tmp * t10 * 3.872983346207417 * - t21 ) + t68_tmp * 0.75 ) - oevxbl42bk .
P_1 [ 14 ] * t11 * t22 * 1.4142135623730951 * 2.23606797749979 * 0.75 ) +
oevxbl42bk . P_1 [ 6 ] * t4 * 1.4142135623730951 * 1.7320508075688772 * t41 *
1.25 ) * ( t8 * ( real_T ) t61 ) + ( ( ( ( t13 + t68 ) + oevxbl42bk . P_1 [ 9
] * t10 * 1.7320508075688772 * - t21 ) - oevxbl42bk . P_1 [ 5 ] * t3 * t4 *
t5 * 1.7320508075688772 ) * ( t7 * ( real_T ) t61 ) + ( t37 - oevxbl42bk .
P_1 [ 4 ] * t4 * t5 ) * ( t24 * ( real_T ) t61 ) ) ) - ( ( ( ( ( ( ( t2 - t15
/ 2.0 ) + oevxbl42bk . P_1 [ 19 ] * t12 * t23 * 5.9160797830996161 / 2.0 ) +
tmp_p * 3.5 ) - oevxbl42bk . P_1 [ 11 ] * t10 * 2.23606797749979 * t75 * 3.5
) - oevxbl42bk . P_1 [ 7 ] * t4 * 1.4142135623730951 * 2.23606797749979 * t82
* 1.75 ) - t14 * 0.75 ) + t17 * t11 * t22 * 1.4142135623730951 *
5.9160797830996161 * 0.75 ) * ( t6 * ( real_T ) t61 ) ; fwwpi5cfp0 [ 2 ] = (
( ( ( ( ( t37_tmp / 2.0 + ( - t83 - oevxbl42bk . P_1 [ 2 ] * t77 * 2.5 ) ) +
t68_tmp / 4.0 ) + oevxbl42bk . P_2 [ 10 ] * t3 * t10 * t21 *
3.872983346207417 / 2.0 ) + oevxbl42bk . P_2 [ 14 ] * t11 * t22 *
1.4142135623730951 * 2.23606797749979 / 4.0 ) - tmp_e * t41 * 1.25 ) * t8 *
4.0 + ( ( ( ( ( ( t16 - 0.33333333333333331 ) * oevxbl42bk . P_1 [ 1 ] * 1.5
+ t68 ) + t13 / 2.0 ) + oevxbl42bk . P_2 [ 9 ] * t10 * t21 *
1.7320508075688772 / 2.0 ) + oevxbl42bk . P_2 [ 5 ] * t3 * t4 * t5 *
1.7320508075688772 ) * t7 * 3.0 + ( ( oevxbl42bk . P_1 [ 0 ] * t3 + t37 ) +
oevxbl42bk . P_2 [ 4 ] * t4 * t5 ) * t24 * 2.0 ) ) - ( ( ( ( ( ( ( ( ( ( t16
* 0.25714285714285712 + t3 * t77 ) - 0.085714285714285715 ) * oevxbl42bk .
P_1 [ 3 ] * 4.375 + t2 ) - t15 / 8.0 ) + tmp_p * 1.75 ) - oevxbl42bk . P_2 [
19 ] * t12 * t23 * 5.9160797830996161 / 8.0 ) + tmp_i * t75 * 1.75 ) + tmp_m
* t82 * 1.75 ) - t14 / 4.0 ) - oevxbl42bk . P_2 [ 15 ] * t3 * t11 * t22 *
1.4142135623730951 * 5.9160797830996161 / 4.0 ) * t6 * 5.0 ; fwwpi5cfp0 [ 0 ]
*= oevxbl42bk . P_0 ; fwwpi5cfp0 [ 1 ] *= oevxbl42bk . P_0 ; fwwpi5cfp0 [ 2 ]
*= oevxbl42bk . P_0 ; } void MagneticFieldInPolarCoordsTID1 ( void ) { } void
gcif3exjdu ( kp2qugkbnc * const koq2b4qrmd ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( koq2b4qrmd ->
_mdlRefSfcnS , "MagneticFieldInPolarCoords" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void dpqzzutcg1 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , kp2qugkbnc
* const koq2b4qrmd , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) koq2b4qrmd , 0 , sizeof ( kp2qugkbnc ) ) ;
koq2b4qrmd -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; koq2b4qrmd ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; koq2b4qrmd -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( koq2b4qrmd -> _mdlRefSfcnS ,
"MagneticFieldInPolarCoords" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ;
} MagneticFieldInPolarCoords_InitializeDataMapInfo ( koq2b4qrmd , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
koq2b4qrmd -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( koq2b4qrmd ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
koq2b4qrmd -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_MagneticFieldInPolarCoords_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_MagneticFieldInPolarCoords , 40 ) ; * retVal = 1 ; } static void
mr_MagneticFieldInPolarCoords_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_MagneticFieldInPolarCoords_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_MagneticFieldInPolarCoords_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_MagneticFieldInPolarCoords_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_MagneticFieldInPolarCoords_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_MagneticFieldInPolarCoords_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_MagneticFieldInPolarCoords_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_MagneticFieldInPolarCoords_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_MagneticFieldInPolarCoords_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_MagneticFieldInPolarCoords_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_MagneticFieldInPolarCoords_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_MagneticFieldInPolarCoords_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_MagneticFieldInPolarCoords_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_MagneticFieldInPolarCoords_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_MagneticFieldInPolarCoords_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_MagneticFieldInPolarCoords_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_MagneticFieldInPolarCoords_GetDWork (
const mcbsajulppp * mdlrefDW ) { ( void ) mdlrefDW ; return NULL ; } void
mr_MagneticFieldInPolarCoords_SetDWork ( mcbsajulppp * mdlrefDW , const
mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_MagneticFieldInPolarCoords_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 2186794395U , 754762006U , 2066332492U ,
1015321039U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"MagneticFieldInPolarCoords" , & chksum [ 0 ] ) ; } mxArray *
mr_MagneticFieldInPolarCoords_GetSimStateDisallowedBlocks ( ) { return NULL ;
}
