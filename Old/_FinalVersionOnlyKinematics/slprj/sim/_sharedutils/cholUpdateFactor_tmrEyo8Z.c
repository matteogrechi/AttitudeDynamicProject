#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_1N5JcJxR.h"
#include "rotate_EHa2bfuE.h"
#include "svd_tCwBSRoq.h"
#include "cholUpdateFactor_tmrEyo8Z.h"

void cholUpdateFactor_tmrEyo8Z(real_T S[36], const real_T U[6])
{
  __m128d tmp;
  real_T A[36];
  real_T Ss[36];
  real_T U_p[36];
  real_T c[6];
  real_T s[6];
  real_T x[6];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T d_k;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  int8_T p;
  boolean_T errorCondition;
  boolean_T exitg2;
  for (i = 0; i < 6; i++) {
    for (iAcol = 0; iAcol <= 4 - i; iAcol++) {
      S[((i + iAcol) + 6 * i) + 1] = 0.0;
    }
  }

  p = 0;
  errorCondition = false;
  for (i = 0; i < 6; i++) {
    if (errorCondition || (S[6 * i + i] == 0.0)) {
      errorCondition = true;
    }
  }

  if (errorCondition) {
    p = 2;
  } else {
    for (i = 0; i < 6; i++) {
      x[i] = U[i];
    }

    for (i = 0; i < 6; i++) {
      iAcol = 6 * i;
      temp = x[i];
      for (d_k = 0; d_k < i; d_k++) {
        temp -= S[d_k + iAcol] * x[d_k];
      }

      x[i] = temp / S[i + iAcol];
    }

    temp = 0.0;
    scale = 3.3121686421112381E-170;
    for (i = 0; i < 6; i++) {
      absxk = muDoubleScalarAbs(x[i]);
      if (absxk > scale) {
        t = scale / absxk;
        temp = temp * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        temp += t * t;
      }
    }

    temp = scale * muDoubleScalarSqrt(temp);
    if (temp >= 1.0) {
      p = 1;
    } else {
      temp = muDoubleScalarSqrt(1.0 - temp * temp);
      for (i = 5; i >= 0; i--) {
        rotate_EHa2bfuE(temp, x[i], &c[i], &s[i], &temp);
        x[i] = 0.0;
      }

      for (i = 0; i < 6; i++) {
        for (iAcol = i; iAcol + 1 > 0; iAcol--) {
          temp = S[6 * i + iAcol] * s[iAcol];
          S[iAcol + 6 * i] = S[6 * i + iAcol] * c[iAcol] - s[iAcol] * x[i];
          x[i] = c[iAcol] * x[i] + temp;
        }
      }
    }
  }

  if (p != 0) {
    for (i = 0; i < 6; i++) {
      for (iAcol = 0; iAcol < 6; iAcol++) {
        Ss[i + 6 * iAcol] = 0.0;
        for (d_k = 0; d_k < 6; d_k++) {
          Ss[i + 6 * iAcol] += S[6 * i + d_k] * S[6 * iAcol + d_k];
        }

        U_p[iAcol + 6 * i] = U[iAcol] * U[i];
      }
    }

    errorCondition = true;
    for (i = 0; i < 36; i++) {
      temp = Ss[i] - U_p[i];
      if (errorCondition && ((!muDoubleScalarIsInf(temp)) &&
                             (!muDoubleScalarIsNaN(temp)))) {
      } else {
        errorCondition = false;
      }

      A[i] = temp;
    }

    if (errorCondition) {
      svd_tCwBSRoq(A, Ss, s, U_p);
    } else {
      memset(&U_p[0], 0, 36U * sizeof(real_T));
      svd_tCwBSRoq(U_p, Ss, x, A);
      for (i = 0; i < 6; i++) {
        s[i] = (rtNaN);
      }

      for (i = 0; i < 36; i++) {
        U_p[i] = (rtNaN);
      }
    }

    memset(&Ss[0], 0, 36U * sizeof(real_T));
    for (i = 0; i < 6; i++) {
      Ss[i + 6 * i] = s[i];
    }

    for (i = 0; i <= 34; i += 2) {
      tmp = _mm_loadu_pd(&Ss[i]);
      _mm_storeu_pd(&Ss[i], _mm_sqrt_pd(tmp));
    }

    for (i = 0; i < 6; i++) {
      for (iAcol = 0; iAcol < 6; iAcol++) {
        S[i + 6 * iAcol] = 0.0;
      }
    }

    for (i = 0; i < 6; i++) {
      for (iAcol = 0; iAcol < 6; iAcol++) {
        for (d_k = 0; d_k < 6; d_k++) {
          S[i + 6 * iAcol] += U_p[6 * d_k + iAcol] * Ss[6 * i + d_k];
        }
      }
    }

    errorCondition = true;
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i < 6)) {
      iAcol = i + 1;
      do {
        exitg1 = 0;
        if (iAcol + 1 < 7) {
          if (!(S[6 * i + iAcol] == 0.0)) {
            errorCondition = false;
            exitg1 = 1;
          } else {
            iAcol++;
          }
        } else {
          i++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    if (!errorCondition) {
      memcpy(&Ss[0], &S[0], 36U * sizeof(real_T));
      qr_1N5JcJxR(Ss, A, S);
    }
  }

  for (i = 0; i < 6; i++) {
    for (iAcol = 0; iAcol < 6; iAcol++) {
      Ss[iAcol + 6 * i] = S[6 * iAcol + i];
    }
  }

  memcpy(&S[0], &Ss[0], 36U * sizeof(real_T));
}
