#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08951170(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_08950fcc(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  iVar1 = FUN_0890ad3c();
  if (iVar1 == 0) {
    iVar1 = FUN_089c2b10(0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x28);
    }
    else {
      uVar2 = FUN_089c2b48(0);
      FUN_089c357c(uVar2,0x1a,0,0);
      iVar1 = *(int *)(param_1 + 0x28);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = iVar1 + 1;
  }
  return;
}

