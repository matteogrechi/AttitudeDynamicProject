#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xgemv_D9ZONoaL.h"
#include "xgerc_w8T30FM2.h"
#include "xnrm2_Ixk2SxLI.h"
#include "qrFactor_qzIe5HvL.h"

void qrFactor_qzIe5HvL(const real_T A[9], real_T S[9], const real_T Ns[9])
{
  real_T b_A[18];
  real_T y[9];
  real_T work[3];
  real_T s;
  real_T tau_idx_0;
  real_T xnorm;
  int32_T aoffset;
  int32_T coffset;
  int32_T exitg1;
  int32_T ii;
  int32_T knt;
  boolean_T exitg2;
  for (knt = 0; knt < 3; knt++) {
    coffset = knt * 3;
    for (ii = 0; ii < 3; ii++) {
      aoffset = ii * 3;
      y[coffset + ii] = (S[aoffset + 1] * A[knt + 3] + S[aoffset] * A[knt]) +
        S[aoffset + 2] * A[knt + 6];
    }
  }

  for (coffset = 0; coffset < 3; coffset++) {
    b_A[6 * coffset] = y[3 * coffset];
    b_A[6 * coffset + 3] = Ns[coffset];
    b_A[6 * coffset + 1] = y[3 * coffset + 1];
    b_A[6 * coffset + 4] = Ns[coffset + 3];
    b_A[6 * coffset + 2] = y[3 * coffset + 2];
    b_A[6 * coffset + 5] = Ns[coffset + 6];
    work[coffset] = 0.0;
  }

  s = b_A[0];
  tau_idx_0 = 0.0;
  xnorm = xnrm2_Ixk2SxLI(5, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      coffset = 0;
      do {
        knt++;
        for (aoffset = 1; aoffset < 6; aoffset++) {
          b_A[aoffset] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_Ixk2SxLI(5, b_A, 2));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_0 = (xnorm - s) / xnorm;
      s = 1.0 / (s - xnorm);
      for (aoffset = 1; aoffset < 6; aoffset++) {
        b_A[aoffset] *= s;
      }

      while (coffset <= knt) {
        xnorm *= 1.0020841800044864E-292;
        coffset++;
      }

      s = xnorm;
    } else {
      tau_idx_0 = (xnorm - b_A[0]) / xnorm;
      s = 1.0 / (b_A[0] - xnorm);
      for (coffset = 1; coffset < 6; coffset++) {
        b_A[coffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    knt = 6;
    coffset = 0;
    while ((knt > 0) && (b_A[coffset + 5] == 0.0)) {
      knt--;
      coffset--;
    }

    coffset = 2;
    exitg2 = false;
    while ((!exitg2) && (coffset > 0)) {
      aoffset = (coffset - 1) * 6 + 6;
      ii = aoffset;
      do {
        exitg1 = 0;
        if (ii + 1 <= aoffset + knt) {
          if (b_A[ii] != 0.0) {
            exitg1 = 1;
          } else {
            ii++;
          }
        } else {
          coffset--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    knt = 0;
    coffset = 0;
  }

  if (knt > 0) {
    xgemv_D9ZONoaL(knt, coffset, b_A, 7, b_A, 1, work);
    xgerc_w8T30FM2(knt, coffset, -tau_idx_0, 1, work, b_A, 7);
  }

  b_A[0] = s;
  s = b_A[7];
  tau_idx_0 = 0.0;
  xnorm = xnrm2_Ixk2SxLI(4, b_A, 9);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[7], xnorm);
    if (b_A[7] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (aoffset = 8; aoffset < 12; aoffset++) {
          b_A[aoffset] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_Ixk2SxLI(4, b_A, 9));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_0 = (xnorm - s) / xnorm;
      s = 1.0 / (s - xnorm);
      for (aoffset = 8; aoffset < 12; aoffset++) {
        b_A[aoffset] *= s;
      }

      for (coffset = 0; coffset <= knt; coffset++) {
        xnorm *= 1.0020841800044864E-292;
      }

      s = xnorm;
    } else {
      tau_idx_0 = (xnorm - b_A[7]) / xnorm;
      s = 1.0 / (b_A[7] - xnorm);
      for (coffset = 8; coffset < 12; coffset++) {
        b_A[coffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[7] = 1.0;
  if (tau_idx_0 != 0.0) {
    knt = 5;
    coffset = 6;
    while ((knt > 0) && (b_A[coffset + 5] == 0.0)) {
      knt--;
      coffset--;
    }

    coffset = 1;
    ii = 13;
    do {
      exitg1 = 0;
      if (ii + 1 <= 13 + knt) {
        if (b_A[ii] != 0.0) {
          exitg1 = 1;
        } else {
          ii++;
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
    xgemv_D9ZONoaL(knt, coffset, b_A, 14, b_A, 8, work);
    xgerc_w8T30FM2(knt, coffset, -tau_idx_0, 8, work, b_A, 14);
  }

  b_A[7] = s;
  s = b_A[14];
  xnorm = xnrm2_Ixk2SxLI(3, b_A, 16);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[14], xnorm);
    if (b_A[14] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (aoffset = 15; aoffset < 18; aoffset++) {
          b_A[aoffset] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_Ixk2SxLI(3, b_A, 16));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      s = 1.0 / (s - xnorm);
      for (aoffset = 15; aoffset < 18; aoffset++) {
        b_A[aoffset] *= s;
      }

      for (coffset = 0; coffset <= knt; coffset++) {
        xnorm *= 1.0020841800044864E-292;
      }

      s = xnorm;
    } else {
      s = 1.0 / (b_A[14] - xnorm);
      for (coffset = 15; coffset < 18; coffset++) {
        b_A[coffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[14] = s;
  y[0] = b_A[0];
  for (ii = 1; ii + 1 < 4; ii++) {
    y[ii] = 0.0;
  }

  for (ii = 0; ii < 2; ii++) {
    y[ii + 3] = b_A[ii + 6];
  }

  while (ii + 1 < 4) {
    y[ii + 3] = 0.0;
    ii++;
  }

  for (ii = 0; ii < 3; ii++) {
    y[ii + 6] = b_A[ii + 12];
  }

  for (coffset = 0; coffset < 3; coffset++) {
    S[3 * coffset] = y[coffset];
    S[3 * coffset + 1] = y[coffset + 3];
    S[3 * coffset + 2] = y[coffset + 6];
  }
}
