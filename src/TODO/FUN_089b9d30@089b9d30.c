#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined8 FUN_089b9d30(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  
  uVar9 = param_2 & 0x80000000;
  uVar11 = param_4 & 0x7fffffff;
  uVar10 = param_2 ^ uVar9;
  if ((((uVar11 | param_3) == 0) || (0x7fefffff < (int)uVar10)) ||
     (0x7ff00000 < (uVar11 | (param_3 | -param_3) >> 0x1f))) {
    uVar13 = __muldf3(param_1,param_2,param_3,param_4);
    uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar13 = FUN_08a0eb10((int)uVar13,uVar4,(int)uVar13,uVar4);
    return uVar13;
  }
  iVar3 = (int)param_2 >> 0x1f;
  if ((int)uVar10 <= (int)uVar11) {
    if (((int)uVar10 < (int)uVar11) || (param_1 < param_3)) goto LAB_089ba190;
    if (param_1 == param_3) {
      return *(undefined8 *)(&DAT_08aa0218 + iVar3 * -8);
    }
  }
  if ((int)uVar10 < 0x100000) {
    iVar5 = param_2 << 0xb;
    if (uVar10 == 0) {
      iVar6 = -0x413;
      uVar8 = param_1;
      if (0 < (int)param_1) {
        do {
          uVar8 = uVar8 << 1;
          iVar6 = iVar6 + -1;
        } while (0 < (int)uVar8);
      }
    }
    else {
      iVar6 = -0x3fe;
      for (; 0 < iVar5; iVar5 = iVar5 << 1) {
        iVar6 = iVar6 + -1;
      }
    }
  }
  else {
    iVar6 = ((int)uVar10 >> 0x14) + -0x3ff;
  }
  if (uVar11 < 0x100000) {
    iVar7 = uVar11 << 0xb;
    if (uVar11 == 0) {
      iVar5 = -0x413;
      uVar8 = param_3;
      if (0 < (int)param_3) {
        do {
          uVar8 = uVar8 << 1;
          iVar5 = iVar5 + -1;
        } while (0 < (int)uVar8);
      }
    }
    else {
      iVar5 = -0x3fe;
      for (; 0 < iVar7; iVar7 = iVar7 << 1) {
        iVar5 = iVar5 + -1;
      }
    }
  }
  else {
    iVar5 = ((int)uVar11 >> 0x14) + -0x3ff;
  }
  bVar1 = iVar5 < -0x3fe;
  if (iVar6 < -0x3fe) {
    uVar8 = -iVar6 - 0x3fe;
    if ((int)uVar8 < 0x20) {
      uVar10 = uVar10 << (uVar8 & 0x1f) | param_1 >> (0x20 - uVar8 & 0x1f);
      param_1 = param_1 << (uVar8 & 0x1f);
    }
    else {
      uVar10 = param_1 << (-iVar6 - 0x41eU & 0x1f);
      param_1 = 0;
    }
  }
  else {
    uVar10 = uVar10 & 0xfffff | 0x100000;
  }
  if (bVar1) {
    uVar8 = -iVar5 - 0x3fe;
    if ((int)uVar8 < 0x20) {
      uVar12 = uVar11 << (uVar8 & 0x1f) | param_3 >> (0x20 - uVar8 & 0x1f);
      param_3 = param_3 << (uVar8 & 0x1f);
      bVar2 = param_1 < param_3;
      uVar8 = uVar10 - uVar12;
      uVar11 = param_1 - param_3;
    }
    else {
      uVar12 = param_3 << (-iVar5 - 0x41eU & 0x1f);
      param_3 = 0;
      bVar2 = false;
      uVar8 = uVar10 - uVar12;
      uVar11 = param_1;
    }
  }
  else {
    uVar12 = param_4 & 0xfffff | 0x100000;
    bVar2 = param_1 < param_3;
    uVar8 = uVar10 - uVar12;
    uVar11 = param_1 - param_3;
  }
  iVar6 = iVar6 - iVar5;
  while (iVar6 != 0) {
    iVar6 = iVar6 + -1;
    if (bVar2) {
      uVar8 = uVar8 - 1;
    }
    if ((int)uVar8 < 0) {
      uVar10 = uVar10 * 2 - ((int)param_1 >> 0x1f);
      param_1 = param_1 * 2;
      uVar8 = uVar10 - uVar12;
      uVar11 = param_1 - param_3;
    }
    else {
      if ((uVar8 | uVar11) == 0) {
        return *(undefined8 *)(&DAT_08aa0218 + iVar3 * -8);
      }
      uVar10 = uVar8 * 2 - ((int)uVar11 >> 0x1f);
      param_1 = uVar11 * 2;
      uVar8 = uVar10 - uVar12;
      uVar11 = param_1 - param_3;
    }
    bVar2 = param_1 < param_3;
  }
  if (bVar2) {
    uVar8 = uVar8 - 1;
  }
  if ((int)uVar8 < 0) {
    uVar12 = uVar10 | param_1;
    uVar11 = param_1;
    uVar8 = uVar10;
  }
  else {
    uVar12 = uVar8 | uVar11;
  }
  if (uVar12 == 0) {
    return *(undefined8 *)(&DAT_08aa0218 + iVar3 * -8);
  }
  if ((int)uVar8 < 0x100000) {
    do {
      uVar8 = uVar8 * 2 - ((int)uVar11 >> 0x1f);
      uVar11 = uVar11 * 2;
      iVar5 = iVar5 + -1;
    } while ((int)uVar8 < 0x100000);
    bVar1 = iVar5 < -0x3fe;
  }
  if (!bVar1) {
    return CONCAT44(uVar8 - 0x100000 | (iVar5 + 0x3ff) * 0x100000 | uVar9,uVar11);
  }
  uVar10 = -iVar5 - 0x3fe;
  if ((int)uVar10 < 0x15) {
    param_1 = uVar11 >> (uVar10 & 0x1f) | uVar8 << (0x20 - uVar10 & 0x1f);
    param_2 = (int)uVar8 >> (uVar10 & 0x1f) | uVar9;
  }
  else {
    param_2 = uVar9;
    if ((int)uVar10 < 0x20) {
      param_1 = uVar8 << (0x20 - uVar10 & 0x1f) | uVar11 >> (uVar10 & 0x1f);
    }
    else {
      param_1 = (int)uVar8 >> (-iVar5 - 0x41eU & 0x1f);
    }
  }
LAB_089ba190:
  return CONCAT44(param_2,param_1);
}

