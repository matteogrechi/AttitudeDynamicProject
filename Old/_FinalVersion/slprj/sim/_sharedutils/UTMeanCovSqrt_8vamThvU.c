#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_BmrLq1sa.h"
#include "qr_asfj7swv.h"
#include "svdPSD_3ZL8Csup.h"
#include "UTMeanCovSqrt_8vamThvU.h"

void UTMeanCovSqrt_8vamThvU(real_T Y1[7], real_T Y2[98], const real_T X1[7],
  real_T X2[98], real_T Ymean[7], real_T Sy[49], real_T Pxy[49])
{
  __m128d tmp_e;
  __m128d tmp_p;
  real_T a__1[98];
  real_T tmp[98];
  real_T Sy_p[49];
  real_T Y1_p[49];
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
    Ymean[i] = Y1[i];
  }

  for (i = 0; i < 14; i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      Ymean[iAcol] += Y2[7 * i + iAcol] * -0.071428642857214286;
    }
  }

  for (iAcol = 0; iAcol < 7; iAcol++) {
    temp = Ymean[iAcol] * -999999.0;
    Ymean[iAcol] = temp;
    Y1[iAcol] -= temp;
  }

  for (i = 0; i < 14; i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      Y2[iAcol + 7 * i] -= Ymean[iAcol];
    }
  }

  for (iAcol = 0; iAcol < 7; iAcol++) {
    for (i = 0; i < 14; i++) {
      tmp[i + 14 * iAcol] = Y2[7 * i + iAcol] * 0.26726137554314555;
    }
  }

  qr_asfj7swv(tmp, a__1, Sy);
  for (i = 0; i < 7; i++) {
    for (iAcol = 0; iAcol <= 5 - i; iAcol++) {
      Sy[((i + iAcol) + 7 * i) + 1] = 0.0;
    }
  }

  p = 0;
  errorCondition = false;
  for (i = 0; i < 7; i++) {
    if (errorCondition || (Sy[7 * i + i] == 0.0)) {
      errorCondition = true;
    }
  }

  if (errorCondition) {
    p = 2;
  } else {
    for (i = 0; i < 7; i++) {
      x[i] = Y1[i];
    }

    for (i = 0; i < 7; i++) {
      iAcol = 7 * i;
      temp = x[i];
      for (b_k = 0; b_k < i; b_k++) {
        temp -= Sy[b_k + iAcol] * x[b_k];
      }

      x[i] = temp / Sy[i + iAcol];
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
          temp = Sy[7 * i + iAcol] * s[iAcol];
          Sy[iAcol + 7 * i] = Sy[7 * i + iAcol] * c[iAcol] - s[iAcol] * x[i];
          x[i] = c[iAcol] * x[i] + temp;
        }
      }
    }
  }

  if (p != 0) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      for (i = 0; i < 7; i++) {
        Sy_p[iAcol + 7 * i] = 0.0;
        for (b_k = 0; b_k < 7; b_k++) {
          Sy_p[iAcol + 7 * i] += Sy[7 * iAcol + b_k] * Sy[7 * i + b_k];
        }

        Y1_p[i + 7 * iAcol] = Y1[i] * Y1[iAcol];
      }
    }

    for (iAcol = 0; iAcol <= 46; iAcol += 2) {
      tmp_p = _mm_loadu_pd(&Sy_p[iAcol]);
      tmp_e = _mm_loadu_pd(&Y1_p[iAcol]);
      _mm_storeu_pd(&Sy[iAcol], _mm_sub_pd(tmp_p, tmp_e));
    }

    for (iAcol = 48; iAcol < 49; iAcol++) {
      Sy[iAcol] = Sy_p[iAcol] - Y1_p[iAcol];
    }

    svdPSD_3ZL8Csup(Sy, Sy_p);
    for (iAcol = 0; iAcol < 7; iAcol++) {
      for (i = 0; i < 7; i++) {
        Sy[i + 7 * iAcol] = Sy_p[7 * i + iAcol];
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
          if (!(Sy[7 * i + iAcol] == 0.0)) {
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
      memcpy(&Y1_p[0], &Sy[0], 49U * sizeof(real_T));
      qr_BmrLq1sa(Y1_p, Sy_p, Sy);
    }
  }

  for (iAcol = 0; iAcol < 7; iAcol++) {
    for (i = 0; i < 7; i++) {
      Sy_p[i + 7 * iAcol] = Sy[7 * i + iAcol];
    }
  }

  for (iAcol = 0; iAcol <= 46; iAcol += 2) {
    tmp_p = _mm_loadu_pd(&Sy_p[iAcol]);
    _mm_storeu_pd(&Sy[iAcol], _mm_mul_pd(_mm_set1_pd(999.999499999875), tmp_p));
  }

  for (iAcol = 48; iAcol < 49; iAcol++) {
    Sy[iAcol] = 999.999499999875 * Sy_p[iAcol];
  }

  for (i = 0; i < 14; i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      X2[iAcol + 7 * i] -= X1[iAcol];
    }
  }

  for (iAcol = 0; iAcol < 7; iAcol++) {
    for (i = 0; i < 7; i++) {
      Sy_p[iAcol + 7 * i] = 0.0;
      for (b_k = 0; b_k < 14; b_k++) {
        Sy_p[iAcol + 7 * i] += X2[7 * b_k + iAcol] * Y2[7 * b_k + i];
      }
    }
  }

  for (iAcol = 0; iAcol <= 46; iAcol += 2) {
    tmp_p = _mm_loadu_pd(&Sy_p[iAcol]);
    _mm_storeu_pd(&Pxy[iAcol], _mm_mul_pd(tmp_p, _mm_set1_pd(71428.571428571435)));
  }

  for (iAcol = 48; iAcol < 49; iAcol++) {
    Pxy[iAcol] = Sy_p[iAcol] * 71428.571428571435;
  }
}
