#include "rtwtypes.h"
#include "multiword_types.h"
#include "xaxpy_tPXkHMJq.h"

void xaxpy_tPXkHMJq(real_T a, real_T y[4])
{
  if (!(a == 0.0)) {
    y[2] += a * y[0];
    y[3] += a * y[1];
  }
}
