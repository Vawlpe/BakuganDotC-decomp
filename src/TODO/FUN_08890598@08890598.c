#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08890598(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    fVar1 = (float)FUN_088904b4(param_1,param_2,param_3);
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    return fVar1 * 57.29578 * 2.0;
  }
  return 0.0;
}

