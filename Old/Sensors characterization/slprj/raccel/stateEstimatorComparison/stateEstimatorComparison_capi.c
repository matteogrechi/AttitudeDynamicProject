#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "stateEstimatorComparison_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "stateEstimatorComparison.h"
#include "stateEstimatorComparison_capi.h"
#include "stateEstimatorComparison_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"stateEstimatorComparison/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 1 , 0 , TARGET_STRING ( "stateEstimatorComparison/Gain2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 }
, { 3 , 0 , TARGET_STRING ( "stateEstimatorComparison/Sum1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sum2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 5 , 0 , TARGET_STRING ( "stateEstimatorComparison/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"stateEstimatorComparison/Zero-Order Hold1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"stateEstimatorComparison/Gyro reading/Random Source" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 3 } , { 8 , 0 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector1/Divide" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
"stateEstimatorComparison/PWM/Variable Pulse Generator" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 1 } , { 10 , 0 , TARGET_STRING (
"stateEstimatorComparison/PWM1/Variable Pulse Generator" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 1 } , { 11 , 0 , TARGET_STRING (
"stateEstimatorComparison/PWM2/Variable Pulse Generator" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 1 } , { 12 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternions to Rotation Angles1/fcn3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternions to Rotation Angles3/fcn3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 4 } , { 15 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 4 } , { 16 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gain" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Integrator" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 0 } , { 18 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Square" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Matrix Concatenate" ) , TARGET_STRING (
"" ) , 0 , 0 , 4 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 21 , 27 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/MATLAB Function1" ) , TARGET_STRING ( ""
) , 0 , 0 , 5 , 0 , 2 } , { 22 , 27 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/MATLAB Function1" ) , TARGET_STRING ( ""
) , 1 , 0 , 6 , 0 , 2 } , { 23 , 34 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/MATLAB Function1" ) , TARGET_STRING ( ""
) , 0 , 0 , 5 , 0 , 2 } , { 24 , 41 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Correct1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 3 , 0 , 2 } , { 25 , 43 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Correct2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 3 , 0 , 2 } , { 26 , 50 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Subsystem" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 5 } , { 27 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Division4/Quaternion Norm/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 5 } , { 28 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V1/Gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 5 } , { 29 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V1/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 5 } , { 30 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V1/Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 5 } , { 31 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V2/Gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 5 } , { 32 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V2/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 5 } , { 33 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V2/Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 5 } , { 34 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V3/Gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 5 } , { 35 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V3/Gain1" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 5 } , { 36 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V3/Gain2" ) , TARGET_STRING (
"" ) , 0 , 0 , 3 , 0 , 5 } , { 37 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V1/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 4 } , { 38 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V2/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 4 } , { 39 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V3/Sum" ) , TARGET_STRING ( ""
) , 0 , 0 , 3 , 0 , 4 } , { 40 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Trigonometric Function1"
) , TARGET_STRING ( "r1" ) , 0 , 0 , 3 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Trigonometric Function3"
) , TARGET_STRING ( "r3" ) , 0 , 0 , 3 , 0 , 0 } , { 43 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/trigFcn"
) , TARGET_STRING ( "r2" ) , 0 , 0 , 3 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Trigonometric Function1"
) , TARGET_STRING ( "r1" ) , 0 , 0 , 3 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Trigonometric Function3"
) , TARGET_STRING ( "r3" ) , 0 , 0 , 3 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/trigFcn"
) , TARGET_STRING ( "r2" ) , 0 , 0 , 3 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 49 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Sum" )
, TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 50 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 52 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Constant" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 53 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Constant1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 4 } , { 54 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/Sum" ) ,
TARGET_STRING ( "Sun wrt s/c [Earth inertial frame][km]" ) , 0 , 0 , 0 , 0 ,
0 } , { 56 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Cross Product/Add3" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Cross Product1/Add3" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 0 } , { 60 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 61 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 65 , 23 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 67 , 24 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 70 , 25 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 72 , 26 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 74 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 75 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 76 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 77 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 78 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 79 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 80 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 81 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 82 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 83 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 84 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 85 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 86 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 87 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 88 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 89 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 90 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 91 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 92 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 93 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 94 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 95 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 6 } , { 96 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Zero-Order Hold" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 97 , 41 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Correct1/Correct" ) ,
TARGET_STRING ( "" ) , 2 , 1 , 3 , 0 , 2 } , { 98 , 43 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Correct2/Correct" ) ,
TARGET_STRING ( "" ) , 2 , 1 , 3 , 0 , 2 } , { 99 , 50 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Subsystem/Data Store Read"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 5 } , { 100 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 101 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 102 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 103 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 104 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 105 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 106 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 107 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 108 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Cartesian to polar/Atan1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 109 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Vector magnitude and direction2/Square Root"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 110 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 111 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 112 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 113 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Euler equations (rigid body) /Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 114 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Euler equations (rigid body) /Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 115 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Kinematics with quaternions/Matrix Multiply"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 116 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Quaternion Normalize/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 117 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Quaternion Normalize/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 118 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Quaternion Normalize/Product2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 119 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Quaternion Normalize/Product3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 120 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Solar radiation pressure (torque only)/Solar radiation pressure/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 121 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 122 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 123 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 124 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 125 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Square"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 126 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 127 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 128 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 129 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 130 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 131 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 132 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 133 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 134 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 135 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 136 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 137 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 138 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Merge1"
) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 } , { 139 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 140 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 9 , 0 , 0 } , { 141 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/trace(DCM)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 142 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 143 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 144 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2/In"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 145 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem2/In"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 149 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 153 , 11 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 154 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 155 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 156 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 157 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 158 , 12 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 159 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 160 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 161 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 162 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 163 , 13 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 164 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 165 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 166 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 167 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 168 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 169 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 170 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 171 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 172 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 173 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 174 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 175 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 176 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 177 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 178 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 179 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 180 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 181 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 182 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 183 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 184 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 185 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 186 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 187 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 188 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 189 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 190 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 191 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 192 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 193 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 194 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 195 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 196 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 197 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 198 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 199 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 200 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 201 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 202 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 203 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 204 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 205 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 206 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 207 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 208 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 209 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 210 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 211 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 212 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 213 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 214 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 215 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 216 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 217 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 218 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 219 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 220 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 221 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 222 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 223 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 224 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 225 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 226 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 227 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 228 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 229 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 230 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 231 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 232 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 233 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 234 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 235 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 236 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 237 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 238 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 239 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 240 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 241 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 242 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 243 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 244 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 245 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 246 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 247 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 248 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 249 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 250 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 251 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 252 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 253 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 254 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 255 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 256 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 257 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 258 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 259 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 260 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 261 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 262 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 263 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 264 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 265 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 266 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 267 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 268 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 269 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 270 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 271 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 272 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 273 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 274 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 275 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 276 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 277 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 278 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 279 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 280 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 281 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector1" ) , TARGET_STRING ( "maxzero" )
, 0 , 3 , 0 } , { 282 , TARGET_STRING ( "stateEstimatorComparison/PWM" ) ,
TARGET_STRING ( "Period" ) , 0 , 3 , 0 } , { 283 , TARGET_STRING (
"stateEstimatorComparison/PWM1" ) , TARGET_STRING ( "Period" ) , 0 , 3 , 0 }
, { 284 , TARGET_STRING ( "stateEstimatorComparison/PWM2" ) , TARGET_STRING (
"Period" ) , 0 , 3 , 0 } , { 285 , TARGET_STRING (
"stateEstimatorComparison/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 4 , 0
} , { 286 , TARGET_STRING ( "stateEstimatorComparison/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 287 , TARGET_STRING (
"stateEstimatorComparison/Constant3" ) , TARGET_STRING ( "Value" ) , 0 , 10 ,
0 } , { 288 , TARGET_STRING ( "stateEstimatorComparison/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 289 , TARGET_STRING (
"stateEstimatorComparison/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } ,
{ 290 , TARGET_STRING ( "stateEstimatorComparison/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 291 , TARGET_STRING (
"stateEstimatorComparison/Gyro reading/Random Source" ) , TARGET_STRING (
"MeanVal" ) , 0 , 3 , 0 } , { 292 , TARGET_STRING (
"stateEstimatorComparison/Gyro reading/Random Source" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 3 , 0 } , { 293 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector1/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 294 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant2" ) , TARGET_STRING ( "Value"
) , 0 , 9 , 0 } , { 295 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant3" ) , TARGET_STRING ( "Value"
) , 0 , 9 , 0 } , { 296 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Inertia" ) , TARGET_STRING ( "Value" )
, 0 , 0 , 0 } , { 297 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gain" ) , TARGET_STRING ( "Gain" ) , 0
, 3 , 0 } , { 298 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 3 , 0 } , { 299 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions"
) , TARGET_STRING ( "action" ) , 0 , 3 , 0 } , { 300 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions"
) , TARGET_STRING ( "tolerance" ) , 0 , 3 , 0 } , { 301 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 302 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 303 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 304 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 305 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Gain" ) , TARGET_STRING ( "Gain" ) , 0 ,
3 , 0 } , { 306 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/DataStoreMemory - P" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 11 , 0 } , { 307 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/DataStoreMemory - x" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 7 , 0 } , { 308 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/BlockOrdering" ) ,
TARGET_STRING ( "Value" ) , 1 , 3 , 0 } , { 309 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Enable1" ) , TARGET_STRING
( "Value" ) , 1 , 3 , 0 } , { 310 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Enable2" ) , TARGET_STRING
( "Value" ) , 1 , 3 , 0 } , { 311 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Enable3" ) , TARGET_STRING
( "Value" ) , 1 , 3 , 0 } , { 312 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/MeasurementFcn3Inputs" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 313 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Q" ) , TARGET_STRING (
"Value" ) , 0 , 11 , 0 } , { 314 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/R1" ) , TARGET_STRING (
"Value" ) , 0 , 12 , 0 } , { 315 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/R2" ) , TARGET_STRING (
"Value" ) , 0 , 12 , 0 } , { 316 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/R3" ) , TARGET_STRING (
"Value" ) , 0 , 4 , 0 } , { 317 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V1/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 318 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V1/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 319 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V1/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 320 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V1/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 321 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V2/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 322 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V2/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 323 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V2/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 324 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V2/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 325 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V3/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 326 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V3/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 327 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V3/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 328 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation/V3/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 329 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V1/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 330 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V1/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 331 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V1/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 332 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V1/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 333 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V2/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 334 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V2/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 335 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V2/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 336 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V2/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 337 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V3/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 3 , 0 } , { 338 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V3/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 339 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V3/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 340 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Rotation1/V3/Gain2" ) , TARGET_STRING (
"Gain" ) , 0 , 3 , 0 } , { 341 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 342 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Spacecraft magnetic dipole [body reference frame]"
) , TARGET_STRING ( "Value" ) , 0 , 9 , 0 } , { 343 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/a" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 344 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/e" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 345 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/θ - (78° = 21st March)"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 346 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/μ Sun" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 347 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "AbsoluteTolerance" ) , 0 , 3 , 0 } , { 348 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator1" ) ,
TARGET_STRING ( "AbsoluteTolerance" ) , 0 , 3 , 0 } , { 349 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Merge"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 10 , 0 } , { 350 , TARGET_STRING
( "stateEstimatorComparison/Subsystem/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 351 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 352 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 353 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 354 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 355 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 356 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 357 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 358 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 359 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 360 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading1/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 361 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 362 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 363 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 364 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 365 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 366 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 367 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 368 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 369 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 370 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 371 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 372 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 373 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 374 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 375 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 376 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 377 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 378 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 379 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 380 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 381 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading4/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 382 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 383 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 384 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 385 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 386 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 387 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 388 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 389 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 390 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 391 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 392 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 393 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 394 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 395 , TARGET_STRING (
"stateEstimatorComparison/Subsystem1/Sun sensor reading6/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 396 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 397 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 398 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 399 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 400 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 401 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 402 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading1/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 403 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 404 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 405 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 406 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 407 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 408 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 409 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 410 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 411 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 412 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 413 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 414 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 415 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 416 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 417 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 418 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 419 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 420 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 421 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 422 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 423 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading4/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 424 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 425 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 426 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 427 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 428 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 429 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 430 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 431 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Normalize Vector" )
, TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 432 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 433 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Sensor orientation"
) , TARGET_STRING ( "Value" ) , 0 , 10 , 0 } , { 434 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Saturation" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 3 , 0 } , { 435 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Saturation" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 3 , 0 } , { 436 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 437 , TARGET_STRING (
"stateEstimatorComparison/Subsystem3/Sun sensor reading6/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 438 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Correct1/yBlockOrdering" )
, TARGET_STRING ( "InitialOutput" ) , 1 , 3 , 0 } , { 439 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Correct2/yBlockOrdering" )
, TARGET_STRING ( "InitialOutput" ) , 1 , 3 , 0 } , { 440 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter1/Correct3/yBlockOrdering" )
, TARGET_STRING ( "InitialOutput" ) , 1 , 3 , 0 } , { 441 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion conjugate/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 442 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/y rotation/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 443 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/y rotation/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 444 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/z rotation/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 445 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/z rotation/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 446 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 447 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 448 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 449 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 450 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 451 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 452 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 453 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 454 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 455 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 456 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 457 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 458 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Kinematics with quaternions/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 459 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 460 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 461 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 462 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Angle between 3rd Jan to 21st March - 180°"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 463 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 464 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 465 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Ecliptic"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 466 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 467 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 468 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 469 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 470 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 471 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 472 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Translational dynamic/Main contribution/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 473 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 474 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 475 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 476 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 477 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 478 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 479 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 480 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 481 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 482 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 483 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 484 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 485 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 486 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 487 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Normalize Vector/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 488 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 489 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 490 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 491 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 492 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 493 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 494 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 495 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 496 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 497 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 498 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 499 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 500 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 501 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 502 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 503 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 504 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 505 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 506 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 507 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 508 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 509 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 510 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 511 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 512 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 513 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 514 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 515 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 516 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Degrees to Radians/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 517 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 518 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 519 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Rotation Angles to Quaternions/1//2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 520 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 521 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 522 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 523 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 524 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 525 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 526 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 527 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 528 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 529 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 530 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 531 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 532 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 533 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 534 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 535 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 536 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 537 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 538 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 539 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 540 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 541 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 542 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 543 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 544 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 545 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 546 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 547 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 548 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 549 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 550 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 551 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 552 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 553 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 554 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 555 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading2/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 556 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 557 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 558 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 559 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 560 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 561 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 562 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 563 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 564 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 565 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 566 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 567 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading3/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 568 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 569 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 570 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 571 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 572 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 573 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 574 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 575 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 576 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 577 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 578 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 579 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading4/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 580 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 581 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 582 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 583 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 584 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 585 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 586 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 587 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 588 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 589 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 590 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 591 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading5/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 592 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 593 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 594 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 595 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 596 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 597 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 598 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 599 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 600 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 601 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 602 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 603 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem1/Sun sensor reading6/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 604 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 605 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 606 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 607 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 608 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 609 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 610 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 611 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 612 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 613 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 614 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 615 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading1/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 616 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 617 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 618 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 619 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 620 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 621 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 622 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 623 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 624 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 625 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 626 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 627 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading2/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 628 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 629 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 630 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 631 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 632 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 633 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 634 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 635 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 636 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 637 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 638 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 639 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading3/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 640 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 641 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 642 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 643 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 644 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 645 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 646 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 647 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 648 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 649 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 650 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 651 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading4/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 652 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 653 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 654 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 655 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 656 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 657 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 658 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 659 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 660 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 661 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 662 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 663 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading5/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 664 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 665 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 666 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 667 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 668 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 669 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 670 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 671 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 672 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 673 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 674 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 675 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem3/Sun sensor reading6/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 676 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 677 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 678 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 679 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 680 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 681 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 682 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 683 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 684 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 685 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 686 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 687 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 688 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 689 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 690 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 691 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 692 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 693 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 694 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 695 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 696 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 697 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 698 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 699 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 700 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 701 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 702 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 703 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 704 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 705 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 706 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 707 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 13 , 0 } , { 708 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 709 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 710 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 711 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 4 , 0 } , { 712 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 3 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 713 , 14 ,
TARGET_STRING ( "stateEstimatorComparison/Real physics/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 , 1 , - 1 , 0
} , { 714 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 715 , 6 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 8 , 0 , 0 , 1 , - 1 , 0
} , { 716 , 11 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 717 , 3 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 , 1 , - 1 , 0
} , { 718 , 10 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 719 ,
TARGET_STRING ( "Spacecraft" ) , 2 , 3 , 0 } , { 720 , TARGET_STRING (
"Earth" ) , 3 , 3 , 0 } , { 721 , TARGET_STRING ( "Const" ) , 4 , 3 , 0 } , {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & hfuaoawbo4x . fofwr0d1hg [ 0 ] , &
hfuaoawbo4x . f0akllhmze [ 0 ] , & hfuaoawbo4x . iqajyqskal [ 0 ] , &
hfuaoawbo4x . f0tf0xskar [ 0 ] , & hfuaoawbo4x . n0xb4olsgj [ 0 ] , &
hfuaoawbo4x . j13n0bzt32 [ 0 ] , & hfuaoawbo4x . jsthbuk1sr [ 0 ] , &
hfuaoawbo4x . jiauta4lz3 [ 0 ] , & hfuaoawbo4x . gritwbr2l0 [ 0 ] , &
hfuaoawbo4x . jiayh2y14j , & hfuaoawbo4x . jdthz1j4ti , & hfuaoawbo4x .
kd1zrciaaw , & hfuaoawbo4x . njop3q5gx2 , & hfuaoawbo4x . h23bmldhv4 , &
hfuaoawbo4x . ntohwlgjud [ 0 ] , & hfuaoawbo4x . kox0yk51ix [ 0 ] , &
hfuaoawbo4x . nkn0lxavyg [ 0 ] , & hfuaoawbo4x . ks14yvagh2 , & hfuaoawbo4x .
ncrcxz2klw , & hfuaoawbo4x . hypth4pdun [ 0 ] , & hfuaoawbo4x . hwxwn5ouzg [
0 ] , & hfuaoawbo4x . dtl5bmf354 [ 0 ] , & hfuaoawbo4x . nqhbc5nybn [ 0 ] , &
hfuaoawbo4x . ny1ut05nls [ 0 ] , & hfuaoawbo4x . ilm1n3ayxr , & hfuaoawbo4x .
lyxyg1om13 , & hfuaoawbo4x . bc4yufp30w [ 0 ] , & hfuaoawbo4x . asay5kywf5 ,
& hfuaoawbo4x . a1hpttag32 , & hfuaoawbo4x . nmaipecvge , & hfuaoawbo4x .
gpj4yt0rpp , & hfuaoawbo4x . hxg0kv5oai , & hfuaoawbo4x . cav5kycrkm , &
hfuaoawbo4x . nf1hgbxl14 , & hfuaoawbo4x . d3aemr4udg , & hfuaoawbo4x .
dch3ovvw3l , & hfuaoawbo4x . niyd3y5by1 , & hfuaoawbo4x . ndw2shsl4a , &
hfuaoawbo4x . ao2ehvfzbb , & hfuaoawbo4x . g22j2f1db1 , & hfuaoawbo4x .
cjccrkvyno [ 0 ] , & hfuaoawbo4x . cjccrkvyno [ 0 ] , ( & hfuaoawbo4x .
cjccrkvyno [ 0 ] + 2 ) , ( & hfuaoawbo4x . cjccrkvyno [ 0 ] + 1 ) , &
hfuaoawbo4x . ozhlra24jp [ 0 ] , & hfuaoawbo4x . ozhlra24jp [ 0 ] , ( &
hfuaoawbo4x . ozhlra24jp [ 0 ] + 2 ) , ( & hfuaoawbo4x . ozhlra24jp [ 0 ] + 1
) , & hfuaoawbo4x . jbummyrznk , & hfuaoawbo4x . bhk0qefpw3 [ 0 ] , &
hfuaoawbo4x . cbt3p1gwln [ 0 ] , & hfuaoawbo4x . aarhhbez0n , & hfuaoawbo4x .
dbb0wz0brw [ 0 ] , & hfuaoawbo4x . axzca0bxot [ 0 ] , & hfuaoawbo4x .
jz4js4cavj [ 0 ] , & hfuaoawbo4x . otudxcmy5f [ 0 ] , & hfuaoawbo4x .
djfx2ozwz1 [ 0 ] , & hfuaoawbo4x . jaehxyvqkj [ 0 ] , & hfuaoawbo4x .
mkltislhcr [ 0 ] , & hfuaoawbo4x . pqempn25ab [ 0 ] , & hfuaoawbo4x .
my3qvtobl0 [ 0 ] , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , ( & hfuaoawbo4x .
my3qvtobl0 [ 0 ] + 1 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , & hfuaoawbo4x .
aznxfnvabf , & hfuaoawbo4x . klui4qywrw [ 0 ] , & hfuaoawbo4x . chstcquajb ,
& hfuaoawbo4x . kxzub5nxhq [ 0 ] , & hfuaoawbo4x . jcrf3ejwt5 , ( &
hfuaoawbo4x . hypth4pdun [ 0 ] + 3 ) , & hfuaoawbo4x . ccotai5ab1 [ 0 ] , &
hfuaoawbo4x . bcu4ylgp31 , & hfuaoawbo4x . plvraarov5 [ 0 ] , & hfuaoawbo4x .
g1rwbozond [ 0 ] , & hfuaoawbo4x . jnj0b5ppbc [ 0 ] , & hfuaoawbo4x .
o2hjorpke2 [ 0 ] , & hfuaoawbo4x . h4s42jsqon [ 0 ] , & hfuaoawbo4x .
g5urx4llqk [ 0 ] , & hfuaoawbo4x . eutzf3fc5q [ 0 ] , & hfuaoawbo4x .
le1qwtjsnv [ 0 ] , & hfuaoawbo4x . a0iu5wjm5i [ 0 ] , & hfuaoawbo4x .
kvumw45neu [ 0 ] , & hfuaoawbo4x . mwmca0qjz4 [ 0 ] , & hfuaoawbo4x .
apdh45t2gv [ 0 ] , & hfuaoawbo4x . o3idhaeld0 [ 0 ] , & hfuaoawbo4x .
bzlwhzt3vy [ 0 ] , & hfuaoawbo4x . ptnsoso4dc [ 0 ] , & hfuaoawbo4x .
kkdzgznpnj [ 0 ] , & hfuaoawbo4x . frlotdeaj2 [ 0 ] , & hfuaoawbo4x .
p1goyf5ozx [ 0 ] , & hfuaoawbo4x . ddrli00reu [ 0 ] , & hfuaoawbo4x .
hhue5rbecu [ 0 ] , & hfuaoawbo4x . jeujegvl5t [ 0 ] , & hfuaoawbo4x .
h4ktifh2sj [ 0 ] , & hfuaoawbo4x . ocmmlusxei [ 0 ] , & hfuaoawbo4x .
nph04v1hzd [ 0 ] , & hfuaoawbo4x . huvsnztgla [ 0 ] , & hfuaoawbo4x .
ilm1n3ayxr , & hfuaoawbo4x . lyxyg1om13 , & hfuaoawbo4x . bc4yufp30w [ 0 ] ,
& hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x .
pmhguwhdvv , & hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x . h1m1us0vhn , &
hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x .
h1m1us0vhn , & hfuaoawbo4x . iuxf2i4tcl , & hfuaoawbo4x . jgzl5fcvsu , &
hfuaoawbo4x . lmuzqxuokj , & hfuaoawbo4x . cpm5g01ony , & hfuaoawbo4x .
ocma20pg4m , & hfuaoawbo4x . p3pcl4mtnq [ 0 ] , & hfuaoawbo4x . k3y3ixdgrn [
0 ] , & hfuaoawbo4x . lekkjhfcii [ 0 ] , & hfuaoawbo4x . kvwgtntple , &
hfuaoawbo4x . bygzv3wnat , & hfuaoawbo4x . aq2ghaceft , & hfuaoawbo4x .
hdc0j3rnbp , & hfuaoawbo4x . ddyoytv0e2 , & hfuaoawbo4x . f3ygbdvaty , &
hfuaoawbo4x . psr0r0bk4j , & hfuaoawbo4x . g0423fm4yn , & hfuaoawbo4x .
meblfsgtxo , & hfuaoawbo4x . ifmzqc4riz , & hfuaoawbo4x . my3qvtobl0 [ 0 ] ,
( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ]
+ 2 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3 ) , & hfuaoawbo4x . my3qvtobl0
[ 0 ] , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , ( & hfuaoawbo4x .
my3qvtobl0 [ 0 ] + 2 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3 ) , &
hfuaoawbo4x . my3qvtobl0 [ 0 ] , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , (
& hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] +
3 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , (
& hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , & hfuaoawbo4x . du15nl3tzh , &
hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x .
pmhguwhdvv , & hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x . h1m1us0vhn , &
hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x . i15qhheq5s , ( & hfuaoawbo4x .
my3qvtobl0 [ 0 ] + 1 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2 ) , ( &
hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , &
hfuaoawbo4x . punl0cw1in , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2 ) , ( &
hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3
) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , & hfuaoawbo4x . its1kwdpoq , ( &
hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1
) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2 ) , & hfuaoawbo4x . my3qvtobl0 [ 0
] , & hfuaoawbo4x . cvmohjxrdw , & hfuaoawbo4x . on1bmik0q5 , & hfuaoawbo4x .
fjdo1n5rtk , & hfuaoawbo4x . nxtdoutt0d , & hfuaoawbo4x . fovlccel0m , &
hfuaoawbo4x . paj1cpcltz , & hfuaoawbo4x . hkj5lh1yfa , & hfuaoawbo4x .
bx0wwwvie3 , & hfuaoawbo4x . le1tggu3fn , & hfuaoawbo4x . d0oto4f2d1 , &
hfuaoawbo4x . bedykpbnax , & hfuaoawbo4x . pem5nu1bix , & hfuaoawbo4x .
cklgc35k0o , & hfuaoawbo4x . iuompaq1le , & hfuaoawbo4x . nv4mt5uie4 , &
hfuaoawbo4x . gqzvomyv2t , & hfuaoawbo4x . dq2b0uqnue , & hfuaoawbo4x .
pvkeaggof5 , & hfuaoawbo4x . k3livt50xe , & hfuaoawbo4x . ge5q2osujn , &
hfuaoawbo4x . j0glhaz1ff , & hfuaoawbo4x . i3y3dprl5r , & hfuaoawbo4x .
ffcfrhk5gr , & hfuaoawbo4x . ec2sfpkq33 , & hfuaoawbo4x . ffh2jewlhj , &
hfuaoawbo4x . hnikyctles , & hfuaoawbo4x . j0rtedvqju , & hfuaoawbo4x .
ke1mnfoaag , & hfuaoawbo4x . nhqvej5sjs , & hfuaoawbo4x . nj2t1zjkhc , &
hfuaoawbo4x . kbgyhm1fgr , & hfuaoawbo4x . cufy1px1rg , & hfuaoawbo4x .
pfsox4kypy , & hfuaoawbo4x . krfsidb0qr , & hfuaoawbo4x . l4o4wkfjy0 , &
hfuaoawbo4x . jpj2vzl1x4 , & hfuaoawbo4x . an502njneh , & hfuaoawbo4x .
ebprrb1pb4 , & hfuaoawbo4x . feykuvpqmt , & hfuaoawbo4x . oikscjj451 , &
hfuaoawbo4x . lygujbzduh , & hfuaoawbo4x . aoeuzlyzik , & hfuaoawbo4x .
iuat0etg51 , & hfuaoawbo4x . aev03jsiqx , & hfuaoawbo4x . gawqt3r5dn , &
hfuaoawbo4x . bcxyit2ic3 , & hfuaoawbo4x . ipvurj0y1d , & hfuaoawbo4x .
p5aysueaot , & hfuaoawbo4x . mvsw1v05hz , & hfuaoawbo4x . pv2okmnedn , &
hfuaoawbo4x . i3vwzpv00l , & hfuaoawbo4x . goqadosznk , & hfuaoawbo4x .
n1y1fp1tkl , & hfuaoawbo4x . lnpqfpiwgf , & hfuaoawbo4x . kdwyr4lpv1 , &
hfuaoawbo4x . npvoy3nzmj , & hfuaoawbo4x . a2glfphjbj , & hfuaoawbo4x .
pfsks0y3nr , & hfuaoawbo4x . du2qaabf5h , & hfuaoawbo4x . o5zklgmfkz , &
hfuaoawbo4x . iqpr3p3rs0 , & hfuaoawbo4x . bbqhnrp1n5 , & hfuaoawbo4x .
gztytqjrbr , & hfuaoawbo4x . origvc1fia , & hfuaoawbo4x . aqrhufuanw , &
hfuaoawbo4x . hqxcud4qih , & hfuaoawbo4x . e3pw525aru , & hfuaoawbo4x .
cwsqdm0rrj , & hfuaoawbo4x . ehckrkdne1 , & hfuaoawbo4x . dantpmdd4u , &
hfuaoawbo4x . fxoiexsrms , & hfuaoawbo4x . olyaqikc15 , & hfuaoawbo4x .
hvkqpvk2my , & hfuaoawbo4x . hwi4oft1hq , & hfuaoawbo4x . lsjk5initb , &
hfuaoawbo4x . fkskvmplcl , & hfuaoawbo4x . iggwakfyei , & hfuaoawbo4x .
lt1fko3tiq , & hfuaoawbo4x . krzyy5xscm , & hfuaoawbo4x . aywwgafww0 , &
hfuaoawbo4x . jsl11ciyta , & hfuaoawbo4x . dlfxn2mgpk , & hfuaoawbo4x .
dqhytx5wim , & hfuaoawbo4x . ovzlu0geh0 , & hfuaoawbo4x . ikh4mq35wm , &
hfuaoawbo4x . fn0fkozy3r , & hfuaoawbo4x . e5dnskanhg , & hfuaoawbo4x .
psvpdz1e45 , & hfuaoawbo4x . irny0upjdu , & hfuaoawbo4x . ovxzd4nxnl , &
hfuaoawbo4x . ksjfkatzta , & hfuaoawbo4x . f2sr2z2tiv , & hfuaoawbo4x .
l145oj4ihb , & hfuaoawbo4x . bw0tsy3rjx , & hfuaoawbo4x . ninagdnqkp , &
hfuaoawbo4x . dytdqpfldp , & hfuaoawbo4x . lmx5u0qfh0 , & hfuaoawbo4x .
dwrpdlv2f5 , & hfuaoawbo4x . hoiwjokbvl , & hfuaoawbo4x . pwpsjlqzli , &
hfuaoawbo4x . p0aejvus1i , & hfuaoawbo4x . pro1ckqrto , & hfuaoawbo4x .
pl52eab1mb , & hfuaoawbo4x . lomp3tpos5 , & hfuaoawbo4x . c5wy4rvh2r , &
hfuaoawbo4x . fgmdntdopa , & hfuaoawbo4x . gbvr55mtvj , & hfuaoawbo4x .
kspdub4osy , & hfuaoawbo4x . fbm20tee0q , & hfuaoawbo4x . fomozizwka , &
hfuaoawbo4x . dy3a2ou5re , & hfuaoawbo4x . ihuo035dxp , & hfuaoawbo4x .
iqwyi5ur24 , & hfuaoawbo4x . epgzqlzua5 , & hfuaoawbo4x . pcw0pyw2gh , &
hfuaoawbo4x . abz0n5qp4d , & hfuaoawbo4x . bkxmmcqnop , & hfuaoawbo4x .
f2wok2vtfw , & bjiazabmpo . NormalizeVector1_maxzero , & bjiazabmpo .
PWM_Period , & bjiazabmpo . PWM1_Period , & bjiazabmpo . PWM2_Period , &
bjiazabmpo . Constant_Value_ijgpov0mvf [ 0 ] , & bjiazabmpo .
Constant1_Value_ejoqpgv2ji [ 0 ] , & bjiazabmpo . Constant3_Value_lcleawr1lx
[ 0 ] , & bjiazabmpo . Gain_Gain_h02ebdzwhh , & bjiazabmpo .
Gain1_Gain_bvtqk3cyhh , & bjiazabmpo . Gain2_Gain_lut5xpex21 , & bjiazabmpo .
RandomSource_MeanVal , & bjiazabmpo . RandomSource_VarianceRTP , & bjiazabmpo
. Constant_Value_h05qkqds1k , & bjiazabmpo . Constant2_Value_ialq4qchdp [ 0 ]
, & bjiazabmpo . Constant3_Value [ 0 ] , & bjiazabmpo . Inertia_Value [ 0 ] ,
& bjiazabmpo . Gain_Gain_cpl3z33sd4 , & bjiazabmpo . Integrator_IC , &
bjiazabmpo . DirectionCosineMatrixtoQuaternions_action , & bjiazabmpo .
DirectionCosineMatrixtoQuaternions_tolerance , & bjiazabmpo .
NormalizeVector_maxzero_idjlccn1tr , & bjiazabmpo .
NormalizeVector1_maxzero_pe3bb51lb3 , & bjiazabmpo . NormalizeVector3_maxzero
, & bjiazabmpo . NormalizeVector4_maxzero , & bjiazabmpo .
Gain_Gain_acmfvzt2nt , & bjiazabmpo . DataStoreMemoryP_InitialValue [ 0 ] , &
bjiazabmpo . DataStoreMemoryx_InitialValue [ 0 ] , & bjiazabmpo .
BlockOrdering_Value , & bjiazabmpo . Enable1_Value , & bjiazabmpo .
Enable2_Value , & bjiazabmpo . Enable3_Value , & bjiazabmpo .
MeasurementFcn3Inputs_Value , & bjiazabmpo . Q_Value [ 0 ] , & bjiazabmpo .
R1_Value [ 0 ] , & bjiazabmpo . R2_Value [ 0 ] , & bjiazabmpo . R3_Value [ 0
] , & bjiazabmpo . Constant_Value_mnihrtjfmj , & bjiazabmpo .
Gain_Gain_ncteysqil3 , & bjiazabmpo . Gain1_Gain_idqjpcj2w2 , & bjiazabmpo .
Gain2_Gain_oemzk5ojwm , & bjiazabmpo . Constant_Value_aqneserr4m , &
bjiazabmpo . Gain_Gain_lv4h0lzx53 , & bjiazabmpo . Gain1_Gain_jgiaul0apm , &
bjiazabmpo . Gain2_Gain_kwjfzexkam , & bjiazabmpo . Constant_Value_pymuilks0n
, & bjiazabmpo . Gain_Gain_fgmqaszm3p , & bjiazabmpo . Gain1_Gain_bu0iql53q1
, & bjiazabmpo . Gain2_Gain_ozqnssaofx , & bjiazabmpo .
Constant_Value_ci00grrtff , & bjiazabmpo . Gain_Gain_avea13ypea , &
bjiazabmpo . Gain1_Gain_mstcqdbdwc , & bjiazabmpo . Gain2_Gain_k2nkv35kyn , &
bjiazabmpo . Constant_Value_fe5n5wpanv , & bjiazabmpo . Gain_Gain_jsx4pu1q4q
, & bjiazabmpo . Gain1_Gain_lp32ym3e5x , & bjiazabmpo . Gain2_Gain_dp2u42f00i
, & bjiazabmpo . Constant_Value_ktx0dxt4vq , & bjiazabmpo .
Gain_Gain_p3jxtnv3m2 , & bjiazabmpo . Gain1_Gain_gaefdnqghd , & bjiazabmpo .
Gain2_Gain_fgpn4tkmjp , & bjiazabmpo . Gain1_Gain_l1jki2u5fa , & bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] , & bjiazabmpo .
a_Value , & bjiazabmpo . e_Value , & bjiazabmpo . u821stMarch_Value , &
bjiazabmpo . Sun_Value , & bjiazabmpo . Integrator_AbsoluteTolerance , &
bjiazabmpo . Integrator1_AbsoluteTolerance , & bjiazabmpo .
Merge_InitialOutput [ 0 ] , & bjiazabmpo . Constant_Value_fjyq3eus5i , &
bjiazabmpo . Constant_Value_cpj53jxfos , & bjiazabmpo .
Constant_Value_ouyamitdob , & bjiazabmpo . Constant_Value_guhbgdhd5y , &
bjiazabmpo . NormalizeVector_maxzero_bhjxf3hbxp , & bjiazabmpo .
Constant_Value_k3ydr0xveb [ 0 ] , & bjiazabmpo . Sensororientation_Value [ 0
] , & bjiazabmpo . Saturation_UpperSat_hvo4j1520s , & bjiazabmpo .
Saturation_LowerSat_anwhzkhsgm , & bjiazabmpo .
RandomSource1_MeanVal_bvk35h21mf , & bjiazabmpo .
RandomSource1_VarianceRTP_k1b5meiqjj , & bjiazabmpo .
NormalizeVector_maxzero_nx4f2adafg , & bjiazabmpo . Constant_Value_cknsmwduvj
[ 0 ] , & bjiazabmpo . Sensororientation_Value_hlfjdstuhw [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_m5walzmpht , & bjiazabmpo .
Saturation_LowerSat_kiy0a1gdvs , & bjiazabmpo .
RandomSource1_MeanVal_cgugych5h2 , & bjiazabmpo .
RandomSource1_VarianceRTP_pdcijtaj4d , & bjiazabmpo .
NormalizeVector_maxzero_j5wdotj0ar , & bjiazabmpo . Constant_Value_mxxxqc2s25
[ 0 ] , & bjiazabmpo . Sensororientation_Value_cwstcpopt3 [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_m5kmh5w5uw , & bjiazabmpo .
Saturation_LowerSat_i04nwcukho , & bjiazabmpo .
RandomSource1_MeanVal_d4idhl1tz1 , & bjiazabmpo .
RandomSource1_VarianceRTP_crqc3mkc0f , & bjiazabmpo .
NormalizeVector_maxzero_etigbudinl , & bjiazabmpo . Constant_Value_pxpcd5bk3c
[ 0 ] , & bjiazabmpo . Sensororientation_Value_escjrdlkcn [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_c4xiqwgxlz , & bjiazabmpo .
Saturation_LowerSat_pi2aujffw1 , & bjiazabmpo .
RandomSource1_MeanVal_n5f3r1zvmv , & bjiazabmpo .
RandomSource1_VarianceRTP_blin0jucej , & bjiazabmpo .
NormalizeVector_maxzero_mpxbpoayb2 , & bjiazabmpo . Constant_Value_a5pfdrbwx4
[ 0 ] , & bjiazabmpo . Sensororientation_Value_ezbdisr3i3 [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_mq4hmkw4m2 , & bjiazabmpo .
Saturation_LowerSat_dqoi00mxim , & bjiazabmpo .
RandomSource1_MeanVal_kfynkp2waz , & bjiazabmpo .
RandomSource1_VarianceRTP_dvuf3vyvl4 , & bjiazabmpo .
NormalizeVector_maxzero_kqylmwb1gt , & bjiazabmpo . Constant_Value_pb14rkkk1o
[ 0 ] , & bjiazabmpo . Sensororientation_Value_luhksxjjam [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_kiybxhvwme , & bjiazabmpo .
Saturation_LowerSat_lktmm4bxfn , & bjiazabmpo .
RandomSource1_MeanVal_d1pxk3satq , & bjiazabmpo .
RandomSource1_VarianceRTP_cg3jlumacb , & bjiazabmpo . NormalizeVector_maxzero
, & bjiazabmpo . Constant_Value_fvwrjd3qpo [ 0 ] , & bjiazabmpo .
Sensororientation_Value_c1w03cmwlz [ 0 ] , & bjiazabmpo . Saturation_UpperSat
, & bjiazabmpo . Saturation_LowerSat , & bjiazabmpo . RandomSource1_MeanVal ,
& bjiazabmpo . RandomSource1_VarianceRTP , & bjiazabmpo .
NormalizeVector_maxzero_cdhvq0rirk , & bjiazabmpo . Constant_Value_o4pefzbbdu
[ 0 ] , & bjiazabmpo . Sensororientation_Value_f1bimmtkao [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_iasva3d1xg , & bjiazabmpo .
Saturation_LowerSat_k012nv1qgk , & bjiazabmpo .
RandomSource1_MeanVal_fskbkqfzhy , & bjiazabmpo .
RandomSource1_VarianceRTP_c0tnp0ox24 , & bjiazabmpo .
NormalizeVector_maxzero_b4q4mcfdki , & bjiazabmpo . Constant_Value_aqc3aba12o
[ 0 ] , & bjiazabmpo . Sensororientation_Value_gzezhgiiva [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_kvrw4yrrrs , & bjiazabmpo .
Saturation_LowerSat_kx5yh1wv4z , & bjiazabmpo .
RandomSource1_MeanVal_memmqqy0nt , & bjiazabmpo .
RandomSource1_VarianceRTP_ciqyogzko1 , & bjiazabmpo .
NormalizeVector_maxzero_h2g0i450y0 , & bjiazabmpo . Constant_Value_kv3w21qse5
[ 0 ] , & bjiazabmpo . Sensororientation_Value_pvtoldl5dv [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_byrofjxopf , & bjiazabmpo .
Saturation_LowerSat_eqtwttitcd , & bjiazabmpo .
RandomSource1_MeanVal_c0fkc2tbqq , & bjiazabmpo .
RandomSource1_VarianceRTP_f4hdv51tm4 , & bjiazabmpo .
NormalizeVector_maxzero_j4hegkg3gk , & bjiazabmpo . Constant_Value_ei4qxougxr
[ 0 ] , & bjiazabmpo . Sensororientation_Value_g4fybr4ojz [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_llltpjmasd , & bjiazabmpo .
Saturation_LowerSat_od1cxjykdq , & bjiazabmpo .
RandomSource1_MeanVal_d5xz2yhw3l , & bjiazabmpo .
RandomSource1_VarianceRTP_g12uaggma2 , & bjiazabmpo .
NormalizeVector_maxzero_g4yscxcbyk , & bjiazabmpo . Constant_Value_lod4m2end1
[ 0 ] , & bjiazabmpo . Sensororientation_Value_bfbchbxuif [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_e1cwi1gybf , & bjiazabmpo .
Saturation_LowerSat_ajttgxrnng , & bjiazabmpo .
RandomSource1_MeanVal_jxhxrhz3me , & bjiazabmpo .
RandomSource1_VarianceRTP_bdmhqmxko4 , & bjiazabmpo . yBlockOrdering_Y0 , &
bjiazabmpo . yBlockOrdering_Y0_m1krpwpsee , & bjiazabmpo .
yBlockOrdering_Y0_cudnxvsixu , & bjiazabmpo . Gain_Gain_flpxquj1at , &
bjiazabmpo . Constant_Value_ekkpqgqspn , & bjiazabmpo . Gain_Gain_m4jtdwqsx1
, & bjiazabmpo . Constant_Value_hrofb0v0v5 , & bjiazabmpo .
Gain_Gain_cnryscy0x5 , & bjiazabmpo . Constant_Value_klghvcvqmj , &
bjiazabmpo . Gain_Gain_deacltj5ll , & bjiazabmpo . Gain1_Gain_fe0vmtwk5u , &
bjiazabmpo . Gain2_Gain_n2hlwdziix , & bjiazabmpo . Constant_Value_h3axm4dzs2
, & bjiazabmpo . Gain_Gain_m0ug0pnx04 , & bjiazabmpo . Gain1_Gain_epkzxiktj2
, & bjiazabmpo . Gain2_Gain_gnrwoc1vc2 , & bjiazabmpo .
Constant_Value_jsi055lqf3 , & bjiazabmpo . Gain_Gain_efwlgxe2sc , &
bjiazabmpo . Gain1_Gain_ito2bip4nt , & bjiazabmpo . Gain2_Gain_kojiuv3vcw , &
bjiazabmpo . Gain1_Gain_objsqoebrs , & bjiazabmpo . Gain1_Gain_km22rji0yo , &
bjiazabmpo . Constant_Value_c0ie4jx1vv , & bjiazabmpo .
Constant1_Value_lvvzxuwh5z , & bjiazabmpo .
Anglebetween3rdJanto21stMarch180_Value , & bjiazabmpo .
Constant_Value_mgrgcefnc2 , & bjiazabmpo . Constant5_Value , & bjiazabmpo .
Ecliptic_Value , & bjiazabmpo . Gain_Gain_nrquqjsjbh , & bjiazabmpo .
Gain1_Gain_csudgssrcg , & bjiazabmpo . Constant3_Value_aiagav1bu5 , &
bjiazabmpo . Constant4_Value , & bjiazabmpo . Gain_Gain_ij5ephcub4 , &
bjiazabmpo . Gain1_Gain_fos5u53xa3 , & bjiazabmpo . Gain_Gain_fosanw5ymw , &
bjiazabmpo . Constant_Value_czyi20hi44 , & bjiazabmpo . Gain_Gain , &
bjiazabmpo . Gain1_Gain , & bjiazabmpo . Constant_Value_pu1egqm5wd , &
bjiazabmpo . Constant_Value_oqac1ckjba , & bjiazabmpo .
Constant_Value_etis5qgp2s , & bjiazabmpo . Constant_Value_loxooi2xox , &
bjiazabmpo . Constant_Value_h114kk0gb0 , & bjiazabmpo .
Constant_Value_kd13wd1tn5 , & bjiazabmpo . Constant_Value_pw4amn2wvf , &
bjiazabmpo . Constant_Value_peinfzh1bx , & bjiazabmpo .
Constant_Value_agjbvr0z5q , & bjiazabmpo . Constant_Value_ktwwdrryx3 , &
bjiazabmpo . Constant_Value_aefuqipo3z , & bjiazabmpo .
Constant_Value_d3tr2oyhj4 , & bjiazabmpo . Constant_Value , & bjiazabmpo .
Constant_Value_ifjxstsexw , & bjiazabmpo . Constant_Value_nfnblq3wf3 , &
bjiazabmpo . Constant_Value_bxtk0v2tqk , & bjiazabmpo .
Constant_Value_ollq4x5vyn , & bjiazabmpo . Gain_Gain_avgts0xajn , &
bjiazabmpo . Gain1_Gain_pfgznzxep3 , & bjiazabmpo . Gain2_Gain_d0aeb3inpf , &
bjiazabmpo . Constant_Value_jelrytb22b , & bjiazabmpo . Gain_Gain_l4qk2foong
, & bjiazabmpo . Gain1_Gain_b2dtklqw2b , & bjiazabmpo . Gain2_Gain_jbi3ws3ahy
, & bjiazabmpo . Constant_Value_nfqnghygav , & bjiazabmpo .
Gain_Gain_fsocaetgdj , & bjiazabmpo . Gain1_Gain_igcxviai5g , & bjiazabmpo .
Gain2_Gain_mcrod3aisq , & bjiazabmpo . Constant_Value_hn3g4e2bdf , &
bjiazabmpo . Gain_Gain_kewyutalpa , & bjiazabmpo . Gain1_Gain_e5ngzsvcli , &
bjiazabmpo . Gain2_Gain_nben4kjacq , & bjiazabmpo . Constant_Value_cinqqywm1t
, & bjiazabmpo . Gain_Gain_fouuav1ki1 , & bjiazabmpo . Gain1_Gain_lq4olh4tnx
, & bjiazabmpo . Gain2_Gain_d4fbbaxwpd , & bjiazabmpo .
Constant_Value_aglfz4cib2 , & bjiazabmpo . Gain_Gain_kc1cpqscqf , &
bjiazabmpo . Gain1_Gain_n4q3gythod , & bjiazabmpo . Gain2_Gain_arhr50dupm , &
bjiazabmpo . Gain1_Gain_byeui5d4hz , & bjiazabmpo . Constant_Value_azddlyivju
, & bjiazabmpo . Constant3_Value_fveye0j2gb , & bjiazabmpo . u2_Gain , &
bjiazabmpo . Gain_Gain_cqlkw4p3g1 , & bjiazabmpo . Gain1_Gain_ij2znuz5co , &
bjiazabmpo . Gain2_Gain_medwk1da45 , & bjiazabmpo . Gain3_Gain_j50dplxsob , &
bjiazabmpo . Gain_Gain_ffyvgqn0t3 , & bjiazabmpo . Gain1_Gain_hf2zl5hf11 , &
bjiazabmpo . Gain3_Gain , & bjiazabmpo . Gain4_Gain , & bjiazabmpo .
Gain_Gain_ev442xw5g3 , & bjiazabmpo . Gain1_Gain_bctn5kthma , & bjiazabmpo .
Gain2_Gain , & bjiazabmpo . Gain3_Gain_iezjytb1ib , & bjiazabmpo .
Constant_Value_hucifuffuc , & bjiazabmpo . Gain_Gain_gakfyjlszi , &
bjiazabmpo . Gain1_Gain_cp5gxmxv40 , & bjiazabmpo . Gain2_Gain_bqvzfgganp , &
bjiazabmpo . Constant_Value_itxm0x43si , & bjiazabmpo . Gain_Gain_jcxnesc51s
, & bjiazabmpo . Gain1_Gain_e5tqo52tku , & bjiazabmpo . Gain2_Gain_jxsi55a1on
, & bjiazabmpo . Constant_Value_ezafw5tbx0 , & bjiazabmpo .
Gain_Gain_omyfgx1n5h , & bjiazabmpo . Gain1_Gain_n4ecq0uzvs , & bjiazabmpo .
Gain2_Gain_bxmfdcbxd2 , & bjiazabmpo . Constant_Value_kst2th0l1z , &
bjiazabmpo . Gain_Gain_cr4zczeez0 , & bjiazabmpo . Gain1_Gain_g12m14aft0 , &
bjiazabmpo . Gain2_Gain_enxakegu4s , & bjiazabmpo . Constant_Value_igmvdrtaty
, & bjiazabmpo . Gain_Gain_lw5hirdrrr , & bjiazabmpo . Gain1_Gain_amkbhcbkvw
, & bjiazabmpo . Gain2_Gain_bttjb1ulla , & bjiazabmpo .
Constant_Value_m4goabuepu , & bjiazabmpo . Gain_Gain_pmdq3xatwv , &
bjiazabmpo . Gain1_Gain_bgbnv4z5nx , & bjiazabmpo . Gain2_Gain_cdbsbiii2b , &
bjiazabmpo . Constant_Value_lntxh0ukmr , & bjiazabmpo . Gain_Gain_pfg5czu2ug
, & bjiazabmpo . Gain1_Gain_lgo5besblz , & bjiazabmpo . Gain2_Gain_aaobkzaajt
, & bjiazabmpo . Constant_Value_imdxvhi4fs , & bjiazabmpo .
Gain_Gain_dmquktubpv , & bjiazabmpo . Gain1_Gain_o20oz1n5pv , & bjiazabmpo .
Gain2_Gain_bxr0hdxmou , & bjiazabmpo . Constant_Value_k0omy0fwkr , &
bjiazabmpo . Gain_Gain_app3p5qkli , & bjiazabmpo . Gain1_Gain_ggc5pki3i3 , &
bjiazabmpo . Gain2_Gain_jiiceq4a1g , & bjiazabmpo . Constant_Value_ba5xlpus1a
, & bjiazabmpo . Gain_Gain_kb00k2wbfq , & bjiazabmpo . Gain1_Gain_iow1llvkxc
, & bjiazabmpo . Gain2_Gain_dtunvm3otp , & bjiazabmpo .
Constant_Value_eqda1kzn3h , & bjiazabmpo . Gain_Gain_npe4zqgyas , &
bjiazabmpo . Gain1_Gain_fdxpyxu0o1 , & bjiazabmpo . Gain2_Gain_n4sn3p4zhh , &
bjiazabmpo . Constant_Value_j3hxujgyee , & bjiazabmpo . Gain_Gain_caz4q343an
, & bjiazabmpo . Gain1_Gain_odtb3u3w54 , & bjiazabmpo . Gain2_Gain_pl1uwnp5vb
, & bjiazabmpo . Constant_Value_myru2azkts , & bjiazabmpo .
Gain_Gain_jfezxdcuu1 , & bjiazabmpo . Gain1_Gain_mzwjkwmyds , & bjiazabmpo .
Gain2_Gain_pt1tknsnuk , & bjiazabmpo . Constant_Value_mpzaspn304 , &
bjiazabmpo . Gain_Gain_cylo5ppz5d , & bjiazabmpo . Gain1_Gain_evkyndzct5 , &
bjiazabmpo . Gain2_Gain_ogm3tj3b4p , & bjiazabmpo . Constant_Value_ey5twm140q
, & bjiazabmpo . Gain_Gain_lnevd4sqnk , & bjiazabmpo . Gain1_Gain_f5yo2mvezp
, & bjiazabmpo . Gain2_Gain_mg22nq4b3k , & bjiazabmpo .
Constant_Value_kkk1dzjy3p , & bjiazabmpo . Gain_Gain_f5mrtnkemr , &
bjiazabmpo . Gain1_Gain_fdh0g1o02u , & bjiazabmpo . Gain2_Gain_gnny303ymj , &
bjiazabmpo . Constant_Value_jbyhakx4ay , & bjiazabmpo . Gain_Gain_bkbvyxdlek
, & bjiazabmpo . Gain1_Gain_pbfdoucssu , & bjiazabmpo . Gain2_Gain_ijreebnsuw
, & bjiazabmpo . Constant_Value_f1tb0wmrtm , & bjiazabmpo .
Gain_Gain_a2lqzra5qd , & bjiazabmpo . Gain1_Gain_f45poxumoe , & bjiazabmpo .
Gain2_Gain_necstpfmlp , & bjiazabmpo . Constant_Value_c0bcxggzid , &
bjiazabmpo . Gain_Gain_jom4zjkqot , & bjiazabmpo . Gain1_Gain_ec5n4vlyml , &
bjiazabmpo . Gain2_Gain_ppb55hsf22 , & bjiazabmpo . Constant_Value_cd21hrcv55
, & bjiazabmpo . Gain_Gain_owfxeyg0hz , & bjiazabmpo . Gain1_Gain_azstchlb2n
, & bjiazabmpo . Gain2_Gain_azs3a4y21d , & bjiazabmpo .
Constant_Value_i1rjqidmbj , & bjiazabmpo . Gain_Gain_lp1ded333l , &
bjiazabmpo . Gain1_Gain_e5iewy4mku , & bjiazabmpo . Gain2_Gain_p50urd0soy , &
bjiazabmpo . Constant_Value_i54as2vhie , & bjiazabmpo . Gain_Gain_aqtmdzg5ve
, & bjiazabmpo . Gain1_Gain_luiia42t5t , & bjiazabmpo . Gain2_Gain_mb2nt12ulg
, & bjiazabmpo . Constant_Value_ogstggr2j3 , & bjiazabmpo .
Gain_Gain_lychsiugxc , & bjiazabmpo . Gain1_Gain_b1eddp32tw , & bjiazabmpo .
Gain2_Gain_nfkayg1huw , & bjiazabmpo . Constant_Value_oetlq3b1z2 , &
bjiazabmpo . Gain_Gain_nuvyvhffsa , & bjiazabmpo . Gain1_Gain_ci4cvxslsl , &
bjiazabmpo . Gain2_Gain_ktgwyxzbfl , & bjiazabmpo . Constant_Value_dqtse52l4d
, & bjiazabmpo . Gain_Gain_mrg5lsnokn , & bjiazabmpo . Gain1_Gain_hbwgr3wfvo
, & bjiazabmpo . Gain2_Gain_ez1qvjlr1d , & bjiazabmpo .
Constant_Value_aocyzox0ld , & bjiazabmpo . Gain_Gain_hiv2r3l01b , &
bjiazabmpo . Gain1_Gain_pxrflmc1o4 , & bjiazabmpo . Gain2_Gain_g5qbykwveo , &
bjiazabmpo . Constant_Value_atme3hmtbv , & bjiazabmpo . Gain_Gain_hgfy5zqhxv
, & bjiazabmpo . Gain1_Gain_eo1xrtusyu , & bjiazabmpo . Gain2_Gain_ismz453fn1
, & bjiazabmpo . Constant_Value_epgscsipyz , & bjiazabmpo .
Gain_Gain_ena5yszh4w , & bjiazabmpo . Gain1_Gain_eqkjxlvbiq , & bjiazabmpo .
Gain2_Gain_k0lo0mgba2 , & bjiazabmpo . Constant_Value_h300vfl4mv , &
bjiazabmpo . Gain_Gain_j4d3hvhs43 , & bjiazabmpo . Gain1_Gain_ceiu2lnwhi , &
bjiazabmpo . Gain2_Gain_htyiogkmpg , & bjiazabmpo . Constant_Value_apsk02wc0m
, & bjiazabmpo . Gain_Gain_k42ekcf23x , & bjiazabmpo . Gain1_Gain_izo4ouweai
, & bjiazabmpo . Gain2_Gain_bgeppzp5tr , & bjiazabmpo .
Constant_Value_oi0kxpowja , & bjiazabmpo . Gain_Gain_crryondw0o , &
bjiazabmpo . Gain1_Gain_lzvj53au2u , & bjiazabmpo . Gain2_Gain_perzcljgjz , &
bjiazabmpo . Constant_Value_bx4ma4qdmb , & bjiazabmpo . Gain_Gain_evjcc1eafd
, & bjiazabmpo . Gain1_Gain_gns40wabnm , & bjiazabmpo . Gain2_Gain_i0hel0ofcl
, & bjiazabmpo . Constant_Value_ihm1fmgdud , & bjiazabmpo .
Gain_Gain_mniibtfrh4 , & bjiazabmpo . Gain1_Gain_dsk352okyn , & bjiazabmpo .
Gain2_Gain_f4f4o3e0ao , & bjiazabmpo . Constant_Value_j5awaeon0r , &
bjiazabmpo . Gain_Gain_l3rthal15j , & bjiazabmpo . Gain1_Gain_dizs3vyxgq , &
bjiazabmpo . Gain2_Gain_im22oggu52 , & bjiazabmpo . Constant_Value_a1zgpg42vr
, & bjiazabmpo . Gain_Gain_pvyl4t2yw0 , & bjiazabmpo . Gain1_Gain_gqxohufbgj
, & bjiazabmpo . Gain2_Gain_axoynd5pv4 , & bjiazabmpo .
Constant_Value_dbnrgxoczr , & bjiazabmpo . Gain_Gain_gnoc2rqmdh , &
bjiazabmpo . Gain1_Gain_ckkbstydzz , & bjiazabmpo . Gain2_Gain_bq1ops2rb1 , &
bjiazabmpo . Constant_Value_bpdqgjnrbi , & bjiazabmpo . Gain_Gain_cjicctxqb2
, & bjiazabmpo . Gain1_Gain_nieh11pzcd , & bjiazabmpo . Gain2_Gain_cko11epp5n
, & bjiazabmpo . Constant_Value_lxx0buxvfk , & bjiazabmpo .
Gain_Gain_cf5hb10y5x , & bjiazabmpo . Gain1_Gain_gwlrw1w2b3 , & bjiazabmpo .
Gain2_Gain_n32pjfxnui , & bjiazabmpo . Constant_Value_a2jieicat5 , &
bjiazabmpo . Gain_Gain_efnax0y1dx , & bjiazabmpo . Gain1_Gain_ddeccjfmea , &
bjiazabmpo . Gain2_Gain_g2ebct4dqc , & bjiazabmpo . Constant_Value_mrthaqohbp
, & bjiazabmpo . Gain_Gain_msviodsdfg , & bjiazabmpo . Gain1_Gain_fdnpx3hnab
, & bjiazabmpo . Gain2_Gain_jrylcyky0d , & bjiazabmpo .
Constant_Value_gob0mxnrc1 , & bjiazabmpo . Gain_Gain_j00moojqwi , &
bjiazabmpo . Gain1_Gain_epavf05nx2 , & bjiazabmpo . Gain2_Gain_jieczjcfxj , &
bjiazabmpo . Constant_Value_l4ftm45smy , & bjiazabmpo . Gain_Gain_lxppc43sr3
, & bjiazabmpo . Gain1_Gain_pr0mjxkeko , & bjiazabmpo . Gain2_Gain_oh11qzcnsq
, & bjiazabmpo . Constant1_Value_c4wnv34dlm , & bjiazabmpo .
Constant2_Value_i3cnjpylpr [ 0 ] , & bjiazabmpo . Constant_Value_m2h11to3lk ,
& bjiazabmpo . Constant1_Value , & bjiazabmpo . Constant2_Value [ 0 ] , &
bjiazabmpo . Constant_Value_glskcdmgi0 , & bjiazabmpo .
Constant1_Value_ius3i4otxm , & bjiazabmpo . Constant2_Value_j5v1xvugrn [ 0 ]
, & bjiazabmpo . Constant_Value_p5m1vauvdr , & bjiazabmpo .
Constant1_Value_l2qqn3e4fv , & bjiazabmpo . Constant1_Value_ftvtqjp1us , &
bjiazabmpo . Bias1_Bias [ 0 ] , & bjiazabmpo . Bias_Bias , & o1yff13vlj3 .
f3u5ihkx4m , & o1yff13vlj3 . cxzg0u0ymm [ 0 ] , & o1yff13vlj3 . osavuy4txz [
0 ] , & o1yff13vlj3 . ceu1xu3gg2 [ 0 ] , & o1yff13vlj3 . ozozulc01j [ 0 ] , &
o1yff13vlj3 . exrjjbh4to , & rtP_Spacecraft , & rtP_Earth , & rtP_Const , } ;
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
SpacecraftDT , initialAngularSpeed ) , 0 , 2 , 0 } , { "baricentricInertia" ,
rt_offsetof ( SpacecraftDT , baricentricInertia ) , 0 , 2 , 0 } , {
"geometricCenter" , rt_offsetof ( SpacecraftDT , geometricCenter ) , 0 , 2 ,
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
rtDimensionMap [ ] = { { rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2
, 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 4 ,
2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 ,
0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , { rtwCAPI_VECTOR , 12 , 2 , 0 } , {
rtwCAPI_VECTOR , 14 , 2 , 0 } , { rtwCAPI_VECTOR , 8 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 18 , 2
, 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 12 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 22 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 26 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 3 , 1 , 2 , 1 , 1 , 1 , 3 , 3 , 1 , 4 , 7 , 1 , 4 ,
1 , 1 , 3 , 7 , 7 , 2 , 2 , 1 , 2 , 1 , 10 , 3 , 10 , 1 , 6 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.0 , 0.1 , 1.0 , 0.03 , 0.01 , 2.0 } ;
static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 4 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 5 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 3 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 3 , 0 } , { ( NULL ) ,
( NULL ) , 10 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , ( const
void * ) & rtcapiStoredFloats [ 0 ] , 2 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 5 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 6 ,
0 } } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals
, 281 , rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 432 ,
rtModelParameters , 3 } , { rtBlockStates , 6 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 2276260034U , 4289519509U , 774707880U ,
3737108171U } , ( NULL ) , 0 , 0 } ; const rtwCAPI_ModelMappingStaticInfo *
stateEstimatorComparison_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void stateEstimatorComparison_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( * rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void stateEstimatorComparison_host_InitializeDataMapInfo (
stateEstimatorComparison_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
MagneticFieldInPolarCoords_host_InitializeDataMapInfo ( & ( dataMap -> child0
) ,
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 1 ) ; }
#ifdef __cplusplus
}
#endif
#endif
