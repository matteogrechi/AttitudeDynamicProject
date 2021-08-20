#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_bImATurN.h"

void xscal_bImATurN(int32_T n, real_T a, real_T x[84], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
