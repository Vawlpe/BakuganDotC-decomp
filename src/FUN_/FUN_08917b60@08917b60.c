#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08917b60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x914);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
  }
  return;
}

