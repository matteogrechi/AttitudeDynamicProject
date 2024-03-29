#include "rtwtypes.h"
#include "multiword_types.h"
#include "xrot_RTqBGDh9.h"

void xrot_RTqBGDh9(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
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
}
