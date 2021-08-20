#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xzlanhs_WDnKxovd.h"

real_T xzlanhs_WDnKxovd(const creal_T A[16], int32_T ilo, int32_T ihi)
{
  real_T absxk;
  real_T colscale;
  real_T colssq;
  real_T f;
  real_T scale;
  real_T ssq;
  real_T t;
  int32_T b;
  int32_T col;
  int32_T j;
  int32_T nm1;
  int32_T row;
  f = 0.0;
  if (ilo <= ihi) {
    scale = 3.3121686421112381E-170;
    ssq = 0.0;
    nm1 = ihi - ilo;
    for (j = -1; j < nm1; j++) {
      colscale = 3.3121686421112381E-170;
      colssq = 0.0;
      col = ilo + j;
      b = j + 2;
      b = muIntScalarMin_sint32(b, nm1) + ilo;
      for (row = ilo; row <= b; row++) {
        absxk = muDoubleScalarAbs(A[((col << 2) + row) - 1].re);
        if (absxk > colscale) {
          t = colscale / absxk;
          colssq = colssq * t * t + 1.0;
          colscale = absxk;
        } else {
          t = absxk / colscale;
          colssq += t * t;
        }

        absxk = muDoubleScalarAbs(A[((col << 2) + row) - 1].im);
        if (absxk > colscale) {
          t = colscale / absxk;
          colssq = colssq * t * t + 1.0;
          colscale = absxk;
        } else {
          t = absxk / colscale;
          colssq += t * t;
        }
      }

      if (scale >= colscale) {
        colscale /= scale;
        ssq += colscale * colscale * colssq;
      } else {
        scale /= colscale;
        ssq = scale * scale * ssq + colssq;
        scale = colscale;
      }
    }

    f = scale * muDoubleScalarSqrt(ssq);
  }

  return f;
}
