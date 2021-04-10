#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xgemv_54bVPMS2.h"
#include "xgerc_Oks3akT7.h"
#include "xnrm2_OEmfMfas.h"
#include "qr_iVgYa0GN.h"

void qr_iVgYa0GN(const real_T A[4], real_T Q[4], real_T R[4])
{
  real_T b_A[4];
  real_T work[2];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T c_lastc;
  int32_T exitg1;
  int32_T knt;
  int32_T lastc;
  b_A[0] = A[0];
  b_A[1] = A[1];
  b_A[2] = A[2];
  b_A[3] = A[3];
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = A[0];
  b = 0.0;
  xnorm = xnrm2_OEmfMfas(1, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[0], xnorm);
    if (A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        for (c_lastc = 1; c_lastc < 2; c_lastc++) {
          b_A[c_lastc] *= 9.9792015476736E+291;
        }

        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_OEmfMfas(1, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      b_atmp = 1.0 / (b_atmp - xnorm);
      for (c_lastc = 1; c_lastc < 2; c_lastc++) {
        b_A[c_lastc] *= b_atmp;
      }

      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - A[0]) / xnorm;
      b_atmp = 1.0 / (A[0] - xnorm);
      for (knt = 1; knt < 2; knt++) {
        b_A[knt] *= b_atmp;
      }

      b_atmp = xnorm;
    }
  }

  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 2;
    c_lastc = 1;
    while ((knt > 0) && (b_A[c_lastc] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = 1;
    lastc = 0;
    do {
      exitg1 = 0;
      if (lastc + 3 <= knt + 2) {
        if (b_A[lastc + 2] != 0.0) {
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
    xgemv_54bVPMS2(knt, c_lastc, b_A, 3, b_A, 1, work);
    xgerc_Oks3akT7(knt, c_lastc, -b, 1, work, b_A, 3);
  }

  b_A[0] = b_atmp;
  R[0] = b_atmp;
  R[1] = 0.0;
  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 2] = b_A[c_lastc + 2];
  }

  work[1] = 0.0;
  b_A[3] = 1.0;
  b_A[2] = 0.0;
  b_A[0] = 1.0;
  if (b != 0.0) {
    c_lastc = 2;
    lastc = 1;
    while ((c_lastc > 0) && (b_A[lastc] == 0.0)) {
      c_lastc--;
      lastc--;
    }

    lastc = 1;
    knt = 1;
    do {
      exitg1 = 0;
      if (knt + 2 <= c_lastc + 2) {
        if (b_A[knt + 1] != 0.0) {
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
    xgemv_54bVPMS2(c_lastc, lastc, b_A, 3, b_A, 1, work);
    xgerc_Oks3akT7(c_lastc, lastc, -b, 1, work, b_A, 3);
  }

  for (c_lastc = 1; c_lastc < 2; c_lastc++) {
    b_A[c_lastc] *= -b;
  }

  Q[0] = 1.0 - b;
  Q[1] = b_A[1];
  Q[2] = b_A[2];
  Q[3] = b_A[3];
}
