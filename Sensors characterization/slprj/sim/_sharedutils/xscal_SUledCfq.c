#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_SUledCfq.h"

void xscal_SUledCfq(real_T a, real_T x[49], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 6; k++) {
    x[k - 1] *= a;
  }
}
