#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "xztgevc_d7aNh17H.h"

void xztgevc_d7aNh17H(const creal_T A[16], creal_T V[16])
{
  creal_T work1[4];
  real_T rworka[4];
  real_T acoeff;
  real_T anorm;
  real_T ascale;
  real_T salpha_im;
  real_T salpha_re;
  real_T scale;
  real_T temp;
  real_T work2_idx_1_im;
  real_T work2_idx_2_im;
  real_T work2_idx_2_re;
  real_T work2_idx_3_im;
  real_T work2_idx_3_re;
  int32_T b_j;
  int32_T c_j;
  int32_T c_jr;
  int32_T i;
  int32_T j;
  boolean_T lscalea;
  boolean_T lscaleb;
  rworka[0] = 0.0;
  rworka[2] = 0.0;
  rworka[3] = 0.0;
  anorm = muDoubleScalarAbs(A[0].re) + muDoubleScalarAbs(A[0].im);
  rworka[1] = muDoubleScalarAbs(A[4].re) + muDoubleScalarAbs(A[4].im);
  ascale = (muDoubleScalarAbs(A[5].re) + muDoubleScalarAbs(A[5].im)) + rworka[1];
  if (ascale > anorm) {
    anorm = ascale;
  }

  for (i = 0; i < 2; i++) {
    rworka[2] += muDoubleScalarAbs(A[i + 8].re) + muDoubleScalarAbs(A[i + 8].im);
  }

  ascale = (muDoubleScalarAbs(A[10].re) + muDoubleScalarAbs(A[10].im)) + rworka
    [2];
  if (ascale > anorm) {
    anorm = ascale;
  }

  for (i = 0; i < 3; i++) {
    rworka[3] += muDoubleScalarAbs(A[i + 12].re) + muDoubleScalarAbs(A[i + 12].
      im);
  }

  ascale = (muDoubleScalarAbs(A[15].re) + muDoubleScalarAbs(A[15].im)) + rworka
    [3];
  if (ascale > anorm) {
    anorm = ascale;
  }

  ascale = anorm;
  if (2.2250738585072014E-308 > anorm) {
    ascale = 2.2250738585072014E-308;
  }

  ascale = 1.0 / ascale;
  for (b_j = 0; b_j < 4; b_j++) {
    acoeff = (muDoubleScalarAbs(A[(((3 - b_j) << 2) - b_j) + 3].re) +
              muDoubleScalarAbs(A[(((3 - b_j) << 2) - b_j) + 3].im)) * ascale;
    if (1.0 > acoeff) {
      acoeff = 1.0;
    }

    temp = 1.0 / acoeff;
    salpha_re = A[(((3 - b_j) << 2) - b_j) + 3].re * temp * ascale;
    salpha_im = A[(((3 - b_j) << 2) - b_j) + 3].im * temp * ascale;
    acoeff = temp * ascale;
    lscalea = ((temp >= 2.2250738585072014E-308) && (acoeff <
                4.0083367200179456E-292));
    if ((muDoubleScalarAbs(salpha_re) + muDoubleScalarAbs(salpha_im) >=
         2.2250738585072014E-308) && (muDoubleScalarAbs(salpha_re) +
         muDoubleScalarAbs(salpha_im) < 4.0083367200179456E-292)) {
      lscaleb = true;
    } else {
      lscaleb = false;
    }

    scale = 1.0;
    if (lscalea) {
      scale = anorm;
      if (2.4948003869184E+291 < anorm) {
        scale = 2.4948003869184E+291;
      }

      scale *= 4.0083367200179456E-292 / temp;
    }

    if (lscaleb) {
      work2_idx_1_im = 4.0083367200179456E-292 / (muDoubleScalarAbs(salpha_re) +
        muDoubleScalarAbs(salpha_im));
      if (work2_idx_1_im > scale) {
        scale = work2_idx_1_im;
      }
    }

    if (lscalea || lscaleb) {
      work2_idx_1_im = muDoubleScalarAbs(salpha_re) + muDoubleScalarAbs
        (salpha_im);
      work2_idx_2_re = acoeff;
      if (1.0 > acoeff) {
        work2_idx_2_re = 1.0;
      }

      if (work2_idx_1_im > work2_idx_2_re) {
        work2_idx_2_re = work2_idx_1_im;
      }

      work2_idx_1_im = 1.0 / (2.2250738585072014E-308 * work2_idx_2_re);
      if (work2_idx_1_im < scale) {
        scale = work2_idx_1_im;
      }

      if (lscalea) {
        acoeff = scale * temp * ascale;
      } else {
        acoeff *= scale;
      }

      salpha_re *= scale;
      salpha_im *= scale;
    }

    memset(&work1[0], 0, sizeof(creal_T) << 2U);
    work1[3 - b_j].re = 1.0;
    work1[3 - b_j].im = 0.0;
    scale = 2.2204460492503131E-16 * acoeff * anorm;
    temp = (muDoubleScalarAbs(salpha_re) + muDoubleScalarAbs(salpha_im)) *
      2.2204460492503131E-16;
    if (temp > scale) {
      scale = temp;
    }

    if (2.2250738585072014E-308 > scale) {
      scale = 2.2250738585072014E-308;
    }

    for (i = 0; i <= 2 - b_j; i++) {
      work1[i].re = A[((3 - b_j) << 2) + i].re * acoeff;
      work1[i].im = A[((3 - b_j) << 2) + i].im * acoeff;
    }

    work1[3 - b_j].re = 1.0;
    work1[3 - b_j].im = 0.0;
    i = (int32_T)(((-1.0 - ((-(real_T)b_j + 4.0) - 1.0)) + 1.0) / -1.0);
    for (c_j = 0; c_j < i; c_j++) {
      j = 2 - (b_j + c_j);
      work2_idx_2_im = A[(j << 2) + j].re * acoeff - salpha_re;
      work2_idx_2_re = A[(j << 2) + j].im * acoeff - salpha_im;
      if (muDoubleScalarAbs(work2_idx_2_im) + muDoubleScalarAbs(work2_idx_2_re) <=
          scale) {
        work2_idx_2_im = scale;
        work2_idx_2_re = 0.0;
      }

      if ((muDoubleScalarAbs(work2_idx_2_im) + muDoubleScalarAbs(work2_idx_2_re)
           < 1.0) && (muDoubleScalarAbs(work1[j].re) + muDoubleScalarAbs(work1[j]
            .im) >= (muDoubleScalarAbs(work2_idx_2_im) + muDoubleScalarAbs
                     (work2_idx_2_re)) * 1.1235582092889474E+307)) {
        temp = 1.0 / (muDoubleScalarAbs(work1[j].re) + muDoubleScalarAbs(work1[j]
          .im));
        for (c_jr = 0; c_jr <= 3 - b_j; c_jr++) {
          work1[c_jr].re *= temp;
          work1[c_jr].im *= temp;
        }
      }

      temp = -work1[j].re;
      work2_idx_1_im = -work1[j].im;
      if (work2_idx_2_re == 0.0) {
        if (work2_idx_1_im == 0.0) {
          work1[j].re = temp / work2_idx_2_im;
          work1[j].im = 0.0;
        } else if (temp == 0.0) {
          work1[j].re = 0.0;
          work1[j].im = work2_idx_1_im / work2_idx_2_im;
        } else {
          work1[j].re = temp / work2_idx_2_im;
          work1[j].im = work2_idx_1_im / work2_idx_2_im;
        }
      } else if (work2_idx_2_im == 0.0) {
        if (temp == 0.0) {
          work1[j].re = work2_idx_1_im / work2_idx_2_re;
          work1[j].im = 0.0;
        } else if (work2_idx_1_im == 0.0) {
          work1[j].re = 0.0;
          work1[j].im = -(temp / work2_idx_2_re);
        } else {
          work1[j].re = work2_idx_1_im / work2_idx_2_re;
          work1[j].im = -(temp / work2_idx_2_re);
        }
      } else {
        work2_idx_3_re = muDoubleScalarAbs(work2_idx_2_im);
        work2_idx_3_im = muDoubleScalarAbs(work2_idx_2_re);
        if (work2_idx_3_re > work2_idx_3_im) {
          work2_idx_3_re = work2_idx_2_re / work2_idx_2_im;
          work2_idx_2_re = work2_idx_3_re * work2_idx_2_re + work2_idx_2_im;
          work1[j].re = (work2_idx_3_re * work2_idx_1_im + temp) /
            work2_idx_2_re;
          work1[j].im = (work2_idx_1_im - work2_idx_3_re * temp) /
            work2_idx_2_re;
        } else if (work2_idx_3_im == work2_idx_3_re) {
          work2_idx_2_im = work2_idx_2_im > 0.0 ? 0.5 : -0.5;
          work2_idx_2_re = work2_idx_2_re > 0.0 ? 0.5 : -0.5;
          work1[j].re = (temp * work2_idx_2_im + work2_idx_1_im * work2_idx_2_re)
            / work2_idx_3_re;
          work1[j].im = (work2_idx_1_im * work2_idx_2_im - temp * work2_idx_2_re)
            / work2_idx_3_re;
        } else {
          work2_idx_3_re = work2_idx_2_im / work2_idx_2_re;
          work2_idx_2_re += work2_idx_3_re * work2_idx_2_im;
          work1[j].re = (work2_idx_3_re * temp + work2_idx_1_im) /
            work2_idx_2_re;
          work1[j].im = (work2_idx_3_re * work2_idx_1_im - temp) /
            work2_idx_2_re;
        }
      }

      if (j + 1 > 1) {
        if (muDoubleScalarAbs(work1[j].re) + muDoubleScalarAbs(work1[j].im) >
            1.0) {
          temp = 1.0 / (muDoubleScalarAbs(work1[j].re) + muDoubleScalarAbs
                        (work1[j].im));
          if (acoeff * rworka[j] >= 1.1235582092889474E+307 * temp) {
            for (c_jr = 0; c_jr <= 3 - b_j; c_jr++) {
              work1[c_jr].re *= temp;
              work1[c_jr].im *= temp;
            }
          }
        }

        work2_idx_2_im = acoeff * work1[j].re;
        work2_idx_2_re = acoeff * work1[j].im;
        for (c_jr = 0; c_jr < j; c_jr++) {
          work1[c_jr].re += A[(j << 2) + c_jr].re * work2_idx_2_im - A[(j << 2)
            + c_jr].im * work2_idx_2_re;
          work1[c_jr].im += A[(j << 2) + c_jr].im * work2_idx_2_im + A[(j << 2)
            + c_jr].re * work2_idx_2_re;
        }
      }
    }

    salpha_re = 0.0;
    salpha_im = 0.0;
    scale = 0.0;
    work2_idx_1_im = 0.0;
    work2_idx_2_re = 0.0;
    work2_idx_2_im = 0.0;
    work2_idx_3_re = 0.0;
    work2_idx_3_im = 0.0;
    for (c_j = 0; c_j <= 3 - b_j; c_j++) {
      salpha_re += V[c_j << 2].re * work1[c_j].re - V[c_j << 2].im * work1[c_j].
        im;
      salpha_im += V[c_j << 2].re * work1[c_j].im + V[c_j << 2].im * work1[c_j].
        re;
      scale += V[(c_j << 2) + 1].re * work1[c_j].re - V[(c_j << 2) + 1].im *
        work1[c_j].im;
      work2_idx_1_im += V[(c_j << 2) + 1].re * work1[c_j].im + V[(c_j << 2) + 1]
        .im * work1[c_j].re;
      work2_idx_2_re += V[(c_j << 2) + 2].re * work1[c_j].re - V[(c_j << 2) + 2]
        .im * work1[c_j].im;
      work2_idx_2_im += V[(c_j << 2) + 2].re * work1[c_j].im + V[(c_j << 2) + 2]
        .im * work1[c_j].re;
      work2_idx_3_re += V[(c_j << 2) + 3].re * work1[c_j].re - V[(c_j << 2) + 3]
        .im * work1[c_j].im;
      work2_idx_3_im += V[(c_j << 2) + 3].re * work1[c_j].im + V[(c_j << 2) + 3]
        .im * work1[c_j].re;
    }

    acoeff = muDoubleScalarAbs(salpha_re) + muDoubleScalarAbs(salpha_im);
    temp = muDoubleScalarAbs(scale) + muDoubleScalarAbs(work2_idx_1_im);
    if (temp > acoeff) {
      acoeff = temp;
    }

    temp = muDoubleScalarAbs(work2_idx_2_re) + muDoubleScalarAbs(work2_idx_2_im);
    if (temp > acoeff) {
      acoeff = temp;
    }

    temp = muDoubleScalarAbs(work2_idx_3_re) + muDoubleScalarAbs(work2_idx_3_im);
    if (temp > acoeff) {
      acoeff = temp;
    }

    if (acoeff > 2.2250738585072014E-308) {
      temp = 1.0 / acoeff;
      V[(3 - b_j) << 2].re = temp * salpha_re;
      V[(3 - b_j) << 2].im = temp * salpha_im;
      V[((3 - b_j) << 2) + 1].re = temp * scale;
      V[((3 - b_j) << 2) + 1].im = temp * work2_idx_1_im;
      V[((3 - b_j) << 2) + 2].re = temp * work2_idx_2_re;
      V[((3 - b_j) << 2) + 2].im = temp * work2_idx_2_im;
      V[((3 - b_j) << 2) + 3].re = temp * work2_idx_3_re;
      V[((3 - b_j) << 2) + 3].im = temp * work2_idx_3_im;
    } else {
      V[(3 - b_j) << 2].re = 0.0;
      V[(3 - b_j) << 2].im = 0.0;
      V[((3 - b_j) << 2) + 1].re = 0.0;
      V[((3 - b_j) << 2) + 1].im = 0.0;
      V[((3 - b_j) << 2) + 2].re = 0.0;
      V[((3 - b_j) << 2) + 2].im = 0.0;
      V[((3 - b_j) << 2) + 3].re = 0.0;
      V[((3 - b_j) << 2) + 3].im = 0.0;
    }
  }
}
