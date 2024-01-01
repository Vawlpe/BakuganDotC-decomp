#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e8edc(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined (*pauVar2) [12];
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 in_V7D;
  undefined4 in_V7F;
  
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x10),*param_2);
  pauVar2 = (undefined (*) [12])(param_1 + 0x20);
  fVar3 = (float)vdot_t(*pauVar2,*pauVar2);
  fVar4 = (float)vdot_t(*pauVar2,auVar1);
  uVar5 = vmin_s(-fVar4 / fVar3,in_V7F);
  uVar5 = vmax_s(uVar5,in_V7D);
  return uVar5;
}

