#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08816ab8(int param_1)

{
  undefined4 uVar1;
  
  if (*(float *)(param_1 + 8) != 0.0) {
    uVar1 = FUN_089f2178(*(undefined4 *)(param_1 + 4));
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_089ed3b4(*(int *)(param_1 + 0x30),uVar1);
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_089f5084(*(int *)(param_1 + 0x38),uVar1);
    }
  }
  return;
}

