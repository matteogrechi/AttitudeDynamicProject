#include "rtwtypes.h"
#include "multiword_types.h"
#include "xdotc_2UIAyAl6.h"

real_T xdotc_2UIAyAl6(int32_T n, const real_T x[16], int32_T ix0, const real_T
                      y[16], int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  if (n >= 1) {
    ix = ix0;
    iy = iy0;
    for (k = 0; k < n; k++) {
      d += x[ix - 1] * y[iy - 1];
      ix++;
      iy++;
    }
  }

  return d;
}
