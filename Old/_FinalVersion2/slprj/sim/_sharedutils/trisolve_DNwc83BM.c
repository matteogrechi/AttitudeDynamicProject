#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_DNwc83BM.h"

void trisolve_DNwc83BM(const real_T A[9], real_T B[21])
{
  int32_T i;
  int32_T j;
  int32_T jBcol;
  for (j = 0; j < 7; j++) {
    jBcol = 3 * j;
    if (B[jBcol] != 0.0) {
      B[jBcol] /= A[0];
      for (i = 2; i < 4; i++) {
        B[(i + jBcol) - 1] -= A[i - 1] * B[jBcol];
      }
    }

    if (B[jBcol + 1] != 0.0) {
      B[jBcol + 1] /= A[4];
      B[jBcol + 2] -= B[jBcol + 1] * A[5];
    }

    if (B[jBcol + 2] != 0.0) {
      B[jBcol + 2] /= A[8];
    }
  }
}
