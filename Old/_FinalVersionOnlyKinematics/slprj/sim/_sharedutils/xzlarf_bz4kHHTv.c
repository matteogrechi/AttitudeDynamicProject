#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_KzSIWYa5.h"
#include "xgemv_6BnHTlvF.h"
#include "xgerc_F7Fm68EI.h"
#include "xzlarf_bz4kHHTv.h"

void xzlarf_bz4kHHTv(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T C[182],
                     int32_T ic0, real_T work[7])
{
  int32_T lastc;
  int32_T lastv;
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = ilazlc_KzSIWYa5(lastv, n, C, ic0, 26);
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    xgemv_6BnHTlvF(lastv, lastc, C, ic0, C, iv0, work);
    xgerc_F7Fm68EI(lastv, lastc, -tau, iv0, work, C, ic0);
  }
}
