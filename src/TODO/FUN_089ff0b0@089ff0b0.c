#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ff0b0(int param_1)

{
  *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xf8);
  (**(code **)(*(int *)(param_1 + 0x74) + 0x54))
            (param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x50));
  if (1.0 <= *(float *)(param_1 + 0xfc)) {
    *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
    (**(code **)(*(int *)(param_1 + 0x74) + 0x4c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x48));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

