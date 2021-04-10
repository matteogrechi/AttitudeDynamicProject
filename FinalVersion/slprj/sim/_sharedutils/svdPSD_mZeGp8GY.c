#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "mwmathutil.h"
#include "svd_PDxVbKTU.h"
#include "svdPSD_mZeGp8GY.h"

void svdPSD_mZeGp8GY(const real_T A[49], real_T R[49])
{
  real_T Ss[49];
  real_T V[49];
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
    svd_PDxVbKTU(A, Ss, s, V);
  } else {
    for (i = 0; i < 7; i++) {
      s[i] = (rtNaN);
    }

    for (i = 0; i < 49; i++) {
      V[i] = (rtNaN);
    }
  }

  memset(&Ss[0], 0, 49U * sizeof(real_T));
  for (i = 0; i < 7; i++) {
    Ss[i + 7 * i] = s[i];
  }

  for (i = 0; i < 49; i++) {
    Ss[i] = muDoubleScalarSqrt(Ss[i]);
  }

  for (i = 0; i < 7; i++) {
    for (i_p = 0; i_p < 7; i_p++) {
      R[i_p + 7 * i] = 0.0;
      for (i_e = 0; i_e < 7; i_e++) {
        R[i_p + 7 * i] += V[7 * i_e + i_p] * Ss[7 * i + i_e];
      }
    }
  }
}
