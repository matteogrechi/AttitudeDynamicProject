#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "cholupdate_lSnXqDZy.h"
#include "istriu_UHMBrJD6.h"
#include "mwmathutil.h"
#include "qr_FYLMsjgk.h"
#include "qr_p34avi8K.h"
#include "rotate_oK4vZKF3.h"
#include "svdPSD_mZeGp8GY.h"
#include "UTMeanCovSqrt_NAxRpVx4.h"

void UTMeanCovSqrt_NAxRpVx4(const real_T meanWeights[2], real_T covWeights[2],
  real_T OOM, real_T Y1[7], real_T Y2[98], const real_T X1[7], real_T X2[98],
  real_T Ymean[7], real_T Sy[49], real_T Pxy[49])
{
  real_T W2_p[98];
  real_T unusedU0[98];
  real_T Sy_p[49];
  real_T Y1_p[49];
  real_T c[7];
  real_T s[7];
  real_T W2;
  real_T covWeights_p;
  real_T signOOM;
  real_T z;
  int32_T i;
  int32_T i_p;
  int32_T kk;
  int8_T p;
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
  covWeights_p = signOOM * covWeights[1];
  OOM *= signOOM;
  signOOM = muDoubleScalarSqrt(OOM);
  W2 = muDoubleScalarSqrt(covWeights_p);
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
    p = cholupdate_lSnXqDZy(Sy, Y1);
    if (p != 0) {
      for (i = 0; i < 7; i++) {
        for (kk = 0; kk < 7; kk++) {
          Sy_p[i + 7 * kk] = 0.0;
          for (i_p = 0; i_p < 7; i_p++) {
            Sy_p[i + 7 * kk] += Sy[7 * i + i_p] * Sy[7 * kk + i_p];
          }

          Y1_p[kk + 7 * i] = Y1[kk] * Y1[i];
        }
      }

      for (i = 0; i < 49; i++) {
        Sy[i] = Sy_p[i] - Y1_p[i];
      }

      svdPSD_mZeGp8GY(Sy, Sy_p);
      for (i = 0; i < 7; i++) {
        for (kk = 0; kk < 7; kk++) {
          Sy[kk + 7 * i] = Sy_p[7 * kk + i];
        }
      }

      if (!istriu_UHMBrJD6(Sy)) {
        memcpy(&Y1_p[0], &Sy[0], 49U * sizeof(real_T));
        qr_FYLMsjgk(Y1_p, Sy_p, Sy);
      }
    }

    for (i = 0; i < 7; i++) {
      for (kk = 0; kk < 7; kk++) {
        Sy_p[kk + 7 * i] = Sy[7 * kk + i];
      }
    }

    for (i = 0; i < 49; i++) {
      Sy[i] = signOOM * Sy_p[i];
    }
  }

  for (kk = 0; kk < 14; kk++) {
    for (i = 0; i < 7; i++) {
      X2[i + 7 * kk] -= X1[i];
    }
  }

  signOOM = covWeights_p * OOM;
  for (i = 0; i < 7; i++) {
    for (kk = 0; kk < 7; kk++) {
      Sy_p[i + 7 * kk] = 0.0;
      for (i_p = 0; i_p < 14; i_p++) {
        Sy_p[i + 7 * kk] += X2[7 * i_p + i] * Y2[7 * i_p + kk];
      }
    }
  }

  for (i = 0; i < 49; i++) {
    Pxy[i] = Sy_p[i] * signOOM;
  }
}
