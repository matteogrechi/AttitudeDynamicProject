#include "rtwtypes.h"
#include "multiword_types.h"
#include "xrot_8SOrvP1x.h"

void xrot_8SOrvP1x(real_T x[16], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  real_T temp;
  temp = x[ix0 - 1] * c + x[iy0 - 1] * s;
  x[iy0 - 1] = x[iy0 - 1] * c - x[ix0 - 1] * s;
  x[ix0 - 1] = temp;
  temp = x[ix0] * c + x[iy0] * s;
  x[iy0] = x[iy0] * c - x[ix0] * s;
  x[ix0] = temp;
  temp = x[ix0 + 1] * c + x[iy0 + 1] * s;
  x[iy0 + 1] = x[iy0 + 1] * c - x[ix0 + 1] * s;
  x[ix0 + 1] = temp;
  temp = x[ix0 + 2] * c + x[iy0 + 2] * s;
  x[iy0 + 2] = x[iy0 + 2] * c - x[ix0 + 2] * s;
  x[ix0 + 2] = temp;
}
