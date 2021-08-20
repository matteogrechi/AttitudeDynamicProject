#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include <string.h>
#include "mwmathutil.h"
#include "qr_4g1gr4gZ.h"
#include "qr_YNJFsTeT.h"
#include "svd_hRRMltN8.h"
#include "xnrm2_sFTqT85T.h"
#include "UTMeanCovSqrt_tqdDaaPa.h"

void UTMeanCovSqrt_tqdDaaPa(real_T Y1[4], real_T Y2[32], const real_T X1[4],
  real_T X2[32], real_T Ymean[4], real_T Sy[16], real_T Pxy[16])
{
  __m128d tmp_p;
  real_T a__1[32];
  real_T tmp[32];
  real_T A[16];
  real_T Ss[16];
  real_T Y1_p[16];
  real_T c[4];
  real_T s[4];
  real_T x[4];
  real_T absx;
  real_T alpha;
  real_T rho;
  real_T temp;
  real_T yy;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  int32_T kk;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
  Ymean[0] = Y1[0];
  Ymean[1] = Y1[1];
  Ymean[2] = Y1[2];
  Ymean[3] = Y1[3];
  for (kk = 0; kk < 8; kk++) {
    Ymean[0] += Y2[kk << 2] * -0.125000125000125;
    Ymean[1] += Y2[(kk << 2) + 1] * -0.125000125000125;
    Ymean[2] += Y2[(kk << 2) + 2] * -0.125000125000125;
    Ymean[3] += Y2[(kk << 2) + 3] * -0.125000125000125;
  }

  temp = Ymean[0] * -999999.0;
  Ymean[0] = temp;
  Y1[0] -= temp;
  temp = Ymean[1] * -999999.0;
  Ymean[1] = temp;
  Y1[1] -= temp;
  temp = Ymean[2] * -999999.0;
  Ymean[2] = temp;
  Y1[2] -= temp;
  temp = Ymean[3] * -999999.0;
  alpha = Y1[3] - temp;
  Ymean[3] = temp;
  Y1[3] = alpha;
  for (kk = 0; kk < 8; kk++) {
    Y2[kk << 2] -= Ymean[0];
    Y2[(kk << 2) + 1] -= Ymean[1];
    Y2[(kk << 2) + 2] -= Ymean[2];
    Y2[(kk << 2) + 3] -= temp;
  }

  for (kk = 0; kk < 4; kk++) {
    for (iAcol = 0; iAcol < 8; iAcol++) {
      tmp[iAcol + (kk << 3)] = Y2[(iAcol << 2) + kk] * 0.35355356737010163;
    }
  }

  qr_4g1gr4gZ(tmp, a__1, Sy);
  for (iAcol = 0; iAcol < 3; iAcol++) {
    Sy[iAcol + 1] = 0.0;
  }

  for (iAcol = 0; iAcol < 2; iAcol++) {
    Sy[iAcol + 6] = 0.0;
  }

  Sy[11] = 0.0;
  errorCondition = false;
  if ((Sy[0] == 0.0) || (Sy[5] == 0.0) || (Sy[10] == 0.0) || (Sy[15] == 0.0)) {
    errorCondition = true;
  }

  guard1 = false;
  if (errorCondition) {
    guard1 = true;
  } else {
    x[2] = Y1[2];
    x[3] = alpha;
    x[0] = Y1[0] / Sy[0];
    x[1] = (Y1[1] - x[0] * Sy[4]) / Sy[5];
    temp = Y1[2];
    for (kk = 0; kk < 2; kk++) {
      temp -= Sy[kk + 8] * x[kk];
    }

    x[2] = temp / Sy[10];
    temp = alpha;
    for (kk = 0; kk < 3; kk++) {
      temp -= Sy[kk + 12] * x[kk];
    }

    x[3] = temp / Sy[15];
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
        temp = s[iAcol] * Sy[iAcol];
        Sy[iAcol] = c[iAcol] * Sy[iAcol] - s[iAcol] * x[0];
        x[0] = c[iAcol] * x[0] + temp;
      }

      for (iAcol = 1; iAcol + 1 > 0; iAcol--) {
        temp = Sy[iAcol + 4] * s[iAcol];
        Sy[iAcol + 4] = Sy[iAcol + 4] * c[iAcol] - s[iAcol] * x[1];
        x[1] = c[iAcol] * x[1] + temp;
      }

      for (iAcol = 2; iAcol + 1 > 0; iAcol--) {
        temp = Sy[iAcol + 8] * s[iAcol];
        Sy[iAcol + 8] = Sy[iAcol + 8] * c[iAcol] - s[iAcol] * x[2];
        x[2] = c[iAcol] * x[2] + temp;
      }

      for (iAcol = 3; iAcol + 1 > 0; iAcol--) {
        temp = Sy[iAcol + 12] * s[iAcol];
        Sy[iAcol + 12] = Sy[iAcol + 12] * c[iAcol] - s[iAcol] * x[3];
        x[3] = c[iAcol] * x[3] + temp;
      }
    }
  }

  if (guard1) {
    for (kk = 0; kk < 4; kk++) {
      for (iAcol = 0; iAcol < 4; iAcol++) {
        Ss[kk + (iAcol << 2)] = 0.0;
        Ss[kk + (iAcol << 2)] += Sy[kk << 2] * Sy[iAcol << 2];
        Ss[kk + (iAcol << 2)] += Sy[(kk << 2) + 1] * Sy[(iAcol << 2) + 1];
        Ss[kk + (iAcol << 2)] += Sy[(kk << 2) + 2] * Sy[(iAcol << 2) + 2];
        Ss[kk + (iAcol << 2)] += Sy[(kk << 2) + 3] * Sy[(iAcol << 2) + 3];
        Y1_p[iAcol + (kk << 2)] = Y1[iAcol] * Y1[kk];
      }
    }

    errorCondition = true;
    for (kk = 0; kk < 16; kk++) {
      temp = Ss[kk] - Y1_p[kk];
      if (errorCondition && ((!muDoubleScalarIsInf(temp)) &&
                             (!muDoubleScalarIsNaN(temp)))) {
      } else {
        errorCondition = false;
      }

      A[kk] = temp;
    }

    if (errorCondition) {
      svd_hRRMltN8(A, Ss, s, Y1_p);
    } else {
      memset(&Y1_p[0], 0, sizeof(real_T) << 4U);
      svd_hRRMltN8(Y1_p, Ss, x, A);
      s[0] = (rtNaN);
      s[1] = (rtNaN);
      s[2] = (rtNaN);
      s[3] = (rtNaN);
      for (kk = 0; kk < 16; kk++) {
        Y1_p[kk] = (rtNaN);
      }
    }

    memset(&Ss[0], 0, sizeof(real_T) << 4U);
    Ss[0] = s[0];
    Ss[5] = s[1];
    Ss[10] = s[2];
    Ss[15] = s[3];
    for (kk = 0; kk <= 14; kk += 2) {
      tmp_p = _mm_loadu_pd(&Ss[kk]);
      _mm_storeu_pd(&Ss[kk], _mm_sqrt_pd(tmp_p));
    }

    for (kk = 0; kk < 4; kk++) {
      for (iAcol = 0; iAcol < 4; iAcol++) {
        Sy[kk + (iAcol << 2)] = 0.0;
        Sy[kk + (iAcol << 2)] += Ss[kk << 2] * Y1_p[iAcol];
        Sy[kk + (iAcol << 2)] += Ss[(kk << 2) + 1] * Y1_p[iAcol + 4];
        Sy[kk + (iAcol << 2)] += Ss[(kk << 2) + 2] * Y1_p[iAcol + 8];
        Sy[kk + (iAcol << 2)] += Ss[(kk << 2) + 3] * Y1_p[iAcol + 12];
      }
    }

    errorCondition = true;
    kk = 0;
    exitg2 = false;
    while ((!exitg2) && (kk < 4)) {
      iAcol = kk + 1;
      do {
        exitg1 = 0;
        if (iAcol + 1 < 5) {
          if (!(Sy[(kk << 2) + iAcol] == 0.0)) {
            errorCondition = false;
            exitg1 = 1;
          } else {
            iAcol++;
          }
        } else {
          kk++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    if (!errorCondition) {
      memcpy(&Ss[0], &Sy[0], sizeof(real_T) << 4);
      qr_YNJFsTeT(Ss, A, Sy);
    }
  }

  for (kk = 0; kk < 4; kk++) {
    Ss[kk << 2] = Sy[kk];
    Ss[(kk << 2) + 1] = Sy[kk + 4];
    Ss[(kk << 2) + 2] = Sy[kk + 8];
    Ss[(kk << 2) + 3] = Sy[kk + 12];
  }

  for (kk = 0; kk <= 14; kk += 2) {
    tmp_p = _mm_loadu_pd(&Ss[kk]);
    _mm_storeu_pd(&Sy[kk], _mm_mul_pd(_mm_set1_pd(999.999499999875), tmp_p));
  }

  for (kk = 0; kk < 8; kk++) {
    X2[kk << 2] -= X1[0];
    X2[(kk << 2) + 1] -= X1[1];
    X2[(kk << 2) + 2] -= X1[2];
    X2[(kk << 2) + 3] -= X1[3];
  }

  for (kk = 0; kk < 4; kk++) {
    for (iAcol = 0; iAcol < 4; iAcol++) {
      A[kk + (iAcol << 2)] = 0.0;
      for (i = 0; i < 8; i++) {
        A[kk + (iAcol << 2)] += X2[(i << 2) + kk] * Y2[(i << 2) + iAcol];
      }
    }
  }

  for (kk = 0; kk <= 14; kk += 2) {
    tmp_p = _mm_loadu_pd(&A[kk]);
    _mm_storeu_pd(&Pxy[kk], _mm_mul_pd(tmp_p, _mm_set1_pd(125000.0)));
  }
}
