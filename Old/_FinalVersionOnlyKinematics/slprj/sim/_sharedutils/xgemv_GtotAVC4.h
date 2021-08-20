#ifndef RTW_HEADER_xgemv_GtotAVC4_h_
#define RTW_HEADER_xgemv_GtotAVC4_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_GtotAVC4(int32_T m, int32_T n, const real_T A[36], int32_T ia0,
  const real_T x[36], int32_T ix0, real_T y[6]);

#endif
