#include "rtwtypes.h"
#include "multiword_types.h"
#include "RandSrcInitState_U_64.h"
#include "RandSrc_U_D.h"
#include "RandSrcCreateSeeds_64.h"

void RandSrcCreateSeeds_64(uint32_T initSeed, uint32_T seedArray[], int32_T
  numSeeds)
{
  real_T state[35];
  real_T max;
  real_T min;
  real_T tmp;
  int32_T i;
  min = 0.0;
  max = 1.0;
  RandSrcInitState_U_64(&initSeed, &state[0], 1);
  for (i = 0; i < numSeeds; i++) {
    RandSrc_U_D(&tmp, &min, 1, &max, 1, state, 1, 1);
    seedArray[i] = (uint32_T)(tmp * 2.147483648E+9);
  }
}
