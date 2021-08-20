#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_S9OEYQSJ.h"
#include "mwmathutil.h"
#include "xgemv_ESuaSzrC.h"
#include "xgerc_i2bxMcTQ.h"
#include "xnrm2_L4hj2YGA.h"
#include "xscal_pU3mmOG2.h"
#include "qr_Cf9gdmJU.h"

void qr_Cf9gdmJU(const real_T A[28], real_T Q[28], real_T R[4])
{
  real_T b_A[28];
  real_T work[2];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], 28U * sizeof(real_T));
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_L4hj2YGA(13, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_pU3mmOG2(13, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_L4hj2YGA(13, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_pU3mmOG2(13, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_pU3mmOG2(13, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 14;
    c_lastc = 13;
    while ((knt > 0) && (b_A[c_lastc] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_S9OEYQSJ(knt, 1, b_A, 15, 14);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_ESuaSzrC(knt, c_lastc, b_A, 15, b_A, 1, work);
    xgerc_i2bxMcTQ(knt, c_lastc, -b, 1, work, b_A, 15);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[15];
  b = 0.0;
  xnorm = xnrm2_L4hj2YGA(12, b_A, 17);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[15], xnorm);
    if (b_A[15] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_pU3mmOG2(12, 9.9792015476736E+291, b_A, 17);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_L4hj2YGA(12, b_A, 17));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_pU3mmOG2(12, 1.0 / (b_atmp - xnorm), b_A, 17);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[15]) / xnorm;
      xscal_pU3mmOG2(12, 1.0 / (b_A[15] - xnorm), b_A, 17);
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
  xscal_pU3mmOG2(12, -b, b_A, 17);
  b_A[15] = 1.0 - b;
  b_A[14] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 14;
    knt = 0;
    while ((c_lastc > 0) && (b_A[knt + 13] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_S9OEYQSJ(c_lastc, 1, b_A, 15, 14);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_ESuaSzrC(c_lastc, knt, b_A, 15, b_A, 1, work);
    xgerc_i2bxMcTQ(c_lastc, knt, -tau_idx_0, 1, work, b_A, 15);
  }

  xscal_pU3mmOG2(13, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (knt = 0; knt < 2; knt++) {
    memcpy(&Q[knt * 14], &b_A[knt * 14], 14U * sizeof(real_T));
  }
}
