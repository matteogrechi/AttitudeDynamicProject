#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_1Voxudq5.h"

void xscal_1Voxudq5(int32_T n, real_T a, real_T x[16], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
