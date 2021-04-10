#ifndef RTW_HEADER_UTMeanCovSqrt_Nsd9dLEK_h_
#define RTW_HEADER_UTMeanCovSqrt_Nsd9dLEK_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UTMeanCovSqrt_Nsd9dLEK(const real_T meanWeights[2], real_T
  covWeights[2], real_T OOM, real_T Y1[2], real_T Y2[28], const real_T X1[7],
  real_T X2[98], real_T Ymean[2], real_T Sy[4], real_T Pxy[14]);

#endif
