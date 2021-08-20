#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xdlanv2_V2JX7qUI.h"

void xdlanv2_V2JX7qUI(real_T *a, real_T *b, real_T *c, real_T *d, real_T *rt1r,
                      real_T *rt1i, real_T *rt2r, real_T *rt2i, real_T *cs,
                      real_T *sn)
{
  real_T bcmax;
  real_T bcmis;
  real_T p;
  real_T scale;
  real_T temp;
  real_T z;
  int32_T b_p;
  int32_T c_p;
  if (*c == 0.0) {
    *cs = 1.0;
    *sn = 0.0;
  } else if (*b == 0.0) {
    *cs = 0.0;
    *sn = 1.0;
    temp = *d;
    *d = *a;
    *a = temp;
    *b = -*c;
    *c = 0.0;
  } else if ((*a - *d == 0.0) && ((*b < 0.0) != (*c < 0.0))) {
    *cs = 1.0;
    *sn = 0.0;
  } else {
    temp = *a - *d;
    p = 0.5 * temp;
    bcmax = muDoubleScalarMax(muDoubleScalarAbs(*b), muDoubleScalarAbs(*c));
    if (!(*b < 0.0)) {
      b_p = 1;
    } else {
      b_p = -1;
    }

    if (!(*c < 0.0)) {
      c_p = 1;
    } else {
      c_p = -1;
    }

    bcmis = muDoubleScalarMin(muDoubleScalarAbs(*b), muDoubleScalarAbs(*c)) *
      (real_T)b_p * (real_T)c_p;
    scale = muDoubleScalarMax(muDoubleScalarAbs(p), bcmax);
    z = p / scale * p + bcmax / scale * bcmis;
    if (z >= 8.8817841970012523E-16) {
      if (!(p < 0.0)) {
        temp = muDoubleScalarSqrt(scale) * muDoubleScalarSqrt(z);
      } else {
        temp = -(muDoubleScalarSqrt(scale) * muDoubleScalarSqrt(z));
      }

      z = p + temp;
      *a = *d + z;
      *d -= bcmax / z * bcmis;
      bcmax = muDoubleScalarHypot(*c, z);
      *cs = z / bcmax;
      *sn = *c / bcmax;
      *b -= *c;
      *c = 0.0;
    } else {
      bcmis = *b + *c;
      bcmax = muDoubleScalarHypot(bcmis, temp);
      *cs = muDoubleScalarSqrt((muDoubleScalarAbs(bcmis) / bcmax + 1.0) * 0.5);
      if (!(bcmis < 0.0)) {
        b_p = 1;
      } else {
        b_p = -1;
      }

      *sn = -(p / (bcmax * *cs)) * (real_T)b_p;
      temp = *a * *cs + *b * *sn;
      p = -*a * *sn + *b * *cs;
      bcmax = *c * *cs + *d * *sn;
      bcmis = -*c * *sn + *d * *cs;
      *b = p * *cs + bcmis * *sn;
      *c = -temp * *sn + bcmax * *cs;
      temp = ((temp * *cs + bcmax * *sn) + (-p * *sn + bcmis * *cs)) * 0.5;
      *a = temp;
      *d = temp;
      if (*c != 0.0) {
        if (*b != 0.0) {
          if ((*b < 0.0) == (*c < 0.0)) {
            z = muDoubleScalarSqrt(muDoubleScalarAbs(*b));
            bcmis = muDoubleScalarSqrt(muDoubleScalarAbs(*c));
            p = z * bcmis;
            if (*c < 0.0) {
              p = -p;
            }

            bcmax = 1.0 / muDoubleScalarSqrt(muDoubleScalarAbs(*b + *c));
            *a = temp + p;
            *d = temp - p;
            *b -= *c;
            *c = 0.0;
            p = z * bcmax;
            bcmax *= bcmis;
            temp = *cs * p - *sn * bcmax;
            *sn = *cs * bcmax + *sn * p;
            *cs = temp;
          }
        } else {
          *b = -*c;
          *c = 0.0;
          temp = *cs;
          *cs = -*sn;
          *sn = temp;
        }
      }
    }
  }

  *rt1r = *a;
  *rt2r = *d;
  if (*c == 0.0) {
    *rt1i = 0.0;
    *rt2i = 0.0;
  } else {
    *rt1i = muDoubleScalarSqrt(muDoubleScalarAbs(*b)) * muDoubleScalarSqrt
      (muDoubleScalarAbs(*c));
    *rt2i = -*rt1i;
  }
}
