#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895041c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_089f2178(0x42480000);
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(param_1 + 0x50) == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x18);
    }
    else {
      FUN_089f8a64(param_1 + 0x54);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
    }
    FUN_089f5084(uVar2,uVar1);
  }
  return;
}

