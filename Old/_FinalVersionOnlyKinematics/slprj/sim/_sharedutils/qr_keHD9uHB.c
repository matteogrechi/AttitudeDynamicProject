#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_OMRDYZ04.h"
#include "xgemv_zTsSgwDP.h"
#include "xgeqrf_xX2dlk6K.h"
#include "xgerc_LvMrG0nk.h"
#include "xscal_g775quh6.h"
#include "qr_keHD9uHB.h"

void qr_keHD9uHB(const real_T A[72], real_T Q[72], real_T R[36])
{
  real_T b_A[72];
  real_T tau[6];
  real_T work[6];
  int32_T d_i;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  memcpy(&b_A[0], &A[0], 72U * sizeof(real_T));
  xgeqrf_xX2dlk6K(b_A, tau);
  for (itau = 0; itau < 6; itau++) {
    for (d_i = 0; d_i <= itau; d_i++) {
      R[d_i + 6 * itau] = b_A[12 * itau + d_i];
    }

    for (d_i = itau + 1; d_i + 1 < 7; d_i++) {
      R[d_i + 6 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  for (d_i = 5; d_i >= 0; d_i--) {
    itau = (d_i * 12 + d_i) + 13;
    if (d_i + 1 < 6) {
      b_A[itau - 13] = 1.0;
      if (tau[d_i] != 0.0) {
        lastv = 12 - d_i;
        lastc = itau - d_i;
        while ((lastv > 0) && (b_A[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = ilazlc_OMRDYZ04(lastv, 5 - d_i, b_A, itau, 12);
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        xgemv_zTsSgwDP(lastv, lastc, b_A, itau, b_A, itau - 12, work);
        xgerc_LvMrG0nk(lastv, lastc, -tau[d_i], itau - 12, work, b_A, itau);
      }
    }

    xscal_g775quh6(11 - d_i, -tau[d_i], b_A, itau - 11);
    b_A[itau - 13] = 1.0 - tau[d_i];
    for (lastv = 0; lastv < d_i; lastv++) {
      b_A[(itau - lastv) - 14] = 0.0;
    }
  }

  for (itau = 0; itau < 6; itau++) {
    memcpy(&Q[itau * 12], &b_A[itau * 12], 12U * sizeof(real_T));
  }
}
