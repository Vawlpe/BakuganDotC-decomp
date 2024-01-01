#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08931e64(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a80);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1af0);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
    iVar1 = *(int *)(param_1 + 0x1af0);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
  }
  return;
}

