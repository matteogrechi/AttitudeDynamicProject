#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_LVhtT5RG.h"

void xscal_LVhtT5RG(int32_T n, real_T a, real_T x[6], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
