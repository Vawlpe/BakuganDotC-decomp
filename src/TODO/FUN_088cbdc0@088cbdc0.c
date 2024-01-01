#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cbdc0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  FUN_088cba2c();
  fVar1 = *param_2 * 1.03;
  *param_2 = fVar1;
  if (*(int *)(param_1 + 0x70) == 1) {
    fVar1 = fVar1 + 24.0;
    *param_2 = fVar1;
  }
  fVar2 = param_2[1];
  *param_2 = fVar1 * 1.03;
  *param_2 = fVar1 * 1.03 + 8.0;
  param_2[1] = fVar2 * 1.5;
  param_2[1] = *(float *)(param_1 + 0x54) + 27.0 + fVar2 * 1.5;
  return;
}

