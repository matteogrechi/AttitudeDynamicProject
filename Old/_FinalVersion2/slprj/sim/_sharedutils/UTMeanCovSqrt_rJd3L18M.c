#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include "cholUpdateFactor_EQIwzZfq.h"
#include "ilazlc_9qJoA4P6.h"
#include "xgemv_GVNqYBnx.h"
#include "xgeqrf_kYqXioSJ.h"
#include "xgerc_wtXkB2ZC.h"
#include "xscal_tZ8ruv63.h"
#include "UTMeanCovSqrt_rJd3L18M.h"

void UTMeanCovSqrt_rJd3L18M(real_T Y1[3], real_T Y2[60], const real_T X1[10],
  real_T X2[200], real_T Ymean[3], real_T Sy[9], real_T Pxy[30])
{
  __m128d tmp;
  real_T A[60];
  real_T X2_p[30];
  real_T tau[3];
  real_T work[3];
  real_T Ymean_p;
  int32_T c_i;
  int32_T i;
  int32_T itau;
  Ymean[0] = Y1[0];
  Ymean[1] = Y1[1];
  Ymean[2] = Y1[2];
  for (itau = 0; itau < 20; itau++) {
    Ymean[0] += Y2[3 * itau] * -0.05000005000005;
    Ymean[1] += Y2[3 * itau + 1] * -0.05000005000005;
    Ymean[2] += Y2[3 * itau + 2] * -0.05000005000005;
  }

  Ymean_p = Ymean[0] * -999999.00000000012;
  Ymean[0] = Ymean_p;
  Y1[0] -= Ymean_p;
  Ymean_p = Ymean[1] * -999999.00000000012;
  Ymean[1] = Ymean_p;
  Y1[1] -= Ymean_p;
  Ymean_p = Ymean[2] * -999999.00000000012;
  Ymean[2] = Ymean_p;
  Y1[2] -= Ymean_p;
  for (itau = 0; itau < 20; itau++) {
    Y2[3 * itau] -= Ymean[0];
    Y2[3 * itau + 1] -= Ymean[1];
    Y2[3 * itau + 2] -= Ymean_p;
  }

  for (c_i = 0; c_i < 3; c_i++) {
    for (itau = 0; itau < 20; itau++) {
      A[itau + 20 * c_i] = Y2[3 * itau + c_i] * 0.22360690955346169;
    }
  }

  xgeqrf_kYqXioSJ(A, tau);
  Sy[0] = A[0];
  for (c_i = 1; c_i + 1 < 4; c_i++) {
    Sy[c_i] = 0.0;
  }

  work[0] = 0.0;
  for (c_i = 0; c_i < 2; c_i++) {
    Sy[c_i + 3] = A[c_i + 20];
  }

  while (c_i + 1 < 4) {
    Sy[c_i + 3] = 0.0;
    c_i++;
  }

  work[1] = 0.0;
  for (c_i = 0; c_i < 3; c_i++) {
    Sy[c_i + 6] = A[c_i + 40];
  }

  work[2] = 0.0;
  xscal_tZ8ruv63(17, -tau[2], A, 44);
  A[42] = 1.0 - tau[2];
  for (c_i = 0; c_i < 2; c_i++) {
    A[41 - c_i] = 0.0;
  }

  A[21] = 1.0;
  if (tau[1] != 0.0) {
    c_i = 19;
    itau = 41;
    while ((c_i > 0) && (A[itau - 2] == 0.0)) {
      c_i--;
      itau--;
    }

    itau = ilazlc_9qJoA4P6(c_i, 1, A, 42, 20);
  } else {
    c_i = 0;
    itau = 0;
  }

  if (c_i > 0) {
    xgemv_GVNqYBnx(c_i, itau, A, 42, A, 22, work);
    xgerc_wtXkB2ZC(c_i, itau, -tau[1], 22, work, A, 42);
  }

  xscal_tZ8ruv63(18, -tau[1], A, 23);
  A[21] = 1.0 - tau[1];
  A[20] = 0.0;
  A[0] = 1.0;
  if (tau[0] != 0.0) {
    c_i = 20;
    itau = 21;
    while ((c_i > 0) && (A[itau - 2] == 0.0)) {
      c_i--;
      itau--;
    }

    itau = ilazlc_9qJoA4P6(c_i, 2, A, 21, 20);
  } else {
    c_i = 0;
    itau = 0;
  }

  if (c_i > 0) {
    xgemv_GVNqYBnx(c_i, itau, A, 21, A, 1, work);
    xgerc_wtXkB2ZC(c_i, itau, -tau[0], 1, work, A, 21);
  }

  xscal_tZ8ruv63(19, -tau[0], A, 2);
  cholUpdateFactor_EQIwzZfq(Sy, Y1);
  for (c_i = 0; c_i < 9; c_i++) {
    Sy[c_i] *= 999.99949999987507;
  }

  for (itau = 0; itau < 20; itau++) {
    for (c_i = 0; c_i <= 8; c_i += 2) {
      tmp = _mm_loadu_pd(&X2[10 * itau + c_i]);
      _mm_storeu_pd(&X2[c_i + 10 * itau], _mm_sub_pd(tmp, _mm_loadu_pd(&X1[c_i])));
    }
  }

  for (c_i = 0; c_i < 10; c_i++) {
    for (itau = 0; itau < 3; itau++) {
      X2_p[c_i + 10 * itau] = 0.0;
      for (i = 0; i < 20; i++) {
        X2_p[c_i + 10 * itau] += X2[10 * i + c_i] * Y2[3 * i + itau];
      }
    }
  }

  for (c_i = 0; c_i <= 28; c_i += 2) {
    tmp = _mm_loadu_pd(&X2_p[c_i]);
    _mm_storeu_pd(&Pxy[c_i], _mm_mul_pd(tmp, _mm_set1_pd(50000.000000000007)));
  }
}
