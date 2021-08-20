#ifndef RTW_HEADER_MagneticFieldInPolarCoords_h_
#define RTW_HEADER_MagneticFieldInPolarCoords_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef MagneticFieldInPolarCoords_COMMON_INCLUDES_
#define MagneticFieldInPolarCoords_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "MagneticFieldInPolarCoords_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
struct oevxbl42bkl_ { real_T P_0 ; real_T P_1 [ 20 ] ; real_T P_2 [ 20 ] ; }
; struct h2lg3bhhwp { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { kp2qugkbnc rtm ; } mcbsajulppp ; extern void dpqzzutcg1 (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , kp2qugkbnc
* const koq2b4qrmd , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_MagneticFieldInPolarCoords_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_MagneticFieldInPolarCoords_GetDWork ( const mcbsajulppp * mdlrefDW ) ;
extern void mr_MagneticFieldInPolarCoords_SetDWork ( mcbsajulppp * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_MagneticFieldInPolarCoords_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_MagneticFieldInPolarCoords_GetSimStateDisallowedBlocks (
) ; extern const rtwCAPI_ModelMappingStaticInfo *
MagneticFieldInPolarCoords_GetCAPIStaticMap ( void ) ; extern void
MagneticFieldInPolarCoords ( const real_T * peq5wcq255 , const real_T *
crwerj13u0 , const real_T * gbzf5nc1fx , const real_T * citdcutmxr , real_T
fwwpi5cfp0 [ 3 ] ) ; extern void MagneticFieldInPolarCoordsTID1 ( void ) ;
extern void gcif3exjdu ( kp2qugkbnc * const koq2b4qrmd ) ;
#endif
