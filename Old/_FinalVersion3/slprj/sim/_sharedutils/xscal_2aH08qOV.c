#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_2aH08qOV.h"

void xscal_2aH08qOV(int32_T n, real_T a, real_T x[49], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
