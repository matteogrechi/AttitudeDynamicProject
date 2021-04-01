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
"stateEstimatorComparison/Sum" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 }
, { 1 , 0 , TARGET_STRING ( "stateEstimatorComparison/Sum2" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"stateEstimatorComparison/Gyro reading/Random Source" ) , TARGET_STRING ( ""
) , 0 , 0 , 2 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector/Math Function1" ) , TARGET_STRING
( "" ) , 0 , 0 , 3 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector/Divide" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 5 , 2 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector/Product" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector1/Divide" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternions to Rotation Angles1/fcn3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternions to Rotation Angles3/fcn3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 4 , 0 , 3 } , { 10 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant2" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 3 } , { 11 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant3" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 3 } , { 12 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Initial angular velocity" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 13 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gain" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gain1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 0 } , { 15 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Matrix Concatenate" ) , TARGET_STRING (
"" ) , 0 , 0 , 5 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Saturation" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 17 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 18 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 20 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 21 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 22 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Saturation1" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 2 } , { 23 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Random Source2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 24 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"" ) , 0 , 0 , 0 , 0 , 2 } , { 25 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 4 } , { 26 , 38 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/Subsystem" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 2 } , { 27 , 0 , TARGET_STRING (
"stateEstimatorComparison/Vector magnitude and direction/Square Root" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 28 , 0 , TARGET_STRING (
"stateEstimatorComparison/Quaternion Division4/Quaternion Norm/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 29 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Trigonometric Function1"
) , TARGET_STRING ( "r1" ) , 0 , 0 , 3 , 0 , 0 } , { 31 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Trigonometric Function3"
) , TARGET_STRING ( "r3" ) , 0 , 0 , 3 , 0 , 0 } , { 32 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/trigFcn"
) , TARGET_STRING ( "r2" ) , 0 , 0 , 3 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Vector Concatenate"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Trigonometric Function1"
) , TARGET_STRING ( "r1" ) , 0 , 0 , 3 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Trigonometric Function3"
) , TARGET_STRING ( "r3" ) , 0 , 0 , 3 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/trigFcn"
) , TARGET_STRING ( "r2" ) , 0 , 0 , 3 , 0 , 0 } , { 37 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 38 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Sum" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 39 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Magnetic field in polar coords"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 40 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 41 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 42 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/Sum" ) ,
TARGET_STRING ( "Sun wrt s/c [Earth inertial frame][km]" ) , 0 , 0 , 1 , 0 ,
0 } , { 43 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 44 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Cross Product/Add3" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Cross Product1/Add3" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 49 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 50 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 51 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 52 , 24 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 54 , 25 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 55 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 57 , 26 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 58 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4/Math Function1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 59 , 0 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4/Divide" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 60 , 27 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4/Product" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 61 , 38 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/Subsystem/Data Store Read"
) , TARGET_STRING ( "" ) , 0 , 0 , 6 , 0 , 2 } , { 62 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 63 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 64 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 65 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 66 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 67 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 68 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 69 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/Merge"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 70 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Cartesian to polar/Atan1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 71 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Vector magnitude and direction2/Square Root"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 72 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 74 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 75 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Euler equations (rigid body) /Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 76 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Euler equations (rigid body) /Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 77 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Kinematics with quaternions/Matrix Multiply"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Solar radiation pressure (torque only)/Solar radiation pressure/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 79 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 80 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Divide1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 82 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 83 , 0 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Square"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 84 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 87 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 88 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 89 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 90 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 91 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 93 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 94 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 95 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 96 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Merge1"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 7 , 0 , 0 } , { 99 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/trace(DCM)/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 100 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 101 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 102 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 103 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 104 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 105 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 106 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 107 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 108 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 109 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 110 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 111 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 112 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 113 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 114 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 115 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 116 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 117 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 118 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 119 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 120 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 121 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 122 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 123 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 124 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 125 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 126 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 127 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 128 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 129 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 130 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 131 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 132 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 133 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 134 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 135 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 136 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 137 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 138 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 139 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 140 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 141 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 142 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 143 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 144 , 0 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 145 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 146 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 147 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem2/In"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 148 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 149 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 150 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem2/In"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 151 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 152 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 153 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 154 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 155 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 156 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 157 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 158 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 159 , 12 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 160 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 161 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 162 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 163 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 164 , 13 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 165 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 166 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 167 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 168 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 169 , 14 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/sqrt"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 170 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 171 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 172 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 173 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 174 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 175 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Product5"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 176 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 177 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 178 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Product8"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 179 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector" ) , TARGET_STRING ( "maxzero" ) ,
0 , 3 , 0 } , { 180 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector1" ) , TARGET_STRING ( "maxzero" )
, 0 , 3 , 0 } , { 181 , TARGET_STRING ( "stateEstimatorComparison/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 7 , 0 } , { 182 , TARGET_STRING (
"stateEstimatorComparison/Gyro reading/Random Source" ) , TARGET_STRING (
"MeanVal" ) , 0 , 3 , 0 } , { 183 , TARGET_STRING (
"stateEstimatorComparison/Gyro reading/Random Source" ) , TARGET_STRING (
"VarianceRTP" ) , 0 , 3 , 0 } , { 184 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 185 , TARGET_STRING (
"stateEstimatorComparison/Normalize Vector1/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 186 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant1" ) , TARGET_STRING ( "Value"
) , 0 , 8 , 0 } , { 187 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant2" ) , TARGET_STRING ( "Value"
) , 0 , 7 , 0 } , { 188 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Constant3" ) , TARGET_STRING ( "Value"
) , 0 , 7 , 0 } , { 189 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Inertia" ) , TARGET_STRING ( "Value" )
, 0 , 1 , 0 } , { 190 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Initial angular velocity" ) ,
TARGET_STRING ( "Value" ) , 0 , 7 , 0 } , { 191 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gain" ) , TARGET_STRING ( "Gain" ) , 0
, 3 , 0 } , { 192 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gain1" ) , TARGET_STRING ( "Gain" ) ,
0 , 3 , 0 } , { 193 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions"
) , TARGET_STRING ( "action" ) , 0 , 3 , 0 } , { 194 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions"
) , TARGET_STRING ( "tolerance" ) , 0 , 3 , 0 } , { 195 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 196 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 197 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 198 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4" ) , TARGET_STRING (
"maxzero" ) , 0 , 3 , 0 } , { 199 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Normalize Vector" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 200 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 201 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Sensor orientation" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 202 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 3 , 0 } , { 203 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 3 , 0 } , { 204 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 205 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 206 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Normalize Vector" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 207 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 208 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Sensor orientation" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 209 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 3 , 0 } , { 210 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 3 , 0 } , { 211 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 212 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 213 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Normalize Vector" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 214 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 215 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Sensor orientation" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 216 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 3 , 0 } , { 217 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 3 , 0 } , { 218 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 219 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 220 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Normalize Vector" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 221 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 222 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Sensor orientation" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 223 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Saturation1" ) , TARGET_STRING
( "UpperLimit" ) , 0 , 3 , 0 } , { 224 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Saturation1" ) , TARGET_STRING
( "LowerLimit" ) , 0 , 3 , 0 } , { 225 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Random Source2" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 226 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Random Source2" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 227 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Normalize Vector" ) ,
TARGET_STRING ( "maxzero" ) , 0 , 3 , 0 } , { 228 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 9 , 0 } , { 229 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Sensor orientation" ) ,
TARGET_STRING ( "Value" ) , 0 , 8 , 0 } , { 230 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 3 , 0 } , { 231 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 3 , 0 } , { 232 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "MeanVal" ) , 0 , 3 , 0 } , { 233 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Random Source1" ) ,
TARGET_STRING ( "VarianceRTP" ) , 0 , 3 , 0 } , { 234 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/DataStoreMemory - P" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 10 , 0 } , { 235 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/DataStoreMemory - x" ) ,
TARGET_STRING ( "InitialValue" ) , 0 , 6 , 0 } , { 236 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/BlockOrdering" ) ,
TARGET_STRING ( "Value" ) , 1 , 3 , 0 } , { 237 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/Enable1" ) , TARGET_STRING
( "Value" ) , 1 , 3 , 0 } , { 238 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/Q" ) , TARGET_STRING (
"Value" ) , 0 , 10 , 0 } , { 239 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/R1" ) , TARGET_STRING (
"Value" ) , 0 , 10 , 0 } , { 240 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 241 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Spacecraft magnetic dipole [body reference frame]"
) , TARGET_STRING ( "Value" ) , 0 , 7 , 0 } , { 242 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/a" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 243 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/e" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 244 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/θ - (78° = 21st March)"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 245 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Sun position wrt s//c/μ Sun" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 246 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "AbsoluteTolerance" ) , 0 , 3 , 0 } , { 247 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator1" ) ,
TARGET_STRING ( "AbsoluteTolerance" ) , 0 , 3 , 0 } , { 248 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Merge"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 8 , 0 } , { 249 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 250 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 251 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 252 , TARGET_STRING (
"stateEstimatorComparison/Subsystem/Normalize Vector4/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 253 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 254 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 255 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 256 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 257 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Normalize Vector/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 258 , TARGET_STRING (
"stateEstimatorComparison/Unscented Kalman Filter2/Correct1/yBlockOrdering" )
, TARGET_STRING ( "InitialOutput" ) , 1 , 3 , 0 } , { 259 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion conjugate/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 260 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/y rotation/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 261 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/y rotation/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 262 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/z rotation/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 263 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/z rotation/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 264 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 265 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 266 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 267 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V1/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 268 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 269 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 270 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 271 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V2/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 272 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 273 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 274 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 275 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Quaternion Rotation/V3/Gain2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 276 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Rotational dynamic/Kinematics with quaternions/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 277 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Degrees to Radians/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 278 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 279 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 280 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Angle between 3rd Jan to 21st March - 180°"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 281 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 282 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Constant5"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 283 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Ecliptic"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 284 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 285 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 286 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 287 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Constant4"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 288 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 289 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/J2 effect/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 290 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Translational dynamic/Main contribution/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 291 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 292 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 293 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Positive Trace/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 294 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 295 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V1/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 296 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 297 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 298 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 299 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 300 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 301 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 302 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 303 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V3/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 304 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 305 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 306 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 307 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 308 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 309 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 310 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 311 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 312 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 313 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 314 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 315 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 316 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 317 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading2/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 318 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 319 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 320 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 321 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 322 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 323 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 324 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 325 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 326 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 327 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 328 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 329 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading3/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 330 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 331 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 332 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 333 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 334 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 335 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 336 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 337 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 338 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 339 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 340 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 341 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading4/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 342 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 343 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V1/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 344 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V1/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 345 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V1/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 346 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 347 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V2/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 348 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V2/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 349 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V2/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 350 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 351 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V3/Gain" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 352 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V3/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 353 , TARGET_STRING (
"stateEstimatorComparison/Sun sensor reading5/Quaternion Rotation/V3/Gain2" )
, TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 354 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 355 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles1/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 356 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 357 , TARGET_STRING (
 "stateEstimatorComparison/Quaternions to Rotation Angles3/Angle Calculation/Protect asincos input/If Action Subsystem1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 358 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 359 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 360 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 361 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 362 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 363 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 364 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 365 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 366 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 367 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 368 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 369 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Magnetic effect (torque only)/Quaternion Rotation1/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 370 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 371 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 372 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 373 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 374 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 375 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 376 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 377 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 378 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 379 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 380 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 381 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 382 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Degrees to Radians/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 383 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 384 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Get distance/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 385 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Rotation Angles to Quaternions/1//2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 386 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 387 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 388 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 389 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 390 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 391 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 392 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 393 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 394 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 395 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 396 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 397 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 398 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 399 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 400 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 401 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 402 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 403 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 404 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 405 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 406 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 407 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 408 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 409 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Gravity gradient (torque only)/Vector rotate/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 410 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 411 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 412 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 413 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V1/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 414 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 415 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 416 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 417 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V2/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 418 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 419 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 420 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 421 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Sun position wrt Earth/Quaternion Rotation/V3/Gain2"
) , TARGET_STRING ( "Gain" ) , 0 , 3 , 0 } , { 422 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 423 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 424 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(1,1)/u(1) -(u(5)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 425 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 426 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 427 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(2,2)/u(5) -(u(1)+u(9)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 428 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 429 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/if s~=0; s=0.5//s/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 11 , 0 } , { 430 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Negative Trace/Maximum Value at DCM(3,3)/u(9) -(u(1)+u(5)) +1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 431 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/Else If Not Orthogonal/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 432 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/If Not Proper/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 3 , 0 } , { 433 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotOrthogonal/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 5 , 0 } , { 434 , TARGET_STRING (
 "stateEstimatorComparison/Subsystem/Direction Cosine Matrix  to Quaternions/Validate DCM/If Warning//Error/isNotProper/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 3 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 435 , 8 ,
TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 436 , 4 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Rotational dynamic/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 0 , 1 , - 1 , 0
} , { 437 , 11 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 438 , 1 , TARGET_STRING (
"stateEstimatorComparison/Real physics/Translational dynamic/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 , 1 , - 1 , 0
} , { 439 , 0 , TARGET_STRING (
 "stateEstimatorComparison/Real physics/Sun position wrt s//c/Get true anomaly1/Integrator"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 440 ,
TARGET_STRING ( "Spacecraft" ) , 2 , 3 , 0 } , { 441 , TARGET_STRING (
"Earth" ) , 3 , 3 , 0 } , { 442 , TARGET_STRING ( "Const" ) , 4 , 3 , 0 } , {
0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & hfuaoawbo4x . iqajyqskal [ 0 ] , &
hfuaoawbo4x . n0xb4olsgj [ 0 ] , & hfuaoawbo4x . jiauta4lz3 [ 0 ] , &
hfuaoawbo4x . hzxy1e3aeq , & hfuaoawbo4x . mgmp4jf0kq [ 0 ] , & hfuaoawbo4x .
maelhcaps4 [ 0 ] , & hfuaoawbo4x . gritwbr2l0 [ 0 ] , & hfuaoawbo4x .
njop3q5gx2 , & hfuaoawbo4x . h23bmldhv4 , & hfuaoawbo4x . nj1dtdqjvk [ 0 ] ,
& hfuaoawbo4x . ntohwlgjud [ 0 ] , & hfuaoawbo4x . kox0yk51ix [ 0 ] , &
hfuaoawbo4x . fncmo3ybdw [ 0 ] , & hfuaoawbo4x . nkn0lxavyg [ 0 ] , &
hfuaoawbo4x . fvxovyedkd [ 0 ] , & hfuaoawbo4x . hypth4pdun [ 0 ] , &
hfuaoawbo4x . krci0t2j4m [ 0 ] , & hfuaoawbo4x . msxyxwoyit [ 0 ] , &
hfuaoawbo4x . pk0lw220uo [ 0 ] , & hfuaoawbo4x . o2hjorpke2 [ 0 ] , &
hfuaoawbo4x . fxhcux2wdi [ 0 ] , & hfuaoawbo4x . m0eteafuap [ 0 ] , &
hfuaoawbo4x . nrlkxnu4yx [ 0 ] , & hfuaoawbo4x . iereuzzsux [ 0 ] , &
hfuaoawbo4x . pzdghdtfja [ 0 ] , & hfuaoawbo4x . a0a51vbmb1 [ 0 ] , &
hfuaoawbo4x . j1xfny152w [ 0 ] , & hfuaoawbo4x . kmcgn0cyib , & hfuaoawbo4x .
asay5kywf5 , & hfuaoawbo4x . cjccrkvyno [ 0 ] , & hfuaoawbo4x . cjccrkvyno [
0 ] , ( & hfuaoawbo4x . cjccrkvyno [ 0 ] + 2 ) , ( & hfuaoawbo4x . cjccrkvyno
[ 0 ] + 1 ) , & hfuaoawbo4x . ozhlra24jp [ 0 ] , & hfuaoawbo4x . ozhlra24jp [
0 ] , ( & hfuaoawbo4x . ozhlra24jp [ 0 ] + 2 ) , ( & hfuaoawbo4x . ozhlra24jp
[ 0 ] + 1 ) , & hfuaoawbo4x . jbummyrznk , & hfuaoawbo4x . bhk0qefpw3 [ 0 ] ,
& hfuaoawbo4x . cbt3p1gwln [ 0 ] , & hfuaoawbo4x . aarhhbez0n , & hfuaoawbo4x
. jz4js4cavj [ 0 ] , & hfuaoawbo4x . otudxcmy5f [ 0 ] , & hfuaoawbo4x .
djfx2ozwz1 [ 0 ] , & hfuaoawbo4x . jaehxyvqkj [ 0 ] , & hfuaoawbo4x .
mkltislhcr [ 0 ] , & hfuaoawbo4x . pqempn25ab [ 0 ] , & hfuaoawbo4x .
my3qvtobl0 [ 0 ] , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , ( & hfuaoawbo4x .
my3qvtobl0 [ 0 ] + 1 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , & hfuaoawbo4x .
aznxfnvabf , & hfuaoawbo4x . klui4qywrw [ 0 ] , & hfuaoawbo4x . chstcquajb ,
& hfuaoawbo4x . kxzub5nxhq [ 0 ] , & hfuaoawbo4x . jcrf3ejwt5 , ( &
hfuaoawbo4x . hypth4pdun [ 0 ] + 3 ) , & hfuaoawbo4x . ccotai5ab1 [ 0 ] , &
hfuaoawbo4x . bcu4ylgp31 , ( & hfuaoawbo4x . hypth4pdun [ 0 ] + 6 ) , &
hfuaoawbo4x . plvraarov5 [ 0 ] , & hfuaoawbo4x . j1xfny152w [ 0 ] , &
hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x .
pmhguwhdvv , & hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x . h1m1us0vhn , &
hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x .
h1m1us0vhn , & hfuaoawbo4x . iuxf2i4tcl , & hfuaoawbo4x . jgzl5fcvsu , &
hfuaoawbo4x . lmuzqxuokj , & hfuaoawbo4x . cpm5g01ony , & hfuaoawbo4x .
ocma20pg4m , & hfuaoawbo4x . p3pcl4mtnq [ 0 ] , & hfuaoawbo4x . k3y3ixdgrn [
0 ] , & hfuaoawbo4x . lekkjhfcii [ 0 ] , & hfuaoawbo4x . ddyoytv0e2 , &
hfuaoawbo4x . f3ygbdvaty , & hfuaoawbo4x . psr0r0bk4j , & hfuaoawbo4x .
g0423fm4yn , & hfuaoawbo4x . meblfsgtxo , & hfuaoawbo4x . ifmzqc4riz , &
hfuaoawbo4x . my3qvtobl0 [ 0 ] , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , (
& hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] +
3 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] +
1 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2 ) , ( & hfuaoawbo4x . my3qvtobl0
[ 0 ] + 3 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , ( & hfuaoawbo4x . my3qvtobl0
[ 0 ] + 1 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2 ) , ( & hfuaoawbo4x .
my3qvtobl0 [ 0 ] + 3 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , & hfuaoawbo4x .
my3qvtobl0 [ 0 ] , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , & hfuaoawbo4x .
du15nl3tzh , & hfuaoawbo4x . eh5mcnwtiq , & hfuaoawbo4x . ghaons33bj , &
hfuaoawbo4x . ohg1wtlywy , & hfuaoawbo4x . io0rqxfqo3 , & hfuaoawbo4x .
a3jx4vfcgg , & hfuaoawbo4x . bwjkjrhjqv , & hfuaoawbo4x . l5j5dkpmqj , &
hfuaoawbo4x . lkiy512rco , & hfuaoawbo4x . oxyjrp2dlh , & hfuaoawbo4x .
bedykpbnax , & hfuaoawbo4x . pem5nu1bix , & hfuaoawbo4x . cklgc35k0o , &
hfuaoawbo4x . iuompaq1le , & hfuaoawbo4x . nv4mt5uie4 , & hfuaoawbo4x .
gqzvomyv2t , & hfuaoawbo4x . dq2b0uqnue , & hfuaoawbo4x . pvkeaggof5 , &
hfuaoawbo4x . k3livt50xe , & hfuaoawbo4x . er433el12n , & hfuaoawbo4x .
g2lr2421ty , & hfuaoawbo4x . n3pwxd5dop , & hfuaoawbo4x . c1tr4cgbin , &
hfuaoawbo4x . msphgdgaqg , & hfuaoawbo4x . lfb2wgmhm0 , & hfuaoawbo4x .
mmdcsbwnzr , & hfuaoawbo4x . mtbvkoruwr , & hfuaoawbo4x . ezimqt1hie , &
hfuaoawbo4x . o4dydkbclu , & hfuaoawbo4x . jti4uwlk3m , & hfuaoawbo4x .
mtwhnewhid , & hfuaoawbo4x . k0s25tyxdf , & hfuaoawbo4x . lixyng4w4q , &
hfuaoawbo4x . gf4ywczcig , & hfuaoawbo4x . iy4h2wzanu , & hfuaoawbo4x .
a4edbax1z3 , & hfuaoawbo4x . mpste0vxzt , & hfuaoawbo4x . pmfqzyroxp , &
hfuaoawbo4x . ob5dzupeki , & hfuaoawbo4x . iti4c2htzu , & hfuaoawbo4x .
bnbxchsr0d , & hfuaoawbo4x . fw04vwoiew , & hfuaoawbo4x . aibthzgho4 , &
hfuaoawbo4x . i0bwop3aa5 , & hfuaoawbo4x . ihlfku2rqr , & hfuaoawbo4x .
eizptmd2fi , & hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x . pmhguwhdvv , &
hfuaoawbo4x . pmhguwhdvv , & hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x .
h1m1us0vhn , & hfuaoawbo4x . h1m1us0vhn , & hfuaoawbo4x . kslnzluaes , &
hfuaoawbo4x . erv4px4dbo , & hfuaoawbo4x . pkka3h1xrv , & hfuaoawbo4x .
i15qhheq5s , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , ( & hfuaoawbo4x .
my3qvtobl0 [ 0 ] + 2 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3 ) , &
hfuaoawbo4x . my3qvtobl0 [ 0 ] , & hfuaoawbo4x . punl0cw1in , ( & hfuaoawbo4x
. my3qvtobl0 [ 0 ] + 2 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , ( &
hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3 ) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , &
hfuaoawbo4x . its1kwdpoq , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 3 ) , ( &
hfuaoawbo4x . my3qvtobl0 [ 0 ] + 1 ) , ( & hfuaoawbo4x . my3qvtobl0 [ 0 ] + 2
) , & hfuaoawbo4x . my3qvtobl0 [ 0 ] , & hfuaoawbo4x . cvmohjxrdw , &
hfuaoawbo4x . fomozizwka , & hfuaoawbo4x . dy3a2ou5re , & hfuaoawbo4x .
ihuo035dxp , & hfuaoawbo4x . iqwyi5ur24 , & hfuaoawbo4x . epgzqlzua5 , &
hfuaoawbo4x . pcw0pyw2gh , & hfuaoawbo4x . abz0n5qp4d , & hfuaoawbo4x .
bkxmmcqnop , & hfuaoawbo4x . f2wok2vtfw , & bjiazabmpo .
NormalizeVector_maxzero_g24tnzjgpe , & bjiazabmpo . NormalizeVector1_maxzero
, & bjiazabmpo . Constant2_Value_k5ggz5xbhk [ 0 ] , & bjiazabmpo .
RandomSource_MeanVal , & bjiazabmpo . RandomSource_VarianceRTP , & bjiazabmpo
. Constant_Value_ez3azj2hb4 , & bjiazabmpo . Constant_Value_h05qkqds1k , &
bjiazabmpo . Constant1_Value_c5r2ow4pnn [ 0 ] , & bjiazabmpo .
Constant2_Value_ialq4qchdp [ 0 ] , & bjiazabmpo . Constant3_Value [ 0 ] , &
bjiazabmpo . Inertia_Value [ 0 ] , & bjiazabmpo .
Initialangularvelocity_Value [ 0 ] , & bjiazabmpo . Gain_Gain_cpl3z33sd4 , &
bjiazabmpo . Gain1_Gain_b3rhft3ujm , & bjiazabmpo .
DirectionCosineMatrixtoQuaternions_action , & bjiazabmpo .
DirectionCosineMatrixtoQuaternions_tolerance , & bjiazabmpo .
NormalizeVector_maxzero_idjlccn1tr , & bjiazabmpo .
NormalizeVector1_maxzero_pe3bb51lb3 , & bjiazabmpo . NormalizeVector3_maxzero
, & bjiazabmpo . NormalizeVector4_maxzero , & bjiazabmpo .
NormalizeVector_maxzero , & bjiazabmpo . Constant_Value_p1uxhfeofi [ 0 ] , &
bjiazabmpo . Sensororientation_Value [ 0 ] , & bjiazabmpo .
Saturation_UpperSat , & bjiazabmpo . Saturation_LowerSat , & bjiazabmpo .
RandomSource1_MeanVal , & bjiazabmpo . RandomSource1_VarianceRTP , &
bjiazabmpo . NormalizeVector_maxzero_nx4f2adafg , & bjiazabmpo .
Constant_Value_cknsmwduvj [ 0 ] , & bjiazabmpo .
Sensororientation_Value_hlfjdstuhw [ 0 ] , & bjiazabmpo .
Saturation_UpperSat_m5walzmpht , & bjiazabmpo .
Saturation_LowerSat_kiy0a1gdvs , & bjiazabmpo .
RandomSource1_MeanVal_cgugych5h2 , & bjiazabmpo .
RandomSource1_VarianceRTP_pdcijtaj4d , & bjiazabmpo .
NormalizeVector_maxzero_nn5jzwq50r , & bjiazabmpo . Constant_Value_p0tb5tfcpa
[ 0 ] , & bjiazabmpo . Sensororientation_Value_g0fnvenbtt [ 0 ] , &
bjiazabmpo . Saturation_UpperSat_gjlfmfcnga , & bjiazabmpo .
Saturation_LowerSat_iut5tallny , & bjiazabmpo .
RandomSource1_MeanVal_dfojatdwfn , & bjiazabmpo .
RandomSource1_VarianceRTP_cwsuhtikoo , & bjiazabmpo .
NormalizeVector_maxzero_fnmpynnyo1 , & bjiazabmpo . Constant_Value_efe2zzothx
[ 0 ] , & bjiazabmpo . Sensororientation_Value_nngxct2li0 [ 0 ] , &
bjiazabmpo . Saturation1_UpperSat , & bjiazabmpo . Saturation1_LowerSat , &
bjiazabmpo . RandomSource2_MeanVal , & bjiazabmpo . RandomSource2_VarianceRTP
, & bjiazabmpo . NormalizeVector_maxzero_hzguuty3cr , & bjiazabmpo .
Constant_Value_gdj2wqmipb [ 0 ] , & bjiazabmpo .
Sensororientation_Value_nr4vwdw5eq [ 0 ] , & bjiazabmpo .
Saturation_UpperSat_avopyj3crx , & bjiazabmpo .
Saturation_LowerSat_gomyrxdxwm , & bjiazabmpo .
RandomSource1_MeanVal_bb10j12xon , & bjiazabmpo .
RandomSource1_VarianceRTP_p1kv0s2xhi , & bjiazabmpo .
DataStoreMemoryP_InitialValue [ 0 ] , & bjiazabmpo .
DataStoreMemoryx_InitialValue [ 0 ] , & bjiazabmpo . BlockOrdering_Value , &
bjiazabmpo . Enable1_Value , & bjiazabmpo . Q_Value [ 0 ] , & bjiazabmpo .
R1_Value [ 0 ] , & bjiazabmpo . Gain1_Gain_l1jki2u5fa , & bjiazabmpo .
Spacecraftmagneticdipolebodyreferenceframe_Value [ 0 ] , & bjiazabmpo .
a_Value , & bjiazabmpo . e_Value , & bjiazabmpo . u821stMarch_Value , &
bjiazabmpo . Sun_Value , & bjiazabmpo . Integrator_AbsoluteTolerance , &
bjiazabmpo . Integrator1_AbsoluteTolerance , & bjiazabmpo .
Merge_InitialOutput [ 0 ] , & bjiazabmpo . Constant_Value_fjyq3eus5i , &
bjiazabmpo . Constant_Value_cpj53jxfos , & bjiazabmpo .
Constant_Value_ouyamitdob , & bjiazabmpo . Constant_Value_guhbgdhd5y , &
bjiazabmpo . Constant_Value_pwofnawzxn , & bjiazabmpo .
Constant_Value_oqac1ckjba , & bjiazabmpo . Constant_Value_kcn4rmmh00 , &
bjiazabmpo . Constant_Value_dgwb5paphy , & bjiazabmpo .
Constant_Value_lkvqkajgqu , & bjiazabmpo . yBlockOrdering_Y0 , & bjiazabmpo .
Gain_Gain_flpxquj1at , & bjiazabmpo . Constant_Value_ekkpqgqspn , &
bjiazabmpo . Gain_Gain_m4jtdwqsx1 , & bjiazabmpo . Constant_Value_hrofb0v0v5
, & bjiazabmpo . Gain_Gain_cnryscy0x5 , & bjiazabmpo .
Constant_Value_klghvcvqmj , & bjiazabmpo . Gain_Gain_deacltj5ll , &
bjiazabmpo . Gain1_Gain_fe0vmtwk5u , & bjiazabmpo . Gain2_Gain_n2hlwdziix , &
bjiazabmpo . Constant_Value_h3axm4dzs2 , & bjiazabmpo . Gain_Gain_m0ug0pnx04
, & bjiazabmpo . Gain1_Gain_epkzxiktj2 , & bjiazabmpo . Gain2_Gain_gnrwoc1vc2
, & bjiazabmpo . Constant_Value_jsi055lqf3 , & bjiazabmpo .
Gain_Gain_efwlgxe2sc , & bjiazabmpo . Gain1_Gain_ito2bip4nt , & bjiazabmpo .
Gain2_Gain_kojiuv3vcw , & bjiazabmpo . Gain1_Gain_objsqoebrs , & bjiazabmpo .
Gain1_Gain_km22rji0yo , & bjiazabmpo . Constant_Value_c0ie4jx1vv , &
bjiazabmpo . Constant1_Value_lvvzxuwh5z , & bjiazabmpo .
Anglebetween3rdJanto21stMarch180_Value , & bjiazabmpo .
Constant_Value_mgrgcefnc2 , & bjiazabmpo . Constant5_Value , & bjiazabmpo .
Ecliptic_Value , & bjiazabmpo . Gain_Gain_nrquqjsjbh , & bjiazabmpo .
Gain1_Gain_csudgssrcg , & bjiazabmpo . Constant3_Value_aiagav1bu5 , &
bjiazabmpo . Constant4_Value , & bjiazabmpo . Gain_Gain_ij5ephcub4 , &
bjiazabmpo . Gain1_Gain_fos5u53xa3 , & bjiazabmpo . Gain_Gain_fosanw5ymw , &
bjiazabmpo . Constant_Value_czyi20hi44 , & bjiazabmpo . Gain_Gain , &
bjiazabmpo . Gain1_Gain , & bjiazabmpo . Constant_Value_mvbgvlatz0 , &
bjiazabmpo . Gain_Gain_kw4hyen3ua , & bjiazabmpo . Gain1_Gain_ckspynbpye , &
bjiazabmpo . Gain2_Gain_dah34tkuud , & bjiazabmpo . Constant_Value_dz2dfvrlrq
, & bjiazabmpo . Gain_Gain_j0m5yxxclv , & bjiazabmpo . Gain1_Gain_gvb2uliucv
, & bjiazabmpo . Gain2_Gain_opntamnvay , & bjiazabmpo .
Constant_Value_kcjtlp3thi , & bjiazabmpo . Gain_Gain_mxlhrjirx4 , &
bjiazabmpo . Gain1_Gain_buk0u32kdc , & bjiazabmpo . Gain2_Gain_arymbwpdh2 , &
bjiazabmpo . Constant_Value_kst2th0l1z , & bjiazabmpo . Gain_Gain_cr4zczeez0
, & bjiazabmpo . Gain1_Gain_g12m14aft0 , & bjiazabmpo . Gain2_Gain_enxakegu4s
, & bjiazabmpo . Constant_Value_igmvdrtaty , & bjiazabmpo .
Gain_Gain_lw5hirdrrr , & bjiazabmpo . Gain1_Gain_amkbhcbkvw , & bjiazabmpo .
Gain2_Gain_bttjb1ulla , & bjiazabmpo . Constant_Value_m4goabuepu , &
bjiazabmpo . Gain_Gain_pmdq3xatwv , & bjiazabmpo . Gain1_Gain_bgbnv4z5nx , &
bjiazabmpo . Gain2_Gain_cdbsbiii2b , & bjiazabmpo . Constant_Value_ig5dydpz4k
, & bjiazabmpo . Gain_Gain_mppbga10gj , & bjiazabmpo . Gain1_Gain_k32c10wlrj
, & bjiazabmpo . Gain2_Gain_h0pnpoqeyo , & bjiazabmpo .
Constant_Value_avj1x5z4q1 , & bjiazabmpo . Gain_Gain_acnf3wong0 , &
bjiazabmpo . Gain1_Gain_bdr4kcs3su , & bjiazabmpo . Gain2_Gain_jvmb0iaxtl , &
bjiazabmpo . Constant_Value_cnokz3qvra , & bjiazabmpo . Gain_Gain_gmuxgavjeg
, & bjiazabmpo . Gain1_Gain_ano5s2udpx , & bjiazabmpo . Gain2_Gain_flzsqlaiqp
, & bjiazabmpo . Constant_Value_cnhwtv0an4 , & bjiazabmpo .
Gain_Gain_fe12gj1vly , & bjiazabmpo . Gain1_Gain_eknp4eyqxu , & bjiazabmpo .
Gain2_Gain_ouwgam1qip , & bjiazabmpo . Constant_Value_ay421yp5th , &
bjiazabmpo . Gain_Gain_gff5un3jdu , & bjiazabmpo . Gain1_Gain_awqbponr2k , &
bjiazabmpo . Gain2_Gain_f4ewkcswdw , & bjiazabmpo . Constant_Value_h3nq0lzcht
, & bjiazabmpo . Gain_Gain_la2cdkige1 , & bjiazabmpo . Gain1_Gain_pev0unhzff
, & bjiazabmpo . Gain2_Gain_hw1isw0qik , & bjiazabmpo .
Constant_Value_jepzgetsok , & bjiazabmpo . Gain_Gain_evijkwb22b , &
bjiazabmpo . Gain1_Gain_bn3u42duxc , & bjiazabmpo . Gain2_Gain_e4wui4ivqw , &
bjiazabmpo . Constant_Value_bpjrbxcgtv , & bjiazabmpo . Gain_Gain_hp0a4smryj
, & bjiazabmpo . Gain1_Gain_lcdb4ouxht , & bjiazabmpo . Gain2_Gain_fkes0fd4av
, & bjiazabmpo . Constant_Value_bnhvh0zo2d , & bjiazabmpo .
Gain_Gain_ik5o0z2umm , & bjiazabmpo . Gain1_Gain_gut1ubdvx5 , & bjiazabmpo .
Gain2_Gain_ojpp20vo3d , & bjiazabmpo . Constant_Value , & bjiazabmpo .
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
Constant_Value_bpdqgjnrbi , & bjiazabmpo . Gain_Gain_cjicctxqb2 , &
bjiazabmpo . Gain1_Gain_nieh11pzcd , & bjiazabmpo . Gain2_Gain_cko11epp5n , &
bjiazabmpo . Constant_Value_lxx0buxvfk , & bjiazabmpo . Gain_Gain_cf5hb10y5x
, & bjiazabmpo . Gain1_Gain_gwlrw1w2b3 , & bjiazabmpo . Gain2_Gain_n32pjfxnui
, & bjiazabmpo . Constant_Value_a2jieicat5 , & bjiazabmpo .
Gain_Gain_efnax0y1dx , & bjiazabmpo . Gain1_Gain_ddeccjfmea , & bjiazabmpo .
Gain2_Gain_g2ebct4dqc , & bjiazabmpo . Constant_Value_mrthaqohbp , &
bjiazabmpo . Gain_Gain_msviodsdfg , & bjiazabmpo . Gain1_Gain_fdnpx3hnab , &
bjiazabmpo . Gain2_Gain_jrylcyky0d , & bjiazabmpo . Constant_Value_gob0mxnrc1
, & bjiazabmpo . Gain_Gain_j00moojqwi , & bjiazabmpo . Gain1_Gain_epavf05nx2
, & bjiazabmpo . Gain2_Gain_jieczjcfxj , & bjiazabmpo .
Constant_Value_l4ftm45smy , & bjiazabmpo . Gain_Gain_lxppc43sr3 , &
bjiazabmpo . Gain1_Gain_pr0mjxkeko , & bjiazabmpo . Gain2_Gain_oh11qzcnsq , &
bjiazabmpo . Constant1_Value_c4wnv34dlm , & bjiazabmpo .
Constant2_Value_i3cnjpylpr [ 0 ] , & bjiazabmpo . Constant_Value_m2h11to3lk ,
& bjiazabmpo . Constant1_Value , & bjiazabmpo . Constant2_Value [ 0 ] , &
bjiazabmpo . Constant_Value_glskcdmgi0 , & bjiazabmpo .
Constant1_Value_ius3i4otxm , & bjiazabmpo . Constant2_Value_j5v1xvugrn [ 0 ]
, & bjiazabmpo . Constant_Value_p5m1vauvdr , & bjiazabmpo .
Constant1_Value_l2qqn3e4fv , & bjiazabmpo . Constant1_Value_ftvtqjp1us , &
bjiazabmpo . Bias1_Bias [ 0 ] , & bjiazabmpo . Bias_Bias , & o1yff13vlj3 .
cxzg0u0ymm [ 0 ] , & o1yff13vlj3 . osavuy4txz [ 0 ] , & o1yff13vlj3 .
ceu1xu3gg2 [ 0 ] , & o1yff13vlj3 . ozozulc01j [ 0 ] , & o1yff13vlj3 .
exrjjbh4to , & rtP_Spacecraft , & rtP_Earth , & rtP_Const , } ; static
int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 , 0 } , { "struct" , "SpacecraftDT" , 6 , 1 , sizeof ( SpacecraftDT ) ,
SS_STRUCT , 0 , 0 , 0 } , { "struct" , "EarthDT" , 7 , 7 , sizeof ( EarthDT )
, SS_STRUCT , 0 , 0 , 0 } , { "struct" , "ConstDT" , 3 , 14 , sizeof (
ConstDT ) , SS_STRUCT , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , { "baricentricInertia" , rt_offsetof ( SpacecraftDT ,
baricentricInertia ) , 0 , 2 , 0 } , { "geometricCenter" , rt_offsetof (
SpacecraftDT , geometricCenter ) , 0 , 2 , 0 } , { "surfaces_area" ,
rt_offsetof ( SpacecraftDT , surfaces_area ) , 0 , 12 , 0 } , {
"surfaces_position" , rt_offsetof ( SpacecraftDT , surfaces_position ) , 0 ,
13 , 0 } , { "surfaces_normalToSurface" , rt_offsetof ( SpacecraftDT ,
surfaces_normalToSurface ) , 0 , 13 , 0 } , { "surfaces_Cd" , rt_offsetof (
SpacecraftDT , surfaces_Cd ) , 0 , 12 , 0 } , { "mu" , rt_offsetof ( EarthDT
, mu ) , 0 , 14 , 0 } , { "equatorialRadius" , rt_offsetof ( EarthDT ,
equatorialRadius ) , 0 , 14 , 0 } , { "J2" , rt_offsetof ( EarthDT , J2 ) , 0
, 14 , 0 } , { "siderealDay" , rt_offsetof ( EarthDT , siderealDay ) , 0 , 14
, 0 } , { "atm_referenceHeight" , rt_offsetof ( EarthDT , atm_referenceHeight
) , 0 , 15 , 0 } , { "atm_nominalDensity" , rt_offsetof ( EarthDT ,
atm_nominalDensity ) , 0 , 15 , 0 } , { "atm_scaleHeight" , rt_offsetof (
EarthDT , atm_scaleHeight ) , 0 , 15 , 0 } , { "c" , rt_offsetof ( ConstDT ,
c ) , 0 , 14 , 0 } , { "AU_1" , rt_offsetof ( ConstDT , AU_1 ) , 0 , 14 , 0 }
, { "Fe" , rt_offsetof ( ConstDT , Fe ) , 0 , 14 , 0 } } ; static const
rtwCAPI_DimensionMap rtDimensionMap [ ] = { { rtwCAPI_MATRIX_COL_MAJOR , 0 ,
2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 2 , 2
, 0 } , { rtwCAPI_SCALAR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , {
rtwCAPI_VECTOR , 18 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 20 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 22 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 4 , 2
, 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 24 , 2 , 0 } } ; static const uint_T
rtDimensionArray [ ] = { 2 , 1 , 3 , 1 , 1 , 1 , 4 , 1 , 3 , 3 , 7 , 1 , 1 ,
3 , 1 , 4 , 7 , 7 , 1 , 2 , 1 , 10 , 3 , 10 , 1 , 6 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 0.03 , 0.01 , 0.02 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , 4 ,
0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 2 , 0 } , { ( NULL ) , ( NULL ) , 5 , 0 } , { (
const void * ) & rtcapiStoredFloats [ 3 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , 3 , 0 } } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 179 , rtRootInputs , 0 , rtRootOutputs , 0 }
, { rtBlockParameters , 256 , rtModelParameters , 3 } , { rtBlockStates , 5 }
, { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap ,
rtSampleTimeMap , rtDimensionArray } , "float" , { 2669273227U , 1613633566U
, 2556690104U , 2016378170U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * stateEstimatorComparison_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
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
