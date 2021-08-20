#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_cB1qVHB6.h"
#include "xgemv_SLIL4xQU.h"
#include "xgeqrf_zL4vGvhx.h"
#include "xgerc_79Vgpt6d.h"
#include "xscal_2aH08qOV.h"
#include "qr_BmrLq1sa.h"

void qr_BmrLq1sa(const real_T A[49], real_T Q[49], real_T R[49])
{
  real_T b_A[49];
  real_T tau[7];
  real_T work[7];
  int32_T d_i;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  memcpy(&b_A[0], &A[0], 49U * sizeof(real_T));
  xgeqrf_zL4vGvhx(b_A, tau);
  for (itau = 0; itau < 7; itau++) {
    for (d_i = 0; d_i <= itau; d_i++) {
      R[d_i + 7 * itau] = b_A[7 * itau + d_i];
    }

    for (d_i = itau + 1; d_i + 1 < 8; d_i++) {
      R[d_i + 7 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  for (d_i = 6; d_i >= 0; d_i--) {
    itau = (d_i * 7 + d_i) + 8;
    if (d_i + 1 < 7) {
      b_A[itau - 8] = 1.0;
      if (tau[d_i] != 0.0) {
        lastv = 7 - d_i;
        lastc = itau - d_i;
        while ((lastv > 0) && (b_A[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = ilazlc_cB1qVHB6(lastv, 6 - d_i, b_A, itau, 7);
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        xgemv_SLIL4xQU(lastv, lastc, b_A, itau, b_A, itau - 7, work);
        xgerc_79Vgpt6d(lastv, lastc, -tau[d_i], itau - 7, work, b_A, itau);
      }

      xscal_2aH08qOV(6 - d_i, -tau[d_i], b_A, itau - 6);
    }

    b_A[itau - 8] = 1.0 - tau[d_i];
    for (lastv = 0; lastv < d_i; lastv++) {
      b_A[(itau - lastv) - 9] = 0.0;
    }
  }

  for (itau = 0; itau < 7; itau++) {
    for (d_i = 0; d_i < 7; d_i++) {
      Q[d_i + 7 * itau] = b_A[7 * itau + d_i];
    }
  }
}
