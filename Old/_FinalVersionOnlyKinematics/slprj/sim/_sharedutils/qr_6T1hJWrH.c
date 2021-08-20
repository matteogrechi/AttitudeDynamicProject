#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_mRDR3oPu.h"
#include "xgemv_rkAmdjhl.h"
#include "xgeqrf_doWFb7eM.h"
#include "xgerc_K2ngWpzX.h"
#include "xscal_bImATurN.h"
#include "qr_6T1hJWrH.h"

void qr_6T1hJWrH(const real_T A[84], real_T Q[84], real_T R[36])
{
  real_T b_A[84];
  real_T tau[6];
  real_T work[6];
  int32_T d_i;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  memcpy(&b_A[0], &A[0], 84U * sizeof(real_T));
  xgeqrf_doWFb7eM(b_A, tau);
  for (itau = 0; itau < 6; itau++) {
    for (d_i = 0; d_i <= itau; d_i++) {
      R[d_i + 6 * itau] = b_A[14 * itau + d_i];
    }

    for (d_i = itau + 1; d_i + 1 < 7; d_i++) {
      R[d_i + 6 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  for (d_i = 5; d_i >= 0; d_i--) {
    itau = (d_i * 14 + d_i) + 15;
    if (d_i + 1 < 6) {
      b_A[itau - 15] = 1.0;
      if (tau[d_i] != 0.0) {
        lastv = 14 - d_i;
        lastc = itau - d_i;
        while ((lastv > 0) && (b_A[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = ilazlc_mRDR3oPu(lastv, 5 - d_i, b_A, itau, 14);
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        xgemv_rkAmdjhl(lastv, lastc, b_A, itau, b_A, itau - 14, work);
        xgerc_K2ngWpzX(lastv, lastc, -tau[d_i], itau - 14, work, b_A, itau);
      }
    }

    xscal_bImATurN(13 - d_i, -tau[d_i], b_A, itau - 13);
    b_A[itau - 15] = 1.0 - tau[d_i];
    for (lastv = 0; lastv < d_i; lastv++) {
      b_A[(itau - lastv) - 16] = 0.0;
    }
  }

  for (itau = 0; itau < 6; itau++) {
    memcpy(&Q[itau * 14], &b_A[itau * 14], 14U * sizeof(real_T));
  }
}
