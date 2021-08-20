#include "main.h"
#include "main_private.h"
SpacecraftDT rtP_Spacecraft = { { 0.5 , - 0.5 , - 0.5 , 0.5 } , { 0.0 , 0.0 ,
0.0010490819691035681 } , { 8.009 , 8.009 , 1.251 } , { 0.072135616397576707
, 0.24604149333316847 , - 0.30305610791797055 } , { 0.06 , 0.04 , 0.04 , 0.06
, 0.06 , 0.04 , 0.01 , 0.01 , 0.01 , 0.01 } , { 0.15 , 0.0 , 0.0 , 0.0 , 0.1
, 0.0 , 0.0 , 0.0 , 0.1 , - 0.15 , 0.0 , 0.0 , 0.0 , - 1.0 , 0.0 , 0.0 , 0.0
, - 1.0 , 0.35 , 0.0 , 0.0 , - 0.35 , 0.0 , 0.0 , 0.35 , 0.0 , 0.0 , - 0.35 ,
0.0 , 0.0 } , { 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , - 1.0 ,
0.0 , 0.0 , 0.0 , - 1.0 , 0.0 , 0.0 , 0.0 , - 1.0 , 1.0 , 0.0 , 0.0 , - 1.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , - 1.0 , 0.0 , 0.0 } , { 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } } ; EarthDT rtP_Earth = { 398600.0 ,
6378.137 , 0.00108263 , 86164.27788 , { 500.0 , 600.0 , 700.0 , 800.0 , 900.0
, 1000.0 } , { 6.967e-13 , 1.454e-13 , 3.614e-14 , 1.17e-14 , 5.245e-15 ,
3.019e-15 } , { 63.822 , 71.835 , 88.667 , 124.64 , 181.05 , 268.0 } } ;
ConstDT rtP_Const = { 299792458.0 , 149597900.0 , 1361.0 } ; hbv5azo3swd
hbv5azo3sw = { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 0.5 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 4.4408920985006262E-16 , 0.5 , 2.0 , 1.0 , 0.5 , 1.0 , 1.0 , 1.0 , 0.5
, { 0.0 , 1.0 } , 1.0 , 0.5 , 1.0 , 1.0 , 1.0 , 0.5 , { 0.0 , 1.0 } , 1.0 ,
0.5 , 1.0 , 1.0 , 1.0 , 0.5 , { 0.0 , 1.0 } , 1.0 , 0.0 , 0.0 , - 1.0 , { -
1.0 , - 0.0 , - 0.0 , - 0.0 , - 1.0 , - 0.0 , - 0.0 , - 0.0 , - 1.0 } ,
0.0001 , 0.0 , 0.1 , 0.0001 , 0.0 , { 1.0E-5 , 0.0 , 0.0 , 0.0 , 1.0E-5 , 0.0
, 0.0 , 0.0 , 1.0E-5 } , 1.0 , 1.0E-14 , - 1.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0
, 2.0 , 2.0 , 2.0 , 2.0 , 0.0017453292519943296 , 1.0471975511965976 , -
1.0471975511965976 , 0.0017453292519943296 , 1.0471975511965976 , -
1.0471975511965976 , 0.0017453292519943296 , 1.0471975511965976 , -
1.0471975511965976 , 0.0017453292519943296 , 1.0471975511965976 , -
1.0471975511965976 , 0.0017453292519943296 , 1.0471975511965976 , -
1.0471975511965976 , 0.0017453292519943296 , 1.0471975511965976 , -
1.0471975511965976 , { 0.0017453292519943296 , 0.0 , 0.0 ,
0.0017453292519943296 } , - 1.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 ,
2.0 , 2.0 , 0.0017453292519943296 , 1.0471975511965976 , - 1.0471975511965976
, 0.0017453292519943296 , 1.0471975511965976 , - 1.0471975511965976 ,
0.0017453292519943296 , 1.0471975511965976 , - 1.0471975511965976 ,
0.0017453292519943296 , 1.0471975511965976 , - 1.0471975511965976 ,
0.0017453292519943296 , 1.0471975511965976 , - 1.0471975511965976 ,
0.0017453292519943296 , 1.0471975511965976 , - 1.0471975511965976 , {
0.0017453292519943296 , 0.0 , 0.0 , 0.0017453292519943296 } , - 1.0 , - 0.5 ,
200.0 , - 1.0 , - 1.0 , 0.005 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0
, 2.0 , 0.5 , 0.5 , - 1.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 , 2.0 ,
2.0 , 0.5 , 1.0E-14 , 1.5 , 5.0 , - 1.0 , - 1.0 , { 1.0 , 0.0 , 0.0 , 0.0 } ,
{ 0.0 , 0.0 , 0.0 , 0.0 , 2.5495097567963924E-6 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 2.5495097567963924E-6 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 2.5495097567963924E-6 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } , { 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0001 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0001 } , { 0.5 , - 0.5 , - 0.5 ,
0.5 , 0.0 , 0.0 , 0.0010490819691035681 } , { 0.0 , - 7128.137 , 0.0 } , {
0.0 , 0.0 , - 7.478 } , 3.0 , { 8.009 , 8.009 , 1.251 } , 0.5 , 0.5 , 0.5 ,
0.5 , 0.5 , 0.5 , { 0.01 , 0.01 , 0.05 } , 0.0 , 0.0 , 0.5 , 0.5 , 0.5 , 78.0
, 0.017453292519943295 , 1.0 , 1.0 , 1.3271244001E+11 , 1.496E+8 , 0.0167086
, 0.5 , 0.5 , 0.5 , - 102.0 , 0.0 , 0.0 , 23.4 , - 1.0 , 0.017453292519943295
, 1.0 , 1.0 , 0.5 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0
, 2.0 , 2.0 , - 3.0 , - 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , { 0.0 , 0.0 } , 1.0 , {
1.0 , 0.0 , 0.0 , 0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5
, 2.0 , 2.0 , 2.0 , { 0.0 , 0.0 } , 1.0 , { 0.70710678118654757 ,
0.70710678118654746 , 0.0 , 0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 ,
2.0 , 0.5 , 2.0 , 2.0 , 2.0 , { 0.0 , 0.0 } , 1.0 , { 6.123233995736766E-17 ,
1.0 , 0.0 , 0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0
, 2.0 , 2.0 , { - 0.0 , - 0.0 } , 1.0 , { 0.70710678118654757 , -
0.70710678118654746 , 0.0 , 0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 ,
2.0 , 0.5 , 2.0 , 2.0 , 2.0 , { 0.0 , 0.0 } , 1.0 , { 0.70710678118654757 ,
0.0 , 0.70710678118654746 , 0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 ,
2.0 , 0.5 , 2.0 , 2.0 , 2.0 , { 0.0 , 0.0 } , 1.0 , { 0.70710678118654757 ,
0.0 , - 0.70710678118654746 , 0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0
, 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , { - 0.0 , 0.0 } , 1.0 , { 1.0 , 0.0 , 0.0 ,
0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0
, { - 0.0 , - 0.0 } , 1.0 , { 0.70710678118654757 , 0.70710678118654746 , 0.0
, 0.0 } , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 ,
2.0 , { 0.0 , 0.0 } , 1.0 , { 6.123233995736766E-17 , 1.0 , 0.0 , 0.0 } , 0.5
, 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , { - 0.0 ,
- 0.0 } , 1.0 , { 0.70710678118654757 , - 0.70710678118654746 , 0.0 , 0.0 } ,
0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , { 0.0
, - 0.0 } , 1.0 , { 0.70710678118654757 , 0.0 , 0.70710678118654746 , 0.0 } ,
0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , { 0.0
, 0.0 } , 1.0 , { 0.70710678118654757 , 0.0 , - 0.70710678118654746 , 0.0 } ,
0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , 0.5 , 2.0 , 2.0 , 2.0 , {
8.009 , 8.009 , 1.251 } , 0 , 0 , 0 , 1 , 1 , 1 , 1 } ;
