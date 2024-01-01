#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_0888a3a0(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1000.0;
  if (*(int *)(param_1 + 0x8c) == 1) {
    fVar2 = *(float *)(param_1 + 0x70);
    fVar1 = *(float *)(*(int *)(*(int *)(param_1 + 0x28) + 0x4bc) + 0x90) * 1.5;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
  }
  return fVar2;
}

