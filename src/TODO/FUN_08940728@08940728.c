#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08940728(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
    iVar1 = FUN_089edb80();
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    uVar2 = FUN_089edb80();
    FUN_089edf24(uVar2,0x1e);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    FUN_08940628(param_1);
    FUN_0894068c(param_1);
    FUN_08940704(param_1);
  }
  return;
}

