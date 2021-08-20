#include "rtwtypes.h"
#include "multiword_types.h"
#include "xdotc_u6u7RC2O.h"

real_T xdotc_u6u7RC2O(const real_T x[4], const real_T y[4])
{
  return x[0] * y[2] + x[1] * y[3];
}
