#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xgemv_AIu4sHRi.h"
#include "xgerc_xMKJrmaB.h"
#include "xnrm2_B7FYXoFf.h"
#include "xgeqrf_wgFosh2X.h"

void xgeqrf_wgFosh2X(real_T A[70], real_T tau[7])
{
  real_T work[7];
  real_T b_atmp;
  real_T xnorm;
  int32_T coltop;
  int32_T exitg1;
  int32_T i;
  int32_T ia;
  int32_T ii;
  int32_T knt;
  int32_T lastc;
  boolean_T exitg2;
  for (i = 0; i < 7; i++) {
    work[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    ii = i * 10 + i;
    b_atmp = A[ii];
    tau[i] = 0.0;
    xnorm = xnrm2_B7FYXoFf(9 - i, A, ii + 2);
    if (xnorm != 0.0) {
      xnorm = muDoubleScalarHypot(A[ii], xnorm);
      if (A[ii] >= 0.0) {
        xnorm = -xnorm;
      }

      if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        lastc = ii - i;
        do {
          knt++;
          for (coltop = ii + 1; coltop < lastc + 10; coltop++) {
            A[coltop] *= 9.9792015476736E+291;
          }

          xnorm *= 9.9792015476736E+291;
          b_atmp *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

        xnorm = muDoubleScalarHypot(b_atmp, xnrm2_B7FYXoFf(9 - i, A, ii + 2));
        if (b_atmp >= 0.0) {
          xnorm = -xnorm;
        }

        tau[i] = (xnorm - b_atmp) / xnorm;
        b_atmp = 1.0 / (b_atmp - xnorm);
        lastc = ii - i;
        for (coltop = ii + 1; coltop < lastc + 10; coltop++) {
          A[coltop] *= b_atmp;
        }

        for (lastc = 0; lastc <= knt; lastc++) {
          xnorm *= 1.0020841800044864E-292;
        }

        b_atmp = xnorm;
      } else {
        tau[i] = (xnorm - A[ii]) / xnorm;
        b_atmp = 1.0 / (A[ii] - xnorm);
        knt = ii - i;
        for (lastc = ii + 1; lastc < knt + 10; lastc++) {
          A[lastc] *= b_atmp;
        }

        b_atmp = xnorm;
      }
    }

    A[ii] = b_atmp;
    if (i + 1 < 7) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        knt = 10 - i;
        lastc = ii - i;
        while ((knt > 0) && (A[lastc + 9] == 0.0)) {
          knt--;
          lastc--;
        }

        lastc = 6 - i;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          coltop = ((lastc - 1) * 10 + ii) + 10;
          ia = coltop;
          do {
            exitg1 = 0;
            if (ia + 1 <= coltop + knt) {
              if (A[ia] != 0.0) {
                exitg1 = 1;
              } else {
                ia++;
              }
            } else {
              lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        knt = 0;
        lastc = 0;
      }

      if (knt > 0) {
        xgemv_AIu4sHRi(knt, lastc, A, ii + 11, A, ii + 1, work);
        xgerc_xMKJrmaB(knt, lastc, -tau[i], ii + 1, work, A, ii + 11);
      }

      A[ii] = b_atmp;
    }
  }
}
