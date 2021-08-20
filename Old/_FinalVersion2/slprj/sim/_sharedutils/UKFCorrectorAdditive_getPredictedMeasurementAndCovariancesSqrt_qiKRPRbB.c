#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "UTMeanCovSqrt_rJd3L18M.h"
#include "qr_3htvnHzX.h"
#include "UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_qiKRPRbB.h"

void UKFCorrectorAdditive_getPredictedMeasurementAndCovariancesSqrt_qiKRPRbB(
  const real_T Rs[9], const real_T X1[10], const real_T S[100], real_T Ymean[3],
  real_T Pxy[30], real_T Sy[9])
{
  __m128d tmp;
  real_T X2[200];
  real_T Y2[60];
  real_T a__1[18];
  real_T y_p[18];
  real_T b_I[9];
  real_T y[9];
  real_T X1_p[3];
  int32_T aoffset;
  int32_T coffset;
  int32_T i;
  int32_T kkC;
  for (coffset = 0; coffset <= 98; coffset += 2) {
    tmp = _mm_mul_pd(_mm_set1_pd(0.0031622776601683794), _mm_loadu_pd(&S[coffset]));
    _mm_storeu_pd(&X2[coffset], tmp);
    _mm_storeu_pd(&X2[coffset + 100], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (kkC = 0; kkC < 20; kkC++) {
    for (coffset = 0; coffset <= 8; coffset += 2) {
      tmp = _mm_loadu_pd(&X2[10 * kkC + coffset]);
      _mm_storeu_pd(&X2[coffset + 10 * kkC], _mm_add_pd(tmp, _mm_loadu_pd
        (&X1[coffset])));
    }

    Y2[3 * kkC] = X2[10 * kkC + 4] + X2[10 * kkC + 7];
    Y2[3 * kkC + 1] = X2[10 * kkC + 5] + X2[10 * kkC + 8];
    Y2[3 * kkC + 2] = X2[10 * kkC + 6] + X2[10 * kkC + 9];
  }

  X1_p[0] = X1[4] + X1[7];
  X1_p[1] = X1[5] + X1[8];
  X1_p[2] = X1[6] + X1[9];
  UTMeanCovSqrt_rJd3L18M(X1_p, Y2, X1, X2, Ymean, Sy, Pxy);
  memset(&b_I[0], 0, 9U * sizeof(real_T));
  b_I[0] = 1.0;
  b_I[4] = 1.0;
  b_I[8] = 1.0;
  for (kkC = 0; kkC < 3; kkC++) {
    coffset = kkC * 3;
    for (i = 0; i < 3; i++) {
      aoffset = i * 3;
      y[coffset + i] = (Sy[aoffset + 1] * b_I[kkC + 3] + Sy[aoffset] * b_I[kkC])
        + Sy[aoffset + 2] * b_I[kkC + 6];
    }
  }

  for (coffset = 0; coffset < 3; coffset++) {
    y_p[6 * coffset] = y[3 * coffset];
    y_p[6 * coffset + 3] = Rs[coffset];
    y_p[6 * coffset + 1] = y[3 * coffset + 1];
    y_p[6 * coffset + 4] = Rs[coffset + 3];
    y_p[6 * coffset + 2] = y[3 * coffset + 2];
    y_p[6 * coffset + 5] = Rs[coffset + 6];
  }

  qr_3htvnHzX(y_p, a__1, b_I);
  for (coffset = 0; coffset < 3; coffset++) {
    Sy[3 * coffset] = b_I[coffset];
    Sy[3 * coffset + 1] = b_I[coffset + 3];
    Sy[3 * coffset + 2] = b_I[coffset + 6];
  }
}
