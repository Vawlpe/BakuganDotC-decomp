#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ff14c(int param_1)

{
  float fVar1;
  
  fVar1 = -*(float *)(param_1 + 0xf8);
  if ((*(uint *)(param_1 + 0x9c) & 8) == 0) {
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0xf8);
  }
  else {
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + fVar1;
  }
  (**(code **)(*(int *)(param_1 + 0x74) + 0x54))
            (fVar1,param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x50));
  if (*(float *)(param_1 + 0xfc) <= 0.0) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    (**(code **)(*(int *)(param_1 + 0x74) + 0x4c))
              (0,param_1 + *(short *)(*(int *)(param_1 + 0x74) + 0x48));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffffc;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  return;
}

