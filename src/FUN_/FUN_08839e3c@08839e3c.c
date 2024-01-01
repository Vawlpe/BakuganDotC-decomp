#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08839e3c(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_1 + param_3 * 2;
  sVar1 = *(short *)(iVar4 + 0xae8);
  if (sVar1 < 1) {
    if ((-1 < sVar1) && (*(int *)(param_2 + 0x598) == -1)) {
      *(undefined2 *)(iVar4 + 0xae8) = 1;
    }
  }
  else if (sVar1 < 2) {
    iVar2 = FUN_08837ca0(param_1);
    if (iVar2 == -1) {
      *(undefined2 *)(iVar4 + 0xae8) = 9999;
    }
    else {
      uVar3 = FUN_08838428(param_1,param_3,0);
      iVar2 = FUN_0882cce0(param_1,iVar2,uVar3,0xffffffff,0);
      if (iVar2 != 0) {
        *(undefined *)(param_2 + 0x1d0) = 1;
        *(short *)(iVar4 + 0xae8) = *(short *)(iVar4 + 0xae8) + 1;
        FUN_0882cd3c(param_1,1,8);
      }
    }
  }
  else if ((sVar1 < 3) && (*(int *)(param_2 + 0x598) != -1)) {
    *(undefined2 *)(iVar4 + 0xae8) = 0;
    *(undefined4 *)(param_1 + 0x8f4) = 0xffffffff;
    FUN_0882cd3c(param_1,0,0);
  }
  return;
}

