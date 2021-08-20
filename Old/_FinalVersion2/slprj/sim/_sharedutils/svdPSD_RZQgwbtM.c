#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include "svd_S8lADMED.h"
#include "svdPSD_RZQgwbtM.h"

void svdPSD_RZQgwbtM(const real_T A[100], real_T R[100])
{
  __m128d tmp;
  real_T Ss[100];
  real_T V[100];
  real_T a__1[100];
  int32_T i;
  int32_T i_p;
  int32_T k;
  svd_S8lADMED(A, a__1, Ss, V);
  for (k = 0; k <= 98; k += 2) {
    tmp = _mm_loadu_pd(&Ss[k]);
    _mm_storeu_pd(&Ss[k], _mm_sqrt_pd(tmp));
  }

  for (k = 0; k < 10; k++) {
    for (i = 0; i < 10; i++) {
      R[i + 10 * k] = 0.0;
      for (i_p = 0; i_p < 10; i_p++) {
        R[i + 10 * k] += V[10 * i_p + i] * Ss[10 * k + i_p];
      }
    }
  }
}
