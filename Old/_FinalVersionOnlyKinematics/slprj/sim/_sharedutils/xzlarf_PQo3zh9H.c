#include "rtwtypes.h"
#include "multiword_types.h"
#include "xzlarf_PQo3zh9H.h"

void xzlarf_PQo3zh9H(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T C[16],
                     int32_T ic0, real_T work[4])
{
  real_T c;
  int32_T b_b;
  int32_T coltop;
  int32_T exitg1;
  int32_T ia;
  int32_T iac;
  int32_T ix;
  int32_T jy;
  int32_T lastc;
  int32_T lastv;
  boolean_T exitg2;
  if (tau != 0.0) {
    lastv = m - 1;
    lastc = iv0 + m;
    while ((lastv + 1 > 0) && (C[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    lastc = n - 1;
    exitg2 = false;
    while ((!exitg2) && (lastc + 1 > 0)) {
      coltop = (lastc << 2) + ic0;
      jy = coltop;
      do {
        exitg1 = 0;
        if (jy <= coltop + lastv) {
          if (C[jy - 1] != 0.0) {
            exitg1 = 1;
          } else {
            jy++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = -1;
    lastc = -1;
  }

  if (lastv + 1 > 0) {
    if (lastc + 1 != 0) {
      for (coltop = 0; coltop <= lastc; coltop++) {
        work[coltop] = 0.0;
      }

      coltop = 0;
      jy = (lastc << 2) + ic0;
      for (iac = ic0; iac <= jy; iac += 4) {
        ix = iv0;
        c = 0.0;
        b_b = iac + lastv;
        for (ia = iac; ia <= b_b; ia++) {
          c += C[ia - 1] * C[ix - 1];
          ix++;
        }

        work[coltop] += c;
        coltop++;
      }
    }

    if (!(-tau == 0.0)) {
      coltop = ic0;
      jy = 0;
      for (iac = 0; iac <= lastc; iac++) {
        if (work[jy] != 0.0) {
          c = work[jy] * -tau;
          ix = iv0;
          b_b = lastv + coltop;
          for (ia = coltop; ia <= b_b; ia++) {
            C[ia - 1] += C[ix - 1] * c;
            ix++;
          }
        }

        jy++;
        coltop += 4;
      }
    }
  }
}
