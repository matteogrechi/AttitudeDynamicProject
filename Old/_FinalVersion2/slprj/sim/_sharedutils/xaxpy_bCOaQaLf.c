#include "rtwtypes.h"
#include "multiword_types.h"
#include "xaxpy_bCOaQaLf.h"

void xaxpy_bCOaQaLf(int32_T n, real_T a, int32_T ix0, real_T y[100], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if ((n >= 1) && (!(a == 0.0))) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix];
      ix++;
      iy++;
    }
  }
}
