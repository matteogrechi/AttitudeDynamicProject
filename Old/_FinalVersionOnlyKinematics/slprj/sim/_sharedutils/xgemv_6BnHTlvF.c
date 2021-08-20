#include "rtwtypes.h"
#include "multiword_types.h"
#include "xgemv_6BnHTlvF.h"

void xgemv_6BnHTlvF(int32_T m, int32_T n, const real_T A[182], int32_T ia0,
                    const real_T x[182], int32_T ix0, real_T y[7])
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
    b = (n - 1) * 26 + ia0;
    for (iac = ia0; iac <= b; iac += 26) {
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
