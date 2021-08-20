#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_BmrLq1sa.h"
#include "rotate_EHa2bfuE.h"
#include "svdPSD_3ZL8Csup.h"
#include "trisolve_chvVMnSu.h"
#include "trisolve_cvlW9hUq.h"
#include "UKFCorrector_correctStateAndSqrtCovariance_1j99t4pt.h"

void UKFCorrector_correctStateAndSqrtCovariance_1j99t4pt(real_T x[7], real_T S
  [49], const real_T residue[2], const real_T Pxy[14], const real_T Sy[4])
{
  __m128d tmp;
  __m128d tmp_p;
  real_T S_e[49];
  real_T S_p[49];
  real_T U_p[49];
  real_T K[14];
  real_T U[14];
  real_T b_x[7];
  real_T c[7];
  real_T s[7];
  real_T Sy_p[4];
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
  for (j = 0; j < 7; j++) {
    K[j << 1] = Pxy[j];
    K[(j << 1) + 1] = Pxy[j + 7];
  }

  trisolve_chvVMnSu(Sy, K);
  for (j = 0; j < 7; j++) {
    U[j << 1] = K[j << 1];
    U[(j << 1) + 1] = K[(j << 1) + 1];
  }

  Sy_p[0] = Sy[0];
  Sy_p[1] = Sy[2];
  Sy_p[2] = Sy[1];
  Sy_p[3] = Sy[3];
  trisolve_cvlW9hUq(Sy_p, U);
  for (b_i = 0; b_i < 2; b_i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      K[iAcol + 7 * b_i] = U[(iAcol << 1) + b_i];
    }
  }

  for (b_i = 0; b_i < 7; b_i++) {
    U[b_i] = 0.0;
    U[b_i] += K[b_i] * Sy[0];
    U[b_i] += K[b_i + 7] * Sy[1];
    U[b_i + 7] = 0.0;
    U[b_i + 7] += K[b_i] * Sy[2];
    U[b_i + 7] += K[b_i + 7] * Sy[3];
    x[b_i] += K[b_i + 7] * residue[1] + K[b_i] * residue[0];
  }

  for (j = 0; j < 2; j++) {
    for (b_i = 0; b_i < 7; b_i++) {
      for (iAcol = 0; iAcol <= 5 - b_i; iAcol++) {
        S[((b_i + iAcol) + 7 * b_i) + 1] = 0.0;
      }
    }

    p = 0;
    errorCondition = false;
    for (b_i = 0; b_i < 7; b_i++) {
      if (errorCondition || (S[7 * b_i + b_i] == 0.0)) {
        errorCondition = true;
      }
    }

    if (errorCondition) {
      p = 2;
    } else {
      for (b_i = 0; b_i < 7; b_i++) {
        b_x[b_i] = U[7 * j + b_i];
      }

      for (b_i = 0; b_i < 7; b_i++) {
        iAcol = 7 * b_i;
        temp = b_x[b_i];
        for (b_k = 0; b_k < b_i; b_k++) {
          temp -= S[b_k + iAcol] * b_x[b_k];
        }

        b_x[b_i] = temp / S[b_i + iAcol];
      }

      temp = 0.0;
      scale = 3.3121686421112381E-170;
      for (b_i = 0; b_i < 7; b_i++) {
        absxk = muDoubleScalarAbs(b_x[b_i]);
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
          rotate_EHa2bfuE(temp, b_x[b_i], &c[b_i], &s[b_i], &temp);
          b_x[b_i] = 0.0;
        }

        for (b_i = 0; b_i < 7; b_i++) {
          for (iAcol = b_i; iAcol + 1 > 0; iAcol--) {
            temp = S[7 * b_i + iAcol] * s[iAcol];
            S[iAcol + 7 * b_i] = S[7 * b_i + iAcol] * c[iAcol] - s[iAcol] *
              b_x[b_i];
            b_x[b_i] = c[iAcol] * b_x[b_i] + temp;
          }
        }
      }
    }

    if (p != 0) {
      for (b_i = 0; b_i < 7; b_i++) {
        for (iAcol = 0; iAcol < 7; iAcol++) {
          S_p[b_i + 7 * iAcol] = 0.0;
          for (b_k = 0; b_k < 7; b_k++) {
            S_p[b_i + 7 * iAcol] += S[7 * b_i + b_k] * S[7 * iAcol + b_k];
          }

          U_p[iAcol + 7 * b_i] = U[7 * j + iAcol] * U[7 * j + b_i];
        }
      }

      for (b_i = 0; b_i <= 46; b_i += 2) {
        tmp = _mm_loadu_pd(&S_p[b_i]);
        tmp_p = _mm_loadu_pd(&U_p[b_i]);
        _mm_storeu_pd(&S_e[b_i], _mm_sub_pd(tmp, tmp_p));
      }

      for (b_i = 48; b_i < 49; b_i++) {
        S_e[b_i] = S_p[b_i] - U_p[b_i];
      }

      svdPSD_3ZL8Csup(S_e, S_p);
      for (b_i = 0; b_i < 7; b_i++) {
        for (iAcol = 0; iAcol < 7; iAcol++) {
          S[iAcol + 7 * b_i] = S_p[7 * iAcol + b_i];
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
            if (!(S[7 * b_i + iAcol] == 0.0)) {
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
        memcpy(&S_e[0], &S[0], 49U * sizeof(real_T));
        qr_BmrLq1sa(S_e, S_p, S);
      }
    }
  }

  for (b_i = 0; b_i < 7; b_i++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      S_p[iAcol + 7 * b_i] = S[7 * iAcol + b_i];
    }
  }

  memcpy(&S[0], &S_p[0], 49U * sizeof(real_T));
}
