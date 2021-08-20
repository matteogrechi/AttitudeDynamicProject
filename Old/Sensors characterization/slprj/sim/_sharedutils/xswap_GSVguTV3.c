#include "rtwtypes.h"
#include "multiword_types.h"
#include "xswap_GSVguTV3.h"

void xswap_GSVguTV3(real_T x[49], int32_T ix0, int32_T iy0)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 7; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}
