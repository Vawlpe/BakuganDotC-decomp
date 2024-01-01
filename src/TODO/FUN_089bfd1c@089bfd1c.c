#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089bfd1c(float param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 in_V7C;
  
  if (param_2 == 1) {
    uVar1 = vmul_s(param_1 * 1.570796,in_V7C);
    fVar2 = (float)vcos_s(uVar1);
    return (fVar2 - (1.0 - param_1)) + param_1;
  }
  if (param_2 == -1) {
    return 1.0 - param_1;
  }
  if (param_2 == -2) {
    uVar1 = vmul_s(param_1 * 1.570796,in_V7C);
    fVar2 = (float)vcos_s(uVar1);
    return (1.0 - param_1) * 2.0 - fVar2;
  }
  if (param_2 == -3) {
    param_1 = 1.0 - SQRT(1.0 - (param_1 - 1.0) * (param_1 - 1.0));
  }
  return param_1;
}

