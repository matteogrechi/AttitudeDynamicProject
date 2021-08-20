#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "xgeqrf_Nnz60CaT.h"
#include "xorgqr_G7uC2XEk.h"
#include "qr_UDVma41l.h"

void qr_UDVma41l(const real_T A[100], real_T Q[100], real_T R[100])
{
  real_T b_A[100];
  real_T tau[10];
  int32_T i;
  int32_T j;
  memcpy(&b_A[0], &A[0], 100U * sizeof(real_T));
  xgeqrf_Nnz60CaT(b_A, tau);
  for (j = 0; j < 10; j++) {
    for (i = 0; i <= j; i++) {
      R[i + 10 * j] = b_A[10 * j + i];
    }

    for (i = j + 1; i + 1 < 11; i++) {
      R[i + 10 * j] = 0.0;
    }
  }

  xorgqr_G7uC2XEk(10, 10, 10, b_A, 1, tau, 1);
  for (j = 0; j < 10; j++) {
    memcpy(&Q[j * 10], &b_A[j * 10], 10U * sizeof(real_T));
  }
}
