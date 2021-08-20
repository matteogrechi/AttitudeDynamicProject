#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_pU3mmOG2.h"

void xscal_pU3mmOG2(int32_T n, real_T a, real_T x[28], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
