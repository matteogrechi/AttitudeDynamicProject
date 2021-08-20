#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_WPnjaWdR.h"
#include "mwmathutil.h"
#include "xgemv_aEKGH9Yx.h"
#include "xgerc_M2jGMdL8.h"
#include "xnrm2_RQgmBTO8.h"
#include "xscal_HEFlTQwb.h"
#include "qr_rXyRqJVO.h"

void qr_rXyRqJVO(const real_T A[8], real_T Q[8], real_T R[4])
{
  real_T b_A[8];
  real_T work[2];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 3U);
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_RQgmBTO8(3, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_HEFlTQwb(3, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_RQgmBTO8(3, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_HEFlTQwb(3, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_HEFlTQwb(3, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 4;
    c_lastc = 3;
    while ((knt > 0) && (b_A[c_lastc] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_WPnjaWdR(knt, 1, b_A, 5, 4);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_aEKGH9Yx(knt, c_lastc, b_A, 5, b_A, 1, work);
    xgerc_M2jGMdL8(knt, c_lastc, -b, 1, work, b_A, 5);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[5];
  b = 0.0;
  xnorm = xnrm2_RQgmBTO8(2, b_A, 7);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[5], xnorm);
    if (b_A[5] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_HEFlTQwb(2, 9.9792015476736E+291, b_A, 7);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_RQgmBTO8(2, b_A, 7));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_HEFlTQwb(2, 1.0 / (b_atmp - xnorm), b_A, 7);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[5]) / xnorm;
      xscal_HEFlTQwb(2, 1.0 / (b_A[5] - xnorm), b_A, 7);
      b_atmp = xnorm;
    }
  }

  b_A[5] = b_atmp;
  R[0] = b_A[0];
  R[1] = 0.0;
  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 2] = b_A[c_lastc + 4];
  }

  work[1] = 0.0;
  xscal_HEFlTQwb(2, -b, b_A, 7);
  b_A[5] = 1.0 - b;
  b_A[4] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 4;
    knt = 0;
    while ((c_lastc > 0) && (b_A[knt + 3] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_WPnjaWdR(c_lastc, 1, b_A, 5, 4);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_aEKGH9Yx(c_lastc, knt, b_A, 5, b_A, 1, work);
    xgerc_M2jGMdL8(c_lastc, knt, -tau_idx_0, 1, work, b_A, 5);
  }

  xscal_HEFlTQwb(3, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    Q[c_lastc << 2] = b_A[c_lastc << 2];
    Q[(c_lastc << 2) + 1] = b_A[(c_lastc << 2) + 1];
    Q[(c_lastc << 2) + 2] = b_A[(c_lastc << 2) + 2];
    Q[(c_lastc << 2) + 3] = b_A[(c_lastc << 2) + 3];
  }
}
