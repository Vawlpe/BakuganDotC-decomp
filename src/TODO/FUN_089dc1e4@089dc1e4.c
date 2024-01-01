#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dc1e4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x2c) != iVar1) {
    *(int *)(param_1 + 0x2c) = iVar1;
    uVar3 = *(uint *)(param_1 + 0x3c);
    uVar5 = *(uint *)(iVar1 + 0x20);
    *(uint *)(param_1 + 0x3c) = uVar5;
    uVar4 = *(uint *)(iVar1 + 0x24);
    param_3 = param_3 | uVar3 | uVar5;
    if ((uVar4 + 1 & 0xffff0000) == 0) {
      if ((uVar4 & 0xffff) < (uint)*(ushort *)(param_2 + 0x1e)) {
        uVar4 = *(int *)(param_2 + 0x10) + uVar4 * 0x10;
      }
      else {
        uVar4 = 0;
      }
    }
    if (uVar4 == 0) {
      iVar1 = FUN_08a13b9c(*(undefined2 *)(iVar1 + 8));
      iVar2 = *(int *)(param_1 + 0x28);
    }
    else {
      iVar1 = *(int *)(uVar4 + 4);
      iVar2 = *(int *)(param_1 + 0x28);
    }
    if (iVar2 != iVar1) {
      *(int *)(param_1 + 0x28) = iVar1;
      param_3 = param_3 | 0x80000000;
    }
  }
  FUN_089dc2c8(param_1,param_2,param_3);
  return;
}

