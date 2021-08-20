#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_fYIugbQT.h"
#include "xgemv_Qyu3HdjX.h"
#include "xgerc_N2d1K9WT.h"
#include "xscal_F84AqW5E.h"
#include "xorgqr_rsI78S1n.h"

void xorgqr_rsI78S1n(int32_T m, int32_T n, int32_T k, real_T A[200], int32_T ia0,
                     const real_T tau[10], int32_T itau0)
{
  real_T work[10];
  int32_T i;
  int32_T iaii;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  if (n >= 1) {
    for (itau = k; itau < n; itau++) {
      i = (itau * 20 + ia0) - 1;
      for (iaii = 0; iaii < m; iaii++) {
        A[i + iaii] = 0.0;
      }

      A[i + itau] = 1.0;
    }

    itau = (itau0 + k) - 2;
    memset(&work[0], 0, 10U * sizeof(real_T));
    for (i = k; i >= 1; i--) {
      iaii = (((i - 1) * 20 + ia0) + i) + 19;
      if (i < n) {
        A[iaii - 21] = 1.0;
        lastc = (m - i) - 21;
        if (tau[itau] != 0.0) {
          lastv = lastc + 22;
          lastc += iaii;
          while ((lastv > 0) && (A[lastc] == 0.0)) {
            lastv--;
            lastc--;
          }

          lastc = ilazlc_fYIugbQT(lastv, n - i, A, iaii, 20);
        } else {
          lastv = 0;
          lastc = 0;
        }

        if (lastv > 0) {
          xgemv_Qyu3HdjX(lastv, lastc, A, iaii, A, iaii - 20, work);
          xgerc_N2d1K9WT(lastv, lastc, -tau[itau], iaii - 20, work, A, iaii);
        }
      }

      if (i < m) {
        xscal_F84AqW5E(m - i, -tau[itau], A, iaii - 19);
      }

      A[iaii - 21] = 1.0 - tau[itau];
      for (lastv = 0; lastv <= i - 2; lastv++) {
        A[(iaii - lastv) - 22] = 0.0;
      }

      itau--;
    }
  }
}
