#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "SensorsDT" , 14 , 8 } , {
"SpacecraftDT" , 15 , 744 } , { "EarthDT" , 16 , 176 } , { "mcbsajulppp" , 17
, 168 } , { "ConstDT" , 18 , 24 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T
) , sizeof ( SensorsDT ) , sizeof ( SpacecraftDT ) , sizeof ( EarthDT ) ,
sizeof ( mcbsajulppp ) , sizeof ( ConstDT ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" , "SensorsDT" ,
"SpacecraftDT" , "EarthDT" , "mcbsajulppp" , "ConstDT" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & o2y45zbt2m4 .
h20zeizqdi [ 0 ] ) , 0 , 0 , 301 } , { ( char_T * ) ( & o2y45zbt2m4 .
nh40mtprpn ) , 8 , 0 , 2 } , { ( char_T * ) ( & o2y45zbt2m4 . ik12ax5qrt .
m4ihnbxfaf [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & o2y45zbt2m4 .
cuglwsdmbh . m4ihnbxfaf [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( &
hrxu5rhe3af . buggjk4l1n [ 0 ] ) , 0 , 0 , 56 } , { ( char_T * ) ( &
hrxu5rhe3af . mj2w2pdzvf . LoggedData ) , 11 , 0 , 4 } , { ( char_T * ) ( &
hrxu5rhe3af . djim5bpjvv ) , 7 , 0 , 39 } , { ( char_T * ) ( & hrxu5rhe3af .
ckit2etwje ) , 10 , 0 , 5 } , { ( char_T * ) ( & hrxu5rhe3af . fdyoeqkdqi ) ,
2 , 0 , 67 } , { ( char_T * ) ( & hrxu5rhe3af . ozme2zffq1 ) , 8 , 0 , 7 } ,
{ ( char_T * ) ( & hrxu5rhe3af . p11kqkd5tq ) , 17 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 11U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & hbv5azo3sw .
RandomSource_MeanVal ) , 0 , 0 , 576 } , { ( char_T * ) ( & hbv5azo3sw .
yBlockOrdering_Y0 ) , 8 , 0 , 7 } , { ( char_T * ) ( & rtP_Spacecraft ) , 15
, 0 , 1 } , { ( char_T * ) ( & rtP_Earth ) , 16 , 0 , 1 } , { ( char_T * ) (
& rtP_Const ) , 18 , 0 , 1 } } ; static DataTypeTransitionTable rtPTransTable
= { 5U , rtPTransitions } ;
