#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_lQkFRvYn.h"

void xscal_lQkFRvYn(int32_T n, real_T a, real_T x[100], int32_T ix0)
{
  int32_T b;
  int32_T k;
  b = ix0 + n;
  for (k = ix0; k < b; k++) {
    x[k - 1] *= a;
  }
}
