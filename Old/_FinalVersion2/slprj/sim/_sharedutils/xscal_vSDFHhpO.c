#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_vSDFHhpO.h"

void xscal_vSDFHhpO(real_T a, real_T x[100], int32_T ix0)
{
  int32_T k;
  for (k = ix0; k <= ix0 + 9; k++) {
    x[k - 1] *= a;
  }
}
