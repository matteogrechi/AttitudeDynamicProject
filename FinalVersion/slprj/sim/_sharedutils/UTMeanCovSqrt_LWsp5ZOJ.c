#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "mwmathutil.h"
#include "qr_PB1XqweS.h"
#include "qr_Sf8Pmuiw.h"
#include "rotate_oK4vZKF3.h"
#include "svd_1J6SOHvg.h"
#include "UTMeanCovSqrt_LWsp5ZOJ.h"

void UTMeanCovSqrt_LWsp5ZOJ(const real_T meanWeights[2], real_T covWeights[2],
  real_T OOM, real_T Y1[3], real_T Y2[42], const real_T X1[7], real_T X2[98],
  real_T Ymean[3], real_T Sy[9], real_T Pxy[21])
{
  real_T W2_p[42];
  real_T unusedU0[42];
  real_T X2_p[21];
  real_T A[9];
  real_T Ss[9];
  real_T Sy_p[9];
  real_T c[3];
  real_T s[3];
  real_T x[3];
  real_T W2;
  real_T absxk;
  real_T b_t;
  real_T covWeights_p;
  real_T scale;
  real_T signOOM;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  int32_T kk;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
  Ymean[0] = Y1[0] * meanWeights[0];
  Ymean[1] = Y1[1] * meanWeights[0];
  Ymean[2] = Y1[2] * meanWeights[0];
  for (kk = 0; kk < 14; kk++) {
    Ymean[0] += Y2[3 * kk] * meanWeights[1];
    Ymean[1] += Y2[3 * kk + 1] * meanWeights[1];
    Ymean[2] += Y2[3 * kk + 2] * meanWeights[1];
  }

  signOOM = Ymean[0] * OOM;
  Ymean[0] = signOOM;
  Y1[0] -= signOOM;
  signOOM = Ymean[1] * OOM;
  Ymean[1] = signOOM;
  Y1[1] -= signOOM;
  signOOM = Ymean[2] * OOM;
  scale = Y1[2] - signOOM;
  Ymean[2] = signOOM;
  Y1[2] = scale;
  for (kk = 0; kk < 14; kk++) {
    Y2[3 * kk] -= Ymean[0];
    Y2[3 * kk + 1] -= Ymean[1];
    Y2[3 * kk + 2] -= signOOM;
  }

  signOOM = muDoubleScalarSign(OOM);
  covWeights[0] *= signOOM;
  covWeights_p = signOOM * covWeights[1];
  OOM *= signOOM;
  signOOM = muDoubleScalarSqrt(OOM);
  W2 = muDoubleScalarSqrt(covWeights_p);
  for (iAcol = 0; iAcol < 3; iAcol++) {
    for (kk = 0; kk < 14; kk++) {
      W2_p[kk + 14 * iAcol] = Y2[3 * kk + iAcol] * W2;
    }
  }

  qr_PB1XqweS(W2_p, unusedU0, Sy);
  if (muDoubleScalarSign(covWeights[0]) == 1.0) {
    for (iAcol = 0; iAcol < 2; iAcol++) {
      Sy[iAcol + 1] = 0.0;
    }

    Sy[5] = 0.0;
    c[2] = 0.0;
    s[2] = 0.0;
    rotate_oK4vZKF3(Sy[0], Y1[0], &c[0], &s[0], &Sy[0]);
    W2 = c[0] * Y1[1] - s[0] * Sy[3];
    Sy[3] = c[0] * Sy[3] + s[0] * Y1[1];
    rotate_oK4vZKF3(Sy[4], W2, &c[1], &s[1], &Sy[4]);
    W2 = scale;
    for (iAcol = 0; iAcol < 2; iAcol++) {
      scale = s[iAcol] * W2;
      W2 = c[iAcol] * W2 - Sy[iAcol + 6] * s[iAcol];
      Sy[iAcol + 6] = Sy[iAcol + 6] * c[iAcol] + scale;
    }

    rotate_oK4vZKF3(Sy[8], W2, &c[2], &s[2], &Sy[8]);
    for (iAcol = 0; iAcol < 3; iAcol++) {
      Sy_p[3 * iAcol] = Sy[iAcol];
      Sy_p[3 * iAcol + 1] = Sy[iAcol + 3];
      Sy_p[3 * iAcol + 2] = Sy[iAcol + 6];
    }

    for (iAcol = 0; iAcol < 9; iAcol++) {
      Sy[iAcol] = signOOM * Sy_p[iAcol];
    }
  } else {
    for (iAcol = 0; iAcol < 2; iAcol++) {
      Sy[iAcol + 1] = 0.0;
    }

    Sy[5] = 0.0;
    errorCondition = (Sy[0] == 0.0);
    if (errorCondition || (Sy[4] == 0.0)) {
      errorCondition = true;
    }

    if (errorCondition || (Sy[8] == 0.0)) {
      errorCondition = true;
    }

    guard1 = false;
    if (errorCondition) {
      guard1 = true;
    } else {
      x[2] = scale;
      x[0] = Y1[0] / Sy[0];
      x[1] = (Y1[1] - Sy[3] * x[0]) / Sy[4];
      W2 = scale;
      for (iAcol = 0; iAcol < 2; iAcol++) {
        W2 -= Sy[iAcol + 6] * x[iAcol];
      }

      x[2] = W2 / Sy[8];
      scale = 3.3121686421112381E-170;
      absxk = muDoubleScalarAbs(x[0]);
      if (absxk > 3.3121686421112381E-170) {
        W2 = 1.0;
        scale = absxk;
      } else {
        b_t = absxk / 3.3121686421112381E-170;
        W2 = b_t * b_t;
      }

      absxk = muDoubleScalarAbs(x[1]);
      if (absxk > scale) {
        b_t = scale / absxk;
        W2 = W2 * b_t * b_t + 1.0;
        scale = absxk;
      } else {
        b_t = absxk / scale;
        W2 += b_t * b_t;
      }

      absxk = muDoubleScalarAbs(x[2]);
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
        rotate_oK4vZKF3(W2, x[2], &c[2], &s[2], &W2);
        x[2] = 0.0;
        rotate_oK4vZKF3(W2, x[1], &c[1], &s[1], &W2);
        x[1] = 0.0;
        rotate_oK4vZKF3(W2, x[0], &c[0], &s[0], &W2);
        x[0] = 0.0;
        for (iAcol = 0; iAcol + 1 > 0; iAcol--) {
          W2 = s[iAcol] * Sy[iAcol];
          Sy[iAcol] = c[iAcol] * Sy[iAcol] - s[iAcol] * x[0];
          x[0] = c[iAcol] * x[0] + W2;
        }

        for (iAcol = 1; iAcol + 1 > 0; iAcol--) {
          W2 = Sy[iAcol + 3] * s[iAcol];
          Sy[iAcol + 3] = Sy[iAcol + 3] * c[iAcol] - s[iAcol] * x[1];
          x[1] = c[iAcol] * x[1] + W2;
        }

        for (iAcol = 2; iAcol + 1 > 0; iAcol--) {
          W2 = Sy[iAcol + 6] * s[iAcol];
          Sy[iAcol + 6] = Sy[iAcol + 6] * c[iAcol] - s[iAcol] * x[2];
          x[2] = c[iAcol] * x[2] + W2;
        }
      }
    }

    if (guard1) {
      for (iAcol = 0; iAcol < 3; iAcol++) {
        for (kk = 0; kk < 3; kk++) {
          Sy_p[iAcol + 3 * kk] = 0.0;
          Sy_p[iAcol + 3 * kk] += Sy[3 * iAcol] * Sy[3 * kk];
          Sy_p[iAcol + 3 * kk] += Sy[3 * iAcol + 1] * Sy[3 * kk + 1];
          Sy_p[iAcol + 3 * kk] += Sy[3 * iAcol + 2] * Sy[3 * kk + 2];
          Ss[kk + 3 * iAcol] = Y1[kk] * Y1[iAcol];
        }
      }

      errorCondition = true;
      for (kk = 0; kk < 9; kk++) {
        W2 = Sy_p[kk] - Ss[kk];
        if (errorCondition && ((!muDoubleScalarIsInf(W2)) &&
                               (!muDoubleScalarIsNaN(W2)))) {
        } else {
          errorCondition = false;
        }

        A[kk] = W2;
      }

      if (errorCondition) {
        svd_1J6SOHvg(A, Ss, s, Sy_p);
      } else {
        s[0] = (rtNaN);
        s[1] = (rtNaN);
        s[2] = (rtNaN);
        for (iAcol = 0; iAcol < 9; iAcol++) {
          Sy_p[iAcol] = (rtNaN);
        }
      }

      memset(&Ss[0], 0, 9U * sizeof(real_T));
      Ss[0] = s[0];
      Ss[4] = s[1];
      Ss[8] = s[2];
      for (kk = 0; kk < 9; kk++) {
        Ss[kk] = muDoubleScalarSqrt(Ss[kk]);
      }

      for (iAcol = 0; iAcol < 3; iAcol++) {
        for (kk = 0; kk < 3; kk++) {
          Sy[iAcol + 3 * kk] = 0.0;
          Sy[iAcol + 3 * kk] += Ss[3 * iAcol] * Sy_p[kk];
          Sy[iAcol + 3 * kk] += Ss[3 * iAcol + 1] * Sy_p[kk + 3];
          Sy[iAcol + 3 * kk] += Ss[3 * iAcol + 2] * Sy_p[kk + 6];
        }
      }

      errorCondition = true;
      kk = 0;
      exitg2 = false;
      while ((!exitg2) && (kk < 3)) {
        iAcol = kk + 1;
        do {
          exitg1 = 0;
          if (iAcol + 1 < 4) {
            if (!(Sy[3 * kk + iAcol] == 0.0)) {
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
        memcpy(&Sy_p[0], &Sy[0], 9U * sizeof(real_T));
        qr_Sf8Pmuiw(Sy_p, Ss, Sy);
      }
    }

    for (iAcol = 0; iAcol < 3; iAcol++) {
      Sy_p[3 * iAcol] = Sy[iAcol];
      Sy_p[3 * iAcol + 1] = Sy[iAcol + 3];
      Sy_p[3 * iAcol + 2] = Sy[iAcol + 6];
    }

    for (iAcol = 0; iAcol < 9; iAcol++) {
      Sy[iAcol] = signOOM * Sy_p[iAcol];
    }
  }

  for (kk = 0; kk < 14; kk++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      X2[iAcol + 7 * kk] -= X1[iAcol];
    }
  }

  signOOM = covWeights_p * OOM;
  for (iAcol = 0; iAcol < 7; iAcol++) {
    for (kk = 0; kk < 3; kk++) {
      X2_p[iAcol + 7 * kk] = 0.0;
      for (i = 0; i < 14; i++) {
        X2_p[iAcol + 7 * kk] += X2[7 * i + iAcol] * Y2[3 * i + kk];
      }
    }
  }

  for (iAcol = 0; iAcol < 21; iAcol++) {
    Pxy[iAcol] = X2_p[iAcol] * signOOM;
  }
}
