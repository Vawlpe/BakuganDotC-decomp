#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08a0968c(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar8 = (uint)param_2 & 0x7fffffff;
  fVar7 = (float)((uint)param_1 & 0x7fffffff);
  if (uVar8 == 0) {
    return 1.0;
  }
  if ((0x7f800000 < (uint)fVar7) || (uVar9 = 0, 0x7f800000 < uVar8)) {
    return param_1 + param_2;
  }
  if ((int)param_1 < 0) {
    if (uVar8 < 0x4b800000) {
      if ((0x3f7fffff < uVar8) &&
         (uVar3 = 0x17 - (((int)uVar8 >> 0x17) + -0x7f), uVar6 = (int)uVar8 >> (uVar3 & 0x1f),
         uVar6 << (uVar3 & 0x1f) == uVar8)) {
        uVar9 = 2 - (uVar6 & 1);
      }
    }
    else {
      uVar9 = 2;
    }
  }
  if (uVar8 == 0x7f800000) {
    if (fVar7 == 1.0) {
      param_2 = 0.0;
    }
    else if ((uint)fVar7 < 0x3f800001) {
      if ((int)param_2 < 0) {
        param_2 = -param_2;
      }
      else {
        param_2 = 0.0;
      }
    }
    else if ((int)param_2 < 0) {
      param_2 = 0.0;
    }
    return param_2;
  }
  if (uVar8 == 0x3f800000) {
    if ((int)param_2 < 0) {
      param_1 = 1.0 / param_1;
    }
    return param_1;
  }
  if (param_2 == 2.0) {
    return param_1 * param_1;
  }
  if ((param_2 == 0.5) && (-1 < (int)param_1)) {
    fVar7 = (float)FUN_08a0a6c4(param_1);
    return fVar7;
  }
  fVar10 = (float)fabsf(param_1);
  if (((fVar7 != INFINITY) && (fVar7 != 0.0)) && (fVar7 != 1.0)) {
    uVar6 = 0xffffffff - ((int)param_1 >> 0x1f);
    if ((uVar6 | uVar9) == 0) {
      return 0.0;
    }
    if (uVar8 < 0x4d000001) {
      iVar1 = 0;
      if ((uint)fVar7 < 0x800000) {
        fVar7 = fVar10 * 1.677722e+07;
        iVar1 = -0x18;
      }
      iVar1 = iVar1 + ((int)fVar7 >> 0x17);
      uVar8 = (uint)fVar7 & 0x7fffff;
      iVar2 = iVar1 + -0x7f;
      fVar7 = (float)(uVar8 | 0x3f800000);
      if (uVar8 < 0x1cc472) {
        fVar13 = 1.0;
        fVar14 = (float)iVar2;
        fVar10 = 0.0;
        fVar5 = (float)(((int)fVar7 >> 1 | 0x20000000U) + 0x40000);
        fVar15 = 0.0;
      }
      else if (uVar8 < 0x5db3d7) {
        fVar14 = (float)iVar2;
        fVar13 = 1.5;
        fVar10 = 1.563221e-06;
        fVar5 = (float)(((int)fVar7 >> 1 | 0x20000000U) + 0x240000);
        fVar15 = 0.5849609;
      }
      else {
        fVar7 = (float)((int)fVar7 - 0x800000);
        fVar13 = 1.0;
        fVar14 = (float)(iVar1 + -0x7e);
        fVar10 = 0.0;
        fVar5 = (float)(((int)fVar7 >> 1 | 0x20000000U) + 0x40000);
        fVar15 = 0.0;
      }
      fVar16 = 1.0 / (fVar7 + fVar13);
      fVar11 = (fVar7 - fVar13) * fVar16;
      fVar12 = fVar11 * fVar11;
      fVar4 = (float)((uint)fVar11 & 0xfffff000);
      fVar16 = fVar16 * (((fVar7 - fVar13) - fVar4 * fVar5) - fVar4 * (fVar7 - (fVar5 - fVar13)));
      fVar5 = fVar12 * fVar12 *
              (fVar12 * (fVar12 * (fVar12 * (fVar12 * (fVar12 * 0.206975 + 0.2306608) + 0.2727281) +
                                  0.3333333) + 0.4285714) + 0.6) + fVar16 * (fVar11 + fVar4);
      fVar7 = (float)((uint)(fVar4 * fVar4 + 3.0 + fVar5) & 0xfffff000);
      fVar13 = fVar16 * fVar7 + fVar11 * (fVar5 - ((fVar7 - 3.0) - fVar4 * fVar4));
      fVar5 = (float)((uint)(fVar4 * fVar7 + fVar13) & 0xfffff000);
      fVar10 = fVar5 * 4.701738e-06 + (fVar13 - (fVar5 - fVar4 * fVar7)) * 0.9617967 + fVar10;
      fVar7 = (float)((uint)(fVar5 * 0.961792 + fVar10 + fVar15 + fVar14) & 0xfffff000);
      fVar10 = fVar10 - (((fVar7 - fVar14) - fVar15) - fVar5 * 0.961792);
    }
    else {
      if ((uint)fVar7 < 0x3f7ffff8) {
        if ((int)param_2 < 0) {
          fVar7 = 1.0;
        }
        else {
          fVar7 = 0.0;
        }
        return fVar7;
      }
      if (0x3f800007 < (uint)fVar7) {
        if ((int)param_2 < 1) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = 1.0;
        }
        return fVar7;
      }
      param_1 = param_1 - 1.0;
      fVar10 = param_1 * 7.052608e-06 -
               param_1 * param_1 * (0.5 - param_1 * (0.3333333 - param_1 * 0.25)) * 1.442695;
      fVar7 = (float)((uint)(param_1 * 1.442688 + fVar10) & 0xfffff000);
      fVar10 = fVar10 - (fVar7 - param_1 * 1.442688);
    }
    fVar5 = 1.0;
    if ((uVar6 | uVar9 - 1) == 0) {
      fVar5 = -1.0;
    }
    fVar13 = fVar7 * (float)((uint)param_2 & 0xfffff000);
    fVar7 = (param_2 - (float)((uint)param_2 & 0xfffff000)) * fVar7 + fVar10 * param_2;
    fVar10 = fVar13 + fVar7;
    if (0x43000000 < (int)fVar10) {
      return 0.0;
    }
    if (fVar10 == 128.0) {
      if (128.0 - fVar13 < fVar7 + 4.299567e-08) {
        return 0.0;
      }
    }
    else {
      if (0x43160000 < ((uint)fVar10 & 0x7fffffff)) {
        return fVar5 * 1e-30 * 1e-30;
      }
      if ((fVar10 == -150.0) && (fVar7 <= -150.0 - fVar13)) {
        return fVar5 * 1e-30 * 1e-30;
      }
    }
    iVar1 = 0;
    if (0x3f000000 < ((uint)fVar10 & 0x7fffffff)) {
      uVar8 = (int)fVar10 +
              (0x800000 >> (((int)((uint)fVar10 & 0x7fffffff) >> 0x17) - 0x7eU & 0x1f));
      uVar9 = ((int)(uVar8 & 0x7fffffff) >> 0x17) - 0x7f;
      iVar1 = (int)(uVar8 & 0x7fffff | 0x800000) >> (0x17 - uVar9 & 0x1f);
      if ((int)fVar10 < 0) {
        iVar1 = -iVar1;
      }
      fVar13 = fVar13 - (float)(uVar8 & ~(0x7fffff >> (uVar9 & 0x1f)));
    }
    fVar10 = (float)((uint)(fVar13 + fVar7) & 0xfffff000);
    fVar7 = (fVar7 - (fVar10 - fVar13)) * 0.6931472 + fVar10 * 1.428607e-06;
    fVar13 = fVar10 * 0.6931458 + fVar7;
    fVar14 = fVar13 * fVar13;
    fVar14 = fVar13 - fVar14 * (fVar14 * (fVar14 * (fVar14 * (fVar14 * 4.138137e-08 + -1.65339e-06)
                                                   + 6.613756e-05) + -0.002777778) + 0.1666667);
    fVar7 = fVar7 - (fVar13 - fVar10 * 0.6931458);
    fVar10 = 1.0 - (((fVar14 * fVar13) / (fVar14 - 2.0) - (fVar7 + fVar7 * fVar13)) - fVar13);
    fVar7 = (float)((int)fVar10 + iVar1 * 0x800000);
    if ((int)fVar7 >> 0x17 < 1) {
      fVar7 = (float)scalbnf(fVar10,iVar1);
    }
    return fVar5 * fVar7;
  }
  if ((int)param_2 < 0) {
    if (fVar10 == 0.0) {
      fVar7 = (float)FUN_08a0cfa4();
      return fVar7;
    }
    fVar10 = 1.0 / fVar10;
  }
  if ((int)param_1 < 0) {
    if (((int)fVar7 + 0xc0800000U | uVar9) == 0) {
      fVar10 = 0.0;
    }
    else if (uVar9 == 1) {
      fVar10 = -fVar10;
    }
  }
  return fVar10;
}

