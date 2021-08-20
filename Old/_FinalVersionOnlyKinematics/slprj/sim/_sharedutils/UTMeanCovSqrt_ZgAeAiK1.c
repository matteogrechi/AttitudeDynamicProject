#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include "cholUpdateFactor_tmrEyo8Z.h"
#include "ilazlc_24A8Duzj.h"
#include "xgemv_glBK3i54.h"
#include "xgeqrf_MWGmUpbO.h"
#include "xgerc_FX3zcQuv.h"
#include "xscal_A19qZnct.h"
#include "UTMeanCovSqrt_ZgAeAiK1.h"

void UTMeanCovSqrt_ZgAeAiK1(real_T Y1[6], real_T Y2[48], const real_T X1[4],
  real_T X2[32], real_T Ymean[6], real_T Sy[36], real_T Pxy[24])
{
  __m128d tmp;
  __m128d tmp_p;
  real_T A[48];
  real_T X2_p[24];
  real_T tau[6];
  real_T work[6];
  int32_T i;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  for (i = 0; i < 6; i++) {
    Ymean[i] = Y1[i];
  }

  for (itau = 0; itau < 8; itau++) {
    for (i = 0; i <= 4; i += 2) {
      tmp = _mm_loadu_pd(&Y2[6 * itau + i]);
      tmp_p = _mm_loadu_pd(&Ymean[i]);
      _mm_storeu_pd(&Ymean[i], _mm_add_pd(_mm_mul_pd(tmp, _mm_set1_pd
        (-0.125000125000125)), tmp_p));
    }
  }

  for (i = 0; i <= 4; i += 2) {
    tmp = _mm_loadu_pd(&Ymean[i]);
    tmp = _mm_mul_pd(tmp, _mm_set1_pd(-999999.0));
    tmp_p = _mm_loadu_pd(&Y1[i]);
    _mm_storeu_pd(&Ymean[i], tmp);
    _mm_storeu_pd(&Y1[i], _mm_sub_pd(tmp_p, tmp));
  }

  for (itau = 0; itau < 8; itau++) {
    for (i = 0; i <= 4; i += 2) {
      tmp = _mm_loadu_pd(&Y2[6 * itau + i]);
      tmp_p = _mm_loadu_pd(&Ymean[i]);
      _mm_storeu_pd(&Y2[i + 6 * itau], _mm_sub_pd(tmp, tmp_p));
    }
  }

  for (i = 0; i < 6; i++) {
    for (itau = 0; itau < 8; itau++) {
      A[itau + (i << 3)] = Y2[6 * itau + i] * 0.35355356737010163;
    }
  }

  xgeqrf_MWGmUpbO(A, tau);
  for (itau = 0; itau < 6; itau++) {
    for (i = 0; i <= itau; i++) {
      Sy[i + 6 * itau] = A[(itau << 3) + i];
    }

    for (i = itau + 1; i + 1 < 7; i++) {
      Sy[i + 6 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  for (i = 5; i >= 0; i--) {
    itau = ((i << 3) + i) + 9;
    if (i + 1 < 6) {
      A[itau - 9] = 1.0;
      if (tau[i] != 0.0) {
        lastv = 8 - i;
        lastc = itau - i;
        while ((lastv > 0) && (A[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = ilazlc_24A8Duzj(lastv, 5 - i, A, itau, 8);
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        xgemv_glBK3i54(lastv, lastc, A, itau, A, itau - 8, work);
        xgerc_FX3zcQuv(lastv, lastc, -tau[i], itau - 8, work, A, itau);
      }
    }

    xscal_A19qZnct(7 - i, -tau[i], A, itau - 7);
    A[itau - 9] = 1.0 - tau[i];
    for (lastv = 0; lastv < i; lastv++) {
      A[(itau - lastv) - 10] = 0.0;
    }
  }

  cholUpdateFactor_tmrEyo8Z(Sy, Y1);
  for (i = 0; i <= 34; i += 2) {
    tmp = _mm_loadu_pd(&Sy[i]);
    _mm_storeu_pd(&Sy[i], _mm_mul_pd(_mm_set1_pd(999.999499999875), tmp));
  }

  for (itau = 0; itau < 8; itau++) {
    X2[itau << 2] -= X1[0];
    X2[(itau << 2) + 1] -= X1[1];
    X2[(itau << 2) + 2] -= X1[2];
    X2[(itau << 2) + 3] -= X1[3];
  }

  for (i = 0; i < 4; i++) {
    for (itau = 0; itau < 6; itau++) {
      X2_p[i + (itau << 2)] = 0.0;
      for (lastv = 0; lastv < 8; lastv++) {
        X2_p[i + (itau << 2)] += X2[(lastv << 2) + i] * Y2[6 * lastv + itau];
      }
    }
  }

  for (i = 0; i <= 22; i += 2) {
    tmp = _mm_loadu_pd(&X2_p[i]);
    _mm_storeu_pd(&Pxy[i], _mm_mul_pd(tmp, _mm_set1_pd(125000.0)));
  }
}
