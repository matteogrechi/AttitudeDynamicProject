#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_YPHoZNU9.h"

void xscal_YPHoZNU9(real_T a, real_T x[9], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 2; k++) {
    x[k - 1] *= a;
  }
}
