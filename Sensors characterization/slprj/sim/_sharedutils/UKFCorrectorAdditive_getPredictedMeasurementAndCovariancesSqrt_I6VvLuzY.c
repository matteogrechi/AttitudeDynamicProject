#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "UTMeanCovSqrt_NAxRpVx4.h"
#include "mwmathutil.h"
#include "qrFactor_dow5EKjD.h"
#include "UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_I6VvLuzY.h"

void UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_I6VvLuzY(
  const real_T Rs[49], const real_T X1[7], const real_T S[49], real_T alpha,
  real_T beta, real_T kappa, const real_T varargin_1[14], real_T Ymean[7],
  real_T Pxy[49], real_T Sy[49])
{
  real_T X2[98];
  real_T Y2[98];
  real_T sqrtP[49];
  real_T tmp[9];
  real_T tmp_e[9];
  real_T tmp_i[9];
  real_T tmp_p[9];
  real_T tmp_m[7];
  real_T earthBF[3];
  real_T sunBF[3];
  real_T Wcov[2];
  real_T Wmean[2];
  real_T OOM;
  real_T Wmean_p;
  real_T c;
  int32_T i;
  int32_T i_p;
  int32_T kkC;
  c = alpha * alpha * (kappa + 7.0);
  Wmean[0] = 1.0 - 7.0 / c;
  Wmean[1] = 1.0 / (2.0 * c);
  Wcov[0] = ((1.0 - alpha * alpha) + beta) + Wmean[0];
  Wcov[1] = Wmean[1];
  if (Wmean[0] != 0.0) {
    OOM = Wmean[0];
    Wmean_p = Wmean[0];
    Wcov[0] /= Wmean[0];
    Wmean[0] /= Wmean[0];
    Wmean[1] /= Wmean_p;
    Wcov[1] /= OOM;
  } else {
    OOM = 1.0;
  }

  c = muDoubleScalarSqrt(c);
  for (i = 0; i < 49; i++) {
    Wmean_p = c * S[i];
    X2[i] = Wmean_p;
    X2[i + 49] = -Wmean_p;
  }

  tmp[0] = (1.0 - varargin_1[5] * varargin_1[5] * 2.0) - varargin_1[6] *
    varargin_1[6] * 2.0;
  tmp[1] = 2.0 * varargin_1[4] * varargin_1[5] + 2.0 * varargin_1[3] *
    varargin_1[6];
  tmp[2] = -2.0 * varargin_1[3] * varargin_1[5] + 2.0 * varargin_1[4] *
    varargin_1[6];
  tmp[3] = 2.0 * varargin_1[4] * varargin_1[5] - 2.0 * varargin_1[3] *
    varargin_1[6];
  tmp[4] = (1.0 - varargin_1[4] * varargin_1[4] * 2.0) - varargin_1[6] *
    varargin_1[6] * 2.0;
  tmp[5] = 2.0 * varargin_1[3] * varargin_1[4] + 2.0 * varargin_1[5] *
    varargin_1[6];
  tmp[6] = 2.0 * varargin_1[3] * varargin_1[5] + 2.0 * varargin_1[4] *
    varargin_1[6];
  tmp[7] = -2.0 * varargin_1[3] * varargin_1[4] + 2.0 * varargin_1[5] *
    varargin_1[6];
  tmp[8] = (1.0 - varargin_1[4] * varargin_1[4] * 2.0) - varargin_1[5] *
    varargin_1[5] * 2.0;
  tmp_i[0] = (1.0 - varargin_1[10] * varargin_1[10] * 2.0) - varargin_1[11] *
    varargin_1[11] * 2.0;
  tmp_i[1] = 2.0 * varargin_1[9] * varargin_1[10] + 2.0 * varargin_1[8] *
    varargin_1[11];
  tmp_i[2] = -2.0 * varargin_1[8] * varargin_1[10] + 2.0 * varargin_1[9] *
    varargin_1[11];
  tmp_i[3] = 2.0 * varargin_1[9] * varargin_1[10] - 2.0 * varargin_1[8] *
    varargin_1[11];
  tmp_i[4] = (1.0 - varargin_1[9] * varargin_1[9] * 2.0) - varargin_1[11] *
    varargin_1[11] * 2.0;
  tmp_i[5] = 2.0 * varargin_1[8] * varargin_1[9] + 2.0 * varargin_1[10] *
    varargin_1[11];
  tmp_i[6] = 2.0 * varargin_1[8] * varargin_1[10] + 2.0 * varargin_1[9] *
    varargin_1[11];
  tmp_i[7] = -2.0 * varargin_1[8] * varargin_1[9] + 2.0 * varargin_1[10] *
    varargin_1[11];
  tmp_i[8] = (1.0 - varargin_1[9] * varargin_1[9] * 2.0) - varargin_1[10] *
    varargin_1[10] * 2.0;
  for (kkC = 0; kkC < 14; kkC++) {
    for (i = 0; i < 7; i++) {
      X2[i + 7 * kkC] += X1[i];
    }

    tmp_p[0] = (1.0 - X2[7 * kkC + 2] * X2[7 * kkC + 2] * 2.0) - X2[7 * kkC + 3]
      * X2[7 * kkC + 3] * 2.0;
    tmp_p[3] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 2] + X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 3];
    tmp_p[6] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * -2.0 *
      X2[7 * kkC + 2];
    tmp_p[1] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 2] - X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 3];
    tmp_p[4] = (1.0 - X2[7 * kkC + 1] * X2[7 * kkC + 1] * 2.0) - X2[7 * kkC + 3]
      * X2[7 * kkC + 3] * 2.0;
    tmp_p[7] = X2[7 * kkC + 2] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 1];
    tmp_p[2] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 2];
    tmp_p[5] = X2[7 * kkC + 2] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * -2.0 *
      X2[7 * kkC + 1];
    tmp_p[8] = (1.0 - X2[7 * kkC + 1] * X2[7 * kkC + 1] * 2.0) - X2[7 * kkC + 2]
      * X2[7 * kkC + 2] * 2.0;
    for (i = 0; i < 3; i++) {
      sunBF[i] = 0.0;
      for (i_p = 0; i_p < 3; i_p++) {
        tmp_e[i + 3 * i_p] = 0.0;
        tmp_e[i + 3 * i_p] += tmp_p[3 * i_p] * tmp[i];
        tmp_e[i + 3 * i_p] += tmp_p[3 * i_p + 1] * tmp[i + 3];
        tmp_e[i + 3 * i_p] += tmp_p[3 * i_p + 2] * tmp[i + 6];
        sunBF[i] += tmp_e[3 * i_p + i] * varargin_1[i_p];
      }
    }

    tmp_p[0] = (1.0 - X2[7 * kkC + 2] * X2[7 * kkC + 2] * 2.0) - X2[7 * kkC + 3]
      * X2[7 * kkC + 3] * 2.0;
    tmp_p[3] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 2] + X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 3];
    tmp_p[6] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * -2.0 *
      X2[7 * kkC + 2];
    tmp_p[1] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 2] - X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 3];
    tmp_p[4] = (1.0 - X2[7 * kkC + 1] * X2[7 * kkC + 1] * 2.0) - X2[7 * kkC + 3]
      * X2[7 * kkC + 3] * 2.0;
    tmp_p[7] = X2[7 * kkC + 2] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 1];
    tmp_p[2] = X2[7 * kkC + 1] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * 2.0 * X2
      [7 * kkC + 2];
    tmp_p[5] = X2[7 * kkC + 2] * 2.0 * X2[7 * kkC + 3] + X2[7 * kkC] * -2.0 *
      X2[7 * kkC + 1];
    tmp_p[8] = (1.0 - X2[7 * kkC + 1] * X2[7 * kkC + 1] * 2.0) - X2[7 * kkC + 2]
      * X2[7 * kkC + 2] * 2.0;
    Y2[7 * kkC] = muDoubleScalarAtan2(sunBF[0], sunBF[2]);
    Y2[7 * kkC + 1] = muDoubleScalarAtan2(sunBF[1], sunBF[2]);
    for (i = 0; i < 3; i++) {
      earthBF[i] = 0.0;
      for (i_p = 0; i_p < 3; i_p++) {
        tmp_e[i + 3 * i_p] = 0.0;
        tmp_e[i + 3 * i_p] += tmp_p[3 * i_p] * tmp_i[i];
        tmp_e[i + 3 * i_p] += tmp_p[3 * i_p + 1] * tmp_i[i + 3];
        tmp_e[i + 3 * i_p] += tmp_p[3 * i_p + 2] * tmp_i[i + 6];
        earthBF[i] += tmp_e[3 * i_p + i] * varargin_1[i_p + 6];
      }

      Y2[(i + 7 * kkC) + 4] = X2[(7 * kkC + i) + 4];
    }

    Y2[7 * kkC + 2] = muDoubleScalarAtan2(earthBF[0], earthBF[2]);
    Y2[7 * kkC + 3] = muDoubleScalarAtan2(earthBF[1], earthBF[2]);
  }

  tmp[0] = (1.0 - varargin_1[5] * varargin_1[5] * 2.0) - varargin_1[6] *
    varargin_1[6] * 2.0;
  tmp[1] = 2.0 * varargin_1[4] * varargin_1[5] + 2.0 * varargin_1[3] *
    varargin_1[6];
  tmp[2] = -2.0 * varargin_1[3] * varargin_1[5] + 2.0 * varargin_1[4] *
    varargin_1[6];
  tmp[3] = 2.0 * varargin_1[4] * varargin_1[5] - 2.0 * varargin_1[3] *
    varargin_1[6];
  tmp[4] = (1.0 - varargin_1[4] * varargin_1[4] * 2.0) - varargin_1[6] *
    varargin_1[6] * 2.0;
  tmp[5] = 2.0 * varargin_1[3] * varargin_1[4] + 2.0 * varargin_1[5] *
    varargin_1[6];
  tmp[6] = 2.0 * varargin_1[3] * varargin_1[5] + 2.0 * varargin_1[4] *
    varargin_1[6];
  tmp[7] = -2.0 * varargin_1[3] * varargin_1[4] + 2.0 * varargin_1[5] *
    varargin_1[6];
  tmp[8] = (1.0 - varargin_1[4] * varargin_1[4] * 2.0) - varargin_1[5] *
    varargin_1[5] * 2.0;
  tmp_i[0] = (1.0 - X1[2] * X1[2] * 2.0) - X1[3] * X1[3] * 2.0;
  tmp_i[3] = 2.0 * X1[1] * X1[2] + 2.0 * X1[0] * X1[3];
  tmp_i[6] = -2.0 * X1[0] * X1[2] + 2.0 * X1[1] * X1[3];
  tmp_i[1] = 2.0 * X1[1] * X1[2] - 2.0 * X1[0] * X1[3];
  tmp_i[4] = (1.0 - X1[1] * X1[1] * 2.0) - X1[3] * X1[3] * 2.0;
  tmp_i[7] = 2.0 * X1[0] * X1[1] + 2.0 * X1[2] * X1[3];
  tmp_i[2] = 2.0 * X1[0] * X1[2] + 2.0 * X1[1] * X1[3];
  tmp_i[5] = -2.0 * X1[0] * X1[1] + 2.0 * X1[2] * X1[3];
  tmp_i[8] = (1.0 - X1[1] * X1[1] * 2.0) - X1[2] * X1[2] * 2.0;
  for (i = 0; i < 3; i++) {
    sunBF[i] = 0.0;
    for (i_p = 0; i_p < 3; i_p++) {
      tmp_p[i + 3 * i_p] = 0.0;
      tmp_p[i + 3 * i_p] += tmp_i[3 * i_p] * tmp[i];
      tmp_p[i + 3 * i_p] += tmp_i[3 * i_p + 1] * tmp[i + 3];
      tmp_p[i + 3 * i_p] += tmp_i[3 * i_p + 2] * tmp[i + 6];
      sunBF[i] += tmp_p[3 * i_p + i] * varargin_1[i_p];
    }
  }

  tmp[0] = (1.0 - varargin_1[10] * varargin_1[10] * 2.0) - varargin_1[11] *
    varargin_1[11] * 2.0;
  tmp[1] = 2.0 * varargin_1[9] * varargin_1[10] + 2.0 * varargin_1[8] *
    varargin_1[11];
  tmp[2] = -2.0 * varargin_1[8] * varargin_1[10] + 2.0 * varargin_1[9] *
    varargin_1[11];
  tmp[3] = 2.0 * varargin_1[9] * varargin_1[10] - 2.0 * varargin_1[8] *
    varargin_1[11];
  tmp[4] = (1.0 - varargin_1[9] * varargin_1[9] * 2.0) - varargin_1[11] *
    varargin_1[11] * 2.0;
  tmp[5] = 2.0 * varargin_1[8] * varargin_1[9] + 2.0 * varargin_1[10] *
    varargin_1[11];
  tmp[6] = 2.0 * varargin_1[8] * varargin_1[10] + 2.0 * varargin_1[9] *
    varargin_1[11];
  tmp[7] = -2.0 * varargin_1[8] * varargin_1[9] + 2.0 * varargin_1[10] *
    varargin_1[11];
  tmp[8] = (1.0 - varargin_1[9] * varargin_1[9] * 2.0) - varargin_1[10] *
    varargin_1[10] * 2.0;
  tmp_i[0] = (1.0 - X1[2] * X1[2] * 2.0) - X1[3] * X1[3] * 2.0;
  tmp_i[3] = 2.0 * X1[1] * X1[2] + 2.0 * X1[0] * X1[3];
  tmp_i[6] = -2.0 * X1[0] * X1[2] + 2.0 * X1[1] * X1[3];
  tmp_i[1] = 2.0 * X1[1] * X1[2] - 2.0 * X1[0] * X1[3];
  tmp_i[4] = (1.0 - X1[1] * X1[1] * 2.0) - X1[3] * X1[3] * 2.0;
  tmp_i[7] = 2.0 * X1[0] * X1[1] + 2.0 * X1[2] * X1[3];
  tmp_i[2] = 2.0 * X1[0] * X1[2] + 2.0 * X1[1] * X1[3];
  tmp_i[5] = -2.0 * X1[0] * X1[1] + 2.0 * X1[2] * X1[3];
  tmp_i[8] = (1.0 - X1[1] * X1[1] * 2.0) - X1[2] * X1[2] * 2.0;
  for (i = 0; i < 3; i++) {
    earthBF[i] = 0.0;
    for (i_p = 0; i_p < 3; i_p++) {
      tmp_p[i + 3 * i_p] = 0.0;
      tmp_p[i + 3 * i_p] += tmp_i[3 * i_p] * tmp[i];
      tmp_p[i + 3 * i_p] += tmp_i[3 * i_p + 1] * tmp[i + 3];
      tmp_p[i + 3 * i_p] += tmp_i[3 * i_p + 2] * tmp[i + 6];
      earthBF[i] += tmp_p[3 * i_p + i] * varargin_1[i_p + 6];
    }
  }

  tmp_m[0] = muDoubleScalarAtan2(sunBF[0], sunBF[2]);
  tmp_m[1] = muDoubleScalarAtan2(sunBF[1], sunBF[2]);
  tmp_m[2] = muDoubleScalarAtan2(earthBF[0], earthBF[2]);
  tmp_m[3] = muDoubleScalarAtan2(earthBF[1], earthBF[2]);
  tmp_m[4] = X1[4];
  tmp_m[5] = X1[5];
  tmp_m[6] = X1[6];
  UTMeanCovSqrt_NAxRpVx4(Wmean, Wcov, OOM, tmp_m, Y2, X1, X2, Ymean, Sy, Pxy);
  memset(&sqrtP[0], 0, 49U * sizeof(real_T));
  for (kkC = 0; kkC < 7; kkC++) {
    sqrtP[kkC + 7 * kkC] = 1.0;
  }

  qrFactor_dow5EKjD(sqrtP, Sy, Rs);
}
