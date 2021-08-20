#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "anon_yDH48dhx.h"
#include "mwmathutil.h"
#include "simulateStarSensor_7u1dtyZ4.h"

void simulateStarSensor_7u1dtyZ4(const real_T x[7], const real_T input[13],
  real_T y[6])
{
  real_T starBF[9];
  real_T starECI[9];
  real_T tmp[9];
  real_T tmp_p[9];
  real_T j;
  int32_T b_i;
  int32_T i;
  int32_T i_p;
  int32_T j_p;
  memset(&starECI[0], 0, 9U * sizeof(real_T));
  j = 1.0;
  anon_yDH48dhx(&input[0], starBF);
  anon_yDH48dhx(&x[0], tmp);
  for (b_i = 0; b_i < 3; b_i++) {
    i = b_i * 3 + 5;
    j_p = (int32_T)j;
    j++;
    for (i_p = 0; i_p < 3; i_p++) {
      starECI[i_p + 3 * (j_p - 1)] = input[(i + i_p) - 1];
      tmp_p[b_i + 3 * i_p] = 0.0;
      tmp_p[b_i + 3 * i_p] += tmp[3 * i_p] * starBF[b_i];
      tmp_p[b_i + 3 * i_p] += tmp[3 * i_p + 1] * starBF[b_i + 3];
      tmp_p[b_i + 3 * i_p] += tmp[3 * i_p + 2] * starBF[b_i + 6];
    }
  }

  for (i_p = 0; i_p < 3; i_p++) {
    for (b_i = 0; b_i < 3; b_i++) {
      starBF[b_i + 3 * i_p] = 0.0;
      starBF[b_i + 3 * i_p] += starECI[3 * i_p] * tmp_p[b_i];
      starBF[b_i + 3 * i_p] += starECI[3 * i_p + 1] * tmp_p[b_i + 3];
      starBF[b_i + 3 * i_p] += starECI[3 * i_p + 2] * tmp_p[b_i + 6];
    }
  }

  y[0] = muDoubleScalarAtan2(starBF[0], starBF[2]);
  y[1] = muDoubleScalarAtan2(starBF[1], starBF[2]);
  y[2] = muDoubleScalarAtan2(starBF[3], starBF[5]);
  y[3] = muDoubleScalarAtan2(starBF[4], starBF[5]);
  y[4] = muDoubleScalarAtan2(starBF[6], starBF[8]);
  y[5] = muDoubleScalarAtan2(starBF[7], starBF[8]);
}
