#ifndef RTW_HEADER_UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_WKjIFSsL_h_
#define RTW_HEADER_UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_WKjIFSsL_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void
  UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_WKjIFSsL(const
  real_T Rs[9], const real_T X1[10], const real_T S[100], real_T Ymean[3],
  real_T Pxy[30], real_T Sy[9]);

#endif
