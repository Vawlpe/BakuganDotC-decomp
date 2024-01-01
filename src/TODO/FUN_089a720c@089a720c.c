#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a720c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (iVar2 != 1) {
      iVar3 = *(int *)(iVar1 + 0x68c);
      *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(iVar3 + 0x24);
      uVar4 = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(param_1 + 0x9cc) = 0;
      *(undefined4 *)(param_1 + 0x9c8) = uVar4;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
    param_1 = param_1 + 0xc;
  } while (iVar2 < 5);
  return;
}

