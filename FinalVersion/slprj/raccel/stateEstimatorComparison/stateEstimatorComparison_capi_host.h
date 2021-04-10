#ifndef RTW_HEADER_stateEstimatorComparison_cap_host_h_
#define RTW_HEADER_stateEstimatorComparison_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "MagneticFieldInPolarCoords_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 1 ] ; MagneticFieldInPolarCoords_host_DataMapInfo_T child0 ; }
stateEstimatorComparison_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void stateEstimatorComparison_host_InitializeDataMapInfo (
stateEstimatorComparison_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
