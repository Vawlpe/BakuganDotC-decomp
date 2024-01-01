#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08865bf8(undefined4 param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(*(int *)(param_2 + 0x4bc) + 0x38);
  fVar1 = (float)FUN_08862cd8(param_1,fVar2);
  return fVar2 * fVar1;
}

