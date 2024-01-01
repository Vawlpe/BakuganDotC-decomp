#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08865bbc(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_2 + 0x5b8) == 3) {
    fVar2 = *(float *)(*(int *)(param_2 + 0x4bc) + 0x30);
  }
  else {
    fVar2 = *(float *)(*(int *)(param_2 + 0x4bc) + 0x2c);
  }
  fVar1 = (float)FUN_08862cd8(param_1,fVar2);
  return fVar2 * fVar1;
}

