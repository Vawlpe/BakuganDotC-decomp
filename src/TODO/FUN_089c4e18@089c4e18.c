#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089c4e18(undefined4 *param_1)

{
  int iVar1;
  float fVar2;
  
  FUN_089bb728(*param_1);
  iVar1 = param_1[0x12];
  fVar2 = (float)param_1[0x10];
  if ((int)param_1[0x13] < 1) {
    param_1[0x11] = iVar1;
    param_1[0x13] = 0;
  }
  else {
    iVar1 = ((((param_1[0x14] - param_1[0x13]) * 100) / (int)param_1[0x14]) *
            (iVar1 - param_1[0x11])) / 100 + param_1[0x11];
  }
  if ((param_1[2] != 2) && (param_1[2] != 6)) {
    fVar2 = fVar2 * (float)iVar1 * 0.01;
  }
  FUN_089bb790(*param_1);
  return fVar2;
}

