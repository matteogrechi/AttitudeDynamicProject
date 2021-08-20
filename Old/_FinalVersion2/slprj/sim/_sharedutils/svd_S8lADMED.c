#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "mwmathutil.h"
#include "svd_fNvCx1Jd.h"
#include "svd_S8lADMED.h"

void svd_S8lADMED(const real_T A[100], real_T U[100], real_T S[100], real_T V
                  [100])
{
  real_T U1[100];
  real_T V1[100];
  real_T tmp[100];
  real_T s[10];
  real_T A_p;
  int32_T i;
  boolean_T p;
  p = true;
  for (i = 0; i < 100; i++) {
    A_p = A[i];
    if (p && ((!muDoubleScalarIsInf(A_p)) && (!muDoubleScalarIsNaN(A_p)))) {
    } else {
      p = false;
    }
  }

  if (p) {
    svd_fNvCx1Jd(A, U, s, V);
  } else {
    memset(&tmp[0], 0, 100U * sizeof(real_T));
    svd_fNvCx1Jd(tmp, U1, s, V1);
    for (i = 0; i < 100; i++) {
      U[i] = (rtNaN);
    }

    for (i = 0; i < 10; i++) {
      s[i] = (rtNaN);
    }

    for (i = 0; i < 100; i++) {
      V[i] = (rtNaN);
    }
  }

  memset(&S[0], 0, 100U * sizeof(real_T));
  for (i = 0; i < 10; i++) {
    S[i + 10 * i] = s[i];
  }
}
