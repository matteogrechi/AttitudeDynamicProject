#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "SpacecraftDT" , 14 , 744 } , {
"SensorsDT" , 15 , 8 } , { "struct_Ys0g6NvmxKEOD5COiDA9mC" , 16 , 64 } , {
"EarthDT" , 17 , 176 } , { "mcbsajulppp" , 18 , 168 } , { "ConstDT" , 19 , 24
} } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof (
real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) ,
sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof (
boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( void * ) ,
sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( SpacecraftDT ) ,
sizeof ( SensorsDT ) , sizeof ( struct_Ys0g6NvmxKEOD5COiDA9mC ) , sizeof (
EarthDT ) , sizeof ( mcbsajulppp ) , sizeof ( ConstDT ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"SpacecraftDT" , "SensorsDT" , "struct_Ys0g6NvmxKEOD5COiDA9mC" , "EarthDT" ,
"mcbsajulppp" , "ConstDT" } ; static DataTypeTransition rtBTransitions [ ] =
{ { ( char_T * ) ( & o2y45zbt2m4 . g0mrioy1px ) , 0 , 0 , 257 } , { ( char_T
* ) ( & o2y45zbt2m4 . fepr2tvtnf ) , 8 , 0 , 2 } , { ( char_T * ) ( &
hrxu5rhe3af . iwulztso32 [ 0 ] ) , 0 , 0 , 65 } , { ( char_T * ) ( &
hrxu5rhe3af . hmrfyhr2kl . LoggedData [ 0 ] ) , 11 , 0 , 4 } , { ( char_T * )
( & hrxu5rhe3af . c34nru5wvg ) , 7 , 0 , 33 } , { ( char_T * ) ( &
hrxu5rhe3af . btkpsszf3k ) , 10 , 0 , 5 } , { ( char_T * ) ( & hrxu5rhe3af .
fdyoeqkdqi ) , 2 , 0 , 71 } , { ( char_T * ) ( & hrxu5rhe3af . e2pe11pwxn ) ,
8 , 0 , 31 } , { ( char_T * ) ( & hrxu5rhe3af . p11kqkd5tq ) , 18 , 0 , 1 } ,
{ ( char_T * ) ( & hrxu5rhe3af . oxb0jyodnm . ioyk4rkcqw ) , 6 , 0 , 1 } , {
( char_T * ) ( & hrxu5rhe3af . oxb0jyodnm . cz2sd5ks45 ) , 2 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . bghekfjhrb . jvxfs0mjwv ) , 6 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . bghekfjhrb . iftxgfmwnh ) , 2 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . iyw4crazdc . jlpifn4yub ) , 6 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . iyw4crazdc . frt22lnhun ) , 2 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . npgo12zmto . h4htzwynch ) , 6 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . npgo12zmto . lkqtujj5qn ) , 2 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . hqjl54s2qvo . ioyk4rkcqw ) , 6 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . hqjl54s2qvo . cz2sd5ks45 ) , 2 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . pefmh4xzsjq . jvxfs0mjwv ) , 6 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . pefmh4xzsjq . iftxgfmwnh ) , 2 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . n0mztpd0lov . jlpifn4yub ) , 6 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . n0mztpd0lov . frt22lnhun ) , 2 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . bjbtw11222c . h4htzwynch ) , 6 , 0 , 1 } , { (
char_T * ) ( & hrxu5rhe3af . bjbtw11222c . lkqtujj5qn ) , 2 , 0 , 1 } } ;
static DataTypeTransitionTable rtBTransTable = { 25U , rtBTransitions } ;
static DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( &
hbv5azo3sw . RandomSource_MeanVal ) , 0 , 0 , 530 } , { ( char_T * ) ( &
hbv5azo3sw . yBlockOrdering_Y0 ) , 8 , 0 , 3 } , { ( char_T * ) ( &
rtP_Spacecraft ) , 14 , 0 , 1 } , { ( char_T * ) ( & rtP_Earth ) , 17 , 0 , 1
} , { ( char_T * ) ( & rtP_Const ) , 19 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 5U , rtPTransitions } ;
