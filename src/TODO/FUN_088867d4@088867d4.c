#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088867d4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0xe4);
  iVar4 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0xd4);
  iVar3 = param_1;
  do {
    if (*(int *)(iVar3 + 0xd4) != -1) {
      *(undefined4 *)(iVar3 + 0xbc) = 0;
      iVar2 = iVar2 + 1;
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 3);
  *(int *)(param_1 + 0xe4) = iVar2;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  return;
}

