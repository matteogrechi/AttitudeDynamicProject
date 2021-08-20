#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "cholupdate_lSnXqDZy.h"
#include "mwmathutil.h"
#include "qr_FYLMsjgk.h"
#include "svd_PDxVbKTU.h"
#include "cholUpdateFactor_0UPeNBYU.h"

void cholUpdateFactor_0UPeNBYU(real_T S[49], const real_T U[7])
{
  real_T A[49];
  real_T S_p[49];
  real_T Ss[49];
  real_T s[7];
  real_T A_p;
  int32_T c_k;
  int32_T exitg1;
  int32_T i;
  int32_T i_p;
  int8_T p;
  boolean_T c_p;
  boolean_T exitg2;
  p = cholupdate_lSnXqDZy(S, U);
  if (p != 0) {
    for (c_k = 0; c_k < 7; c_k++) {
      for (i = 0; i < 7; i++) {
        S_p[c_k + 7 * i] = 0.0;
        for (i_p = 0; i_p < 7; i_p++) {
          S_p[c_k + 7 * i] += S[7 * c_k + i_p] * S[7 * i + i_p];
        }

        Ss[i + 7 * c_k] = U[i] * U[c_k];
      }
    }

    c_p = true;
    for (c_k = 0; c_k < 49; c_k++) {
      A_p = S_p[c_k] - Ss[c_k];
      if (c_p && ((!muDoubleScalarIsInf(A_p)) && (!muDoubleScalarIsNaN(A_p)))) {
      } else {
        c_p = false;
      }

      A[c_k] = A_p;
    }

    if (c_p) {
      svd_PDxVbKTU(A, Ss, s, S_p);
    } else {
      for (i = 0; i < 7; i++) {
        s[i] = (rtNaN);
      }

      for (c_k = 0; c_k < 49; c_k++) {
        S_p[c_k] = (rtNaN);
      }
    }

    memset(&Ss[0], 0, 49U * sizeof(real_T));
    for (c_k = 0; c_k < 7; c_k++) {
      Ss[c_k + 7 * c_k] = s[c_k];
    }

    for (c_k = 0; c_k < 49; c_k++) {
      Ss[c_k] = muDoubleScalarSqrt(Ss[c_k]);
    }

    for (c_k = 0; c_k < 7; c_k++) {
      for (i = 0; i < 7; i++) {
        S[c_k + 7 * i] = 0.0;
        for (i_p = 0; i_p < 7; i_p++) {
          S[c_k + 7 * i] += S_p[7 * i_p + i] * Ss[7 * c_k + i_p];
        }
      }
    }

    c_p = true;
    c_k = 0;
    exitg2 = false;
    while ((!exitg2) && (c_k < 7)) {
      i = c_k + 1;
      do {
        exitg1 = 0;
        if (i + 1 < 8) {
          if (!(S[7 * c_k + i] == 0.0)) {
            c_p = false;
            exitg1 = 1;
          } else {
            i++;
          }
        } else {
          c_k++;
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

  for (c_k = 0; c_k < 7; c_k++) {
    for (i = 0; i < 7; i++) {
      S_p[i + 7 * c_k] = S[7 * i + c_k];
    }
  }

  memcpy(&S[0], &S_p[0], 49U * sizeof(real_T));
}
