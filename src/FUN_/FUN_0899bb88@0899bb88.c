#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899bb88(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x225c) = 0;
    *(undefined4 *)(param_1 + 0x2260) = 0;
    *(undefined4 *)(param_1 + 0x2264) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x10e0) = *(undefined4 *)(*(int *)(param_1 + 0x1f04) + 0x20);
    pfVar5 = (float *)(*(int *)(param_1 + 0x1f04) + 0x20);
    *pfVar5 = *pfVar5 - 64.0;
    iVar6 = *(int *)(param_1 + 0x1f04);
    *(undefined4 *)(param_1 + 0x10e4) = *(undefined4 *)(iVar6 + 0x20);
    iVar4 = *(int *)(iVar6 + 0x130);
    uVar1 = *(undefined4 *)(iVar6 + 0x24);
    uVar2 = *(undefined4 *)(iVar6 + 0x28);
    uVar3 = *(undefined4 *)(iVar6 + 0x2c);
    *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar6 + 0x20);
    *(undefined4 *)(iVar4 + 0xb4) = uVar1;
    *(undefined4 *)(iVar4 + 0xb8) = uVar2;
    *(undefined4 *)(iVar4 + 0xbc) = uVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x225c) = 0;
  *(undefined4 *)(param_1 + 0x2260) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2264) = 0x3f800000;
  iVar6 = *(int *)(param_1 + 0x1f04);
  *(float *)(param_1 + 0x10e0) = *(float *)(iVar6 + 0x20) - 64.0;
  *(undefined4 *)(param_1 + 0x10e4) = *(undefined4 *)(iVar6 + 0x20);
  iVar4 = *(int *)(iVar6 + 0x130);
  uVar1 = *(undefined4 *)(iVar6 + 0x24);
  uVar2 = *(undefined4 *)(iVar6 + 0x28);
  uVar3 = *(undefined4 *)(iVar6 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar6 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar1;
  *(undefined4 *)(iVar4 + 0xb8) = uVar2;
  *(undefined4 *)(iVar4 + 0xbc) = uVar3;
  return;
}

