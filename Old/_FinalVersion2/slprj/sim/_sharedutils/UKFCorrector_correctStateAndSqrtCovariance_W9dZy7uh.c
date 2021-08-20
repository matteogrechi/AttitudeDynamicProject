#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_UDVma41l.h"
#include "rotate_EHa2bfuE.h"
#include "svdPSD_RZQgwbtM.h"
#include "trisolve_4QfqOvkn.h"
#include "trisolve_7hQlAjI9.h"
#include "UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh.h"

void UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh(real_T x[10], real_T S
  [100], const real_T residue[2], const real_T Pxy[20], const real_T Sy[4])
{
  __m128d tmp;
  __m128d tmp_e;
  __m128d tmp_p;
  real_T S_e[100];
  real_T S_p[100];
  real_T U_p[100];
  real_T K[20];
  real_T U[20];
  real_T b_x[10];
  real_T c[10];
  real_T s[10];
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
  for (j = 0; j < 10; j++) {
    K[j << 1] = Pxy[j];
    K[(j << 1) + 1] = Pxy[j + 10];
  }

  trisolve_7hQlAjI9(Sy, K);
  for (j = 0; j < 10; j++) {
    U[j << 1] = K[j << 1];
    U[(j << 1) + 1] = K[(j << 1) + 1];
  }

  Sy_p[0] = Sy[0];
  Sy_p[1] = Sy[2];
  Sy_p[2] = Sy[1];
  Sy_p[3] = Sy[3];
  trisolve_4QfqOvkn(Sy_p, U);
  for (b_i = 0; b_i < 2; b_i++) {
    for (iAcol = 0; iAcol < 10; iAcol++) {
      K[iAcol + 10 * b_i] = U[(iAcol << 1) + b_i];
    }
  }

  for (b_i = 0; b_i <= 8; b_i += 2) {
    _mm_storeu_pd(&U[b_i], _mm_set1_pd(0.0));
    tmp = _mm_loadu_pd(&K[b_i]);
    tmp_p = _mm_loadu_pd(&U[b_i]);
    _mm_storeu_pd(&U[b_i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(Sy[0])), tmp_p));
    tmp = _mm_loadu_pd(&K[b_i + 10]);
    tmp_p = _mm_loadu_pd(&U[b_i]);
    _mm_storeu_pd(&U[b_i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(Sy[1])), tmp_p));
    _mm_storeu_pd(&U[b_i + 10], _mm_set1_pd(0.0));
    tmp = _mm_loadu_pd(&K[b_i]);
    tmp_p = _mm_loadu_pd(&U[b_i + 10]);
    _mm_storeu_pd(&U[b_i + 10], _mm_add_pd(tmp_p, _mm_mul_pd(tmp, _mm_set1_pd
      (Sy[2]))));
    tmp = _mm_loadu_pd(&K[b_i + 10]);
    tmp_p = _mm_loadu_pd(&U[b_i + 10]);
    _mm_storeu_pd(&U[b_i + 10], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd(Sy[3])),
      tmp_p));
    tmp = _mm_loadu_pd(&K[b_i + 10]);
    tmp_p = _mm_loadu_pd(&K[b_i]);
    tmp_e = _mm_loadu_pd(&x[b_i]);
    _mm_storeu_pd(&x[b_i], _mm_add_pd(_mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
      (residue[1])), _mm_mul_pd(tmp_p, _mm_set1_pd(residue[0]))), tmp_e));
  }

  for (j = 0; j < 2; j++) {
    for (b_i = 0; b_i < 10; b_i++) {
      for (iAcol = 0; iAcol <= 8 - b_i; iAcol++) {
        S[((b_i + iAcol) + 10 * b_i) + 1] = 0.0;
      }
    }

    p = 0;
    errorCondition = false;
    for (b_i = 0; b_i < 10; b_i++) {
      if (errorCondition || (S[10 * b_i + b_i] == 0.0)) {
        errorCondition = true;
      }
    }

    if (errorCondition) {
      p = 2;
    } else {
      memcpy(&b_x[0], &U[j * 10], 10U * sizeof(real_T));
      for (b_i = 0; b_i < 10; b_i++) {
        iAcol = 10 * b_i;
        temp = b_x[b_i];
        for (b_k = 0; b_k < b_i; b_k++) {
          temp -= S[b_k + iAcol] * b_x[b_k];
        }

        b_x[b_i] = temp / S[b_i + iAcol];
      }

      temp = 0.0;
      scale = 3.3121686421112381E-170;
      for (b_i = 0; b_i < 10; b_i++) {
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
        for (b_i = 9; b_i >= 0; b_i--) {
          rotate_EHa2bfuE(temp, b_x[b_i], &c[b_i], &s[b_i], &temp);
          b_x[b_i] = 0.0;
        }

        for (b_i = 0; b_i < 10; b_i++) {
          for (iAcol = b_i; iAcol + 1 > 0; iAcol--) {
            temp = S[10 * b_i + iAcol] * s[iAcol];
            S[iAcol + 10 * b_i] = S[10 * b_i + iAcol] * c[iAcol] - s[iAcol] *
              b_x[b_i];
            b_x[b_i] = c[iAcol] * b_x[b_i] + temp;
          }
        }
      }
    }

    if (p != 0) {
      for (b_i = 0; b_i < 10; b_i++) {
        for (iAcol = 0; iAcol < 10; iAcol++) {
          S_p[b_i + 10 * iAcol] = 0.0;
          for (b_k = 0; b_k < 10; b_k++) {
            S_p[b_i + 10 * iAcol] += S[10 * b_i + b_k] * S[10 * iAcol + b_k];
          }

          U_p[iAcol + 10 * b_i] = U[10 * j + iAcol] * U[10 * j + b_i];
        }
      }

      for (b_i = 0; b_i <= 98; b_i += 2) {
        tmp = _mm_loadu_pd(&S_p[b_i]);
        tmp_p = _mm_loadu_pd(&U_p[b_i]);
        _mm_storeu_pd(&S_e[b_i], _mm_sub_pd(tmp, tmp_p));
      }

      svdPSD_RZQgwbtM(S_e, S_p);
      for (b_i = 0; b_i < 10; b_i++) {
        for (iAcol = 0; iAcol < 10; iAcol++) {
          S[iAcol + 10 * b_i] = S_p[10 * iAcol + b_i];
        }
      }

      errorCondition = true;
      b_i = 0;
      exitg2 = false;
      while ((!exitg2) && (b_i < 10)) {
        iAcol = b_i + 1;
        do {
          exitg1 = 0;
          if (iAcol + 1 < 11) {
            if (!(S[10 * b_i + iAcol] == 0.0)) {
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
        memcpy(&S_e[0], &S[0], 100U * sizeof(real_T));
        qr_UDVma41l(S_e, S_p, S);
      }
    }
  }

  for (b_i = 0; b_i < 10; b_i++) {
    for (iAcol = 0; iAcol < 10; iAcol++) {
      S_p[iAcol + 10 * b_i] = S[10 * iAcol + b_i];
    }
  }

  memcpy(&S[0], &S_p[0], 100U * sizeof(real_T));
}
