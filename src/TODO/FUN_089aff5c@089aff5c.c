#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089aff5c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar1 = FUN_089f2178(0x42480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
    uVar1 = FUN_089f2178(0x43480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
  }
  return;
}

