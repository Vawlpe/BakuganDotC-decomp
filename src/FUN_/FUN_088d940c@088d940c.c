#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088d940c(float param_1,undefined4 param_2,undefined (*param_3) [16])

{
  undefined auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  
  iVar2 = FUN_088e1948();
  auVar1 = vsub_q(*(undefined (*) [16])(iVar2 + 0x20),*param_3);
  uVar3 = vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar4 = (float)vsqrt_s(uVar3);
  return fVar4 <= param_1;
}

