#ifndef RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_D74IKMW2_h_
#define RTW_HEADER_UKFCorrector_correctStateAndSqrtCovariance_D74IKMW2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UKFCorrector_correctStateAndSqrtCovariance_D74IKMW2(real_T x[10],
  real_T S[100], const real_T residue[3], const real_T Pxy[30], const real_T Sy
  [9]);

#endif
