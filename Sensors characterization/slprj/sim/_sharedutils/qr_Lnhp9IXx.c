#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "xgemv_B0KAdXmD.h"
#include "xgerc_wBznJaeV.h"
#include "xnrm2_ztqE9zvK.h"
#include "qr_Lnhp9IXx.h"

void qr_Lnhp9IXx(const real_T A[28], real_T Q[28], real_T R[4])
{
  real_T b_A[28];
  real_T work[2];
  real_T b_atmp;
  real_T tau_idx_0;
  real_T tau_idx_1;
  real_T xnorm;
  int32_T c_lastc;
  int32_T exitg1;
  int32_T knt;
  int32_T lastc;
  tau_idx_0 = 0.0;
  tau_idx_1 = 0.0;
  memcpy(&b_A[0], &A[0], 28U * sizeof(real_T));
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = b_A[0];
  xnorm = xnrm2_ztqE9zvK(13, b_A, 2);
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
        for (lastc = 1; lastc < 14; lastc++) {
          b_A[lastc] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_ztqE9zvK(13, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_0 = (xnorm - b_atmp) / xnorm;
      b_atmp = 1.0 / (b_atmp - xnorm);
      for (lastc = 1; lastc < 14; lastc++) {
        b_A[lastc] *= b_atmp;
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
    c_lastc = 13;
    while ((knt > 0) && (b_A[c_lastc] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = 1;
    lastc = 0;
    do {
      exitg1 = 0;
      if (lastc + 15 <= knt + 14) {
        if (b_A[lastc + 14] != 0.0) {
          exitg1 = 1;
        } else {
          lastc++;
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
    xgemv_B0KAdXmD(knt, c_lastc, b_A, 15, b_A, 1, work);
    xgerc_wBznJaeV(knt, c_lastc, -tau_idx_0, 1, work, b_A, 15);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[15];
  xnorm = xnrm2_ztqE9zvK(12, b_A, 17);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[15], xnorm);
    if (b_A[15] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (lastc = 16; lastc < 28; lastc++) {
          b_A[lastc] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_ztqE9zvK(12, b_A, 17));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      tau_idx_1 = (xnorm - b_atmp) / xnorm;
      b_atmp = 1.0 / (b_atmp - xnorm);
      for (lastc = 16; lastc < 28; lastc++) {
        b_A[lastc] *= b_atmp;
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

  b_A[15] = b_atmp;
  R[0] = b_A[0];
  R[1] = 0.0;
  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 2] = b_A[c_lastc + 14];
  }

  work[1] = 0.0;
  for (lastc = 16; lastc < 28; lastc++) {
    b_A[lastc] *= -tau_idx_1;
  }

  b_A[15] = 1.0 - tau_idx_1;
  b_A[14] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 14;
    lastc = 15;
    while ((c_lastc > 0) && (b_A[lastc - 2] == 0.0)) {
      c_lastc--;
      lastc--;
    }

    lastc = 1;
    knt = 15;
    do {
      exitg1 = 0;
      if (knt <= c_lastc + 14) {
        if (b_A[knt - 1] != 0.0) {
          exitg1 = 1;
        } else {
          knt++;
        }
      } else {
        lastc = 0;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    c_lastc = 0;
    lastc = 0;
  }

  if (c_lastc > 0) {
    xgemv_B0KAdXmD(c_lastc, lastc, b_A, 15, b_A, 1, work);
    xgerc_wBznJaeV(c_lastc, lastc, -tau_idx_0, 1, work, b_A, 15);
  }

  for (lastc = 1; lastc < 14; lastc++) {
    b_A[lastc] *= -tau_idx_0;
  }

  b_A[0] = 1.0 - tau_idx_0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    memcpy(&Q[c_lastc * 14], &b_A[c_lastc * 14], 14U * sizeof(real_T));
  }
}
