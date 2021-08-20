#ifndef RTW_HEADER_UKFCorrector_correct_jE8bEoap_h_
#define RTW_HEADER_UKFCorrector_correct_jE8bEoap_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void UKFCorrector_correct_jE8bEoap(const real_T z[2], const real_T Rs[4],
  real_T X1[10], real_T S[100]);

#endif
