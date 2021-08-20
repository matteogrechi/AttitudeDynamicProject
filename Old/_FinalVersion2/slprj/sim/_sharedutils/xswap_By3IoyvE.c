#include "rtwtypes.h"
#include "multiword_types.h"
#include "xswap_By3IoyvE.h"

void xswap_By3IoyvE(real_T x[4], int32_T ix0, int32_T iy0)
{
  real_T temp;
  temp = x[ix0 - 1];
  x[ix0 - 1] = x[iy0 - 1];
  x[iy0 - 1] = temp;
  temp = x[ix0];
  x[ix0] = x[iy0];
  x[iy0] = temp;
}