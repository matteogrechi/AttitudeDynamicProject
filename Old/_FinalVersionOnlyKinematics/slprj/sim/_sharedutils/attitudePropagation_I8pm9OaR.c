#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include <string.h>
#include "norm_HoflEZiw.h"
#include "attitudePropagation_I8pm9OaR.h"

void attitudePropagation_I8pm9OaR(real_T x[7], const real_T w[6], const real_T
  u[3])
{
  __m128d tmp;
  __m128d tmp_e;
  __m128d tmp_i;
  __m128d tmp_m;
  __m128d tmp_p;
  real_T Omega[16];
  real_T Omega_p[16];
  real_T q_p[7];
  real_T q[4];
  real_T omega_idx_0;
  real_T omega_idx_1;
  real_T omega_idx_2;
  int32_T i;
  omega_idx_0 = (u[0] - x[4]) + w[0];
  omega_idx_1 = (u[1] - x[5]) + w[1];
  omega_idx_2 = (u[2] - x[6]) + w[2];
  Omega[0] = 0.0;
  Omega[4] = -omega_idx_0;
  Omega[8] = -omega_idx_1;
  Omega[12] = -omega_idx_2;
  Omega[1] = 0.0;
  Omega[5] = 0.0;
  Omega[9] = omega_idx_2;
  Omega[13] = -omega_idx_1;
  Omega[2] = 0.0;
  Omega[6] = 0.0;
  Omega[10] = 0.0;
  Omega[14] = omega_idx_0;
  Omega[3] = 0.0;
  Omega[7] = 0.0;
  Omega[11] = 0.0;
  Omega[15] = 0.0;
  for (i = 0; i < 4; i++) {
    Omega_p[i << 2] = Omega[i << 2] - Omega[i];
    Omega_p[(i << 2) + 1] = Omega[(i << 2) + 1] - Omega[i + 4];
    Omega_p[(i << 2) + 2] = Omega[(i << 2) + 2] - Omega[i + 8];
    Omega_p[(i << 2) + 3] = Omega[(i << 2) + 3] - Omega[i + 12];
  }

  memcpy(&Omega[0], &Omega_p[0], sizeof(real_T) << 4U);
  for (i = 0; i <= 2; i += 2) {
    tmp = _mm_loadu_pd(&Omega[i]);
    tmp_p = _mm_loadu_pd(&Omega[i + 4]);
    tmp_e = _mm_loadu_pd(&Omega[i + 8]);
    tmp_i = _mm_loadu_pd(&Omega[i + 12]);
    tmp_m = _mm_loadu_pd(&x[i]);
    _mm_storeu_pd(&q[i], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(0.01), _mm_add_pd
      (_mm_mul_pd(_mm_mul_pd(tmp_i, _mm_set1_pd(0.5)), _mm_set1_pd(x[3])),
       _mm_add_pd(_mm_mul_pd(_mm_mul_pd(tmp_e, _mm_set1_pd(0.5)), _mm_set1_pd(x
      [2])), _mm_add_pd(_mm_mul_pd(_mm_mul_pd(tmp_p, _mm_set1_pd(0.5)),
      _mm_set1_pd(x[1])), _mm_add_pd(_mm_mul_pd(_mm_mul_pd(_mm_set1_pd(0.5), tmp),
      _mm_set1_pd(x[0])), _mm_set1_pd(0.0)))))), tmp_m));
  }

  omega_idx_0 = norm_HoflEZiw(q);
  q_p[0] = q[0] / omega_idx_0;
  q_p[1] = q[1] / omega_idx_0;
  q_p[2] = q[2] / omega_idx_0;
  q_p[3] = q[3] / omega_idx_0;
  q_p[4] = w[3] * 0.1 + x[4];
  q_p[5] = w[4] * 0.1 + x[5];
  q_p[6] = w[5] * 0.1 + x[6];
  for (i = 0; i < 7; i++) {
    x[i] = q_p[i];
  }
}
