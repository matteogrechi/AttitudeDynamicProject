#include "rtwtypes.h"
#include "multiword_types.h"
#include <string.h>
#include "mwmathutil.h"
#include "sqrt_tEibmDbk.h"
#include "xaxpy_41nfyyWR.h"
#include "xaxpy_Euacncxf.h"
#include "xaxpy_a9e1rNGm.h"
#include "xdotc_99oaWeBI.h"
#include "xnrm2_2fOF3Fzq.h"
#include "xnrm2_k92il48D.h"
#include "xrot_J1wGPM2R.h"
#include "xrotg_Aek4oMo2.h"
#include "xscal_1Nd33BT3.h"
#include "xscal_LVhtT5RG.h"
#include "xscal_lrNtrI15.h"
#include "xswap_emCUJock.h"
#include "svd_tCwBSRoq.h"

void svd_tCwBSRoq(const real_T A[36], real_T U[36], real_T s[6], real_T V[36])
{
  real_T b_A[36];
  real_T b_s[6];
  real_T e[6];
  real_T work[6];
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
  memcpy(&b_A[0], &A[0], 36U * sizeof(real_T));
  for (i = 0; i < 6; i++) {
    b_s[i] = 0.0;
    e[i] = 0.0;
    work[i] = 0.0;
  }

  memset(&U[0], 0, 36U * sizeof(real_T));
  memset(&V[0], 0, 36U * sizeof(real_T));
  for (i = 0; i < 5; i++) {
    qq = 6 * i + i;
    apply_transform = false;
    nrm = xnrm2_2fOF3Fzq(6 - i, b_A, qq + 1);
    if (nrm > 0.0) {
      apply_transform = true;
      if (b_A[qq] < 0.0) {
        b_s[i] = -nrm;
      } else {
        b_s[i] = nrm;
      }

      if (muDoubleScalarAbs(b_s[i]) >= 1.0020841800044864E-292) {
        xscal_lrNtrI15(6 - i, 1.0 / b_s[i], b_A, qq + 1);
      } else {
        qp1q = (qq - i) + 6;
        for (qjj = qq; qjj < qp1q; qjj++) {
          b_A[qjj] /= b_s[i];
        }
      }

      b_A[qq]++;
      b_s[i] = -b_s[i];
    } else {
      b_s[i] = 0.0;
    }

    for (qp1q = i + 1; qp1q + 1 < 7; qp1q++) {
      qjj = 6 * qp1q + i;
      if (apply_transform) {
        xaxpy_a9e1rNGm(6 - i, -(xdotc_99oaWeBI(6 - i, b_A, qq + 1, b_A, qjj + 1)
          / b_A[i + 6 * i]), qq + 1, b_A, qjj + 1);
      }

      e[qp1q] = b_A[qjj];
    }

    for (qq = i; qq + 1 < 7; qq++) {
      U[qq + 6 * i] = b_A[6 * i + qq];
    }

    if (i + 1 <= 4) {
      nrm = xnrm2_k92il48D(5 - i, e, i + 2);
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
          xscal_LVhtT5RG(5 - i, 1.0 / e[i], e, i + 2);
        } else {
          for (qq = i + 1; qq < 6; qq++) {
            e[qq] /= nrm;
          }
        }

        e[i + 1]++;
        e[i] = -e[i];
        for (qq = i + 1; qq + 1 < 7; qq++) {
          work[qq] = 0.0;
        }

        for (qq = i + 1; qq + 1 < 7; qq++) {
          xaxpy_Euacncxf(5 - i, e[qq], b_A, (i + 6 * qq) + 2, work, i + 2);
        }

        for (qq = i + 1; qq + 1 < 7; qq++) {
          xaxpy_41nfyyWR(5 - i, -e[qq] / e[i + 1], work, i + 2, b_A, (i + 6 * qq)
                         + 2);
        }
      }

      for (qq = i + 1; qq + 1 < 7; qq++) {
        V[qq + 6 * i] = e[qq];
      }
    }
  }

  i = 4;
  b_s[5] = b_A[35];
  e[4] = b_A[34];
  e[5] = 0.0;
  for (qq = 0; qq < 6; qq++) {
    U[qq + 30] = 0.0;
  }

  U[35] = 1.0;
  for (qp1q = 4; qp1q >= 0; qp1q--) {
    qq = 6 * qp1q + qp1q;
    if (b_s[qp1q] != 0.0) {
      for (qp1jj = qp1q + 1; qp1jj + 1 < 7; qp1jj++) {
        qjj = (6 * qp1jj + qp1q) + 1;
        xaxpy_a9e1rNGm(6 - qp1q, -(xdotc_99oaWeBI(6 - qp1q, U, qq + 1, U, qjj) /
          U[qq]), qq + 1, U, qjj);
      }

      for (qjj = qp1q; qjj + 1 < 7; qjj++) {
        U[qjj + 6 * qp1q] = -U[6 * qp1q + qjj];
      }

      U[qq]++;
      for (qq = 0; qq < qp1q; qq++) {
        U[qq + 6 * qp1q] = 0.0;
      }
    } else {
      for (qjj = 0; qjj < 6; qjj++) {
        U[qjj + 6 * qp1q] = 0.0;
      }

      U[qq] = 1.0;
    }
  }

  for (qq = 5; qq >= 0; qq--) {
    if ((qq + 1 <= 4) && (e[qq] != 0.0)) {
      qp1q = (6 * qq + qq) + 2;
      for (qjj = qq + 1; qjj + 1 < 7; qjj++) {
        qp1jj = (6 * qjj + qq) + 2;
        xaxpy_a9e1rNGm(5 - qq, -(xdotc_99oaWeBI(5 - qq, V, qp1q, V, qp1jj) /
          V[qp1q - 1]), qp1q, V, qp1jj);
      }
    }

    for (qp1q = 0; qp1q < 6; qp1q++) {
      V[qp1q + 6 * qq] = 0.0;
    }

    V[qq + 6 * qq] = 1.0;
  }

  for (qq = 0; qq < 6; qq++) {
    ztest = e[qq];
    if (b_s[qq] != 0.0) {
      rt = muDoubleScalarAbs(b_s[qq]);
      nrm = b_s[qq] / rt;
      b_s[qq] = rt;
      if (qq + 1 < 6) {
        ztest /= nrm;
      }

      xscal_1Nd33BT3(nrm, U, 6 * qq + 1);
    }

    if ((qq + 1 < 6) && (ztest != 0.0)) {
      rt = muDoubleScalarAbs(ztest);
      nrm = rt / ztest;
      ztest = rt;
      b_s[qq + 1] *= nrm;
      xscal_1Nd33BT3(nrm, V, 6 * (qq + 1) + 1);
    }

    e[qq] = ztest;
  }

  qq = 0;
  nrm = 0.0;
  for (qp1q = 0; qp1q < 6; qp1q++) {
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

        xrot_J1wGPM2R(V, 6 * qjj + 1, 6 * (i + 1) + 1, ztest, sqds);
      }
      break;

     case 2:
      rt = e[qp1q - 1];
      e[qp1q - 1] = 0.0;
      for (qjj = qp1q; qjj < i + 2; qjj++) {
        xrotg_Aek4oMo2(&b_s[qjj], &rt, &ztest, &sqds);
        rt = -sqds * e[qjj];
        e[qjj] *= ztest;
        xrot_J1wGPM2R(U, 6 * qjj + 1, 6 * (qp1q - 1) + 1, ztest, sqds);
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
        xrot_J1wGPM2R(V, 6 * (qjj - 1) + 1, 6 * qjj + 1, sqds, smm1);
        xrotg_Aek4oMo2(&rt, &ztest, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        rt = e[qjj - 1] * sqds + smm1 * b_s[qjj];
        b_s[qjj] = e[qjj - 1] * -smm1 + sqds * b_s[qjj];
        ztest = smm1 * e[qjj];
        e[qjj] *= sqds;
        xrot_J1wGPM2R(U, 6 * (qjj - 1) + 1, 6 * qjj + 1, sqds, smm1);
      }

      e[i] = rt;
      qq++;
      break;

     default:
      if (b_s[qp1q] < 0.0) {
        b_s[qp1q] = -b_s[qp1q];
        xscal_1Nd33BT3(-1.0, V, 6 * qp1q + 1);
      }

      qq = qp1q + 1;
      while ((qp1q + 1 < 6) && (b_s[qp1q] < b_s[qq])) {
        rt = b_s[qp1q];
        b_s[qp1q] = b_s[qq];
        b_s[qq] = rt;
        xswap_emCUJock(V, 6 * qp1q + 1, 6 * (qp1q + 1) + 1);
        xswap_emCUJock(U, 6 * qp1q + 1, 6 * (qp1q + 1) + 1);
        qp1q = qq;
        qq++;
      }

      qq = 0;
      i--;
      break;
    }
  }

  for (i = 0; i < 6; i++) {
    s[i] = b_s[i];
  }
}
