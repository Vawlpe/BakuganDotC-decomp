#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08952a70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_089528cc(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    iVar1 = FUN_0880d354();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 4;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}

