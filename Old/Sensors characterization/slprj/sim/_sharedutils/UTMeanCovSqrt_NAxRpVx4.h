#ifndef RTW_HEADER_UTMeanCovSqrt_NAxRpVx4_h_
#define RTW_HEADER_UTMeanCovSqrt_NAxRpVx4_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UTMeanCovSqrt_NAxRpVx4(const real_T meanWeights[2], real_T
  covWeights[2], real_T OOM, real_T Y1[7], real_T Y2[98], const real_T X1[7],
  real_T X2[98], real_T Ymean[7], real_T Sy[49], real_T Pxy[49]);

#endif
