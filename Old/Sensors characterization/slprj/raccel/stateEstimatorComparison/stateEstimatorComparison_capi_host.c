#include "stateEstimatorComparison_capi_host.h"
static stateEstimatorComparison_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        stateEstimatorComparison_host_InitializeDataMapInfo(&(root), "stateEstimatorComparison");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
