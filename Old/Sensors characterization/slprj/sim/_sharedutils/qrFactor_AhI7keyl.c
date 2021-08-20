#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xgemv_KGUrmtZV.h"
#include "xgerc_eJ9TvyJx.h"
#include "xnrm2_FNqXsPWh.h"
#include "qrFactor_AhI7keyl.h"

void qrFactor_AhI7keyl(const real_T A[14], const real_T S[49], const real_T Ns[4],
  real_T b_S[4])
{
  real_T b_A[18];
  real_T y[14];
  real_T R[4];
  real_T tau[2];
  real_T work[2];
  real_T s;
  real_T xnorm;
  int32_T aoffset;
  int32_T coffset;
  int32_T exitg1;
  int32_T j;
  int32_T k;
  int32_T knt;
  for (j = 0; j < 2; j++) {
    coffset = j * 7;
    for (knt = 0; knt < 7; knt++) {
      aoffset = knt * 7;
      s = 0.0;
      for (k = 0; k < 7; k++) {
        s += A[(k << 1) + j] * S[aoffset + k];
      }

      y[coffset + knt] = s;
      b_A[knt + 9 * j] = y[7 * j + knt];
    }

    b_A[9 * j + 7] = Ns[j];
    b_A[9 * j + 8] = Ns[j + 2];
    work[j] = 0.0;
  }

  s = b_A[0];
  tau[0] = 0.0;
  xnorm = xnrm2_FNqXsPWh(8, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      aoffset = 0;
      do {
        knt++;
        for (k = 1; k < 9; k++) {
          b_A[k] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_FNqXsPWh(8, b_A, 2));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      tau[0] = (xnorm - s) / xnorm;
      s = 1.0 / (s - xnorm);
      for (k = 1; k < 9; k++) {
        b_A[k] *= s;
      }

      while (aoffset <= knt) {
        xnorm *= 1.0020841800044864E-292;
        aoffset++;
      }

      s = xnorm;
    } else {
      tau[0] = (xnorm - b_A[0]) / xnorm;
      s = 1.0 / (b_A[0] - xnorm);
      for (aoffset = 1; aoffset < 9; aoffset++) {
        b_A[aoffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[0] = 1.0;
  if (tau[0] != 0.0) {
    knt = 9;
    aoffset = 8;
    while ((knt > 0) && (b_A[aoffset] == 0.0)) {
      knt--;
      aoffset--;
    }

    aoffset = 1;
    k = 0;
    do {
      exitg1 = 0;
      if (k + 10 <= knt + 9) {
        if (b_A[k + 9] != 0.0) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        aoffset = 0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    knt = 0;
    aoffset = 0;
  }

  if (knt > 0) {
    xgemv_KGUrmtZV(knt, aoffset, b_A, 10, b_A, 1, work);
    xgerc_eJ9TvyJx(knt, aoffset, -tau[0], 1, work, b_A, 10);
  }

  b_A[0] = s;
  s = b_A[10];
  xnorm = xnrm2_FNqXsPWh(7, b_A, 12);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[10], xnorm);
    if (b_A[10] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (k = 11; k < 18; k++) {
          b_A[k] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_FNqXsPWh(7, b_A, 12));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      s = 1.0 / (s - xnorm);
      for (k = 11; k < 18; k++) {
        b_A[k] *= s;
      }

      for (aoffset = 0; aoffset <= knt; aoffset++) {
        xnorm *= 1.0020841800044864E-292;
      }

      s = xnorm;
    } else {
      s = 1.0 / (b_A[10] - xnorm);
      for (aoffset = 11; aoffset < 18; aoffset++) {
        b_A[aoffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[10] = s;
  R[0] = b_A[0];
  for (coffset = 0; coffset < 2; coffset++) {
    R[coffset + 2] = b_A[coffset + 9];
  }

  b_S[0] = R[0];
  b_S[1] = R[2];
  b_S[2] = 0.0;
  b_S[3] = R[3];
}
