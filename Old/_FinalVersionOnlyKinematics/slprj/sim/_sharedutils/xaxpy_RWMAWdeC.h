#ifndef RTW_HEADER_xaxpy_RWMAWdeC_h_
#define RTW_HEADER_xaxpy_RWMAWdeC_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void xaxpy_RWMAWdeC(int32_T n, real_T a, const real_T x[3], int32_T ix0,
  real_T y[9], int32_T iy0);

#endif
