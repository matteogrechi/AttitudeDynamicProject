#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_A6rimwck.h"
#include "mwmathutil.h"
#include "xgemv_GtotAVC4.h"
#include "xgerc_W56dbrAR.h"
#include "xnrm2_2fOF3Fzq.h"
#include "xscal_lrNtrI15.h"
#include "qr_1N5JcJxR.h"

void qr_1N5JcJxR(const real_T A[36], real_T Q[36], real_T R[36])
{
  real_T b_A[36];
  real_T tau[6];
  real_T work[6];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T c_lastc;
  int32_T i;
  int32_T itau;
  int32_T knt;
  for (i = 0; i < 6; i++) {
    tau[i] = 0.0;
  }

  memcpy(&b_A[0], &A[0], 36U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    work[i] = 0.0;
  }

  for (itau = 0; itau < 6; itau++) {
    i = itau * 6 + itau;
    if (itau + 1 < 6) {
      b_atmp = b_A[i];
      b = 0.0;
      xnorm = xnrm2_2fOF3Fzq(5 - itau, b_A, i + 2);
      if (xnorm != 0.0) {
        xnorm = muDoubleScalarHypot(b_A[i], xnorm);
        if (b_A[i] >= 0.0) {
          xnorm = -xnorm;
        }

        if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
          knt = -1;
          do {
            knt++;
            xscal_lrNtrI15(5 - itau, 9.9792015476736E+291, b_A, i + 2);
            xnorm *= 9.9792015476736E+291;
            b_atmp *= 9.9792015476736E+291;
          } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

          xnorm = muDoubleScalarHypot(b_atmp, xnrm2_2fOF3Fzq(5 - itau, b_A, i +
            2));
          if (b_atmp >= 0.0) {
            xnorm = -xnorm;
          }

          b = (xnorm - b_atmp) / xnorm;
          xscal_lrNtrI15(5 - itau, 1.0 / (b_atmp - xnorm), b_A, i + 2);
          for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
            xnorm *= 1.0020841800044864E-292;
          }

          b_atmp = xnorm;
        } else {
          b = (xnorm - b_A[i]) / xnorm;
          xscal_lrNtrI15(5 - itau, 1.0 / (b_A[i] - xnorm), b_A, i + 2);
          b_atmp = xnorm;
        }
      }

      tau[itau] = b;
      b_A[i] = b_atmp;
      b_atmp = b_A[i];
      b_A[i] = 1.0;
      if (tau[itau] != 0.0) {
        knt = 6 - itau;
        c_lastc = i - itau;
        while ((knt > 0) && (b_A[c_lastc + 5] == 0.0)) {
          knt--;
          c_lastc--;
        }

        c_lastc = ilazlc_A6rimwck(knt, 5 - itau, b_A, i + 7, 6);
      } else {
        knt = 0;
        c_lastc = 0;
      }

      if (knt > 0) {
        xgemv_GtotAVC4(knt, c_lastc, b_A, i + 7, b_A, i + 1, work);
        xgerc_W56dbrAR(knt, c_lastc, -tau[itau], i + 1, work, b_A, i + 7);
      }

      b_A[i] = b_atmp;
    } else {
      tau[5] = 0.0;
    }
  }

  for (itau = 0; itau < 6; itau++) {
    for (i = 0; i <= itau; i++) {
      R[i + 6 * itau] = b_A[6 * itau + i];
    }

    for (i = itau + 1; i + 1 < 7; i++) {
      R[i + 6 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  for (i = 5; i >= 0; i--) {
    knt = (i * 6 + i) + 7;
    if (i + 1 < 6) {
      b_A[knt - 7] = 1.0;
      if (tau[i] != 0.0) {
        c_lastc = 6 - i;
        itau = knt - i;
        while ((c_lastc > 0) && (b_A[itau - 2] == 0.0)) {
          c_lastc--;
          itau--;
        }

        itau = ilazlc_A6rimwck(c_lastc, 5 - i, b_A, knt, 6);
      } else {
        c_lastc = 0;
        itau = 0;
      }

      if (c_lastc > 0) {
        xgemv_GtotAVC4(c_lastc, itau, b_A, knt, b_A, knt - 6, work);
        xgerc_W56dbrAR(c_lastc, itau, -tau[i], knt - 6, work, b_A, knt);
      }

      xscal_lrNtrI15(5 - i, -tau[i], b_A, knt - 5);
    }

    b_A[knt - 7] = 1.0 - tau[i];
    for (c_lastc = 0; c_lastc < i; c_lastc++) {
      b_A[(knt - c_lastc) - 8] = 0.0;
    }
  }

  for (itau = 0; itau < 6; itau++) {
    for (i = 0; i < 6; i++) {
      Q[i + 6 * itau] = b_A[6 * itau + i];
    }
  }
}
