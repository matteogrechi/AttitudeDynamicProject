#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "det_i2CXN4sy.h"

real_T det_i2CXN4sy(const real_T x[9])
{
  real_T A[9];
  real_T b_y;
  real_T smax;
  real_T y;
  int32_T b_b;
  int32_T c;
  int32_T c_ix;
  int32_T c_k;
  int32_T ijA;
  int32_T ix;
  int32_T iy;
  int32_T j;
  int8_T ipiv[3];
  boolean_T isodd;
  memcpy(&A[0], &x[0], 9U * sizeof(real_T));
  ipiv[0] = 1;
  ipiv[1] = 2;
  for (j = 0; j < 2; j++) {
    c = j << 2;
    iy = 0;
    ix = c;
    smax = muDoubleScalarAbs(A[c]);
    for (c_k = 2; c_k <= 3 - j; c_k++) {
      ix++;
      b_y = muDoubleScalarAbs(A[ix]);
      if (b_y > smax) {
        iy = c_k - 1;
        smax = b_y;
      }
    }

    if (A[c + iy] != 0.0) {
      if (iy != 0) {
        ipiv[j] = (int8_T)((j + iy) + 1);
        iy += j;
        smax = A[j];
        A[j] = A[iy];
        A[iy] = smax;
        smax = A[j + 3];
        A[j + 3] = A[iy + 3];
        A[iy + 3] = smax;
        smax = A[j + 6];
        A[j + 6] = A[iy + 6];
        A[iy + 6] = smax;
      }

      iy = (c - j) + 3;
      for (ix = c + 1; ix < iy; ix++) {
        A[ix] /= A[c];
      }
    }

    iy = c;
    ix = c + 3;
    for (c_k = 0; c_k <= 1 - j; c_k++) {
      smax = A[ix];
      if (A[ix] != 0.0) {
        c_ix = c + 1;
        b_b = iy - j;
        for (ijA = iy + 4; ijA < b_b + 6; ijA++) {
          A[ijA] += A[c_ix] * -smax;
          c_ix++;
        }
      }

      ix += 3;
      iy += 3;
    }
  }

  isodd = (ipiv[0] > 1);
  y = A[0] * A[4] * A[8];
  if (ipiv[1] > 2) {
    isodd = !isodd;
  }

  if (isodd) {
    y = -y;
  }

  return y;
}
