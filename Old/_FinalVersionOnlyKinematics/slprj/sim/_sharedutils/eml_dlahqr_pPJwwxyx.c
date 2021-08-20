#include "rtwtypes.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "xdlanv2_V2JX7qUI.h"
#include "xrot_GGuYEoXL.h"
#include "xrot_hHZGoTUG.h"
#include "xzlarfg_zJhzo5YY.h"
#include "eml_dlahqr_pPJwwxyx.h"

int32_T eml_dlahqr_pPJwwxyx(real_T h[16])
{
  real_T v[3];
  real_T a__3;
  real_T a__4;
  real_T aa;
  real_T ab;
  real_T ba;
  real_T cs;
  real_T h12;
  real_T htmp1;
  real_T sn;
  real_T tst;
  int32_T L;
  int32_T b_k;
  int32_T hoffset;
  int32_T i;
  int32_T info;
  int32_T its;
  int32_T j;
  int32_T k;
  int32_T m;
  int32_T nr;
  boolean_T exitg1;
  boolean_T exitg2;
  boolean_T exitg3;
  boolean_T goto150;
  info = 0;
  v[0] = 0.0;
  v[1] = 0.0;
  v[2] = 0.0;
  h[2] = 0.0;
  h[3] = 0.0;
  h[7] = 0.0;
  i = 3;
  exitg1 = false;
  while ((!exitg1) && (i + 1 >= 1)) {
    L = 1;
    goto150 = false;
    its = 0;
    exitg2 = false;
    while ((!exitg2) && (its < 301)) {
      k = i;
      exitg3 = false;
      while ((!exitg3) && ((k + 1 > L) && (!(muDoubleScalarAbs(h[((k - 1) << 2)
                 + k]) <= 4.0083367200179456E-292)))) {
        tst = muDoubleScalarAbs(h[(((k - 1) << 2) + k) - 1]) + muDoubleScalarAbs
          (h[(k << 2) + k]);
        if (tst == 0.0) {
          if (k - 1 >= 1) {
            tst = muDoubleScalarAbs(h[(((k - 2) << 2) + k) - 1]);
          }

          if (k + 2 <= 4) {
            tst += muDoubleScalarAbs(h[((k << 2) + k) + 1]);
          }
        }

        if (muDoubleScalarAbs(h[((k - 1) << 2) + k]) <= 2.2204460492503131E-16 *
            tst) {
          htmp1 = muDoubleScalarAbs(h[((k - 1) << 2) + k]);
          tst = muDoubleScalarAbs(h[((k << 2) + k) - 1]);
          if (htmp1 > tst) {
            ab = htmp1;
            ba = tst;
          } else {
            ab = tst;
            ba = htmp1;
          }

          htmp1 = muDoubleScalarAbs(h[(k << 2) + k]);
          tst = muDoubleScalarAbs(h[(((k - 1) << 2) + k) - 1] - h[(k << 2) + k]);
          if (htmp1 > tst) {
            aa = htmp1;
            htmp1 = tst;
          } else {
            aa = tst;
          }

          tst = aa + ab;
          if (ab / tst * ba <= muDoubleScalarMax(4.0083367200179456E-292, aa /
               tst * htmp1 * 2.2204460492503131E-16)) {
            exitg3 = true;
          } else {
            k--;
          }
        } else {
          k--;
        }
      }

      L = k + 1;
      if (k + 1 > 1) {
        h[k + ((k - 1) << 2)] = 0.0;
      }

      if (k + 1 >= i) {
        goto150 = true;
        exitg2 = true;
      } else {
        if (its == 10) {
          tst = muDoubleScalarAbs(h[(((k + 1) << 2) + k) + 2]) +
            muDoubleScalarAbs(h[((k << 2) + k) + 1]);
          ba = h[(k << 2) + k] + 0.75 * tst;
          h12 = -0.4375 * tst;
          aa = tst;
          htmp1 = ba;
        } else if (its == 20) {
          tst = muDoubleScalarAbs(h[(((i - 2) << 2) + i) - 1]) +
            muDoubleScalarAbs(h[((i - 1) << 2) + i]);
          ba = h[(i << 2) + i] + 0.75 * tst;
          h12 = -0.4375 * tst;
          aa = tst;
          htmp1 = ba;
        } else {
          ba = h[(((i - 1) << 2) + i) - 1];
          aa = h[((i - 1) << 2) + i];
          h12 = h[((i << 2) + i) - 1];
          htmp1 = h[(i << 2) + i];
        }

        tst = ((muDoubleScalarAbs(ba) + muDoubleScalarAbs(h12)) +
               muDoubleScalarAbs(aa)) + muDoubleScalarAbs(htmp1);
        if (tst == 0.0) {
          ba = 0.0;
          htmp1 = 0.0;
          ab = 0.0;
          aa = 0.0;
        } else {
          ba /= tst;
          aa /= tst;
          h12 /= tst;
          htmp1 /= tst;
          ab = (ba + htmp1) / 2.0;
          ba = (ba - ab) * (htmp1 - ab) - h12 * aa;
          aa = muDoubleScalarSqrt(muDoubleScalarAbs(ba));
          if (ba >= 0.0) {
            ba = ab * tst;
            ab = ba;
            htmp1 = aa * tst;
            aa = -htmp1;
          } else {
            ba = ab + aa;
            ab -= aa;
            if (muDoubleScalarAbs(ba - htmp1) <= muDoubleScalarAbs(ab - htmp1))
            {
              ba *= tst;
              ab = ba;
            } else {
              ab *= tst;
              ba = ab;
            }

            htmp1 = 0.0;
            aa = 0.0;
          }
        }

        m = i - 1;
        exitg3 = false;
        while ((!exitg3) && (m >= k + 1)) {
          tst = (muDoubleScalarAbs(h[(((m - 1) << 2) + m) - 1] - ab) +
                 muDoubleScalarAbs(aa)) + muDoubleScalarAbs(h[((m - 1) << 2) + m]);
          h12 = h[((m - 1) << 2) + m] / tst;
          v[0] = ((h[(((m - 1) << 2) + m) - 1] - ab) / tst * (h[(((m - 1) << 2)
                    + m) - 1] - ba) + h[((m << 2) + m) - 1] * h12) - aa / tst *
            htmp1;
          v[1] = (((h[(((m - 1) << 2) + m) - 1] + h[(m << 2) + m]) - ba) - ab) *
            h12;
          v[2] = h[((m << 2) + m) + 1] * h12;
          tst = (muDoubleScalarAbs(v[0]) + muDoubleScalarAbs(v[1])) +
            muDoubleScalarAbs(v[2]);
          v[0] /= tst;
          v[1] /= tst;
          v[2] /= tst;
          if ((k + 1 == m) || (muDoubleScalarAbs(h[(((m - 2) << 2) + m) - 1]) *
                               (muDoubleScalarAbs(v[1]) + muDoubleScalarAbs(v[2]))
                               <= ((muDoubleScalarAbs(h[(((m - 2) << 2) + m) - 2])
                 + muDoubleScalarAbs(h[(((m - 1) << 2) + m) - 1])) +
                muDoubleScalarAbs(h[(m << 2) + m])) * (2.2204460492503131E-16 *
                muDoubleScalarAbs(v[0])))) {
            exitg3 = true;
          } else {
            m--;
          }
        }

        for (b_k = m; b_k <= i; b_k++) {
          nr = (i - b_k) + 2;
          nr = muIntScalarMin_sint32(3, nr);
          if (b_k > m) {
            hoffset = ((b_k - 2) << 2) + b_k;
            for (j = 0; j < nr; j++) {
              v[j] = h[(j + hoffset) - 1];
            }
          }

          htmp1 = v[0];
          tst = xzlarfg_zJhzo5YY(nr, &htmp1, v);
          v[0] = htmp1;
          if (b_k > m) {
            h[(b_k + ((b_k - 2) << 2)) - 1] = htmp1;
            h[b_k + ((b_k - 2) << 2)] = 0.0;
            if (b_k < i) {
              h[b_k + 1] = 0.0;
            }
          } else if (m > k + 1) {
            h[b_k - 1] *= 1.0 - tst;
          }

          htmp1 = v[1];
          ab = tst * v[1];
          if (nr == 3) {
            aa = v[2];
            h12 = tst * v[2];
            for (nr = b_k - 1; nr + 1 < 5; nr++) {
              ba = (h[((nr << 2) + b_k) - 1] + h[(nr << 2) + b_k] * htmp1) + h
                [((nr << 2) + b_k) + 1] * aa;
              h[(b_k + (nr << 2)) - 1] -= ba * tst;
              h[b_k + (nr << 2)] -= ba * ab;
              h[(b_k + (nr << 2)) + 1] -= ba * h12;
            }

            nr = b_k + 3;
            hoffset = i + 1;
            nr = muIntScalarMin_sint32(nr, hoffset);
            for (hoffset = 0; hoffset < nr; hoffset++) {
              ba = (h[((b_k - 1) << 2) + hoffset] + h[(b_k << 2) + hoffset] *
                    htmp1) + h[((b_k + 1) << 2) + hoffset] * aa;
              h[hoffset + ((b_k - 1) << 2)] -= ba * tst;
              h[hoffset + (b_k << 2)] -= ba * ab;
              h[hoffset + ((b_k + 1) << 2)] -= ba * h12;
            }
          } else if (nr == 2) {
            for (nr = b_k - 1; nr + 1 < 5; nr++) {
              ba = h[((nr << 2) + b_k) - 1] + h[(nr << 2) + b_k] * htmp1;
              h[(b_k + (nr << 2)) - 1] -= ba * tst;
              h[b_k + (nr << 2)] -= ba * ab;
            }

            for (nr = 0; nr <= i; nr++) {
              ba = h[((b_k - 1) << 2) + nr] + h[(b_k << 2) + nr] * htmp1;
              h[nr + ((b_k - 1) << 2)] -= ba * tst;
              h[nr + (b_k << 2)] -= ba * ab;
            }
          }
        }

        its++;
      }
    }

    if (!goto150) {
      info = i + 1;
      exitg1 = true;
    } else {
      if ((i + 1 != L) && (L == i)) {
        tst = h[(((i - 1) << 2) + i) - 1];
        htmp1 = h[((i << 2) + i) - 1];
        ab = h[((i - 1) << 2) + i];
        ba = h[(i << 2) + i];
        xdlanv2_V2JX7qUI(&tst, &htmp1, &ab, &ba, &aa, &h12, &a__3, &a__4, &cs,
                         &sn);
        h[(i + ((i - 1) << 2)) - 1] = tst;
        h[(i + (i << 2)) - 1] = htmp1;
        h[i + ((i - 1) << 2)] = ab;
        h[i + (i << 2)] = ba;
        if (4 > i + 1) {
          xrot_GGuYEoXL(3 - i, h, i + ((i + 1) << 2), (i + ((i + 1) << 2)) + 1,
                        cs, sn);
        }

        xrot_hHZGoTUG(i - 1, h, ((i - 1) << 2) + 1, (i << 2) + 1, cs, sn);
      }

      i = L - 2;
    }
  }

  return info;
}
