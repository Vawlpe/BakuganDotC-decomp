#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fe974(int param_1,int param_2,char param_3)

{
  *(undefined4 *)(param_1 + 0xf4) = 1;
  *(undefined4 *)(param_1 + 0x104) = 0;
  (**(code **)(*(int *)(param_1 + 0x74) + 0x4c))
            (param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x48));
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 3;
  *(float *)(param_1 + 0xf8) = 1.0 / (float)param_2;
  if (param_3 != '\0') {
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffe;
  }
  return;
}

