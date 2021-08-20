#include "rtwtypes.h"
#include "multiword_types.h"
#include <emmintrin.h>
#include "cholUpdateFactor_9t0nIPXO.h"
#include "ilazlc_9mxPqSOB.h"
#include "xgemv_gY15yKV9.h"
#include "xgeqrf_8jIJ8zV7.h"
#include "xgerc_s28ZIjs9.h"
#include "xscal_7kOJElXq.h"
#include "UTMeanCovSqrt_lj3OJT50.h"

void UTMeanCovSqrt_lj3OJT50(real_T Y1[4], real_T Y2[56], const real_T X1[4],
  real_T X2[32], real_T Ymean[4], real_T Sy[16], real_T Pxy[16])
{
  __m128d tmp;
  real_T A[56];
  real_T X2_p[16];
  real_T tau[4];
  real_T work[4];
  real_T Ymean_p;
  int32_T i;
  int32_T itau;
  int32_T lastc;
  Ymean[0] = Y1[0];
  Ymean[1] = Y1[1];
  Ymean[2] = Y1[2];
  Ymean[3] = Y1[3];
  for (itau = 0; itau < 14; itau++) {
    Ymean[0] += Y2[itau << 2] * -0.071428642857214286;
    Ymean[1] += Y2[(itau << 2) + 1] * -0.071428642857214286;
    Ymean[2] += Y2[(itau << 2) + 2] * -0.071428642857214286;
    Ymean[3] += Y2[(itau << 2) + 3] * -0.071428642857214286;
  }

  Ymean_p = Ymean[0] * -999999.0;
  Ymean[0] = Ymean_p;
  Y1[0] -= Ymean_p;
  Ymean_p = Ymean[1] * -999999.0;
  Ymean[1] = Ymean_p;
  Y1[1] -= Ymean_p;
  Ymean_p = Ymean[2] * -999999.0;
  Ymean[2] = Ymean_p;
  Y1[2] -= Ymean_p;
  Ymean_p = Ymean[3] * -999999.0;
  Ymean[3] = Ymean_p;
  Y1[3] -= Ymean_p;
  for (itau = 0; itau < 14; itau++) {
    Y2[itau << 2] -= Ymean[0];
    Y2[(itau << 2) + 1] -= Ymean[1];
    Y2[(itau << 2) + 2] -= Ymean[2];
    Y2[(itau << 2) + 3] -= Ymean_p;
  }

  for (itau = 0; itau < 4; itau++) {
    for (lastc = 0; lastc < 14; lastc++) {
      A[lastc + 14 * itau] = Y2[(lastc << 2) + itau] * 0.26726137554314555;
    }
  }

  xgeqrf_8jIJ8zV7(A, tau);
  Sy[0] = A[0];
  for (itau = 1; itau + 1 < 5; itau++) {
    Sy[itau] = 0.0;
  }

  work[0] = 0.0;
  for (itau = 0; itau < 2; itau++) {
    Sy[itau + 4] = A[itau + 14];
  }

  while (itau + 1 < 5) {
    Sy[itau + 4] = 0.0;
    itau++;
  }

  work[1] = 0.0;
  for (itau = 0; itau < 3; itau++) {
    Sy[itau + 8] = A[itau + 28];
  }

  while (itau + 1 < 5) {
    Sy[itau + 8] = 0.0;
    itau++;
  }

  work[2] = 0.0;
  for (itau = 0; itau < 4; itau++) {
    Sy[itau + 12] = A[itau + 42];
  }

  work[3] = 0.0;
  xscal_7kOJElXq(10, -tau[3], A, 47);
  A[45] = 1.0 - tau[3];
  for (itau = 0; itau < 3; itau++) {
    A[44 - itau] = 0.0;
  }

  A[30] = 1.0;
  if (tau[2] != 0.0) {
    itau = 12;
    lastc = 43;
    while ((itau > 0) && (A[lastc - 2] == 0.0)) {
      itau--;
      lastc--;
    }

    lastc = ilazlc_9mxPqSOB(itau, 1, A, 45, 14);
  } else {
    itau = 0;
    lastc = 0;
  }

  if (itau > 0) {
    xgemv_gY15yKV9(itau, lastc, A, 45, A, 31, work);
    xgerc_s28ZIjs9(itau, lastc, -tau[2], 31, work, A, 45);
  }

  xscal_7kOJElXq(11, -tau[2], A, 32);
  A[30] = 1.0 - tau[2];
  for (itau = 0; itau < 2; itau++) {
    A[29 - itau] = 0.0;
  }

  A[15] = 1.0;
  if (tau[1] != 0.0) {
    itau = 13;
    lastc = 29;
    while ((itau > 0) && (A[lastc - 2] == 0.0)) {
      itau--;
      lastc--;
    }

    lastc = ilazlc_9mxPqSOB(itau, 2, A, 30, 14);
  } else {
    itau = 0;
    lastc = 0;
  }

  if (itau > 0) {
    xgemv_gY15yKV9(itau, lastc, A, 30, A, 16, work);
    xgerc_s28ZIjs9(itau, lastc, -tau[1], 16, work, A, 30);
  }

  xscal_7kOJElXq(12, -tau[1], A, 17);
  A[15] = 1.0 - tau[1];
  A[14] = 0.0;
  A[0] = 1.0;
  if (tau[0] != 0.0) {
    itau = 14;
    lastc = 15;
    while ((itau > 0) && (A[lastc - 2] == 0.0)) {
      itau--;
      lastc--;
    }

    lastc = ilazlc_9mxPqSOB(itau, 3, A, 15, 14);
  } else {
    itau = 0;
    lastc = 0;
  }

  if (itau > 0) {
    xgemv_gY15yKV9(itau, lastc, A, 15, A, 1, work);
    xgerc_s28ZIjs9(itau, lastc, -tau[0], 1, work, A, 15);
  }

  xscal_7kOJElXq(13, -tau[0], A, 2);
  cholUpdateFactor_9t0nIPXO(Sy, Y1);
  for (itau = 0; itau <= 14; itau += 2) {
    tmp = _mm_loadu_pd(&Sy[itau]);
    _mm_storeu_pd(&Sy[itau], _mm_mul_pd(_mm_set1_pd(999.999499999875), tmp));
  }

  for (itau = 0; itau < 8; itau++) {
    X2[itau << 2] -= X1[0];
    X2[(itau << 2) + 1] -= X1[1];
    X2[(itau << 2) + 2] -= X1[2];
    X2[(itau << 2) + 3] -= X1[3];
  }

  for (itau = 0; itau < 4; itau++) {
    for (lastc = 0; lastc < 4; lastc++) {
      X2_p[itau + (lastc << 2)] = 0.0;
      for (i = 0; i < 8; i++) {
        X2_p[itau + (lastc << 2)] += X2[(i << 2) + itau] * Y2[(i << 2) + lastc];
      }
    }
  }

  for (itau = 0; itau <= 14; itau += 2) {
    tmp = _mm_loadu_pd(&X2_p[itau]);
    _mm_storeu_pd(&Pxy[itau], _mm_mul_pd(tmp, _mm_set1_pd(71428.571428571435)));
  }
}
