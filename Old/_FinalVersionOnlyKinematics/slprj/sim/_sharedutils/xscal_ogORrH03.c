#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_ogORrH03.h"

void xscal_ogORrH03(int32_T n, real_T a, real_T x[9], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
