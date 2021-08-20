#include "rtwtypes.h"
#include "multiword_types.h"
#include "istriu_UHMBrJD6.h"

boolean_T istriu_UHMBrJD6(const real_T x[49])
{
  int32_T exitg1;
  int32_T i;
  int32_T j;
  boolean_T exitg2;
  boolean_T p;
  p = true;
  j = 0;
  exitg2 = false;
  while ((!exitg2) && (j < 7)) {
    i = j + 1;
    do {
      exitg1 = 0;
      if (i + 1 < 8) {
        if (!(x[7 * j + i] == 0.0)) {
          p = false;
          exitg1 = 1;
        } else {
          i++;
        }
      } else {
        j++;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }

  return p;
}
