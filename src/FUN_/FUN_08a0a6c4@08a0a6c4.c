#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08a0a6c4(float param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    return param_1 * param_1 + param_1;
  }
  iVar3 = (int)param_1 >> 0x17;
  if ((int)param_1 < 1) {
    if (((uint)param_1 & 0x7fffffff) == 0) {
      return param_1;
    }
    if ((int)param_1 < 0) {
      return -NAN;
    }
  }
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar2 = (uint)param_1 & 0x800000;
    while (uVar2 == 0) {
      param_1 = (float)((int)param_1 << 1);
      iVar3 = iVar3 + 1;
      uVar2 = (uint)param_1 & 0x800000;
    }
    iVar3 = 1 - iVar3;
  }
  uVar2 = (uint)param_1 & 0x7fffff | 0x800000;
  iVar1 = uVar2 * 2;
  if ((iVar3 - 0x7fU & 1) != 0) {
    iVar1 = uVar2 * 4;
  }
  iVar5 = 0;
  uVar4 = 0;
  uVar2 = 0x1000000;
  do {
    iVar6 = iVar5 + uVar2;
    if (iVar6 <= iVar1) {
      iVar5 = iVar6 + uVar2;
      iVar1 = iVar1 - iVar6;
      uVar4 = uVar4 + uVar2;
    }
    iVar1 = iVar1 * 2;
    uVar2 = uVar2 >> 1;
  } while (uVar2 != 0);
  if (iVar1 != 0) {
    uVar4 = uVar4 + (uVar4 & 1);
  }
  return (float)(((int)uVar4 >> 1) + 0x3f000000 + ((int)(iVar3 - 0x7fU) >> 1) * 0x800000);
}

