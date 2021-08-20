#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_fYIugbQT.h"
#include "xgemv_Qyu3HdjX.h"
#include "xgerc_N2d1K9WT.h"
#include "xzlarf_rlIo3GIC.h"

void xzlarf_rlIo3GIC(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T C[200],
                     int32_T ic0, real_T work[10])
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

    lastc = ilazlc_fYIugbQT(lastv, n, C, ic0, 20);
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    xgemv_Qyu3HdjX(lastv, lastc, C, ic0, C, iv0, work);
    xgerc_N2d1K9WT(lastv, lastc, -tau, iv0, work, C, ic0);
  }
}
