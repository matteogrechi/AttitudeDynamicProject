#ifndef RTW_HEADER_xgemv_KGUrmtZV_h_
#define RTW_HEADER_xgemv_KGUrmtZV_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_KGUrmtZV(int32_T m, int32_T n, const real_T A[18], int32_T ia0,
  const real_T x[18], int32_T ix0, real_T y[2]);

#endif
