#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xnrm2_A5gfBNrH.h"
#include "xscal_QQtFLsvs.h"
#include "xzlarf_bz4kHHTv.h"
#include "xgeqrf_v4hl9cj7.h"

void xgeqrf_v4hl9cj7(real_T A[182], real_T tau[7])
{
  real_T work[7];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T i;
  int32_T ii;
  int32_T k;
  int32_T knt;
  for (i = 0; i < 7; i++) {
    work[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    ii = i * 26 + i;
    b_atmp = A[ii];
    b = 0.0;
    xnorm = xnrm2_A5gfBNrH(25 - i, A, ii + 2);
    if (xnorm != 0.0) {
      xnorm = muDoubleScalarHypot(A[ii], xnorm);
      if (A[ii] >= 0.0) {
        xnorm = -xnorm;
      }

      if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          xscal_QQtFLsvs(25 - i, 9.9792015476736E+291, A, ii + 2);
          xnorm *= 9.9792015476736E+291;
          b_atmp *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

        xnorm = muDoubleScalarHypot(b_atmp, xnrm2_A5gfBNrH(25 - i, A, ii + 2));
        if (b_atmp >= 0.0) {
          xnorm = -xnorm;
        }

        b = (xnorm - b_atmp) / xnorm;
        xscal_QQtFLsvs(25 - i, 1.0 / (b_atmp - xnorm), A, ii + 2);
        for (k = 0; k <= knt; k++) {
          xnorm *= 1.0020841800044864E-292;
        }

        b_atmp = xnorm;
      } else {
        b = (xnorm - A[ii]) / xnorm;
        xscal_QQtFLsvs(25 - i, 1.0 / (A[ii] - xnorm), A, ii + 2);
        b_atmp = xnorm;
      }
    }

    tau[i] = b;
    A[ii] = b_atmp;
    if (i + 1 < 7) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_bz4kHHTv(26 - i, 6 - i, ii + 1, tau[i], A, ii + 27, work);
      A[ii] = b_atmp;
    }
  }
}
