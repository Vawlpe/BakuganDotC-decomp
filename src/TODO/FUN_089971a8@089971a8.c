#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089971a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1f04);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x226c);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
    FUN_089970f8(param_1);
    FUN_08997150(param_1);
    iVar1 = *(int *)(param_1 + 0x226c);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
  }
  return;
}

