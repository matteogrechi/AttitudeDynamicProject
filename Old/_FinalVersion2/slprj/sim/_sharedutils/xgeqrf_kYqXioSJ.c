#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_9qJoA4P6.h"
#include "mwmathutil.h"
#include "xgemv_GVNqYBnx.h"
#include "xgerc_wtXkB2ZC.h"
#include "xnrm2_wcxFJeFr.h"
#include "xscal_tZ8ruv63.h"
#include "xgeqrf_kYqXioSJ.h"

void xgeqrf_kYqXioSJ(real_T A[60], real_T tau[3])
{
  real_T work[3];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T knt;
  int32_T lastc;
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  b_atmp = A[0];
  b = 0.0;
  xnorm = xnrm2_wcxFJeFr(19, A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[0], xnorm);
    if (A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_tZ8ruv63(19, 9.9792015476736E+291, A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_wcxFJeFr(19, A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_tZ8ruv63(19, 1.0 / (b_atmp - xnorm), A, 2);
      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - A[0]) / xnorm;
      xscal_tZ8ruv63(19, 1.0 / (A[0] - xnorm), A, 2);
      b_atmp = xnorm;
    }
  }

  tau[0] = b;
  A[0] = b_atmp;
  b_atmp = A[0];
  A[0] = 1.0;
  if (b != 0.0) {
    knt = 20;
    lastc = 0;
    while ((knt > 0) && (A[lastc + 19] == 0.0)) {
      knt--;
      lastc--;
    }

    lastc = ilazlc_9qJoA4P6(knt, 2, A, 21, 20);
  } else {
    knt = 0;
    lastc = 0;
  }

  if (knt > 0) {
    xgemv_GVNqYBnx(knt, lastc, A, 21, A, 1, work);
    xgerc_wtXkB2ZC(knt, lastc, -b, 1, work, A, 21);
  }

  A[0] = b_atmp;
  b_atmp = A[21];
  b = 0.0;
  xnorm = xnrm2_wcxFJeFr(18, A, 23);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[21], xnorm);
    if (A[21] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_tZ8ruv63(18, 9.9792015476736E+291, A, 23);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_wcxFJeFr(18, A, 23));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_tZ8ruv63(18, 1.0 / (b_atmp - xnorm), A, 23);
      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - A[21]) / xnorm;
      xscal_tZ8ruv63(18, 1.0 / (A[21] - xnorm), A, 23);
      b_atmp = xnorm;
    }
  }

  tau[1] = b;
  A[21] = b_atmp;
  b_atmp = A[21];
  A[21] = 1.0;
  if (b != 0.0) {
    knt = 19;
    lastc = 20;
    while ((knt > 0) && (A[lastc + 19] == 0.0)) {
      knt--;
      lastc--;
    }

    lastc = ilazlc_9qJoA4P6(knt, 1, A, 42, 20);
  } else {
    knt = 0;
    lastc = 0;
  }

  if (knt > 0) {
    xgemv_GVNqYBnx(knt, lastc, A, 42, A, 22, work);
    xgerc_wtXkB2ZC(knt, lastc, -b, 22, work, A, 42);
  }

  A[21] = b_atmp;
  b_atmp = A[42];
  tau[2] = 0.0;
  xnorm = xnrm2_wcxFJeFr(17, A, 44);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[42], xnorm);
    if (A[42] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_tZ8ruv63(17, 9.9792015476736E+291, A, 44);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_wcxFJeFr(17, A, 44));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      tau[2] = (xnorm - b_atmp) / xnorm;
      xscal_tZ8ruv63(17, 1.0 / (b_atmp - xnorm), A, 44);
      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      tau[2] = (xnorm - A[42]) / xnorm;
      xscal_tZ8ruv63(17, 1.0 / (A[42] - xnorm), A, 44);
      b_atmp = xnorm;
    }
  }

  A[42] = b_atmp;
}
