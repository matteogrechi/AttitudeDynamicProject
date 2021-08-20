#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xzlartg_eavk3Zsx.h"

void xzlartg_eavk3Zsx(const creal_T f, const creal_T g, real_T *cs, creal_T *sn)
{
  real_T f2s;
  real_T fs_im;
  real_T fs_re;
  real_T g2;
  real_T gs_im;
  real_T gs_re;
  real_T scale;
  boolean_T guard1 = false;
  scale = muDoubleScalarAbs(f.re);
  g2 = muDoubleScalarAbs(f.im);
  if (g2 > scale) {
    scale = g2;
  }

  g2 = muDoubleScalarAbs(g.re);
  f2s = muDoubleScalarAbs(g.im);
  if (f2s > g2) {
    g2 = f2s;
  }

  if (g2 > scale) {
    scale = g2;
  }

  fs_re = f.re;
  fs_im = f.im;
  gs_re = g.re;
  gs_im = g.im;
  guard1 = false;
  if (scale >= 7.4428285367870146E+137) {
    do {
      fs_re *= 1.3435752215134178E-138;
      fs_im *= 1.3435752215134178E-138;
      gs_re *= 1.3435752215134178E-138;
      gs_im *= 1.3435752215134178E-138;
      scale *= 1.3435752215134178E-138;
    } while (!(scale < 7.4428285367870146E+137));

    guard1 = true;
  } else if (scale <= 1.3435752215134178E-138) {
    if ((g.re == 0.0) && (g.im == 0.0)) {
      *cs = 1.0;
      sn->re = 0.0;
      sn->im = 0.0;
    } else {
      do {
        fs_re *= 7.4428285367870146E+137;
        fs_im *= 7.4428285367870146E+137;
        gs_re *= 7.4428285367870146E+137;
        gs_im *= 7.4428285367870146E+137;
        scale *= 7.4428285367870146E+137;
      } while (!(scale > 1.3435752215134178E-138));

      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    scale = fs_re * fs_re + fs_im * fs_im;
    g2 = gs_re * gs_re + gs_im * gs_im;
    f2s = g2;
    if (1.0 > g2) {
      f2s = 1.0;
    }

    if (scale <= f2s * 2.0041683600089728E-292) {
      if ((f.re == 0.0) && (f.im == 0.0)) {
        *cs = 0.0;
        g2 = muDoubleScalarHypot(gs_re, gs_im);
        sn->re = gs_re / g2;
        sn->im = -gs_im / g2;
      } else {
        scale = muDoubleScalarSqrt(g2);
        *cs = muDoubleScalarHypot(fs_re, fs_im) / scale;
        g2 = muDoubleScalarAbs(f.re);
        f2s = muDoubleScalarAbs(f.im);
        if (f2s > g2) {
          g2 = f2s;
        }

        if (g2 > 1.0) {
          g2 = muDoubleScalarHypot(f.re, f.im);
          fs_re = f.re / g2;
          fs_im = f.im / g2;
        } else {
          f2s = 7.4428285367870146E+137 * f.re;
          fs_im = 7.4428285367870146E+137 * f.im;
          g2 = muDoubleScalarHypot(f2s, fs_im);
          fs_re = f2s / g2;
          fs_im /= g2;
        }

        gs_re /= scale;
        gs_im = -gs_im / scale;
        sn->re = fs_re * gs_re - fs_im * gs_im;
        sn->im = fs_re * gs_im + fs_im * gs_re;
      }
    } else {
      f2s = muDoubleScalarSqrt(g2 / scale + 1.0);
      fs_re *= f2s;
      fs_im *= f2s;
      *cs = 1.0 / f2s;
      g2 += scale;
      fs_re /= g2;
      fs_im /= g2;
      sn->re = fs_re * gs_re - fs_im * -gs_im;
      sn->im = fs_re * -gs_im + fs_im * gs_re;
    }
  }
}
