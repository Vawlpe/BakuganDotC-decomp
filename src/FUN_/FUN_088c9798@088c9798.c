#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c9798(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_50 [64];
  
  if (-1 < *(int *)(param_1 + 0x204)) {
    iVar3 = *(int *)(param_1 + 0x210) + 1;
    *(int *)(param_1 + 0x210) = iVar3;
    if (iVar3 % 3 == 0) {
      iVar2 = *(int *)(param_1 + 0x204) + 1;
      if ((iVar3 / 3 & 1U) == 0) {
        FUN_089b4c84(auStack_50,"cha_%02d_%d",iVar2,1);
        iVar3 = *(int *)(*(int *)(param_1 + 0x20c) + 8);
      }
      else {
        FUN_089b4c84(auStack_50,"cha_%02d_%d",iVar2,2);
        iVar3 = *(int *)(*(int *)(param_1 + 0x20c) + 8);
      }
      uVar1 = FUN_089f7720(auStack_50);
      *(undefined4 *)(iVar3 + 0xd4) = uVar1;
    }
  }
  return;
}

