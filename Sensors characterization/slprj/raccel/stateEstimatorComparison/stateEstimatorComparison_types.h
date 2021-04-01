#ifndef RTW_HEADER_stateEstimatorComparison_types_h_
#define RTW_HEADER_stateEstimatorComparison_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_EarthDT_
#define DEFINED_TYPEDEF_FOR_EarthDT_
typedef struct { real_T mu ; real_T equatorialRadius ; real_T J2 ; real_T
siderealDay ; real_T atm_referenceHeight [ 6 ] ; real_T atm_nominalDensity [
6 ] ; real_T atm_scaleHeight [ 6 ] ; } EarthDT ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SpacecraftDT_
#define DEFINED_TYPEDEF_FOR_SpacecraftDT_
typedef struct { real_T baricentricInertia [ 3 ] ; real_T geometricCenter [ 3
] ; real_T surfaces_area [ 10 ] ; real_T surfaces_position [ 30 ] ; real_T
surfaces_normalToSurface [ 30 ] ; real_T surfaces_Cd [ 10 ] ; } SpacecraftDT
;
#endif
#ifndef DEFINED_TYPEDEF_FOR_ConstDT_
#define DEFINED_TYPEDEF_FOR_ConstDT_
typedef struct { real_T c ; real_T AU_1 ; real_T Fe ; } ConstDT ;
#endif
typedef struct bjiazabmpoy_ bjiazabmpoy ;
#endif
