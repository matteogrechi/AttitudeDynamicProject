#ifndef RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0_h_
#define RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0(real_T x[7],
  real_T S[49], const real_T residue[2], const real_T Pxy[14], const real_T Sy[4]);

#endif
