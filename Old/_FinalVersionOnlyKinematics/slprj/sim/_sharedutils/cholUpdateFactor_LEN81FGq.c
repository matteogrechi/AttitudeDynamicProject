#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_YNJFsTeT.h"
#include "rotate_EHa2bfuE.h"
#include "svd_hRRMltN8.h"
#include "cholUpdateFactor_LEN81FGq.h"

void cholUpdateFactor_LEN81FGq(real_T S[16], const real_T U[8])
{
  __m128d tmp;
  real_T A[16];
  real_T Ss[16];
  real_T U_p[16];
  real_T c[4];
  real_T s[4];
  real_T u[4];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T d_k;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
  for (i = 0; i < 2; i++) {
    for (iAcol = 0; iAcol < 3; iAcol++) {
      S[iAcol + 1] = 0.0;
    }

    for (iAcol = 0; iAcol < 2; iAcol++) {
      S[iAcol + 6] = 0.0;
    }

    S[11] = 0.0;
    errorCondition = false;
    if ((S[0] == 0.0) || (S[5] == 0.0) || (S[10] == 0.0) || (S[15] == 0.0)) {
      errorCondition = true;
    }

    guard1 = false;
    if (errorCondition) {
      guard1 = true;
    } else {
      u[0] = U[i << 2];
      u[1] = U[(i << 2) + 1];
      u[2] = U[(i << 2) + 2];
      u[3] = U[(i << 2) + 3];
      u[0] /= S[0];
      u[1] = (u[1] - u[0] * S[4]) / S[5];
      temp = u[2];
      for (d_k = 0; d_k < 2; d_k++) {
        temp -= S[d_k + 8] * u[d_k];
      }

      u[2] = temp / S[10];
      temp = u[3];
      for (d_k = 0; d_k < 3; d_k++) {
        temp -= S[d_k + 12] * u[d_k];
      }

      u[3] = temp / S[15];
      scale = 3.3121686421112381E-170;
      absxk = muDoubleScalarAbs(u[0]);
      if (absxk > 3.3121686421112381E-170) {
        temp = 1.0;
        scale = absxk;
      } else {
        t = absxk / 3.3121686421112381E-170;
        temp = t * t;
      }

      absxk = muDoubleScalarAbs(u[1]);
      if (absxk > scale) {
        t = scale / absxk;
        temp = temp * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        temp += t * t;
      }

      absxk = muDoubleScalarAbs(u[2]);
      if (absxk > scale) {
        t = scale / absxk;
        temp = temp * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        temp += t * t;
      }

      absxk = muDoubleScalarAbs(u[3]);
      if (absxk > scale) {
        t = scale / absxk;
        temp = temp * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        temp += t * t;
      }

      temp = scale * muDoubleScalarSqrt(temp);
      if (temp >= 1.0) {
        guard1 = true;
      } else {
        temp = muDoubleScalarSqrt(1.0 - temp * temp);
        rotate_EHa2bfuE(temp, u[3], &c[3], &s[3], &temp);
        u[3] = 0.0;
        rotate_EHa2bfuE(temp, u[2], &c[2], &s[2], &temp);
        u[2] = 0.0;
        rotate_EHa2bfuE(temp, u[1], &c[1], &s[1], &temp);
        u[1] = 0.0;
        rotate_EHa2bfuE(temp, u[0], &c[0], &s[0], &temp);
        u[0] = 0.0;
        for (iAcol = 0; iAcol + 1 > 0; iAcol--) {
          temp = s[iAcol] * S[iAcol];
          S[iAcol] = c[iAcol] * S[iAcol] - s[iAcol] * u[0];
          u[0] = c[iAcol] * u[0] + temp;
        }

        for (iAcol = 1; iAcol + 1 > 0; iAcol--) {
          temp = S[iAcol + 4] * s[iAcol];
          S[iAcol + 4] = S[iAcol + 4] * c[iAcol] - s[iAcol] * u[1];
          u[1] = c[iAcol] * u[1] + temp;
        }

        for (iAcol = 2; iAcol + 1 > 0; iAcol--) {
          temp = S[iAcol + 8] * s[iAcol];
          S[iAcol + 8] = S[iAcol + 8] * c[iAcol] - s[iAcol] * u[2];
          u[2] = c[iAcol] * u[2] + temp;
        }

        for (iAcol = 3; iAcol + 1 > 0; iAcol--) {
          temp = S[iAcol + 12] * s[iAcol];
          S[iAcol + 12] = S[iAcol + 12] * c[iAcol] - s[iAcol] * u[3];
          u[3] = c[iAcol] * u[3] + temp;
        }
      }
    }

    if (guard1) {
      for (d_k = 0; d_k < 4; d_k++) {
        for (iAcol = 0; iAcol < 4; iAcol++) {
          Ss[d_k + (iAcol << 2)] = 0.0;
          Ss[d_k + (iAcol << 2)] += S[d_k << 2] * S[iAcol << 2];
          Ss[d_k + (iAcol << 2)] += S[(d_k << 2) + 1] * S[(iAcol << 2) + 1];
          Ss[d_k + (iAcol << 2)] += S[(d_k << 2) + 2] * S[(iAcol << 2) + 2];
          Ss[d_k + (iAcol << 2)] += S[(d_k << 2) + 3] * S[(iAcol << 2) + 3];
          U_p[iAcol + (d_k << 2)] = U[(i << 2) + iAcol] * U[(i << 2) + d_k];
        }
      }

      errorCondition = true;
      for (d_k = 0; d_k < 16; d_k++) {
        temp = Ss[d_k] - U_p[d_k];
        if (errorCondition && ((!muDoubleScalarIsInf(temp)) &&
                               (!muDoubleScalarIsNaN(temp)))) {
        } else {
          errorCondition = false;
        }

        A[d_k] = temp;
      }

      if (errorCondition) {
        svd_hRRMltN8(A, Ss, s, U_p);
      } else {
        memset(&U_p[0], 0, sizeof(real_T) << 4U);
        svd_hRRMltN8(U_p, Ss, u, A);
        s[0] = (rtNaN);
        s[1] = (rtNaN);
        s[2] = (rtNaN);
        s[3] = (rtNaN);
        for (d_k = 0; d_k < 16; d_k++) {
          U_p[d_k] = (rtNaN);
        }
      }

      memset(&Ss[0], 0, sizeof(real_T) << 4U);
      Ss[0] = s[0];
      Ss[5] = s[1];
      Ss[10] = s[2];
      Ss[15] = s[3];
      for (d_k = 0; d_k <= 14; d_k += 2) {
        tmp = _mm_loadu_pd(&Ss[d_k]);
        _mm_storeu_pd(&Ss[d_k], _mm_sqrt_pd(tmp));
      }

      for (d_k = 0; d_k < 4; d_k++) {
        for (iAcol = 0; iAcol < 4; iAcol++) {
          S[d_k + (iAcol << 2)] = 0.0;
          S[d_k + (iAcol << 2)] += Ss[d_k << 2] * U_p[iAcol];
          S[d_k + (iAcol << 2)] += Ss[(d_k << 2) + 1] * U_p[iAcol + 4];
          S[d_k + (iAcol << 2)] += Ss[(d_k << 2) + 2] * U_p[iAcol + 8];
          S[d_k + (iAcol << 2)] += Ss[(d_k << 2) + 3] * U_p[iAcol + 12];
        }
      }

      errorCondition = true;
      d_k = 0;
      exitg2 = false;
      while ((!exitg2) && (d_k < 4)) {
        iAcol = d_k + 1;
        do {
          exitg1 = 0;
          if (iAcol + 1 < 5) {
            if (!(S[(d_k << 2) + iAcol] == 0.0)) {
              errorCondition = false;
              exitg1 = 1;
            } else {
              iAcol++;
            }
          } else {
            d_k++;
            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }

      if (!errorCondition) {
        memcpy(&Ss[0], &S[0], sizeof(real_T) << 4);
        qr_YNJFsTeT(Ss, A, S);
      }
    }
  }

  for (d_k = 0; d_k < 4; d_k++) {
    Ss[d_k << 2] = S[d_k];
    Ss[(d_k << 2) + 1] = S[d_k + 4];
    Ss[(d_k << 2) + 2] = S[d_k + 8];
    Ss[(d_k << 2) + 3] = S[d_k + 12];
  }

  memcpy(&S[0], &Ss[0], sizeof(real_T) << 4U);
}
