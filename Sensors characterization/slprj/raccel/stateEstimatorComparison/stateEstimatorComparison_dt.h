#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "EarthDT" , 14 , 176 } , { "mcbsajulppp"
, 15 , 168 } , { "SpacecraftDT" , 16 , 688 } , { "ConstDT" , 17 , 24 } } ;
static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T )
, sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof (
uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T )
, sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof (
action_T ) , 2 * sizeof ( uint32_T ) , sizeof ( EarthDT ) , sizeof (
mcbsajulppp ) , sizeof ( SpacecraftDT ) , sizeof ( ConstDT ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"EarthDT" , "mcbsajulppp" , "SpacecraftDT" , "ConstDT" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & hfuaoawbo4x .
otudxcmy5f [ 0 ] ) , 0 , 0 , 214 } , { ( char_T * ) ( & ngg51vuviwy .
kpt4ony32r [ 0 ] ) , 0 , 0 , 56 } , { ( char_T * ) ( & ngg51vuviwy .
hrjm0bam31 . LoggedData ) , 11 , 0 , 10 } , { ( char_T * ) ( & ngg51vuviwy .
ed0iuyyld4 ) , 7 , 0 , 18 } , { ( char_T * ) ( & ngg51vuviwy . j3jpf41hkf ) ,
10 , 0 , 5 } , { ( char_T * ) ( & ngg51vuviwy . nasy3r03v3 ) , 2 , 0 , 62 } ,
{ ( char_T * ) ( & ngg51vuviwy . m0i4t4o4w4 ) , 8 , 0 , 8 } , { ( char_T * )
( & ngg51vuviwy . as0qpnsv3x ) , 15 , 0 , 1 } , { ( char_T * ) ( &
ngg51vuviwy . oeck1vxca3 . n0vodpbpn0 ) , 2 , 0 , 1 } , { ( char_T * ) ( &
ngg51vuviwy . ncyqqgn1fak . n0vodpbpn0 ) , 2 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 10U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & bjiazabmpo .
RandomSource1_MeanVal ) , 0 , 0 , 452 } , { ( char_T * ) ( & bjiazabmpo .
yBlockOrdering_Y0 ) , 8 , 0 , 3 } , { ( char_T * ) ( & rtP_Spacecraft ) , 16
, 0 , 1 } , { ( char_T * ) ( & rtP_Earth ) , 14 , 0 , 1 } , { ( char_T * ) (
& rtP_Const ) , 17 , 0 , 1 } } ; static DataTypeTransitionTable rtPTransTable
= { 5U , rtPTransitions } ;
