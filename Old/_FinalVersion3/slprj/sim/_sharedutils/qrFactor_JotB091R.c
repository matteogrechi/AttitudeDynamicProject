#include "rtwtypes.h"
#include "multiword_types.h"
#include "qr_asfj7swv.h"
#include "qrFactor_JotB091R.h"

void qrFactor_JotB091R(const real_T A[49], real_T S[49], const real_T Ns[49])
{
  real_T a__1[98];
  real_T y_p[98];
  real_T y[49];
  real_T s;
  int32_T aoffset;
  int32_T coffset;
  int32_T i;
  int32_T j;
  int32_T k;
  for (j = 0; j < 7; j++) {
    coffset = j * 7;
    for (i = 0; i < 7; i++) {
      aoffset = i * 7;
      s = 0.0;
      for (k = 0; k < 7; k++) {
        s += A[k * 7 + j] * S[aoffset + k];
      }

      y[coffset + i] = s;
      y_p[i + 14 * j] = y[7 * j + i];
      y_p[(i + 14 * j) + 7] = Ns[7 * i + j];
    }
  }

  qr_asfj7swv(y_p, a__1, y);
  for (j = 0; j < 7; j++) {
    for (i = 0; i < 7; i++) {
      S[i + 7 * j] = y[7 * i + j];
    }
  }
}
