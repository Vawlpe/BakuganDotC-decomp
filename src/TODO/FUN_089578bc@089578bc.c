#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089578bc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 0x4d08);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0x3c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x38));
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 4);
  return;
}

