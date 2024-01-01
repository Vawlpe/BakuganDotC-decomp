#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint * FUN_08a0e374(uint *param_1,uint *param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar4 = *param_1;
  if (uVar4 < 2) {
    return param_1;
  }
  uVar3 = *param_2;
  if (uVar3 < 2) {
    return param_2;
  }
  if (uVar4 == 4) {
    if ((uVar3 ^ 4) != 0) {
      return param_1;
    }
    if (param_1[1] != param_2[1]) {
      return (uint *)&DAT_08aa5000;
    }
    return param_1;
  }
  if ((uVar3 ^ 4) == 0) {
    return param_2;
  }
  if (uVar3 == 2) {
    if ((uVar4 ^ 2) != 0) {
      return param_1;
    }
    *param_3 = uVar4;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
    param_3[4] = param_1[4];
    param_3[5] = param_1[5];
    param_3[1] = param_1[1] & param_2[1];
    return param_3;
  }
  if ((uVar4 ^ 2) == 0) {
    return param_2;
  }
  uVar3 = param_1[2];
  uVar4 = param_2[2];
  uVar7 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  iVar2 = uVar3 - uVar4;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 0x40) {
    bVar1 = (int)uVar3 < (int)uVar4;
    if ((int)uVar3 > (int)uVar4) {
      iVar2 = uVar3 - uVar4;
      do {
        uVar4 = uVar10 << 0x1f;
        uVar10 = uVar10 >> 1;
        iVar2 = iVar2 + -1;
        uVar9 = uVar9 & 1 | uVar9 >> 1 | uVar4;
      } while (iVar2 != 0);
      bVar1 = false;
      uVar4 = uVar3;
    }
    if (bVar1) {
      iVar2 = uVar4 - uVar3;
      do {
        uVar3 = uVar8 << 0x1f;
        uVar8 = uVar8 >> 1;
        iVar2 = iVar2 + -1;
        uVar7 = uVar7 & 1 | uVar7 >> 1 | uVar3;
      } while (iVar2 != 0);
LAB_08a0e4f4:
      uVar6 = param_1[1];
      uVar3 = uVar4;
    }
    else {
      uVar6 = param_1[1];
    }
  }
  else {
    if ((int)uVar3 <= (int)uVar4) {
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_08a0e4f4;
    }
    uVar9 = 0;
    uVar10 = 0;
    uVar6 = param_1[1];
  }
  if (uVar6 == param_2[1]) {
    param_3[1] = uVar6;
    param_3[2] = uVar3;
    param_3[4] = uVar7 + uVar9;
    param_3[5] = uVar8 + uVar10 + (uint)(uVar7 + uVar9 < uVar9);
    uVar4 = param_3[5];
  }
  else {
    uVar4 = uVar9 - uVar7;
    uVar5 = (uVar10 - uVar8) - (uint)(uVar9 < uVar7);
    if (uVar6 == 0) {
      uVar4 = uVar7 - uVar9;
      uVar5 = (uVar8 - uVar10) - (uint)(uVar7 < uVar9);
    }
    if ((int)uVar5 < 0) {
      param_3[1] = 1;
      param_3[2] = uVar3;
      param_3[4] = -uVar4;
      param_3[5] = -(uint)(-uVar4 != 0) - uVar5;
    }
    else {
      param_3[2] = uVar3;
      param_3[4] = uVar4;
      param_3[5] = uVar5;
      param_3[1] = 0;
    }
    uVar3 = param_3[4];
    uVar10 = param_3[5];
    uVar4 = (uVar10 - 1) + (uint)(uVar3 != 0);
    if (uVar4 < 0x10000000) {
      if (uVar4 == 0xfffffff) {
        uVar4 = uVar3 >> 0x1f;
        if (uVar3 == 0) {
          uVar4 = param_3[5];
          goto LAB_08a0e5d4;
        }
      }
      else {
        uVar4 = uVar3 >> 0x1f;
      }
LAB_08a0e574:
      uVar8 = param_3[2];
      do {
        uVar10 = uVar10 << 1 | uVar4;
        uVar3 = uVar3 * 2;
        uVar7 = (uVar10 - 1) + (uint)(uVar3 != 0);
        param_3[2] = uVar8 - 1;
        param_3[4] = uVar3;
        param_3[5] = uVar10;
        if (0xfffffff < uVar7) {
LAB_08a0e5d0:
          uVar4 = param_3[5];
          goto LAB_08a0e5d4;
        }
        uVar4 = uVar3 >> 0x1f;
        if (uVar7 != 0xfffffff) goto LAB_08a0e574;
        if (uVar3 == 0) goto LAB_08a0e5d0;
        uVar8 = param_3[2];
      } while( true );
    }
    uVar4 = param_3[5];
  }
LAB_08a0e5d4:
  *param_3 = 3;
  if (0x1fffffff < uVar4) {
    param_3[4] = param_3[4] & 1 | param_3[4] >> 1 | param_3[5] << 0x1f;
    param_3[5] = param_3[5] >> 1;
    param_3[2] = param_3[2] + 1;
  }
  return param_3;
}

