#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "UTMeanCovSqrt_ZgAeAiK1.h"
#include "cholUpdateFactor_jNd0Eom7.h"
#include "qr_keHD9uHB.h"
#include "simulateStarSensor_rYa9NSHc.h"
#include "trisolve_8DwM4HNU.h"
#include "trisolve_ITEQjUXF.h"
#include "UKFCorrector_correct_Nmtsqayt.h"

void UKFCorrector_correct_Nmtsqayt(const real_T z[6], const real_T Rs[36],
  real_T X1[4], real_T S[16], const real_T varargin_1[13])
{
  __m128d tmp;
  real_T a__1[72];
  real_T y_p[72];
  real_T Y2[48];
  real_T Sy[36];
  real_T b_I[36];
  real_T y[36];
  real_T X2[32];
  real_T B[24];
  real_T K[24];
  real_T S_p[16];
  real_T Ymean[6];
  real_T z_p[6];
  real_T s;
  int32_T aoffset;
  int32_T b_k;
  int32_T c_i;
  int32_T coffset;
  int32_T kkC;
  for (kkC = 0; kkC <= 14; kkC += 2) {
    tmp = _mm_loadu_pd(&S[kkC]);
    tmp = _mm_mul_pd(_mm_set1_pd(0.002), tmp);
    _mm_storeu_pd(&X2[kkC], tmp);
    _mm_storeu_pd(&X2[kkC + 16], _mm_mul_pd(tmp, _mm_set1_pd(-1.0)));
  }

  for (kkC = 0; kkC < 8; kkC++) {
    X2[kkC << 2] += X1[0];
    X2[(kkC << 2) + 1] += X1[1];
    X2[(kkC << 2) + 2] += X1[2];
    X2[(kkC << 2) + 3] += X1[3];
  }

  for (kkC = 0; kkC < 8; kkC++) {
    simulateStarSensor_rYa9NSHc(&X2[kkC << 2], varargin_1, &Y2[6 * kkC]);
  }

  simulateStarSensor_rYa9NSHc(X1, varargin_1, z_p);
  UTMeanCovSqrt_ZgAeAiK1(z_p, Y2, X1, X2, Ymean, Sy, K);
  memset(&b_I[0], 0, 36U * sizeof(real_T));
  for (kkC = 0; kkC < 6; kkC++) {
    b_I[kkC + 6 * kkC] = 1.0;
  }

  for (kkC = 0; kkC < 6; kkC++) {
    coffset = kkC * 6;
    for (c_i = 0; c_i < 6; c_i++) {
      aoffset = c_i * 6;
      s = 0.0;
      for (b_k = 0; b_k < 6; b_k++) {
        s += b_I[b_k * 6 + kkC] * Sy[aoffset + b_k];
      }

      y[coffset + c_i] = s;
      y_p[c_i + 12 * kkC] = y[6 * kkC + c_i];
      y_p[(c_i + 12 * kkC) + 6] = Rs[6 * c_i + kkC];
    }
  }

  qr_keHD9uHB(y_p, a__1, b_I);
  for (kkC = 0; kkC < 6; kkC++) {
    for (c_i = 0; c_i < 6; c_i++) {
      Sy[c_i + 6 * kkC] = b_I[6 * c_i + kkC];
    }
  }

  for (kkC = 0; kkC < 4; kkC++) {
    for (c_i = 0; c_i < 6; c_i++) {
      B[c_i + 6 * kkC] = K[(c_i << 2) + kkC];
    }
  }

  for (kkC = 0; kkC < 4; kkC++) {
    for (c_i = 0; c_i < 6; c_i++) {
      K[c_i + 6 * kkC] = B[6 * kkC + c_i];
    }
  }

  trisolve_8DwM4HNU(Sy, K);
  for (kkC = 0; kkC < 4; kkC++) {
    for (c_i = 0; c_i < 6; c_i++) {
      B[c_i + 6 * kkC] = K[6 * kkC + c_i];
    }
  }

  for (kkC = 0; kkC < 6; kkC++) {
    for (c_i = 0; c_i < 6; c_i++) {
      b_I[c_i + 6 * kkC] = Sy[6 * c_i + kkC];
    }
  }

  trisolve_ITEQjUXF(b_I, B);
  for (kkC = 0; kkC < 6; kkC++) {
    K[kkC << 2] = B[kkC];
    K[(kkC << 2) + 1] = B[kkC + 6];
    K[(kkC << 2) + 2] = B[kkC + 12];
    K[(kkC << 2) + 3] = B[kkC + 18];
  }

  for (kkC = 0; kkC < 4; kkC++) {
    S_p[kkC << 2] = S[kkC];
    S_p[(kkC << 2) + 1] = S[kkC + 4];
    S_p[(kkC << 2) + 2] = S[kkC + 8];
    S_p[(kkC << 2) + 3] = S[kkC + 12];
  }

  memcpy(&S[0], &S_p[0], sizeof(real_T) << 4U);
  for (kkC = 0; kkC < 6; kkC++) {
    for (c_i = 0; c_i < 4; c_i++) {
      B[c_i + (kkC << 2)] = 0.0;
      for (b_k = 0; b_k < 6; b_k++) {
        B[c_i + (kkC << 2)] += K[(b_k << 2) + c_i] * Sy[6 * kkC + b_k];
      }
    }
  }

  cholUpdateFactor_jNd0Eom7(S, B);
  for (kkC = 0; kkC <= 4; kkC += 2) {
    tmp = _mm_loadu_pd(&Ymean[kkC]);
    _mm_storeu_pd(&z_p[kkC], _mm_sub_pd(_mm_loadu_pd(&z[kkC]), tmp));
  }

  for (kkC = 0; kkC < 4; kkC++) {
    s = 0.0;
    for (c_i = 0; c_i < 6; c_i++) {
      s += K[(c_i << 2) + kkC] * z_p[c_i];
    }

    X1[kkC] += s;
  }
}
