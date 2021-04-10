#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rotate_oK4vZKF3.h"

void rotate_oK4vZKF3(real_T x, real_T y, real_T *c, real_T *s, real_T *r)
{
  real_T absx;
  real_T rho;
  real_T t;
  real_T xx;
  real_T yy;
  t = muDoubleScalarAbs(x);
  xx = muDoubleScalarAbs(y);
  if (xx == 0.0) {
    *c = 1.0;
    *s = 0.0;
    *r = x;
  } else if (t == 0.0) {
    *c = 0.0;
    *s = 1.0;
    *r = y;
  } else {
    t += xx;
    xx = x / t;
    yy = y / t;
    absx = muDoubleScalarAbs(xx);
    rho = muDoubleScalarHypot(absx, muDoubleScalarAbs(yy));
    *c = absx / rho;
    xx /= absx;
    *s = xx * yy / rho;
    rho *= t;
    *r = rho * xx;
  }
}
