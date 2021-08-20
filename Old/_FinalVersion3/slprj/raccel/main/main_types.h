#ifndef RTW_HEADER_main_types_h_
#define RTW_HEADER_main_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_SensorsDT_
#define DEFINED_TYPEDEF_FOR_SensorsDT_
typedef struct { real_T sunSensorSamplingFreq ; } SensorsDT ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SpacecraftDT_
#define DEFINED_TYPEDEF_FOR_SpacecraftDT_
typedef struct { real_T initialAttitude [ 4 ] ; real_T initialAngularSpeed [
3 ] ; real_T baricentricInertia [ 3 ] ; real_T geometricCenter [ 3 ] ; real_T
surfaces_area [ 10 ] ; real_T surfaces_position [ 30 ] ; real_T
surfaces_normalToSurface [ 30 ] ; real_T surfaces_Cd [ 10 ] ; } SpacecraftDT
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_EarthDT_
#define DEFINED_TYPEDEF_FOR_EarthDT_
typedef struct { real_T mu ; real_T equatorialRadius ; real_T J2 ; real_T
siderealDay ; real_T atm_referenceHeight [ 6 ] ; real_T atm_nominalDensity [
6 ] ; real_T atm_scaleHeight [ 6 ] ; } EarthDT ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ConstDT_
#define DEFINED_TYPEDEF_FOR_ConstDT_
typedef struct { real_T c ; real_T AU_1 ; real_T Fe ; } ConstDT ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_Ys0g6NvmxKEOD5COiDA9mC_
#define DEFINED_TYPEDEF_FOR_struct_Ys0g6NvmxKEOD5COiDA9mC_
typedef struct { real_T accumMode ; real_T accumWordLength ; real_T
accumFracLength ; real_T outputMode ; real_T outputWordLength ; real_T
outputFracLength ; real_T roundingMode ; real_T overflowMode ; }
struct_Ys0g6NvmxKEOD5COiDA9mC ;
#endif
#ifndef struct_tag_BlgwLpgj2bjudmbmVKWwDE
#define struct_tag_BlgwLpgj2bjudmbmVKWwDE
struct tag_BlgwLpgj2bjudmbmVKWwDE { uint32_T f1 [ 8 ] ; } ;
#endif
#ifndef typedef_jf5twosl2b
#define typedef_jf5twosl2b
typedef struct tag_BlgwLpgj2bjudmbmVKWwDE jf5twosl2b ;
#endif
#ifndef struct_tag_lq0XKolTpZRbT3WdRpytNB
#define struct_tag_lq0XKolTpZRbT3WdRpytNB
struct tag_lq0XKolTpZRbT3WdRpytNB { int32_T isInitialized ; jf5twosl2b
inputVarSize ; } ;
#endif
#ifndef typedef_mbun5ikysk
#define typedef_mbun5ikysk
typedef struct tag_lq0XKolTpZRbT3WdRpytNB mbun5ikysk ;
#endif
typedef struct hbv5azo3swd_ hbv5azo3swd ;
#endif
