#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089df53c(float param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_089dff38();
  fVar2 = (float)FUN_089df51c(param_2);
  FUN_089dffa0((float)(int)(fVar2 * param_1),param_2);
  fVar2 = (float)FUN_089df51c(param_2);
  if (fVar2 != 0.0) {
    return fVar1 / fVar2;
  }
  return 1.0;
}

