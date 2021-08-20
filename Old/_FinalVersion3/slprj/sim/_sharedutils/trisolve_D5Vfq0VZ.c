#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_D5Vfq0VZ.h"

void trisolve_D5Vfq0VZ(const real_T A[4], real_T B[8])
{
  int32_T j;
  int32_T jBcol;
  for (j = 0; j < 4; j++) {
    jBcol = j << 1;
    if (B[jBcol + 1] != 0.0) {
      B[jBcol + 1] /= A[3];
      B[jBcol] -= B[jBcol + 1] * A[2];
    }

    if (B[jBcol] != 0.0) {
      B[jBcol] /= A[0];
    }
  }
}
