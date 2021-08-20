#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_cB1qVHB6.h"
#include "mwmathutil.h"
#include "xgemv_SLIL4xQU.h"
#include "xgerc_79Vgpt6d.h"
#include "xnrm2_ClLpIAYl.h"
#include "xscal_2aH08qOV.h"
#include "xgeqrf_zL4vGvhx.h"

void xgeqrf_zL4vGvhx(real_T A[49], real_T tau[7])
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
    tau[i] = 0.0;
    work[i] = 0.0;
  }

  for (i = 0; i < 7; i++) {
    ii = i * 7 + i;
    if (i + 1 < 7) {
      b_atmp = A[ii];
      b = 0.0;
      xnorm = xnrm2_ClLpIAYl(6 - i, A, ii + 2);
      if (xnorm != 0.0) {
        xnorm = muDoubleScalarHypot(A[ii], xnorm);
        if (A[ii] >= 0.0) {
          xnorm = -xnorm;
        }

        if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
          knt = -1;
          do {
            knt++;
            xscal_2aH08qOV(6 - i, 9.9792015476736E+291, A, ii + 2);
            xnorm *= 9.9792015476736E+291;
            b_atmp *= 9.9792015476736E+291;
          } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

          xnorm = muDoubleScalarHypot(b_atmp, xnrm2_ClLpIAYl(6 - i, A, ii + 2));
          if (b_atmp >= 0.0) {
            xnorm = -xnorm;
          }

          b = (xnorm - b_atmp) / xnorm;
          xscal_2aH08qOV(6 - i, 1.0 / (b_atmp - xnorm), A, ii + 2);
          for (lastc = 0; lastc <= knt; lastc++) {
            xnorm *= 1.0020841800044864E-292;
          }

          b_atmp = xnorm;
        } else {
          b = (xnorm - A[ii]) / xnorm;
          xscal_2aH08qOV(6 - i, 1.0 / (A[ii] - xnorm), A, ii + 2);
          b_atmp = xnorm;
        }
      }

      tau[i] = b;
      A[ii] = b_atmp;
      b_atmp = A[ii];
      A[ii] = 1.0;
      if (tau[i] != 0.0) {
        knt = 7 - i;
        lastc = ii - i;
        while ((knt > 0) && (A[lastc + 6] == 0.0)) {
          knt--;
          lastc--;
        }

        lastc = ilazlc_cB1qVHB6(knt, 6 - i, A, ii + 8, 7);
      } else {
        knt = 0;
        lastc = 0;
      }

      if (knt > 0) {
        xgemv_SLIL4xQU(knt, lastc, A, ii + 8, A, ii + 1, work);
        xgerc_79Vgpt6d(knt, lastc, -tau[i], ii + 1, work, A, ii + 8);
      }

      A[ii] = b_atmp;
    } else {
      tau[6] = 0.0;
    }
  }
}
