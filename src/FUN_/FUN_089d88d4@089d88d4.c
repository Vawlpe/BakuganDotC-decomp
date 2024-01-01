#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d88d4(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
    param_1 = iVar1;
  }
  return;
}

