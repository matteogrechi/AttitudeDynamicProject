#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "xgeqrf_zaQyNjQm.h"
#include "xorgqr_rsI78S1n.h"
#include "qr_AgyVYBEd.h"

void qr_AgyVYBEd(const real_T A[200], real_T Q[200], real_T R[100])
{
  real_T b_A[200];
  real_T tau[10];
  int32_T i;
  int32_T j;
  memcpy(&b_A[0], &A[0], 200U * sizeof(real_T));
  xgeqrf_zaQyNjQm(b_A, tau);
  for (j = 0; j < 10; j++) {
    for (i = 0; i <= j; i++) {
      R[i + 10 * j] = b_A[20 * j + i];
    }

    for (i = j + 1; i + 1 < 11; i++) {
      R[i + 10 * j] = 0.0;
    }
  }

  xorgqr_rsI78S1n(20, 10, 10, b_A, 1, tau, 1);
  for (j = 0; j < 10; j++) {
    memcpy(&Q[j * 20], &b_A[j * 20], 20U * sizeof(real_T));
  }
}
