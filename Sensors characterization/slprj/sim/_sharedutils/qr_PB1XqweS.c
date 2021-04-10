#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "xgemv_FSqGfqcA.h"
#include "xgerc_NBLCIUjN.h"
#include "xnrm2_aZ7pCywJ.h"
#include "qr_PB1XqweS.h"

void qr_PB1XqweS(const real_T A[42], real_T Q[42], real_T R[9])
{
  real_T b_A[42];
  real_T work[3];
  real_T b_atmp;
  real_T tau_idx_0;
  real_T tau_idx_1;
  real_T tau_idx_2;
  real_T xnorm;
  int32_T b_coltop;
  int32_T c_lastc;
  int32_T coltop;
  int32_T exitg1;
  int32_T knt;
  boolean_T exitg2;
  memcpy(&b_A[0], &A[0], 42U * sizeof(real_T));
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  b_atmp = b_A[0];
  tau_idx_0 = 0.0;
  xnorm = xnrm2_aZ7pCywJ(13, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      c_lastc = 0;
      do {
        knt++;
        for (b_coltop = 1; b_coltop < 14; b_coltop++) {
          b_A[b_coltop] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_aZ7pCywJ(13, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_0 = (xnorm - b_atmp) / xnorm;
      b_atmp = 1.0 / (b_atmp - xnorm);
      for (b_coltop = 1; b_coltop < 14; b_coltop++) {
        b_A[b_coltop] *= b_atmp;
      }

      while (c_lastc <= knt) {
        xnorm *= 1.0020841800044864E-292;
        c_lastc++;
      }

      b_atmp = xnorm;
    } else {
      tau_idx_0 = (xnorm - b_A[0]) / xnorm;
      b_atmp = 1.0 / (b_A[0] - xnorm);
      for (c_lastc = 1; c_lastc < 14; c_lastc++) {
        b_A[c_lastc] *= b_atmp;
      }

      b_atmp = xnorm;
    }
  }

  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    knt = 14;
    c_lastc = 0;
    while ((knt > 0) && (b_A[c_lastc + 13] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = 2;
    exitg2 = false;
    while ((!exitg2) && (c_lastc > 0)) {
      b_coltop = (c_lastc - 1) * 14 + 14;
      coltop = b_coltop;
      do {
        exitg1 = 0;
        if (coltop + 1 <= b_coltop + knt) {
          if (b_A[coltop] != 0.0) {
            exitg1 = 1;
          } else {
            coltop++;
          }
        } else {
          c_lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_FSqGfqcA(knt, c_lastc, b_A, 15, b_A, 1, work);
    xgerc_NBLCIUjN(knt, c_lastc, -tau_idx_0, 1, work, b_A, 15);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[15];
  tau_idx_1 = 0.0;
  xnorm = xnrm2_aZ7pCywJ(12, b_A, 17);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[15], xnorm);
    if (b_A[15] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (b_coltop = 16; b_coltop < 28; b_coltop++) {
          b_A[b_coltop] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_aZ7pCywJ(12, b_A, 17));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_1 = (xnorm - b_atmp) / xnorm;
      b_atmp = 1.0 / (b_atmp - xnorm);
      for (b_coltop = 16; b_coltop < 28; b_coltop++) {
        b_A[b_coltop] *= b_atmp;
      }

      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      tau_idx_1 = (xnorm - b_A[15]) / xnorm;
      b_atmp = 1.0 / (b_A[15] - xnorm);
      for (c_lastc = 16; c_lastc < 28; c_lastc++) {
        b_A[c_lastc] *= b_atmp;
      }

      b_atmp = xnorm;
    }
  }

  b_A[15] = 1.0;
  if (tau_idx_1 != 0.0) {
    knt = 13;
    c_lastc = 14;
    while ((knt > 0) && (b_A[c_lastc + 13] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = 1;
    coltop = 29;
    do {
      exitg1 = 0;
      if (coltop + 1 <= 29 + knt) {
        if (b_A[coltop] != 0.0) {
          exitg1 = 1;
        } else {
          coltop++;
        }
      } else {
        c_lastc = 0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_FSqGfqcA(knt, c_lastc, b_A, 30, b_A, 16, work);
    xgerc_NBLCIUjN(knt, c_lastc, -tau_idx_1, 16, work, b_A, 30);
  }

  b_A[15] = b_atmp;
  b_atmp = b_A[30];
  tau_idx_2 = 0.0;
  xnorm = xnrm2_aZ7pCywJ(11, b_A, 32);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[30], xnorm);
    if (b_A[30] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (b_coltop = 31; b_coltop < 42; b_coltop++) {
          b_A[b_coltop] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_aZ7pCywJ(11, b_A, 32));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_2 = (xnorm - b_atmp) / xnorm;
      b_atmp = 1.0 / (b_atmp - xnorm);
      for (b_coltop = 31; b_coltop < 42; b_coltop++) {
        b_A[b_coltop] *= b_atmp;
      }

      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      tau_idx_2 = (xnorm - b_A[30]) / xnorm;
      b_atmp = 1.0 / (b_A[30] - xnorm);
      for (c_lastc = 31; c_lastc < 42; c_lastc++) {
        b_A[c_lastc] *= b_atmp;
      }

      b_atmp = xnorm;
    }
  }

  b_A[30] = b_atmp;
  R[0] = b_A[0];
  for (c_lastc = 1; c_lastc + 1 < 4; c_lastc++) {
    R[c_lastc] = 0.0;
  }

  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 3] = b_A[c_lastc + 14];
  }

  while (c_lastc + 1 < 4) {
    R[c_lastc + 3] = 0.0;
    c_lastc++;
  }

  work[1] = 0.0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    R[c_lastc + 6] = b_A[c_lastc + 28];
  }

  work[2] = 0.0;
  for (b_coltop = 31; b_coltop < 42; b_coltop++) {
    b_A[b_coltop] *= -tau_idx_2;
  }

  b_A[30] = 1.0 - tau_idx_2;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    b_A[29 - c_lastc] = 0.0;
  }

  b_A[15] = 1.0;
  if (tau_idx_1 != 0.0) {
    c_lastc = 13;
    b_coltop = 29;
    while ((c_lastc > 0) && (b_A[b_coltop - 2] == 0.0)) {
      c_lastc--;
      b_coltop--;
    }

    b_coltop = 1;
    knt = 30;
    do {
      exitg1 = 0;
      if (knt <= c_lastc + 29) {
        if (b_A[knt - 1] != 0.0) {
          exitg1 = 1;
        } else {
          knt++;
        }
      } else {
        b_coltop = 0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    c_lastc = 0;
    b_coltop = 0;
  }

  if (c_lastc > 0) {
    xgemv_FSqGfqcA(c_lastc, b_coltop, b_A, 30, b_A, 16, work);
    xgerc_NBLCIUjN(c_lastc, b_coltop, -tau_idx_1, 16, work, b_A, 30);
  }

  for (b_coltop = 16; b_coltop < 28; b_coltop++) {
    b_A[b_coltop] *= -tau_idx_1;
  }

  b_A[15] = 1.0 - tau_idx_1;
  b_A[14] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 14;
    b_coltop = 15;
    while ((c_lastc > 0) && (b_A[b_coltop - 2] == 0.0)) {
      c_lastc--;
      b_coltop--;
    }

    b_coltop = 2;
    exitg2 = false;
    while ((!exitg2) && (b_coltop > 0)) {
      coltop = (b_coltop - 1) * 14 + 15;
      knt = coltop;
      do {
        exitg1 = 0;
        if (knt <= (coltop + c_lastc) - 1) {
          if (b_A[knt - 1] != 0.0) {
            exitg1 = 1;
          } else {
            knt++;
          }
        } else {
          b_coltop--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    c_lastc = 0;
    b_coltop = 0;
  }

  if (c_lastc > 0) {
    xgemv_FSqGfqcA(c_lastc, b_coltop, b_A, 15, b_A, 1, work);
    xgerc_NBLCIUjN(c_lastc, b_coltop, -tau_idx_0, 1, work, b_A, 15);
  }

  for (b_coltop = 1; b_coltop < 14; b_coltop++) {
    b_A[b_coltop] *= -tau_idx_0;
  }

  b_A[0] = 1.0 - tau_idx_0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    memcpy(&Q[c_lastc * 14], &b_A[c_lastc * 14], 14U * sizeof(real_T));
  }
}
