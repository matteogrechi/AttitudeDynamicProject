#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "cholUpdateFactor_PphexLBK.h"
#include "qr_AgyVYBEd.h"
#include "UTMeanCovSqrt_dhYnfSkp.h"

void UTMeanCovSqrt_dhYnfSkp(real_T Y1[10], real_T Y2[200], const real_T X1[10],
  real_T X2[200], real_T Ymean[10], real_T Sy[100], real_T Pxy[100])
{
  __m128d tmp_e;
  __m128d tmp_p;
  real_T a__1[200];
  real_T tmp[200];
  real_T X2_p[100];
  int32_T i;
  int32_T i_p;
  int32_T kk;
  memcpy(&Ymean[0], &Y1[0], 10U * sizeof(real_T));
  for (kk = 0; kk < 20; kk++) {
    for (i = 0; i <= 8; i += 2) {
      tmp_p = _mm_loadu_pd(&Y2[10 * kk + i]);
      tmp_e = _mm_loadu_pd(&Ymean[i]);
      _mm_storeu_pd(&Ymean[i], _mm_add_pd(_mm_mul_pd(tmp_p, _mm_set1_pd
        (-0.05000005000005)), tmp_e));
    }
  }

  for (i = 0; i <= 8; i += 2) {
    tmp_p = _mm_loadu_pd(&Ymean[i]);
    tmp_p = _mm_mul_pd(tmp_p, _mm_set1_pd(-999999.00000000012));
    tmp_e = _mm_loadu_pd(&Y1[i]);
    _mm_storeu_pd(&Ymean[i], tmp_p);
    _mm_storeu_pd(&Y1[i], _mm_sub_pd(tmp_e, tmp_p));
  }

  for (kk = 0; kk < 20; kk++) {
    for (i = 0; i <= 8; i += 2) {
      tmp_p = _mm_loadu_pd(&Y2[10 * kk + i]);
      tmp_e = _mm_loadu_pd(&Ymean[i]);
      _mm_storeu_pd(&Y2[i + 10 * kk], _mm_sub_pd(tmp_p, tmp_e));
    }
  }

  for (i = 0; i < 10; i++) {
    for (kk = 0; kk < 20; kk++) {
      tmp[kk + 20 * i] = Y2[10 * kk + i] * 0.22360690955346169;
    }
  }

  qr_AgyVYBEd(tmp, a__1, Sy);
  cholUpdateFactor_PphexLBK(Sy, Y1);
  for (i = 0; i <= 98; i += 2) {
    tmp_p = _mm_loadu_pd(&Sy[i]);
    _mm_storeu_pd(&Sy[i], _mm_mul_pd(_mm_set1_pd(999.99949999987507), tmp_p));
  }

  for (kk = 0; kk < 20; kk++) {
    for (i = 0; i <= 8; i += 2) {
      tmp_p = _mm_loadu_pd(&X2[10 * kk + i]);
      _mm_storeu_pd(&X2[i + 10 * kk], _mm_sub_pd(tmp_p, _mm_loadu_pd(&X1[i])));
    }
  }

  for (i = 0; i < 10; i++) {
    for (kk = 0; kk < 10; kk++) {
      X2_p[i + 10 * kk] = 0.0;
      for (i_p = 0; i_p < 20; i_p++) {
        X2_p[i + 10 * kk] += X2[10 * i_p + i] * Y2[10 * i_p + kk];
      }
    }
  }

  for (i = 0; i <= 98; i += 2) {
    tmp_p = _mm_loadu_pd(&X2_p[i]);
    _mm_storeu_pd(&Pxy[i], _mm_mul_pd(tmp_p, _mm_set1_pd(50000.000000000007)));
  }
}
