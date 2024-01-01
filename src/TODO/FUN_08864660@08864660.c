#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08864660(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_2 + 0x20c);
  *(uint *)(iVar4 + 0x130) = *(uint *)(iVar4 + 0x130) | 0x10;
  iVar5 = *(int *)(param_1 + 0x20c);
  uVar1 = *(undefined4 *)(iVar5 + 0x154);
  uVar2 = *(undefined4 *)(iVar5 + 0x158);
  uVar3 = *(undefined4 *)(iVar5 + 0x15c);
  *(undefined4 *)(iVar4 + 0x150) = *(undefined4 *)(iVar5 + 0x150);
  *(undefined4 *)(iVar4 + 0x154) = uVar1;
  *(undefined4 *)(iVar4 + 0x158) = uVar2;
  *(undefined4 *)(iVar4 + 0x15c) = uVar3;
  *(undefined4 *)(iVar4 + 0x170) = 3;
  *(undefined4 *)(iVar4 + 0x16c) = 0xb9;
  *(undefined4 *)(iVar4 + 0x168) = *(undefined4 *)(param_1 + 0x34);
  *(int *)(iVar4 + 0x160) = param_1;
  *(undefined4 *)(iVar4 + 0x164) = 1;
  if (param_3 != '\0') {
    *(undefined4 *)(iVar4 + 0x174) = 10;
    return;
  }
  *(undefined4 *)(iVar4 + 0x174) = 5;
  return;
}

