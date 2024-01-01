#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08950654(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    uVar1 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar1);
    if (iVar2 != 0) {
      FUN_089505e0(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

