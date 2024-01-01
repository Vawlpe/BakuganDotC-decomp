#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088239f4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x90);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  else {
    FUN_089d8634();
    FUN_089d7fd8(iVar3,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x90) = 0;
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(iVar3 << 2,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  if (0 < *(int *)(param_1 + 0x8c)) {
    iVar4 = 0;
    do {
      uVar1 = FUN_0882393c(param_1,iVar3);
      uVar1 = FUN_089f7720(uVar1);
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar4) = uVar1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x8c));
  }
  return;
}

