#include "rtwtypes.h"
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <emmintrin.h>
#include "mwmathutil.h"
#include "qr_Cf9gdmJU.h"
#include "qr_en1RFdzJ.h"
#include "rotate_EHa2bfuE.h"
#include "svd_dskV4Er1.h"
#include "UTMeanCovSqrt_JdsqQnBQ.h"

void UTMeanCovSqrt_JdsqQnBQ(real_T Y1[2], real_T Y2[28], const real_T X1[7],
  real_T X2[98], real_T Ymean[2], real_T Sy[4], real_T Pxy[14])
{
  __m128d tmp_p;
  real_T a__1[28];
  real_T tmp[28];
  real_T X2_p[14];
  real_T A[4];
  real_T Ss[4];
  real_T Y1_p[4];
  real_T c[2];
  real_T s[2];
  real_T x[2];
  real_T Y1_e;
  real_T absxk;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T exitg1;
  int32_T i;
  int32_T iAcol;
  int32_T i_p;
  int32_T kk;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
  Ymean[0] = Y1[0];
  Ymean[1] = Y1[1];
  for (kk = 0; kk < 14; kk++) {
    Ymean[0] += Y2[kk << 1] * -0.071428642857214286;
    Ymean[1] += Y2[(kk << 1) + 1] * -0.071428642857214286;
  }

  scale = Ymean[0] * -999999.0;
  Ymean[0] = scale;
  Y1[0] -= scale;
  scale = Ymean[1] * -999999.0;
  Y1_e = Y1[1] - scale;
  Ymean[1] = scale;
  Y1[1] = Y1_e;
  for (kk = 0; kk < 14; kk++) {
    Y2[kk << 1] -= Ymean[0];
    Y2[(kk << 1) + 1] -= scale;
  }

  for (iAcol = 0; iAcol < 2; iAcol++) {
    for (kk = 0; kk < 14; kk++) {
      tmp[kk + 14 * iAcol] = Y2[(kk << 1) + iAcol] * 0.26726137554314555;
    }
  }

  qr_Cf9gdmJU(tmp, a__1, Sy);
  Sy[1] = 0.0;
  errorCondition = false;
  if ((Sy[0] == 0.0) || (Sy[3] == 0.0)) {
    errorCondition = true;
  }

  guard1 = false;
  if (errorCondition) {
    guard1 = true;
  } else {
    x[0] = Y1[0] / Sy[0];
    x[1] = (Y1_e - x[0] * Sy[2]) / Sy[3];
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

    temp = scale * muDoubleScalarSqrt(temp);
    if (temp >= 1.0) {
      guard1 = true;
    } else {
      temp = muDoubleScalarSqrt(1.0 - temp * temp);
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
        temp = Sy[iAcol + 2] * s[iAcol];
        Sy[iAcol + 2] = Sy[iAcol + 2] * c[iAcol] - s[iAcol] * x[1];
        x[1] = c[iAcol] * x[1] + temp;
      }
    }
  }

  if (guard1) {
    for (iAcol = 0; iAcol < 2; iAcol++) {
      Ss[iAcol] = 0.0;
      Ss[iAcol] += Sy[iAcol << 1] * Sy[0];
      Ss[iAcol] += Sy[(iAcol << 1) + 1] * 0.0;
      Y1_p[iAcol << 1] = Y1[0] * Y1[iAcol];
      Ss[iAcol + 2] = 0.0;
      Ss[iAcol + 2] += Sy[iAcol << 1] * Sy[2];
      Ss[iAcol + 2] += Sy[(iAcol << 1) + 1] * Sy[3];
      Y1_p[(iAcol << 1) + 1] = Y1_e * Y1[iAcol];
    }

    errorCondition = true;
    Y1_e = Ss[0] - Y1_p[0];
    if (muDoubleScalarIsInf(Y1_e) || muDoubleScalarIsNaN(Y1_e)) {
      errorCondition = false;
    }

    A[0] = Y1_e;
    Y1_e = Ss[1] - Y1_p[1];
    if (errorCondition && ((!muDoubleScalarIsInf(Y1_e)) && (!muDoubleScalarIsNaN
          (Y1_e)))) {
    } else {
      errorCondition = false;
    }

    A[1] = Y1_e;
    Y1_e = Ss[2] - Y1_p[2];
    if (errorCondition && ((!muDoubleScalarIsInf(Y1_e)) && (!muDoubleScalarIsNaN
          (Y1_e)))) {
    } else {
      errorCondition = false;
    }

    A[2] = Y1_e;
    Y1_e = Ss[3] - Y1_p[3];
    if (errorCondition && ((!muDoubleScalarIsInf(Y1_e)) && (!muDoubleScalarIsNaN
          (Y1_e)))) {
    } else {
      errorCondition = false;
    }

    A[3] = Y1_e;
    if (errorCondition) {
      svd_dskV4Er1(A, Ss, s, Y1_p);
    } else {
      Y1_p[0] = 0.0;
      Y1_p[1] = 0.0;
      Y1_p[2] = 0.0;
      Y1_p[3] = 0.0;
      svd_dskV4Er1(Y1_p, Ss, x, A);
      s[0] = (rtNaN);
      s[1] = (rtNaN);
      Y1_p[0] = (rtNaN);
      Y1_p[1] = (rtNaN);
      Y1_p[2] = (rtNaN);
      Y1_p[3] = (rtNaN);
    }

    Ss[0] = muDoubleScalarSqrt(s[0]);
    Ss[1] = 0.0;
    Ss[2] = 0.0;
    Ss[3] = muDoubleScalarSqrt(s[1]);
    for (iAcol = 0; iAcol < 2; iAcol++) {
      Sy[iAcol] = 0.0;
      Sy[iAcol] += Ss[iAcol << 1] * Y1_p[0];
      Sy[iAcol] += Ss[(iAcol << 1) + 1] * Y1_p[2];
      Sy[iAcol + 2] = 0.0;
      Sy[iAcol + 2] += Ss[iAcol << 1] * Y1_p[1];
      Sy[iAcol + 2] += Ss[(iAcol << 1) + 1] * Y1_p[3];
    }

    errorCondition = true;
    kk = 0;
    exitg2 = false;
    while ((!exitg2) && (kk < 2)) {
      iAcol = kk + 2;
      do {
        exitg1 = 0;
        if (iAcol < 3) {
          if (!(Sy[(kk << 1) + 1] == 0.0)) {
            errorCondition = false;
            exitg1 = 1;
          } else {
            iAcol = 3;
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
      for (i_p = 0; i_p < 4; i_p++) {
        Ss[i_p] = Sy[i_p];
      }

      qr_en1RFdzJ(Ss, A, Sy);
    }
  }

  Y1_e = Sy[0];
  scale = Sy[2];
  absxk = Sy[1];
  t = Sy[3];
  Sy[0] = 999.999499999875 * Y1_e;
  Sy[1] = 999.999499999875 * scale;
  Sy[2] = 999.999499999875 * absxk;
  Sy[3] = 999.999499999875 * t;
  for (kk = 0; kk < 14; kk++) {
    for (iAcol = 0; iAcol < 7; iAcol++) {
      X2[iAcol + 7 * kk] -= X1[iAcol];
    }
  }

  for (iAcol = 0; iAcol < 7; iAcol++) {
    for (kk = 0; kk < 2; kk++) {
      X2_p[iAcol + 7 * kk] = 0.0;
      for (i = 0; i < 14; i++) {
        X2_p[iAcol + 7 * kk] += X2[7 * i + iAcol] * Y2[(i << 1) + kk];
      }
    }
  }

  for (iAcol = 0; iAcol <= 12; iAcol += 2) {
    tmp_p = _mm_loadu_pd(&X2_p[iAcol]);
    _mm_storeu_pd(&Pxy[iAcol], _mm_mul_pd(tmp_p, _mm_set1_pd(71428.571428571435)));
  }
}
