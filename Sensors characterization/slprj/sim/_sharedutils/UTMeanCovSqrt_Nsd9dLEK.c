#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "qr_Lnhp9IXx.h"
#include "qr_iVgYa0GN.h"
#include "rotate_oK4vZKF3.h"
#include "svd_hpXm7Idz.h"
#include "UTMeanCovSqrt_Nsd9dLEK.h"

void UTMeanCovSqrt_Nsd9dLEK(const real_T meanWeights[2], real_T covWeights[2],
  real_T OOM, real_T Y1[2], real_T Y2[28], const real_T X1[7], real_T X2[98],
  real_T Ymean[2], real_T Sy[4], real_T Pxy[14])
{
  real_T W2_p[28];
  real_T unusedU0[28];
  real_T X2_p[14];
  real_T A[4];
  real_T Ss[4];
  real_T Sy_p[4];
  real_T c[2];
  real_T s[2];
  real_T W2;
  real_T Y1_p;
  real_T absxk;
  real_T b_t;
  real_T covWeights_p;
  real_T scale;
  real_T signOOM;
  real_T x_idx_0;
  real_T x_idx_1;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  int32_T kk;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
  Ymean[0] = Y1[0] * meanWeights[0];
  Ymean[1] = Y1[1] * meanWeights[0];
  for (kk = 0; kk < 14; kk++) {
    Ymean[0] += Y2[kk << 1] * meanWeights[1];
    Ymean[1] += Y2[(kk << 1) + 1] * meanWeights[1];
  }

  signOOM = Ymean[0] * OOM;
  Ymean[0] = signOOM;
  Y1[0] -= signOOM;
  signOOM = Ymean[1] * OOM;
  Y1_p = Y1[1] - signOOM;
  Ymean[1] = signOOM;
  Y1[1] = Y1_p;
  for (kk = 0; kk < 14; kk++) {
    Y2[kk << 1] -= Ymean[0];
    Y2[(kk << 1) + 1] -= signOOM;
  }

  signOOM = muDoubleScalarSign(OOM);
  covWeights[0] *= signOOM;
  covWeights_p = signOOM * covWeights[1];
  OOM *= signOOM;
  signOOM = muDoubleScalarSqrt(OOM);
  W2 = muDoubleScalarSqrt(covWeights_p);
  for (iAcol = 0; iAcol < 2; iAcol++) {
    for (kk = 0; kk < 14; kk++) {
      W2_p[kk + 14 * iAcol] = Y2[(kk << 1) + iAcol] * W2;
    }
  }

  qr_Lnhp9IXx(W2_p, unusedU0, Sy);
  if (muDoubleScalarSign(covWeights[0]) == 1.0) {
    rotate_oK4vZKF3(Sy[0], Y1[0], &scale, &absxk, &Sy[0]);
    W2 = scale * Y1_p - absxk * Sy[2];
    Sy[2] = scale * Sy[2] + absxk * Y1_p;
    rotate_oK4vZKF3(Sy[3], W2, &scale, &absxk, &Sy[3]);
    Y1_p = Sy[0];
    W2 = Sy[2];
    x_idx_1 = Sy[3];
    Sy[0] = signOOM * Y1_p;
    Sy[1] = signOOM * W2;
    Sy[2] = signOOM * 0.0;
    Sy[3] = signOOM * x_idx_1;
  } else {
    Sy[1] = 0.0;
    errorCondition = (Sy[0] == 0.0);
    if (errorCondition || (Sy[3] == 0.0)) {
      errorCondition = true;
    }

    guard1 = false;
    if (errorCondition) {
      guard1 = true;
    } else {
      x_idx_0 = Y1[0] / Sy[0];
      x_idx_1 = (Y1_p - Sy[2] * x_idx_0) / Sy[3];
      scale = 3.3121686421112381E-170;
      absxk = muDoubleScalarAbs(x_idx_0);
      if (absxk > 3.3121686421112381E-170) {
        W2 = 1.0;
        scale = absxk;
      } else {
        b_t = absxk / 3.3121686421112381E-170;
        W2 = b_t * b_t;
      }

      absxk = muDoubleScalarAbs(x_idx_1);
      if (absxk > scale) {
        b_t = scale / absxk;
        W2 = W2 * b_t * b_t + 1.0;
        scale = absxk;
      } else {
        b_t = absxk / scale;
        W2 += b_t * b_t;
      }

      W2 = scale * muDoubleScalarSqrt(W2);
      if (W2 >= 1.0) {
        guard1 = true;
      } else {
        W2 = muDoubleScalarSqrt(1.0 - W2 * W2);
        rotate_oK4vZKF3(W2, x_idx_1, &c[1], &s[1], &W2);
        x_idx_1 = 0.0;
        rotate_oK4vZKF3(W2, x_idx_0, &c[0], &s[0], &W2);
        x_idx_0 = 0.0;
        for (iAcol = 0; iAcol + 1 > 0; iAcol--) {
          W2 = s[iAcol] * Sy[iAcol];
          Sy[iAcol] = c[iAcol] * Sy[iAcol] - s[iAcol] * x_idx_0;
          x_idx_0 = c[iAcol] * x_idx_0 + W2;
        }

        for (iAcol = 1; iAcol + 1 > 0; iAcol--) {
          W2 = Sy[iAcol + 2] * s[iAcol];
          Sy[iAcol + 2] = Sy[iAcol + 2] * c[iAcol] - s[iAcol] * x_idx_1;
          x_idx_1 = c[iAcol] * x_idx_1 + W2;
        }
      }
    }

    if (guard1) {
      for (iAcol = 0; iAcol < 2; iAcol++) {
        Sy_p[iAcol] = 0.0;
        Sy_p[iAcol] += Sy[iAcol << 1] * Sy[0];
        Sy_p[iAcol] += Sy[(iAcol << 1) + 1] * 0.0;
        Ss[iAcol << 1] = Y1[0] * Y1[iAcol];
        Sy_p[iAcol + 2] = 0.0;
        Sy_p[iAcol + 2] += Sy[iAcol << 1] * Sy[2];
        Sy_p[iAcol + 2] += Sy[(iAcol << 1) + 1] * Sy[3];
        Ss[(iAcol << 1) + 1] = Y1_p * Y1[iAcol];
      }

      errorCondition = true;
      Y1_p = Sy_p[0] - Ss[0];
      if (muDoubleScalarIsInf(Y1_p) || muDoubleScalarIsNaN(Y1_p)) {
        errorCondition = false;
      }

      A[0] = Y1_p;
      Y1_p = Sy_p[1] - Ss[1];
      if (errorCondition && ((!muDoubleScalarIsInf(Y1_p)) &&
                             (!muDoubleScalarIsNaN(Y1_p)))) {
      } else {
        errorCondition = false;
      }

      A[1] = Y1_p;
      Y1_p = Sy_p[2] - Ss[2];
      if (errorCondition && ((!muDoubleScalarIsInf(Y1_p)) &&
                             (!muDoubleScalarIsNaN(Y1_p)))) {
      } else {
        errorCondition = false;
      }

      A[2] = Y1_p;
      Y1_p = Sy_p[3] - Ss[3];
      if (errorCondition && ((!muDoubleScalarIsInf(Y1_p)) &&
                             (!muDoubleScalarIsNaN(Y1_p)))) {
      } else {
        errorCondition = false;
      }

      A[3] = Y1_p;
      if (errorCondition) {
        svd_hpXm7Idz(A, Ss, s, Sy_p);
      } else {
        s[0] = (rtNaN);
        s[1] = (rtNaN);
        Sy_p[0] = (rtNaN);
        Sy_p[1] = (rtNaN);
        Sy_p[2] = (rtNaN);
        Sy_p[3] = (rtNaN);
      }

      Ss[0] = muDoubleScalarSqrt(s[0]);
      Ss[1] = 0.0;
      Ss[2] = 0.0;
      Ss[3] = muDoubleScalarSqrt(s[1]);
      for (iAcol = 0; iAcol < 2; iAcol++) {
        Sy[iAcol] = 0.0;
        Sy[iAcol] += Ss[iAcol << 1] * Sy_p[0];
        Sy[iAcol] += Ss[(iAcol << 1) + 1] * Sy_p[2];
        Sy[iAcol + 2] = 0.0;
        Sy[iAcol + 2] += Ss[iAcol << 1] * Sy_p[1];
        Sy[iAcol + 2] += Ss[(iAcol << 1) + 1] * Sy_p[3];
      }

      errorCondition = true;
      kk = 0;
      exitg2 = false;
      while ((!exitg2) && (kk < 2)) {
        iAcol = kk + 2;
        do {
          exitg1 = 0;
          if (iAcol < 3) {
            if (!(Sy[(kk << 1) + 1] == 0.0)) {
              errorCondition = false;
              exitg1 = 1;
            } else {
              iAcol = 3;
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
        for (i = 0; i < 4; i++) {
          Sy_p[i] = Sy[i];
        }

        qr_iVgYa0GN(Sy_p, Ss, Sy);
      }
    }

    Y1_p = Sy[0];
    W2 = Sy[2];
    x_idx_0 = Sy[1];
    x_idx_1 = Sy[3];
    Sy[0] = signOOM * Y1_p;
    Sy[1] = signOOM * W2;
    Sy[2] = signOOM * x_idx_0;
    Sy[3] = signOOM * x_idx_1;
  }

  for (kk = 0; kk < 14; kk++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      X2[iAcol + 7 * kk] -= X1[iAcol];
    }
  }

  signOOM = covWeights_p * OOM;
  for (iAcol = 0; iAcol < 7; iAcol++) {
    for (kk = 0; kk < 2; kk++) {
      X2_p[iAcol + 7 * kk] = 0.0;
      for (i = 0; i < 14; i++) {
        X2_p[iAcol + 7 * kk] += X2[7 * i + iAcol] * Y2[(i << 1) + kk];
      }
    }
  }

  for (iAcol = 0; iAcol < 14; iAcol++) {
    Pxy[iAcol] = X2_p[iAcol] * signOOM;
  }
}
