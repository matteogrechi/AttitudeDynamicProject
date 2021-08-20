#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "cholupdate_lSnXqDZy.h"
#include "mwmathutil.h"
#include "qr_FYLMsjgk.h"
#include "svd_PDxVbKTU.h"
#include "trisolve_SIky7NSX.h"
#include "trisolve_TwFzfT1Q.h"
#include "UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0.h"

void UKFCorrector_correctStateAndSqrtCovariance_88UHeBp0(real_T x[7], real_T S
  [49], const real_T residue[2], const real_T Pxy[14], const real_T Sy[4])
{
  real_T A[49];
  real_T S_p[49];
  real_T Ss[49];
  real_T K[14];
  real_T U[14];
  real_T u[7];
  real_T Sy_p[4];
  real_T A_p;
  int32_T d_i;
  int32_T exitg1;
  int32_T i;
  int32_T i_p;
  int32_T j;
  int8_T p;
  boolean_T c_p;
  boolean_T exitg2;
  for (j = 0; j < 7; j++) {
    K[j << 1] = Pxy[j];
    K[(j << 1) + 1] = Pxy[j + 7];
  }

  trisolve_SIky7NSX(Sy, K);
  for (j = 0; j < 7; j++) {
    U[j << 1] = K[j << 1];
    U[(j << 1) + 1] = K[(j << 1) + 1];
  }

  Sy_p[0] = Sy[0];
  Sy_p[1] = Sy[2];
  Sy_p[2] = Sy[1];
  Sy_p[3] = Sy[3];
  trisolve_TwFzfT1Q(Sy_p, U);
  for (i = 0; i < 2; i++) {
    for (d_i = 0; d_i < 7; d_i++) {
      K[d_i + 7 * i] = U[(d_i << 1) + i];
    }
  }

  for (i = 0; i < 7; i++) {
    U[i] = 0.0;
    U[i] += K[i] * Sy[0];
    U[i] += K[i + 7] * Sy[1];
    U[i + 7] = 0.0;
    U[i + 7] += K[i] * Sy[2];
    U[i + 7] += K[i + 7] * Sy[3];
    x[i] += K[i + 7] * residue[1] + K[i] * residue[0];
  }

  for (j = 0; j < 2; j++) {
    p = cholupdate_lSnXqDZy(S, &U[7 * j]);
    if (p != 0) {
      for (i = 0; i < 7; i++) {
        for (d_i = 0; d_i < 7; d_i++) {
          S_p[i + 7 * d_i] = 0.0;
          for (i_p = 0; i_p < 7; i_p++) {
            S_p[i + 7 * d_i] += S[7 * i + i_p] * S[7 * d_i + i_p];
          }

          Ss[d_i + 7 * i] = U[7 * j + d_i] * U[7 * j + i];
        }
      }

      c_p = true;
      for (i = 0; i < 49; i++) {
        A_p = S_p[i] - Ss[i];
        if (c_p && ((!muDoubleScalarIsInf(A_p)) && (!muDoubleScalarIsNaN(A_p))))
        {
        } else {
          c_p = false;
        }

        A[i] = A_p;
      }

      if (c_p) {
        svd_PDxVbKTU(A, Ss, u, S_p);
      } else {
        for (i = 0; i < 7; i++) {
          u[i] = (rtNaN);
        }

        for (i = 0; i < 49; i++) {
          S_p[i] = (rtNaN);
        }
      }

      memset(&Ss[0], 0, 49U * sizeof(real_T));
      for (i = 0; i < 7; i++) {
        Ss[i + 7 * i] = u[i];
      }

      for (i = 0; i < 49; i++) {
        Ss[i] = muDoubleScalarSqrt(Ss[i]);
      }

      for (i = 0; i < 7; i++) {
        for (d_i = 0; d_i < 7; d_i++) {
          S[i + 7 * d_i] = 0.0;
          for (i_p = 0; i_p < 7; i_p++) {
            S[i + 7 * d_i] += S_p[7 * i_p + d_i] * Ss[7 * i + i_p];
          }
        }
      }

      c_p = true;
      i = 0;
      exitg2 = false;
      while ((!exitg2) && (i < 7)) {
        d_i = i + 1;
        do {
          exitg1 = 0;
          if (d_i + 1 < 8) {
            if (!(S[7 * i + d_i] == 0.0)) {
              c_p = false;
              exitg1 = 1;
            } else {
              d_i++;
            }
          } else {
            i++;
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

  for (i = 0; i < 7; i++) {
    for (d_i = 0; d_i < 7; d_i++) {
      S_p[d_i + 7 * i] = S[7 * d_i + i];
    }
  }

  memcpy(&S[0], &S_p[0], 49U * sizeof(real_T));
}
