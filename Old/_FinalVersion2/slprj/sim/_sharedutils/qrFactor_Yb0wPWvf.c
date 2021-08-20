#include "rtwtypes.h"
#include "multiword_types.h"
#include "qr_AgyVYBEd.h"
#include "qrFactor_Yb0wPWvf.h"

void qrFactor_Yb0wPWvf(const real_T A[100], real_T S[100], const real_T Ns[100])
{
  real_T a__1[200];
  real_T y_p[200];
  real_T y[100];
  real_T s;
  int32_T aoffset;
  int32_T coffset;
  int32_T i;
  int32_T j;
  int32_T k;
  for (j = 0; j < 10; j++) {
    coffset = j * 10;
    for (i = 0; i < 10; i++) {
      aoffset = i * 10;
      s = 0.0;
      for (k = 0; k < 10; k++) {
        s += A[k * 10 + j] * S[aoffset + k];
      }

      y[coffset + i] = s;
      y_p[i + 20 * j] = y[10 * j + i];
      y_p[(i + 20 * j) + 10] = Ns[10 * i + j];
    }
  }

  qr_AgyVYBEd(y_p, a__1, y);
  for (j = 0; j < 10; j++) {
    for (i = 0; i < 10; i++) {
      S[i + 10 * j] = y[10 * i + j];
    }
  }
}
