#include "rtwtypes.h"
#include "multiword_types.h"
#include "ilazlc_9mxPqSOB.h"
#include "mwmathutil.h"
#include "xgemv_gY15yKV9.h"
#include "xgerc_s28ZIjs9.h"
#include "xnrm2_8XUKT4jR.h"
#include "xscal_7kOJElXq.h"
#include "xgeqrf_8jIJ8zV7.h"

void xgeqrf_8jIJ8zV7(real_T A[56], real_T tau[4])
{
  real_T work[4];
  real_T b;
  real_T b_atmp;
  real_T xnorm;
  int32_T knt;
  int32_T lastc;
  work[0] = 0.0;
  work[1] = 0.0;
  work[2] = 0.0;
  work[3] = 0.0;
  b_atmp = A[0];
  b = 0.0;
  xnorm = xnrm2_8XUKT4jR(13, A, 2);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[0], xnorm);
    if (A[0] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_7kOJElXq(13, 9.9792015476736E+291, A, 2);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_8XUKT4jR(13, A, 2));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_7kOJElXq(13, 1.0 / (b_atmp - xnorm), A, 2);
      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - A[0]) / xnorm;
      xscal_7kOJElXq(13, 1.0 / (A[0] - xnorm), A, 2);
      b_atmp = xnorm;
    }
  }

  tau[0] = b;
  A[0] = b_atmp;
  b_atmp = A[0];
  A[0] = 1.0;
  if (b != 0.0) {
    knt = 14;
    lastc = 0;
    while ((knt > 0) && (A[lastc + 13] == 0.0)) {
      knt--;
      lastc--;
    }

    lastc = ilazlc_9mxPqSOB(knt, 3, A, 15, 14);
  } else {
    knt = 0;
    lastc = 0;
  }

  if (knt > 0) {
    xgemv_gY15yKV9(knt, lastc, A, 15, A, 1, work);
    xgerc_s28ZIjs9(knt, lastc, -b, 1, work, A, 15);
  }

  A[0] = b_atmp;
  b_atmp = A[15];
  b = 0.0;
  xnorm = xnrm2_8XUKT4jR(12, A, 17);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[15], xnorm);
    if (A[15] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_7kOJElXq(12, 9.9792015476736E+291, A, 17);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_8XUKT4jR(12, A, 17));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_7kOJElXq(12, 1.0 / (b_atmp - xnorm), A, 17);
      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - A[15]) / xnorm;
      xscal_7kOJElXq(12, 1.0 / (A[15] - xnorm), A, 17);
      b_atmp = xnorm;
    }
  }

  tau[1] = b;
  A[15] = b_atmp;
  b_atmp = A[15];
  A[15] = 1.0;
  if (b != 0.0) {
    knt = 13;
    lastc = 14;
    while ((knt > 0) && (A[lastc + 13] == 0.0)) {
      knt--;
      lastc--;
    }

    lastc = ilazlc_9mxPqSOB(knt, 2, A, 30, 14);
  } else {
    knt = 0;
    lastc = 0;
  }

  if (knt > 0) {
    xgemv_gY15yKV9(knt, lastc, A, 30, A, 16, work);
    xgerc_s28ZIjs9(knt, lastc, -b, 16, work, A, 30);
  }

  A[15] = b_atmp;
  b_atmp = A[30];
  b = 0.0;
  xnorm = xnrm2_8XUKT4jR(11, A, 32);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[30], xnorm);
    if (A[30] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_7kOJElXq(11, 9.9792015476736E+291, A, 32);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_8XUKT4jR(11, A, 32));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      b = (xnorm - b_atmp) / xnorm;
      xscal_7kOJElXq(11, 1.0 / (b_atmp - xnorm), A, 32);
      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      b = (xnorm - A[30]) / xnorm;
      xscal_7kOJElXq(11, 1.0 / (A[30] - xnorm), A, 32);
      b_atmp = xnorm;
    }
  }

  tau[2] = b;
  A[30] = b_atmp;
  b_atmp = A[30];
  A[30] = 1.0;
  if (b != 0.0) {
    knt = 12;
    lastc = 28;
    while ((knt > 0) && (A[lastc + 13] == 0.0)) {
      knt--;
      lastc--;
    }

    lastc = ilazlc_9mxPqSOB(knt, 1, A, 45, 14);
  } else {
    knt = 0;
    lastc = 0;
  }

  if (knt > 0) {
    xgemv_gY15yKV9(knt, lastc, A, 45, A, 31, work);
    xgerc_s28ZIjs9(knt, lastc, -b, 31, work, A, 45);
  }

  A[30] = b_atmp;
  b_atmp = A[45];
  tau[3] = 0.0;
  xnorm = xnrm2_8XUKT4jR(10, A, 47);
  if (xnorm != 0.0) {
    xnorm = muDoubleScalarHypot(A[45], xnorm);
    if (A[45] >= 0.0) {
      xnorm = -xnorm;
    }

    if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
      knt = -1;
      do {
        knt++;
        xscal_7kOJElXq(10, 9.9792015476736E+291, A, 47);
        xnorm *= 9.9792015476736E+291;
        b_atmp *= 9.9792015476736E+291;
      } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

      xnorm = muDoubleScalarHypot(b_atmp, xnrm2_8XUKT4jR(10, A, 47));
      if (b_atmp >= 0.0) {
        xnorm = -xnorm;
      }

      tau[3] = (xnorm - b_atmp) / xnorm;
      xscal_7kOJElXq(10, 1.0 / (b_atmp - xnorm), A, 47);
      for (lastc = 0; lastc <= knt; lastc++) {
        xnorm *= 1.0020841800044864E-292;
      }

      b_atmp = xnorm;
    } else {
      tau[3] = (xnorm - A[45]) / xnorm;
      xscal_7kOJElXq(10, 1.0 / (A[45] - xnorm), A, 47);
      b_atmp = xnorm;
    }
  }

  A[45] = b_atmp;
}
