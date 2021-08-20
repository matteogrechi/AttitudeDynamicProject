#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "RandSrc_U_D.h"

void RandSrc_U_D(real_T y[], const real_T minVec[], int32_T minLen, const real_T
                 maxVec[], int32_T maxLen, real_T state[], int32_T nChans,
                 int32_T nSamps)
{
  real_T d;
  real_T min;
  real_T scale;
  int32_T ii[2];
  int32_T chan;
  int32_T i;
  int32_T one;
  int32_T samps;
  uint32_T j;
  int8_T *onePtr;
  one = 1;
  onePtr = (int8_T *)&one;
  one = (onePtr[0U] == 0);
  for (chan = 0; chan < nChans; chan++) {
    min = minVec[minLen > 1 ? chan : 0];
    scale = maxVec[maxLen > 1 ? chan : 0] - min;
    i = (int32_T)((uint32_T)state[chan * 35 + 33] & 31U);
    j = (uint32_T)state[chan * 35 + 34];
    for (samps = 0; samps < nSamps; samps++) {
      d = (state[((i + 20) & 31) + chan * 35] - state[((i + 5) & 31) + chan * 35])
        - state[chan * 35 + 32];
      if (d >= 0.0) {
        state[chan * 35 + 32] = 0.0;
      } else {
        d++;
        state[chan * 35 + 32] = 1.1102230246251565E-16;
      }

      state[chan * 35 + i] = d;
      i = (i + 1) & 31;
      memcpy(&ii[0U], &d, sizeof(real_T));
      ii[one] ^= j;
      j ^= j << 13;
      j ^= j >> 17;
      j ^= j << 5;
      ii[one ^ 1] ^= j & 1048575U;
      memcpy(&d, &ii[0U], sizeof(real_T));
      y[chan * nSamps + samps] = scale * d + min;
    }

    state[chan * 35 + 33] = i;
    state[chan * 35 + 34] = j;
  }
}
