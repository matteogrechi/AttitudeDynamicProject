#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_YNJFsTeT.h"
#include "svd_hRRMltN8.h"
#include "xnrm2_sFTqT85T.h"
#include "cholUpdateFactor_9t0nIPXO.h"

void cholUpdateFactor_9t0nIPXO(real_T S[16], const real_T U[4])
{
  __m128d tmp;
  real_T A[16];
  real_T Ss[16];
  real_T U_p[16];
  real_T c[4];
  real_T s[4];
  real_T x[4];
  real_T absx;
  real_T alpha;
  real_T rho;
  real_T temp;
  real_T yy;
  int32_T d_k;
  int32_T exitg1;
  int32_T iAcol;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
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
    x[2] = U[2];
    x[3] = U[3];
    x[0] = U[0] / S[0];
    x[1] = (U[1] - x[0] * S[4]) / S[5];
    temp = U[2];
    for (d_k = 0; d_k < 2; d_k++) {
      temp -= S[d_k + 8] * x[d_k];
    }

    x[2] = temp / S[10];
    temp = U[3];
    for (d_k = 0; d_k < 3; d_k++) {
      temp -= S[d_k + 12] * x[d_k];
    }

    x[3] = temp / S[15];
    temp = xnrm2_sFTqT85T(x);
    if (temp >= 1.0) {
      guard1 = true;
    } else {
      alpha = muDoubleScalarSqrt(1.0 - temp * temp);
      temp = muDoubleScalarAbs(alpha);
      yy = muDoubleScalarAbs(x[3]);
      if (yy == 0.0) {
        c[3] = 1.0;
        s[3] = 0.0;
      } else if (temp == 0.0) {
        c[3] = 0.0;
        s[3] = 1.0;
        alpha = x[3];
      } else {
        temp += yy;
        alpha /= temp;
        yy = x[3] / temp;
        absx = muDoubleScalarAbs(alpha);
        rho = muDoubleScalarHypot(absx, muDoubleScalarAbs(yy));
        c[3] = absx / rho;
        alpha /= absx;
        s[3] = alpha * yy / rho;
        rho *= temp;
        alpha *= rho;
      }

      x[3] = 0.0;
      temp = muDoubleScalarAbs(alpha);
      yy = muDoubleScalarAbs(x[2]);
      if (yy == 0.0) {
        c[2] = 1.0;
        s[2] = 0.0;
      } else if (temp == 0.0) {
        c[2] = 0.0;
        s[2] = 1.0;
        alpha = x[2];
      } else {
        temp += yy;
        alpha /= temp;
        yy = x[2] / temp;
        absx = muDoubleScalarAbs(alpha);
        rho = muDoubleScalarHypot(absx, muDoubleScalarAbs(yy));
        c[2] = absx / rho;
        alpha /= absx;
        s[2] = alpha * yy / rho;
        rho *= temp;
        alpha *= rho;
      }

      x[2] = 0.0;
      temp = muDoubleScalarAbs(alpha);
      yy = muDoubleScalarAbs(x[1]);
      if (yy == 0.0) {
        c[1] = 1.0;
        s[1] = 0.0;
      } else if (temp == 0.0) {
        c[1] = 0.0;
        s[1] = 1.0;
        alpha = x[1];
      } else {
        temp += yy;
        alpha /= temp;
        yy = x[1] / temp;
        absx = muDoubleScalarAbs(alpha);
        rho = muDoubleScalarHypot(absx, muDoubleScalarAbs(yy));
        c[1] = absx / rho;
        alpha /= absx;
        s[1] = alpha * yy / rho;
        rho *= temp;
        alpha *= rho;
      }

      x[1] = 0.0;
      temp = muDoubleScalarAbs(alpha);
      yy = muDoubleScalarAbs(x[0]);
      if (yy == 0.0) {
        c[0] = 1.0;
        s[0] = 0.0;
      } else if (temp == 0.0) {
        c[0] = 0.0;
        s[0] = 1.0;
      } else {
        temp += yy;
        alpha /= temp;
        yy = x[0] / temp;
        absx = muDoubleScalarAbs(alpha);
        rho = muDoubleScalarHypot(absx, muDoubleScalarAbs(yy));
        c[0] = absx / rho;
        alpha /= absx;
        s[0] = alpha * yy / rho;
      }

      x[0] = 0.0;
      for (iAcol = 0; iAcol + 1 > 0; iAcol--) {
        temp = s[iAcol] * S[iAcol];
        S[iAcol] = c[iAcol] * S[iAcol] - s[iAcol] * x[0];
        x[0] = c[iAcol] * x[0] + temp;
      }

      for (iAcol = 1; iAcol + 1 > 0; iAcol--) {
        temp = S[iAcol + 4] * s[iAcol];
        S[iAcol + 4] = S[iAcol + 4] * c[iAcol] - s[iAcol] * x[1];
        x[1] = c[iAcol] * x[1] + temp;
      }

      for (iAcol = 2; iAcol + 1 > 0; iAcol--) {
        temp = S[iAcol + 8] * s[iAcol];
        S[iAcol + 8] = S[iAcol + 8] * c[iAcol] - s[iAcol] * x[2];
        x[2] = c[iAcol] * x[2] + temp;
      }

      for (iAcol = 3; iAcol + 1 > 0; iAcol--) {
        temp = S[iAcol + 12] * s[iAcol];
        S[iAcol + 12] = S[iAcol + 12] * c[iAcol] - s[iAcol] * x[3];
        x[3] = c[iAcol] * x[3] + temp;
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
        U_p[iAcol + (d_k << 2)] = U[iAcol] * U[d_k];
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
      svd_hRRMltN8(U_p, Ss, x, A);
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

  for (d_k = 0; d_k < 4; d_k++) {
    Ss[d_k << 2] = S[d_k];
    Ss[(d_k << 2) + 1] = S[d_k + 4];
    Ss[(d_k << 2) + 2] = S[d_k + 8];
    Ss[(d_k << 2) + 3] = S[d_k + 12];
  }

  memcpy(&S[0], &Ss[0], sizeof(real_T) << 4U);
}
