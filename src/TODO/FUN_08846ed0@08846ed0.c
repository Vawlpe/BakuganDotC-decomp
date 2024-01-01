#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08846ed0(float param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  fVar1 = (float)FUN_0889d788();
  uVar2 = vmin_s((fVar1 - param_1) * 0.001,in_V7F);
  fVar1 = (float)vmax_s(uVar2,in_V7D);
  return param_2 + (1.0 - fVar1) * (0.5235988 - param_2);
}

