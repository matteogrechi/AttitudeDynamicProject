#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "xzhgeqz_UkHqOzbP.h"
#include "xzlartg_MsBSmBns.h"
#include "eigStandard_85PdNYLu.h"

void eigStandard_85PdNYLu(const real_T A[16], creal_T V[4])
{
  creal_T At[16];
  creal_T beta1[4];
  creal_T s;
  real_T absxk;
  real_T anrm;
  real_T atmp_im;
  real_T cfromc;
  real_T cto1;
  real_T ctoc;
  real_T mul;
  int32_T exitg2;
  int32_T exitg3;
  int32_T ihi;
  int32_T ii;
  int32_T jcol;
  int32_T jj;
  int32_T jrow;
  int32_T k;
  int32_T nzcount;
  boolean_T exitg1;
  boolean_T exitg4;
  boolean_T guard1 = false;
  boolean_T ilascl;
  boolean_T notdone;
  for (k = 0; k < 16; k++) {
    At[k].re = A[k];
    At[k].im = 0.0;
  }

  anrm = 0.0;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 16)) {
    absxk = muDoubleScalarHypot(At[k].re, At[k].im);
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
    V[0].re = (rtNaN);
    V[0].im = 0.0;
    beta1[0].re = (rtNaN);
    beta1[0].im = 0.0;
    V[1].re = (rtNaN);
    V[1].im = 0.0;
    beta1[1].re = (rtNaN);
    beta1[1].im = 0.0;
    V[2].re = (rtNaN);
    V[2].im = 0.0;
    beta1[2].re = (rtNaN);
    beta1[2].im = 0.0;
    V[3].re = (rtNaN);
    V[3].im = 0.0;
    beta1[3].re = (rtNaN);
    beta1[3].im = 0.0;
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
        atmp_im = cfromc * 2.0041683600089728E-292;
        cto1 = ctoc / 4.9896007738368E+291;
        if ((atmp_im > ctoc) && (ctoc != 0.0)) {
          mul = 2.0041683600089728E-292;
          cfromc = atmp_im;
        } else if (cto1 > cfromc) {
          mul = 4.9896007738368E+291;
          ctoc = cto1;
        } else {
          mul = ctoc / cfromc;
          notdone = false;
        }

        for (k = 0; k < 16; k++) {
          s = At[k];
          s.re *= mul;
          s.im *= mul;
          At[k] = s;
        }
      }
    }

    k = 0;
    ihi = 4;
    do {
      exitg3 = 0;
      jrow = 0;
      jcol = 0;
      notdone = false;
      ii = ihi;
      exitg1 = false;
      while ((!exitg1) && (ii > 0)) {
        nzcount = 0;
        jrow = ii;
        jcol = ihi;
        jj = 0;
        exitg4 = false;
        while ((!exitg4) && (jj <= ihi - 1)) {
          if ((At[((jj << 2) + ii) - 1].re != 0.0) || (At[((jj << 2) + ii) - 1].
               im != 0.0) || (jj + 1 == ii)) {
            if (nzcount == 0) {
              jcol = jj + 1;
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
          notdone = true;
          exitg1 = true;
        } else {
          ii--;
        }
      }

      if (!notdone) {
        exitg3 = 2;
      } else {
        if (jrow != ihi) {
          ctoc = At[jrow - 1].re;
          atmp_im = At[jrow - 1].im;
          At[jrow - 1] = At[ihi - 1];
          At[ihi - 1].re = ctoc;
          At[ihi - 1].im = atmp_im;
          ctoc = At[jrow + 3].re;
          atmp_im = At[jrow + 3].im;
          At[jrow + 3] = At[ihi + 3];
          At[ihi + 3].re = ctoc;
          At[ihi + 3].im = atmp_im;
          ctoc = At[jrow + 7].re;
          atmp_im = At[jrow + 7].im;
          At[jrow + 7] = At[ihi + 7];
          At[ihi + 7].re = ctoc;
          At[ihi + 7].im = atmp_im;
          ctoc = At[jrow + 11].re;
          atmp_im = At[jrow + 11].im;
          At[jrow + 11] = At[ihi + 11];
          At[ihi + 11].re = ctoc;
          At[ihi + 11].im = atmp_im;
        }

        if (jcol != ihi) {
          for (jrow = 0; jrow < ihi; jrow++) {
            ctoc = At[((jcol - 1) << 2) + jrow].re;
            atmp_im = At[((jcol - 1) << 2) + jrow].im;
            At[jrow + ((jcol - 1) << 2)] = At[((ihi - 1) << 2) + jrow];
            At[jrow + ((ihi - 1) << 2)].re = ctoc;
            At[jrow + ((ihi - 1) << 2)].im = atmp_im;
          }
        }

        ihi--;
        if (ihi == 1) {
          exitg3 = 1;
        }
      }
    } while (exitg3 == 0);

    if (exitg3 == 1) {
    } else {
      do {
        exitg2 = 0;
        jrow = 0;
        jcol = 0;
        notdone = false;
        ii = k + 1;
        exitg1 = false;
        while ((!exitg1) && (ii <= ihi)) {
          nzcount = 0;
          jrow = ihi;
          jcol = ii;
          jj = k + 1;
          exitg4 = false;
          while ((!exitg4) && (jj <= ihi)) {
            if ((At[(((ii - 1) << 2) + jj) - 1].re != 0.0) || (At[(((ii - 1) <<
                   2) + jj) - 1].im != 0.0) || (jj == ii)) {
              if (nzcount == 0) {
                jrow = jj;
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
            notdone = true;
            exitg1 = true;
          } else {
            ii++;
          }
        }

        if (!notdone) {
          exitg2 = 1;
        } else {
          if (k + 1 != jrow) {
            for (ii = k; ii + 1 < 5; ii++) {
              ctoc = At[((ii << 2) + jrow) - 1].re;
              atmp_im = At[((ii << 2) + jrow) - 1].im;
              At[(jrow + (ii << 2)) - 1] = At[(ii << 2) + k];
              At[k + (ii << 2)].re = ctoc;
              At[k + (ii << 2)].im = atmp_im;
            }
          }

          if (k + 1 != jcol) {
            for (jrow = 0; jrow < ihi; jrow++) {
              ctoc = At[((jcol - 1) << 2) + jrow].re;
              atmp_im = At[((jcol - 1) << 2) + jrow].im;
              At[jrow + ((jcol - 1) << 2)] = At[(k << 2) + jrow];
              At[jrow + (k << 2)].re = ctoc;
              At[jrow + (k << 2)].im = atmp_im;
            }
          }

          k++;
          if (k + 1 == ihi) {
            exitg2 = 1;
          }
        }
      } while (exitg2 == 0);
    }

    if (ihi >= k + 3) {
      for (jcol = k; jcol + 1 < ihi - 1; jcol++) {
        for (jrow = ihi - 1; jrow + 1 > jcol + 2; jrow--) {
          xzlartg_MsBSmBns(At[(jrow + (jcol << 2)) - 1], At[jrow + (jcol << 2)],
                           &cfromc, &s, &At[(jrow + (jcol << 2)) - 1]);
          At[jrow + (jcol << 2)].re = 0.0;
          At[jrow + (jcol << 2)].im = 0.0;
          for (ii = jcol + 1; ii < 4; ii++) {
            ctoc = At[((ii << 2) + jrow) - 1].re * cfromc + (At[(ii << 2) + jrow]
              .re * s.re - At[(ii << 2) + jrow].im * s.im);
            atmp_im = At[((ii << 2) + jrow) - 1].im * cfromc + (At[(ii << 2) +
              jrow].im * s.re + At[(ii << 2) + jrow].re * s.im);
            cto1 = At[((ii << 2) + jrow) - 1].re;
            At[jrow + (ii << 2)].re = At[(ii << 2) + jrow].re * cfromc - (At
              [((ii << 2) + jrow) - 1].re * s.re + At[((ii << 2) + jrow) - 1].im
              * s.im);
            At[jrow + (ii << 2)].im = At[(ii << 2) + jrow].im * cfromc - (At
              [((ii << 2) + jrow) - 1].im * s.re - s.im * cto1);
            At[(jrow + (ii << 2)) - 1].re = ctoc;
            At[(jrow + (ii << 2)) - 1].im = atmp_im;
          }

          s.re = -s.re;
          s.im = -s.im;
          for (ii = 0; ii < ihi; ii++) {
            ctoc = (At[((jrow - 1) << 2) + ii].re * s.re - At[((jrow - 1) << 2)
                    + ii].im * s.im) + At[(jrow << 2) + ii].re * cfromc;
            atmp_im = (At[((jrow - 1) << 2) + ii].im * s.re + At[((jrow - 1) <<
                        2) + ii].re * s.im) + At[(jrow << 2) + ii].im * cfromc;
            cto1 = At[(jrow << 2) + ii].re;
            At[ii + ((jrow - 1) << 2)].re = At[((jrow - 1) << 2) + ii].re *
              cfromc - (At[(jrow << 2) + ii].re * s.re + At[(jrow << 2) + ii].im
                        * s.im);
            At[ii + ((jrow - 1) << 2)].im = At[((jrow - 1) << 2) + ii].im *
              cfromc - (At[(jrow << 2) + ii].im * s.re - s.im * cto1);
            At[ii + (jrow << 2)].re = ctoc;
            At[ii + (jrow << 2)].im = atmp_im;
          }
        }
      }
    }

    xzhgeqz_UkHqOzbP(At, k + 1, ihi, &jcol, V, beta1);
    if ((jcol == 0) && ilascl) {
      while (ilascl) {
        cfromc = absxk * 2.0041683600089728E-292;
        ctoc = anrm / 4.9896007738368E+291;
        if ((cfromc > anrm) && (anrm != 0.0)) {
          atmp_im = 2.0041683600089728E-292;
          absxk = cfromc;
        } else if (ctoc > absxk) {
          atmp_im = 4.9896007738368E+291;
          anrm = ctoc;
        } else {
          atmp_im = anrm / absxk;
          ilascl = false;
        }

        V[0].re *= atmp_im;
        V[0].im *= atmp_im;
        V[1].re *= atmp_im;
        V[1].im *= atmp_im;
        V[2].re *= atmp_im;
        V[2].im *= atmp_im;
        V[3].re *= atmp_im;
        V[3].im *= atmp_im;
      }
    }
  }

  if (beta1[0].im == 0.0) {
    if (V[0].im == 0.0) {
      anrm = V[0].re / beta1[0].re;
      absxk = 0.0;
    } else if (V[0].re == 0.0) {
      anrm = 0.0;
      absxk = V[0].im / beta1[0].re;
    } else {
      anrm = V[0].re / beta1[0].re;
      absxk = V[0].im / beta1[0].re;
    }
  } else if (beta1[0].re == 0.0) {
    if (V[0].re == 0.0) {
      anrm = V[0].im / beta1[0].im;
      absxk = 0.0;
    } else if (V[0].im == 0.0) {
      anrm = 0.0;
      absxk = -(V[0].re / beta1[0].im);
    } else {
      anrm = V[0].im / beta1[0].im;
      absxk = -(V[0].re / beta1[0].im);
    }
  } else {
    absxk = muDoubleScalarAbs(beta1[0].re);
    anrm = muDoubleScalarAbs(beta1[0].im);
    if (absxk > anrm) {
      absxk = beta1[0].im / beta1[0].re;
      cfromc = absxk * beta1[0].im + beta1[0].re;
      anrm = (absxk * V[0].im + V[0].re) / cfromc;
      absxk = (V[0].im - absxk * V[0].re) / cfromc;
    } else if (anrm == absxk) {
      cfromc = beta1[0].re > 0.0 ? 0.5 : -0.5;
      ctoc = beta1[0].im > 0.0 ? 0.5 : -0.5;
      anrm = (V[0].re * cfromc + V[0].im * ctoc) / absxk;
      absxk = (V[0].im * cfromc - V[0].re * ctoc) / absxk;
    } else {
      absxk = beta1[0].re / beta1[0].im;
      cfromc = absxk * beta1[0].re + beta1[0].im;
      anrm = (absxk * V[0].re + V[0].im) / cfromc;
      absxk = (absxk * V[0].im - V[0].re) / cfromc;
    }
  }

  V[0].re = anrm;
  V[0].im = absxk;
  if (beta1[1].im == 0.0) {
    if (V[1].im == 0.0) {
      anrm = V[1].re / beta1[1].re;
      absxk = 0.0;
    } else if (V[1].re == 0.0) {
      anrm = 0.0;
      absxk = V[1].im / beta1[1].re;
    } else {
      anrm = V[1].re / beta1[1].re;
      absxk = V[1].im / beta1[1].re;
    }
  } else if (beta1[1].re == 0.0) {
    if (V[1].re == 0.0) {
      anrm = V[1].im / beta1[1].im;
      absxk = 0.0;
    } else if (V[1].im == 0.0) {
      anrm = 0.0;
      absxk = -(V[1].re / beta1[1].im);
    } else {
      anrm = V[1].im / beta1[1].im;
      absxk = -(V[1].re / beta1[1].im);
    }
  } else {
    absxk = muDoubleScalarAbs(beta1[1].re);
    anrm = muDoubleScalarAbs(beta1[1].im);
    if (absxk > anrm) {
      absxk = beta1[1].im / beta1[1].re;
      cfromc = absxk * beta1[1].im + beta1[1].re;
      anrm = (absxk * V[1].im + V[1].re) / cfromc;
      absxk = (V[1].im - absxk * V[1].re) / cfromc;
    } else if (anrm == absxk) {
      cfromc = beta1[1].re > 0.0 ? 0.5 : -0.5;
      ctoc = beta1[1].im > 0.0 ? 0.5 : -0.5;
      anrm = (V[1].re * cfromc + V[1].im * ctoc) / absxk;
      absxk = (V[1].im * cfromc - V[1].re * ctoc) / absxk;
    } else {
      absxk = beta1[1].re / beta1[1].im;
      cfromc = absxk * beta1[1].re + beta1[1].im;
      anrm = (absxk * V[1].re + V[1].im) / cfromc;
      absxk = (absxk * V[1].im - V[1].re) / cfromc;
    }
  }

  V[1].re = anrm;
  V[1].im = absxk;
  if (beta1[2].im == 0.0) {
    if (V[2].im == 0.0) {
      anrm = V[2].re / beta1[2].re;
      absxk = 0.0;
    } else if (V[2].re == 0.0) {
      anrm = 0.0;
      absxk = V[2].im / beta1[2].re;
    } else {
      anrm = V[2].re / beta1[2].re;
      absxk = V[2].im / beta1[2].re;
    }
  } else if (beta1[2].re == 0.0) {
    if (V[2].re == 0.0) {
      anrm = V[2].im / beta1[2].im;
      absxk = 0.0;
    } else if (V[2].im == 0.0) {
      anrm = 0.0;
      absxk = -(V[2].re / beta1[2].im);
    } else {
      anrm = V[2].im / beta1[2].im;
      absxk = -(V[2].re / beta1[2].im);
    }
  } else {
    absxk = muDoubleScalarAbs(beta1[2].re);
    anrm = muDoubleScalarAbs(beta1[2].im);
    if (absxk > anrm) {
      absxk = beta1[2].im / beta1[2].re;
      cfromc = absxk * beta1[2].im + beta1[2].re;
      anrm = (absxk * V[2].im + V[2].re) / cfromc;
      absxk = (V[2].im - absxk * V[2].re) / cfromc;
    } else if (anrm == absxk) {
      cfromc = beta1[2].re > 0.0 ? 0.5 : -0.5;
      ctoc = beta1[2].im > 0.0 ? 0.5 : -0.5;
      anrm = (V[2].re * cfromc + V[2].im * ctoc) / absxk;
      absxk = (V[2].im * cfromc - V[2].re * ctoc) / absxk;
    } else {
      absxk = beta1[2].re / beta1[2].im;
      cfromc = absxk * beta1[2].re + beta1[2].im;
      anrm = (absxk * V[2].re + V[2].im) / cfromc;
      absxk = (absxk * V[2].im - V[2].re) / cfromc;
    }
  }

  V[2].re = anrm;
  V[2].im = absxk;
  if (beta1[3].im == 0.0) {
    if (V[3].im == 0.0) {
      anrm = V[3].re / beta1[3].re;
      absxk = 0.0;
    } else if (V[3].re == 0.0) {
      anrm = 0.0;
      absxk = V[3].im / beta1[3].re;
    } else {
      anrm = V[3].re / beta1[3].re;
      absxk = V[3].im / beta1[3].re;
    }
  } else if (beta1[3].re == 0.0) {
    if (V[3].re == 0.0) {
      anrm = V[3].im / beta1[3].im;
      absxk = 0.0;
    } else if (V[3].im == 0.0) {
      anrm = 0.0;
      absxk = -(V[3].re / beta1[3].im);
    } else {
      anrm = V[3].im / beta1[3].im;
      absxk = -(V[3].re / beta1[3].im);
    }
  } else {
    absxk = muDoubleScalarAbs(beta1[3].re);
    anrm = muDoubleScalarAbs(beta1[3].im);
    if (absxk > anrm) {
      absxk = beta1[3].im / beta1[3].re;
      cfromc = absxk * beta1[3].im + beta1[3].re;
      anrm = (absxk * V[3].im + V[3].re) / cfromc;
      absxk = (V[3].im - absxk * V[3].re) / cfromc;
    } else if (anrm == absxk) {
      cfromc = beta1[3].re > 0.0 ? 0.5 : -0.5;
      ctoc = beta1[3].im > 0.0 ? 0.5 : -0.5;
      anrm = (V[3].re * cfromc + V[3].im * ctoc) / absxk;
      absxk = (V[3].im * cfromc - V[3].re * ctoc) / absxk;
    } else {
      absxk = beta1[3].re / beta1[3].im;
      cfromc = absxk * beta1[3].re + beta1[3].im;
      anrm = (absxk * V[3].re + V[3].im) / cfromc;
      absxk = (absxk * V[3].im - V[3].re) / cfromc;
    }
  }

  V[3].re = anrm;
  V[3].im = absxk;
}
