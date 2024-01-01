#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_089e8750(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined (*pauVar3) [12];
  float fVar4;
  float fVar5;
  float fVar6;
  
  auVar1 = vsub_t(*param_2,*(undefined (*) [12])(param_1 + 0x10));
  pauVar3 = (undefined (*) [12])(param_1 + 0x20);
  auVar2 = vsub_t(auVar1,*pauVar3);
  fVar6 = (float)vdot_t(auVar1,*pauVar3);
  if (fVar6 <= 0.0) {
    fVar6 = (float)vdot_t(auVar1,auVar1);
    return fVar6;
  }
  fVar4 = (float)vdot_t(*pauVar3,*pauVar3);
  if (fVar6 < fVar4) {
    fVar5 = (float)vdot_t(auVar1,auVar1);
    return fVar5 - (fVar6 * fVar6) / fVar4;
  }
  fVar6 = (float)vdot_t(auVar2,auVar2);
  return fVar6;
}

