#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0c90(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
      }
      if (iVar1 == 0) break;
      param_1 = iVar1;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

