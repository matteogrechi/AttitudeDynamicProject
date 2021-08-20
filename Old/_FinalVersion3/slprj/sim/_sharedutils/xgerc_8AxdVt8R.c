#include "rtwtypes.h"
#include "multiword_types.h"
#include "xgerc_8AxdVt8R.h"

void xgerc_8AxdVt8R(int32_T m, int32_T n, real_T alpha1, int32_T ix0, const
                    real_T y[4], real_T A[32], int32_T ia0)
{
  real_T temp;
  int32_T b;
  int32_T ijA;
  int32_T ix;
  int32_T j;
  int32_T jA;
  int32_T jy;
  if (!(alpha1 == 0.0)) {
    jA = ia0 - 1;
    jy = 0;
    for (j = 0; j < n; j++) {
      if (y[jy] != 0.0) {
        temp = y[jy] * alpha1;
        ix = ix0;
        b = m + jA;
        for (ijA = jA; ijA < b; ijA++) {
          A[ijA] += A[ix - 1] * temp;
          ix++;
        }
      }

      jy++;
      jA += 8;
    }
  }
}