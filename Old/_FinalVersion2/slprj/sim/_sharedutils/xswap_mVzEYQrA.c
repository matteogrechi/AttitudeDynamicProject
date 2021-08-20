#include "rtwtypes.h"
#include "multiword_types.h"
#include "xswap_mVzEYQrA.h"

void xswap_mVzEYQrA(real_T x[49], int32_T ix0, int32_T iy0)
{
  real_T temp;
  int32_T k;
  for (k = 0; k < 7; k++) {
    temp = x[(ix0 + k) - 1];
    x[(ix0 + k) - 1] = x[(iy0 + k) - 1];
    x[(iy0 + k) - 1] = temp;
  }
}
