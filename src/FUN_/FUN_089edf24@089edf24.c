#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089edf24(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_089edde8(param_1,1);
  *(undefined *)(param_1 + 1) = 0;
  (**(code **)(*(int *)(param_1 + 0x50) + 0x1c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x50) + 0x18));
  return;
}

