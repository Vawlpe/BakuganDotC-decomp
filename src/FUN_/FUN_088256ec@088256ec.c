#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088256ec(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x154);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(iVar4 + 0xb0) = *param_2;
  *(undefined4 *)(iVar4 + 0xb4) = uVar1;
  *(undefined4 *)(iVar4 + 0xb8) = uVar2;
  *(undefined4 *)(iVar4 + 0xbc) = uVar3;
  iVar4 = *(int *)(param_1 + 0x158);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(iVar4 + 0xb0) = *param_2;
  *(undefined4 *)(iVar4 + 0xb4) = uVar1;
  *(undefined4 *)(iVar4 + 0xb8) = uVar2;
  *(undefined4 *)(iVar4 + 0xbc) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  return;
}

