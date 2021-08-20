#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_QSJiN3Pu.h"

void xscal_QSJiN3Pu(int32_T n, real_T a, real_T x[42], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
