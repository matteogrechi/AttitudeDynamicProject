#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "sqrt_JVgK17Mi.h"

void sqrt_JVgK17Mi(creal_T *x)
{
  real_T absxr;
  real_T xr;
  xr = x->re;
  if (x->im == 0.0) {
    if (x->re < 0.0) {
      absxr = 0.0;
      xr = muDoubleScalarSqrt(-x->re);
    } else {
      absxr = muDoubleScalarSqrt(x->re);
      xr = 0.0;
    }
  } else if (x->re == 0.0) {
    if (x->im < 0.0) {
      absxr = muDoubleScalarSqrt(-x->im / 2.0);
      xr = -absxr;
    } else {
      absxr = muDoubleScalarSqrt(x->im / 2.0);
      xr = absxr;
    }
  } else if (muDoubleScalarIsNaN(x->re)) {
    absxr = x->re;
  } else if (muDoubleScalarIsNaN(x->im)) {
    absxr = x->im;
    xr = x->im;
  } else if (muDoubleScalarIsInf(x->im)) {
    absxr = muDoubleScalarAbs(x->im);
    xr = x->im;
  } else if (muDoubleScalarIsInf(x->re)) {
    if (x->re < 0.0) {
      absxr = 0.0;
      xr = x->im * -x->re;
    } else {
      absxr = x->re;
      xr = 0.0;
    }
  } else {
    absxr = muDoubleScalarAbs(x->re);
    xr = muDoubleScalarAbs(x->im);
    if ((absxr > 4.4942328371557893E+307) || (xr > 4.4942328371557893E+307)) {
      absxr *= 0.5;
      xr *= 0.5;
      xr = muDoubleScalarHypot(absxr, xr);
      if (xr > absxr) {
        absxr = muDoubleScalarSqrt(absxr / xr + 1.0) * muDoubleScalarSqrt(xr);
      } else {
        absxr = muDoubleScalarSqrt(xr) * 1.4142135623730951;
      }
    } else {
      absxr = muDoubleScalarSqrt((muDoubleScalarHypot(absxr, xr) + absxr) * 0.5);
    }

    if (x->re > 0.0) {
      xr = x->im / absxr * 0.5;
    } else {
      if (x->im < 0.0) {
        xr = -absxr;
      } else {
        xr = absxr;
      }

      absxr = x->im / xr * 0.5;
    }
  }

  x->re = absxr;
  x->im = xr;
}
