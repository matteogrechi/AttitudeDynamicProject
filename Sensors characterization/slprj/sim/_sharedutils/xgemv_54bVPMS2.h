#ifndef RTW_HEADER_xgemv_54bVPMS2_h_
#define RTW_HEADER_xgemv_54bVPMS2_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xgemv_54bVPMS2(int32_T m, int32_T n, const real_T A[4], int32_T ia0,
  const real_T x[4], int32_T ix0, real_T y[2]);

#endif
