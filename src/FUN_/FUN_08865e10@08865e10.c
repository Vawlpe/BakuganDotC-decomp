#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08865e10(float param_1,float param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  
  iVar1 = 0;
  fVar2 = 0.0;
  if (0 < param_4) {
    do {
      fVar2 = param_1 + fVar2;
      iVar1 = iVar1 + 1;
      param_1 = param_1 - param_2;
    } while (iVar1 < param_4);
  }
  return fVar2;
}

