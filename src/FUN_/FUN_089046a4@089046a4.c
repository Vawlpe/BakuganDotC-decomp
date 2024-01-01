#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089046a4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      return;
    }
    iVar2 = FUN_0884b248();
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x54);
    }
    else {
      uVar1 = FUN_0884b268();
      FUN_0884cd04(uVar1);
      iVar2 = *(int *)(param_1 + 0x54);
    }
    if (iVar2 != 0) {
      DAT_08ac5c90 = iVar2;
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  else if (1 < iVar2) {
    return;
  }
  FUN_089bf7a8(param_1,1);
  return;
}

