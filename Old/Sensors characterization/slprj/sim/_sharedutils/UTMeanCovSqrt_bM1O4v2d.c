#include "rtwtypes.h"
#include "multiword_types.h"
#include "cholUpdateFactor_0UPeNBYU.h"
#include "mwmathutil.h"
#include "qr_p34avi8K.h"
#include "rotate_oK4vZKF3.h"
#include "UTMeanCovSqrt_bM1O4v2d.h"

void UTMeanCovSqrt_bM1O4v2d(const real_T meanWeights[2], real_T covWeights[2],
  real_T OOM, real_T Y1[7], real_T Y2[98], real_T Ymean[7], real_T Sy[49])
{
  real_T W2_p[98];
  real_T unusedU0[98];
  real_T Sy_p[49];
  real_T c[7];
  real_T s[7];
  real_T W2;
  real_T signOOM;
  real_T z;
  int32_T i;
  int32_T kk;
  for (i = 0; i < 7; i++) {
    Ymean[i] = Y1[i] * meanWeights[0];
  }

  signOOM = meanWeights[1];
  for (kk = 0; kk < 14; kk++) {
    for (i = 0; i < 7; i++) {
      Ymean[i] += Y2[7 * kk + i] * signOOM;
    }
  }

  for (i = 0; i < 7; i++) {
    signOOM = Ymean[i] * OOM;
    Ymean[i] = signOOM;
    Y1[i] -= signOOM;
  }

  for (kk = 0; kk < 14; kk++) {
    for (i = 0; i < 7; i++) {
      Y2[i + 7 * kk] -= Ymean[i];
    }
  }

  signOOM = muDoubleScalarSign(OOM);
  covWeights[0] *= signOOM;
  W2 = signOOM * covWeights[1];
  OOM *= signOOM;
  signOOM = muDoubleScalarSqrt(OOM);
  W2 = muDoubleScalarSqrt(W2);
  for (i = 0; i < 7; i++) {
    for (kk = 0; kk < 14; kk++) {
      W2_p[kk + 14 * i] = Y2[7 * kk + i] * W2;
    }
  }

  qr_p34avi8K(W2_p, unusedU0, Sy);
  if (muDoubleScalarSign(covWeights[0]) == 1.0) {
    for (kk = 0; kk < 7; kk++) {
      for (i = 0; i <= 5 - kk; i++) {
        Sy[((kk + i) + 7 * kk) + 1] = 0.0;
      }

      c[kk] = 0.0;
      s[kk] = 0.0;
    }

    rotate_oK4vZKF3(Sy[0], Y1[0], &c[0], &s[0], &Sy[0]);
    for (kk = 0; kk < 6; kk++) {
      W2 = Y1[kk + 1];
      for (i = 0; i <= kk; i++) {
        z = s[i] * W2;
        W2 = c[i] * W2 - Sy[(kk + 1) * 7 + i] * s[i];
        Sy[i + 7 * (kk + 1)] = Sy[(kk + 1) * 7 + i] * c[i] + z;
      }

      rotate_oK4vZKF3(Sy[(kk + 7 * (kk + 1)) + 1], W2, &c[kk + 1], &s[kk + 1],
                      &Sy[(kk + 7 * (kk + 1)) + 1]);
    }

    for (i = 0; i < 7; i++) {
      for (kk = 0; kk < 7; kk++) {
        Sy_p[kk + 7 * i] = Sy[7 * kk + i];
      }
    }

    for (i = 0; i < 49; i++) {
      Sy[i] = signOOM * Sy_p[i];
    }
  } else {
    cholUpdateFactor_0UPeNBYU(Sy, Y1);
    for (i = 0; i < 49; i++) {
      Sy[i] *= signOOM;
    }
  }
}
