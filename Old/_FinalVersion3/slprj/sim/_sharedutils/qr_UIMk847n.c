#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_47p7muiV.h"
#include "mwmathutil.h"
#include "xgemv_ujev74yA.h"
#include "xgerc_TfLSzBIO.h"
#include "xnrm2_iMXEGyx5.h"
#include "xscal_7RF6om6K.h"
#include "qr_UIMk847n.h"

void qr_UIMk847n(const real_T A[9], real_T Q[9], real_T R[9])
{
  real_T b_A[9];
  real_T work[3];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], 9U * sizeof(real_T));
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_iMXEGyx5(2, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_7RF6om6K(2, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_iMXEGyx5(2, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_7RF6om6K(2, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_7RF6om6K(2, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 3;
    c_lastc = 0;
    while ((knt > 0) && (b_A[c_lastc + 2] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_47p7muiV(knt, 2, b_A, 4, 3);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_ujev74yA(knt, c_lastc, b_A, 4, b_A, 1, work);
    xgerc_TfLSzBIO(knt, c_lastc, -b, 1, work, b_A, 4);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[4];
  b = 0.0;
  xnorm = xnrm2_iMXEGyx5(1, b_A, 6);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[4], xnorm);
    if (b_A[4] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_7RF6om6K(1, 9.9792015476736E+291, b_A, 6);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_iMXEGyx5(1, b_A, 6));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_7RF6om6K(1, 1.0 / (b_atmp - xnorm), b_A, 6);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[4]) / xnorm;
      xscal_7RF6om6K(1, 1.0 / (b_A[4] - xnorm), b_A, 6);
      b_atmp = xnorm;
    }
  }

  b_A[4] = 1.0;
  if (b != 0.0) {
    knt = 2;
    c_lastc = 3;
    while ((knt > 0) && (b_A[c_lastc + 2] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_47p7muiV(knt, 1, b_A, 8, 3);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_ujev74yA(knt, c_lastc, b_A, 8, b_A, 5, work);
    xgerc_TfLSzBIO(knt, c_lastc, -b, 5, work, b_A, 8);
  }

  b_A[4] = b_atmp;
  R[0] = b_A[0];
  for (c_lastc = 1; c_lastc + 1 < 4; c_lastc++) {
    R[c_lastc] = 0.0;
  }

  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 3] = b_A[c_lastc + 3];
  }

  while (c_lastc + 1 < 4) {
    R[c_lastc + 3] = 0.0;
    c_lastc++;
  }

  work[1] = 0.0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    R[c_lastc + 6] = b_A[c_lastc + 6];
  }

  work[2] = 0.0;
  b_A[8] = 1.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    b_A[7 - c_lastc] = 0.0;
  }

  b_A[4] = 1.0;
  if (b != 0.0) {
    knt = 7;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_47p7muiV(c_lastc, 1, b_A, 8, 3);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_ujev74yA(c_lastc, knt, b_A, 8, b_A, 5, work);
    xgerc_TfLSzBIO(c_lastc, knt, -b, 5, work, b_A, 8);
  }

  xscal_7RF6om6K(1, -b, b_A, 6);
  b_A[4] = 1.0 - b;
  b_A[3] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 3;
    knt = 4;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_47p7muiV(c_lastc, 2, b_A, 4, 3);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_ujev74yA(c_lastc, knt, b_A, 4, b_A, 1, work);
    xgerc_TfLSzBIO(c_lastc, knt, -tau_idx_0, 1, work, b_A, 4);
  }

  xscal_7RF6om6K(2, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    Q[3 * c_lastc] = b_A[3 * c_lastc];
    Q[3 * c_lastc + 1] = b_A[3 * c_lastc + 1];
    Q[3 * c_lastc + 2] = b_A[3 * c_lastc + 2];
  }
}
