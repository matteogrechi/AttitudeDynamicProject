#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "mwmathutil.h"
#include "sqrt_JVgK17Mi.h"
#include "xzlanhs_WDnKxovd.h"
#include "xzlartg_MsBSmBns.h"
#include "xzlartg_eavk3Zsx.h"
#include "xzhgeqz_UkHqOzbP.h"

void xzhgeqz_UkHqOzbP(const creal_T A[16], int32_T ilo, int32_T ihi, int32_T
                      *info, creal_T alpha1[4], creal_T beta1[4])
{
  creal_T b_A[16];
  creal_T ad22;
  creal_T anorm_p;
  creal_T ctemp;
  creal_T shift;
  real_T ai;
  real_T anorm;
  real_T ar;
  real_T b_atol;
  real_T eshift_im;
  real_T eshift_re;
  real_T shift_im;
  real_T t1_im;
  real_T t1_re;
  real_T temp;
  real_T temp2;
  int32_T exitg1;
  int32_T i;
  int32_T ifirst;
  int32_T iiter;
  int32_T ilast;
  int32_T ilastm;
  int32_T ilastm1;
  int32_T istart;
  int32_T j;
  int32_T jiter;
  int32_T jp1;
  boolean_T exitg2;
  boolean_T failed;
  boolean_T goto60;
  boolean_T goto70;
  boolean_T goto90;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  memcpy(&b_A[0], &A[0], sizeof(creal_T) << 4U);
  *info = 0;
  alpha1[0].re = 0.0;
  alpha1[0].im = 0.0;
  beta1[0].re = 1.0;
  beta1[0].im = 0.0;
  alpha1[1].re = 0.0;
  alpha1[1].im = 0.0;
  beta1[1].re = 1.0;
  beta1[1].im = 0.0;
  alpha1[2].re = 0.0;
  alpha1[2].im = 0.0;
  beta1[2].re = 1.0;
  beta1[2].im = 0.0;
  alpha1[3].re = 0.0;
  alpha1[3].im = 0.0;
  beta1[3].re = 1.0;
  beta1[3].im = 0.0;
  eshift_re = 0.0;
  eshift_im = 0.0;
  ctemp.re = 0.0;
  ctemp.im = 0.0;
  anorm = xzlanhs_WDnKxovd(A, ilo, ihi);
  temp = 2.2204460492503131E-16 * anorm;
  b_atol = 2.2250738585072014E-308;
  if (temp > 2.2250738585072014E-308) {
    b_atol = temp;
  }

  temp = 2.2250738585072014E-308;
  if (anorm > 2.2250738585072014E-308) {
    temp = anorm;
  }

  anorm = 1.0 / temp;
  failed = true;
  for (ilast = ihi; ilast + 1 < 5; ilast++) {
    alpha1[ilast] = A[(ilast << 2) + ilast];
  }

  guard1 = false;
  guard2 = false;
  if (ihi >= ilo) {
    ifirst = ilo;
    istart = ilo;
    ilast = ihi - 1;
    ilastm1 = ihi - 2;
    ilastm = ihi;
    iiter = 0;
    goto60 = false;
    goto70 = false;
    goto90 = false;
    jiter = 0;
    do {
      exitg1 = 0;
      if (jiter <= ((ihi - ilo) + 1) * 30 - 1) {
        if (ilast + 1 == ilo) {
          goto60 = true;
        } else if (muDoubleScalarAbs(b_A[(ilastm1 << 2) + ilast].re) +
                   muDoubleScalarAbs(b_A[(ilastm1 << 2) + ilast].im) <= b_atol)
        {
          b_A[ilast + (ilastm1 << 2)].re = 0.0;
          b_A[ilast + (ilastm1 << 2)].im = 0.0;
          goto60 = true;
        } else {
          j = ilastm1;
          guard3 = false;
          exitg2 = false;
          while ((!exitg2) && (j + 1 >= ilo)) {
            if (j + 1 == ilo) {
              guard3 = true;
              exitg2 = true;
            } else if (muDoubleScalarAbs(b_A[((j - 1) << 2) + j].re) +
                       muDoubleScalarAbs(b_A[((j - 1) << 2) + j].im) <= b_atol)
            {
              b_A[j + ((j - 1) << 2)].re = 0.0;
              b_A[j + ((j - 1) << 2)].im = 0.0;
              guard3 = true;
              exitg2 = true;
            } else {
              j--;
              guard3 = false;
            }
          }

          if (guard3) {
            ifirst = j + 1;
            goto70 = true;
          }
        }

        if ((!goto60) && (!goto70)) {
          alpha1[0].re = (rtNaN);
          alpha1[0].im = 0.0;
          beta1[0].re = (rtNaN);
          beta1[0].im = 0.0;
          alpha1[1].re = (rtNaN);
          alpha1[1].im = 0.0;
          beta1[1].re = (rtNaN);
          beta1[1].im = 0.0;
          alpha1[2].re = (rtNaN);
          alpha1[2].im = 0.0;
          beta1[2].re = (rtNaN);
          beta1[2].im = 0.0;
          alpha1[3].re = (rtNaN);
          alpha1[3].im = 0.0;
          beta1[3].re = (rtNaN);
          beta1[3].im = 0.0;
          *info = 1;
          exitg1 = 1;
        } else if (goto60) {
          goto60 = false;
          alpha1[ilast] = b_A[(ilast << 2) + ilast];
          ilast = ilastm1;
          ilastm1--;
          if (ilast + 1 < ilo) {
            failed = false;
            guard2 = true;
            exitg1 = 1;
          } else {
            iiter = 0;
            eshift_re = 0.0;
            eshift_im = 0.0;
            ilastm = ilast + 1;
            jiter++;
          }
        } else {
          if (goto70) {
            goto70 = false;
            iiter++;
            if (iiter - iiter / 10 * 10 != 0) {
              ar = b_A[(ilastm1 << 2) + ilastm1].re * anorm;
              ai = b_A[(ilastm1 << 2) + ilastm1].im * anorm;
              if (ai == 0.0) {
                shift.re = ar / 0.5;
                shift.im = 0.0;
              } else if (ar == 0.0) {
                shift.re = 0.0;
                shift.im = ai / 0.5;
              } else {
                shift.re = ar / 0.5;
                shift.im = ai / 0.5;
              }

              ar = b_A[(ilast << 2) + ilast].re * anorm;
              ai = b_A[(ilast << 2) + ilast].im * anorm;
              if (ai == 0.0) {
                ad22.re = ar / 0.5;
                ad22.im = 0.0;
              } else if (ar == 0.0) {
                ad22.re = 0.0;
                ad22.im = ai / 0.5;
              } else {
                ad22.re = ar / 0.5;
                ad22.im = ai / 0.5;
              }

              t1_re = (shift.re + ad22.re) * 0.5;
              t1_im = (shift.im + ad22.im) * 0.5;
              ar = b_A[(ilast << 2) + ilastm1].re * anorm;
              ai = b_A[(ilast << 2) + ilastm1].im * anorm;
              if (ai == 0.0) {
                temp = ar / 0.5;
                temp2 = 0.0;
              } else if (ar == 0.0) {
                temp = 0.0;
                temp2 = ai / 0.5;
              } else {
                temp = ar / 0.5;
                temp2 = ai / 0.5;
              }

              ar = b_A[(ilastm1 << 2) + ilast].re * anorm;
              ai = b_A[(ilastm1 << 2) + ilast].im * anorm;
              if (ai == 0.0) {
                ar /= 0.5;
                ai = 0.0;
              } else if (ar == 0.0) {
                ar = 0.0;
                ai /= 0.5;
              } else {
                ar /= 0.5;
                ai /= 0.5;
              }

              shift_im = shift.re * ad22.im + shift.im * ad22.re;
              shift.re = ((t1_re * t1_re - t1_im * t1_im) + (temp * ar - temp2 *
                ai)) - (shift.re * ad22.re - shift.im * ad22.im);
              shift.im = ((t1_re * t1_im + t1_im * t1_re) + (temp * ai + temp2 *
                ar)) - shift_im;
              sqrt_JVgK17Mi(&shift);
              if ((t1_re - ad22.re) * shift.re + (t1_im - ad22.im) * shift.im <=
                  0.0) {
                shift.re += t1_re;
                shift.im += t1_im;
              } else {
                shift.re = t1_re - shift.re;
                shift.im = t1_im - shift.im;
              }
            } else {
              ar = b_A[(ilastm1 << 2) + ilast].re * anorm;
              ai = b_A[(ilastm1 << 2) + ilast].im * anorm;
              if (ai == 0.0) {
                temp = ar / 0.5;
                temp2 = 0.0;
              } else if (ar == 0.0) {
                temp = 0.0;
                temp2 = ai / 0.5;
              } else {
                temp = ar / 0.5;
                temp2 = ai / 0.5;
              }

              eshift_re += temp;
              eshift_im += temp2;
              shift.re = eshift_re;
              shift.im = eshift_im;
            }

            j = ilastm1;
            jp1 = ilastm1 + 1;
            exitg2 = false;
            while ((!exitg2) && (j + 1 > ifirst)) {
              istart = j + 1;
              ctemp.re = b_A[(j << 2) + j].re * anorm - shift.re * 0.5;
              ctemp.im = b_A[(j << 2) + j].im * anorm - shift.im * 0.5;
              temp = muDoubleScalarAbs(ctemp.re) + muDoubleScalarAbs(ctemp.im);
              temp2 = (muDoubleScalarAbs(b_A[(j << 2) + jp1].re) +
                       muDoubleScalarAbs(b_A[(j << 2) + jp1].im)) * anorm;
              t1_re = temp;
              if (temp2 > temp) {
                t1_re = temp2;
              }

              if ((t1_re < 1.0) && (t1_re != 0.0)) {
                temp /= t1_re;
                temp2 /= t1_re;
              }

              if ((muDoubleScalarAbs(b_A[((j - 1) << 2) + j].re) +
                   muDoubleScalarAbs(b_A[((j - 1) << 2) + j].im)) * temp2 <=
                  temp * b_atol) {
                goto90 = true;
                exitg2 = true;
              } else {
                jp1 = j;
                j--;
              }
            }

            if (!goto90) {
              istart = ifirst;
              ctemp.re = b_A[(((ifirst - 1) << 2) + ifirst) - 1].re * anorm -
                shift.re * 0.5;
              ctemp.im = b_A[(((ifirst - 1) << 2) + ifirst) - 1].im * anorm -
                shift.im * 0.5;
            }

            goto90 = false;
            anorm_p.re = b_A[((istart - 1) << 2) + istart].re * anorm;
            anorm_p.im = b_A[((istart - 1) << 2) + istart].im * anorm;
            xzlartg_eavk3Zsx(ctemp, anorm_p, &temp, &ad22);
            j = istart;
            jp1 = istart - 2;
            while (j < ilast + 1) {
              if (j > istart) {
                xzlartg_MsBSmBns(b_A[(j + (jp1 << 2)) - 1], b_A[j + (jp1 << 2)],
                                 &temp, &ad22, &b_A[(j + (jp1 << 2)) - 1]);
                b_A[j + (jp1 << 2)].re = 0.0;
                b_A[j + (jp1 << 2)].im = 0.0;
              }

              for (jp1 = j - 1; jp1 < ilastm; jp1++) {
                shift.re = b_A[((jp1 << 2) + j) - 1].re * temp + (b_A[(jp1 << 2)
                  + j].re * ad22.re - b_A[(jp1 << 2) + j].im * ad22.im);
                shift.im = b_A[((jp1 << 2) + j) - 1].im * temp + (b_A[(jp1 << 2)
                  + j].im * ad22.re + b_A[(jp1 << 2) + j].re * ad22.im);
                temp2 = b_A[((jp1 << 2) + j) - 1].re;
                b_A[j + (jp1 << 2)].re = b_A[(jp1 << 2) + j].re * temp - (b_A
                  [((jp1 << 2) + j) - 1].re * ad22.re + b_A[((jp1 << 2) + j) - 1]
                  .im * ad22.im);
                b_A[j + (jp1 << 2)].im = b_A[(jp1 << 2) + j].im * temp - (b_A
                  [((jp1 << 2) + j) - 1].im * ad22.re - ad22.im * temp2);
                b_A[(j + (jp1 << 2)) - 1] = shift;
              }

              ad22.re = -ad22.re;
              ad22.im = -ad22.im;
              jp1 = j;
              if (ilast + 1 < j + 2) {
                jp1 = ilast - 1;
              }

              for (i = ifirst - 1; i < jp1 + 2; i++) {
                shift.re = (b_A[((j - 1) << 2) + i].re * ad22.re - b_A[((j - 1) <<
                  2) + i].im * ad22.im) + b_A[(j << 2) + i].re * temp;
                shift.im = (b_A[((j - 1) << 2) + i].im * ad22.re + b_A[((j - 1) <<
                  2) + i].re * ad22.im) + b_A[(j << 2) + i].im * temp;
                temp2 = b_A[(j << 2) + i].re;
                b_A[i + ((j - 1) << 2)].re = b_A[((j - 1) << 2) + i].re * temp -
                  (b_A[(j << 2) + i].re * ad22.re + b_A[(j << 2) + i].im *
                   ad22.im);
                b_A[i + ((j - 1) << 2)].im = b_A[((j - 1) << 2) + i].im * temp -
                  (b_A[(j << 2) + i].im * ad22.re - ad22.im * temp2);
                b_A[i + (j << 2)] = shift;
              }

              jp1 = j - 1;
              j++;
            }
          }

          jiter++;
        }
      } else {
        guard2 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  } else {
    guard1 = true;
  }

  if (guard2) {
    if (failed) {
      *info = ilast + 1;
      for (j = 0; j <= ilast; j++) {
        alpha1[j].re = (rtNaN);
        alpha1[j].im = 0.0;
        beta1[j].re = (rtNaN);
        beta1[j].im = 0.0;
      }
    } else {
      guard1 = true;
    }
  }

  if (guard1) {
    for (ilast = 0; ilast <= ilo - 2; ilast++) {
      alpha1[ilast] = b_A[(ilast << 2) + ilast];
    }
  }
}
