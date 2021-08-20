#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_DQyLAJLY.h"
#include "mwmathutil.h"
#include "xgemv_oIQ2KcxD.h"
#include "xgerc_EaI43Gz0.h"
#include "xnrm2_PEgY4c29.h"
#include "xscal_j6B0CTAZ.h"
#include "qr_YNJFsTeT.h"

void qr_YNJFsTeT(const real_T A[16], real_T Q[16], real_T R[16])
{
  real_T b_A[16];
  real_T work[4];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T tau_idx_1;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 4U);
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  work[3] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_PEgY4c29(3, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_j6B0CTAZ(3, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_PEgY4c29(3, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_j6B0CTAZ(3, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_j6B0CTAZ(3, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 4;
    c_lastc = 0;
    while ((knt > 0) && (b_A[c_lastc + 3] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_DQyLAJLY(knt, 3, b_A, 5, 4);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_oIQ2KcxD(knt, c_lastc, b_A, 5, b_A, 1, work);
    xgerc_EaI43Gz0(knt, c_lastc, -b, 1, work, b_A, 5);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[5];
  b = 0.0;
  xnorm = xnrm2_PEgY4c29(2, b_A, 7);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[5], xnorm);
    if (b_A[5] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_j6B0CTAZ(2, 9.9792015476736E+291, b_A, 7);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_PEgY4c29(2, b_A, 7));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_j6B0CTAZ(2, 1.0 / (b_atmp - xnorm), b_A, 7);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[5]) / xnorm;
      xscal_j6B0CTAZ(2, 1.0 / (b_A[5] - xnorm), b_A, 7);
      b_atmp = xnorm;
    }
  }

  tau_idx_1 = b;
  b_A[5] = 1.0;
  if (b != 0.0) {
    knt = 3;
    c_lastc = 4;
    while ((knt > 0) && (b_A[c_lastc + 3] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_DQyLAJLY(knt, 2, b_A, 10, 4);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_oIQ2KcxD(knt, c_lastc, b_A, 10, b_A, 6, work);
    xgerc_EaI43Gz0(knt, c_lastc, -b, 6, work, b_A, 10);
  }

  b_A[5] = b_atmp;
  b_atmp = b_A[10];
  b = 0.0;
  xnorm = xnrm2_PEgY4c29(1, b_A, 12);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[10], xnorm);
    if (b_A[10] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_j6B0CTAZ(1, 9.9792015476736E+291, b_A, 12);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_PEgY4c29(1, b_A, 12));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_j6B0CTAZ(1, 1.0 / (b_atmp - xnorm), b_A, 12);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[10]) / xnorm;
      xscal_j6B0CTAZ(1, 1.0 / (b_A[10] - xnorm), b_A, 12);
      b_atmp = xnorm;
    }
  }

  b_A[10] = 1.0;
  if (b != 0.0) {
    knt = 2;
    c_lastc = 8;
    while ((knt > 0) && (b_A[c_lastc + 3] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_DQyLAJLY(knt, 1, b_A, 15, 4);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_oIQ2KcxD(knt, c_lastc, b_A, 15, b_A, 11, work);
    xgerc_EaI43Gz0(knt, c_lastc, -b, 11, work, b_A, 15);
  }

  b_A[10] = b_atmp;
  R[0] = b_A[0];
  for (c_lastc = 1; c_lastc + 1 < 5; c_lastc++) {
    R[c_lastc] = 0.0;
  }

  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 4] = b_A[c_lastc + 4];
  }

  while (c_lastc + 1 < 5) {
    R[c_lastc + 4] = 0.0;
    c_lastc++;
  }

  work[1] = 0.0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    R[c_lastc + 8] = b_A[c_lastc + 8];
  }

  while (c_lastc + 1 < 5) {
    R[c_lastc + 8] = 0.0;
    c_lastc++;
  }

  work[2] = 0.0;
  for (c_lastc = 0; c_lastc < 4; c_lastc++) {
    R[c_lastc + 12] = b_A[c_lastc + 12];
  }

  work[3] = 0.0;
  b_A[15] = 1.0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    b_A[14 - c_lastc] = 0.0;
  }

  b_A[10] = 1.0;
  if (b != 0.0) {
    c_lastc = 2;
    knt = 13;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_DQyLAJLY(c_lastc, 1, b_A, 15, 4);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_oIQ2KcxD(c_lastc, knt, b_A, 15, b_A, 11, work);
    xgerc_EaI43Gz0(c_lastc, knt, -b, 11, work, b_A, 15);
  }

  xscal_j6B0CTAZ(1, -b, b_A, 12);
  b_A[10] = 1.0 - b;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    b_A[9 - c_lastc] = 0.0;
  }

  b_A[5] = 1.0;
  if (tau_idx_1 != 0.0) {
    c_lastc = 3;
    knt = 9;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_DQyLAJLY(c_lastc, 2, b_A, 10, 4);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_oIQ2KcxD(c_lastc, knt, b_A, 10, b_A, 6, work);
    xgerc_EaI43Gz0(c_lastc, knt, -tau_idx_1, 6, work, b_A, 10);
  }

  xscal_j6B0CTAZ(2, -tau_idx_1, b_A, 7);
  b_A[5] = 1.0 - tau_idx_1;
  b_A[4] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 4;
    knt = 5;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_DQyLAJLY(c_lastc, 3, b_A, 5, 4);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_oIQ2KcxD(c_lastc, knt, b_A, 5, b_A, 1, work);
    xgerc_EaI43Gz0(c_lastc, knt, -tau_idx_0, 1, work, b_A, 5);
  }

  xscal_j6B0CTAZ(3, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (c_lastc = 0; c_lastc < 4; c_lastc++) {
    Q[c_lastc << 2] = b_A[c_lastc << 2];
    Q[(c_lastc << 2) + 1] = b_A[(c_lastc << 2) + 1];
    Q[(c_lastc << 2) + 2] = b_A[(c_lastc << 2) + 2];
    Q[(c_lastc << 2) + 3] = b_A[(c_lastc << 2) + 3];
  }
}
