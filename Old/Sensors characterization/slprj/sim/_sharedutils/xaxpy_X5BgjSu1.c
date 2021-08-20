#include "rtwtypes.h"
#include "multiword_types.h"
#include "xaxpy_X5BgjSu1.h"

void xaxpy_X5BgjSu1(int32_T n, real_T a, const real_T x[49], int32_T ix0, real_T
                    y[7], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if ((n >= 1) && (!(a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix];
      ix++;
      iy++;
    }
  }
}
