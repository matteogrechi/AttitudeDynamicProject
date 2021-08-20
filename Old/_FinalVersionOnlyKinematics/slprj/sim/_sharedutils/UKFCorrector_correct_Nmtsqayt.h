#ifndef RTW_HEADER_UKFCorrector_correct_Nmtsqayt_h_
#define RTW_HEADER_UKFCorrector_correct_Nmtsqayt_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UKFCorrector_correct_Nmtsqayt(const real_T z[6], const real_T Rs[36],
  real_T X1[4], real_T S[16], const real_T varargin_1[13]);

#endif
