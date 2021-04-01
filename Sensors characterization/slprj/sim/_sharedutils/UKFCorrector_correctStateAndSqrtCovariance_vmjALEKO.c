#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "cholupdate_lSnXqDZy.h"
#include "istriu_UHMBrJD6.h"
#include "qr_FYLMsjgk.h"
#include "svdPSD_mZeGp8GY.h"
#include "trisolve_ilgPmQXv.h"
#include "trisolve_uNLPGpcD.h"
#include "UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO.h"

void UKFCorrector_correctStateAndSqrtCovariance_vmjALEKO(real_T x[7], real_T S
  [49], const real_T residue[7], const real_T Pxy[49], const real_T Sy[49])
{
  real_T B[49];
  real_T K[49];
  real_T U[49];
  real_T U_p[49];
  real_T tmp;
  int32_T b_i;
  int32_T i;
  int32_T i_p;
  int32_T j;
  int8_T p;
  for (j = 0; j < 7; j++) {
    for (b_i = 0; b_i < 7; b_i++) {
      K[b_i + 7 * j] = Pxy[7 * b_i + j];
    }
  }

  trisolve_ilgPmQXv(Sy, K);
  for (j = 0; j < 7; j++) {
    for (b_i = 0; b_i < 7; b_i++) {
      B[b_i + 7 * j] = K[7 * j + b_i];
      U[b_i + 7 * j] = Sy[7 * b_i + j];
    }
  }

  trisolve_uNLPGpcD(U, B);
  for (b_i = 0; b_i < 7; b_i++) {
    for (i = 0; i < 7; i++) {
      K[i + 7 * b_i] = B[7 * i + b_i];
    }
  }

  for (b_i = 0; b_i < 7; b_i++) {
    tmp = 0.0;
    for (i = 0; i < 7; i++) {
      tmp += K[7 * i + b_i] * residue[i];
      U[b_i + 7 * i] = 0.0;
      for (i_p = 0; i_p < 7; i_p++) {
        U[b_i + 7 * i] += K[7 * i_p + b_i] * Sy[7 * i + i_p];
      }
    }

    x[b_i] += tmp;
  }

  for (j = 0; j < 7; j++) {
    p = cholupdate_lSnXqDZy(S, &U[7 * j]);
    if (p != 0) {
      for (b_i = 0; b_i < 7; b_i++) {
        for (i = 0; i < 7; i++) {
          K[b_i + 7 * i] = 0.0;
          for (i_p = 0; i_p < 7; i_p++) {
            K[b_i + 7 * i] += S[7 * b_i + i_p] * S[7 * i + i_p];
          }

          U_p[i + 7 * b_i] = U[7 * j + i] * U[7 * j + b_i];
        }
      }

      for (b_i = 0; b_i < 49; b_i++) {
        B[b_i] = K[b_i] - U_p[b_i];
      }

      svdPSD_mZeGp8GY(B, K);
      for (b_i = 0; b_i < 7; b_i++) {
        for (i = 0; i < 7; i++) {
          S[i + 7 * b_i] = K[7 * i + b_i];
        }
      }

      if (!istriu_UHMBrJD6(S)) {
        memcpy(&K[0], &S[0], 49U * sizeof(real_T));
        qr_FYLMsjgk(K, B, S);
      }
    }
  }

  for (b_i = 0; b_i < 7; b_i++) {
    for (i = 0; i < 7; i++) {
      K[i + 7 * b_i] = S[7 * i + b_i];
    }
  }

  memcpy(&S[0], &K[0], 49U * sizeof(real_T));
}
