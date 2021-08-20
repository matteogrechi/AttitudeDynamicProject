#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_KzSIWYa5.h"
#include "xgemv_6BnHTlvF.h"
#include "xgerc_F7Fm68EI.h"
#include "xscal_QQtFLsvs.h"
#include "xorgqr_l39ILsiq.h"

void xorgqr_l39ILsiq(int32_T m, int32_T n, int32_T k, real_T A[182], int32_T ia0,
                     const real_T tau[7], int32_T itau0)
{
  real_T work[7];
  int32_T i;
  int32_T iaii;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  if (n >= 1) {
    for (itau = k; itau < n; itau++) {
      i = (itau * 26 + ia0) - 1;
      for (iaii = 0; iaii < m; iaii++) {
        A[i + iaii] = 0.0;
      }

      A[i + itau] = 1.0;
    }

    itau = (itau0 + k) - 2;
    for (i = 0; i < 7; i++) {
      work[i] = 0.0;
    }

    for (i = k; i >= 1; i--) {
      iaii = (((i - 1) * 26 + ia0) + i) + 25;
      if (i < n) {
        A[iaii - 27] = 1.0;
        lastc = (m - i) - 27;
        if (tau[itau] != 0.0) {
          lastv = lastc + 28;
          lastc += iaii;
          while ((lastv > 0) && (A[lastc] == 0.0)) {
            lastv--;
            lastc--;
          }

          lastc = ilazlc_KzSIWYa5(lastv, n - i, A, iaii, 26);
        } else {
          lastv = 0;
          lastc = 0;
        }

        if (lastv > 0) {
          xgemv_6BnHTlvF(lastv, lastc, A, iaii, A, iaii - 26, work);
          xgerc_F7Fm68EI(lastv, lastc, -tau[itau], iaii - 26, work, A, iaii);
        }
      }

      if (i < m) {
        xscal_QQtFLsvs(m - i, -tau[itau], A, iaii - 25);
      }

      A[iaii - 27] = 1.0 - tau[itau];
      for (lastv = 0; lastv <= i - 2; lastv++) {
        A[(iaii - lastv) - 28] = 0.0;
      }

      itau--;
    }
  }
}
