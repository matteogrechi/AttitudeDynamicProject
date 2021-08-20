#include "rtwtypes.h"
#include "multiword_types.h"
#include <math.h>
#include "RandSrcInitState_U_64.h"

void RandSrcInitState_U_64(const uint32_T seed[], real_T state[], int32_T nChans)
{
  real_T d;
  int32_T i;
  int32_T k;
  int32_T n;
  uint32_T j;
  for (i = 0; i < nChans; i++) {
    j = seed[i] != 0U ? seed[i] : 2147483648U;
    state[35 * i + 34] = j;
    for (k = 0; k < 32; k++) {
      d = 0.0;
      for (n = 0; n < 53; n++) {
        j ^= j << 13;
        j ^= j >> 17;
        j ^= j << 5;
        d = (real_T)((int32_T)(j >> 19) & 1) + (d + d);
      }

      state[35 * i + k] = ldexp(d, -53);
    }

    state[35 * i + 32] = 0.0;
    state[35 * i + 33] = 0.0;
  }
}
