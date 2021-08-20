#include "rtwtypes.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include <string.h>
#include "mwmathutil.h"
#include "qr_UIMk847n.h"
#include "rotate_EHa2bfuE.h"
#include "svd_Fpugt20V.h"
#include "cholUpdateFactor_EQIwzZfq.h"

void cholUpdateFactor_EQIwzZfq(real_T S[9], const real_T U[3])
{
  real_T A[9];
  real_T Ss[9];
  real_T U_p[9];
  real_T c[3];
  real_T s[3];
  real_T x[3];
  real_T absxk;
  real_T scale;
  real_T t;
  real_T temp;
  int32_T d_k;
  int32_T exitg1;
  int32_T iAcol;
  boolean_T errorCondition;
  boolean_T exitg2;
  boolean_T guard1 = false;
  for (iAcol = 0; iAcol < 2; iAcol++) {
    S[iAcol + 1] = 0.0;
  }

  S[5] = 0.0;
  errorCondition = false;
  if ((S[0] == 0.0) || (S[4] == 0.0) || (S[8] == 0.0)) {
    errorCondition = true;
  }

  guard1 = false;
  if (errorCondition) {
    guard1 = true;
  } else {
    x[2] = U[2];
    x[0] = U[0] / S[0];
    x[1] = (U[1] - x[0] * S[3]) / S[4];
    temp = U[2];
    for (d_k = 0; d_k < 2; d_k++) {
      temp -= S[d_k + 6] * x[d_k];
    }

    x[2] = temp / S[8];
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
        temp = s[iAcol] * S[iAcol];
        S[iAcol] = c[iAcol] * S[iAcol] - s[iAcol] * x[0];
        x[0] = c[iAcol] * x[0] + temp;
      }

      for (iAcol = 1; iAcol + 1 > 0; iAcol--) {
        temp = S[iAcol + 3] * s[iAcol];
        S[iAcol + 3] = S[iAcol + 3] * c[iAcol] - s[iAcol] * x[1];
        x[1] = c[iAcol] * x[1] + temp;
      }

      for (iAcol = 2; iAcol + 1 > 0; iAcol--) {
        temp = S[iAcol + 6] * s[iAcol];
        S[iAcol + 6] = S[iAcol + 6] * c[iAcol] - s[iAcol] * x[2];
        x[2] = c[iAcol] * x[2] + temp;
      }
    }
  }

  if (guard1) {
    for (d_k = 0; d_k < 3; d_k++) {
      for (iAcol = 0; iAcol < 3; iAcol++) {
        Ss[d_k + 3 * iAcol] = 0.0;
        Ss[d_k + 3 * iAcol] += S[3 * d_k] * S[3 * iAcol];
        Ss[d_k + 3 * iAcol] += S[3 * d_k + 1] * S[3 * iAcol + 1];
        Ss[d_k + 3 * iAcol] += S[3 * d_k + 2] * S[3 * iAcol + 2];
        U_p[iAcol + 3 * d_k] = U[iAcol] * U[d_k];
      }
    }

    errorCondition = true;
    for (d_k = 0; d_k < 9; d_k++) {
      temp = Ss[d_k] - U_p[d_k];
      if (errorCondition && ((!muDoubleScalarIsInf(temp)) &&
                             (!muDoubleScalarIsNaN(temp)))) {
      } else {
        errorCondition = false;
      }

      A[d_k] = temp;
    }

    if (errorCondition) {
      svd_Fpugt20V(A, Ss, s, U_p);
    } else {
      memset(&U_p[0], 0, 9U * sizeof(real_T));
      svd_Fpugt20V(U_p, Ss, x, A);
      s[0] = (rtNaN);
      s[1] = (rtNaN);
      s[2] = (rtNaN);
      for (d_k = 0; d_k < 9; d_k++) {
        U_p[d_k] = (rtNaN);
      }
    }

    memset(&Ss[0], 0, 9U * sizeof(real_T));
    Ss[0] = s[0];
    Ss[4] = s[1];
    Ss[8] = s[2];
    for (d_k = 0; d_k < 9; d_k++) {
      Ss[d_k] = muDoubleScalarSqrt(Ss[d_k]);
    }

    for (d_k = 0; d_k < 3; d_k++) {
      for (iAcol = 0; iAcol < 3; iAcol++) {
        S[d_k + 3 * iAcol] = 0.0;
        S[d_k + 3 * iAcol] += Ss[3 * d_k] * U_p[iAcol];
        S[d_k + 3 * iAcol] += Ss[3 * d_k + 1] * U_p[iAcol + 3];
        S[d_k + 3 * iAcol] += Ss[3 * d_k + 2] * U_p[iAcol + 6];
      }
    }

    errorCondition = true;
    d_k = 0;
    exitg2 = false;
    while ((!exitg2) && (d_k < 3)) {
      iAcol = d_k + 1;
      do {
        exitg1 = 0;
        if (iAcol + 1 < 4) {
          if (!(S[3 * d_k + iAcol] == 0.0)) {
            errorCondition = false;
            exitg1 = 1;
          } else {
            iAcol++;
          }
        } else {
          d_k++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);

      if (exitg1 == 1) {
        exitg2 = true;
      }
    }

    if (!errorCondition) {
      memcpy(&Ss[0], &S[0], 9U * sizeof(real_T));
      qr_UIMk847n(Ss, A, S);
    }
  }

  for (d_k = 0; d_k < 3; d_k++) {
    Ss[3 * d_k] = S[d_k];
    Ss[3 * d_k + 1] = S[d_k + 3];
    Ss[3 * d_k + 2] = S[d_k + 6];
  }

  memcpy(&S[0], &Ss[0], 9U * sizeof(real_T));
}
