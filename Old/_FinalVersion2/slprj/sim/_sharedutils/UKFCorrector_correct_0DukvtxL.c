#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "UKFCorrector_correctStateAndSqrtCovariance_W9dZy7uh.h"
#include "UTMeanCovSqrt_pLAavUrZ.h"
#include "anon_yDH48dhx.h"
#include "mwmathutil.h"
#include "qr_rXyRqJVO.h"
#include "UKFCorrector_correct_0DukvtxL.h"

void UKFCorrector_correct_0DukvtxL(const real_T z[2], const real_T Rs[4], real_T
  X1[10], real_T S[100], const real_T varargin_1[7])
{
  __m128d tmp_i;
  __m128d tmp_m;
  real_T X2[200];
  real_T S_p[100];
  real_T Y2[40];
  real_T Pxy[20];
  real_T tmp[9];
  real_T tmp_e[9];
  real_T tmp_p[9];
  real_T a__1[8];
  real_T y_p[8];
  real_T Sy[4];
  real_T y[4];
  real_T sunBF[3];
  real_T Ymean[2];
  real_T z_p[2];
  int32_T coffset;
  int32_T i;
  int32_T kkC;
  int8_T b_I[4];
  for (coffset = 0; coffset <= 98; coffset += 2) {
    tmp_m = _mm_loadu_pd(&S[coffset]);
    tmp_m = _mm_mul_pd(_mm_set1_pd(0.0031622776601683794), tmp_m);
    _mm_storeu_pd(&X2[coffset], tmp_m);
    _mm_storeu_pd(&X2[coffset + 100], _mm_mul_pd(tmp_m, _mm_set1_pd(-1.0)));
  }

  for (kkC = 0; kkC < 20; kkC++) {
    for (coffset = 0; coffset <= 8; coffset += 2) {
      tmp_m = _mm_loadu_pd(&X2[10 * kkC + coffset]);
      tmp_i = _mm_loadu_pd(&X1[coffset]);
      _mm_storeu_pd(&X2[coffset + 10 * kkC], _mm_add_pd(tmp_m, tmp_i));
    }
  }

  anon_yDH48dhx(&varargin_1[3], tmp);
  for (kkC = 0; kkC < 20; kkC++) {
    anon_yDH48dhx(&(*(real_T (*)[10])&X2[10 * kkC])[0], tmp_p);
    for (coffset = 0; coffset < 3; coffset++) {
      sunBF[coffset] = 0.0;
      for (i = 0; i < 3; i++) {
        tmp_e[coffset + 3 * i] = 0.0;
        tmp_e[coffset + 3 * i] += tmp_p[3 * i] * tmp[coffset];
        tmp_e[coffset + 3 * i] += tmp_p[3 * i + 1] * tmp[coffset + 3];
        tmp_e[coffset + 3 * i] += tmp_p[3 * i + 2] * tmp[coffset + 6];
        sunBF[coffset] += tmp_e[3 * i + coffset] * varargin_1[i];
      }
    }

    Y2[kkC << 1] = muDoubleScalarAtan2(sunBF[0], sunBF[2]);
    Y2[(kkC << 1) + 1] = muDoubleScalarAtan2(sunBF[1], sunBF[2]);
  }

  anon_yDH48dhx(&varargin_1[3], tmp);
  anon_yDH48dhx(&X1[0], tmp_p);
  for (coffset = 0; coffset < 3; coffset++) {
    sunBF[coffset] = 0.0;
    for (i = 0; i < 3; i++) {
      tmp_e[coffset + 3 * i] = 0.0;
      tmp_e[coffset + 3 * i] += tmp_p[3 * i] * tmp[coffset];
      tmp_e[coffset + 3 * i] += tmp_p[3 * i + 1] * tmp[coffset + 3];
      tmp_e[coffset + 3 * i] += tmp_p[3 * i + 2] * tmp[coffset + 6];
      sunBF[coffset] += tmp_e[3 * i + coffset] * varargin_1[i];
    }
  }

  z_p[0] = muDoubleScalarAtan2(sunBF[0], sunBF[2]);
  z_p[1] = muDoubleScalarAtan2(sunBF[1], sunBF[2]);
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
    for (i = 0; i < 10; i++) {
      S_p[i + 10 * coffset] = S[10 * i + coffset];
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
