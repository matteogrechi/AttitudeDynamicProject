#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "cholupdate_lSnXqDZy.h"
#include "mwmathutil.h"
#include "qr_FYLMsjgk.h"
#include "svd_PDxVbKTU.h"
#include "cholUpdateFactor_jYBGg031.h"

void cholUpdateFactor_jYBGg031(real_T S[49], const real_T U[21])
{
  real_T A[49];
  real_T S_p[49];
  real_T Ss[49];
  real_T u[7];
  real_T A_p;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T i_e;
  int32_T i_p;
  int8_T p;
  boolean_T c_p;
  boolean_T exitg2;
  for (i = 0; i < 3; i++) {
    p = cholupdate_lSnXqDZy(S, &U[7 * i]);
    if (p != 0) {
      for (i_p = 0; i_p < 7; i_p++) {
        for (b_i = 0; b_i < 7; b_i++) {
          S_p[i_p + 7 * b_i] = 0.0;
          for (i_e = 0; i_e < 7; i_e++) {
            S_p[i_p + 7 * b_i] += S[7 * i_p + i_e] * S[7 * b_i + i_e];
          }

          Ss[b_i + 7 * i_p] = U[7 * i + b_i] * U[7 * i + i_p];
        }
      }

      c_p = true;
      for (i_p = 0; i_p < 49; i_p++) {
        A_p = S_p[i_p] - Ss[i_p];
        if (c_p && ((!muDoubleScalarIsInf(A_p)) && (!muDoubleScalarIsNaN(A_p))))
        {
        } else {
          c_p = false;
        }

        A[i_p] = A_p;
      }

      if (c_p) {
        svd_PDxVbKTU(A, Ss, u, S_p);
      } else {
        for (i_p = 0; i_p < 7; i_p++) {
          u[i_p] = (rtNaN);
        }

        for (i_p = 0; i_p < 49; i_p++) {
          S_p[i_p] = (rtNaN);
        }
      }

      memset(&Ss[0], 0, 49U * sizeof(real_T));
      for (i_p = 0; i_p < 7; i_p++) {
        Ss[i_p + 7 * i_p] = u[i_p];
      }

      for (i_p = 0; i_p < 49; i_p++) {
        Ss[i_p] = muDoubleScalarSqrt(Ss[i_p]);
      }

      for (i_p = 0; i_p < 7; i_p++) {
        for (b_i = 0; b_i < 7; b_i++) {
          S[i_p + 7 * b_i] = 0.0;
          for (i_e = 0; i_e < 7; i_e++) {
            S[i_p + 7 * b_i] += S_p[7 * i_e + b_i] * Ss[7 * i_p + i_e];
          }
        }
      }

      c_p = true;
      i_p = 0;
      exitg2 = false;
      while ((!exitg2) && (i_p < 7)) {
        b_i = i_p + 1;
        do {
          exitg1 = 0;
          if (b_i + 1 < 8) {
            if (!(S[7 * i_p + b_i] == 0.0)) {
              c_p = false;
              exitg1 = 1;
            } else {
              b_i++;
            }
          } else {
            i_p++;
            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = true;
        }
      }

      if (!c_p) {
        memcpy(&S_p[0], &S[0], 49U * sizeof(real_T));
        qr_FYLMsjgk(S_p, Ss, S);
      }
    }
  }

  for (i_p = 0; i_p < 7; i_p++) {
    for (b_i = 0; b_i < 7; b_i++) {
      S_p[b_i + 7 * i_p] = S[7 * b_i + i_p];
    }
  }

  memcpy(&S[0], &S_p[0], 49U * sizeof(real_T));
}
