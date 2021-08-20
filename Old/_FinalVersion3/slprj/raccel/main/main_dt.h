#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "SensorsDT" , 14 , 8 } , {
"SpacecraftDT" , 15 , 744 } , { "struct_Ys0g6NvmxKEOD5COiDA9mC" , 16 , 64 } ,
{ "EarthDT" , 17 , 176 } , { "mcbsajulppp" , 18 , 168 } , { "ConstDT" , 19 ,
24 } , { "mbun5ikysk" , 20 , 36 } } ; static uint_T rtDataTypeSizes [ ] = {
sizeof ( real_T ) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof (
uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) ,
sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof (
int_T ) , sizeof ( void * ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) ,
sizeof ( SensorsDT ) , sizeof ( SpacecraftDT ) , sizeof (
struct_Ys0g6NvmxKEOD5COiDA9mC ) , sizeof ( EarthDT ) , sizeof ( mcbsajulppp )
, sizeof ( ConstDT ) , sizeof ( mbun5ikysk ) } ; static const char_T *
rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T" ,
"int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T"
, "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" , "SensorsDT" ,
"SpacecraftDT" , "struct_Ys0g6NvmxKEOD5COiDA9mC" , "EarthDT" , "mcbsajulppp"
, "ConstDT" , "mbun5ikysk" } ; static DataTypeTransition rtBTransitions [ ] =
{ { ( char_T * ) ( & o2y45zbt2m4 . mvqp5l5ufq [ 0 ] ) , 0 , 0 , 339 } , { (
char_T * ) ( & o2y45zbt2m4 . nh40mtprpn ) , 8 , 0 , 2 } , { ( char_T * ) ( &
o2y45zbt2m4 . ik12ax5qrt . nx1h2bs53u [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * )
( & o2y45zbt2m4 . cuglwsdmbh . nx1h2bs53u [ 0 ] ) , 0 , 0 , 6 } , { ( char_T
* ) ( & hrxu5rhe3af . h1ivipllz5 ) , 20 , 0 , 1 } , { ( char_T * ) ( &
hrxu5rhe3af . lwlvgtt2ve ) , 0 , 0 , 39 } , { ( char_T * ) ( & hrxu5rhe3af .
mj2w2pdzvf . LoggedData ) , 11 , 0 , 9 } , { ( char_T * ) ( & hrxu5rhe3af .
amd2k325eq ) , 7 , 0 , 42 } , { ( char_T * ) ( & hrxu5rhe3af . irqzxzls3s ) ,
10 , 0 , 5 } , { ( char_T * ) ( & hrxu5rhe3af . fdyoeqkdqi ) , 2 , 0 , 66 } ,
{ ( char_T * ) ( & hrxu5rhe3af . e2pe11pwxn ) , 8 , 0 , 32 } , { ( char_T * )
( & hrxu5rhe3af . p11kqkd5tq ) , 18 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 12U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & hbv5azo3sw .
RandomSource1_MeanVal ) , 0 , 0 , 513 } , { ( char_T * ) ( & hbv5azo3sw .
yBlockOrdering_Y0 ) , 8 , 0 , 5 } , { ( char_T * ) ( & rtP_Spacecraft ) , 15
, 0 , 1 } , { ( char_T * ) ( & rtP_Earth ) , 17 , 0 , 1 } , { ( char_T * ) (
& rtP_Const ) , 19 , 0 , 1 } } ; static DataTypeTransitionTable rtPTransTable
= { 5U , rtPTransitions } ;
