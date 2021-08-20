#ifndef RTW_HEADER_UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_qvndnnH6_h_
#define RTW_HEADER_UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_qvndnnH6_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void
  UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_qvndnnH6(const
  real_T Rs[49], const real_T X1[7], const real_T S[49], real_T alpha, real_T
  beta, real_T kappa, const real_T varargin_1[14], real_T Ymean[7], real_T Pxy
  [49], real_T Sy[49]);

#endif
