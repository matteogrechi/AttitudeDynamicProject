#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_DQyLAJLY.h"
#include "mwmathutil.h"
#include "xgemv_ygObybqp.h"
#include "xgerc_Razz9ZGJ.h"
#include "xnrm2_PEgY4c29.h"
#include "xscal_j6B0CTAZ.h"
#include "qr_D8DARVyI.h"

void qr_D8DARVyI(const real_T A[16], real_T Q[16], real_T R[4])
{
  real_T b_A[16];
  real_T work[2];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 4U);
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_PEgY4c29(7, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_j6B0CTAZ(7, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_PEgY4c29(7, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_j6B0CTAZ(7, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_j6B0CTAZ(7, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 8;
    c_lastc = 7;
    while ((knt > 0) && (b_A[c_lastc] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_DQyLAJLY(knt, 1, b_A, 9, 8);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_ygObybqp(knt, c_lastc, b_A, 9, b_A, 1, work);
    xgerc_Razz9ZGJ(knt, c_lastc, -b, 1, work, b_A, 9);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[9];
  b = 0.0;
  xnorm = xnrm2_PEgY4c29(6, b_A, 11);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[9], xnorm);
    if (b_A[9] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_j6B0CTAZ(6, 9.9792015476736E+291, b_A, 11);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_PEgY4c29(6, b_A, 11));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_j6B0CTAZ(6, 1.0 / (b_atmp - xnorm), b_A, 11);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[9]) / xnorm;
      xscal_j6B0CTAZ(6, 1.0 / (b_A[9] - xnorm), b_A, 11);
      b_atmp = xnorm;
    }
  }

  b_A[9] = b_atmp;
  R[0] = b_A[0];
  R[1] = 0.0;
  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 2] = b_A[c_lastc + 8];
  }

  work[1] = 0.0;
  xscal_j6B0CTAZ(6, -b, b_A, 11);
  b_A[9] = 1.0 - b;
  b_A[8] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 8;
    knt = 0;
    while ((c_lastc > 0) && (b_A[knt + 7] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_DQyLAJLY(c_lastc, 1, b_A, 9, 8);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_ygObybqp(c_lastc, knt, b_A, 9, b_A, 1, work);
    xgerc_Razz9ZGJ(c_lastc, knt, -tau_idx_0, 1, work, b_A, 9);
  }

  xscal_j6B0CTAZ(7, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (knt = 0; knt < 2; knt++) {
    memcpy(&Q[knt << 3], &b_A[knt << 3], sizeof(real_T) << 3U);
  }
}
