#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "xgemv_n8U1Z1Fc.h"
#include "xgeqrf_g94hq17B.h"
#include "xgerc_DNq0w1et.h"
#include "qr_MJxY6AHd.h"

void qr_MJxY6AHd(const real_T A[63], real_T Q[63], real_T R[49])
{
  real_T b_A[63];
  real_T tau[7];
  real_T work[7];
  int32_T coltop;
  int32_T d_i;
  int32_T exitg1;
  int32_T ia;
  int32_T iaii;
  int32_T itau;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  memcpy(&b_A[0], &A[0], 63U * sizeof(real_T));
  xgeqrf_g94hq17B(b_A, tau);
  for (itau = 0; itau < 7; itau++) {
    for (d_i = 0; d_i <= itau; d_i++) {
      R[d_i + 7 * itau] = b_A[9 * itau + d_i];
    }

    for (d_i = itau + 1; d_i + 1 < 8; d_i++) {
      R[d_i + 7 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  itau = 6;
  for (d_i = 6; d_i >= 0; d_i--) {
    iaii = (d_i * 9 + d_i) + 10;
    if (d_i + 1 < 7) {
      b_A[iaii - 10] = 1.0;
      if (tau[itau] != 0.0) {
        lastv = 9 - d_i;
        lastc = iaii - d_i;
        while ((lastv > 0) && (b_A[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = 6 - d_i;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          coltop = (lastc - 1) * 9 + iaii;
          ia = coltop;
          do {
            exitg1 = 0;
            if (ia <= (coltop + lastv) - 1) {
              if (b_A[ia - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ia++;
              }
            } else {
              lastc--;
              exitg1 = 2;
            }
          } while (exitg1 == 0);

          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      } else {
        lastv = 0;
        lastc = 0;
      }

      if (lastv > 0) {
        xgemv_n8U1Z1Fc(lastv, lastc, b_A, iaii, b_A, iaii - 9, work);
        xgerc_DNq0w1et(lastv, lastc, -tau[itau], iaii - 9, work, b_A, iaii);
      }
    }

    lastv = (iaii - d_i) - 1;
    for (lastc = iaii - 9; lastc < lastv; lastc++) {
      b_A[lastc] *= -tau[itau];
    }

    b_A[iaii - 10] = 1.0 - tau[itau];
    for (lastv = 0; lastv < d_i; lastv++) {
      b_A[(iaii - lastv) - 11] = 0.0;
    }

    itau--;
  }

  for (itau = 0; itau < 7; itau++) {
    memcpy(&Q[itau * 9], &b_A[itau * 9], 9U * sizeof(real_T));
  }
}
