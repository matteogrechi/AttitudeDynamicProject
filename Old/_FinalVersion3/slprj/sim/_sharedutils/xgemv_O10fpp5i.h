#ifndef RTW_HEADER_xgemv_O10fpp5i_h_
#define RTW_HEADER_xgemv_O10fpp5i_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_O10fpp5i(int32_T m, int32_T n, const real_T A[32], int32_T ia0,
  const real_T x[32], int32_T ix0, real_T y[4]);

#endif
