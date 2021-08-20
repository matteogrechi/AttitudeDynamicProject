#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_cB1qVHB6.h"

int32_T ilazlc_cB1qVHB6(int32_T m, int32_T n, const real_T A[49], int32_T ia0,
  int32_T lda)
{
  int32_T coltop;
  int32_T exitg1;
  int32_T ia;
  int32_T j;
  boolean_T exitg2;
  j = n;
  exitg2 = false;
  while ((!exitg2) && (j > 0)) {
    coltop = (j - 1) * lda + ia0;
    ia = coltop;
    do {
      exitg1 = 0;
      if (ia <= (coltop + m) - 1) {
        if (A[ia - 1] != 0.0) {
          exitg1 = 1;
        } else {
          ia++;
        }
      } else {
        j--;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }

  return j;
}
