#include "rtwtypes.h"
#include "multiword_types.h"
#include "xzggbal_lBMn7sDz.h"

void xzggbal_lBMn7sDz(creal_T A[16], int32_T *ilo, int32_T *ihi, int32_T rscale
                      [4])
{
  real_T atmp_im;
  real_T atmp_re;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T ii;
  int32_T j;
  int32_T jj;
  int32_T nzcount;
  boolean_T exitg3;
  boolean_T exitg4;
  boolean_T found;
  rscale[0] = 1;
  rscale[1] = 1;
  rscale[2] = 1;
  rscale[3] = 1;
  *ilo = 1;
  *ihi = 4;
  do {
    exitg2 = 0;
    i = 0;
    j = 0;
    found = false;
    ii = *ihi;
    exitg3 = false;
    while ((!exitg3) && (ii > 0)) {
      nzcount = 0;
      i = ii;
      j = *ihi;
      jj = 0;
      exitg4 = false;
      while ((!exitg4) && (jj <= *ihi - 1)) {
        if ((A[((jj << 2) + ii) - 1].re != 0.0) || (A[((jj << 2) + ii) - 1].im
             != 0.0) || (jj + 1 == ii)) {
          if (nzcount == 0) {
            j = jj + 1;
            nzcount = 1;
            jj++;
          } else {
            nzcount = 2;
            exitg4 = true;
          }
        } else {
          jj++;
        }
      }

      if (nzcount < 2) {
        found = true;
        exitg3 = true;
      } else {
        ii--;
      }
    }

    if (!found) {
      exitg2 = 2;
    } else {
      if (i != *ihi) {
        atmp_re = A[i - 1].re;
        atmp_im = A[i - 1].im;
        A[i - 1] = A[*ihi - 1];
        A[*ihi - 1].re = atmp_re;
        A[*ihi - 1].im = atmp_im;
        atmp_re = A[i + 3].re;
        atmp_im = A[i + 3].im;
        A[i + 3] = A[*ihi + 3];
        A[*ihi + 3].re = atmp_re;
        A[*ihi + 3].im = atmp_im;
        atmp_re = A[i + 7].re;
        atmp_im = A[i + 7].im;
        A[i + 7] = A[*ihi + 7];
        A[*ihi + 7].re = atmp_re;
        A[*ihi + 7].im = atmp_im;
        atmp_re = A[i + 11].re;
        atmp_im = A[i + 11].im;
        A[i + 11] = A[*ihi + 11];
        A[*ihi + 11].re = atmp_re;
        A[*ihi + 11].im = atmp_im;
      }

      if (j != *ihi) {
        for (i = 0; i < *ihi; i++) {
          atmp_re = A[((j - 1) << 2) + i].re;
          atmp_im = A[((j - 1) << 2) + i].im;
          A[i + ((j - 1) << 2)] = A[((*ihi - 1) << 2) + i];
          A[i + ((*ihi - 1) << 2)].re = atmp_re;
          A[i + ((*ihi - 1) << 2)].im = atmp_im;
        }
      }

      rscale[*ihi - 1] = j;
      (*ihi)--;
      if (*ihi == 1) {
        rscale[0] = 1;
        exitg2 = 1;
      }
    }
  } while (exitg2 == 0);

  if (exitg2 == 1) {
  } else {
    do {
      exitg1 = 0;
      i = 0;
      j = 0;
      found = false;
      ii = *ilo;
      exitg3 = false;
      while ((!exitg3) && (ii <= *ihi)) {
        nzcount = 0;
        i = *ihi;
        j = ii;
        jj = *ilo;
        exitg4 = false;
        while ((!exitg4) && (jj <= *ihi)) {
          if ((A[(((ii - 1) << 2) + jj) - 1].re != 0.0) || (A[(((ii - 1) << 2) +
                jj) - 1].im != 0.0) || (jj == ii)) {
            if (nzcount == 0) {
              i = jj;
              nzcount = 1;
              jj++;
            } else {
              nzcount = 2;
              exitg4 = true;
            }
          } else {
            jj++;
          }
        }

        if (nzcount < 2) {
          found = true;
          exitg3 = true;
        } else {
          ii++;
        }
      }

      if (!found) {
        exitg1 = 1;
      } else {
        if (i != *ilo) {
          for (ii = *ilo - 1; ii + 1 < 5; ii++) {
            atmp_re = A[((ii << 2) + i) - 1].re;
            atmp_im = A[((ii << 2) + i) - 1].im;
            A[(i + (ii << 2)) - 1] = A[((ii << 2) + *ilo) - 1];
            A[(*ilo + (ii << 2)) - 1].re = atmp_re;
            A[(*ilo + (ii << 2)) - 1].im = atmp_im;
          }
        }

        if (j != *ilo) {
          for (i = 0; i < *ihi; i++) {
            atmp_re = A[((j - 1) << 2) + i].re;
            atmp_im = A[((j - 1) << 2) + i].im;
            A[i + ((j - 1) << 2)] = A[((*ilo - 1) << 2) + i];
            A[i + ((*ilo - 1) << 2)].re = atmp_re;
            A[i + ((*ilo - 1) << 2)].im = atmp_im;
          }
        }

        rscale[*ilo - 1] = j;
        (*ilo)++;
        if (*ilo == *ihi) {
          rscale[*ilo - 1] = *ilo;
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}
