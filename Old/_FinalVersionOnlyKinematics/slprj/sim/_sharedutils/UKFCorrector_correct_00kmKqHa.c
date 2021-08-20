#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_KZ1pDJze.h"
#include "mwmathutil.h"
#include "qr_BmrLq1sa.h"
#include "rotate_EHa2bfuE.h"
#include "svdPSD_3ZL8Csup.h"
#include "trisolve_AHX7TMjD.h"
#include "trisolve_zH4flTKV.h"
#include "UKFCorrector_correct_00kmKqHa.h"

void UKFCorrector_correct_00kmKqHa(const real_T z[6], const real_T Rs[36],
  real_T X1[7], real_T S[49], const real_T varargin_1[13])
{
  __m128d tmp;
  __m128d tmp_p;
  real_T U_p[49];
  real_T b_S[49];
  real_T b_S_p[49];
  real_T B[42];
  real_T K[42];
  real_T U[42];
  real_T Sy[36];
  real_T Sy_p[36];
  real_T c[7];
  real_T s[7];
  real_T x[7];
  real_T Ymean[6];
  real_T z_p[6];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T b_i;
  int32_T b_k;
  int32_T exitg1;
  int32_T iAcol;
  int32_T j;
  int8_T p;
  boolean_T errorCondition;
  boolean_T exitg2;
  UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_KZ1pDJze(Rs, X1,
    S, varargin_1, Ymean, U, Sy);
  for (b_i = 0; b_i < 7; b_i++) {
    for (iAcol = 0; iAcol < 6; iAcol++) {
      B[iAcol + 6 * b_i] = U[7 * iAcol + b_i];
    }
  }

  for (j = 0; j < 7; j++) {
    for (b_i = 0; b_i < 6; b_i++) {
      U[b_i + 6 * j] = B[6 * j + b_i];
    }
  }

  trisolve_AHX7TMjD(Sy, U);
  for (j = 0; j < 7; j++) {
    for (b_i = 0; b_i < 6; b_i++) {
      B[b_i + 6 * j] = U[6 * j + b_i];
    }
  }

  for (b_i = 0; b_i < 6; b_i++) {
    for (iAcol = 0; iAcol < 6; iAcol++) {
      Sy_p[iAcol + 6 * b_i] = Sy[6 * iAcol + b_i];
    }
  }

  trisolve_zH4flTKV(Sy_p, B);
  for (b_i = 0; b_i < 6; b_i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      K[iAcol + 7 * b_i] = B[6 * iAcol + b_i];
    }
  }

  for (b_i = 0; b_i < 7; b_i++) {
    for (iAcol = 0; iAcol < 6; iAcol++) {
      U[b_i + 7 * iAcol] = 0.0;
      for (b_k = 0; b_k < 6; b_k++) {
        U[b_i + 7 * iAcol] += K[7 * b_k + b_i] * Sy[6 * iAcol + b_k];
      }
    }

    for (iAcol = 0; iAcol < 7; iAcol++) {
      b_S[iAcol + 7 * b_i] = S[7 * iAcol + b_i];
    }
  }

  for (j = 0; j < 6; j++) {
    for (b_i = 0; b_i < 7; b_i++) {
      for (iAcol = 0; iAcol <= 5 - b_i; iAcol++) {
        b_S[((b_i + iAcol) + 7 * b_i) + 1] = 0.0;
      }
    }

    p = 0;
    errorCondition = false;
    for (b_i = 0; b_i < 7; b_i++) {
      if (errorCondition || (b_S[7 * b_i + b_i] == 0.0)) {
        errorCondition = true;
      }
    }

    if (errorCondition) {
      p = 2;
    } else {
      for (b_i = 0; b_i < 7; b_i++) {
        x[b_i] = U[7 * j + b_i];
      }

      for (b_i = 0; b_i < 7; b_i++) {
        iAcol = 7 * b_i;
        temp = x[b_i];
        for (b_k = 0; b_k < b_i; b_k++) {
          temp -= b_S[b_k + iAcol] * x[b_k];
        }

        x[b_i] = temp / b_S[b_i + iAcol];
      }

      temp = 0.0;
      scale = 3.3121686421112381E-170;
      for (b_i = 0; b_i < 7; b_i++) {
        absxk = muDoubleScalarAbs(x[b_i]);
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
        for (b_i = 6; b_i >= 0; b_i--) {
          rotate_EHa2bfuE(temp, x[b_i], &c[b_i], &s[b_i], &temp);
          x[b_i] = 0.0;
        }

        for (b_i = 0; b_i < 7; b_i++) {
          for (iAcol = b_i; iAcol + 1 > 0; iAcol--) {
            temp = b_S[7 * b_i + iAcol] * s[iAcol];
            b_S[iAcol + 7 * b_i] = b_S[7 * b_i + iAcol] * c[iAcol] - s[iAcol] *
              x[b_i];
            x[b_i] = c[iAcol] * x[b_i] + temp;
          }
        }
      }
    }

    if (p != 0) {
      for (b_i = 0; b_i < 7; b_i++) {
        for (iAcol = 0; iAcol < 7; iAcol++) {
          b_S_p[b_i + 7 * iAcol] = 0.0;
          for (b_k = 0; b_k < 7; b_k++) {
            b_S_p[b_i + 7 * iAcol] += b_S[7 * b_i + b_k] * b_S[7 * iAcol + b_k];
          }

          U_p[iAcol + 7 * b_i] = U[7 * j + iAcol] * U[7 * j + b_i];
        }
      }

      for (b_i = 0; b_i <= 46; b_i += 2) {
        tmp = _mm_loadu_pd(&b_S_p[b_i]);
        tmp_p = _mm_loadu_pd(&U_p[b_i]);
        _mm_storeu_pd(&b_S[b_i], _mm_sub_pd(tmp, tmp_p));
      }

      for (b_i = 48; b_i < 49; b_i++) {
        b_S[b_i] = b_S_p[b_i] - U_p[b_i];
      }

      svdPSD_3ZL8Csup(b_S, b_S_p);
      for (b_i = 0; b_i < 7; b_i++) {
        for (iAcol = 0; iAcol < 7; iAcol++) {
          b_S[iAcol + 7 * b_i] = b_S_p[7 * iAcol + b_i];
        }
      }

      errorCondition = true;
      b_i = 0;
      exitg2 = false;
      while ((!exitg2) && (b_i < 7)) {
        iAcol = b_i + 1;
        do {
          exitg1 = 0;
          if (iAcol + 1 < 8) {
            if (!(b_S[7 * b_i + iAcol] == 0.0)) {
              errorCondition = false;
              exitg1 = 1;
            } else {
              iAcol++;
            }
          } else {
            b_i++;
            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }

      if (!errorCondition) {
        memcpy(&U_p[0], &b_S[0], 49U * sizeof(real_T));
        qr_BmrLq1sa(U_p, b_S_p, b_S);
      }
    }
  }

  for (b_i = 0; b_i < 7; b_i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      S[iAcol + 7 * b_i] = b_S[7 * iAcol + b_i];
    }
  }

  for (b_i = 0; b_i <= 4; b_i += 2) {
    tmp = _mm_loadu_pd(&Ymean[b_i]);
    _mm_storeu_pd(&z_p[b_i], _mm_sub_pd(_mm_loadu_pd(&z[b_i]), tmp));
  }

  for (b_i = 0; b_i < 7; b_i++) {
    temp = 0.0;
    for (iAcol = 0; iAcol < 6; iAcol++) {
      temp += K[7 * iAcol + b_i] * z_p[iAcol];
    }

    X1[b_i] += temp;
  }
}
