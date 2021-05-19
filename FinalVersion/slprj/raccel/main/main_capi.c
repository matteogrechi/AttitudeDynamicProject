#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "main_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "main.h"
#include "main_capi.h"
#include "main_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"main/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 ,
TARGET_STRING ( "main/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 2 , 0 , TARGET_STRING ( "main/Gain3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 1 } , { 3 , 0 , TARGET_STRING ( "main/Sum1" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 2 } , { 4 , 0 , TARGET_STRING ( "main/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 5 , 0 , TARGET_STRING (
"main/Zero-Order Hold1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 3 } , { 6
, 0 , TARGET_STRING ( "main/Zero-Order Hold3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"main/Gyro reading/Cumulative Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 ,
4 } , { 8 , 0 , TARGET_STRING ( "main/Gyro reading/Random Source" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 4 } , { 9 , 0 , TARGET_STRING (
"main/PWM/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 1 } , { 10 , 0 , TARGET_STRING ( "main/PWM1/Variable Pulse Generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"main/PWM2/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 1 } , { 12 , 0 , TARGET_STRING ( "main/PWM3/Variable Pulse Generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 13 , 0 , TARGET_STRING (
"main/PWM4/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 1 } , { 14 , 0 , TARGET_STRING ( "main/PWM5/Variable Pulse Generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 15 , 0 , TARGET_STRING (
"main/Real physics/Constant2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 }
, { 16 , 0 , TARGET_STRING ( "main/Real physics/Constant3" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 5 } , { 17 , 0 , TARGET_STRING (
"main/Real physics/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , {
18 , 0 , TARGET_STRING ( "main/Subsystem/Matrix Concatenate" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
"main/Subsystem/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 20 ,
19 , TARGET_STRING ( "main/Subsystem1/MATLAB Function1" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 3 } , { 21 , 19 , TARGET_STRING (
"main/Subsystem1/MATLAB Function1" ) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 ,
3 } , { 22 , 26 , TARGET_STRING ( "main/Subsystem3/MATLAB Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 3 } , { 23 , 26 , TARGET_STRING (
"main/Subsystem3/MATLAB Function1" ) , TARGET_STRING ( "" ) , 1 , 0 , 5 , 0 ,
3 } , { 24 , 33 , TARGET_STRING ( "main/Unscented Kalman Filter1/Correct1" )
, TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 3 } , { 25 , 35 , TARGET_STRING (
"main/Unscented Kalman Filter1/Correct2" ) , TARGET_STRING ( "" ) , 0 , 1 , 2
, 0 , 3 } , { 26 , 42 , TARGET_STRING (
"main/Unscented Kalman Filter1/Subsystem" ) , TARGET_STRING ( "" ) , 0 , 0 ,
6 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"main/Real physics/Gravity gradient (torque only)/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 5 } , { 28 , 0 , TARGET_STRING (
"main/Real physics/Gravity gradient (torque only)/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 5 } , { 29 , 0 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 30 , 0 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 2 } , { 31 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Constant" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 5 } , { 32 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Constant1" ) , TARGET_STRING ( "" ) , 0
, 0 , 7 , 0 , 5 } , { 33 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Integrator" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 2 } , { 34 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sum" ) , TARGET_STRING (
"Sun wrt s/c [Earth inertial frame][km]" ) , 0 , 0 , 0 , 0 , 2 } , { 35 , 0 ,
TARGET_STRING ( "main/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 36 , 0 , TARGET_STRING (
"main/Real physics/Translational dynamic/Sum" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 2 } , { 37 , 0 , TARGET_STRING (
"main/Subsystem/Cross Product/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 2 } , { 38 , 0 , TARGET_STRING ( "main/Subsystem/Cross Product1/Add3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 39 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector/Math Function1" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 2 } , { 40 , 15 , TARGET_STRING (
"main/Subsystem/Normalize Vector/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 41 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector1/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 2 } , { 42 , 16 , TARGET_STRING (
"main/Subsystem/Normalize Vector1/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 43 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 2 } , { 44 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 45 , 17 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 46 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 2 } , { 47 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 48 , 18 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 2 } , { 49 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 50 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 51 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 52 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 53 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 54 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 55 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 56 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 57 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 58 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 59 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 60 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 61 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 62 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 63 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 64 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 65 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 66 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 67 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 68 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 69 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 70 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 71 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 4 , 0 , 6 } , { 72 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 3 } , { 73 , 0 , TARGET_STRING (
"main/Subsystem4/Cross Product/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0
, 5 } , { 74 , 33 , TARGET_STRING (
"main/Unscented Kalman Filter1/Correct1/Correct" ) , TARGET_STRING ( "" ) , 2
, 1 , 2 , 0 , 3 } , { 75 , 35 , TARGET_STRING (
"main/Unscented Kalman Filter1/Correct2/Correct" ) , TARGET_STRING ( "" ) , 2
, 1 , 2 , 0 , 3 } , { 76 , 42 , TARGET_STRING (
"main/Unscented Kalman Filter1/Subsystem/Data Store Read" ) , TARGET_STRING (
"" ) , 0 , 0 , 6 , 0 , 0 } , { 77 , 0 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Cartesian to polar/Atan1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 78 , 0 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Vector magnitude and direction2/Square Root"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 79 , 0 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V1/Sum" ) , TARGET_STRING ( "" ) , 0 ,
0 , 2 , 0 , 2 } , { 80 , 0 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V2/Sum" ) , TARGET_STRING ( "" ) , 0 ,
0 , 2 , 0 , 2 } , { 81 , 0 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V3/Sum" ) , TARGET_STRING ( "" ) , 0 ,
0 , 2 , 0 , 2 } , { 82 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Euler equations (rigid body) /Divide" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 83 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Euler equations (rigid body) /Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 5 } , { 84 , 0 , TARGET_STRING (
 "main/Real physics/Rotational dynamic/Kinematics with quaternions/Matrix Multiply"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 2 } , { 85 , 0 , TARGET_STRING (
 "main/Real physics/Solar radiation pressure (torque only)/Solar radiation pressure/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 86 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 87 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Divide1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 88 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 89 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Sqrt" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 90 , 0 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Square" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 5 } , { 91 , 0 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/trace(DCM)/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 92 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 93 , 3 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 94 , 4 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 95 , 5 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 96 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 97 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 98 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 99 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 100 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 101 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 102 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 103 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 104 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 105 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 106 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 107 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 108 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 109 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 110 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 111 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 112 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 113 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 114 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 115 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 116 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 117 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 118 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 119 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 120 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 121 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 122 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 123 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 124 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 125 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 126 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 127 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 128 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 129 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 130 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 131 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 132 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 133 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 134 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 135 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 136 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 137 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 138 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 139 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 140 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 141 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 142 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 143 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 144 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 145 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 146 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 147 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 148 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 149 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 150 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 151 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 152 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 153 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 154 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 155 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 156 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 157 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 158 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 159 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 160 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 161 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 162 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 163 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 164 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 165 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 166 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 167 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 168 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 169 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 170 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 171 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 172 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 173 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 174 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 175 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 176 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 177 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 178 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 179 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 180 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 181 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 182 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 183 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 184 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 185 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 186 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 187 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 188 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 189 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 190 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 191 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 192 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 193 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 194 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 195 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 196 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 197 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 198 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 199 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 200 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 201 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 202 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 203 , 0 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 204 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 205 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 206 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 207 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 208 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 209 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 210 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 211 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 212 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 213 , TARGET_STRING ( "main/PWM" ) ,
TARGET_STRING ( "Period" ) , 0 , 2 , 0 } , { 214 , TARGET_STRING (
"main/PWM1" ) , TARGET_STRING ( "Period" ) , 0 , 2 , 0 } , { 215 ,
TARGET_STRING ( "main/PWM2" ) , TARGET_STRING ( "Period" ) , 0 , 2 , 0 } , {
216 , TARGET_STRING ( "main/PWM3" ) , TARGET_STRING ( "Period" ) , 0 , 2 , 0
} , { 217 , TARGET_STRING ( "main/PWM4" ) , TARGET_STRING ( "Period" ) , 0 ,
2 , 0 } , { 218 , TARGET_STRING ( "main/PWM5" ) , TARGET_STRING ( "Period" )
, 0 , 2 , 0 } , { 219 , TARGET_STRING ( "main/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 220 , TARGET_STRING ( "main/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 221 , TARGET_STRING ( "main/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 222 , TARGET_STRING (
"main/Gain3" ) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 223 ,
TARGET_STRING ( "main/Gyro reading/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 2
, 0 } , { 224 , TARGET_STRING ( "main/Gyro reading/Random Source" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 2 , 0 } , { 225 , TARGET_STRING (
"main/Gyro reading/Random Source" ) , TARGET_STRING ( "VarianceRTP" ) , 0 , 2
, 0 } , { 226 , TARGET_STRING ( "main/Gyro reading/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 2 , 0 } , { 227 , TARGET_STRING (
"main/Gyro reading/Random Source1" ) , TARGET_STRING ( "VarianceRTP" ) , 0 ,
2 , 0 } , { 228 , TARGET_STRING ( "main/Real physics/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 229 , TARGET_STRING (
"main/Real physics/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , {
230 , TARGET_STRING ( "main/Real physics/Inertia" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 231 , TARGET_STRING ( "main/Real physics/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 232 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions" ) , TARGET_STRING (
"action" ) , 0 , 2 , 0 } , { 233 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions" ) , TARGET_STRING (
"tolerance" ) , 0 , 2 , 0 } , { 234 , TARGET_STRING (
"main/Subsystem/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) , 0 , 2 , 0
} , { 235 , TARGET_STRING ( "main/Subsystem/Normalize Vector1" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 2 , 0 } , { 236 , TARGET_STRING (
"main/Subsystem/Normalize Vector3" ) , TARGET_STRING ( "maxzero" ) , 0 , 2 ,
0 } , { 237 , TARGET_STRING ( "main/Subsystem/Normalize Vector4" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 2 , 0 } , { 238 , TARGET_STRING (
"main/Subsystem/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 239 ,
TARGET_STRING ( "main/Subsystem4/Inertia" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 240 , TARGET_STRING ( "main/Subsystem4/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 241 , TARGET_STRING ( "main/Subsystem4/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 242 , TARGET_STRING (
"main/Unscented Kalman Filter1/DataStoreMemory - P" ) , TARGET_STRING (
"InitialValue" ) , 0 , 9 , 0 } , { 243 , TARGET_STRING (
"main/Unscented Kalman Filter1/DataStoreMemory - x" ) , TARGET_STRING (
"InitialValue" ) , 0 , 6 , 0 } , { 244 , TARGET_STRING (
"main/Unscented Kalman Filter1/BlockOrdering" ) , TARGET_STRING ( "Value" ) ,
1 , 2 , 0 } , { 245 , TARGET_STRING ( "main/Unscented Kalman Filter1/Enable1"
) , TARGET_STRING ( "Value" ) , 1 , 2 , 0 } , { 246 , TARGET_STRING (
"main/Unscented Kalman Filter1/Enable2" ) , TARGET_STRING ( "Value" ) , 1 , 2
, 0 } , { 247 , TARGET_STRING ( "main/Unscented Kalman Filter1/Enable3" ) ,
TARGET_STRING ( "Value" ) , 1 , 2 , 0 } , { 248 , TARGET_STRING (
"main/Unscented Kalman Filter1/MeasurementFcn3Inputs" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 249 , TARGET_STRING (
"main/Unscented Kalman Filter1/Q" ) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 }
, { 250 , TARGET_STRING ( "main/Unscented Kalman Filter1/R1" ) ,
TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 251 , TARGET_STRING (
"main/Unscented Kalman Filter1/R2" ) , TARGET_STRING ( "Value" ) , 0 , 10 , 0
} , { 252 , TARGET_STRING ( "main/Unscented Kalman Filter1/R3" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 253 , TARGET_STRING (
"main/Real physics/Gravity gradient (torque only)/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 254 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Spacecraft magnetic dipole [body reference frame]"
) , TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 255 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/a" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 256 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/e" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 257 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/θ - (78° = 21st March)" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 258 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/μ Sun" ) , TARGET_STRING ( "Value"
) , 0 , 2 , 0 } , { 259 , TARGET_STRING (
"main/Real physics/Translational dynamic/Integrator" ) , TARGET_STRING (
"AbsoluteTolerance" ) , 0 , 2 , 0 } , { 260 , TARGET_STRING (
"main/Real physics/Translational dynamic/Integrator1" ) , TARGET_STRING (
"AbsoluteTolerance" ) , 0 , 2 , 0 } , { 261 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Merge" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 11 , 0 } , { 262 , TARGET_STRING (
"main/Subsystem/Normalize Vector/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 263 , TARGET_STRING (
"main/Subsystem/Normalize Vector1/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 264 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 265 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 266 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 267 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 268 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 269 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 270 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 271 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 272 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 273 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 274 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 275 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 276 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 277 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 278 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 279 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 280 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 281 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 282 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 283 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 284 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 285 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 286 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 287 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 288 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 289 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 290 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 291 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 292 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 293 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 294 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 295 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 296 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 297 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 298 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 299 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 300 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 301 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 302 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 303 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 304 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 305 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 306 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 307 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 308 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 309 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 310 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 311 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 312 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 313 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 314 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 315 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 316 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 317 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 318 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 319 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 320 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 321 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 322 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 323 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 324 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 325 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 326 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 327 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 328 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 329 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 330 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 331 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 332 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 333 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 334 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 335 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 336 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 337 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 338 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 339 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 340 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 341 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 342 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 343 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 344 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 345 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 346 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 347 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 348 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 349 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 350 , TARGET_STRING (
"main/Unscented Kalman Filter1/Correct1/yBlockOrdering" ) , TARGET_STRING (
"InitialOutput" ) , 1 , 2 , 0 } , { 351 , TARGET_STRING (
"main/Unscented Kalman Filter1/Correct2/yBlockOrdering" ) , TARGET_STRING (
"InitialOutput" ) , 1 , 2 , 0 } , { 352 , TARGET_STRING (
"main/Unscented Kalman Filter1/Correct3/yBlockOrdering" ) , TARGET_STRING (
"InitialOutput" ) , 1 , 2 , 0 } , { 353 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion conjugate/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 354 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/y rotation/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 355 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/y rotation/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 356 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/z rotation/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 357 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/z rotation/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 358 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V1/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 359 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V1/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 360 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V1/Gain1" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 361 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V1/Gain2" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 362 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 363 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V2/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 364 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V2/Gain1" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 365 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V2/Gain2" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 366 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V3/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 2 , 0 } , { 367 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V3/Gain" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 368 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V3/Gain1" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 369 , TARGET_STRING (
"main/Real physics/Quaternion Rotation/V3/Gain2" ) , TARGET_STRING ( "Gain" )
, 0 , 2 , 0 } , { 370 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Kinematics with quaternions/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 371 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 372 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 373 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 374 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Angle between 3rd Jan to 21st March - 180°"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 375 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 376 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant5" )
, TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 377 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Ecliptic" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 378 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 379 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 380 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 381 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 382 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 383 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 384 , TARGET_STRING (
"main/Real physics/Translational dynamic/Main contribution/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 385 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 386 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 387 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 388 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 389 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 390 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 391 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 392 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 393 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 394 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 395 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 396 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 397 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 398 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 399 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 400 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 401 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 402 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 403 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 404 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 405 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 406 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 407 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 408 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 409 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 410 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 411 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 412 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 413 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 414 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 415 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 416 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 417 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 418 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 419 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 420 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 421 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 422 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 423 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 424 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Degrees to Radians/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 425 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 426 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 427 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Rotation Angles to Quaternions/1//2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 428 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 429 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 430 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 431 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 432 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 433 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 434 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 435 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 436 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 437 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 438 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 439 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 440 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 441 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 442 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 443 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 444 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 445 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 446 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 447 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 448 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 449 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 450 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 451 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 452 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 453 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 454 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 455 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 456 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 457 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 458 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 459 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 460 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 461 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 462 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 463 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 464 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 465 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 466 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 467 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 468 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 469 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 470 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 471 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 472 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 473 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 474 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 475 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 476 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 477 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 478 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 479 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 480 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 481 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 482 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 483 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 484 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 485 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 486 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 487 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 488 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 489 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 490 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 491 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 492 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 493 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 494 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 495 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 496 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 497 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 498 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 499 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 500 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 501 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 502 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 503 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 504 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 505 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 506 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 507 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 508 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 509 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 510 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 511 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 512 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 513 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 514 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 515 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 516 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 517 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 518 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 519 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 520 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 521 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 522 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 523 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 524 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 525 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 526 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 527 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 528 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 529 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 530 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 531 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 532 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 533 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 534 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 535 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 536 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 537 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 538 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 539 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 540 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 541 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 542 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 543 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 544 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 545 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 546 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 547 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 548 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 549 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 550 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 551 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 552 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 553 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 554 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 555 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 556 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 557 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 558 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 559 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 560 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 561 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 562 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 563 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 564 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 565 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 566 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 567 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 568 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 569 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 570 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 571 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 572 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 573 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 574 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 575 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 576 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 577 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 578 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 579 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 580 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 581 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 582 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 583 , TARGET_STRING (
"main/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 584 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 585 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 586 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 587 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 588 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 589 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 590 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 591 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 592 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 593 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 594 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 595 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 596 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 597 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 598 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 599 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 600 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 601 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 602 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 603 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 604 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 605 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 606 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 607 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 608 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 609 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 610 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 611 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 612 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 613 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 614 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 615 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 616 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 617 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 618 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 619 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 3 , 0 } , { 620 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 621 , 0 ,
TARGET_STRING ( "main/Real physics/Rotational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 , 1 , - 1 , 0
} , { 622 , 6 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Integrator1" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 2 , 1 , - 1 , 0 } , { 623 , 11 ,
TARGET_STRING ( "main/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 , 1 , - 1 , 0
} , { 624 , 3 , TARGET_STRING (
"main/Real physics/Translational dynamic/Integrator1" ) , TARGET_STRING ( ""
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 , 1 , - 1 , 0 } , { 625 , 10 ,
TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 , 1 , - 1 , 0
} , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1
, 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL
) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 626 ,
TARGET_STRING ( "Spacecraft" ) , 2 , 2 , 0 } , { 627 , TARGET_STRING (
"Earth" ) , 3 , 2 , 0 } , { 628 , TARGET_STRING ( "Const" ) , 4 , 2 , 0 } , {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & o2y45zbt2m4 . op4p3vooky [ 0 ] , &
o2y45zbt2m4 . c1cfxe21zn [ 0 ] , & o2y45zbt2m4 . fkulvx00jr [ 0 ] , &
o2y45zbt2m4 . al2bqvraok [ 0 ] , & o2y45zbt2m4 . g4hdycezvh [ 0 ] , &
o2y45zbt2m4 . mdvmrfnqkz [ 0 ] , & o2y45zbt2m4 . g20nolxhoz [ 0 ] , &
o2y45zbt2m4 . p0g2tnevfk [ 0 ] , & o2y45zbt2m4 . lfqykqi1sg [ 0 ] , &
o2y45zbt2m4 . ftjowoqghq , & o2y45zbt2m4 . psapwntjo4 , & o2y45zbt2m4 .
pjlzlhabnw , & o2y45zbt2m4 . px02m2ansm , & o2y45zbt2m4 . lzgno0c45u , &
o2y45zbt2m4 . frbnnz0j20 , & o2y45zbt2m4 . amepcbkksg [ 0 ] , & o2y45zbt2m4 .
fi1wde2gl2 [ 0 ] , & o2y45zbt2m4 . mvqp5l5ufq [ 0 ] , & o2y45zbt2m4 .
an1hct1vdk [ 0 ] , & o2y45zbt2m4 . cbgxsqe0kg [ 0 ] , & o2y45zbt2m4 .
cuglwsdmbh . m4ihnbxfaf [ 0 ] , & o2y45zbt2m4 . cuglwsdmbh . bjttcelbng [ 0 ]
, & o2y45zbt2m4 . ik12ax5qrt . m4ihnbxfaf [ 0 ] , & o2y45zbt2m4 . ik12ax5qrt
. bjttcelbng [ 0 ] , & o2y45zbt2m4 . niydxw3dug , & o2y45zbt2m4 . nh40mtprpn
, & o2y45zbt2m4 . kncngnrvsh [ 0 ] , & o2y45zbt2m4 . culrexdnyf , &
o2y45zbt2m4 . ambhfazf2y [ 0 ] , & o2y45zbt2m4 . mfc3g102pw [ 0 ] , &
o2y45zbt2m4 . nyoyhdwzhr , & o2y45zbt2m4 . lx0bv1yu1i [ 0 ] , & o2y45zbt2m4 .
a55nsryplm [ 0 ] , & o2y45zbt2m4 . h20zeizqdi [ 0 ] , & o2y45zbt2m4 .
fj4e2b5bch [ 0 ] , & o2y45zbt2m4 . hnvlhc15na [ 0 ] , & o2y45zbt2m4 .
gbu5abs2sz [ 0 ] , & o2y45zbt2m4 . gnzoqn2dsl [ 0 ] , & o2y45zbt2m4 .
pguc21lp1k [ 0 ] , & o2y45zbt2m4 . kwx5xj2ngl , & o2y45zbt2m4 . inxuhwzyyf [
0 ] , & o2y45zbt2m4 . ngj1laz0jn , & o2y45zbt2m4 . m4a4e0kncl [ 0 ] , &
o2y45zbt2m4 . gnhb3isuhw , ( & o2y45zbt2m4 . an1hct1vdk [ 0 ] + 3 ) , &
o2y45zbt2m4 . j5pfxwzlry [ 0 ] , & o2y45zbt2m4 . isiqvhsvds , ( & o2y45zbt2m4
. an1hct1vdk [ 0 ] + 6 ) , & o2y45zbt2m4 . du4yqg3svc [ 0 ] , & o2y45zbt2m4 .
mkpovvsjoj [ 0 ] , & o2y45zbt2m4 . aoe02aounf [ 0 ] , & o2y45zbt2m4 .
nyimkzd5hq [ 0 ] , & o2y45zbt2m4 . hiigrn3uvx [ 0 ] , & o2y45zbt2m4 .
cddswdr3cl [ 0 ] , & o2y45zbt2m4 . fllsexxjfy [ 0 ] , & o2y45zbt2m4 .
a2f0ypmsuy [ 0 ] , & o2y45zbt2m4 . obyw5bjsqt [ 0 ] , & o2y45zbt2m4 .
ch2k5w2dnh [ 0 ] , & o2y45zbt2m4 . fp4h0u1qqq [ 0 ] , & o2y45zbt2m4 .
ipb4qp4laq [ 0 ] , & o2y45zbt2m4 . fe3icz0afg [ 0 ] , & o2y45zbt2m4 .
cktw3suarj [ 0 ] , & o2y45zbt2m4 . pcu5wlt0ol [ 0 ] , & o2y45zbt2m4 .
jf0z5nzend [ 0 ] , & o2y45zbt2m4 . nvj2jobsne [ 0 ] , & o2y45zbt2m4 .
efvttc54la [ 0 ] , & o2y45zbt2m4 . mfythxhofy [ 0 ] , & o2y45zbt2m4 .
af3pwylngk [ 0 ] , & o2y45zbt2m4 . diblvbf0co [ 0 ] , & o2y45zbt2m4 .
fk5zqxuz3h [ 0 ] , & o2y45zbt2m4 . avq3ivsxoj [ 0 ] , & o2y45zbt2m4 .
gqbzn03dkr [ 0 ] , & o2y45zbt2m4 . cztzhrui22 [ 0 ] , & o2y45zbt2m4 .
kuqlbidad1 [ 0 ] , & o2y45zbt2m4 . niydxw3dug , & o2y45zbt2m4 . nh40mtprpn ,
& o2y45zbt2m4 . kncngnrvsh [ 0 ] , & o2y45zbt2m4 . jjuwpyarp5 , & o2y45zbt2m4
. ggrj4lwkdq , & o2y45zbt2m4 . hwkzvkas3c , & o2y45zbt2m4 . pvehregqxn , &
o2y45zbt2m4 . fqzn4ufnnm , & o2y45zbt2m4 . jg5xwtwjpe [ 0 ] , & o2y45zbt2m4 .
jq2aut2ijb [ 0 ] , & o2y45zbt2m4 . bwu3hh5pg3 [ 0 ] , & o2y45zbt2m4 .
mvnud1uzgl , & o2y45zbt2m4 . hckf2ailv0 , & o2y45zbt2m4 . iunb01rvwp , &
o2y45zbt2m4 . bfud51xipp , & o2y45zbt2m4 . kp1mzqwbu3 , & o2y45zbt2m4 .
ltnksa0t1k , & o2y45zbt2m4 . jgyobyjg0x , & o2y45zbt2m4 . mrzwmqiqje , &
o2y45zbt2m4 . b51zos5ddd , & o2y45zbt2m4 . hi5t21up55 , & o2y45zbt2m4 .
mz4bssc4xj , & o2y45zbt2m4 . ebby2e0eey , & o2y45zbt2m4 . kc5uinuva1 , &
o2y45zbt2m4 . olg5gqva4k , & o2y45zbt2m4 . ny5fqojp01 , & o2y45zbt2m4 .
mwkxuoztcf , & o2y45zbt2m4 . g42bdhp2mr , & o2y45zbt2m4 . gegkjzomxm , &
o2y45zbt2m4 . kd1qxjhyrr , & o2y45zbt2m4 . pgs5royztd , & o2y45zbt2m4 .
eqlu1laly1 , & o2y45zbt2m4 . c4imsujsyj , & o2y45zbt2m4 . ewg4gsarwm , &
o2y45zbt2m4 . myxilkpyto , & o2y45zbt2m4 . nfvbvcsgaf , & o2y45zbt2m4 .
jyoiaqgash , & o2y45zbt2m4 . am2ydxy3tg , & o2y45zbt2m4 . aayx0clngf , &
o2y45zbt2m4 . imjovcvzmj , & o2y45zbt2m4 . fhwu2rpyxm , & o2y45zbt2m4 .
db5wedrkq4 , & o2y45zbt2m4 . bzsae5g150 , & o2y45zbt2m4 . fxqr3to5iu , &
o2y45zbt2m4 . b3deffzvww , & o2y45zbt2m4 . jzcgup51f2 , & o2y45zbt2m4 .
aqvhjylunl , & o2y45zbt2m4 . pmy5icug2k , & o2y45zbt2m4 . pxdeyipxtr , &
o2y45zbt2m4 . cepjmd5gi4 , & o2y45zbt2m4 . a3l2vrrg5t , & o2y45zbt2m4 .
pmjdaqsrgv , & o2y45zbt2m4 . ivk2auaags , & o2y45zbt2m4 . hmdscxhrrq , &
o2y45zbt2m4 . ks0a4vmt2y , & o2y45zbt2m4 . fuxsypdw5b , & o2y45zbt2m4 .
ibibxo1hc5 , & o2y45zbt2m4 . e0g1epmzzc , & o2y45zbt2m4 . pvujvtillf , &
o2y45zbt2m4 . bralaspqvj , & o2y45zbt2m4 . mf042bbyls , & o2y45zbt2m4 .
pvvuqzjxh5 , & o2y45zbt2m4 . jkdvlxhrn3 , & o2y45zbt2m4 . nd0vnjuzbo , &
o2y45zbt2m4 . ke44k2nvd3 , & o2y45zbt2m4 . bvbwt2i4ty , & o2y45zbt2m4 .
bckqvwne10 , & o2y45zbt2m4 . icooi3vgxr , & o2y45zbt2m4 . nhfh5pwjge , &
o2y45zbt2m4 . ekeiqfqt15 , & o2y45zbt2m4 . fu44uyydbm , & o2y45zbt2m4 .
nrvyadhccn , & o2y45zbt2m4 . kif43ukmno , & o2y45zbt2m4 . lvap1gibsy , &
o2y45zbt2m4 . fjgl0ynn23 , & o2y45zbt2m4 . dlywnze0gh , & o2y45zbt2m4 .
evt22h0udz , & o2y45zbt2m4 . hr5yavkh2g , & o2y45zbt2m4 . a3453wdy3h , &
o2y45zbt2m4 . ln15xtukoj , & o2y45zbt2m4 . ofev2a4bu4 , & o2y45zbt2m4 .
iak2iehb01 , & o2y45zbt2m4 . gy5dnmc0o2 , & o2y45zbt2m4 . bemlv143br , &
o2y45zbt2m4 . hsxdwr2kap , & o2y45zbt2m4 . cikadflncr , & o2y45zbt2m4 .
d55wbumkta , & o2y45zbt2m4 . ftiqxo4eic , & o2y45zbt2m4 . dg3licanvf , &
o2y45zbt2m4 . fd0i4zg4gl , & o2y45zbt2m4 . nmsyyhec3k , & o2y45zbt2m4 .
akaurxf5cn , & o2y45zbt2m4 . fjb4t2g0di , & o2y45zbt2m4 . eps1xh200d , &
o2y45zbt2m4 . dbdvnfbtan , & o2y45zbt2m4 . nqoad4oagc , & o2y45zbt2m4 .
ornbl4mfau , & o2y45zbt2m4 . gq23czohqi , & o2y45zbt2m4 . gree3bakbj , &
o2y45zbt2m4 . m13nwgsfs4 , & o2y45zbt2m4 . brdq13y0qd , & o2y45zbt2m4 .
h3xp3qlim0 , & o2y45zbt2m4 . b1pqf2pbpp , & o2y45zbt2m4 . ek204bmiea , &
o2y45zbt2m4 . aqwdecxidu , & o2y45zbt2m4 . daikka42e3 , & o2y45zbt2m4 .
ga4ycdonne , & o2y45zbt2m4 . dpkcgsd4ym , & o2y45zbt2m4 . pihfnbloym , &
o2y45zbt2m4 . a5drqsjnex , & o2y45zbt2m4 . ndlxlyobzb , & o2y45zbt2m4 .
h5gslldsar , & o2y45zbt2m4 . c23uk112gn , & o2y45zbt2m4 . eq1sfn3btk , &
o2y45zbt2m4 . jhqy0zwmu3 , & o2y45zbt2m4 . iuke2eyfra , & o2y45zbt2m4 .
bw33cb1smq , & o2y45zbt2m4 . kwmlekgm0w , & o2y45zbt2m4 . fjxh2v44zo , &
o2y45zbt2m4 . ei2iplcloo , & o2y45zbt2m4 . dpw0lpwtco , & o2y45zbt2m4 .
i01jbvlzhi , & o2y45zbt2m4 . ksqsb0wny4 , & o2y45zbt2m4 . d224533rgj , &
o2y45zbt2m4 . d0h2bkxm2a , & o2y45zbt2m4 . jpbug4sdyr , & o2y45zbt2m4 .
llcjil2ppz , & o2y45zbt2m4 . kp0ottklv2 , & o2y45zbt2m4 . d4h0eb221l , &
o2y45zbt2m4 . ajeydhy34x , & o2y45zbt2m4 . kyx4elghw5 , & o2y45zbt2m4 .
ightd03wbw , & o2y45zbt2m4 . boco0ydrhx , & o2y45zbt2m4 . kgibrayejc , &
o2y45zbt2m4 . klod4yztvz , & o2y45zbt2m4 . gr0fttz1x3 , & o2y45zbt2m4 .
lj2hsiefmb , & o2y45zbt2m4 . pqwrcdv51y , & o2y45zbt2m4 . gkj1c4ecpo , &
hbv5azo3sw . PWM_Period , & hbv5azo3sw . PWM1_Period , & hbv5azo3sw .
PWM2_Period , & hbv5azo3sw . PWM3_Period , & hbv5azo3sw . PWM4_Period , &
hbv5azo3sw . PWM5_Period , & hbv5azo3sw . Gain_Gain_eb5rzn1cjw , & hbv5azo3sw
. Gain1_Gain_i4m04mlldw , & hbv5azo3sw . Gain2_Gain_lwwetqjf5s , & hbv5azo3sw
. Gain3_Gain_b5qqmritsc , & hbv5azo3sw . Gain_Gain_jtp3rrvu3s , & hbv5azo3sw
. RandomSource_MeanVal , & hbv5azo3sw . RandomSource_VarianceRTP , &
hbv5azo3sw . RandomSource1_MeanVal , & hbv5azo3sw . RandomSource1_VarianceRTP
, & hbv5azo3sw . Constant2_Value_ialq4qchdp [ 0 ] , & hbv5azo3sw .
Constant3_Value [ 0 ] , & hbv5azo3sw . Inertia_Value [ 0 ] , & hbv5azo3sw .
Gain_Gain_cpl3z33sd4 , & hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action , & hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance , & hbv5azo3sw .
NormalizeVector_maxzero_idjlccn1tr , & hbv5azo3sw . NormalizeVector1_maxzero
, & hbv5azo3sw . NormalizeVector3_maxzero , & hbv5azo3sw .
NormalizeVector4_maxzero , & hbv5azo3sw . Gain_Gain_acmfvzt2nt , & hbv5azo3sw
. Inertia_Value_ionitpmuar [ 0 ] , & hbv5azo3sw . Gain_Gain_bi5br4oxvh , &
hbv5azo3sw . Gain1_Gain_cftaqvkxoi , & hbv5azo3sw .
DataStoreMemoryP_InitialValue [ 0 ] , & hbv5azo3sw .
DataStoreMemoryx_InitialValue [ 0 ] , & hbv5azo3sw . BlockOrdering_Value , &
hbv5azo3sw . Enable1_Value , & hbv5azo3sw . Enable2_Value , & hbv5azo3sw .
Enable3_Value , & hbv5azo3sw . MeasurementFcn3Inputs_Value , & hbv5azo3sw .
Q_Value [ 0 ] , & hbv5azo3sw . R1_Value [ 0 ] , & hbv5azo3sw . R2_Value [ 0 ]
, & hbv5azo3sw . R3_Value [ 0 ] , & hbv5azo3sw . Gain1_Gain_l1jki2u5fa , &
hbv5azo3sw . Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] , &
hbv5azo3sw . a_Value , & hbv5azo3sw . e_Value , & hbv5azo3sw .
u821stMarch_Value , & hbv5azo3sw . Sun_Value , & hbv5azo3sw .
Integrator_AbsoluteTolerance , & hbv5azo3sw . Integrator1_AbsoluteTolerance ,
& hbv5azo3sw . Merge_InitialOutput [ 0 ] , & hbv5azo3sw .
Constant_Value_fjyq3eus5i , & hbv5azo3sw . Constant_Value_cpj53jxfos , &
hbv5azo3sw . Constant_Value_ouyamitdob , & hbv5azo3sw .
Constant_Value_guhbgdhd5y , & hbv5azo3sw . NormalizeVector_maxzero_bhjxf3hbxp
, & hbv5azo3sw . Constant_Value_k3ydr0xveb [ 0 ] , & hbv5azo3sw .
Sensororientation_Value [ 0 ] , & hbv5azo3sw . Saturation_UpperSat_hvo4j1520s
, & hbv5azo3sw . Saturation_LowerSat_anwhzkhsgm , & hbv5azo3sw .
RandomSource1_MeanVal_bvk35h21mf , & hbv5azo3sw .
RandomSource1_VarianceRTP_k1b5meiqjj , & hbv5azo3sw .
NormalizeVector_maxzero_nx4f2adafg , & hbv5azo3sw . Constant_Value_cknsmwduvj
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_hlfjdstuhw [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_m5walzmpht , & hbv5azo3sw .
Saturation_LowerSat_kiy0a1gdvs , & hbv5azo3sw .
RandomSource1_MeanVal_cgugych5h2 , & hbv5azo3sw .
RandomSource1_VarianceRTP_pdcijtaj4d , & hbv5azo3sw .
NormalizeVector_maxzero_j5wdotj0ar , & hbv5azo3sw . Constant_Value_mxxxqc2s25
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_cwstcpopt3 [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_m5kmh5w5uw , & hbv5azo3sw .
Saturation_LowerSat_i04nwcukho , & hbv5azo3sw .
RandomSource1_MeanVal_d4idhl1tz1 , & hbv5azo3sw .
RandomSource1_VarianceRTP_crqc3mkc0f , & hbv5azo3sw .
NormalizeVector_maxzero_etigbudinl , & hbv5azo3sw . Constant_Value_pxpcd5bk3c
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_escjrdlkcn [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_c4xiqwgxlz , & hbv5azo3sw .
Saturation_LowerSat_pi2aujffw1 , & hbv5azo3sw .
RandomSource1_MeanVal_n5f3r1zvmv , & hbv5azo3sw .
RandomSource1_VarianceRTP_blin0jucej , & hbv5azo3sw .
NormalizeVector_maxzero_mpxbpoayb2 , & hbv5azo3sw . Constant_Value_a5pfdrbwx4
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_ezbdisr3i3 [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_mq4hmkw4m2 , & hbv5azo3sw .
Saturation_LowerSat_dqoi00mxim , & hbv5azo3sw .
RandomSource1_MeanVal_kfynkp2waz , & hbv5azo3sw .
RandomSource1_VarianceRTP_dvuf3vyvl4 , & hbv5azo3sw .
NormalizeVector_maxzero_kqylmwb1gt , & hbv5azo3sw . Constant_Value_pb14rkkk1o
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_luhksxjjam [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_kiybxhvwme , & hbv5azo3sw .
Saturation_LowerSat_lktmm4bxfn , & hbv5azo3sw .
RandomSource1_MeanVal_d1pxk3satq , & hbv5azo3sw .
RandomSource1_VarianceRTP_cg3jlumacb , & hbv5azo3sw . NormalizeVector_maxzero
, & hbv5azo3sw . Constant_Value_fvwrjd3qpo [ 0 ] , & hbv5azo3sw .
Sensororientation_Value_c1w03cmwlz [ 0 ] , & hbv5azo3sw . Saturation_UpperSat
, & hbv5azo3sw . Saturation_LowerSat , & hbv5azo3sw .
RandomSource1_MeanVal_aiijehfqfo , & hbv5azo3sw .
RandomSource1_VarianceRTP_iazwfq1jw0 , & hbv5azo3sw .
NormalizeVector_maxzero_cdhvq0rirk , & hbv5azo3sw . Constant_Value_o4pefzbbdu
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_f1bimmtkao [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_iasva3d1xg , & hbv5azo3sw .
Saturation_LowerSat_k012nv1qgk , & hbv5azo3sw .
RandomSource1_MeanVal_fskbkqfzhy , & hbv5azo3sw .
RandomSource1_VarianceRTP_c0tnp0ox24 , & hbv5azo3sw .
NormalizeVector_maxzero_b4q4mcfdki , & hbv5azo3sw . Constant_Value_aqc3aba12o
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_gzezhgiiva [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_kvrw4yrrrs , & hbv5azo3sw .
Saturation_LowerSat_kx5yh1wv4z , & hbv5azo3sw .
RandomSource1_MeanVal_memmqqy0nt , & hbv5azo3sw .
RandomSource1_VarianceRTP_ciqyogzko1 , & hbv5azo3sw .
NormalizeVector_maxzero_h2g0i450y0 , & hbv5azo3sw . Constant_Value_kv3w21qse5
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_pvtoldl5dv [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_byrofjxopf , & hbv5azo3sw .
Saturation_LowerSat_eqtwttitcd , & hbv5azo3sw .
RandomSource1_MeanVal_c0fkc2tbqq , & hbv5azo3sw .
RandomSource1_VarianceRTP_f4hdv51tm4 , & hbv5azo3sw .
NormalizeVector_maxzero_j4hegkg3gk , & hbv5azo3sw . Constant_Value_ei4qxougxr
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_g4fybr4ojz [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_llltpjmasd , & hbv5azo3sw .
Saturation_LowerSat_od1cxjykdq , & hbv5azo3sw .
RandomSource1_MeanVal_d5xz2yhw3l , & hbv5azo3sw .
RandomSource1_VarianceRTP_g12uaggma2 , & hbv5azo3sw .
NormalizeVector_maxzero_g4yscxcbyk , & hbv5azo3sw . Constant_Value_lod4m2end1
[ 0 ] , & hbv5azo3sw . Sensororientation_Value_bfbchbxuif [ 0 ] , &
hbv5azo3sw . Saturation_UpperSat_e1cwi1gybf , & hbv5azo3sw .
Saturation_LowerSat_ajttgxrnng , & hbv5azo3sw .
RandomSource1_MeanVal_jxhxrhz3me , & hbv5azo3sw .
RandomSource1_VarianceRTP_bdmhqmxko4 , & hbv5azo3sw . yBlockOrdering_Y0 , &
hbv5azo3sw . yBlockOrdering_Y0_m1krpwpsee , & hbv5azo3sw .
yBlockOrdering_Y0_cudnxvsixu , & hbv5azo3sw . Gain_Gain_flpxquj1at , &
hbv5azo3sw . Constant_Value_ekkpqgqspn , & hbv5azo3sw . Gain_Gain_m4jtdwqsx1
, & hbv5azo3sw . Constant_Value_hrofb0v0v5 , & hbv5azo3sw .
Gain_Gain_cnryscy0x5 , & hbv5azo3sw . Constant_Value_klghvcvqmj , &
hbv5azo3sw . Gain_Gain_deacltj5ll , & hbv5azo3sw . Gain1_Gain_fe0vmtwk5u , &
hbv5azo3sw . Gain2_Gain_n2hlwdziix , & hbv5azo3sw . Constant_Value_h3axm4dzs2
, & hbv5azo3sw . Gain_Gain_m0ug0pnx04 , & hbv5azo3sw . Gain1_Gain_epkzxiktj2
, & hbv5azo3sw . Gain2_Gain_gnrwoc1vc2 , & hbv5azo3sw .
Constant_Value_jsi055lqf3 , & hbv5azo3sw . Gain_Gain_efwlgxe2sc , &
hbv5azo3sw . Gain1_Gain_ito2bip4nt , & hbv5azo3sw . Gain2_Gain_kojiuv3vcw , &
hbv5azo3sw . Gain1_Gain_objsqoebrs , & hbv5azo3sw . Gain1_Gain_km22rji0yo , &
hbv5azo3sw . Constant_Value_c0ie4jx1vv , & hbv5azo3sw .
Constant1_Value_lvvzxuwh5z , & hbv5azo3sw .
Anglebetween3rdJanto21stMarch180_Value , & hbv5azo3sw .
Constant_Value_mgrgcefnc2 , & hbv5azo3sw . Constant5_Value , & hbv5azo3sw .
Ecliptic_Value , & hbv5azo3sw . Gain_Gain_nrquqjsjbh , & hbv5azo3sw .
Gain1_Gain_csudgssrcg , & hbv5azo3sw . Constant3_Value_aiagav1bu5 , &
hbv5azo3sw . Constant4_Value , & hbv5azo3sw . Gain_Gain_ij5ephcub4 , &
hbv5azo3sw . Gain1_Gain_fos5u53xa3 , & hbv5azo3sw . Gain_Gain_fosanw5ymw , &
hbv5azo3sw . Constant_Value , & hbv5azo3sw . Gain_Gain , & hbv5azo3sw .
Gain1_Gain , & hbv5azo3sw . Constant_Value_pu1egqm5wd , & hbv5azo3sw .
Constant_Value_oqac1ckjba , & hbv5azo3sw . Constant_Value_etis5qgp2s , &
hbv5azo3sw . Constant_Value_loxooi2xox , & hbv5azo3sw .
Constant_Value_h114kk0gb0 , & hbv5azo3sw . Constant_Value_kd13wd1tn5 , &
hbv5azo3sw . Constant_Value_pw4amn2wvf , & hbv5azo3sw .
Constant_Value_peinfzh1bx , & hbv5azo3sw . Constant_Value_agjbvr0z5q , &
hbv5azo3sw . Constant_Value_ktwwdrryx3 , & hbv5azo3sw .
Constant_Value_aefuqipo3z , & hbv5azo3sw . Constant_Value_d3tr2oyhj4 , &
hbv5azo3sw . Constant_Value_ollq4x5vyn , & hbv5azo3sw . Gain_Gain_avgts0xajn
, & hbv5azo3sw . Gain1_Gain_pfgznzxep3 , & hbv5azo3sw . Gain2_Gain_d0aeb3inpf
, & hbv5azo3sw . Constant_Value_jelrytb22b , & hbv5azo3sw .
Gain_Gain_l4qk2foong , & hbv5azo3sw . Gain1_Gain_b2dtklqw2b , & hbv5azo3sw .
Gain2_Gain_jbi3ws3ahy , & hbv5azo3sw . Constant_Value_nfqnghygav , &
hbv5azo3sw . Gain_Gain_fsocaetgdj , & hbv5azo3sw . Gain1_Gain_igcxviai5g , &
hbv5azo3sw . Gain2_Gain_mcrod3aisq , & hbv5azo3sw . Constant_Value_hn3g4e2bdf
, & hbv5azo3sw . Gain_Gain_kewyutalpa , & hbv5azo3sw . Gain1_Gain_e5ngzsvcli
, & hbv5azo3sw . Gain2_Gain_nben4kjacq , & hbv5azo3sw .
Constant_Value_cinqqywm1t , & hbv5azo3sw . Gain_Gain_fouuav1ki1 , &
hbv5azo3sw . Gain1_Gain_lq4olh4tnx , & hbv5azo3sw . Gain2_Gain_d4fbbaxwpd , &
hbv5azo3sw . Constant_Value_aglfz4cib2 , & hbv5azo3sw . Gain_Gain_kc1cpqscqf
, & hbv5azo3sw . Gain1_Gain_n4q3gythod , & hbv5azo3sw . Gain2_Gain_arhr50dupm
, & hbv5azo3sw . Gain1_Gain_byeui5d4hz , & hbv5azo3sw .
Constant_Value_azddlyivju , & hbv5azo3sw . Constant3_Value_fveye0j2gb , &
hbv5azo3sw . u2_Gain , & hbv5azo3sw . Gain_Gain_cqlkw4p3g1 , & hbv5azo3sw .
Gain1_Gain_ij2znuz5co , & hbv5azo3sw . Gain2_Gain_medwk1da45 , & hbv5azo3sw .
Gain3_Gain_j50dplxsob , & hbv5azo3sw . Gain_Gain_ffyvgqn0t3 , & hbv5azo3sw .
Gain1_Gain_hf2zl5hf11 , & hbv5azo3sw . Gain3_Gain , & hbv5azo3sw . Gain4_Gain
, & hbv5azo3sw . Gain_Gain_ev442xw5g3 , & hbv5azo3sw . Gain1_Gain_bctn5kthma
, & hbv5azo3sw . Gain2_Gain , & hbv5azo3sw . Gain3_Gain_iezjytb1ib , &
hbv5azo3sw . Constant_Value_hucifuffuc , & hbv5azo3sw . Gain_Gain_gakfyjlszi
, & hbv5azo3sw . Gain1_Gain_cp5gxmxv40 , & hbv5azo3sw . Gain2_Gain_bqvzfgganp
, & hbv5azo3sw . Constant_Value_itxm0x43si , & hbv5azo3sw .
Gain_Gain_jcxnesc51s , & hbv5azo3sw . Gain1_Gain_e5tqo52tku , & hbv5azo3sw .
Gain2_Gain_jxsi55a1on , & hbv5azo3sw . Constant_Value_ezafw5tbx0 , &
hbv5azo3sw . Gain_Gain_omyfgx1n5h , & hbv5azo3sw . Gain1_Gain_n4ecq0uzvs , &
hbv5azo3sw . Gain2_Gain_bxmfdcbxd2 , & hbv5azo3sw . Constant_Value_kst2th0l1z
, & hbv5azo3sw . Gain_Gain_cr4zczeez0 , & hbv5azo3sw . Gain1_Gain_g12m14aft0
, & hbv5azo3sw . Gain2_Gain_enxakegu4s , & hbv5azo3sw .
Constant_Value_igmvdrtaty , & hbv5azo3sw . Gain_Gain_lw5hirdrrr , &
hbv5azo3sw . Gain1_Gain_amkbhcbkvw , & hbv5azo3sw . Gain2_Gain_bttjb1ulla , &
hbv5azo3sw . Constant_Value_m4goabuepu , & hbv5azo3sw . Gain_Gain_pmdq3xatwv
, & hbv5azo3sw . Gain1_Gain_bgbnv4z5nx , & hbv5azo3sw . Gain2_Gain_cdbsbiii2b
, & hbv5azo3sw . Constant_Value_lntxh0ukmr , & hbv5azo3sw .
Gain_Gain_pfg5czu2ug , & hbv5azo3sw . Gain1_Gain_lgo5besblz , & hbv5azo3sw .
Gain2_Gain_aaobkzaajt , & hbv5azo3sw . Constant_Value_imdxvhi4fs , &
hbv5azo3sw . Gain_Gain_dmquktubpv , & hbv5azo3sw . Gain1_Gain_o20oz1n5pv , &
hbv5azo3sw . Gain2_Gain_bxr0hdxmou , & hbv5azo3sw . Constant_Value_k0omy0fwkr
, & hbv5azo3sw . Gain_Gain_app3p5qkli , & hbv5azo3sw . Gain1_Gain_ggc5pki3i3
, & hbv5azo3sw . Gain2_Gain_jiiceq4a1g , & hbv5azo3sw .
Constant_Value_ba5xlpus1a , & hbv5azo3sw . Gain_Gain_kb00k2wbfq , &
hbv5azo3sw . Gain1_Gain_iow1llvkxc , & hbv5azo3sw . Gain2_Gain_dtunvm3otp , &
hbv5azo3sw . Constant_Value_eqda1kzn3h , & hbv5azo3sw . Gain_Gain_npe4zqgyas
, & hbv5azo3sw . Gain1_Gain_fdxpyxu0o1 , & hbv5azo3sw . Gain2_Gain_n4sn3p4zhh
, & hbv5azo3sw . Constant_Value_j3hxujgyee , & hbv5azo3sw .
Gain_Gain_caz4q343an , & hbv5azo3sw . Gain1_Gain_odtb3u3w54 , & hbv5azo3sw .
Gain2_Gain_pl1uwnp5vb , & hbv5azo3sw . Constant_Value_myru2azkts , &
hbv5azo3sw . Gain_Gain_jfezxdcuu1 , & hbv5azo3sw . Gain1_Gain_mzwjkwmyds , &
hbv5azo3sw . Gain2_Gain_pt1tknsnuk , & hbv5azo3sw . Constant_Value_mpzaspn304
, & hbv5azo3sw . Gain_Gain_cylo5ppz5d , & hbv5azo3sw . Gain1_Gain_evkyndzct5
, & hbv5azo3sw . Gain2_Gain_ogm3tj3b4p , & hbv5azo3sw .
Constant_Value_ey5twm140q , & hbv5azo3sw . Gain_Gain_lnevd4sqnk , &
hbv5azo3sw . Gain1_Gain_f5yo2mvezp , & hbv5azo3sw . Gain2_Gain_mg22nq4b3k , &
hbv5azo3sw . Constant_Value_kkk1dzjy3p , & hbv5azo3sw . Gain_Gain_f5mrtnkemr
, & hbv5azo3sw . Gain1_Gain_fdh0g1o02u , & hbv5azo3sw . Gain2_Gain_gnny303ymj
, & hbv5azo3sw . Constant_Value_jbyhakx4ay , & hbv5azo3sw .
Gain_Gain_bkbvyxdlek , & hbv5azo3sw . Gain1_Gain_pbfdoucssu , & hbv5azo3sw .
Gain2_Gain_ijreebnsuw , & hbv5azo3sw . Constant_Value_f1tb0wmrtm , &
hbv5azo3sw . Gain_Gain_a2lqzra5qd , & hbv5azo3sw . Gain1_Gain_f45poxumoe , &
hbv5azo3sw . Gain2_Gain_necstpfmlp , & hbv5azo3sw . Constant_Value_c0bcxggzid
, & hbv5azo3sw . Gain_Gain_jom4zjkqot , & hbv5azo3sw . Gain1_Gain_ec5n4vlyml
, & hbv5azo3sw . Gain2_Gain_ppb55hsf22 , & hbv5azo3sw .
Constant_Value_cd21hrcv55 , & hbv5azo3sw . Gain_Gain_owfxeyg0hz , &
hbv5azo3sw . Gain1_Gain_azstchlb2n , & hbv5azo3sw . Gain2_Gain_azs3a4y21d , &
hbv5azo3sw . Constant_Value_i1rjqidmbj , & hbv5azo3sw . Gain_Gain_lp1ded333l
, & hbv5azo3sw . Gain1_Gain_e5iewy4mku , & hbv5azo3sw . Gain2_Gain_p50urd0soy
, & hbv5azo3sw . Constant_Value_i54as2vhie , & hbv5azo3sw .
Gain_Gain_aqtmdzg5ve , & hbv5azo3sw . Gain1_Gain_luiia42t5t , & hbv5azo3sw .
Gain2_Gain_mb2nt12ulg , & hbv5azo3sw . Constant_Value_ogstggr2j3 , &
hbv5azo3sw . Gain_Gain_lychsiugxc , & hbv5azo3sw . Gain1_Gain_b1eddp32tw , &
hbv5azo3sw . Gain2_Gain_nfkayg1huw , & hbv5azo3sw . Constant_Value_oetlq3b1z2
, & hbv5azo3sw . Gain_Gain_nuvyvhffsa , & hbv5azo3sw . Gain1_Gain_ci4cvxslsl
, & hbv5azo3sw . Gain2_Gain_ktgwyxzbfl , & hbv5azo3sw .
Constant_Value_dqtse52l4d , & hbv5azo3sw . Gain_Gain_mrg5lsnokn , &
hbv5azo3sw . Gain1_Gain_hbwgr3wfvo , & hbv5azo3sw . Gain2_Gain_ez1qvjlr1d , &
hbv5azo3sw . Constant_Value_aocyzox0ld , & hbv5azo3sw . Gain_Gain_hiv2r3l01b
, & hbv5azo3sw . Gain1_Gain_pxrflmc1o4 , & hbv5azo3sw . Gain2_Gain_g5qbykwveo
, & hbv5azo3sw . Constant_Value_atme3hmtbv , & hbv5azo3sw .
Gain_Gain_hgfy5zqhxv , & hbv5azo3sw . Gain1_Gain_eo1xrtusyu , & hbv5azo3sw .
Gain2_Gain_ismz453fn1 , & hbv5azo3sw . Constant_Value_epgscsipyz , &
hbv5azo3sw . Gain_Gain_ena5yszh4w , & hbv5azo3sw . Gain1_Gain_eqkjxlvbiq , &
hbv5azo3sw . Gain2_Gain_k0lo0mgba2 , & hbv5azo3sw . Constant_Value_h300vfl4mv
, & hbv5azo3sw . Gain_Gain_j4d3hvhs43 , & hbv5azo3sw . Gain1_Gain_ceiu2lnwhi
, & hbv5azo3sw . Gain2_Gain_htyiogkmpg , & hbv5azo3sw .
Constant_Value_apsk02wc0m , & hbv5azo3sw . Gain_Gain_k42ekcf23x , &
hbv5azo3sw . Gain1_Gain_izo4ouweai , & hbv5azo3sw . Gain2_Gain_bgeppzp5tr , &
hbv5azo3sw . Constant_Value_oi0kxpowja , & hbv5azo3sw . Gain_Gain_crryondw0o
, & hbv5azo3sw . Gain1_Gain_lzvj53au2u , & hbv5azo3sw . Gain2_Gain_perzcljgjz
, & hbv5azo3sw . Constant_Value_bx4ma4qdmb , & hbv5azo3sw .
Gain_Gain_evjcc1eafd , & hbv5azo3sw . Gain1_Gain_gns40wabnm , & hbv5azo3sw .
Gain2_Gain_i0hel0ofcl , & hbv5azo3sw . Constant_Value_ihm1fmgdud , &
hbv5azo3sw . Gain_Gain_mniibtfrh4 , & hbv5azo3sw . Gain1_Gain_dsk352okyn , &
hbv5azo3sw . Gain2_Gain_f4f4o3e0ao , & hbv5azo3sw . Constant_Value_j5awaeon0r
, & hbv5azo3sw . Gain_Gain_l3rthal15j , & hbv5azo3sw . Gain1_Gain_dizs3vyxgq
, & hbv5azo3sw . Gain2_Gain_im22oggu52 , & hbv5azo3sw .
Constant_Value_a1zgpg42vr , & hbv5azo3sw . Gain_Gain_pvyl4t2yw0 , &
hbv5azo3sw . Gain1_Gain_gqxohufbgj , & hbv5azo3sw . Gain2_Gain_axoynd5pv4 , &
hbv5azo3sw . Constant_Value_dbnrgxoczr , & hbv5azo3sw . Gain_Gain_gnoc2rqmdh
, & hbv5azo3sw . Gain1_Gain_ckkbstydzz , & hbv5azo3sw . Gain2_Gain_bq1ops2rb1
, & hbv5azo3sw . Constant_Value_bpdqgjnrbi , & hbv5azo3sw .
Gain_Gain_cjicctxqb2 , & hbv5azo3sw . Gain1_Gain_nieh11pzcd , & hbv5azo3sw .
Gain2_Gain_cko11epp5n , & hbv5azo3sw . Constant_Value_lxx0buxvfk , &
hbv5azo3sw . Gain_Gain_cf5hb10y5x , & hbv5azo3sw . Gain1_Gain_gwlrw1w2b3 , &
hbv5azo3sw . Gain2_Gain_n32pjfxnui , & hbv5azo3sw . Constant_Value_a2jieicat5
, & hbv5azo3sw . Gain_Gain_efnax0y1dx , & hbv5azo3sw . Gain1_Gain_ddeccjfmea
, & hbv5azo3sw . Gain2_Gain_g2ebct4dqc , & hbv5azo3sw .
Constant_Value_mrthaqohbp , & hbv5azo3sw . Gain_Gain_msviodsdfg , &
hbv5azo3sw . Gain1_Gain_fdnpx3hnab , & hbv5azo3sw . Gain2_Gain_jrylcyky0d , &
hbv5azo3sw . Constant_Value_gob0mxnrc1 , & hbv5azo3sw . Gain_Gain_j00moojqwi
, & hbv5azo3sw . Gain1_Gain_epavf05nx2 , & hbv5azo3sw . Gain2_Gain_jieczjcfxj
, & hbv5azo3sw . Constant_Value_l4ftm45smy , & hbv5azo3sw .
Gain_Gain_lxppc43sr3 , & hbv5azo3sw . Gain1_Gain_pr0mjxkeko , & hbv5azo3sw .
Gain2_Gain_oh11qzcnsq , & hbv5azo3sw . Constant1_Value_c4wnv34dlm , &
hbv5azo3sw . Constant2_Value_i3cnjpylpr [ 0 ] , & hbv5azo3sw .
Constant_Value_m2h11to3lk , & hbv5azo3sw . Constant1_Value , & hbv5azo3sw .
Constant2_Value [ 0 ] , & hbv5azo3sw . Constant_Value_glskcdmgi0 , &
hbv5azo3sw . Constant1_Value_ius3i4otxm , & hbv5azo3sw .
Constant2_Value_j5v1xvugrn [ 0 ] , & hbv5azo3sw . Constant_Value_p5m1vauvdr ,
& hbv5azo3sw . Constant1_Value_l2qqn3e4fv , & hbv5azo3sw .
Constant1_Value_ftvtqjp1us , & hbv5azo3sw . Bias1_Bias [ 0 ] , & hbv5azo3sw .
Bias_Bias , & n1mubcupv31 . kbqjtzizsx [ 0 ] , & n1mubcupv31 . bcrrky3g2k [ 0
] , & n1mubcupv31 . li1obxdvy3 [ 0 ] , & n1mubcupv31 . ezm2ooaqjl [ 0 ] , &
n1mubcupv31 . cjfebnqw1p , & rtP_Spacecraft , & rtP_Earth , & rtP_Const , } ;
static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } , { "struct" , "SpacecraftDT" , 8 , 1 , sizeof ( SpacecraftDT ) ,
SS_STRUCT , 0 , 0 , 0 } , { "struct" , "EarthDT" , 7 , 9 , sizeof ( EarthDT )
, SS_STRUCT , 0 , 0 , 0 } , { "struct" , "ConstDT" , 3 , 16 , sizeof (
ConstDT ) , SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "initialAttitude" , rt_offsetof ( SpacecraftDT ,
initialAttitude ) , 0 , 14 , 0 } , { "initialAngularSpeed" , rt_offsetof (
SpacecraftDT , initialAngularSpeed ) , 0 , 1 , 0 } , { "baricentricInertia" ,
rt_offsetof ( SpacecraftDT , baricentricInertia ) , 0 , 1 , 0 } , {
"geometricCenter" , rt_offsetof ( SpacecraftDT , geometricCenter ) , 0 , 1 ,
0 } , { "surfaces_area" , rt_offsetof ( SpacecraftDT , surfaces_area ) , 0 ,
15 , 0 } , { "surfaces_position" , rt_offsetof ( SpacecraftDT ,
surfaces_position ) , 0 , 16 , 0 } , { "surfaces_normalToSurface" ,
rt_offsetof ( SpacecraftDT , surfaces_normalToSurface ) , 0 , 16 , 0 } , {
"surfaces_Cd" , rt_offsetof ( SpacecraftDT , surfaces_Cd ) , 0 , 15 , 0 } , {
"mu" , rt_offsetof ( EarthDT , mu ) , 0 , 17 , 0 } , { "equatorialRadius" ,
rt_offsetof ( EarthDT , equatorialRadius ) , 0 , 17 , 0 } , { "J2" ,
rt_offsetof ( EarthDT , J2 ) , 0 , 17 , 0 } , { "siderealDay" , rt_offsetof (
EarthDT , siderealDay ) , 0 , 17 , 0 } , { "atm_referenceHeight" ,
rt_offsetof ( EarthDT , atm_referenceHeight ) , 0 , 18 , 0 } , {
"atm_nominalDensity" , rt_offsetof ( EarthDT , atm_nominalDensity ) , 0 , 18
, 0 } , { "atm_scaleHeight" , rt_offsetof ( EarthDT , atm_scaleHeight ) , 0 ,
18 , 0 } , { "c" , rt_offsetof ( ConstDT , c ) , 0 , 17 , 0 } , { "AU_1" ,
rt_offsetof ( ConstDT , AU_1 ) , 0 , 17 , 0 } , { "Fe" , rt_offsetof (
ConstDT , Fe ) , 0 , 17 , 0 } } ; static const rtwCAPI_DimensionMap
rtDimensionMap [ ] = { { rtwCAPI_VECTOR , 0 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 ,
0 } , { rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 ,
0 } , { rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 18 , 2
, 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 20 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 12 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 22 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 24 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR
, 26 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = { 3 , 1 , 1 , 1
, 3 , 3 , 2 , 1 , 1 , 4 , 7 , 1 , 4 , 1 , 1 , 3 , 7 , 7 , 2 , 2 , 1 , 2 , 1 ,
10 , 3 , 10 , 1 , 6 } ; static const real_T rtcapiStoredFloats [ ] = { 0.01 ,
0.0 , 0.1 , 1.0 , 0.03 , 2.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ]
= { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static
const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 2 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 4 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( const
void * ) & rtcapiStoredFloats [ 3 ] , ( const void * ) & rtcapiStoredFloats [
1 ] , 5 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , ( const void
* ) & rtcapiStoredFloats [ 1 ] , 3 , 0 } , { ( NULL ) , ( NULL ) , 13 , 0 } ,
{ ( const void * ) & rtcapiStoredFloats [ 5 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 6 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 213 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 408 , rtModelParameters , 3 } , { rtBlockStates , 5 }
, { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 47910091U , 3490231339U ,
3896331790U , 2484613374U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * main_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void main_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( *
rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void main_host_InitializeDataMapInfo ( main_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
MagneticFieldInPolarCoords_host_InitializeDataMapInfo ( & ( dataMap -> child0
) ,
"main/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 1 ) ; }
#ifdef __cplusplus
}
#endif
#endif
