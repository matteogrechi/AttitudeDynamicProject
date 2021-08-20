#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "cholUpdateFactor_tmrEyo8Z.h"
#include "qrFactor_E7n99mah.h"
#include "qr_6T1hJWrH.h"
#include "simulateStarSensor_7u1dtyZ4.h"
#include "UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_KZ1pDJze.h"

void UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_KZ1pDJze(
  const real_T Rs[36], const real_T X1[7], const real_T S[49], const real_T
  varargin_1[13], real_T Ymean[6], real_T Pxy[42], real_T Sy[36])
{
  __m128d tmp_e;
  __m128d tmp_p;
  real_T X2[98];
  real_T Y2[84];
  real_T a__1[84];
  real_T tmp[84];
  real_T X2_p[42];
  real_T b_I[36];
  real_T tempY[6];
  real_T tempY_p[6];
  real_T sqrtP;
  int32_T i;
  int32_T i_p;
  int32_T kkC;
  for (i = 0; i <= 46; i += 2) {
    tmp_e = _mm_mul_pd(_mm_set1_pd(0.0026457513110645908), _mm_loadu_pd(&S[i]));
    _mm_storeu_pd(&X2[i], tmp_e);
    _mm_storeu_pd(&X2[i + 49], _mm_mul_pd(tmp_e, _mm_set1_pd(-1.0)));
  }

  for (i = 48; i < 49; i++) {
    sqrtP = 0.0026457513110645908 * S[i];
    X2[i] = sqrtP;
    X2[i + 49] = -sqrtP;
  }

  for (kkC = 0; kkC < 14; kkC++) {
    for (i = 0; i < 7; i++) {
      X2[i + 7 * kkC] += X1[i];
    }
  }

  for (kkC = 0; kkC < 14; kkC++) {
    simulateStarSensor_7u1dtyZ4(&X2[7 * kkC], varargin_1, &Y2[6 * kkC]);
  }

  simulateStarSensor_7u1dtyZ4(X1, varargin_1, tempY);
  for (i = 0; i < 6; i++) {
    Ymean[i] = tempY[i];
  }

  for (kkC = 0; kkC < 14; kkC++) {
    for (i = 0; i <= 4; i += 2) {
      tmp_e = _mm_loadu_pd(&Y2[6 * kkC + i]);
      tmp_p = _mm_loadu_pd(&Ymean[i]);
      _mm_storeu_pd(&Ymean[i], _mm_add_pd(_mm_mul_pd(tmp_e, _mm_set1_pd
        (-0.071428642857214286)), tmp_p));
    }
  }

  for (i = 0; i <= 4; i += 2) {
    tmp_e = _mm_loadu_pd(&Ymean[i]);
    _mm_storeu_pd(&Ymean[i], _mm_mul_pd(tmp_e, _mm_set1_pd(-999999.0)));
  }

  for (kkC = 0; kkC < 14; kkC++) {
    for (i = 0; i <= 4; i += 2) {
      tmp_e = _mm_loadu_pd(&Y2[6 * kkC + i]);
      tmp_p = _mm_loadu_pd(&Ymean[i]);
      _mm_storeu_pd(&Y2[i + 6 * kkC], _mm_sub_pd(tmp_e, tmp_p));
    }
  }

  for (i = 0; i < 6; i++) {
    for (kkC = 0; kkC < 14; kkC++) {
      tmp[kkC + 14 * i] = Y2[6 * kkC + i] * 0.26726137554314555;
    }
  }

  qr_6T1hJWrH(tmp, a__1, Sy);
  for (i = 0; i <= 4; i += 2) {
    tmp_e = _mm_loadu_pd(&tempY[i]);
    tmp_p = _mm_loadu_pd(&Ymean[i]);
    _mm_storeu_pd(&tempY_p[i], _mm_sub_pd(tmp_e, tmp_p));
  }

  cholUpdateFactor_tmrEyo8Z(Sy, tempY_p);
  for (kkC = 0; kkC < 14; kkC++) {
    for (i = 0; i < 7; i++) {
      X2[i + 7 * kkC] -= X1[i];
    }
  }

  for (i = 0; i < 7; i++) {
    for (kkC = 0; kkC < 6; kkC++) {
      X2_p[i + 7 * kkC] = 0.0;
      for (i_p = 0; i_p < 14; i_p++) {
        X2_p[i + 7 * kkC] += X2[7 * i_p + i] * Y2[6 * i_p + kkC];
      }
    }
  }

  for (i = 0; i <= 40; i += 2) {
    tmp_e = _mm_loadu_pd(&X2_p[i]);
    _mm_storeu_pd(&Pxy[i], _mm_mul_pd(tmp_e, _mm_set1_pd(71428.571428571435)));
  }

  memset(&b_I[0], 0, 36U * sizeof(real_T));
  for (kkC = 0; kkC < 6; kkC++) {
    b_I[kkC + 6 * kkC] = 1.0;
  }

  for (i = 0; i <= 34; i += 2) {
    tmp_e = _mm_loadu_pd(&Sy[i]);
    _mm_storeu_pd(&Sy[i], _mm_mul_pd(_mm_set1_pd(999.999499999875), tmp_e));
  }

  qrFactor_E7n99mah(b_I, Sy, Rs);
}
