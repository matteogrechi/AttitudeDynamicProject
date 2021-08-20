#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "attitudePropagation_PavKqoqk.h"

void attitudePropagation_PavKqoqk(real_T x[7], const real_T u[3])
{
  real_T Omega[16];
  real_T Omega_p[16];
  real_T q_p[7];
  real_T q[4];
  real_T absxk;
  real_T omega_idx_0;
  real_T omega_idx_1;
  real_T omega_idx_2;
  real_T t;
  int32_T k;
  omega_idx_0 = u[0] - x[4];
  omega_idx_1 = u[1] - x[5];
  omega_idx_2 = u[2] - x[6];
  Omega[0] = 0.0;
  Omega[4] = -omega_idx_0;
  Omega[8] = -omega_idx_1;
  Omega[12] = -omega_idx_2;
  Omega[1] = 0.0;
  Omega[5] = 0.0;
  Omega[9] = omega_idx_2;
  Omega[13] = -omega_idx_1;
  Omega[2] = 0.0;
  Omega[6] = 0.0;
  Omega[10] = 0.0;
  Omega[14] = omega_idx_0;
  Omega[3] = 0.0;
  Omega[7] = 0.0;
  Omega[11] = 0.0;
  Omega[15] = 0.0;
  for (k = 0; k < 4; k++) {
    Omega_p[k << 2] = Omega[k << 2] - Omega[k];
    Omega_p[(k << 2) + 1] = Omega[(k << 2) + 1] - Omega[k + 4];
    Omega_p[(k << 2) + 2] = Omega[(k << 2) + 2] - Omega[k + 8];
    Omega_p[(k << 2) + 3] = Omega[(k << 2) + 3] - Omega[k + 12];
  }

  memcpy(&Omega[0], &Omega_p[0], sizeof(real_T) << 4U);
  omega_idx_0 = 0.0;
  omega_idx_1 = 3.3121686421112381E-170;
  for (k = 0; k < 4; k++) {
    omega_idx_2 = 0.01 * (Omega[k + 12] * 0.5 * x[3] + (Omega[k + 8] * 0.5 * x[2]
      + (Omega[k + 4] * 0.5 * x[1] + 0.5 * Omega[k] * x[0]))) + x[k];
    absxk = muDoubleScalarAbs(omega_idx_2);
    if (absxk > omega_idx_1) {
      t = omega_idx_1 / absxk;
      omega_idx_0 = omega_idx_0 * t * t + 1.0;
      omega_idx_1 = absxk;
    } else {
      t = absxk / omega_idx_1;
      omega_idx_0 += t * t;
    }

    q[k] = omega_idx_2;
  }

  omega_idx_0 = omega_idx_1 * muDoubleScalarSqrt(omega_idx_0);
  q_p[0] = q[0] / omega_idx_0;
  q_p[1] = q[1] / omega_idx_0;
  q_p[2] = q[2] / omega_idx_0;
  q_p[3] = q[3] / omega_idx_0;
  q_p[4] = -3.4906585039886593E-5 * x[4] * 0.01 + x[4];
  q_p[5] = -3.4906585039886593E-5 * x[5] * 0.01 + x[5];
  q_p[6] = -3.4906585039886593E-5 * x[6] * 0.01 + x[6];
  for (k = 0; k < 7; k++) {
    x[k] = q_p[k];
  }
}
