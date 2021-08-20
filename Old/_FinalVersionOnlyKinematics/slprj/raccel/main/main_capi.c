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
{ 2 , 0 , TARGET_STRING ( "main/Gain3" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 ,
0 , 1 } , { 3 , 0 , TARGET_STRING ( "main/Zero-Order Hold3" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"main/Gyro reading/Cumulative Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
2 } , { 5 , 0 , TARGET_STRING ( "main/Gyro reading/Random Source" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"main/PWM/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 1 } , { 7 , 0 , TARGET_STRING ( "main/PWM1/Variable Pulse Generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 8 , 0 , TARGET_STRING (
"main/PWM2/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 1 } , { 9 , 0 , TARGET_STRING ( "main/PWM3/Variable Pulse Generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"main/PWM4/Variable Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0
, 1 } , { 11 , 0 , TARGET_STRING ( "main/PWM5/Variable Pulse Generator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"main/Real physics/Constant2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 }
, { 13 , 0 , TARGET_STRING ( "main/Real physics/Constant3" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 3 } , { 14 , 0 , TARGET_STRING (
"main/Star sensor/Zero-Order Hold" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 ,
4 } , { 15 , 0 , TARGET_STRING ( "main/Subsystem/Matrix Concatenate" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 5 } , { 16 , 0 , TARGET_STRING (
"main/Subsystem/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 17 ,
0 , TARGET_STRING ( "main/Comparison/Quaternion Division1/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 18 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division1/Product2" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 19 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division1/Product3" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 20 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division1/Product4" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 21 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division2/Product1" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 22 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division2/Product2" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 23 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division2/Product3" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 24 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division2/Product4" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 25 , 0 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 26 , 0 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Positive Trace" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 27 , 0 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Positive Trace" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 4 } , { 28 , 0 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Merge" ) , TARGET_STRING
( "" ) , 0 , 0 , 3 , 0 , 4 } , { 29 , 0 , TARGET_STRING (
"main/Real physics/Gravity gradient (torque only)/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 3 } , { 30 , 0 , TARGET_STRING (
"main/Real physics/Gravity gradient (torque only)/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 3 } , { 31 , 0 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 32 , 0 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 5 } , { 33 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Constant" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 3 } , { 34 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Constant1" ) , TARGET_STRING ( "" ) , 0
, 0 , 3 , 0 , 3 } , { 35 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Integrator" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 5 } , { 36 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sum" ) , TARGET_STRING (
"Sun wrt s/c [Earth inertial frame][km]" ) , 0 , 0 , 1 , 0 , 5 } , { 37 , 0 ,
TARGET_STRING ( "main/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 38 , 0 , TARGET_STRING (
"main/Real physics/Translational dynamic/Sum" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 5 } , { 39 , 0 , TARGET_STRING (
"main/Star sensor/Vector 2 angles/Random Source" ) , TARGET_STRING ( "" ) , 0
, 0 , 6 , 0 , 6 } , { 40 , 0 , TARGET_STRING (
"main/Star sensor/Vector 2 angles1/Random Source" ) , TARGET_STRING ( "" ) ,
0 , 0 , 6 , 0 , 6 } , { 41 , 0 , TARGET_STRING (
"main/Star sensor/Vector 2 angles2/Random Source" ) , TARGET_STRING ( "" ) ,
0 , 0 , 6 , 0 , 6 } , { 42 , 17 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Correct1" ) , TARGET_STRING (
"" ) , 0 , 1 , 2 , 0 , 4 } , { 43 , 22 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Subsystem" ) , TARGET_STRING (
"" ) , 0 , 0 , 7 , 0 , 0 } , { 44 , 22 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Subsystem" ) , TARGET_STRING (
"" ) , 2 , 1 , 2 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"main/Subsystem/Cross Product/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0
, 5 } , { 46 , 0 , TARGET_STRING ( "main/Subsystem/Cross Product1/Add3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 47 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector/Math Function1" ) , TARGET_STRING ( "" ) , 0
, 0 , 2 , 0 , 5 } , { 48 , 35 , TARGET_STRING (
"main/Subsystem/Normalize Vector/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 5 } , { 49 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector1/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 5 } , { 50 , 36 , TARGET_STRING (
"main/Subsystem/Normalize Vector1/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 5 } , { 51 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 5 } , { 52 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 5 } , { 53 , 37 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 5 } , { 54 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Math Function1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 5 } , { 55 , 0 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 5 } , { 56 , 38 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Product" ) , TARGET_STRING ( "" ) , 0 , 0 ,
1 , 0 , 5 } , { 57 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 6 , 0 , 6 } , { 58 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 4 } , { 59 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 6 , 0 , 6 } , { 60 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 4 } , { 61 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 6 , 0 , 6 } , { 62 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 4 } , { 63 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 6 , 0 , 6 } , { 64 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 4 } , { 65 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 6 , 0 , 6 } , { 66 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 4 } , { 67 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Random Source1" ) , TARGET_STRING ( "" )
, 0 , 0 , 6 , 0 , 6 } , { 68 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Zero-Order Hold" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 4 } , { 69 , 0 , TARGET_STRING (
"main/Subsystem4/Cross Product/Add3" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0
, 3 } , { 70 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division1/Quaternion Norm/Sum" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 4 } , { 71 , 0 , TARGET_STRING (
"main/Comparison/Quaternion Division2/Quaternion Norm/Sum" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 73 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 74 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 75 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 76 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 77 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 78 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 79 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 80 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 81 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 82 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 83 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 84 , 0 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Merge1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 85 , 0 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 86 , 0 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Positive Trace/Product" )
, TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 4 } , { 87 , 0 , TARGET_STRING (
 "main/QUEST/Quaternions to  Direction Cosine Matrix/Create 3x3 Matrix/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 3 } , { 88 , 0 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Cartesian to polar/Atan1" )
, TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 89 , 0 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Vector magnitude and direction2/Square Root"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 90 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Euler equations (rigid body) /Divide" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 91 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Euler equations (rigid body) /Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 92 , 0 , TARGET_STRING (
 "main/Real physics/Rotational dynamic/Kinematics with quaternions/Matrix Multiply"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 5 } , { 93 , 0 , TARGET_STRING (
 "main/Real physics/Solar radiation pressure (torque only)/Solar radiation pressure/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 94 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 95 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Divide1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 96 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 97 , 0 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Sqrt" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 98 , 0 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Square" ) , TARGET_STRING
( "" ) , 0 , 0 , 2 , 0 , 3 } , { 99 , 17 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Correct1/Correct" ) ,
TARGET_STRING ( "" ) , 2 , 1 , 2 , 0 , 4 } , { 100 , 22 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Subsystem/uBlockOrdering" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 2 , 0 , 0 } , { 101 , 22 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Subsystem/Data Store Read" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/trace(DCM)/Add" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 103 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 104 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 105 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 106 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 107 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 108 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 109 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 110 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 111 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 112 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 113 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 114 , 0 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 115 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 116 , 23 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 117 , 24 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 118 , 25 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 } , { 119 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 120 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 121 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 122 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 123 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 124 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 125 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 126 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 127 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 128 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 129 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 130 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 131 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 132 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 133 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 134 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 135 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 136 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 137 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 138 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 139 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 140 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 141 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 142 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 143 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 144 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 145 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 146 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 147 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 148 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 149 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 150 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 151 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 152 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 153 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 154 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 155 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 156 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 157 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 158 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 159 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 160 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 161 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 162 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 163 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 164 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 165 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 166 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 167 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 168 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 169 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 170 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 171 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 172 , 0 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 173 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 174 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 175 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 176 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 177 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 178 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 179 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 180 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 181 , 0 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 182 , TARGET_STRING ( "main/PWM" ) ,
TARGET_STRING ( "Period" ) , 0 , 2 , 0 } , { 183 , TARGET_STRING (
"main/PWM1" ) , TARGET_STRING ( "Period" ) , 0 , 2 , 0 } , { 184 ,
TARGET_STRING ( "main/PWM2" ) , TARGET_STRING ( "Period" ) , 0 , 2 , 0 } , {
185 , TARGET_STRING ( "main/PWM3" ) , TARGET_STRING ( "Period" ) , 0 , 2 , 0
} , { 186 , TARGET_STRING ( "main/PWM4" ) , TARGET_STRING ( "Period" ) , 0 ,
2 , 0 } , { 187 , TARGET_STRING ( "main/PWM5" ) , TARGET_STRING ( "Period" )
, 0 , 2 , 0 } , { 188 , TARGET_STRING ( "main/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 189 , TARGET_STRING ( "main/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 190 , TARGET_STRING ( "main/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 191 , TARGET_STRING (
"main/Gain3" ) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 192 ,
TARGET_STRING ( "main/Gyro reading/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 2
, 0 } , { 193 , TARGET_STRING ( "main/Gyro reading/Random Source" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 2 , 0 } , { 194 , TARGET_STRING (
"main/Gyro reading/Random Source" ) , TARGET_STRING ( "VarianceRTP" ) , 0 , 2
, 0 } , { 195 , TARGET_STRING ( "main/Gyro reading/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 2 , 0 } , { 196 , TARGET_STRING (
"main/Gyro reading/Random Source1" ) , TARGET_STRING ( "VarianceRTP" ) , 0 ,
2 , 0 } , { 197 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions" ) , TARGET_STRING (
"action" ) , 0 , 2 , 0 } , { 198 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions" ) , TARGET_STRING (
"tolerance" ) , 0 , 2 , 0 } , { 199 , TARGET_STRING (
"main/QUEST/Sensor attitude [Body frame]" ) , TARGET_STRING ( "Value" ) , 0 ,
9 , 0 } , { 200 , TARGET_STRING ( "main/QUEST/Star 1 [Earth inertial frame]"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 201 , TARGET_STRING (
"main/QUEST/Star 2 [Earth inertial frame]" ) , TARGET_STRING ( "Value" ) , 0
, 5 , 0 } , { 202 , TARGET_STRING (
"main/QUEST/Star 3 [Earth inertial frame]" ) , TARGET_STRING ( "Value" ) , 0
, 5 , 0 } , { 203 , TARGET_STRING ( "main/Real physics/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 204 , TARGET_STRING (
"main/Real physics/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , {
205 , TARGET_STRING ( "main/Real physics/Inertia" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 206 , TARGET_STRING ( "main/Real physics/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 207 , TARGET_STRING (
"main/Star sensor/Sensor attitude [Body frame]" ) , TARGET_STRING ( "Value" )
, 0 , 9 , 0 } , { 208 , TARGET_STRING (
"main/Star sensor/Star 1 [Earth inertial frame]" ) , TARGET_STRING ( "Value"
) , 0 , 5 , 0 } , { 209 , TARGET_STRING (
"main/Star sensor/Star 2 [Earth inertial frame]" ) , TARGET_STRING ( "Value"
) , 0 , 5 , 0 } , { 210 , TARGET_STRING (
"main/Star sensor/Star 3 [Earth inertial frame]" ) , TARGET_STRING ( "Value"
) , 0 , 5 , 0 } , { 211 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions" ) , TARGET_STRING (
"action" ) , 0 , 2 , 0 } , { 212 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions" ) , TARGET_STRING (
"tolerance" ) , 0 , 2 , 0 } , { 213 , TARGET_STRING (
"main/Subsystem/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) , 0 , 2 , 0
} , { 214 , TARGET_STRING ( "main/Subsystem/Normalize Vector1" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 2 , 0 } , { 215 , TARGET_STRING (
"main/Subsystem/Normalize Vector3" ) , TARGET_STRING ( "maxzero" ) , 0 , 2 ,
0 } , { 216 , TARGET_STRING ( "main/Subsystem/Normalize Vector4" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 2 , 0 } , { 217 , TARGET_STRING (
"main/Subsystem/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 218 ,
TARGET_STRING ( "main/Subsystem4/Inertia" ) , TARGET_STRING ( "Value" ) , 0 ,
1 , 0 } , { 219 , TARGET_STRING ( "main/Subsystem4/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 220 , TARGET_STRING ( "main/Subsystem4/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 221 , TARGET_STRING (
"main/QUEST/Angles 2 vector/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 2 ,
0 } , { 222 , TARGET_STRING ( "main/QUEST/Angles 2 vector1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 223 , TARGET_STRING (
"main/QUEST/Angles 2 vector2/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 2
, 0 } , { 224 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Merge" ) , TARGET_STRING
( "InitialOutput" ) , 0 , 9 , 0 } , { 225 , TARGET_STRING (
"main/Real physics/Gravity gradient (torque only)/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 226 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Spacecraft magnetic dipole [body reference frame]"
) , TARGET_STRING ( "Value" ) , 0 , 5 , 0 } , { 227 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/a" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 228 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/e" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 229 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/θ - (78° = 21st March)" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 230 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/μ Sun" ) , TARGET_STRING ( "Value"
) , 0 , 2 , 0 } , { 231 , TARGET_STRING (
"main/Real physics/Translational dynamic/Integrator" ) , TARGET_STRING (
"AbsoluteTolerance" ) , 0 , 2 , 0 } , { 232 , TARGET_STRING (
"main/Real physics/Translational dynamic/Integrator1" ) , TARGET_STRING (
"AbsoluteTolerance" ) , 0 , 2 , 0 } , { 233 , TARGET_STRING (
"main/Star sensor/Vector 2 angles/Random Source" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 234 , TARGET_STRING (
"main/Star sensor/Vector 2 angles/Random Source" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 235 , TARGET_STRING (
"main/Star sensor/Vector 2 angles1/Random Source" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 236 , TARGET_STRING (
"main/Star sensor/Vector 2 angles1/Random Source" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 237 , TARGET_STRING (
"main/Star sensor/Vector 2 angles2/Random Source" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 238 , TARGET_STRING (
"main/Star sensor/Vector 2 angles2/Random Source" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 239 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/DataStoreMemory - P" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 10 , 0 } , { 240 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/DataStoreMemory - x" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 7 , 0 } , { 241 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/BlockOrdering" ) ,
TARGET_STRING ( "Value" ) , 1 , 2 , 0 } , { 242 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Enable1" ) , TARGET_STRING (
"Value" ) , 1 , 2 , 0 } , { 243 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Q" ) , TARGET_STRING ( "Value"
) , 0 , 11 , 0 } , { 244 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/R1" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 245 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Merge" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 9 , 0 } , { 246 , TARGET_STRING (
"main/Subsystem/Normalize Vector/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 247 , TARGET_STRING (
"main/Subsystem/Normalize Vector1/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 248 , TARGET_STRING (
"main/Subsystem/Normalize Vector3/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 249 , TARGET_STRING (
"main/Subsystem/Normalize Vector4/Constant" ) , TARGET_STRING ( "Value" ) , 0
, 2 , 0 } , { 250 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 251 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 252 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 253 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 254 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 255 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 256 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 257 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 258 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 259 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 260 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 261 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 262 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 263 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 264 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 265 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 266 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 267 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 268 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 269 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 270 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 271 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 272 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 273 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 274 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 275 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 276 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 277 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 278 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 279 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 280 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 281 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 282 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 283 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 284 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 285 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 2 , 0 } , { 286 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Constant" ) , TARGET_STRING ( "Value" )
, 0 , 12 , 0 } , { 287 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Sensor orientation" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 288 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 2 , 0 } , { 289 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 2 , 0 } , { 290 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Random Source1" ) , TARGET_STRING (
"MeanVal" ) , 0 , 2 , 0 } , { 291 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Random Source1" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 2 , 0 } , { 292 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Positive Trace/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 293 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 294 , TARGET_STRING (
"main/QUEST/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 295 , TARGET_STRING (
"main/QUEST/Quaternions to  Direction Cosine Matrix/A12/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 296 , TARGET_STRING (
"main/QUEST/Quaternions to  Direction Cosine Matrix/A13/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 297 , TARGET_STRING (
"main/QUEST/Quaternions to  Direction Cosine Matrix/A21/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 298 , TARGET_STRING (
"main/QUEST/Quaternions to  Direction Cosine Matrix/A23/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 299 , TARGET_STRING (
"main/QUEST/Quaternions to  Direction Cosine Matrix/A31/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 300 , TARGET_STRING (
"main/QUEST/Quaternions to  Direction Cosine Matrix/A32/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 301 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion conjugate/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 302 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/y rotation/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 303 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/y rotation/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 304 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/z rotation/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 305 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/z rotation/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 306 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Kinematics with quaternions/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 307 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 308 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 309 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 310 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Angle between 3rd Jan to 21st March - 180°"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 311 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 312 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant5" )
, TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 313 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Ecliptic" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 314 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 315 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 316 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 317 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 318 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 319 , TARGET_STRING (
"main/Real physics/Translational dynamic/J2 effect/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 2 , 0 } , { 320 , TARGET_STRING (
"main/Real physics/Translational dynamic/Main contribution/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 321 , TARGET_STRING (
"main/Star sensor/Quaternions to  Direction Cosine Matrix/A12/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 322 , TARGET_STRING (
"main/Star sensor/Quaternions to  Direction Cosine Matrix/A13/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 323 , TARGET_STRING (
"main/Star sensor/Quaternions to  Direction Cosine Matrix/A21/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 324 , TARGET_STRING (
"main/Star sensor/Quaternions to  Direction Cosine Matrix/A23/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 325 , TARGET_STRING (
"main/Star sensor/Quaternions to  Direction Cosine Matrix/A31/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 326 , TARGET_STRING (
"main/Star sensor/Quaternions to  Direction Cosine Matrix/A32/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 327 , TARGET_STRING (
"main/State estimator/Unscented Kalman Filter2/Correct1/yBlockOrdering" ) ,
TARGET_STRING ( "InitialOutput" ) , 1 , 2 , 0 } , { 328 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 329 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 330 , TARGET_STRING (
"main/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 331 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 332 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 333 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 334 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 335 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 336 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 337 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 338 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 339 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 340 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 341 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 342 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 343 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 344 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 345 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 346 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 347 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 348 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 349 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 350 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 351 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 352 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 353 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 354 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 355 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 356 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 357 , TARGET_STRING (
 "main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 358 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 359 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 360 , TARGET_STRING (
"main/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 361 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 362 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 363 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 364 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 365 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 366 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 367 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 368 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 369 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 370 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 371 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 372 , TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 373 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Degrees to Radians/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 374 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 375 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 376 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Rotation Angles to Quaternions/1//2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 377 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 378 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 379 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 380 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 381 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 382 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 383 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 384 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 385 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 386 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 387 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 388 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 389 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 390 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 391 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 392 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 393 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 394 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 395 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 396 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 397 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 398 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 399 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 400 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 401 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 402 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 403 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 404 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 405 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 406 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 407 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 408 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 409 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 410 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 411 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 412 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 413 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 414 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 415 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 416 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 417 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 418 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 419 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 420 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 421 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 422 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 423 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 424 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 425 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 426 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 427 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 428 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 429 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 430 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 431 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 432 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 433 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 434 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 435 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 436 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 437 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 438 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 439 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 440 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 441 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 442 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 443 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 444 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 445 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 446 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 447 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 448 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 449 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 450 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 451 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 452 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 453 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 454 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 455 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 456 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 457 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 458 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 459 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 460 , TARGET_STRING (
"main/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 461 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 462 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 463 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 464 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 465 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 466 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 467 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 468 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 469 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 470 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 471 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 472 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 4 , 0 } , { 473 , TARGET_STRING (
 "main/QUEST/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 474 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 475 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 476 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 477 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 478 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 479 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 480 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 481 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 482 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 483 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 484 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 485 , TARGET_STRING (
 "main/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 486 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 487 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 488 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 489 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 490 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 491 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 492 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 493 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 494 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 495 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 496 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 497 , TARGET_STRING (
 "main/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 2 , 0 } , { 498 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 499 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 500 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 501 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 502 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 503 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 504 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 505 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 506 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 507 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 508 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 2 , 0 } , { 509 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 4 , 0 } , { 510 , TARGET_STRING (
 "main/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 2 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 511 , 4 ,
TARGET_STRING ( "main/Real physics/Rotational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 , 1 , - 1 , 0
} , { 512 , 0 , TARGET_STRING (
"main/Real physics/Rotational dynamic/Integrator1" ) , TARGET_STRING ( "" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 5 , 1 , - 1 , 0 } , { 513 , 11 ,
TARGET_STRING ( "main/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 , 1 , - 1 , 0
} , { 514 , 7 , TARGET_STRING (
"main/Real physics/Translational dynamic/Integrator1" ) , TARGET_STRING ( ""
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 , 1 , - 1 , 0 } , { 515 , 10 ,
TARGET_STRING (
"main/Real physics/Sun position wrt s//c/Get true anomaly1/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 5 , 1 , - 1 , 0
} , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1
, 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 1 , 0 , 4 , 2 , 3 } ;
static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] =
{ { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 516 , TARGET_STRING (
"Spacecraft" ) , 2 , 2 , 0 } , { 517 , TARGET_STRING ( "Earth" ) , 3 , 2 , 0
} , { 518 , TARGET_STRING ( "Const" ) , 4 , 2 , 0 } , { 0 , ( NULL ) , 0 , 0
, 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & o2y45zbt2m4 . op4p3vooky [ 0 ] , &
o2y45zbt2m4 . c1cfxe21zn [ 0 ] , & o2y45zbt2m4 . fkulvx00jr [ 0 ] , &
o2y45zbt2m4 . g20nolxhoz [ 0 ] , & o2y45zbt2m4 . p0g2tnevfk [ 0 ] , &
o2y45zbt2m4 . lfqykqi1sg [ 0 ] , & o2y45zbt2m4 . ftjowoqghq , & o2y45zbt2m4 .
psapwntjo4 , & o2y45zbt2m4 . pjlzlhabnw , & o2y45zbt2m4 . px02m2ansm , &
o2y45zbt2m4 . lzgno0c45u , & o2y45zbt2m4 . frbnnz0j20 , & o2y45zbt2m4 .
amepcbkksg [ 0 ] , & o2y45zbt2m4 . fi1wde2gl2 [ 0 ] , & o2y45zbt2m4 .
hiefr0yole [ 0 ] , & o2y45zbt2m4 . an1hct1vdk [ 0 ] , & o2y45zbt2m4 .
cbgxsqe0kg [ 0 ] , & o2y45zbt2m4 . fmiudkl0xp , & o2y45zbt2m4 . aywo03gopp ,
& o2y45zbt2m4 . nabgcgokls , & o2y45zbt2m4 . ecbd1xcds1 , & o2y45zbt2m4 .
aq11zi4uh2 , & o2y45zbt2m4 . hjcotmhlln , & o2y45zbt2m4 . adm5dxedvk , &
o2y45zbt2m4 . lnkbbmaxut , & o2y45zbt2m4 . olo2njtgqu [ 0 ] , & o2y45zbt2m4 .
olo2njtgqu [ 0 ] , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 1 ) , & o2y45zbt2m4 .
olo2njtgqu [ 0 ] , & o2y45zbt2m4 . culrexdnyf , & o2y45zbt2m4 . ambhfazf2y [
0 ] , & o2y45zbt2m4 . mfc3g102pw [ 0 ] , & o2y45zbt2m4 . nyoyhdwzhr , &
o2y45zbt2m4 . lx0bv1yu1i [ 0 ] , & o2y45zbt2m4 . a55nsryplm [ 0 ] , &
o2y45zbt2m4 . h20zeizqdi [ 0 ] , & o2y45zbt2m4 . fj4e2b5bch [ 0 ] , &
o2y45zbt2m4 . hnvlhc15na [ 0 ] , & o2y45zbt2m4 . gbu5abs2sz [ 0 ] , &
o2y45zbt2m4 . dgjbpbeorv [ 0 ] , & o2y45zbt2m4 . hh1rdgrph0 [ 0 ] , &
o2y45zbt2m4 . pb33zpaont [ 0 ] , & o2y45zbt2m4 . fgtzb5d0ie , & o2y45zbt2m4 .
gr33hmjawo [ 0 ] , & o2y45zbt2m4 . fepr2tvtnf , & o2y45zbt2m4 . gnzoqn2dsl [
0 ] , & o2y45zbt2m4 . pguc21lp1k [ 0 ] , & o2y45zbt2m4 . kwx5xj2ngl , &
o2y45zbt2m4 . inxuhwzyyf [ 0 ] , & o2y45zbt2m4 . ngj1laz0jn , & o2y45zbt2m4 .
m4a4e0kncl [ 0 ] , & o2y45zbt2m4 . gnhb3isuhw , ( & o2y45zbt2m4 . an1hct1vdk
[ 0 ] + 3 ) , & o2y45zbt2m4 . j5pfxwzlry [ 0 ] , & o2y45zbt2m4 . isiqvhsvds ,
( & o2y45zbt2m4 . an1hct1vdk [ 0 ] + 6 ) , & o2y45zbt2m4 . du4yqg3svc [ 0 ] ,
& o2y45zbt2m4 . mkpovvsjoj [ 0 ] , & o2y45zbt2m4 . aoe02aounf [ 0 ] , &
o2y45zbt2m4 . nyimkzd5hq [ 0 ] , & o2y45zbt2m4 . hiigrn3uvx [ 0 ] , &
o2y45zbt2m4 . cddswdr3cl [ 0 ] , & o2y45zbt2m4 . fllsexxjfy [ 0 ] , &
o2y45zbt2m4 . a2f0ypmsuy [ 0 ] , & o2y45zbt2m4 . obyw5bjsqt [ 0 ] , &
o2y45zbt2m4 . ch2k5w2dnh [ 0 ] , & o2y45zbt2m4 . fp4h0u1qqq [ 0 ] , &
o2y45zbt2m4 . ipb4qp4laq [ 0 ] , & o2y45zbt2m4 . fe3icz0afg [ 0 ] , &
o2y45zbt2m4 . kuqlbidad1 [ 0 ] , & o2y45zbt2m4 . dqh4fg2fl2 , & o2y45zbt2m4 .
g0mrioy1px , & o2y45zbt2m4 . olo2njtgqu [ 0 ] , ( & o2y45zbt2m4 . olo2njtgqu
[ 0 ] + 1 ) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 2 ) , ( & o2y45zbt2m4 .
olo2njtgqu [ 0 ] + 3 ) , & o2y45zbt2m4 . olo2njtgqu [ 0 ] , ( & o2y45zbt2m4 .
olo2njtgqu [ 0 ] + 1 ) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 2 ) , ( &
o2y45zbt2m4 . olo2njtgqu [ 0 ] + 3 ) , & o2y45zbt2m4 . olo2njtgqu [ 0 ] , ( &
o2y45zbt2m4 . olo2njtgqu [ 0 ] + 1 ) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 2
) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 3 ) , & o2y45zbt2m4 . olo2njtgqu [ 0
] , & o2y45zbt2m4 . olo2njtgqu [ 0 ] , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 1
) , & o2y45zbt2m4 . ouubw05eym [ 0 ] , & o2y45zbt2m4 . jjuwpyarp5 , &
o2y45zbt2m4 . ggrj4lwkdq , & o2y45zbt2m4 . jg5xwtwjpe [ 0 ] , & o2y45zbt2m4 .
jq2aut2ijb [ 0 ] , & o2y45zbt2m4 . bwu3hh5pg3 [ 0 ] , & o2y45zbt2m4 .
mvnud1uzgl , & o2y45zbt2m4 . hckf2ailv0 , & o2y45zbt2m4 . iunb01rvwp , &
o2y45zbt2m4 . bfud51xipp , & o2y45zbt2m4 . kp1mzqwbu3 , & o2y45zbt2m4 .
ltnksa0t1k , & o2y45zbt2m4 . fgtzb5d0ie , & o2y45zbt2m4 . fepr2tvtnf , &
o2y45zbt2m4 . gr33hmjawo [ 0 ] , & o2y45zbt2m4 . jgyobyjg0x , ( & o2y45zbt2m4
. olo2njtgqu [ 0 ] + 1 ) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 2 ) , ( &
o2y45zbt2m4 . olo2njtgqu [ 0 ] + 3 ) , & o2y45zbt2m4 . olo2njtgqu [ 0 ] , ( &
o2y45zbt2m4 . olo2njtgqu [ 0 ] + 2 ) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 1
) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 3 ) , & o2y45zbt2m4 . olo2njtgqu [ 0
] , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 3 ) , ( & o2y45zbt2m4 . olo2njtgqu [
0 ] + 1 ) , ( & o2y45zbt2m4 . olo2njtgqu [ 0 ] + 2 ) , & o2y45zbt2m4 .
olo2njtgqu [ 0 ] , & o2y45zbt2m4 . mrzwmqiqje , & o2y45zbt2m4 . b51zos5ddd ,
& o2y45zbt2m4 . hi5t21up55 , & o2y45zbt2m4 . mz4bssc4xj , & o2y45zbt2m4 .
ebby2e0eey , & o2y45zbt2m4 . kc5uinuva1 , & o2y45zbt2m4 . olg5gqva4k , &
o2y45zbt2m4 . ny5fqojp01 , & o2y45zbt2m4 . mwkxuoztcf , & o2y45zbt2m4 .
g42bdhp2mr , & o2y45zbt2m4 . gegkjzomxm , & o2y45zbt2m4 . kd1qxjhyrr , &
o2y45zbt2m4 . pgs5royztd , & o2y45zbt2m4 . eqlu1laly1 , & o2y45zbt2m4 .
c4imsujsyj , & o2y45zbt2m4 . ewg4gsarwm , & o2y45zbt2m4 . myxilkpyto , &
o2y45zbt2m4 . nfvbvcsgaf , & o2y45zbt2m4 . jyoiaqgash , & o2y45zbt2m4 .
am2ydxy3tg , & o2y45zbt2m4 . aayx0clngf , & o2y45zbt2m4 . imjovcvzmj , &
o2y45zbt2m4 . fhwu2rpyxm , & o2y45zbt2m4 . db5wedrkq4 , & o2y45zbt2m4 .
bzsae5g150 , & o2y45zbt2m4 . fxqr3to5iu , & o2y45zbt2m4 . b3deffzvww , &
o2y45zbt2m4 . jzcgup51f2 , & o2y45zbt2m4 . aqvhjylunl , & o2y45zbt2m4 .
pmy5icug2k , & o2y45zbt2m4 . pxdeyipxtr , & o2y45zbt2m4 . cepjmd5gi4 , &
o2y45zbt2m4 . a3l2vrrg5t , & o2y45zbt2m4 . pmjdaqsrgv , & o2y45zbt2m4 .
ivk2auaags , & o2y45zbt2m4 . hmdscxhrrq , & o2y45zbt2m4 . ks0a4vmt2y , &
o2y45zbt2m4 . fuxsypdw5b , & o2y45zbt2m4 . ibibxo1hc5 , & o2y45zbt2m4 .
e0g1epmzzc , & o2y45zbt2m4 . pvujvtillf , & o2y45zbt2m4 . bralaspqvj , &
o2y45zbt2m4 . mf042bbyls , & o2y45zbt2m4 . pvvuqzjxh5 , & o2y45zbt2m4 .
jkdvlxhrn3 , & o2y45zbt2m4 . nd0vnjuzbo , & o2y45zbt2m4 . ke44k2nvd3 , &
o2y45zbt2m4 . bvbwt2i4ty , & o2y45zbt2m4 . bckqvwne10 , & o2y45zbt2m4 .
icooi3vgxr , & o2y45zbt2m4 . nhfh5pwjge , & o2y45zbt2m4 . ekeiqfqt15 , &
o2y45zbt2m4 . fu44uyydbm , & o2y45zbt2m4 . nrvyadhccn , & o2y45zbt2m4 .
kif43ukmno , & o2y45zbt2m4 . lvap1gibsy , & o2y45zbt2m4 . fjgl0ynn23 , &
o2y45zbt2m4 . dlywnze0gh , & o2y45zbt2m4 . kyx4elghw5 , & o2y45zbt2m4 .
ightd03wbw , & o2y45zbt2m4 . boco0ydrhx , & o2y45zbt2m4 . kgibrayejc , &
o2y45zbt2m4 . klod4yztvz , & o2y45zbt2m4 . gr0fttz1x3 , & o2y45zbt2m4 .
lj2hsiefmb , & o2y45zbt2m4 . pqwrcdv51y , & o2y45zbt2m4 . gkj1c4ecpo , &
hbv5azo3sw . PWM_Period , & hbv5azo3sw . PWM1_Period , & hbv5azo3sw .
PWM2_Period , & hbv5azo3sw . PWM3_Period , & hbv5azo3sw . PWM4_Period , &
hbv5azo3sw . PWM5_Period , & hbv5azo3sw . Gain_Gain_eb5rzn1cjw , & hbv5azo3sw
. Gain1_Gain_i4m04mlldw , & hbv5azo3sw . Gain2_Gain_lwwetqjf5s , & hbv5azo3sw
. Gain3_Gain_b5qqmritsc , & hbv5azo3sw . Gain_Gain_jtp3rrvu3s , & hbv5azo3sw
. RandomSource_MeanVal_lzp2mz4mln , & hbv5azo3sw .
RandomSource_VarianceRTP_hlnrsyc2os , & hbv5azo3sw . RandomSource1_MeanVal ,
& hbv5azo3sw . RandomSource1_VarianceRTP , & hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action , & hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance , & hbv5azo3sw .
SensorattitudeBodyframe_Value [ 0 ] , & hbv5azo3sw .
Star1Earthinertialframe_Value [ 0 ] , & hbv5azo3sw .
Star2Earthinertialframe_Value [ 0 ] , & hbv5azo3sw .
Star3Earthinertialframe_Value [ 0 ] , & hbv5azo3sw .
Constant2_Value_ialq4qchdp [ 0 ] , & hbv5azo3sw . Constant3_Value [ 0 ] , &
hbv5azo3sw . Inertia_Value [ 0 ] , & hbv5azo3sw . Gain_Gain_cpl3z33sd4 , &
hbv5azo3sw . SensorattitudeBodyframe_Value_j5gua0l1cu [ 0 ] , & hbv5azo3sw .
Star1Earthinertialframe_Value_ifkn0ogqah [ 0 ] , & hbv5azo3sw .
Star2Earthinertialframe_Value_h1kqrgh25u [ 0 ] , & hbv5azo3sw .
Star3Earthinertialframe_Value_dn3g4rngub [ 0 ] , & hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_action_bvnbf3gfnd , & hbv5azo3sw .
DirectionCosineMatrixtoQuaternions_tolerance_lf33vmkxxr , & hbv5azo3sw .
NormalizeVector_maxzero , & hbv5azo3sw . NormalizeVector1_maxzero , &
hbv5azo3sw . NormalizeVector3_maxzero , & hbv5azo3sw .
NormalizeVector4_maxzero , & hbv5azo3sw . Gain_Gain_acmfvzt2nt , & hbv5azo3sw
. Inertia_Value_ionitpmuar [ 0 ] , & hbv5azo3sw . Gain_Gain_bi5br4oxvh , &
hbv5azo3sw . Gain1_Gain_cftaqvkxoi , & hbv5azo3sw . Constant_Value_hyw20kdmss
, & hbv5azo3sw . Constant_Value_hqwvrd4twi , & hbv5azo3sw .
Constant_Value_f5jgk2qlyk , & hbv5azo3sw . Merge_InitialOutput [ 0 ] , &
hbv5azo3sw . Gain1_Gain_l1jki2u5fa , & hbv5azo3sw .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] , & hbv5azo3sw .
a_Value , & hbv5azo3sw . e_Value , & hbv5azo3sw . u821stMarch_Value , &
hbv5azo3sw . Sun_Value , & hbv5azo3sw . Integrator_AbsoluteTolerance , &
hbv5azo3sw . Integrator1_AbsoluteTolerance , & hbv5azo3sw .
RandomSource_MeanVal , & hbv5azo3sw . RandomSource_VarianceRTP , & hbv5azo3sw
. RandomSource_MeanVal_pdjjnbytmo , & hbv5azo3sw .
RandomSource_VarianceRTP_k13dwuafgu , & hbv5azo3sw .
RandomSource_MeanVal_c0srfhbvgi , & hbv5azo3sw .
RandomSource_VarianceRTP_ho3qok5dvb , & hbv5azo3sw .
DataStoreMemoryP_InitialValue [ 0 ] , & hbv5azo3sw .
DataStoreMemoryx_InitialValue [ 0 ] , & hbv5azo3sw . BlockOrdering_Value , &
hbv5azo3sw . Enable1_Value , & hbv5azo3sw . Q_Value [ 0 ] , & hbv5azo3sw .
R1_Value [ 0 ] , & hbv5azo3sw . Merge_InitialOutput_faglwg4vcm [ 0 ] , &
hbv5azo3sw . Constant_Value_fjyq3eus5i , & hbv5azo3sw .
Constant_Value_cpj53jxfos , & hbv5azo3sw . Constant_Value_ouyamitdob , &
hbv5azo3sw . Constant_Value_guhbgdhd5y , & hbv5azo3sw .
NormalizeVector_maxzero_bhjxf3hbxp , & hbv5azo3sw . Constant_Value_k3ydr0xveb
[ 0 ] , & hbv5azo3sw . Sensororientation_Value [ 0 ] , & hbv5azo3sw .
Saturation_UpperSat , & hbv5azo3sw . Saturation_LowerSat , & hbv5azo3sw .
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
RandomSource1_VarianceRTP_cg3jlumacb , & hbv5azo3sw . Constant_Value , &
hbv5azo3sw . Gain_Gain , & hbv5azo3sw . Gain1_Gain , & hbv5azo3sw .
Gain_Gain_fgogcvmrol , & hbv5azo3sw . Gain_Gain_lhyrdo4a3w , & hbv5azo3sw .
Gain_Gain_jllkehyjaf , & hbv5azo3sw . Gain_Gain_lwb1grxsgi , & hbv5azo3sw .
Gain_Gain_hmfig3lbok , & hbv5azo3sw . Gain_Gain_m1woqqz52k , & hbv5azo3sw .
Gain_Gain_flpxquj1at , & hbv5azo3sw . Constant_Value_ekkpqgqspn , &
hbv5azo3sw . Gain_Gain_m4jtdwqsx1 , & hbv5azo3sw . Constant_Value_hrofb0v0v5
, & hbv5azo3sw . Gain_Gain_cnryscy0x5 , & hbv5azo3sw . Gain1_Gain_objsqoebrs
, & hbv5azo3sw . Gain1_Gain_km22rji0yo , & hbv5azo3sw .
Constant_Value_c0ie4jx1vv , & hbv5azo3sw . Constant1_Value_lvvzxuwh5z , &
hbv5azo3sw . Anglebetween3rdJanto21stMarch180_Value , & hbv5azo3sw .
Constant_Value_mgrgcefnc2 , & hbv5azo3sw . Constant5_Value , & hbv5azo3sw .
Ecliptic_Value , & hbv5azo3sw . Gain_Gain_nrquqjsjbh , & hbv5azo3sw .
Gain1_Gain_csudgssrcg , & hbv5azo3sw . Constant3_Value_aiagav1bu5 , &
hbv5azo3sw . Constant4_Value , & hbv5azo3sw . Gain_Gain_ij5ephcub4 , &
hbv5azo3sw . Gain1_Gain_fos5u53xa3 , & hbv5azo3sw . Gain_Gain_fosanw5ymw , &
hbv5azo3sw . Gain_Gain_irerkaxl5x , & hbv5azo3sw . Gain_Gain_p1y5blaq4p , &
hbv5azo3sw . Gain_Gain_ke0m542tvh , & hbv5azo3sw . Gain_Gain_egeq4qcrwd , &
hbv5azo3sw . Gain_Gain_eyanrhbwuk , & hbv5azo3sw . Gain_Gain_pgavoonfvk , &
hbv5azo3sw . yBlockOrdering_Y0 , & hbv5azo3sw . Constant_Value_czyi20hi44 , &
hbv5azo3sw . Gain_Gain_f2lrjksp1b , & hbv5azo3sw . Gain1_Gain_ctfieebgom , &
hbv5azo3sw . Constant_Value_pu1egqm5wd , & hbv5azo3sw .
Constant_Value_oqac1ckjba , & hbv5azo3sw . Constant_Value_etis5qgp2s , &
hbv5azo3sw . Constant_Value_loxooi2xox , & hbv5azo3sw .
Constant_Value_h114kk0gb0 , & hbv5azo3sw . Constant_Value_kd13wd1tn5 , &
hbv5azo3sw . Gain_Gain_i1fq4bspbj , & hbv5azo3sw . Gain1_Gain_b0y5bwazer , &
hbv5azo3sw . Gain2_Gain_clpxe40pxa , & hbv5azo3sw . Gain3_Gain_dq4fv403xs , &
hbv5azo3sw . Gain_Gain_jkk5qbvhrd , & hbv5azo3sw . Gain1_Gain_hwcrrxc31u , &
hbv5azo3sw . Gain3_Gain , & hbv5azo3sw . Gain4_Gain , & hbv5azo3sw .
Gain_Gain_js4ptfwauk , & hbv5azo3sw . Gain1_Gain_ckvar5qtuu , & hbv5azo3sw .
Gain2_Gain , & hbv5azo3sw . Gain3_Gain_flkrwqpj2z , & hbv5azo3sw .
Constant_Value_ollq4x5vyn , & hbv5azo3sw . Gain_Gain_avgts0xajn , &
hbv5azo3sw . Gain1_Gain_pfgznzxep3 , & hbv5azo3sw . Gain2_Gain_d0aeb3inpf , &
hbv5azo3sw . Constant_Value_jelrytb22b , & hbv5azo3sw . Gain_Gain_l4qk2foong
, & hbv5azo3sw . Gain1_Gain_b2dtklqw2b , & hbv5azo3sw . Gain2_Gain_jbi3ws3ahy
, & hbv5azo3sw . Constant_Value_nfqnghygav , & hbv5azo3sw .
Gain_Gain_fsocaetgdj , & hbv5azo3sw . Gain1_Gain_igcxviai5g , & hbv5azo3sw .
Gain2_Gain_mcrod3aisq , & hbv5azo3sw . Constant_Value_hn3g4e2bdf , &
hbv5azo3sw . Gain_Gain_kewyutalpa , & hbv5azo3sw . Gain1_Gain_e5ngzsvcli , &
hbv5azo3sw . Gain2_Gain_nben4kjacq , & hbv5azo3sw . Constant_Value_cinqqywm1t
, & hbv5azo3sw . Gain_Gain_fouuav1ki1 , & hbv5azo3sw . Gain1_Gain_lq4olh4tnx
, & hbv5azo3sw . Gain2_Gain_d4fbbaxwpd , & hbv5azo3sw .
Constant_Value_aglfz4cib2 , & hbv5azo3sw . Gain_Gain_kc1cpqscqf , &
hbv5azo3sw . Gain1_Gain_n4q3gythod , & hbv5azo3sw . Gain2_Gain_arhr50dupm , &
hbv5azo3sw . Gain1_Gain_byeui5d4hz , & hbv5azo3sw . Constant_Value_azddlyivju
, & hbv5azo3sw . Constant3_Value_fveye0j2gb , & hbv5azo3sw . u2_Gain , &
hbv5azo3sw . Gain_Gain_cqlkw4p3g1 , & hbv5azo3sw . Gain1_Gain_ij2znuz5co , &
hbv5azo3sw . Gain2_Gain_medwk1da45 , & hbv5azo3sw . Gain3_Gain_j50dplxsob , &
hbv5azo3sw . Gain_Gain_ffyvgqn0t3 , & hbv5azo3sw . Gain1_Gain_hf2zl5hf11 , &
hbv5azo3sw . Gain3_Gain_bw3onmpp4n , & hbv5azo3sw . Gain4_Gain_evdjntwv1r , &
hbv5azo3sw . Gain_Gain_ev442xw5g3 , & hbv5azo3sw . Gain1_Gain_bctn5kthma , &
hbv5azo3sw . Gain2_Gain_omr2r2devz , & hbv5azo3sw . Gain3_Gain_iezjytb1ib , &
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
hbv5azo3sw . Gain2_Gain_necstpfmlp , & hbv5azo3sw .
Constant1_Value_il1xiv44vm , & hbv5azo3sw . Constant2_Value_gu0oz414og [ 0 ]
, & hbv5azo3sw . Constant_Value_dchp0pj4cy , & hbv5azo3sw . Constant1_Value ,
& hbv5azo3sw . Constant2_Value [ 0 ] , & hbv5azo3sw .
Constant_Value_pobvkhrg1q , & hbv5azo3sw . Constant1_Value_ngar4yzxq0 , &
hbv5azo3sw . Constant2_Value_dvdwumvekn [ 0 ] , & hbv5azo3sw .
Constant_Value_afybtd5xa5 , & hbv5azo3sw . Constant1_Value_d3rbf1demf , &
hbv5azo3sw . Constant1_Value_oiduqg4pzd , & hbv5azo3sw . Bias1_Bias [ 0 ] , &
hbv5azo3sw . Bias_Bias , & hbv5azo3sw . Constant_Value_bpdqgjnrbi , &
hbv5azo3sw . Gain_Gain_cjicctxqb2 , & hbv5azo3sw . Gain1_Gain_nieh11pzcd , &
hbv5azo3sw . Gain2_Gain_cko11epp5n , & hbv5azo3sw . Constant_Value_lxx0buxvfk
, & hbv5azo3sw . Gain_Gain_cf5hb10y5x , & hbv5azo3sw . Gain1_Gain_gwlrw1w2b3
, & hbv5azo3sw . Gain2_Gain_n32pjfxnui , & hbv5azo3sw .
Constant_Value_a2jieicat5 , & hbv5azo3sw . Gain_Gain_efnax0y1dx , &
hbv5azo3sw . Gain1_Gain_ddeccjfmea , & hbv5azo3sw . Gain2_Gain_g2ebct4dqc , &
hbv5azo3sw . Constant_Value_mrthaqohbp , & hbv5azo3sw . Gain_Gain_msviodsdfg
, & hbv5azo3sw . Gain1_Gain_fdnpx3hnab , & hbv5azo3sw . Gain2_Gain_jrylcyky0d
, & hbv5azo3sw . Constant_Value_gob0mxnrc1 , & hbv5azo3sw .
Gain_Gain_j00moojqwi , & hbv5azo3sw . Gain1_Gain_epavf05nx2 , & hbv5azo3sw .
Gain2_Gain_jieczjcfxj , & hbv5azo3sw . Constant_Value_l4ftm45smy , &
hbv5azo3sw . Gain_Gain_lxppc43sr3 , & hbv5azo3sw . Gain1_Gain_pr0mjxkeko , &
hbv5azo3sw . Gain2_Gain_oh11qzcnsq , & hbv5azo3sw .
Constant1_Value_c4wnv34dlm , & hbv5azo3sw . Constant2_Value_i3cnjpylpr [ 0 ]
, & hbv5azo3sw . Constant_Value_m2h11to3lk , & hbv5azo3sw .
Constant1_Value_h5yyggpyun , & hbv5azo3sw . Constant2_Value_dsajk3p21p [ 0 ]
, & hbv5azo3sw . Constant_Value_glskcdmgi0 , & hbv5azo3sw .
Constant1_Value_ius3i4otxm , & hbv5azo3sw . Constant2_Value_j5v1xvugrn [ 0 ]
, & hbv5azo3sw . Constant_Value_p5m1vauvdr , & hbv5azo3sw .
Constant1_Value_l2qqn3e4fv , & hbv5azo3sw . Constant1_Value_ftvtqjp1us , &
hbv5azo3sw . Bias1_Bias_ipdymfxp23 [ 0 ] , & hbv5azo3sw .
Bias_Bias_la31kdn2hs , & n1mubcupv31 . kbqjtzizsx [ 0 ] , & n1mubcupv31 .
bcrrky3g2k [ 0 ] , & n1mubcupv31 . li1obxdvy3 [ 0 ] , & n1mubcupv31 .
ezm2ooaqjl [ 0 ] , & n1mubcupv31 . cjfebnqw1p , & rtP_Spacecraft , &
rtP_Earth , & rtP_Const , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
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
SpacecraftDT , initialAngularSpeed ) , 0 , 0 , 0 } , { "baricentricInertia" ,
rt_offsetof ( SpacecraftDT , baricentricInertia ) , 0 , 0 , 0 } , {
"geometricCenter" , rt_offsetof ( SpacecraftDT , geometricCenter ) , 0 , 0 ,
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
rtDimensionMap [ ] = { { rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 18 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 22 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 26 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR
, 28 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = { 3 , 1 , 1 , 1
, 4 , 1 , 3 , 3 , 1 , 3 , 2 , 1 , 7 , 1 , 9 , 1 , 1 , 4 , 7 , 7 , 6 , 6 , 1 ,
2 , 1 , 10 , 3 , 10 , 1 , 6 } ; static const real_T rtcapiStoredFloats [ ] =
{ 0.01 , 0.0 , 0.1 , 0.03 , 1.0 , 2.0 } ; static const rtwCAPI_FixPtMap
rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 }
, } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
1 ] , 2 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void
* ) & rtcapiStoredFloats [ 1 ] , 4 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 3 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 3 ,
0 } , { ( NULL ) , ( NULL ) , 13 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 4 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 5 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 5 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 6 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 182 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 329 ,
rtModelParameters , 3 } , { rtBlockStates , 5 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 437933454U , 3791509005U , 3322113795U ,
3236631036U } , ( NULL ) , 0 , 0 , rt_LoggedStateIdxList } ; const
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
