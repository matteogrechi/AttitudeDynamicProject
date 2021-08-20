#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "xgeqrf_v4hl9cj7.h"
#include "xorgqr_l39ILsiq.h"
#include "qr_2c5xYE2h.h"

void qr_2c5xYE2h(const real_T A[182], real_T Q[182], real_T R[49])
{
  real_T b_A[182];
  real_T tau[7];
  int32_T i;
  int32_T j;
  memcpy(&b_A[0], &A[0], 182U * sizeof(real_T));
  xgeqrf_v4hl9cj7(b_A, tau);
  for (j = 0; j < 7; j++) {
    for (i = 0; i <= j; i++) {
      R[i + 7 * j] = b_A[26 * j + i];
    }

    for (i = j + 1; i + 1 < 8; i++) {
      R[i + 7 * j] = 0.0;
    }
  }

  xorgqr_l39ILsiq(26, 7, 7, b_A, 1, tau, 1);
  for (j = 0; j < 7; j++) {
    memcpy(&Q[j * 26], &b_A[j * 26], 26U * sizeof(real_T));
  }
}
