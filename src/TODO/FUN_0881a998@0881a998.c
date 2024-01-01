#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881a998(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 4);
    while( true ) {
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x20) + 0xc))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x20) + 8),3);
      }
      if (iVar1 == 0) break;
      param_1 = iVar1;
      iVar1 = *(int *)(iVar1 + 4);
    }
  }
  return;
}

