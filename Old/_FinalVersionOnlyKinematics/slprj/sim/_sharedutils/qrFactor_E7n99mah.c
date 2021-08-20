#include "rtwtypes.h"
#include "multiword_types.h"
#include "qr_keHD9uHB.h"
#include "qrFactor_E7n99mah.h"

void qrFactor_E7n99mah(const real_T A[36], real_T S[36], const real_T Ns[36])
{
  real_T a__1[72];
  real_T y_p[72];
  real_T y[36];
  real_T s;
  int32_T aoffset;
  int32_T coffset;
  int32_T i;
  int32_T j;
  int32_T k;
  for (j = 0; j < 6; j++) {
    coffset = j * 6;
    for (i = 0; i < 6; i++) {
      aoffset = i * 6;
      s = 0.0;
      for (k = 0; k < 6; k++) {
        s += A[k * 6 + j] * S[aoffset + k];
      }

      y[coffset + i] = s;
      y_p[i + 12 * j] = y[6 * j + i];
      y_p[(i + 12 * j) + 6] = Ns[6 * i + j];
    }
  }

  qr_keHD9uHB(y_p, a__1, y);
  for (j = 0; j < 6; j++) {
    for (i = 0; i < 6; i++) {
      S[i + 6 * j] = y[6 * i + j];
    }
  }
}
