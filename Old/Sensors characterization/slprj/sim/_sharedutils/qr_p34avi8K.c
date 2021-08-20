#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "xgemv_ZCPdhZXM.h"
#include "xgeqrf_u2zvnFx8.h"
#include "xgerc_0w770M6q.h"
#include "qr_p34avi8K.h"

void qr_p34avi8K(const real_T A[98], real_T Q[98], real_T R[49])
{
  real_T b_A[98];
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
  memcpy(&b_A[0], &A[0], 98U * sizeof(real_T));
  xgeqrf_u2zvnFx8(b_A, tau);
  for (itau = 0; itau < 7; itau++) {
    for (d_i = 0; d_i <= itau; d_i++) {
      R[d_i + 7 * itau] = b_A[14 * itau + d_i];
    }

    for (d_i = itau + 1; d_i + 1 < 8; d_i++) {
      R[d_i + 7 * itau] = 0.0;
    }

    work[itau] = 0.0;
  }

  itau = 6;
  for (d_i = 6; d_i >= 0; d_i--) {
    iaii = (d_i * 14 + d_i) + 15;
    if (d_i + 1 < 7) {
      b_A[iaii - 15] = 1.0;
      if (tau[itau] != 0.0) {
        lastv = 14 - d_i;
        lastc = iaii - d_i;
        while ((lastv > 0) && (b_A[lastc - 2] == 0.0)) {
          lastv--;
          lastc--;
        }

        lastc = 6 - d_i;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          coltop = (lastc - 1) * 14 + iaii;
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
        xgemv_ZCPdhZXM(lastv, lastc, b_A, iaii, b_A, iaii - 14, work);
        xgerc_0w770M6q(lastv, lastc, -tau[itau], iaii - 14, work, b_A, iaii);
      }
    }

    lastv = (iaii - d_i) - 1;
    for (lastc = iaii - 14; lastc < lastv; lastc++) {
      b_A[lastc] *= -tau[itau];
    }

    b_A[iaii - 15] = 1.0 - tau[itau];
    for (lastv = 0; lastv < d_i; lastv++) {
      b_A[(iaii - lastv) - 16] = 0.0;
    }

    itau--;
  }

  for (itau = 0; itau < 7; itau++) {
    memcpy(&Q[itau * 14], &b_A[itau * 14], 14U * sizeof(real_T));
  }
}
