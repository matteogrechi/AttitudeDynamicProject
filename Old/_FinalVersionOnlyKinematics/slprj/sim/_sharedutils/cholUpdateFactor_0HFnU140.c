#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_BmrLq1sa.h"
#include "svdPSD_3ZL8Csup.h"
#include "cholUpdateFactor_0HFnU140.h"

void cholUpdateFactor_0HFnU140(real_T S[49], const real_T U[7])
{
  __m128d tmp;
  __m128d tmp_p;
  real_T S_e[49];
  real_T S_p[49];
  real_T U_p[49];
  real_T c[7];
  real_T s[7];
  real_T x[7];
  real_T absxk;
  real_T rho;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T b_k;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  int8_T p;
  boolean_T errorCondition;
  boolean_T exitg2;
  for (i = 0; i < 7; i++) {
    for (iAcol = 0; iAcol <= 5 - i; iAcol++) {
      S[((i + iAcol) + 7 * i) + 1] = 0.0;
    }
  }

  p = 0;
  errorCondition = false;
  for (i = 0; i < 7; i++) {
    if (errorCondition || (S[7 * i + i] == 0.0)) {
      errorCondition = true;
    }
  }

  if (errorCondition) {
    p = 2;
  } else {
    for (i = 0; i < 7; i++) {
      x[i] = U[i];
    }

    for (i = 0; i < 7; i++) {
      iAcol = 7 * i;
      temp = x[i];
      for (b_k = 0; b_k < i; b_k++) {
        temp -= S[b_k + iAcol] * x[b_k];
      }

      x[i] = temp / S[i + iAcol];
    }

    temp = 0.0;
    scale = 3.3121686421112381E-170;
    for (i = 0; i < 7; i++) {
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
      scale = muDoubleScalarSqrt(1.0 - temp * temp);
      for (i = 6; i >= 0; i--) {
        t = x[i];
        temp = muDoubleScalarAbs(scale);
        absxk = muDoubleScalarAbs(t);
        if (absxk == 0.0) {
          c[i] = 1.0;
          s[i] = 0.0;
        } else if (temp == 0.0) {
          c[i] = 0.0;
          s[i] = 1.0;
          scale = t;
        } else {
          temp += absxk;
          scale /= temp;
          absxk = t / temp;
          t = muDoubleScalarAbs(scale);
          rho = muDoubleScalarHypot(t, muDoubleScalarAbs(absxk));
          c[i] = t / rho;
          scale /= t;
          s[i] = scale * absxk / rho;
          rho *= temp;
          scale *= rho;
        }

        x[i] = 0.0;
      }

      for (i = 0; i < 7; i++) {
        for (iAcol = i; iAcol + 1 > 0; iAcol--) {
          temp = S[7 * i + iAcol] * s[iAcol];
          S[iAcol + 7 * i] = S[7 * i + iAcol] * c[iAcol] - s[iAcol] * x[i];
          x[i] = c[iAcol] * x[i] + temp;
        }
      }
    }
  }

  if (p != 0) {
    for (i = 0; i < 7; i++) {
      for (iAcol = 0; iAcol < 7; iAcol++) {
        S_p[i + 7 * iAcol] = 0.0;
        for (b_k = 0; b_k < 7; b_k++) {
          S_p[i + 7 * iAcol] += S[7 * i + b_k] * S[7 * iAcol + b_k];
        }

        U_p[iAcol + 7 * i] = U[iAcol] * U[i];
      }
    }

    for (i = 0; i <= 46; i += 2) {
      tmp = _mm_loadu_pd(&S_p[i]);
      tmp_p = _mm_loadu_pd(&U_p[i]);
      _mm_storeu_pd(&S_e[i], _mm_sub_pd(tmp, tmp_p));
    }

    for (i = 48; i < 49; i++) {
      S_e[i] = S_p[i] - U_p[i];
    }

    svdPSD_3ZL8Csup(S_e, S_p);
    for (i = 0; i < 7; i++) {
      for (iAcol = 0; iAcol < 7; iAcol++) {
        S[iAcol + 7 * i] = S_p[7 * iAcol + i];
      }
    }

    errorCondition = true;
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i < 7)) {
      iAcol = i + 1;
      do {
        exitg1 = 0;
        if (iAcol + 1 < 8) {
          if (!(S[7 * i + iAcol] == 0.0)) {
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
      memcpy(&S_e[0], &S[0], 49U * sizeof(real_T));
      qr_BmrLq1sa(S_e, S_p, S);
    }
  }

  for (i = 0; i < 7; i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      S_p[iAcol + 7 * i] = S[7 * iAcol + i];
    }
  }

  memcpy(&S[0], &S_p[0], 49U * sizeof(real_T));
}
