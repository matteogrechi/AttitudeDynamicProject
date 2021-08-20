#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh.h"
#include "UTMeanCovSqrt_pLAavUrZ.h"
#include "qr_rXyRqJVO.h"
#include "UKFCorrector_correct_jE8bEoap.h"

void UKFCorrector_correct_jE8bEoap(const real_T z[2], const real_T Rs[4], real_T
  X1[10], real_T S[100])
{
  __m128d tmp;
  __m128d tmp_p;
  real_T X2[200];
  real_T S_p[100];
  real_T Y2[40];
  real_T Pxy[20];
  real_T a__1[8];
  real_T y_p[8];
  real_T Sy[4];
  real_T y[4];
  real_T Ymean[2];
  real_T z_p[2];
  int32_T coffset;
  int32_T kkC;
  int8_T b_I[4];
  for (coffset = 0; coffset <= 98; coffset += 2) {
    tmp_p = _mm_loadu_pd(&S[coffset]);
    tmp_p = _mm_mul_pd(_mm_set1_pd(0.0031622776601683794), tmp_p);
    _mm_storeu_pd(&X2[coffset], tmp_p);
    _mm_storeu_pd(&X2[coffset + 100], _mm_mul_pd(tmp_p, _mm_set1_pd(-1.0)));
  }

  for (kkC = 0; kkC < 20; kkC++) {
    for (coffset = 0; coffset <= 8; coffset += 2) {
      tmp_p = _mm_loadu_pd(&X2[10 * kkC + coffset]);
      tmp = _mm_loadu_pd(&X1[coffset]);
      _mm_storeu_pd(&X2[coffset + 10 * kkC], _mm_add_pd(tmp_p, tmp));
    }

    Y2[kkC << 1] = 0.0;
    Y2[(kkC << 1) + 1] = 0.0;
  }

  z_p[0] = 0.0;
  z_p[1] = 0.0;
  UTMeanCovSqrt_pLAavUrZ(z_p, Y2, X1, X2, Ymean, Sy, Pxy);
  b_I[1] = 0;
  b_I[2] = 0;
  b_I[0] = 1;
  b_I[3] = 1;
  for (kkC = 0; kkC < 2; kkC++) {
    coffset = kkC << 1;
    y[coffset] = (real_T)b_I[kkC + 2] * Sy[1] + Sy[0] * (real_T)b_I[kkC];
    y[coffset + 1] = (real_T)b_I[kkC + 2] * Sy[3] + Sy[2] * (real_T)b_I[kkC];
  }

  y_p[0] = y[0];
  y_p[2] = Rs[0];
  y_p[1] = y[1];
  y_p[3] = Rs[2];
  y_p[4] = y[2];
  y_p[6] = Rs[1];
  y_p[5] = y[3];
  y_p[7] = Rs[3];
  qr_rXyRqJVO(y_p, a__1, Sy);
  for (coffset = 0; coffset < 10; coffset++) {
    for (kkC = 0; kkC < 10; kkC++) {
      S_p[kkC + 10 * coffset] = S[10 * kkC + coffset];
    }
  }

  memcpy(&S[0], &S_p[0], 100U * sizeof(real_T));
  z_p[0] = z[0] - Ymean[0];
  y[0] = Sy[0];
  y[1] = Sy[2];
  z_p[1] = z[1] - Ymean[1];
  y[2] = Sy[1];
  y[3] = Sy[3];
  UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh(X1, S, z_p, Pxy, y);
}
