#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cc444(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined auStack_50 [64];
  
  if (-1 < *(int *)(param_1 + 0x204)) {
    FUN_089b4c84(auStack_50,"cha_%02d_%d",*(int *)(param_1 + 0x204) + 1,1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x20c) + 8);
    uVar1 = FUN_089f7720(auStack_50);
    *(undefined4 *)(iVar2 + 0xd4) = uVar1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x20c) + 0xc);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x20c) + 8);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  return;
}

