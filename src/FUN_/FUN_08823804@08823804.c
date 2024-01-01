#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08823804(int param_1)

{
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  (**(code **)(*(int *)(param_1 + 0x14) + 0x14))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x10));
  return;
}

