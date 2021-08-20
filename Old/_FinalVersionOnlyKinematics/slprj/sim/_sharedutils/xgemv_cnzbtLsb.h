#ifndef RTW_HEADER_xgemv_cnzbtLsb_h_
#define RTW_HEADER_xgemv_cnzbtLsb_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_cnzbtLsb(int32_T m, int32_T n, const real_T A[98], int32_T ia0,
  const real_T x[98], int32_T ix0, real_T y[7]);

#endif
