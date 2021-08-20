#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "mwmathutil.h"
#include "qr_UIMk847n.h"
#include "qr_XFbLBem8.h"
#include "rotate_EHa2bfuE.h"
#include "svd_Fpugt20V.h"
#include "UTMeanCovSqrt_oA1OpO5w.h"

void UTMeanCovSqrt_oA1OpO5w(real_T Y1[3], real_T Y2[42], const real_T X1[7],
  real_T X2[98], real_T Ymean[3], real_T Sy[9], real_T Pxy[21])
{
  real_T a__1[42];
  real_T tmp[42];
  real_T X2_p[21];
  real_T A[9];
  real_T Ss[9];
  real_T Y1_p[9];
  real_T c[3];
  real_T s[3];
  real_T x[3];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  int32_T kk;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
  Ymean[0] = Y1[0];
  Ymean[1] = Y1[1];
  Ymean[2] = Y1[2];
  for (kk = 0; kk < 14; kk++) {
    Ymean[0] += Y2[3 * kk] * -0.071428642857214286;
    Ymean[1] += Y2[3 * kk + 1] * -0.071428642857214286;
    Ymean[2] += Y2[3 * kk + 2] * -0.071428642857214286;
  }

  scale = Ymean[0] * -999999.0;
  Ymean[0] = scale;
  Y1[0] -= scale;
  scale = Ymean[1] * -999999.0;
  Ymean[1] = scale;
  Y1[1] -= scale;
  scale = Ymean[2] * -999999.0;
  temp = Y1[2] - scale;
  Ymean[2] = scale;
  Y1[2] = temp;
  for (kk = 0; kk < 14; kk++) {
    Y2[3 * kk] -= Ymean[0];
    Y2[3 * kk + 1] -= Ymean[1];
    Y2[3 * kk + 2] -= scale;
  }

  for (iAcol = 0; iAcol < 3; iAcol++) {
    for (kk = 0; kk < 14; kk++) {
      tmp[kk + 14 * iAcol] = Y2[3 * kk + iAcol] * 0.26726137554314555;
    }
  }

  qr_XFbLBem8(tmp, a__1, Sy);
  for (iAcol = 0; iAcol < 2; iAcol++) {
    Sy[iAcol + 1] = 0.0;
  }

  Sy[5] = 0.0;
  errorCondition = false;
  if ((Sy[0] == 0.0) || (Sy[4] == 0.0) || (Sy[8] == 0.0)) {
    errorCondition = true;
  }

  guard1 = false;
  if (errorCondition) {
    guard1 = true;
  } else {
    x[2] = temp;
    x[0] = Y1[0] / Sy[0];
    x[1] = (Y1[1] - x[0] * Sy[3]) / Sy[4];
    for (iAcol = 0; iAcol < 2; iAcol++) {
      temp -= Sy[iAcol + 6] * x[iAcol];
    }

    x[2] = temp / Sy[8];
    scale = 3.3121686421112381E-170;
    absxk = muDoubleScalarAbs(x[0]);
    if (absxk > 3.3121686421112381E-170) {
      temp = 1.0;
      scale = absxk;
    } else {
      t = absxk / 3.3121686421112381E-170;
      temp = t * t;
    }

    absxk = muDoubleScalarAbs(x[1]);
    if (absxk > scale) {
      t = scale / absxk;
      temp = temp * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      temp += t * t;
    }

    absxk = muDoubleScalarAbs(x[2]);
    if (absxk > scale) {
      t = scale / absxk;
      temp = temp * t * t + 1.0;
      scale = absxk;
    } else {
      t = absxk / scale;
      temp += t * t;
    }

    temp = scale * muDoubleScalarSqrt(temp);
    if (temp >= 1.0) {
      guard1 = true;
    } else {
      temp = muDoubleScalarSqrt(1.0 - temp * temp);
      rotate_EHa2bfuE(temp, x[2], &c[2], &s[2], &temp);
      x[2] = 0.0;
      rotate_EHa2bfuE(temp, x[1], &c[1], &s[1], &temp);
      x[1] = 0.0;
      rotate_EHa2bfuE(temp, x[0], &c[0], &s[0], &temp);
      x[0] = 0.0;
      for (iAcol = 0; iAcol + 1 > 0; iAcol--) {
        temp = s[iAcol] * Sy[iAcol];
        Sy[iAcol] = c[iAcol] * Sy[iAcol] - s[iAcol] * x[0];
        x[0] = c[iAcol] * x[0] + temp;
      }

      for (iAcol = 1; iAcol + 1 > 0; iAcol--) {
        temp = Sy[iAcol + 3] * s[iAcol];
        Sy[iAcol + 3] = Sy[iAcol + 3] * c[iAcol] - s[iAcol] * x[1];
        x[1] = c[iAcol] * x[1] + temp;
      }

      for (iAcol = 2; iAcol + 1 > 0; iAcol--) {
        temp = Sy[iAcol + 6] * s[iAcol];
        Sy[iAcol + 6] = Sy[iAcol + 6] * c[iAcol] - s[iAcol] * x[2];
        x[2] = c[iAcol] * x[2] + temp;
      }
    }
  }

  if (guard1) {
    for (iAcol = 0; iAcol < 3; iAcol++) {
      for (kk = 0; kk < 3; kk++) {
        Ss[iAcol + 3 * kk] = 0.0;
        Ss[iAcol + 3 * kk] += Sy[3 * iAcol] * Sy[3 * kk];
        Ss[iAcol + 3 * kk] += Sy[3 * iAcol + 1] * Sy[3 * kk + 1];
        Ss[iAcol + 3 * kk] += Sy[3 * iAcol + 2] * Sy[3 * kk + 2];
        Y1_p[kk + 3 * iAcol] = Y1[kk] * Y1[iAcol];
      }
    }

    errorCondition = true;
    for (kk = 0; kk < 9; kk++) {
      temp = Ss[kk] - Y1_p[kk];
      if (errorCondition && ((!muDoubleScalarIsInf(temp)) &&
                             (!muDoubleScalarIsNaN(temp)))) {
      } else {
        errorCondition = false;
      }

      A[kk] = temp;
    }

    if (errorCondition) {
      svd_Fpugt20V(A, Ss, s, Y1_p);
    } else {
      memset(&Y1_p[0], 0, 9U * sizeof(real_T));
      svd_Fpugt20V(Y1_p, Ss, x, A);
      s[0] = (rtNaN);
      s[1] = (rtNaN);
      s[2] = (rtNaN);
      for (iAcol = 0; iAcol < 9; iAcol++) {
        Y1_p[iAcol] = (rtNaN);
      }
    }

    memset(&Ss[0], 0, 9U * sizeof(real_T));
    Ss[0] = s[0];
    Ss[4] = s[1];
    Ss[8] = s[2];
    for (kk = 0; kk < 9; kk++) {
      Ss[kk] = muDoubleScalarSqrt(Ss[kk]);
    }

    for (iAcol = 0; iAcol < 3; iAcol++) {
      for (kk = 0; kk < 3; kk++) {
        Sy[iAcol + 3 * kk] = 0.0;
        Sy[iAcol + 3 * kk] += Ss[3 * iAcol] * Y1_p[kk];
        Sy[iAcol + 3 * kk] += Ss[3 * iAcol + 1] * Y1_p[kk + 3];
        Sy[iAcol + 3 * kk] += Ss[3 * iAcol + 2] * Y1_p[kk + 6];
      }
    }

    errorCondition = true;
    kk = 0;
    exitg2 = false;
    while ((!exitg2) && (kk < 3)) {
      iAcol = kk + 1;
      do {
        exitg1 = 0;
        if (iAcol + 1 < 4) {
          if (!(Sy[3 * kk + iAcol] == 0.0)) {
            errorCondition = false;
            exitg1 = 1;
          } else {
            iAcol++;
          }
        } else {
          kk++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    if (!errorCondition) {
      memcpy(&Ss[0], &Sy[0], 9U * sizeof(real_T));
      qr_UIMk847n(Ss, A, Sy);
    }
  }

  for (iAcol = 0; iAcol < 3; iAcol++) {
    Ss[3 * iAcol] = Sy[iAcol];
    Ss[3 * iAcol + 1] = Sy[iAcol + 3];
    Ss[3 * iAcol + 2] = Sy[iAcol + 6];
  }

  for (iAcol = 0; iAcol < 9; iAcol++) {
    Sy[iAcol] = 999.999499999875 * Ss[iAcol];
  }

  for (kk = 0; kk < 14; kk++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      X2[iAcol + 7 * kk] -= X1[iAcol];
    }
  }

  for (iAcol = 0; iAcol < 7; iAcol++) {
    for (kk = 0; kk < 3; kk++) {
      X2_p[iAcol + 7 * kk] = 0.0;
      for (i = 0; i < 14; i++) {
        X2_p[iAcol + 7 * kk] += X2[7 * i + iAcol] * Y2[3 * i + kk];
      }
    }
  }

  for (iAcol = 0; iAcol < 21; iAcol++) {
    Pxy[iAcol] = X2_p[iAcol] * 71428.571428571435;
  }
}
