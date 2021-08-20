#include "rtwtypes.h"
#include "multiword_types.h"
#include "xgemv_SLIL4xQU.h"

void xgemv_SLIL4xQU(int32_T m, int32_T n, const real_T A[49], int32_T ia0, const
                    real_T x[49], int32_T ix0, real_T y[7])
{
  real_T c;
  int32_T b;
  int32_T b_b;
  int32_T b_iy;
  int32_T ia;
  int32_T iac;
  int32_T ix;
  if ((m != 0) && (n != 0)) {
    for (b_iy = 0; b_iy < n; b_iy++) {
      y[b_iy] = 0.0;
    }

    b_iy = 0;
    b = (n - 1) * 7 + ia0;
    for (iac = ia0; iac <= b; iac += 7) {
      ix = ix0;
      c = 0.0;
      b_b = iac + m;
      for (ia = iac; ia < b_b; ia++) {
        c += A[ia - 1] * x[ix - 1];
        ix++;
      }

      y[b_iy] += c;
      b_iy++;
    }
  }
}
