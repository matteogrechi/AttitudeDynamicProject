#ifndef RTW_HEADER_RandSrc_GZ_D_h_
#define RTW_HEADER_RandSrc_GZ_D_h_
#include "rtwtypes.h"
#include "multiword_types.h"

extern void RandSrc_GZ_D(real_T y[], const real_T mean[], int32_T meanLen, const
  real_T xstd[], int32_T xstdLen, uint32_T state[], int32_T nChans, int32_T
  nSamps);

#endif
