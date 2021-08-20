#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xaxpy_RWMAWdeC.h"
#include "xaxpy_TYt1kVwo.h"
#include "xaxpy_WIQCbnDm.h"
#include "xdotc_FrP4nI9m.h"
#include "xnrm2_8vcxASE9.h"
#include "xnrm2_JbUzU9Yr.h"
#include "xrot_RTqBGDh9.h"
#include "xrotg_Aek4oMo2.h"
#include "xscal_Dm1iYyRT.h"
#include "xscal_YPHoZNU9.h"
#include "xscal_ogORrH03.h"
#include "xswap_65EdV8gu.h"
#include "svd_aYJ4ZO8G.h"

void svd_aYJ4ZO8G(const real_T A[9], real_T U[9], real_T s[3], real_T V[9])
{
  real_T b_A[9];
  real_T b_s[3];
  real_T e[3];
  real_T work[3];
  real_T emm1;
  real_T nrm;
  real_T rt;
  real_T shift;
  real_T smm1;
  real_T sqds;
  real_T ztest;
  int32_T b_b;
  int32_T exitg1;
  int32_T k_ii;
  int32_T kase;
  int32_T m;
  int32_T qjj;
  int32_T qq;
  boolean_T apply_transform;
  boolean_T exitg2;
  e[0] = 0.0;
  work[0] = 0.0;
  e[1] = 0.0;
  work[1] = 0.0;
  e[2] = 0.0;
  work[2] = 0.0;
  for (qq = 0; qq < 9; qq++) {
    b_A[qq] = A[qq];
    U[qq] = 0.0;
    V[qq] = 0.0;
  }

  qq = 0;
  apply_transform = false;
  nrm = xnrm2_JbUzU9Yr(3, b_A, 1);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[0] < 0.0) {
      b_s[0] = -nrm;
    } else {
      b_s[0] = nrm;
    }

    if (muDoubleScalarAbs(b_s[0]) >= 1.0020841800044864E-292) {
      xscal_ogORrH03(3, 1.0 / b_s[0], b_A, 1);
    } else {
      for (qjj = 0; qjj < 3; qjj++) {
        b_A[qjj] /= b_s[0];
      }
    }

    b_A[0]++;
    b_s[0] = -b_s[0];
  } else {
    b_s[0] = 0.0;
  }

  for (b_b = 1; b_b + 1 < 4; b_b++) {
    qjj = 3 * b_b;
    if (apply_transform) {
      xaxpy_TYt1kVwo(3, -(xdotc_FrP4nI9m(3, b_A, 1, b_A, qjj + 1) / b_A[0]), 1,
                     b_A, qjj + 1);
    }

    e[b_b] = b_A[qjj];
  }

  while (qq + 1 < 4) {
    U[qq] = b_A[qq];
    qq++;
  }

  nrm = xnrm2_8vcxASE9(e, 2);
  if (nrm == 0.0) {
    e[0] = 0.0;
  } else {
    if (e[1] < 0.0) {
      nrm = -nrm;
    }

    e[0] = nrm;
    if (muDoubleScalarAbs(nrm) >= 1.0020841800044864E-292) {
      xscal_Dm1iYyRT(1.0 / nrm, e, 2);
    } else {
      for (qq = 1; qq < 3; qq++) {
        e[qq] /= nrm;
      }
    }

    e[1]++;
    e[0] = -e[0];
    for (qq = 2; qq < 4; qq++) {
      work[qq - 1] = 0.0;
    }

    for (qq = 1; qq + 1 < 4; qq++) {
      xaxpy_WIQCbnDm(2, e[qq], b_A, 3 * qq + 2, work, 2);
    }

    for (qq = 1; qq + 1 < 4; qq++) {
      xaxpy_RWMAWdeC(2, -e[qq] / e[1], work, 2, b_A, 3 * qq + 2);
    }
  }

  for (qq = 1; qq + 1 < 4; qq++) {
    V[qq] = e[qq];
  }

  apply_transform = false;
  nrm = xnrm2_JbUzU9Yr(2, b_A, 5);
  if (nrm > 0.0) {
    apply_transform = true;
    if (b_A[4] < 0.0) {
      b_s[1] = -nrm;
    } else {
      b_s[1] = nrm;
    }

    if (muDoubleScalarAbs(b_s[1]) >= 1.0020841800044864E-292) {
      xscal_ogORrH03(2, 1.0 / b_s[1], b_A, 5);
    } else {
      for (qjj = 4; qjj < 6; qjj++) {
        b_A[qjj] /= b_s[1];
      }
    }

    b_A[4]++;
    b_s[1] = -b_s[1];
  } else {
    b_s[1] = 0.0;
  }

  for (b_b = 2; b_b + 1 < 4; b_b++) {
    qjj = 3 * b_b + 1;
    if (apply_transform) {
      xaxpy_TYt1kVwo(2, -(xdotc_FrP4nI9m(2, b_A, 5, b_A, qjj + 1) / b_A[4]), 5,
                     b_A, qjj + 1);
    }

    e[b_b] = b_A[qjj];
  }

  for (qq = 1; qq + 1 < 4; qq++) {
    U[qq + 3] = b_A[qq + 3];
  }

  m = 1;
  b_s[2] = b_A[8];
  U[6] = 0.0;
  U[7] = 0.0;
  U[8] = 1.0;
  for (b_b = 1; b_b >= 0; b_b--) {
    qq = 3 * b_b + b_b;
    if (b_s[b_b] != 0.0) {
      for (kase = b_b + 1; kase + 1 < 4; kase++) {
        qjj = (3 * kase + b_b) + 1;
        xaxpy_TYt1kVwo(3 - b_b, -(xdotc_FrP4nI9m(3 - b_b, U, qq + 1, U, qjj) /
          U[qq]), qq + 1, U, qjj);
      }

      for (qjj = b_b; qjj + 1 < 4; qjj++) {
        U[qjj + 3 * b_b] = -U[3 * b_b + qjj];
      }

      U[qq]++;
      if (0 <= b_b - 1) {
        U[3 * b_b] = 0.0;
      }
    } else {
      U[3 * b_b] = 0.0;
      U[3 * b_b + 1] = 0.0;
      U[3 * b_b + 2] = 0.0;
      U[qq] = 1.0;
    }
  }

  for (qq = 2; qq >= 0; qq--) {
    if ((qq + 1 <= 1) && (e[0] != 0.0)) {
      xaxpy_TYt1kVwo(2, -(xdotc_FrP4nI9m(2, V, 2, V, 5) / V[1]), 2, V, 5);
      xaxpy_TYt1kVwo(2, -(xdotc_FrP4nI9m(2, V, 2, V, 8) / V[1]), 2, V, 8);
    }

    V[3 * qq] = 0.0;
    V[3 * qq + 1] = 0.0;
    V[3 * qq + 2] = 0.0;
    V[qq + 3 * qq] = 1.0;
  }

  ztest = e[0];
  if (b_s[0] != 0.0) {
    rt = muDoubleScalarAbs(b_s[0]);
    nrm = b_s[0] / rt;
    b_s[0] = rt;
    ztest = e[0] / nrm;
    xscal_YPHoZNU9(nrm, U, 1);
  }

  if (ztest != 0.0) {
    rt = muDoubleScalarAbs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[1] *= nrm;
    xscal_YPHoZNU9(nrm, V, 4);
  }

  e[0] = ztest;
  ztest = b_A[7];
  if (b_s[1] != 0.0) {
    rt = muDoubleScalarAbs(b_s[1]);
    nrm = b_s[1] / rt;
    b_s[1] = rt;
    ztest = b_A[7] / nrm;
    xscal_YPHoZNU9(nrm, U, 4);
  }

  if (ztest != 0.0) {
    rt = muDoubleScalarAbs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[2] = b_A[8] * nrm;
    xscal_YPHoZNU9(nrm, V, 7);
  }

  e[1] = ztest;
  if (b_s[2] != 0.0) {
    rt = muDoubleScalarAbs(b_s[2]);
    nrm = b_s[2] / rt;
    b_s[2] = rt;
    xscal_YPHoZNU9(nrm, U, 7);
  }

  e[2] = 0.0;
  qq = 0;
  nrm = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax(b_s[0], e[0]),
    muDoubleScalarMax(b_s[1], ztest)), muDoubleScalarMax(b_s[2], 0.0));
  while ((m + 2 > 0) && (qq < 75)) {
    kase = m + 1;
    do {
      exitg1 = 0;
      b_b = kase;
      if (kase == 0) {
        exitg1 = 1;
      } else {
        rt = muDoubleScalarAbs(e[kase - 1]);
        if ((rt <= (muDoubleScalarAbs(b_s[kase - 1]) + muDoubleScalarAbs
                    (b_s[kase])) * 2.2204460492503131E-16) || ((rt <=
              1.0020841800044864E-292) || ((qq > 20) && (rt <=
               2.2204460492503131E-16 * nrm)))) {
          e[kase - 1] = 0.0;
          exitg1 = 1;
        } else {
          kase--;
        }
      }
    } while (exitg1 == 0);

    if (m + 1 == kase) {
      kase = 4;
    } else {
      qjj = m + 2;
      k_ii = m + 2;
      exitg2 = false;
      while ((!exitg2) && (k_ii >= kase)) {
        qjj = k_ii;
        if (k_ii == kase) {
          exitg2 = true;
        } else {
          rt = 0.0;
          if (k_ii < m + 2) {
            rt = muDoubleScalarAbs(e[k_ii - 1]);
          }

          if (k_ii > kase + 1) {
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

      if (qjj == kase) {
        kase = 3;
      } else if (m + 2 == qjj) {
        kase = 1;
      } else {
        kase = 2;
        b_b = qjj;
      }
    }

    switch (kase) {
     case 1:
      rt = e[m];
      e[m] = 0.0;
      for (qjj = m; qjj + 1 >= b_b + 1; qjj--) {
        xrotg_Aek4oMo2(&b_s[qjj], &rt, &ztest, &sqds);
        if (qjj + 1 > b_b + 1) {
          rt = -sqds * e[0];
          e[0] *= ztest;
        }

        xrot_RTqBGDh9(V, 3 * qjj + 1, 3 * (m + 1) + 1, ztest, sqds);
      }
      break;

     case 2:
      rt = e[b_b - 1];
      e[b_b - 1] = 0.0;
      for (qjj = b_b; qjj < m + 2; qjj++) {
        xrotg_Aek4oMo2(&b_s[qjj], &rt, &ztest, &sqds);
        rt = -sqds * e[qjj];
        e[qjj] *= ztest;
        xrot_RTqBGDh9(U, 3 * qjj + 1, 3 * (b_b - 1) + 1, ztest, sqds);
      }
      break;

     case 3:
      ztest = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
        (muDoubleScalarMax(muDoubleScalarAbs(b_s[m + 1]), muDoubleScalarAbs
                           (b_s[m])), muDoubleScalarAbs(e[m])),
        muDoubleScalarAbs(b_s[b_b])), muDoubleScalarAbs(e[b_b]));
      rt = b_s[m + 1] / ztest;
      smm1 = b_s[m] / ztest;
      emm1 = e[m] / ztest;
      sqds = b_s[b_b] / ztest;
      smm1 = ((smm1 + rt) * (smm1 - rt) + emm1 * emm1) / 2.0;
      emm1 *= rt;
      emm1 *= emm1;
      if ((smm1 != 0.0) || (emm1 != 0.0)) {
        shift = muDoubleScalarSqrt(smm1 * smm1 + emm1);
        if (smm1 < 0.0) {
          shift = -shift;
        }

        shift = emm1 / (smm1 + shift);
      } else {
        shift = 0.0;
      }

      rt = (sqds + rt) * (sqds - rt) + shift;
      ztest = e[b_b] / ztest * sqds;
      for (qjj = b_b + 1; qjj <= m + 1; qjj++) {
        xrotg_Aek4oMo2(&rt, &ztest, &sqds, &smm1);
        if (qjj > b_b + 1) {
          e[0] = rt;
        }

        rt = b_s[qjj - 1] * sqds + e[qjj - 1] * smm1;
        e[qjj - 1] = e[qjj - 1] * sqds - b_s[qjj - 1] * smm1;
        ztest = smm1 * b_s[qjj];
        b_s[qjj] *= sqds;
        xrot_RTqBGDh9(V, 3 * (qjj - 1) + 1, 3 * qjj + 1, sqds, smm1);
        xrotg_Aek4oMo2(&rt, &ztest, &sqds, &smm1);
        b_s[qjj - 1] = rt;
        rt = e[qjj - 1] * sqds + smm1 * b_s[qjj];
        b_s[qjj] = e[qjj - 1] * -smm1 + sqds * b_s[qjj];
        ztest = smm1 * e[qjj];
        e[qjj] *= sqds;
        xrot_RTqBGDh9(U, 3 * (qjj - 1) + 1, 3 * qjj + 1, sqds, smm1);
      }

      e[m] = rt;
      qq++;
      break;

     default:
      if (b_s[b_b] < 0.0) {
        b_s[b_b] = -b_s[b_b];
        xscal_YPHoZNU9(-1.0, V, 3 * b_b + 1);
      }

      qq = b_b + 1;
      while ((b_b + 1 < 3) && (b_s[b_b] < b_s[qq])) {
        rt = b_s[b_b];
        b_s[b_b] = b_s[qq];
        b_s[qq] = rt;
        xswap_65EdV8gu(V, 3 * b_b + 1, 3 * (b_b + 1) + 1);
        xswap_65EdV8gu(U, 3 * b_b + 1, 3 * (b_b + 1) + 1);
        b_b = qq;
        qq++;
      }

      qq = 0;
      m--;
      break;
    }
  }

  s[0] = b_s[0];
  s[1] = b_s[1];
  s[2] = b_s[2];
}
