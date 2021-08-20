#include "rtwtypes.h"
#include "multiword_types.h"
#include "anon_yDH48dhx.h"

void anon_yDH48dhx(const real_T q[4], real_T varargout_1[9])
{
  varargout_1[0] = (1.0 - q[2] * q[2] * 2.0) - q[3] * q[3] * 2.0;
  varargout_1[3] = 2.0 * q[1] * q[2] + 2.0 * q[0] * q[3];
  varargout_1[6] = -2.0 * q[0] * q[2] + 2.0 * q[1] * q[3];
  varargout_1[1] = 2.0 * q[1] * q[2] - 2.0 * q[0] * q[3];
  varargout_1[4] = (1.0 - q[1] * q[1] * 2.0) - q[3] * q[3] * 2.0;
  varargout_1[7] = 2.0 * q[0] * q[1] + 2.0 * q[2] * q[3];
  varargout_1[2] = 2.0 * q[0] * q[2] + 2.0 * q[1] * q[3];
  varargout_1[5] = -2.0 * q[0] * q[1] + 2.0 * q[2] * q[3];
  varargout_1[8] = (1.0 - q[1] * q[1] * 2.0) - q[2] * q[2] * 2.0;
}
