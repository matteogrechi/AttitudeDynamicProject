#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_JfAbBWzU.h"
#include "mwmathutil.h"
#include "xgemv_HzHquJUn.h"
#include "xgerc_sW5QVbSe.h"
#include "xnrm2_erKa1JZf.h"
#include "xscal_lQkFRvYn.h"
#include "xgeqrf_Nnz60CaT.h"

void xgeqrf_Nnz60CaT(real_T A[100], real_T tau[10])
{
  real_T work[10];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T i;
  int32_T ii;
  int32_T knt;
  int32_T lastc;
  memset(&tau[0], 0, 10U * sizeof(real_T));
  memset(&work[0], 0, 10U * sizeof(real_T));
  for (i = 0; i < 10; i++) {
    ii = i * 10 + i;
    if (i + 1 < 10) {
      b_atmp = A[ii];
      b = 0.0;
      xnorm = xnrm2_erKa1JZf(9 - i, A, ii + 2);
      if (xnorm != 0.0) {
        xnorm = muDoubleScalarHypot(A[ii], xnorm);
        if (A[ii] >= 0.0) {
          xnorm = -xnorm;
        }

        if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
          knt = -1;
          do {
            knt++;
            xscal_lQkFRvYn(9 - i, 9.9792015476736E+291, A, ii + 2);
            xnorm *= 9.9792015476736E+291;
            b_atmp *= 9.9792015476736E+291;
          } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

          xnorm = muDoubleScalarHypot(b_atmp, xnrm2_erKa1JZf(9 - i, A, ii + 2));
          if (b_atmp >= 0.0) {
            xnorm = -xnorm;
          }

          b = (xnorm - b_atmp) / xnorm;
          xscal_lQkFRvYn(9 - i, 1.0 / (b_atmp - xnorm), A, ii + 2);
          for (lastc = 0; lastc <= knt; lastc++) {
            xnorm *= 1.0020841800044864E-292;
          }

          b_atmp = xnorm;
        } else {
          b = (xnorm - A[ii]) / xnorm;
          xscal_lQkFRvYn(9 - i, 1.0 / (A[ii] - xnorm), A, ii + 2);
          b_atmp = xnorm;
        }
      }

      tau[i] = b;
      A[ii] = b_atmp;
      b_atmp = A[ii];
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        knt = 10 - i;
        lastc = ii - i;
        while ((knt > 0) && (A[lastc + 9] == 0.0)) {
          knt--;
          lastc--;
        }

        lastc = ilazlc_JfAbBWzU(knt, 9 - i, A, ii + 11, 10);
      } else {
        knt = 0;
        lastc = 0;
      }

      if (knt > 0) {
        xgemv_HzHquJUn(knt, lastc, A, ii + 11, A, ii + 1, work);
        xgerc_sW5QVbSe(knt, lastc, -tau[i], ii + 1, work, A, ii + 11);
      }

      A[ii] = b_atmp;
    } else {
      tau[9] = 0.0;
    }
  }
}
