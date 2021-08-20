#ifndef RTW_HEADER_main_cap_host_h_
#define RTW_HEADER_main_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
#include "MagneticFieldInPolarCoords_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 1 ] ; MagneticFieldInPolarCoords_host_DataMapInfo_T child0 ; }
main_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void main_host_InitializeDataMapInfo ( main_host_DataMapInfo_T * dataMap ,
const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
