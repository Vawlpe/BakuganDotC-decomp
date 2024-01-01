#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b30e4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_089f2178(0x442f0000);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_089f59e8(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),
                 *(int *)(param_1 + 0x18),0);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar1);
  }
  return;
}

