#include "rtwtypes.h"
#include "multiword_types.h"
#include "mtimes_rOmyW7go.h"

void mtimes_rOmyW7go(const real_T A[9], const real_T B[9], real_T C[9])
{
  int32_T aoffset;
  int32_T coffset;
  int32_T i;
  int32_T j;
  for (j = 0; j < 3; j++) {
    coffset = j * 3;
    for (i = 0; i < 3; i++) {
      aoffset = i * 3;
      C[coffset + i] = (A[aoffset + 1] * B[j + 3] + A[aoffset] * B[j]) +
        A[aoffset + 2] * B[j + 6];
    }
  }
}
