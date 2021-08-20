#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_sLqiRjoy.h"

void xscal_sLqiRjoy(real_T a, real_T x[4], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 1; k++) {
    x[k - 1] *= a;
  }
}
