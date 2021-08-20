#include "rtwtypes.h"
#include "multiword_types.h"
#include "xrot_J1wGPM2R.h"

void xrot_J1wGPM2R(real_T x[36], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  real_T temp;
  int32_T k;
  for (k = 0; k < 6; k++) {
    temp = x[(ix0 + k) - 1] * c + x[(iy0 + k) - 1] * s;
    x[(iy0 + k) - 1] = x[(iy0 + k) - 1] * c - x[(ix0 + k) - 1] * s;
    x[(ix0 + k) - 1] = temp;
  }
}
