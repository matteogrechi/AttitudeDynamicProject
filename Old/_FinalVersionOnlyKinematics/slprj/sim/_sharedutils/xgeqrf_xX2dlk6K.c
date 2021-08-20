#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_OMRDYZ04.h"
#include "mwmathutil.h"
#include "xgemv_zTsSgwDP.h"
#include "xgerc_LvMrG0nk.h"
#include "xnrm2_mbacW9AS.h"
#include "xscal_g775quh6.h"
#include "xgeqrf_xX2dlk6K.h"

void xgeqrf_xX2dlk6K(real_T A[72], real_T tau[6])
{
  real_T work[6];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T i;
  int32_T ii;
  int32_T knt;
  int32_T lastc;
  for (i = 0; i < 6; i++) {
    work[i] = 0.0;
  }

  for (i = 0; i < 6; i++) {
    ii = i * 12 + i;
    b_atmp = A[ii];
    b = 0.0;
    xnorm = xnrm2_mbacW9AS(11 - i, A, ii + 2);
    if (xnorm != 0.0) {
      xnorm = muDoubleScalarHypot(A[ii], xnorm);
      if (A[ii] >= 0.0) {
        xnorm = -xnorm;
      }

      if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          xscal_g775quh6(11 - i, 9.9792015476736E+291, A, ii + 2);
          xnorm *= 9.9792015476736E+291;
          b_atmp *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

        xnorm = muDoubleScalarHypot(b_atmp, xnrm2_mbacW9AS(11 - i, A, ii + 2));
        if (b_atmp >= 0.0) {
          xnorm = -xnorm;
        }

        b = (xnorm - b_atmp) / xnorm;
        xscal_g775quh6(11 - i, 1.0 / (b_atmp - xnorm), A, ii + 2);
        for (lastc = 0; lastc <= knt; lastc++) {
          xnorm *= 1.0020841800044864E-292;
        }

        b_atmp = xnorm;
      } else {
        b = (xnorm - A[ii]) / xnorm;
        xscal_g775quh6(11 - i, 1.0 / (A[ii] - xnorm), A, ii + 2);
        b_atmp = xnorm;
      }
    }

    tau[i] = b;
    A[ii] = b_atmp;
    if (i + 1 < 6) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        knt = 12 - i;
        lastc = ii - i;
        while ((knt > 0) && (A[lastc + 11] == 0.0)) {
          knt--;
          lastc--;
        }

        lastc = ilazlc_OMRDYZ04(knt, 5 - i, A, ii + 13, 12);
      } else {
        knt = 0;
        lastc = 0;
      }

      if (knt > 0) {
        xgemv_zTsSgwDP(knt, lastc, A, ii + 13, A, ii + 1, work);
        xgerc_LvMrG0nk(knt, lastc, -tau[i], ii + 1, work, A, ii + 13);
      }

      A[ii] = b_atmp;
    }
  }
}