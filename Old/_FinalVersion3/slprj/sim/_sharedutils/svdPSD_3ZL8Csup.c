#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "svd_BOZ2mqgd.h"
#include "svdPSD_3ZL8Csup.h"

void svdPSD_3ZL8Csup(const real_T A[49], real_T R[49])
{
  __m128d tmp_p;
  real_T Ss[49];
  real_T V1[49];
  real_T tmp[49];
  real_T s[7];
  real_T A_p;
  int32_T i;
  int32_T i_e;
  int32_T i_p;
  boolean_T p;
  p = true;
  for (i = 0; i < 49; i++) {
    A_p = A[i];
    if (p && ((!muDoubleScalarIsInf(A_p)) && (!muDoubleScalarIsNaN(A_p)))) {
    } else {
      p = false;
    }
  }

  if (p) {
    svd_BOZ2mqgd(A, Ss, s, V1);
  } else {
    memset(&tmp[0], 0, 49U * sizeof(real_T));
    svd_BOZ2mqgd(tmp, Ss, s, V1);
    for (i = 0; i < 7; i++) {
      s[i] = (rtNaN);
    }

    for (i = 0; i < 49; i++) {
      V1[i] = (rtNaN);
    }
  }

  memset(&Ss[0], 0, 49U * sizeof(real_T));
  for (i = 0; i < 7; i++) {
    Ss[i + 7 * i] = s[i];
  }

  for (i = 0; i <= 46; i += 2) {
    tmp_p = _mm_loadu_pd(&Ss[i]);
    _mm_storeu_pd(&Ss[i], _mm_sqrt_pd(tmp_p));
  }

  for (i = 48; i < 49; i++) {
    Ss[i] = muDoubleScalarSqrt(Ss[i]);
  }

  for (i = 0; i < 7; i++) {
    for (i_p = 0; i_p < 7; i_p++) {
      R[i_p + 7 * i] = 0.0;
      for (i_e = 0; i_e < 7; i_e++) {
        R[i_p + 7 * i] += V1[7 * i_e + i_p] * Ss[7 * i + i_e];
      }
    }
  }
}
