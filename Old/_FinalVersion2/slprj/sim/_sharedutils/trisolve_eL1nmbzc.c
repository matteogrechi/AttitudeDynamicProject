#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_eL1nmbzc.h"

void trisolve_eL1nmbzc(const real_T A[9], real_T B[30])
{
  int32_T i;
  int32_T j;
  int32_T jBcol;
  for (j = 0; j < 10; j++) {
    jBcol = 3 * j;
    if (B[jBcol + 2] != 0.0) {
      B[jBcol + 2] /= A[8];
      for (i = 0; i < 2; i++) {
        B[i + jBcol] -= B[jBcol + 2] * A[i + 6];
      }
    }

    if (B[jBcol + 1] != 0.0) {
      B[jBcol + 1] /= A[4];
      B[jBcol] -= B[jBcol + 1] * A[3];
    }

    if (B[jBcol] != 0.0) {
      B[jBcol] /= A[0];
    }
  }
}
