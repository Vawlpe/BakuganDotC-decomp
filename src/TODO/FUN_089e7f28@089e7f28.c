#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e7f28(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x24);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(iVar3 << 2,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4) = *(undefined4 *)(param_1 + 0x14);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  *(undefined *)(param_1 + 0x2c) = 1;
  return;
}

