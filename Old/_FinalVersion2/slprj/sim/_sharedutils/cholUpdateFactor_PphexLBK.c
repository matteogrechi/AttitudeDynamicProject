#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_UDVma41l.h"
#include "svdPSD_RZQgwbtM.h"
#include "cholUpdateFactor_PphexLBK.h"

void cholUpdateFactor_PphexLBK(real_T S[100], const real_T U[10])
{
  __m128d tmp;
  __m128d tmp_p;
  real_T S_e[100];
  real_T S_p[100];
  real_T U_p[100];
  real_T c[10];
  real_T s[10];
  real_T x[10];
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
  for (i = 0; i < 10; i++) {
    for (iAcol = 0; iAcol <= 8 - i; iAcol++) {
      S[((i + iAcol) + 10 * i) + 1] = 0.0;
    }
  }

  p = 0;
  errorCondition = false;
  for (i = 0; i < 10; i++) {
    if (errorCondition || (S[10 * i + i] == 0.0)) {
      errorCondition = true;
    }
  }

  if (errorCondition) {
    p = 2;
  } else {
    memcpy(&x[0], &U[0], 10U * sizeof(real_T));
    for (i = 0; i < 10; i++) {
      iAcol = 10 * i;
      temp = x[i];
      for (b_k = 0; b_k < i; b_k++) {
        temp -= S[b_k + iAcol] * x[b_k];
      }

      x[i] = temp / S[i + iAcol];
    }

    temp = 0.0;
    scale = 3.3121686421112381E-170;
    for (i = 0; i < 10; i++) {
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
      for (i = 9; i >= 0; i--) {
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

      for (i = 0; i < 10; i++) {
        for (iAcol = i; iAcol + 1 > 0; iAcol--) {
          temp = S[10 * i + iAcol] * s[iAcol];
          S[iAcol + 10 * i] = S[10 * i + iAcol] * c[iAcol] - s[iAcol] * x[i];
          x[i] = c[iAcol] * x[i] + temp;
        }
      }
    }
  }

  if (p != 0) {
    for (i = 0; i < 10; i++) {
      for (iAcol = 0; iAcol < 10; iAcol++) {
        S_p[i + 10 * iAcol] = 0.0;
        for (b_k = 0; b_k < 10; b_k++) {
          S_p[i + 10 * iAcol] += S[10 * i + b_k] * S[10 * iAcol + b_k];
        }

        U_p[iAcol + 10 * i] = U[iAcol] * U[i];
      }
    }

    for (i = 0; i <= 98; i += 2) {
      tmp = _mm_loadu_pd(&S_p[i]);
      tmp_p = _mm_loadu_pd(&U_p[i]);
      _mm_storeu_pd(&S_e[i], _mm_sub_pd(tmp, tmp_p));
    }

    svdPSD_RZQgwbtM(S_e, S_p);
    for (i = 0; i < 10; i++) {
      for (iAcol = 0; iAcol < 10; iAcol++) {
        S[iAcol + 10 * i] = S_p[10 * iAcol + i];
      }
    }

    errorCondition = true;
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i < 10)) {
      iAcol = i + 1;
      do {
        exitg1 = 0;
        if (iAcol + 1 < 11) {
          if (!(S[10 * i + iAcol] == 0.0)) {
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
      memcpy(&S_e[0], &S[0], 100U * sizeof(real_T));
      qr_UDVma41l(S_e, S_p, S);
    }
  }

  for (i = 0; i < 10; i++) {
    for (iAcol = 0; iAcol < 10; iAcol++) {
      S_p[iAcol + 10 * i] = S[10 * iAcol + i];
    }
  }

  memcpy(&S[0], &S_p[0], 100U * sizeof(real_T));
}
