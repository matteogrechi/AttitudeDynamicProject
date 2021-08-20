#ifndef RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_C8o6TH1A_h_
#define RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_C8o6TH1A_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UKFCorrector_correctStateAndSqrtCovariance_C8o6TH1A(real_T x[7],
  real_T S[49], const real_T residue[3], const real_T Pxy[21], const real_T Sy[9]);

#endif
