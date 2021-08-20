#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_JfAbBWzU.h"
#include "xgemv_HzHquJUn.h"
#include "xgerc_sW5QVbSe.h"
#include "xscal_lQkFRvYn.h"
#include "xorgqr_G7uC2XEk.h"

void xorgqr_G7uC2XEk(int32_T m, int32_T n, int32_T k, real_T A[100], int32_T ia0,
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
      i = (itau * 10 + ia0) - 1;
      for (iaii = 0; iaii < m; iaii++) {
        A[i + iaii] = 0.0;
      }

      A[i + itau] = 1.0;
    }

    itau = (itau0 + k) - 2;
    memset(&work[0], 0, 10U * sizeof(real_T));
    for (i = k; i >= 1; i--) {
      iaii = (((i - 1) * 10 + ia0) + i) + 9;
      if (i < n) {
        A[iaii - 11] = 1.0;
        lastc = (m - i) - 11;
        if (tau[itau] != 0.0) {
          lastv = lastc + 12;
          lastc += iaii;
          while ((lastv > 0) && (A[lastc] == 0.0)) {
            lastv--;
            lastc--;
          }

          lastc = ilazlc_JfAbBWzU(lastv, n - i, A, iaii, 10);
        } else {
          lastv = 0;
          lastc = 0;
        }

        if (lastv > 0) {
          xgemv_HzHquJUn(lastv, lastc, A, iaii, A, iaii - 10, work);
          xgerc_sW5QVbSe(lastv, lastc, -tau[itau], iaii - 10, work, A, iaii);
        }
      }

      if (i < m) {
        xscal_lQkFRvYn(m - i, -tau[itau], A, iaii - 9);
      }

      A[iaii - 11] = 1.0 - tau[itau];
      for (lastv = 0; lastv <= i - 2; lastv++) {
        A[(iaii - lastv) - 12] = 0.0;
      }

      itau--;
    }
  }
}
