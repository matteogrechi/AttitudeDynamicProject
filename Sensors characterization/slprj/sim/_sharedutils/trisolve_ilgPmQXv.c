#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_ilgPmQXv.h"

void trisolve_ilgPmQXv(const real_T A[49], real_T B[49])
{
  int32_T i;
  int32_T j;
  int32_T jBcol;
  int32_T k;
  int32_T kAcol;
  for (j = 0; j < 7; j++) {
    jBcol = 7 * j;
    for (k = 0; k < 7; k++) {
      kAcol = 7 * k;
      if (B[k + jBcol] != 0.0) {
        B[k + jBcol] /= A[k + kAcol];
        for (i = k + 2; i < 8; i++) {
          B[(i + jBcol) - 1] -= A[(i + kAcol) - 1] * B[k + jBcol];
        }
      }
    }
  }
}
