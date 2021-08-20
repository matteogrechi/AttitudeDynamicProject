#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xnrm2_gKH52LVY.h"

real_T xnrm2_gKH52LVY(int32_T n, const real_T x[3])
{
  real_T absxk;
  real_T scale;
  real_T t;
  real_T y;
  y = 0.0;
  if (n >= 1) {
    if (n == 1) {
      y = muDoubleScalarAbs(x[1]);
    } else {
      scale = 3.3121686421112381E-170;
      absxk = muDoubleScalarAbs(x[1]);
      if (absxk > 3.3121686421112381E-170) {
        y = 1.0;
        scale = absxk;
      } else {
        t = absxk / 3.3121686421112381E-170;
        y = t * t;
      }

      absxk = muDoubleScalarAbs(x[2]);
      if (absxk > scale) {
        t = scale / absxk;
        y = y * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }

      y = scale * muDoubleScalarSqrt(y);
    }
  }

  return y;
}
