#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_dk3RSHEv.h"
#include "mwmathutil.h"
#include "xgemv_HIteAFNo.h"
#include "xgerc_HdQfOjmZ.h"
#include "xnrm2_XRtcWIHn.h"
#include "xscal_LFP3qda1.h"
#include "qr_en1RFdzJ.h"

void qr_en1RFdzJ(const real_T A[4], real_T Q[4], real_T R[4])
{
  real_T b_A[4];
  real_T work[2];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T c_lastc;
  int32_T knt;
  b_A[0] = A[0];
  b_A[1] = A[1];
  b_A[2] = A[2];
  b_A[3] = A[3];
  work[0] = 0.0;
  work[1] = 0.0;
  b_atmp = A[0];
  b = 0.0;
  xnorm = xnrm2_XRtcWIHn(1, b_A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[0], xnorm);
    if (A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_LFP3qda1(1, 9.9792015476736E+291, b_A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_XRtcWIHn(1, b_A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_LFP3qda1(1, 1.0 / (b_atmp - xnorm), b_A, 2);
      for (c_lastc = 0; c_lastc <= knt; c_lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - A[0]) / xnorm;
      xscal_LFP3qda1(1, 1.0 / (A[0] - xnorm), b_A, 2);
      b_atmp = xnorm;
    }
  }

  b_A[0] = 1.0;
  if (b != 0.0) {
    knt = 2;
    c_lastc = 1;
    while ((knt > 0) && (b_A[c_lastc] == 0.0)) {
      knt--;
      c_lastc--;
    }

    c_lastc = ilazlc_dk3RSHEv(knt, 1, b_A, 3, 2);
  } else {
    knt = 0;
    c_lastc = 0;
  }

  if (knt > 0) {
    xgemv_HIteAFNo(knt, c_lastc, b_A, 3, b_A, 1, work);
    xgerc_HdQfOjmZ(knt, c_lastc, -b, 1, work, b_A, 3);
  }

  b_A[0] = b_atmp;
  R[0] = b_atmp;
  R[1] = 0.0;
  work[0] = 0.0;
  for (c_lastc = 0; c_lastc < 2; c_lastc++) {
    R[c_lastc + 2] = b_A[c_lastc + 2];
  }

  work[1] = 0.0;
  b_A[3] = 1.0;
  b_A[2] = 0.0;
  b_A[0] = 1.0;
  if (b != 0.0) {
    c_lastc = 2;
    knt = 0;
    while ((c_lastc > 0) && (b_A[knt + 1] == 0.0)) {
      c_lastc--;
      knt--;
    }

    knt = ilazlc_dk3RSHEv(c_lastc, 1, b_A, 3, 2);
  } else {
    c_lastc = 0;
    knt = 0;
  }

  if (c_lastc > 0) {
    xgemv_HIteAFNo(c_lastc, knt, b_A, 3, b_A, 1, work);
    xgerc_HdQfOjmZ(c_lastc, knt, -b, 1, work, b_A, 3);
  }

  xscal_LFP3qda1(1, -b, b_A, 2);
  Q[0] = 1.0 - b;
  Q[1] = b_A[1];
  Q[2] = b_A[2];
  Q[3] = b_A[3];
}
