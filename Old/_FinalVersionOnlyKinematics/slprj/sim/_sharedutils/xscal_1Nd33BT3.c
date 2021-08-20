#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_1Nd33BT3.h"

void xscal_1Nd33BT3(real_T a, real_T x[36], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 5; k++) {
    x[k - 1] *= a;
  }
}
