#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "xnrm2_i5EQXfID.h"
#include "xscal_F84AqW5E.h"
#include "xzlarf_rlIo3GIC.h"
#include "xgeqrf_zaQyNjQm.h"

void xgeqrf_zaQyNjQm(real_T A[200], real_T tau[10])
{
  real_T work[10];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T i;
  int32_T ii;
  int32_T k;
  int32_T knt;
  memset(&work[0], 0, 10U * sizeof(real_T));
  for (i = 0; i < 10; i++) {
    ii = i * 20 + i;
    b_atmp = A[ii];
    b = 0.0;
    xnorm = xnrm2_i5EQXfID(19 - i, A, ii + 2);
    if (xnorm != 0.0) {
      xnorm = muDoubleScalarHypot(A[ii], xnorm);
      if (A[ii] >= 0.0) {
        xnorm = -xnorm;
      }

      if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
        knt = -1;
        do {
          knt++;
          xscal_F84AqW5E(19 - i, 9.9792015476736E+291, A, ii + 2);
          xnorm *= 9.9792015476736E+291;
          b_atmp *= 9.9792015476736E+291;
        } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

        xnorm = muDoubleScalarHypot(b_atmp, xnrm2_i5EQXfID(19 - i, A, ii + 2));
        if (b_atmp >= 0.0) {
          xnorm = -xnorm;
        }

        b = (xnorm - b_atmp) / xnorm;
        xscal_F84AqW5E(19 - i, 1.0 / (b_atmp - xnorm), A, ii + 2);
        for (k = 0; k <= knt; k++) {
          xnorm *= 1.0020841800044864E-292;
        }

        b_atmp = xnorm;
      } else {
        b = (xnorm - A[ii]) / xnorm;
        xscal_F84AqW5E(19 - i, 1.0 / (A[ii] - xnorm), A, ii + 2);
        b_atmp = xnorm;
      }
    }

    tau[i] = b;
    A[ii] = b_atmp;
    if (i + 1 < 10) {
      b_atmp = A[ii];
      A[ii] = 1.0;
      xzlarf_rlIo3GIC(20 - i, 9 - i, ii + 1, tau[i], A, ii + 21, work);
      A[ii] = b_atmp;
    }
  }
}
