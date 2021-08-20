#ifndef RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO_h_
#define RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO(real_T x[7],
  real_T S[49], const real_T residue[7], const real_T Pxy[49], const real_T Sy
  [49]);

#endif
