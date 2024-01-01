#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08887cdc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_08887b94(param_1,param_2,param_1);
  iVar1 = FUN_08887a90(param_1);
  fVar3 = (float)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + 4.294967e+09;
  }
  return fVar2 / fVar3;
}

