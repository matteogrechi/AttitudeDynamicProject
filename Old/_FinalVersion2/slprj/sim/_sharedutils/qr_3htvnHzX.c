#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_LXI6bqi6.h"
#include "mwmathutil.h"
#include "xgemv_jjXybfnK.h"
#include "xgerc_QpvfBaN6.h"
#include "xnrm2_dOeDylWq.h"
#include "xscal_lqXVilPU.h"
#include "qr_3htvnHzX.h"

void qr_3htvnHzX(const real_T A[18], real_T Q[18], real_T R[9])
{
  real_T b_A[18];
  real_T work[3];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T tau_idx_1;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], 18U * sizeof(real_T));
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_dOeDylWq(5, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_lqXVilPU(5, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_dOeDylWq(5, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_lqXVilPU(5, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_lqXVilPU(5, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 6;
    c_lastc = 0;
    while ((knt > 0) && (b_A[c_lastc + 5] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_LXI6bqi6(knt, 2, b_A, 7, 6);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_jjXybfnK(knt, c_lastc, b_A, 7, b_A, 1, work);
    xgerc_QpvfBaN6(knt, c_lastc, -b, 1, work, b_A, 7);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[7];
  b = 0.0;
  xnorm = xnrm2_dOeDylWq(4, b_A, 9);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[7], xnorm);
    if (b_A[7] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_lqXVilPU(4, 9.9792015476736E+291, b_A, 9);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_dOeDylWq(4, b_A, 9));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_lqXVilPU(4, 1.0 / (b_atmp - xnorm), b_A, 9);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[7]) / xnorm;
      xscal_lqXVilPU(4, 1.0 / (b_A[7] - xnorm), b_A, 9);
      b_atmp = xnorm;
    }
  }

  tau_idx_1 = b;
  b_A[7] = 1.0;
  if (b != 0.0) {
    knt = 5;
    c_lastc = 6;
    while ((knt > 0) && (b_A[c_lastc + 5] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_LXI6bqi6(knt, 1, b_A, 14, 6);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_jjXybfnK(knt, c_lastc, b_A, 14, b_A, 8, work);
    xgerc_QpvfBaN6(knt, c_lastc, -b, 8, work, b_A, 14);
  }

  b_A[7] = b_atmp;
  b_atmp = b_A[14];
  b = 0.0;
  xnorm = xnrm2_dOeDylWq(3, b_A, 16);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[14], xnorm);
    if (b_A[14] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_lqXVilPU(3, 9.9792015476736E+291, b_A, 16);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_dOeDylWq(3, b_A, 16));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_lqXVilPU(3, 1.0 / (b_atmp - xnorm), b_A, 16);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[14]) / xnorm;
      xscal_lqXVilPU(3, 1.0 / (b_A[14] - xnorm), b_A, 16);
      b_atmp = xnorm;
    }
  }

  b_A[14] = b_atmp;
  R[0] = b_A[0];
  for (c_lastc = 1; c_lastc + 1 < 4; c_lastc++) {
    R[c_lastc] = 0.0;
  }

  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 3] = b_A[c_lastc + 6];
  }

  while (c_lastc + 1 < 4) {
    R[c_lastc + 3] = 0.0;
    c_lastc++;
  }

  work[1] = 0.0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    R[c_lastc + 6] = b_A[c_lastc + 12];
  }

  work[2] = 0.0;
  xscal_lqXVilPU(3, -b, b_A, 16);
  b_A[14] = 1.0 - b;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    b_A[13 - c_lastc] = 0.0;
  }

  b_A[7] = 1.0;
  if (tau_idx_1 != 0.0) {
    c_lastc = 5;
    knt = 13;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_LXI6bqi6(c_lastc, 1, b_A, 14, 6);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_jjXybfnK(c_lastc, knt, b_A, 14, b_A, 8, work);
    xgerc_QpvfBaN6(c_lastc, knt, -tau_idx_1, 8, work, b_A, 14);
  }

  xscal_lqXVilPU(4, -tau_idx_1, b_A, 9);
  b_A[7] = 1.0 - tau_idx_1;
  b_A[6] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 6;
    knt = 7;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_LXI6bqi6(c_lastc, 2, b_A, 7, 6);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_jjXybfnK(c_lastc, knt, b_A, 7, b_A, 1, work);
    xgerc_QpvfBaN6(c_lastc, knt, -tau_idx_0, 1, work, b_A, 7);
  }

  xscal_lqXVilPU(5, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (knt = 0; knt < 3; knt++) {
    for (c_lastc = 0; c_lastc < 6; c_lastc++) {
      Q[c_lastc + 6 * knt] = b_A[6 * knt + c_lastc];
    }
  }
}
