#ifndef RTW_HEADER_UTMeanCovSqrt_tqdDaaPa_h_
#define RTW_HEADER_UTMeanCovSqrt_tqdDaaPa_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UTMeanCovSqrt_tqdDaaPa(real_T Y1[4], real_T Y2[32], const real_T X1
  [4], real_T X2[32], real_T Ymean[4], real_T Sy[16], real_T Pxy[16]);

#endif
