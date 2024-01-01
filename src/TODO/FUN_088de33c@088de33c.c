#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088de33c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x130);
  uVar1 = *(undefined4 *)(iVar4 + 0xb4);
  uVar2 = *(undefined4 *)(iVar4 + 0xb8);
  uVar3 = *(undefined4 *)(iVar4 + 0xbc);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(iVar4 + 0xb0);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  *(undefined4 *)(param_1 + 0x1b8) = uVar2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  iVar4 = *(int *)(*(int *)(param_1 + 0x170) + 0xf4);
  iVar5 = *(int *)(param_1 + 0x130);
  uVar1 = *(undefined4 *)(iVar5 + 0xb4);
  uVar2 = *(undefined4 *)(iVar5 + 0xb8);
  uVar3 = *(undefined4 *)(iVar5 + 0xbc);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 0xb0);
  *(undefined4 *)(iVar4 + 0x14) = uVar1;
  *(undefined4 *)(iVar4 + 0x18) = uVar2;
  *(undefined4 *)(iVar4 + 0x1c) = uVar3;
  *(float *)(iVar4 + 0x14) = *(float *)(iVar4 + 0x14) + *(float *)(iVar4 + 0x20);
  (**(code **)(*(int *)(iVar4 + 4) + 0x4c))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x48));
  *(undefined *)(*(int *)(param_1 + 0x174) + 0x10c) = 1;
  return;
}

