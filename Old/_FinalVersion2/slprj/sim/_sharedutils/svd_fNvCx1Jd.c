#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "sqrt_tEibmDbk.h"
#include "xaxpy_9EzhgoH7.h"
#include "xaxpy_bCOaQaLf.h"
#include "xaxpy_bw213l4S.h"
#include "xdotc_Zl49EgAo.h"
#include "xnrm2_MO5ISR1D.h"
#include "xnrm2_erKa1JZf.h"
#include "xrot_c5rVDygR.h"
#include "xrotg_Aek4oMo2.h"
#include "xscal_auz24NOt.h"
#include "xscal_lQkFRvYn.h"
#include "xscal_vSDFHhpO.h"
#include "xswap_z69e0nz8.h"
#include "svd_fNvCx1Jd.h"

void svd_fNvCx1Jd(const real_T A[100], real_T U[100], real_T s[10], real_T V[100])
{
  real_T b_A[100];
  real_T e[10];
  real_T work[10];
  real_T emm1;
  real_T nrm;
  real_T rt;
  real_T shift;
  real_T smm1;
  real_T sqds;
  real_T ztest;
  int32_T exitg1;
  int32_T i;
  int32_T k_ii;
  int32_T qjj;
  int32_T qp1jj;
  int32_T qp1q;
  int32_T qq;
  boolean_T apply_transform;
  boolean_T exitg2;
  memcpy(&b_A[0], &A[0], 100U * sizeof(real_T));
  memset(&s[0], 0, 10U * sizeof(real_T));
  memset(&e[0], 0, 10U * sizeof(real_T));
  memset(&work[0], 0, 10U * sizeof(real_T));
  memset(&U[0], 0, 100U * sizeof(real_T));
  memset(&V[0], 0, 100U * sizeof(real_T));
  for (i = 0; i < 9; i++) {
    qq = 10 * i + i;
    apply_transform = false;
    nrm = xnrm2_erKa1JZf(10 - i, b_A, qq + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qq] < 0.0) {
        s[i] = -nrm;
      } else {
        s[i] = nrm;
      }

      if (muDoubleScalarAbs(s[i]) >= 1.0020841800044864E-292) {
        xscal_lQkFRvYn(10 - i, 1.0 / s[i], b_A, qq + 1);
      } else {
        qp1q = (qq - i) + 10;
        for (qjj = qq; qjj < qp1q; qjj++) {
          b_A[qjj] /= s[i];
        }
      }

      b_A[qq]++;
      s[i] = -s[i];
    } else {
      s[i] = 0.0;
    }

    for (qp1q = i + 1; qp1q + 1 < 11; qp1q++) {
      qjj = 10 * qp1q + i;
      if (apply_transform) {
        xaxpy_bCOaQaLf(10 - i, -(xdotc_Zl49EgAo(10 - i, b_A, qq + 1, b_A, qjj +
          1) / b_A[i + 10 * i]), qq + 1, b_A, qjj + 1);
      }

      e[qp1q] = b_A[qjj];
    }

    for (qq = i; qq + 1 < 11; qq++) {
      U[qq + 10 * i] = b_A[10 * i + qq];
    }

    if (i + 1 <= 8) {
      nrm = xnrm2_MO5ISR1D(9 - i, e, i + 2);
      if (nrm == 0.0) {
        e[i] = 0.0;
      } else {
        if (e[i + 1] < 0.0) {
          e[i] = -nrm;
        } else {
          e[i] = nrm;
        }

        nrm = e[i];
        if (muDoubleScalarAbs(e[i]) >= 1.0020841800044864E-292) {
          xscal_auz24NOt(9 - i, 1.0 / e[i], e, i + 2);
        } else {
          for (qq = i + 1; qq < 10; qq++) {
            e[qq] /= nrm;
          }
        }

        e[i + 1]++;
        e[i] = -e[i];
        for (qq = i + 1; qq + 1 < 11; qq++) {
          work[qq] = 0.0;
        }

        for (qq = i + 1; qq + 1 < 11; qq++) {
          xaxpy_9EzhgoH7(9 - i, e[qq], b_A, (i + 10 * qq) + 2, work, i + 2);
        }

        for (qq = i + 1; qq + 1 < 11; qq++) {
          xaxpy_bw213l4S(9 - i, -e[qq] / e[i + 1], work, i + 2, b_A, (i + 10 *
            qq) + 2);
        }
      }

      for (qq = i + 1; qq + 1 < 11; qq++) {
        V[qq + 10 * i] = e[qq];
      }
    }
  }

  i = 8;
  s[9] = b_A[99];
  e[8] = b_A[98];
  e[9] = 0.0;
  memset(&U[90], 0, 10U * sizeof(real_T));
  U[99] = 1.0;
  for (qp1q = 8; qp1q >= 0; qp1q--) {
    qq = 10 * qp1q + qp1q;
    if (s[qp1q] != 0.0) {
      for (qp1jj = qp1q + 1; qp1jj + 1 < 11; qp1jj++) {
        qjj = (10 * qp1jj + qp1q) + 1;
        xaxpy_bCOaQaLf(10 - qp1q, -(xdotc_Zl49EgAo(10 - qp1q, U, qq + 1, U, qjj)
          / U[qq]), qq + 1, U, qjj);
      }

      for (qjj = qp1q; qjj + 1 < 11; qjj++) {
        U[qjj + 10 * qp1q] = -U[10 * qp1q + qjj];
      }

      U[qq]++;
      for (qq = 0; qq < qp1q; qq++) {
        U[qq + 10 * qp1q] = 0.0;
      }
    } else {
      memset(&U[qp1q * 10], 0, 10U * sizeof(real_T));
      U[qq] = 1.0;
    }
  }

  for (qq = 9; qq >= 0; qq--) {
    if ((qq + 1 <= 8) && (e[qq] != 0.0)) {
      qp1q = (10 * qq + qq) + 2;
      for (qjj = qq + 1; qjj + 1 < 11; qjj++) {
        qp1jj = (10 * qjj + qq) + 2;
        xaxpy_bCOaQaLf(9 - qq, -(xdotc_Zl49EgAo(9 - qq, V, qp1q, V, qp1jj) /
          V[qp1q - 1]), qp1q, V, qp1jj);
      }
    }

    memset(&V[qq * 10], 0, 10U * sizeof(real_T));
    V[qq + 10 * qq] = 1.0;
  }

  for (qq = 0; qq < 10; qq++) {
    ztest = e[qq];
    if (s[qq] != 0.0) {
      rt = muDoubleScalarAbs(s[qq]);
      nrm = s[qq] / rt;
      s[qq] = rt;
      if (qq + 1 < 10) {
        ztest /= nrm;
      }

      xscal_vSDFHhpO(nrm, U, 10 * qq + 1);
    }

    if ((qq + 1 < 10) && (ztest != 0.0)) {
      rt = muDoubleScalarAbs(ztest);
      nrm = rt / ztest;
      ztest = rt;
      s[qq + 1] *= nrm;
      xscal_vSDFHhpO(nrm, V, 10 * (qq + 1) + 1);
    }

    e[qq] = ztest;
  }

  qq = 0;
  nrm = 0.0;
  for (qp1q = 0; qp1q < 10; qp1q++) {
    nrm = muDoubleScalarMax(nrm, muDoubleScalarMax(muDoubleScalarAbs(s[qp1q]),
      muDoubleScalarAbs(e[qp1q])));
  }

  while ((i + 2 > 0) && (qq < 75)) {
    qp1jj = i + 1;
    do {
      exitg1 = 0;
      qp1q = qp1jj;
      if (qp1jj == 0) {
        exitg1 = 1;
      } else {
        rt = muDoubleScalarAbs(e[qp1jj - 1]);
        if ((rt <= (muDoubleScalarAbs(s[qp1jj - 1]) + muDoubleScalarAbs(s[qp1jj]))
             * 2.2204460492503131E-16) || ((rt <= 1.0020841800044864E-292) ||
             ((qq > 20) && (rt <= 2.2204460492503131E-16 * nrm)))) {
          e[qp1jj - 1] = 0.0;
          exitg1 = 1;
        } else {
          qp1jj--;
        }
      }
    } while (exitg1 == 0);

    if (i + 1 == qp1jj) {
      qp1jj = 4;
    } else {
      qjj = i + 2;
      k_ii = i + 2;
      exitg2 = false;
      while ((!exitg2) && (k_ii >= qp1jj)) {
        qjj = k_ii;
        if (k_ii == qp1jj) {
          exitg2 = true;
        } else {
          rt = 0.0;
          if (k_ii < i + 2) {
            rt = muDoubleScalarAbs(e[k_ii - 1]);
          }

          if (k_ii > qp1jj + 1) {
            rt += muDoubleScalarAbs(e[k_ii - 2]);
          }

          ztest = muDoubleScalarAbs(s[k_ii - 1]);
          if ((ztest <= 2.2204460492503131E-16 * rt) || (ztest <=
               1.0020841800044864E-292)) {
            s[k_ii - 1] = 0.0;
            exitg2 = true;
          } else {
            k_ii--;
          }
        }
      }

      if (qjj == qp1jj) {
        qp1jj = 3;
      } else if (i + 2 == qjj) {
        qp1jj = 1;
      } else {
        qp1jj = 2;
        qp1q = qjj;
      }
    }

    switch (qp1jj) {
     case 1:
      rt = e[i];
      e[i] = 0.0;
      for (qjj = i; qjj + 1 >= qp1q + 1; qjj--) {
        xrotg_Aek4oMo2(&s[qjj], &rt, &ztest, &sqds);
        if (qjj + 1 > qp1q + 1) {
          rt = e[qjj - 1] * -sqds;
          e[qjj - 1] *= ztest;
        }

        xrot_c5rVDygR(V, 10 * qjj + 1, 10 * (i + 1) + 1, ztest, sqds);
      }
      break;

     case 2:
      rt = e[qp1q - 1];
      e[qp1q - 1] = 0.0;
      for (qjj = qp1q; qjj < i + 2; qjj++) {
        xrotg_Aek4oMo2(&s[qjj], &rt, &ztest, &sqds);
        rt = -sqds * e[qjj];
        e[qjj] *= ztest;
        xrot_c5rVDygR(U, 10 * qjj + 1, 10 * (qp1q - 1) + 1, ztest, sqds);
      }
      break;

     case 3:
      ztest = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
        (muDoubleScalarMax(muDoubleScalarAbs(s[i + 1]), muDoubleScalarAbs(s[i])),
         muDoubleScalarAbs(e[i])), muDoubleScalarAbs(s[qp1q])),
        muDoubleScalarAbs(e[qp1q]));
      rt = s[i + 1] / ztest;
      smm1 = s[i] / ztest;
      emm1 = e[i] / ztest;
      sqds = s[qp1q] / ztest;
      smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
      emm1 *= rt;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = smm1 * smm1 + emm1;
        sqrt_tEibmDbk(&shift);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      rt = (sqds + rt) * (sqds - rt) + shift;
      ztest = e[qp1q] / ztest * sqds;
      for (qjj = qp1q + 1; qjj <= i + 1; qjj++) {
        xrotg_Aek4oMo2(&rt, &ztest, &sqds, &smm1);
        if (qjj > qp1q + 1) {
          e[qjj - 2] = rt;
        }

        rt = s[qjj - 1] * sqds + e[qjj - 1] * smm1;
        e[qjj - 1] = e[qjj - 1] * sqds - s[qjj - 1] * smm1;
        ztest = smm1 * s[qjj];
        s[qjj] *= sqds;
        xrot_c5rVDygR(V, 10 * (qjj - 1) + 1, 10 * qjj + 1, sqds, smm1);
        xrotg_Aek4oMo2(&rt, &ztest, &sqds, &smm1);
        s[qjj - 1] = rt;
        rt = e[qjj - 1] * sqds + smm1 * s[qjj];
        s[qjj] = e[qjj - 1] * -smm1 + sqds * s[qjj];
        ztest = smm1 * e[qjj];
        e[qjj] *= sqds;
        xrot_c5rVDygR(U, 10 * (qjj - 1) + 1, 10 * qjj + 1, sqds, smm1);
      }

      e[i] = rt;
      qq++;
      break;

     default:
      if (s[qp1q] < 0.0) {
        s[qp1q] = -s[qp1q];
        xscal_vSDFHhpO(-1.0, V, 10 * qp1q + 1);
      }

      qq = qp1q + 1;
      while ((qp1q + 1 < 10) && (s[qp1q] < s[qq])) {
        rt = s[qp1q];
        s[qp1q] = s[qq];
        s[qq] = rt;
        xswap_z69e0nz8(V, 10 * qp1q + 1, 10 * (qp1q + 1) + 1);
        xswap_z69e0nz8(U, 10 * qp1q + 1, 10 * (qp1q + 1) + 1);
        qp1q = qq;
        qq++;
      }

      qq = 0;
      i--;
      break;
    }
  }
}
