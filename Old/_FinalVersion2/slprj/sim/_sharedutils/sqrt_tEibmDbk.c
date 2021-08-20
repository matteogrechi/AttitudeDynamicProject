#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "sqrt_tEibmDbk.h"

void sqrt_tEibmDbk(real_T *x)
{
  *x = muDoubleScalarSqrt(*x);
}
