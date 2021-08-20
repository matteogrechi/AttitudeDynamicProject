#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "sqrt_tEibmDbk.h"
#include "xaxpy_5xjSv73M.h"
#include "xaxpy_K6A36889.h"
#include "xaxpy_gHx3z9RB.h"
#include "xdotc_JVBZOAjB.h"
#include "xnrm2_ClLpIAYl.h"
#include "xnrm2_pryLAncS.h"
#include "xrot_ocrkCAvv.h"
#include "xrotg_Aek4oMo2.h"
#include "xscal_2aH08qOV.h"
#include "xscal_THjfQJEY.h"
#include "xscal_qzs1BQsZ.h"
#include "xswap_mVzEYQrA.h"
#include "svd_BOZ2mqgd.h"

void svd_BOZ2mqgd(const real_T A[49], real_T U[49], real_T s[7], real_T V[49])
{
  real_T b_A[49];
  real_T b_s[7];
  real_T e[7];
  real_T work[7];
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
  memcpy(&b_A[0], &A[0], 49U * sizeof(real_T));
  for (i = 0; i < 7; i++) {
    b_s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  memset(&U[0], 0, 49U * sizeof(real_T));
  memset(&V[0], 0, 49U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    qq = 7 * i + i;
    apply_transform = false;
    nrm = xnrm2_ClLpIAYl(7 - i, b_A, qq + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qq] < 0.0) {
        b_s[i] = -nrm;
      } else {
        b_s[i] = nrm;
      }

      if (muDoubleScalarAbs(b_s[i]) >= 1.0020841800044864E-292) {
        xscal_2aH08qOV(7 - i, 1.0 / b_s[i], b_A, qq + 1);
      } else {
        qp1q = (qq - i) + 7;
        for (qjj = qq; qjj < qp1q; qjj++) {
          b_A[qjj] /= b_s[i];
        }
      }

      b_A[qq]++;
      b_s[i] = -b_s[i];
    } else {
      b_s[i] = 0.0;
    }

    for (qp1q = i + 1; qp1q + 1 < 8; qp1q++) {
      qjj = 7 * qp1q + i;
      if (apply_transform) {
        xaxpy_gHx3z9RB(7 - i, -(xdotc_JVBZOAjB(7 - i, b_A, qq + 1, b_A, qjj + 1)
          / b_A[i + 7 * i]), qq + 1, b_A, qjj + 1);
      }

      e[qp1q] = b_A[qjj];
    }

    for (qq = i; qq + 1 < 8; qq++) {
      U[qq + 7 * i] = b_A[7 * i + qq];
    }

    if (i + 1 <= 5) {
      nrm = xnrm2_pryLAncS(6 - i, e, i + 2);
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
          xscal_qzs1BQsZ(6 - i, 1.0 / e[i], e, i + 2);
        } else {
          for (qq = i + 1; qq < 7; qq++) {
            e[qq] /= nrm;
          }
        }

        e[i + 1]++;
        e[i] = -e[i];
        for (qq = i + 1; qq + 1 < 8; qq++) {
          work[qq] = 0.0;
        }

        for (qq = i + 1; qq + 1 < 8; qq++) {
          xaxpy_5xjSv73M(6 - i, e[qq], b_A, (i + 7 * qq) + 2, work, i + 2);
        }

        for (qq = i + 1; qq + 1 < 8; qq++) {
          xaxpy_K6A36889(6 - i, -e[qq] / e[i + 1], work, i + 2, b_A, (i + 7 * qq)
                         + 2);
        }
      }

      for (qq = i + 1; qq + 1 < 8; qq++) {
        V[qq + 7 * i] = e[qq];
      }
    }
  }

  i = 5;
  b_s[6] = b_A[48];
  e[5] = b_A[47];
  e[6] = 0.0;
  for (qq = 0; qq < 7; qq++) {
    U[qq + 42] = 0.0;
  }

  U[48] = 1.0;
  for (qp1q = 5; qp1q >= 0; qp1q--) {
    qq = 7 * qp1q + qp1q;
    if (b_s[qp1q] != 0.0) {
      for (qp1jj = qp1q + 1; qp1jj + 1 < 8; qp1jj++) {
        qjj = (7 * qp1jj + qp1q) + 1;
        xaxpy_gHx3z9RB(7 - qp1q, -(xdotc_JVBZOAjB(7 - qp1q, U, qq + 1, U, qjj) /
          U[qq]), qq + 1, U, qjj);
      }

      for (qjj = qp1q; qjj + 1 < 8; qjj++) {
        U[qjj + 7 * qp1q] = -U[7 * qp1q + qjj];
      }

      U[qq]++;
      for (qq = 0; qq < qp1q; qq++) {
        U[qq + 7 * qp1q] = 0.0;
      }
    } else {
      for (qjj = 0; qjj < 7; qjj++) {
        U[qjj + 7 * qp1q] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (qq = 6; qq >= 0; qq--) {
    if ((qq + 1 <= 5) && (e[qq] != 0.0)) {
      qp1q = (7 * qq + qq) + 2;
      for (qjj = qq + 1; qjj + 1 < 8; qjj++) {
        qp1jj = (7 * qjj + qq) + 2;
        xaxpy_gHx3z9RB(6 - qq, -(xdotc_JVBZOAjB(6 - qq, V, qp1q, V, qp1jj) /
          V[qp1q - 1]), qp1q, V, qp1jj);
      }
    }

    for (qp1q = 0; qp1q < 7; qp1q++) {
      V[qp1q + 7 * qq] = 0.0;
    }

    V[qq + 7 * qq] = 1.0;
  }

  for (qq = 0; qq < 7; qq++) {
    ztest = e[qq];
    if (b_s[qq] != 0.0) {
      rt = muDoubleScalarAbs(b_s[qq]);
      nrm = b_s[qq] / rt;
      b_s[qq] = rt;
      if (qq + 1 < 7) {
        ztest /= nrm;
      }

      xscal_THjfQJEY(nrm, U, 7 * qq + 1);
    }

    if ((qq + 1 < 7) && (ztest != 0.0)) {
      rt = muDoubleScalarAbs(ztest);
      nrm = rt / ztest;
      ztest = rt;
      b_s[qq + 1] *= nrm;
      xscal_THjfQJEY(nrm, V, 7 * (qq + 1) + 1);
    }

    e[qq] = ztest;
  }

  qq = 0;
  nrm = 0.0;
  for (qp1q = 0; qp1q < 7; qp1q++) {
    nrm = muDoubleScalarMax(nrm, muDoubleScalarMax(muDoubleScalarAbs(b_s[qp1q]),
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
        if ((rt <= (muDoubleScalarAbs(b_s[qp1jj - 1]) + muDoubleScalarAbs
                    (b_s[qp1jj])) * 2.2204460492503131E-16) || ((rt <=
              1.0020841800044864E-292) || ((qq > 20) && (rt <=
               2.2204460492503131E-16 * nrm)))) {
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

          ztest = muDoubleScalarAbs(b_s[k_ii - 1]);
          if ((ztest <= 2.2204460492503131E-16 * rt) || (ztest <=
               1.0020841800044864E-292)) {
            b_s[k_ii - 1] = 0.0;
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
        xrotg_Aek4oMo2(&b_s[qjj], &rt, &ztest, &sqds);
        if (qjj + 1 > qp1q + 1) {
          rt = e[qjj - 1] * -sqds;
          e[qjj - 1] *= ztest;
        }

        xrot_ocrkCAvv(V, 7 * qjj + 1, 7 * (i + 1) + 1, ztest, sqds);
      }
      break;

     case 2:
      rt = e[qp1q - 1];
      e[qp1q - 1] = 0.0;
      for (qjj = qp1q; qjj < i + 2; qjj++) {
        xrotg_Aek4oMo2(&b_s[qjj], &rt, &ztest, &sqds);
        rt = -sqds * e[qjj];
        e[qjj] *= ztest;
        xrot_ocrkCAvv(U, 7 * qjj + 1, 7 * (qp1q - 1) + 1, ztest, sqds);
      }
      break;

     case 3:
      ztest = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
        (muDoubleScalarMax(muDoubleScalarAbs(b_s[i + 1]), muDoubleScalarAbs
                           (b_s[i])), muDoubleScalarAbs(e[i])),
        muDoubleScalarAbs(b_s[qp1q])), muDoubleScalarAbs(e[qp1q]));
      rt = b_s[i + 1] / ztest;
      smm1 = b_s[i] / ztest;
      emm1 = e[i] / ztest;
      sqds = b_s[qp1q] / ztest;
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

        rt = b_s[qjj - 1] * sqds + e[qjj - 1] * smm1;
        e[qjj - 1] = e[qjj - 1] * sqds - b_s[qjj - 1] * smm1;
        ztest = smm1 * b_s[qjj];
        b_s[qjj] *= sqds;
        xrot_ocrkCAvv(V, 7 * (qjj - 1) + 1, 7 * qjj + 1, sqds, smm1);
        xrotg_Aek4oMo2(&rt, &ztest, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        rt = e[qjj - 1] * sqds + smm1 * b_s[qjj];
        b_s[qjj] = e[qjj - 1] * -smm1 + sqds * b_s[qjj];
        ztest = smm1 * e[qjj];
        e[qjj] *= sqds;
        xrot_ocrkCAvv(U, 7 * (qjj - 1) + 1, 7 * qjj + 1, sqds, smm1);
      }

      e[i] = rt;
      qq++;
      break;

     default:
      if (b_s[qp1q] < 0.0) {
        b_s[qp1q] = -b_s[qp1q];
        xscal_THjfQJEY(-1.0, V, 7 * qp1q + 1);
      }

      qq = qp1q + 1;
      while ((qp1q + 1 < 7) && (b_s[qp1q] < b_s[qq])) {
        rt = b_s[qp1q];
        b_s[qp1q] = b_s[qq];
        b_s[qq] = rt;
        xswap_mVzEYQrA(V, 7 * qp1q + 1, 7 * (qp1q + 1) + 1);
        xswap_mVzEYQrA(U, 7 * qp1q + 1, 7 * (qp1q + 1) + 1);
        qp1q = qq;
        qq++;
      }

      qq = 0;
      i--;
      break;
    }
  }

  for (i = 0; i < 7; i++) {
    s[i] = b_s[i];
  }
}
