#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089e8fc4(int param_1,int param_2)

{
  undefined auVar1 [16];
  float fVar2;
  float fVar3;
  
  auVar1 = vsub_q(*(undefined (*) [16])(param_1 + 0x10),*(undefined (*) [16])(param_2 + 0x10));
  fVar3 = (float)vdot_t(auVar1._0_12_,auVar1._0_12_);
  fVar2 = *(float *)(param_1 + 0x20) + *(float *)(param_2 + 0x20);
  return fVar3 <= fVar2 * fVar2;
}

