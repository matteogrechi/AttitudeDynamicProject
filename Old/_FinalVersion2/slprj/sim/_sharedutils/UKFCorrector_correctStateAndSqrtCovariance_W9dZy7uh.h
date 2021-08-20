#ifndef RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh_h_
#define RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh(real_T x[10],
  real_T S[100], const real_T residue[2], const real_T Pxy[20], const real_T Sy
  [4]);

#endif
