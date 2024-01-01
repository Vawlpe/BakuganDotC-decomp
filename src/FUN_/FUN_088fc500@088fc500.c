#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fc500(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                 int param_6,undefined (*param_7) [12])

{
  undefined auVar1 [12];
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_6 + 0x40),*param_7);
  uVar3 = vdot_t(auVar1,auVar1);
  fVar4 = (float)vsqrt_s(uVar3);
  fVar2 = param_2;
  if ((param_4 <= fVar4) && (fVar2 = param_3, fVar4 <= param_5)) {
    fVar2 = (fVar4 - param_4) / (param_5 - param_4);
    fVar2 = param_2 * (1.0 - fVar2) + param_3 * fVar2;
  }
  FUN_088fc408(param_1,fVar2,param_6,param_7);
  return;
}

