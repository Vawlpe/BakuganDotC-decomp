#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a08bb0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    uVar12 = __muldf3(param_1,param_2,param_1,param_2);
    uVar1 = __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),param_1,param_2);
    return uVar1;
  }
  iVar5 = (int)param_2 >> 0x14;
  if ((int)param_2 < 1) {
    if ((param_2 & 0x7fffffff | param_1) == 0) {
      return param_1;
    }
    if ((int)param_2 < 0) {
      uVar1 = FUN_08a0eb10(0,0,0,0);
      return uVar1;
    }
  }
  if (iVar5 == 0) {
    iVar5 = 0;
    iVar6 = 0;
    if (param_2 == 0) {
      do {
        iVar5 = iVar5 + -0x15;
        param_2 = param_2 | param_1 >> 0xb;
        param_1 = param_1 << 0x15;
        iVar6 = iVar5;
      } while (param_2 == 0);
    }
    uVar1 = 0;
    for (; (param_2 & 0x100000) == 0; param_2 = param_2 << 1) {
      uVar1 = uVar1 + 1;
    }
    iVar5 = (iVar6 - uVar1) + 1;
    param_2 = param_2 | param_1 >> (0x20 - uVar1 & 0x1f);
    param_1 = param_1 << (uVar1 & 0x1f);
  }
  uVar7 = (param_2 & 0xfffff | 0x100000) * 2 - ((int)param_1 >> 0x1f);
  uVar1 = param_1 * 2;
  if ((iVar5 - 0x3ffU & 1) != 0) {
    uVar7 = uVar7 * 2 - ((int)uVar1 >> 0x1f);
    uVar1 = param_1 * 4;
  }
  uVar10 = 0;
  uVar3 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar2 = 0x200000;
  do {
    iVar5 = uVar3 + uVar2;
    if (iVar5 <= (int)uVar7) {
      uVar3 = iVar5 + uVar2;
      uVar7 = uVar7 - iVar5;
      uVar8 = uVar8 + uVar2;
    }
    uVar7 = uVar7 * 2 - ((int)uVar1 >> 0x1f);
    uVar1 = uVar1 * 2;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  uVar2 = 0x80000000;
  do {
    uVar11 = uVar2 + uVar10;
    if (((int)uVar3 < (int)uVar7) || ((uVar7 == uVar3 && (uVar11 <= uVar1)))) {
      uVar10 = uVar2 + uVar11;
      uVar4 = uVar3;
      if (((uVar11 & 0x80000000) == 0x80000000) && ((uVar10 & 0x80000000) == 0)) {
        uVar4 = uVar3 + 1;
      }
      uVar7 = uVar7 - uVar3;
      if (uVar1 < uVar11) {
        uVar7 = uVar7 - 1;
      }
      uVar1 = uVar1 - uVar11;
      uVar9 = uVar9 + uVar2;
      uVar3 = uVar4;
    }
    uVar7 = uVar7 * 2 - ((int)uVar1 >> 0x1f);
    uVar1 = uVar1 * 2;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  if ((uVar7 | uVar1) != 0) {
    if (uVar9 == 0xffffffff) {
      uVar9 = 0;
      uVar8 = uVar8 + 1;
    }
    else {
      uVar9 = uVar9 + (uVar9 & 1);
    }
  }
  uVar9 = uVar9 >> 1;
  if ((uVar8 & 1) != 0) {
    uVar9 = uVar9 | 0x80000000;
  }
  return uVar9;
}

