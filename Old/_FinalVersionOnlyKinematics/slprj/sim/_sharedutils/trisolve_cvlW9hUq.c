#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_cvlW9hUq.h"

void trisolve_cvlW9hUq(const real_T A[4], real_T B[14])
{
  int32_T j;
  int32_T jBcol;
  for (j = 0; j < 7; j++) {
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
