#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08863070(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_08860344();
  iVar5 = *(int *)(param_1 + 0x15c);
  do {
    uVar2 = FUN_08862d84(param_1,param_2);
    *(undefined4 *)(param_1 + 0x15c) = uVar2;
    iVar3 = FUN_08860344(param_1);
    iVar4 = FUN_08862f68(param_1,param_2);
    if (iVar4 < 2) {
      iVar1 = *(int *)(param_1 + 0x15c);
      goto LAB_088630e0;
    }
  } while (iVar1 == iVar3);
  iVar1 = *(int *)(param_1 + 0x15c);
LAB_088630e0:
  if (iVar5 != iVar1) {
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0x1d1) = 1;
    }
    if (*(int *)(param_1 + 0x170) != 0) {
      FUN_08854e78(*(int *)(param_1 + 0x170),0x10,1);
    }
  }
  return;
}

