#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "ilazlc_qNoBwdCG.h"
#include "xgemv_cnzbtLsb.h"
#include "xgeqrf_rtKdHOx5.h"
#include "xgerc_z8qVYKk1.h"
#include "xscal_HpZFIRhm.h"
#include "qr_asfj7swv.h"

void qr_asfj7swv(const real_T A[98], real_T Q[98], real_T R[49])
{
  real_T b_A[98];
  real_T tau[7];
  real_T work[7];
  int32_T d_i;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  memcpy(&b_A[0], &A[0], 98U * sizeof(real_T));
  xgeqrf_rtKdHOx5(b_A, tau);
  for (itau = 0; itau < 7; itau++) {
    for (d_i = 0; d_i <= itau; d_i++) {
      R[d_i + 7 * itau] = b_A[14 * itau + d_i];
    }

    for (d_i = itau + 1; d_i + 1 < 8; d_i++) {
      R[d_i + 7 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  for (d_i = 6; d_i >= 0; d_i--) {
    itau = (d_i * 14 + d_i) + 15;
    if (d_i + 1 < 7) {
      b_A[itau - 15] = 1.0;
      if (tau[d_i] != 0.0) {
        lastv = 14 - d_i;
        lastc = itau - d_i;
        while ((lastv > 0) && (b_A[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = ilazlc_qNoBwdCG(lastv, 6 - d_i, b_A, itau, 14);
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        xgemv_cnzbtLsb(lastv, lastc, b_A, itau, b_A, itau - 14, work);
        xgerc_z8qVYKk1(lastv, lastc, -tau[d_i], itau - 14, work, b_A, itau);
      }
    }

    xscal_HpZFIRhm(13 - d_i, -tau[d_i], b_A, itau - 13);
    b_A[itau - 15] = 1.0 - tau[d_i];
    for (lastv = 0; lastv < d_i; lastv++) {
      b_A[(itau - lastv) - 16] = 0.0;
    }
  }

  for (itau = 0; itau < 7; itau++) {
    memcpy(&Q[itau * 14], &b_A[itau * 14], 14U * sizeof(real_T));
  }
}
