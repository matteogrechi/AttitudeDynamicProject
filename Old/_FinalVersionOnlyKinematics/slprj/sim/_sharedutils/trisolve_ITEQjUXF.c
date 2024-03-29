#include "rtwtypes.h"
#include "multiword_types.h"
#include "trisolve_ITEQjUXF.h"

void trisolve_ITEQjUXF(const real_T A[36], real_T B[24])
{
  int32_T i;
  int32_T j;
  int32_T jBcol;
  int32_T k;
  int32_T kAcol;
  for (j = 0; j < 4; j++) {
    jBcol = 6 * j;
    for (k = 5; k >= 0; k--) {
      kAcol = 6 * k;
      if (B[k + jBcol] != 0.0) {
        B[k + jBcol] /= A[k + kAcol];
        for (i = 0; i < k; i++) {
          B[i + jBcol] -= B[k + jBcol] * A[i + kAcol];
        }
      }
    }
  }
}
