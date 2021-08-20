#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "xzggbal_lBMn7sDz.h"
#include "xzhgeqz_Po83NVpY.h"
#include "xzlartg_MsBSmBns.h"
#include "xztgevc_d7aNh17H.h"
#include "xzggev_Re0Ailk6.h"

void xzggev_Re0Ailk6(creal_T A[16], int32_T *info, creal_T alpha1[4], creal_T
                     beta1[4], creal_T V[16])
{
  creal_T s;
  real_T absxk;
  real_T anrm;
  real_T cfromc;
  real_T cto1;
  real_T ctoc;
  real_T mul;
  real_T stemp_im;
  int32_T rscale[4];
  int32_T b_k;
  int32_T j;
  int32_T jcol;
  int32_T jrow;
  int32_T k;
  int8_T b_I[16];
  boolean_T exitg1;
  boolean_T guard1 = false;
  boolean_T ilascl;
  boolean_T notdone;
  *info = 0;
  anrm = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    absxk = muDoubleScalarHypot(A[k].re, A[k].im);
    if (muDoubleScalarIsNaN(absxk)) {
      anrm = (rtNaN);
      exitg1 = true;
    } else {
      if (absxk > anrm) {
        anrm = absxk;
      }

      k++;
    }
  }

  if (muDoubleScalarIsInf(anrm) || muDoubleScalarIsNaN(anrm)) {
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
    for (jrow = 0; jrow < 16; jrow++) {
      V[jrow].re = (rtNaN);
      V[jrow].im = 0.0;
    }
  } else {
    ilascl = false;
    absxk = anrm;
    guard1 = false;
    if ((anrm > 0.0) && (anrm < 6.7178761075670888E-139)) {
      absxk = 6.7178761075670888E-139;
      ilascl = true;
      guard1 = true;
    } else if (anrm > 1.4885657073574029E+138) {
      absxk = 1.4885657073574029E+138;
      ilascl = true;
      guard1 = true;
    }

    if (guard1) {
      cfromc = anrm;
      ctoc = absxk;
      notdone = true;
      while (notdone) {
        stemp_im = cfromc * 2.0041683600089728E-292;
        cto1 = ctoc / 4.9896007738368E+291;
        if ((stemp_im > ctoc) && (ctoc != 0.0)) {
          mul = 2.0041683600089728E-292;
          cfromc = stemp_im;
        } else if (cto1 > cfromc) {
          mul = 4.9896007738368E+291;
          ctoc = cto1;
        } else {
          mul = ctoc / cfromc;
          notdone = false;
        }

        for (jrow = 0; jrow < 16; jrow++) {
          A[jrow].re *= mul;
          A[jrow].im *= mul;
        }
      }
    }

    xzggbal_lBMn7sDz(A, &b_k, &k, rscale);
    for (jrow = 0; jrow < 16; jrow++) {
      b_I[jrow] = 0;
    }

    b_I[0] = 1;
    b_I[5] = 1;
    b_I[10] = 1;
    b_I[15] = 1;
    for (jrow = 0; jrow < 16; jrow++) {
      V[jrow].re = b_I[jrow];
      V[jrow].im = 0.0;
    }

    if (k >= b_k + 2) {
      for (jcol = b_k - 1; jcol + 1 < k - 1; jcol++) {
        for (jrow = k - 1; jrow + 1 > jcol + 2; jrow--) {
          xzlartg_MsBSmBns(A[(jrow + (jcol << 2)) - 1], A[jrow + (jcol << 2)],
                           &cfromc, &s, &A[(jrow + (jcol << 2)) - 1]);
          A[jrow + (jcol << 2)].re = 0.0;
          A[jrow + (jcol << 2)].im = 0.0;
          for (j = jcol + 1; j + 1 < 5; j++) {
            ctoc = A[((j << 2) + jrow) - 1].re * cfromc + (A[(j << 2) + jrow].re
              * s.re - A[(j << 2) + jrow].im * s.im);
            stemp_im = A[((j << 2) + jrow) - 1].im * cfromc + (A[(j << 2) + jrow]
              .im * s.re + A[(j << 2) + jrow].re * s.im);
            cto1 = A[((j << 2) + jrow) - 1].im;
            mul = A[((j << 2) + jrow) - 1].re;
            A[jrow + (j << 2)].re = A[(j << 2) + jrow].re * cfromc - (A[((j << 2)
              + jrow) - 1].re * s.re + A[((j << 2) + jrow) - 1].im * s.im);
            A[jrow + (j << 2)].im = A[(j << 2) + jrow].im * cfromc - (s.re *
              cto1 - s.im * mul);
            A[(jrow + (j << 2)) - 1].re = ctoc;
            A[(jrow + (j << 2)) - 1].im = stemp_im;
          }

          s.re = -s.re;
          s.im = -s.im;
          for (j = 0; j < k; j++) {
            ctoc = (A[((jrow - 1) << 2) + j].re * s.re - A[((jrow - 1) << 2) + j]
                    .im * s.im) + A[(jrow << 2) + j].re * cfromc;
            stemp_im = (A[((jrow - 1) << 2) + j].im * s.re + A[((jrow - 1) << 2)
                        + j].re * s.im) + A[(jrow << 2) + j].im * cfromc;
            cto1 = A[(jrow << 2) + j].im;
            mul = A[(jrow << 2) + j].re;
            A[j + ((jrow - 1) << 2)].re = A[((jrow - 1) << 2) + j].re * cfromc -
              (A[(jrow << 2) + j].re * s.re + A[(jrow << 2) + j].im * s.im);
            A[j + ((jrow - 1) << 2)].im = A[((jrow - 1) << 2) + j].im * cfromc -
              (s.re * cto1 - s.im * mul);
            A[j + (jrow << 2)].re = ctoc;
            A[j + (jrow << 2)].im = stemp_im;
          }

          ctoc = (V[(jrow - 1) << 2].re * s.re - V[(jrow - 1) << 2].im * s.im) +
            V[jrow << 2].re * cfromc;
          stemp_im = (V[(jrow - 1) << 2].im * s.re + V[(jrow - 1) << 2].re *
                      s.im) + V[jrow << 2].im * cfromc;
          cto1 = V[jrow << 2].re;
          V[(jrow - 1) << 2].re = V[(jrow - 1) << 2].re * cfromc - (V[jrow << 2]
            .re * s.re + V[jrow << 2].im * s.im);
          V[(jrow - 1) << 2].im = V[(jrow - 1) << 2].im * cfromc - (V[jrow << 2]
            .im * s.re - s.im * cto1);
          V[jrow << 2].re = ctoc;
          V[jrow << 2].im = stemp_im;
          ctoc = (V[((jrow - 1) << 2) + 1].re * s.re - V[((jrow - 1) << 2) + 1].
                  im * s.im) + V[(jrow << 2) + 1].re * cfromc;
          stemp_im = (V[((jrow - 1) << 2) + 1].im * s.re + V[((jrow - 1) << 2) +
                      1].re * s.im) + V[(jrow << 2) + 1].im * cfromc;
          cto1 = V[(jrow << 2) + 1].re;
          V[((jrow - 1) << 2) + 1].re = V[((jrow - 1) << 2) + 1].re * cfromc -
            (V[(jrow << 2) + 1].re * s.re + V[(jrow << 2) + 1].im * s.im);
          V[((jrow - 1) << 2) + 1].im = V[((jrow - 1) << 2) + 1].im * cfromc -
            (V[(jrow << 2) + 1].im * s.re - s.im * cto1);
          V[(jrow << 2) + 1].re = ctoc;
          V[(jrow << 2) + 1].im = stemp_im;
          ctoc = (V[((jrow - 1) << 2) + 2].re * s.re - V[((jrow - 1) << 2) + 2].
                  im * s.im) + V[(jrow << 2) + 2].re * cfromc;
          stemp_im = (V[((jrow - 1) << 2) + 2].im * s.re + V[((jrow - 1) << 2) +
                      2].re * s.im) + V[(jrow << 2) + 2].im * cfromc;
          cto1 = V[(jrow << 2) + 2].re;
          V[((jrow - 1) << 2) + 2].re = V[((jrow - 1) << 2) + 2].re * cfromc -
            (V[(jrow << 2) + 2].re * s.re + V[(jrow << 2) + 2].im * s.im);
          V[((jrow - 1) << 2) + 2].im = V[((jrow - 1) << 2) + 2].im * cfromc -
            (V[(jrow << 2) + 2].im * s.re - s.im * cto1);
          V[(jrow << 2) + 2].re = ctoc;
          V[(jrow << 2) + 2].im = stemp_im;
          ctoc = (V[((jrow - 1) << 2) + 3].re * s.re - V[((jrow - 1) << 2) + 3].
                  im * s.im) + V[(jrow << 2) + 3].re * cfromc;
          stemp_im = (V[((jrow - 1) << 2) + 3].im * s.re + V[((jrow - 1) << 2) +
                      3].re * s.im) + V[(jrow << 2) + 3].im * cfromc;
          cto1 = V[(jrow << 2) + 3].re;
          V[((jrow - 1) << 2) + 3].re = V[((jrow - 1) << 2) + 3].re * cfromc -
            (V[(jrow << 2) + 3].re * s.re + V[(jrow << 2) + 3].im * s.im);
          V[((jrow - 1) << 2) + 3].im = V[((jrow - 1) << 2) + 3].im * cfromc -
            (V[(jrow << 2) + 3].im * s.re - s.im * cto1);
          V[(jrow << 2) + 3].re = ctoc;
          V[(jrow << 2) + 3].im = stemp_im;
        }
      }
    }

    xzhgeqz_Po83NVpY(A, b_k, k, V, info, alpha1, beta1);
    if (*info == 0) {
      xztgevc_d7aNh17H(A, V);
      if (b_k > 1) {
        for (jrow = b_k - 2; jrow + 1 >= 1; jrow--) {
          b_k = rscale[jrow] - 1;
          if (jrow + 1 != rscale[jrow]) {
            ctoc = V[jrow].re;
            stemp_im = V[jrow].im;
            V[jrow] = V[b_k];
            V[b_k].re = ctoc;
            V[b_k].im = stemp_im;
            ctoc = V[jrow + 4].re;
            stemp_im = V[jrow + 4].im;
            V[jrow + 4] = V[b_k + 4];
            V[b_k + 4].re = ctoc;
            V[b_k + 4].im = stemp_im;
            ctoc = V[jrow + 8].re;
            stemp_im = V[jrow + 8].im;
            V[jrow + 8] = V[b_k + 8];
            V[b_k + 8].re = ctoc;
            V[b_k + 8].im = stemp_im;
            ctoc = V[jrow + 12].re;
            stemp_im = V[jrow + 12].im;
            V[jrow + 12] = V[b_k + 12];
            V[b_k + 12].re = ctoc;
            V[b_k + 12].im = stemp_im;
          }
        }
      }

      if (k < 4) {
        while (k + 1 < 5) {
          b_k = rscale[k] - 1;
          if (k + 1 != rscale[k]) {
            ctoc = V[k].re;
            stemp_im = V[k].im;
            V[k] = V[b_k];
            V[b_k].re = ctoc;
            V[b_k].im = stemp_im;
            ctoc = V[k + 4].re;
            stemp_im = V[k + 4].im;
            V[k + 4] = V[b_k + 4];
            V[b_k + 4].re = ctoc;
            V[b_k + 4].im = stemp_im;
            ctoc = V[k + 8].re;
            stemp_im = V[k + 8].im;
            V[k + 8] = V[b_k + 8];
            V[b_k + 8].re = ctoc;
            V[b_k + 8].im = stemp_im;
            ctoc = V[k + 12].re;
            stemp_im = V[k + 12].im;
            V[k + 12] = V[b_k + 12];
            V[b_k + 12].re = ctoc;
            V[b_k + 12].im = stemp_im;
          }

          k++;
        }
      }

      for (k = 0; k < 4; k++) {
        cfromc = muDoubleScalarAbs(V[k << 2].re) + muDoubleScalarAbs(V[k << 2].
          im);
        ctoc = muDoubleScalarAbs(V[(k << 2) + 1].re) + muDoubleScalarAbs(V[(k <<
          2) + 1].im);
        if (ctoc > cfromc) {
          cfromc = ctoc;
        }

        ctoc = muDoubleScalarAbs(V[(k << 2) + 2].re) + muDoubleScalarAbs(V[(k <<
          2) + 2].im);
        if (ctoc > cfromc) {
          cfromc = ctoc;
        }

        ctoc = muDoubleScalarAbs(V[(k << 2) + 3].re) + muDoubleScalarAbs(V[(k <<
          2) + 3].im);
        if (ctoc > cfromc) {
          cfromc = ctoc;
        }

        if (cfromc >= 6.7178761075670888E-139) {
          cfromc = 1.0 / cfromc;
          V[k << 2].re *= cfromc;
          V[k << 2].im *= cfromc;
          V[(k << 2) + 1].re *= cfromc;
          V[(k << 2) + 1].im *= cfromc;
          V[(k << 2) + 2].re *= cfromc;
          V[(k << 2) + 2].im *= cfromc;
          V[(k << 2) + 3].re *= cfromc;
          V[(k << 2) + 3].im *= cfromc;
        }
      }

      if (ilascl) {
        while (ilascl) {
          cfromc = absxk * 2.0041683600089728E-292;
          ctoc = anrm / 4.9896007738368E+291;
          if ((cfromc > anrm) && (anrm != 0.0)) {
            stemp_im = 2.0041683600089728E-292;
            absxk = cfromc;
          } else if (ctoc > absxk) {
            stemp_im = 4.9896007738368E+291;
            anrm = ctoc;
          } else {
            stemp_im = anrm / absxk;
            ilascl = false;
          }

          alpha1[0].re *= stemp_im;
          alpha1[0].im *= stemp_im;
          alpha1[1].re *= stemp_im;
          alpha1[1].im *= stemp_im;
          alpha1[2].re *= stemp_im;
          alpha1[2].im *= stemp_im;
          alpha1[3].re *= stemp_im;
          alpha1[3].im *= stemp_im;
        }
      }
    }
  }
}
