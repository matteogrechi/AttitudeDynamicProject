#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_yXVV7323.h"
#include "mwmathutil.h"
#include "xgemv_O10fpp5i.h"
#include "xgerc_8AxdVt8R.h"
#include "xnrm2_7Ag4qc7b.h"
#include "xscal_DORmQr8Z.h"
#include "qr_4g1gr4gZ.h"

void qr_4g1gr4gZ(const real_T A[32], real_T Q[32], real_T R[16])
{
  real_T b_A[32];
  real_T work[4];
  real_T b;
  real_T b_atmp;
  real_T tau_idx_0;
  real_T tau_idx_1;
  real_T tau_idx_2;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  memcpy(&b_A[0], &A[0], sizeof(real_T) << 5U);
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  work[3] = 0.0;
  b_atmp = b_A[0];
  b = 0.0;
  xnorm = xnrm2_7Ag4qc7b(7, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[0], xnorm);
    if (b_A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_DORmQr8Z(7, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_7Ag4qc7b(7, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_DORmQr8Z(7, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[0]) / xnorm;
      xscal_DORmQr8Z(7, 1.0 / (b_A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  tau_idx_0 = b;
  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 8;
    c_lastc = 0;
    while ((knt > 0) && (b_A[c_lastc + 7] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_yXVV7323(knt, 3, b_A, 9, 8);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_O10fpp5i(knt, c_lastc, b_A, 9, b_A, 1, work);
    xgerc_8AxdVt8R(knt, c_lastc, -b, 1, work, b_A, 9);
  }

  b_A[0] = b_atmp;
  b_atmp = b_A[9];
  b = 0.0;
  xnorm = xnrm2_7Ag4qc7b(6, b_A, 11);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[9], xnorm);
    if (b_A[9] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_DORmQr8Z(6, 9.9792015476736E+291, b_A, 11);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_7Ag4qc7b(6, b_A, 11));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_DORmQr8Z(6, 1.0 / (b_atmp - xnorm), b_A, 11);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[9]) / xnorm;
      xscal_DORmQr8Z(6, 1.0 / (b_A[9] - xnorm), b_A, 11);
      b_atmp = xnorm;
    }
  }

  tau_idx_1 = b;
  b_A[9] = 1.0;
  if (b != 0.0) {
    knt = 7;
    c_lastc = 8;
    while ((knt > 0) && (b_A[c_lastc + 7] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_yXVV7323(knt, 2, b_A, 18, 8);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_O10fpp5i(knt, c_lastc, b_A, 18, b_A, 10, work);
    xgerc_8AxdVt8R(knt, c_lastc, -b, 10, work, b_A, 18);
  }

  b_A[9] = b_atmp;
  b_atmp = b_A[18];
  b = 0.0;
  xnorm = xnrm2_7Ag4qc7b(5, b_A, 20);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[18], xnorm);
    if (b_A[18] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_DORmQr8Z(5, 9.9792015476736E+291, b_A, 20);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_7Ag4qc7b(5, b_A, 20));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_DORmQr8Z(5, 1.0 / (b_atmp - xnorm), b_A, 20);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[18]) / xnorm;
      xscal_DORmQr8Z(5, 1.0 / (b_A[18] - xnorm), b_A, 20);
      b_atmp = xnorm;
    }
  }

  tau_idx_2 = b;
  b_A[18] = 1.0;
  if (b != 0.0) {
    knt = 6;
    c_lastc = 16;
    while ((knt > 0) && (b_A[c_lastc + 7] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_yXVV7323(knt, 1, b_A, 27, 8);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_O10fpp5i(knt, c_lastc, b_A, 27, b_A, 19, work);
    xgerc_8AxdVt8R(knt, c_lastc, -b, 19, work, b_A, 27);
  }

  b_A[18] = b_atmp;
  b_atmp = b_A[27];
  b = 0.0;
  xnorm = xnrm2_7Ag4qc7b(4, b_A, 29);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(b_A[27], xnorm);
    if (b_A[27] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_DORmQr8Z(4, 9.9792015476736E+291, b_A, 29);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_7Ag4qc7b(4, b_A, 29));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_DORmQr8Z(4, 1.0 / (b_atmp - xnorm), b_A, 29);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - b_A[27]) / xnorm;
      xscal_DORmQr8Z(4, 1.0 / (b_A[27] - xnorm), b_A, 29);
      b_atmp = xnorm;
    }
  }

  b_A[27] = b_atmp;
  R[0] = b_A[0];
  for (c_lastc = 1; c_lastc + 1 < 5; c_lastc++) {
    R[c_lastc] = 0.0;
  }

  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 4] = b_A[c_lastc + 8];
  }

  while (c_lastc + 1 < 5) {
    R[c_lastc + 4] = 0.0;
    c_lastc++;
  }

  work[1] = 0.0;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    R[c_lastc + 8] = b_A[c_lastc + 16];
  }

  while (c_lastc + 1 < 5) {
    R[c_lastc + 8] = 0.0;
    c_lastc++;
  }

  work[2] = 0.0;
  for (c_lastc = 0; c_lastc < 4; c_lastc++) {
    R[c_lastc + 12] = b_A[c_lastc + 24];
  }

  work[3] = 0.0;
  xscal_DORmQr8Z(4, -b, b_A, 29);
  b_A[27] = 1.0 - b;
  for (c_lastc = 0; c_lastc < 3; c_lastc++) {
    b_A[26 - c_lastc] = 0.0;
  }

  b_A[18] = 1.0;
  if (tau_idx_2 != 0.0) {
    c_lastc = 6;
    knt = 25;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_yXVV7323(c_lastc, 1, b_A, 27, 8);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_O10fpp5i(c_lastc, knt, b_A, 27, b_A, 19, work);
    xgerc_8AxdVt8R(c_lastc, knt, -tau_idx_2, 19, work, b_A, 27);
  }

  xscal_DORmQr8Z(5, -tau_idx_2, b_A, 20);
  b_A[18] = 1.0 - tau_idx_2;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    b_A[17 - c_lastc] = 0.0;
  }

  b_A[9] = 1.0;
  if (tau_idx_1 != 0.0) {
    c_lastc = 7;
    knt = 17;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_yXVV7323(c_lastc, 2, b_A, 18, 8);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_O10fpp5i(c_lastc, knt, b_A, 18, b_A, 10, work);
    xgerc_8AxdVt8R(c_lastc, knt, -tau_idx_1, 10, work, b_A, 18);
  }

  xscal_DORmQr8Z(6, -tau_idx_1, b_A, 11);
  b_A[9] = 1.0 - tau_idx_1;
  b_A[8] = 0.0;
  b_A[0] = 1.0;
  if (tau_idx_0 != 0.0) {
    c_lastc = 8;
    knt = 9;
    while ((c_lastc > 0) && (b_A[knt - 2] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_yXVV7323(c_lastc, 3, b_A, 9, 8);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_O10fpp5i(c_lastc, knt, b_A, 9, b_A, 1, work);
    xgerc_8AxdVt8R(c_lastc, knt, -tau_idx_0, 1, work, b_A, 9);
  }

  xscal_DORmQr8Z(7, -tau_idx_0, b_A, 2);
  b_A[0] = 1.0 - tau_idx_0;
  for (knt = 0; knt < 4; knt++) {
    memcpy(&Q[knt << 3], &b_A[knt << 3], sizeof(real_T) << 3U);
  }
}
