#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_8DwM4HNU.h"

void trisolve_8DwM4HNU(const real_T A[36], real_T B[24])
{
  int32_T i;
  int32_T j;
  int32_T jBcol;
  int32_T k;
  int32_T kAcol;
  for (j = 0; j < 4; j++) {
    jBcol = 6 * j;
    for (k = 0; k < 6; k++) {
      kAcol = 6 * k;
      if (B[k + jBcol] != 0.0) {
        B[k + jBcol] /= A[k + kAcol];
        for (i = k + 2; i < 7; i++) {
          B[(i + jBcol) - 1] -= A[(i + kAcol) - 1] * B[k + jBcol];
        }
      }
    }
  }
}
