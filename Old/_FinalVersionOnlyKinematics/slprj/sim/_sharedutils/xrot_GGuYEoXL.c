#include "rtwtypes.h"
#include "multiword_types.h"
#include "xrot_GGuYEoXL.h"

void xrot_GGuYEoXL(int32_T n, real_T x[16], int32_T ix0, int32_T iy0, real_T c,
                   real_T s)
{
  real_T temp;
  int32_T ix;
  int32_T iy;
  int32_T k;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < n; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy += 4;
    ix += 4;
  }
}
