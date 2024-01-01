#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8da8(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    (**(code **)(*(int *)(param_1 + 0x20) + 0xc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x20) + 8),3);
    param_1 = iVar1;
  }
  return;
}

