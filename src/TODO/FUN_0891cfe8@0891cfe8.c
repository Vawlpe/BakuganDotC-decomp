#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891cfe8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      uVar1 = FUN_089edb80();
      iVar2 = FUN_089edf70(uVar1);
      if (iVar2 == 0) {
        return;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    if (iVar2 < 2) {
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = iVar2 + 1;
  return;
}

