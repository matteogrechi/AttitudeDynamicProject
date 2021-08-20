#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "UTMeanCovSqrt_8LxCKFVs.h"
#include "attitudePropagation_I8pm9OaR.h"
#include "UKFPredictorNonAdditive_predict_IAYc2Lvm.h"

void UKFPredictorNonAdditive_predict_IAYc2Lvm(const real_T Qs[36], real_T X1[7],
  real_T S[49], const real_T varargin_1[3])
{
  __m128d tmp_p;
  real_T Y2[182];
  real_T X2state[98];
  real_T X2noise[72];
  real_T sqrtP[49];
  real_T X1_p[7];
  real_T Y1[7];
  real_T tmp[6];
  real_T sqrtP_p;
  int32_T i;
  int32_T i_p;
  int32_T kkC;
  for (i = 0; i <= 46; i += 2) {
    tmp_p = _mm_loadu_pd(&S[i]);
    tmp_p = _mm_mul_pd(_mm_set1_pd(0.0036055512754639891), tmp_p);
    _mm_storeu_pd(&X2state[i], tmp_p);
    _mm_storeu_pd(&X2state[i + 49], _mm_mul_pd(tmp_p, _mm_set1_pd(-1.0)));
  }

  for (i = 48; i < 49; i++) {
    sqrtP_p = 0.0036055512754639891 * S[i];
    X2state[i] = sqrtP_p;
    X2state[i + 49] = -sqrtP_p;
  }

  for (kkC = 0; kkC < 14; kkC++) {
    for (i = 0; i < 7; i++) {
      X2state[i + 7 * kkC] += X1[i];
    }
  }

  for (i = 0; i <= 34; i += 2) {
    tmp_p = _mm_mul_pd(_mm_set1_pd(0.0036055512754639891), _mm_loadu_pd(&Qs[i]));
    _mm_storeu_pd(&X2noise[i], tmp_p);
    _mm_storeu_pd(&X2noise[i + 36], _mm_mul_pd(tmp_p, _mm_set1_pd(-1.0)));
  }

  for (i = 0; i < 7; i++) {
    Y1[i] = X1[i];
  }

  for (i = 0; i < 6; i++) {
    tmp[i] = 0.0;
  }

  attitudePropagation_I8pm9OaR(Y1, tmp, varargin_1);
  memset(&Y2[0], 0, 182U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    tmp[i] = 0.0;
  }

  for (kkC = 0; kkC < 14; kkC++) {
    for (i = 0; i < 7; i++) {
      Y2[i + 7 * kkC] = X2state[7 * kkC + i];
    }

    attitudePropagation_I8pm9OaR(&Y2[7 * kkC], tmp, varargin_1);
  }

  for (kkC = 0; kkC < 12; kkC++) {
    for (i = 0; i < 7; i++) {
      Y2[i + 7 * (kkC + 14)] = X1[i];
    }

    attitudePropagation_I8pm9OaR(&Y2[7 * (kkC + 14)], &X2noise[6 * kkC],
      varargin_1);
  }

  for (i_p = 0; i_p < 7; i_p++) {
    X1_p[i_p] = X1[i_p];
  }

  UTMeanCovSqrt_8LxCKFVs(Y1, Y2, X1_p, X2state, X1, S, sqrtP);
}
