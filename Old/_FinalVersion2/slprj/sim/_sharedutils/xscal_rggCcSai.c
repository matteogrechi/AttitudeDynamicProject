#include "rtwtypes.h"
#include "multiword_types.h"
#include "xscal_rggCcSai.h"

void xscal_rggCcSai(real_T a, real_T x[4])
{
  x[0] *= a;
  x[1] *= a;
}
