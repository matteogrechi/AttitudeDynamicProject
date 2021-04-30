#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "attitudePropagation_jopKHuyt.h"

void attitudePropagation_jopKHuyt(real_T x[7], const real_T u[3])
{
  real_T Omega[16];
  real_T Omega_p[16];
  real_T q_p[7];
  real_T q[4];
  real_T absxk;
  real_T q_e;
  real_T scale;
  real_T t;
  real_T y;
  int32_T k;
  Omega[0] = 0.0;
  Omega[4] = -x[4];
  Omega[8] = -x[5];
  Omega[12] = -x[6];
  Omega[1] = 0.0;
  Omega[5] = 0.0;
  Omega[9] = x[6];
  Omega[13] = -x[5];
  Omega[2] = 0.0;
  Omega[6] = 0.0;
  Omega[10] = 0.0;
  Omega[14] = x[4];
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
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 4; k++) {
    q_e = Omega[k + 12] * 0.5 * x[3] + (Omega[k + 8] * 0.5 * x[2] + (Omega[k + 4]
      * 0.5 * x[1] + 0.5 * Omega[k] * x[0]));
    q_e = 0.01 * q_e + x[k];
    absxk = muDoubleScalarAbs(q_e);
    if (absxk > scale) {
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }

    q[k] = q_e;
  }

  y = scale * muDoubleScalarSqrt(y);
  q_p[0] = q[0] / y;
  q_p[1] = q[1] / y;
  q_p[2] = q[2] / y;
  q_p[3] = q[3] / y;
  q_p[4] = (6.7580000000000009 * x[5] * x[6] + u[0]) / 8.009 * 0.01 + x[4];
  q_p[5] = (-6.7580000000000009 * x[6] * x[4] + u[1]) / 8.009 * 0.01 + x[5];
  q_p[6] = (0.0 * x[4] * x[5] + u[2]) / 1.251 * 0.01 + x[6];
  for (k = 0; k < 7; k++) {
    x[k] = q_p[k];
  }
}
