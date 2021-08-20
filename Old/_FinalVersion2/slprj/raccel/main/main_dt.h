#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "SensorsDT" , 14 , 8 } , {
"SpacecraftDT" , 15 , 744 } , { "struct_Ys0g6NvmxKEOD5COiDA9mC" , 16 , 64 } ,
{ "EarthDT" , 17 , 176 } , { "mcbsajulppp" , 18 , 168 } , { "ConstDT" , 19 ,
24 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof (
real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) ,
sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof (
boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( void * ) ,
sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( SensorsDT ) , sizeof
( SpacecraftDT ) , sizeof ( struct_Ys0g6NvmxKEOD5COiDA9mC ) , sizeof (
EarthDT ) , sizeof ( mcbsajulppp ) , sizeof ( ConstDT ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"SensorsDT" , "SpacecraftDT" , "struct_Ys0g6NvmxKEOD5COiDA9mC" , "EarthDT" ,
"mcbsajulppp" , "ConstDT" } ; static DataTypeTransition rtBTransitions [ ] =
{ { ( char_T * ) ( & o2y45zbt2m4 . p0g2tnevfk [ 0 ] ) , 0 , 0 , 331 } , { (
char_T * ) ( & o2y45zbt2m4 . nh40mtprpn ) , 8 , 0 , 2 } , { ( char_T * ) ( &
o2y45zbt2m4 . ik12ax5qrt . nx1h2bs53u [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * )
( & o2y45zbt2m4 . cuglwsdmbh . nx1h2bs53u [ 0 ] ) , 0 , 0 , 6 } , { ( char_T
* ) ( & hrxu5rhe3af . iwulztso32 [ 0 ] ) , 0 , 0 , 119 } , { ( char_T * ) ( &
hrxu5rhe3af . mj2w2pdzvf . LoggedData ) , 11 , 0 , 10 } , { ( char_T * ) ( &
hrxu5rhe3af . nydzqlwwnn ) , 7 , 0 , 42 } , { ( char_T * ) ( & hrxu5rhe3af .
ckit2etwje ) , 10 , 0 , 5 } , { ( char_T * ) ( & hrxu5rhe3af . fdyoeqkdqi ) ,
2 , 0 , 81 } , { ( char_T * ) ( & hrxu5rhe3af . e2pe11pwxn ) , 8 , 0 , 31 } ,
{ ( char_T * ) ( & hrxu5rhe3af . p11kqkd5tq ) , 18 , 0 , 1 } , { ( char_T * )
( & hrxu5rhe3af . oxb0jyodnm . dmloqodxqz ) , 6 , 0 , 1 } , { ( char_T * ) (
& hrxu5rhe3af . oxb0jyodnm . k5qbhboafq ) , 2 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . bghekfjhrb . fbhgjn50of ) , 6 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . bghekfjhrb . ogcbvjea2u ) , 2 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . iyw4crazdc . cyzypjm5pc ) , 6 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . iyw4crazdc . dmwbxxl3xx ) , 2 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . npgo12zmto . emkgbeqqs5 ) , 6 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . npgo12zmto . cfhkcft2t2 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . prxbfmvl1en . dmloqodxqz ) , 6 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . prxbfmvl1en . k5qbhboafq ) , 2 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . n53cqmpcloj . fbhgjn50of ) , 6 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . n53cqmpcloj . ogcbvjea2u ) , 2 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . bqx0vc3mudn . cyzypjm5pc ) , 6 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . bqx0vc3mudn . dmwbxxl3xx ) , 2 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . bbjtuydtdkk . emkgbeqqs5 ) , 6 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . bbjtuydtdkk . cfhkcft2t2 ) , 2 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 27U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & hbv5azo3sw .
RandomSource1_MeanVal ) , 0 , 0 , 739 } , { ( char_T * ) ( & hbv5azo3sw .
yBlockOrdering_Y0 ) , 8 , 0 , 7 } , { ( char_T * ) ( & rtP_Spacecraft ) , 15
, 0 , 1 } , { ( char_T * ) ( & rtP_Earth ) , 17 , 0 , 1 } , { ( char_T * ) (
& rtP_Const ) , 19 , 0 , 1 } } ; static DataTypeTransitionTable rtPTransTable
= { 5U , rtPTransitions } ;
