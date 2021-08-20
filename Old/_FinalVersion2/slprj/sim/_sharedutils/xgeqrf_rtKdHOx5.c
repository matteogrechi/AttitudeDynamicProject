#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_qNoBwdCG.h"
#include "mwmathutil.h"
#include "xgemv_cnzbtLsb.h"
#include "xgerc_z8qVYKk1.h"
#include "xnrm2_0rJMrPAy.h"
#include "xscal_HpZFIRhm.h"
#include "xgeqrf_rtKdHOx5.h"

void xgeqrf_rtKdHOx5(real_T A[98], real_T tau[7])
{
  real_T work[7];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T i;
  int32_T ii;
  int32_T knt;
  int32_T lastc;
  for (i = 0; i < 7; i++) {
    work[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    ii = i * 14 + i;
    b_atmp = A[ii];
    b = 0.0;
    xnorm = xnrm2_0rJMrPAy(13 - i, A, ii + 2);
    if (xnorm != 0.0) {
      xnorm = muDoubleScalarHypot(A[ii], xnorm);
      if (A[ii] >= 0.0) {
        xnorm = -xnorm;
      }

      if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          xscal_HpZFIRhm(13 - i, 9.9792015476736E+291, A, ii + 2);
          xnorm *= 9.9792015476736E+291;
          b_atmp *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

        xnorm = muDoubleScalarHypot(b_atmp, xnrm2_0rJMrPAy(13 - i, A, ii + 2));
        if (b_atmp >= 0.0) {
          xnorm = -xnorm;
        }

        b = (xnorm - b_atmp) / xnorm;
        xscal_HpZFIRhm(13 - i, 1.0 / (b_atmp - xnorm), A, ii + 2);
        for (lastc = 0; lastc <= knt; lastc++) {
          xnorm *= 1.0020841800044864E-292;
        }

        b_atmp = xnorm;
      } else {
        b = (xnorm - A[ii]) / xnorm;
        xscal_HpZFIRhm(13 - i, 1.0 / (A[ii] - xnorm), A, ii + 2);
        b_atmp = xnorm;
      }
    }

    tau[i] = b;
    A[ii] = b_atmp;
    if (i + 1 < 7) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        knt = 14 - i;
        lastc = ii - i;
        while ((knt > 0) && (A[lastc + 13] == 0.0)) {
          knt--;
          lastc--;
        }

        lastc = ilazlc_qNoBwdCG(knt, 6 - i, A, ii + 15, 14);
      } else {
        knt = 0;
        lastc = 0;
      }

      if (knt > 0) {
        xgemv_cnzbtLsb(knt, lastc, A, ii + 15, A, ii + 1, work);
        xgerc_z8qVYKk1(knt, lastc, -tau[i], ii + 1, work, A, ii + 15);
      }

      A[ii] = b_atmp;
    }
  }
}
