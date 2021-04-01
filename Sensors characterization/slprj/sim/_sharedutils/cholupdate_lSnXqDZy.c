#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rotate_oK4vZKF3.h"
#include "cholupdate_lSnXqDZy.h"

int8_T cholupdate_lSnXqDZy(real_T R[49], const real_T x[7])
{
  real_T b_x[7];
  real_T c[7];
  real_T s[7];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T b_k;
  int32_T i;
  int32_T iAcol;
  int8_T p;
  boolean_T errorCondition;
  for (i = 0; i < 7; i++) {
    for (iAcol = 0; iAcol <= 5 - i; iAcol++) {
      R[((i + iAcol) + 7 * i) + 1] = 0.0;
    }
  }

  p = 0;
  errorCondition = false;
  for (i = 0; i < 7; i++) {
    if (errorCondition || (R[7 * i + i] == 0.0)) {
      errorCondition = true;
    }
  }

  if (errorCondition) {
    p = 2;
  } else {
    for (i = 0; i < 7; i++) {
      b_x[i] = x[i];
    }

    for (i = 0; i < 7; i++) {
      iAcol = 7 * i;
      temp = b_x[i];
      for (b_k = 0; b_k < i; b_k++) {
        temp -= R[b_k + iAcol] * b_x[b_k];
      }

      b_x[i] = temp / R[i + iAcol];
    }

    temp = 0.0;
    scale = 3.3121686421112381E-170;
    for (i = 0; i < 7; i++) {
      absxk = muDoubleScalarAbs(b_x[i]);
      if (absxk > scale) {
        t = scale / absxk;
        temp = temp * t * t + 1.0;
        scale = absxk;
      } else {
        t = absxk / scale;
        temp += t * t;
      }
    }

    temp = scale * muDoubleScalarSqrt(temp);
    if (temp >= 1.0) {
      p = 1;
    } else {
      temp = muDoubleScalarSqrt(1.0 - temp * temp);
      for (i = 6; i >= 0; i--) {
        rotate_oK4vZKF3(temp, b_x[i], &c[i], &s[i], &temp);
        b_x[i] = 0.0;
      }

      for (i = 0; i < 7; i++) {
        for (iAcol = i; iAcol + 1 > 0; iAcol--) {
          temp = R[7 * i + iAcol] * s[iAcol];
          R[iAcol + 7 * i] = R[7 * i + iAcol] * c[iAcol] - s[iAcol] * b_x[i];
          b_x[i] = c[iAcol] * b_x[i] + temp;
        }
      }
    }
  }

  return p;
}
