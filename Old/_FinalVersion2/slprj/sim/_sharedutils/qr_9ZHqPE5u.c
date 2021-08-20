#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_0AvrtbiC.h"
#include "mwmathutil.h"
#include "xgemv_QuhEJ9Uh.h"
#include "xgerc_1h9OsXKe.h"
#include "xnrm2_cmRjmIUV.h"
#include "xscal_okRFo2Ne.h"
#include "qr_9ZHqPE5u.h"

void qr_9ZHqPE5u(const real_T A[40], real_T Q[40], real_T R[4])
{
  real_T b_A[40];
  real_T work[2];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], 40U * sizeof(real_T));
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_cmRjmIUV(19, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_okRFo2Ne(19, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_cmRjmIUV(19, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_okRFo2Ne(19, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_okRFo2Ne(19, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 20;
    c_lastc = 19;
    while ((knt > 0) && (b_A[c_lastc] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_0AvrtbiC(knt, 1, b_A, 21, 20);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_QuhEJ9Uh(knt, c_lastc, b_A, 21, b_A, 1, work);
    xgerc_1h9OsXKe(knt, c_lastc, -b, 1, work, b_A, 21);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[21];
  b = 0.0;
  xnorm = xnrm2_cmRjmIUV(18, b_A, 23);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[21], xnorm);
    if (b_A[21] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_okRFo2Ne(18, 9.9792015476736E+291, b_A, 23);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_cmRjmIUV(18, b_A, 23));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_okRFo2Ne(18, 1.0 / (b_atmp - xnorm), b_A, 23);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[21]) / xnorm;
      xscal_okRFo2Ne(18, 1.0 / (b_A[21] - xnorm), b_A, 23);
      b_atmp = xnorm;
    }
  }

  b_A[21] = b_atmp;
  R[0] = b_A[0];
  R[1] = 0.0;
  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 2] = b_A[c_lastc + 20];
  }

  work[1] = 0.0;
  xscal_okRFo2Ne(18, -b, b_A, 23);
  b_A[21] = 1.0 - b;
  b_A[20] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 20;
    knt = 0;
    while ((c_lastc > 0) && (b_A[knt + 19] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_0AvrtbiC(c_lastc, 1, b_A, 21, 20);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_QuhEJ9Uh(c_lastc, knt, b_A, 21, b_A, 1, work);
    xgerc_1h9OsXKe(c_lastc, knt, -tau_idx_0, 1, work, b_A, 21);
  }

  xscal_okRFo2Ne(19, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (knt = 0; knt < 2; knt++) {
    memcpy(&Q[knt * 20], &b_A[knt * 20], 20U * sizeof(real_T));
  }
}
