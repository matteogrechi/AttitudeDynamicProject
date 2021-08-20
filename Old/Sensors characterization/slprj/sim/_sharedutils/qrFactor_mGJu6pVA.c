#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xgemv_cZ1l1CRX.h"
#include "xgerc_LOdjswq5.h"
#include "xnrm2_VsxD4Z2C.h"
#include "qrFactor_mGJu6pVA.h"

void qrFactor_mGJu6pVA(const real_T A[21], const real_T S[49], const real_T Ns[9],
  real_T b_S[9])
{
  real_T b_A[30];
  real_T y[21];
  real_T R[9];
  real_T work[3];
  real_T s;
  real_T tau_idx_0;
  real_T xnorm;
  int32_T aoffset;
  int32_T coffset;
  int32_T coltop;
  int32_T exitg1;
  int32_T j;
  int32_T knt;
  boolean_T exitg2;
  for (j = 0; j < 3; j++) {
    coffset = j * 7;
    for (knt = 0; knt < 7; knt++) {
      aoffset = knt * 7;
      s = 0.0;
      for (coltop = 0; coltop < 7; coltop++) {
        s += A[coltop * 3 + j] * S[aoffset + coltop];
      }

      y[coffset + knt] = s;
      b_A[knt + 10 * j] = y[7 * j + knt];
    }

    b_A[10 * j + 7] = Ns[j];
    b_A[10 * j + 8] = Ns[j + 3];
    b_A[10 * j + 9] = Ns[j + 6];
    work[j] = 0.0;
  }

  s = b_A[0];
  tau_idx_0 = 0.0;
  xnorm = xnrm2_VsxD4Z2C(9, b_A, 2);
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
        for (coltop = 1; coltop < 10; coltop++) {
          b_A[coltop] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_VsxD4Z2C(9, b_A, 2));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_0 = (xnorm - s) / xnorm;
      s = 1.0 / (s - xnorm);
      for (coltop = 1; coltop < 10; coltop++) {
        b_A[coltop] *= s;
      }

      while (aoffset <= knt) {
        xnorm *= 1.0020841800044864E-292;
        aoffset++;
      }

      s = xnorm;
    } else {
      tau_idx_0 = (xnorm - b_A[0]) / xnorm;
      s = 1.0 / (b_A[0] - xnorm);
      for (aoffset = 1; aoffset < 10; aoffset++) {
        b_A[aoffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    knt = 10;
    aoffset = 0;
    while ((knt > 0) && (b_A[aoffset + 9] == 0.0)) {
      knt--;
      aoffset--;
    }

    aoffset = 2;
    exitg2 = false;
    while ((!exitg2) && (aoffset > 0)) {
      coltop = (aoffset - 1) * 10 + 10;
      j = coltop;
      do {
        exitg1 = 0;
        if (j + 1 <= coltop + knt) {
          if (b_A[j] != 0.0) {
            exitg1 = 1;
          } else {
            j++;
          }
        } else {
          aoffset--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    knt = 0;
    aoffset = 0;
  }

  if (knt > 0) {
    xgemv_cZ1l1CRX(knt, aoffset, b_A, 11, b_A, 1, work);
    xgerc_LOdjswq5(knt, aoffset, -tau_idx_0, 1, work, b_A, 11);
  }

  b_A[0] = s;
  s = b_A[11];
  tau_idx_0 = 0.0;
  xnorm = xnrm2_VsxD4Z2C(8, b_A, 13);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[11], xnorm);
    if (b_A[11] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (coltop = 12; coltop < 20; coltop++) {
          b_A[coltop] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_VsxD4Z2C(8, b_A, 13));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_0 = (xnorm - s) / xnorm;
      s = 1.0 / (s - xnorm);
      for (coltop = 12; coltop < 20; coltop++) {
        b_A[coltop] *= s;
      }

      for (aoffset = 0; aoffset <= knt; aoffset++) {
        xnorm *= 1.0020841800044864E-292;
      }

      s = xnorm;
    } else {
      tau_idx_0 = (xnorm - b_A[11]) / xnorm;
      s = 1.0 / (b_A[11] - xnorm);
      for (aoffset = 12; aoffset < 20; aoffset++) {
        b_A[aoffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[11] = 1.0;
  if (tau_idx_0 != 0.0) {
    knt = 9;
    aoffset = 10;
    while ((knt > 0) && (b_A[aoffset + 9] == 0.0)) {
      knt--;
      aoffset--;
    }

    aoffset = 1;
    j = 21;
    do {
      exitg1 = 0;
      if (j + 1 <= 21 + knt) {
        if (b_A[j] != 0.0) {
          exitg1 = 1;
        } else {
          j++;
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
    xgemv_cZ1l1CRX(knt, aoffset, b_A, 22, b_A, 12, work);
    xgerc_LOdjswq5(knt, aoffset, -tau_idx_0, 12, work, b_A, 22);
  }

  b_A[11] = s;
  s = b_A[22];
  xnorm = xnrm2_VsxD4Z2C(7, b_A, 24);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[22], xnorm);
    if (b_A[22] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (coltop = 23; coltop < 30; coltop++) {
          b_A[coltop] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        s *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(s, xnrm2_VsxD4Z2C(7, b_A, 24));
      if (s >= 0.0) {
        xnorm = -xnorm;
      }

      s = 1.0 / (s - xnorm);
      for (coltop = 23; coltop < 30; coltop++) {
        b_A[coltop] *= s;
      }

      for (aoffset = 0; aoffset <= knt; aoffset++) {
        xnorm *= 1.0020841800044864E-292;
      }

      s = xnorm;
    } else {
      s = 1.0 / (b_A[22] - xnorm);
      for (aoffset = 23; aoffset < 30; aoffset++) {
        b_A[aoffset] *= s;
      }

      s = xnorm;
    }
  }

  b_A[22] = s;
  R[0] = b_A[0];
  for (coffset = 1; coffset + 1 < 4; coffset++) {
    R[coffset] = 0.0;
  }

  for (coffset = 0; coffset < 2; coffset++) {
    R[coffset + 3] = b_A[coffset + 10];
  }

  while (coffset + 1 < 4) {
    R[coffset + 3] = 0.0;
    coffset++;
  }

  for (coffset = 0; coffset < 3; coffset++) {
    R[coffset + 6] = b_A[coffset + 20];
  }

  for (knt = 0; knt < 3; knt++) {
    b_S[3 * knt] = R[knt];
    b_S[3 * knt + 1] = R[knt + 3];
    b_S[3 * knt + 2] = R[knt + 6];
  }
}
