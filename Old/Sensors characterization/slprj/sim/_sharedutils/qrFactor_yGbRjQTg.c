#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xgemv_EserETZk.h"
#include "xgerc_45PyVZMw.h"
#include "xnrm2_KG5A7tOy.h"
#include "qrFactor_yGbRjQTg.h"

void qrFactor_yGbRjQTg(const real_T A[4], real_T S[4], const real_T Ns[4])
{
  real_T b_A[8];
  real_T y[4];
  real_T tau[2];
  real_T work[2];
  real_T s;
  real_T xnorm;
  int32_T aoffset;
  int32_T coffset;
  int32_T exitg1;
  int32_T knt;
  for (knt = 0; knt < 2; knt++) {
    coffset = knt << 1;
    y[coffset] = A[knt + 2] * S[1] + S[0] * A[knt];
    y[coffset + 1] = A[knt + 2] * S[3] + S[2] * A[knt];
  }

  b_A[0] = y[0];
  b_A[2] = Ns[0];
  b_A[1] = y[1];
  b_A[3] = Ns[2];
  work[0] = 0.0;
  b_A[4] = y[2];
  b_A[6] = Ns[1];
  b_A[5] = y[3];
  b_A[7] = Ns[3];
  work[1] = 0.0;
  s = y[0];
  tau[0] = 0.0;
  xnorm = xnrm2_KG5A7tOy(3, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(y[0], xnorm);
    if (y[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      coffset = 0;
      do {
        knt++;
        for (aoffset = 1; aoffset < 4; aoffset++) {
          b_A[aoffset] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_KG5A7tOy(3, b_A, 2));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      tau[0] = (xnorm - s) / xnorm;
      s = 1.0 / (s - xnorm);
      for (aoffset = 1; aoffset < 4; aoffset++) {
        b_A[aoffset] *= s;
      }

      while (coffset <= knt) {
        xnorm *= 1.0020841800044864E-292;
        coffset++;
      }

      s = xnorm;
    } else {
      tau[0] = (xnorm - y[0]) / xnorm;
      s = 1.0 / (y[0] - xnorm);
      for (coffset = 1; coffset < 4; coffset++) {
        b_A[coffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[0] = 1.0;
  if (tau[0] != 0.0) {
    knt = 4;
    coffset = 3;
    while ((knt > 0) && (b_A[coffset] == 0.0)) {
      knt--;
      coffset--;
    }

    coffset = 1;
    aoffset = 0;
    do {
      exitg1 = 0;
      if (aoffset + 5 <= knt + 4) {
        if (b_A[aoffset + 4] != 0.0) {
          exitg1 = 1;
        } else {
          aoffset++;
        }
      } else {
        coffset = 0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    knt = 0;
    coffset = 0;
  }

  if (knt > 0) {
    xgemv_EserETZk(knt, coffset, b_A, 5, b_A, 1, work);
    xgerc_45PyVZMw(knt, coffset, -tau[0], 1, work, b_A, 5);
  }

  b_A[0] = s;
  s = b_A[5];
  xnorm = xnrm2_KG5A7tOy(2, b_A, 7);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[5], xnorm);
    if (b_A[5] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (aoffset = 6; aoffset < 8; aoffset++) {
          b_A[aoffset] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_KG5A7tOy(2, b_A, 7));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      s = 1.0 / (s - xnorm);
      for (aoffset = 6; aoffset < 8; aoffset++) {
        b_A[aoffset] *= s;
      }

      for (coffset = 0; coffset <= knt; coffset++) {
        xnorm *= 1.0020841800044864E-292;
      }

      s = xnorm;
    } else {
      s = 1.0 / (b_A[5] - xnorm);
      for (coffset = 6; coffset < 8; coffset++) {
        b_A[coffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[5] = s;
  y[0] = b_A[0];
  for (coffset = 0; coffset < 2; coffset++) {
    y[coffset + 2] = b_A[coffset + 4];
  }

  S[0] = y[0];
  S[1] = y[2];
  S[2] = 0.0;
  S[3] = y[3];
}
