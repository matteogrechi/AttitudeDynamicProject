#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include "cholUpdateFactor_0HFnU140.h"
#include "qr_2c5xYE2h.h"
#include "UTMeanCovSqrt_8LxCKFVs.h"

void UTMeanCovSqrt_8LxCKFVs(real_T Y1[7], real_T Y2[182], const real_T X1[7],
  real_T X2[98], real_T Ymean[7], real_T Sy[49], real_T Pxy[49])
{
  __m128d tmp_p;
  real_T a__1[182];
  real_T tmp[182];
  real_T X2_p[49];
  real_T Ymean_p;
  int32_T i;
  int32_T i_p;
  int32_T kk;
  for (i = 0; i < 7; i++) {
    Ymean[i] = Y1[i];
  }

  for (kk = 0; kk < 26; kk++) {
    for (i = 0; i < 7; i++) {
      Ymean[i] += Y2[7 * kk + i] * -0.03846157692311538;
    }
  }

  for (i = 0; i < 7; i++) {
    Ymean_p = Ymean[i] * -999999.00000000012;
    Ymean[i] = Ymean_p;
    Y1[i] -= Ymean_p;
  }

  for (kk = 0; kk < 26; kk++) {
    for (i = 0; i < 7; i++) {
      Y2[i + 7 * kk] -= Ymean[i];
    }
  }

  for (i = 0; i < 7; i++) {
    for (kk = 0; kk < 26; kk++) {
      tmp[kk + 26 * i] = Y2[7 * kk + i] * 0.19611623319632512;
    }
  }

  qr_2c5xYE2h(tmp, a__1, Sy);
  cholUpdateFactor_0HFnU140(Sy, Y1);
  for (i = 0; i <= 46; i += 2) {
    tmp_p = _mm_loadu_pd(&Sy[i]);
    _mm_storeu_pd(&Sy[i], _mm_mul_pd(_mm_set1_pd(999.99949999987507), tmp_p));
  }

  for (i = 48; i < 49; i++) {
    Sy[i] *= 999.99949999987507;
  }

  for (kk = 0; kk < 14; kk++) {
    for (i = 0; i < 7; i++) {
      X2[i + 7 * kk] -= X1[i];
    }
  }

  for (i = 0; i < 7; i++) {
    for (kk = 0; kk < 7; kk++) {
      X2_p[i + 7 * kk] = 0.0;
      for (i_p = 0; i_p < 14; i_p++) {
        X2_p[i + 7 * kk] += X2[7 * i_p + i] * Y2[7 * i_p + kk];
      }
    }
  }

  for (i = 0; i <= 46; i += 2) {
    tmp_p = _mm_loadu_pd(&X2_p[i]);
    _mm_storeu_pd(&Pxy[i], _mm_mul_pd(tmp_p, _mm_set1_pd(38461.538461538461)));
  }

  for (i = 48; i < 49; i++) {
    Pxy[i] = X2_p[i] * 38461.538461538461;
  }
}
