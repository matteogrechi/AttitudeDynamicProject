#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xaxpy_xrtCmtbC.h"
#include "xdotc_lrVdQwYU.h"
#include "xnrm2_alG5ig56.h"
#include "xrot_sIX3gsh4.h"
#include "xrotg_NXeMSa2F.h"
#include "xscal_2IA556bw.h"
#include "xscal_FrOJUOws.h"
#include "xswap_LaXORB54.h"
#include "svd_hpXm7Idz.h"

void svd_hpXm7Idz(const real_T A[4], real_T U[4], real_T s[2], real_T V[4])
{
  real_T b_A[4];
  real_T b_s[2];
  real_T e[2];
  real_T emm1;
  real_T nrm;
  real_T rt;
  real_T shift;
  real_T smm1;
  real_T sqds;
  real_T ztest;
  int32_T iter;
  int32_T kase;
  int32_T m;
  int32_T q;
  int32_T qs;
  boolean_T exitg1;
  b_A[0] = A[0];
  b_A[1] = A[1];
  b_A[2] = A[2];
  b_A[3] = A[3];
  nrm = xnrm2_alG5ig56(A);
  if (nrm > 0.0) {
    if (A[0] < 0.0) {
      nrm = -nrm;
    }

    if (muDoubleScalarAbs(nrm) >= 1.0020841800044864E-292) {
      xscal_2IA556bw(1.0 / nrm, b_A);
    } else {
      b_A[0] = A[0] / nrm;
      b_A[1] = A[1] / nrm;
    }

    b_A[0]++;
    b_s[0] = -nrm;
    xaxpy_xrtCmtbC(-(xdotc_lrVdQwYU(b_A, b_A) / b_A[0]), b_A);
  } else {
    b_s[0] = 0.0;
  }

  b_s[1] = b_A[3];
  e[1] = 0.0;
  U[0] = b_A[0];
  U[2] = 0.0;
  U[1] = b_A[1];
  m = 0;
  U[3] = 1.0;
  if (b_s[0] != 0.0) {
    xaxpy_xrtCmtbC(-(xdotc_lrVdQwYU(U, U) / b_A[0]), U);
    U[0] = -U[0];
    U[1] = -U[1];
    U[0]++;
  } else {
    U[1] = 0.0;
    U[0] = 1.0;
  }

  V[2] = 0.0;
  V[3] = 1.0;
  V[1] = 0.0;
  V[0] = 1.0;
  ztest = b_A[2];
  if (b_s[0] != 0.0) {
    rt = muDoubleScalarAbs(b_s[0]);
    nrm = b_s[0] / rt;
    b_s[0] = rt;
    ztest = b_A[2] / nrm;
    xscal_FrOJUOws(nrm, U, 1);
  }

  if (ztest != 0.0) {
    rt = muDoubleScalarAbs(ztest);
    nrm = rt / ztest;
    ztest = rt;
    b_s[1] = b_A[3] * nrm;
    xscal_FrOJUOws(nrm, V, 3);
  }

  if (b_s[1] != 0.0) {
    rt = muDoubleScalarAbs(b_s[1]);
    nrm = b_s[1] / rt;
    b_s[1] = rt;
    xscal_FrOJUOws(nrm, U, 3);
  }

  e[0] = ztest;
  iter = 0;
  nrm = muDoubleScalarMax(muDoubleScalarMax(b_s[0], ztest), muDoubleScalarMax
    (b_s[1], 0.0));
  while ((m + 2 > 0) && (iter < 75)) {
    q = m + 1;
    exitg1 = false;
    while (!(exitg1 || (q == 0))) {
      rt = muDoubleScalarAbs(e[0]);
      if ((rt <= (muDoubleScalarAbs(b_s[0]) + muDoubleScalarAbs(b_s[1])) *
           2.2204460492503131E-16) || ((rt <= 1.0020841800044864E-292) || ((iter
             > 20) && (rt <= 2.2204460492503131E-16 * nrm)))) {
        e[0] = 0.0;
        exitg1 = true;
      } else {
        q = 0;
      }
    }

    if (m + 1 == q) {
      kase = 4;
    } else {
      qs = m + 2;
      kase = m + 2;
      exitg1 = false;
      while ((!exitg1) && (kase >= q)) {
        qs = kase;
        if (kase == q) {
          exitg1 = true;
        } else {
          rt = 0.0;
          if (kase < m + 2) {
            rt = muDoubleScalarAbs(e[kase - 1]);
          }

          if (kase > q + 1) {
            rt += muDoubleScalarAbs(e[0]);
          }

          ztest = muDoubleScalarAbs(b_s[kase - 1]);
          if ((ztest <= 2.2204460492503131E-16 * rt) || (ztest <=
               1.0020841800044864E-292)) {
            b_s[kase - 1] = 0.0;
            exitg1 = true;
          } else {
            kase--;
          }
        }
      }

      if (qs == q) {
        kase = 3;
      } else if (m + 2 == qs) {
        kase = 1;
      } else {
        kase = 2;
        q = qs;
      }
    }

    switch (kase) {
     case 1:
      rt = e[m];
      e[m] = 0.0;
      qs = m + 1;
      while (qs >= q + 1) {
        xrotg_NXeMSa2F(&b_s[0], &rt, &ztest, &sqds);
        xrot_sIX3gsh4(V, 1, ((m + 1) << 1) + 1, ztest, sqds);
        qs = 0;
      }
      break;

     case 2:
      rt = e[q - 1];
      e[q - 1] = 0.0;
      for (qs = q; qs < m + 2; qs++) {
        xrotg_NXeMSa2F(&b_s[qs], &rt, &ztest, &sqds);
        rt = -sqds * e[qs];
        e[qs] *= ztest;
        xrot_sIX3gsh4(U, (qs << 1) + 1, ((q - 1) << 1) + 1, ztest, sqds);
      }
      break;

     case 3:
      ztest = muDoubleScalarMax(muDoubleScalarMax(muDoubleScalarMax
        (muDoubleScalarMax(muDoubleScalarAbs(b_s[m + 1]), muDoubleScalarAbs
                           (b_s[m])), muDoubleScalarAbs(e[m])),
        muDoubleScalarAbs(b_s[q])), muDoubleScalarAbs(e[q]));
      rt = b_s[m + 1] / ztest;
      smm1 = b_s[m] / ztest;
      emm1 = e[m] / ztest;
      sqds = b_s[q] / ztest;
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
      ztest = e[q] / ztest * sqds;
      while (q + 1 <= m + 1) {
        xrotg_NXeMSa2F(&rt, &ztest, &sqds, &smm1);
        rt = sqds * b_s[0] + smm1 * e[0];
        e[0] = sqds * e[0] - smm1 * b_s[0];
        ztest = smm1 * b_s[1];
        b_s[1] *= sqds;
        xrot_sIX3gsh4(V, 1, 3, sqds, smm1);
        xrotg_NXeMSa2F(&rt, &ztest, &sqds, &smm1);
        b_s[0] = rt;
        rt = sqds * e[0] + smm1 * b_s[1];
        b_s[1] = -smm1 * e[0] + sqds * b_s[1];
        ztest = smm1 * e[1];
        e[1] *= sqds;
        xrot_sIX3gsh4(U, 1, 3, sqds, smm1);
        q = 1;
      }

      e[m] = rt;
      iter++;
      break;

     default:
      if (b_s[q] < 0.0) {
        b_s[q] = -b_s[q];
        xscal_FrOJUOws(-1.0, V, (q << 1) + 1);
      }

      iter = q + 1;
      while ((q + 1 < 2) && (b_s[q] < b_s[iter])) {
        rt = b_s[q];
        b_s[q] = b_s[iter];
        b_s[iter] = rt;
        xswap_LaXORB54(V, (q << 1) + 1, ((q + 1) << 1) + 1);
        xswap_LaXORB54(U, (q << 1) + 1, ((q + 1) << 1) + 1);
        q = iter;
        iter++;
      }

      iter = 0;
      m--;
      break;
    }
  }

  s[0] = b_s[0];
  s[1] = b_s[1];
}
