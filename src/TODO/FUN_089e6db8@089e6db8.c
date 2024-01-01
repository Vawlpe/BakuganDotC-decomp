#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e6db8(undefined (**param_1) [12],undefined4 *param_2)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined (*pauVar3) [12];
  undefined4 uVar4;
  
  pauVar3 = *param_1;
  uVar2 = *(undefined4 *)pauVar3[1];
  auVar1 = vadd_t(*pauVar3,*(undefined (*) [12])(pauVar3[1] + 4));
  auVar1 = vadd_t(auVar1,*(undefined (*) [12])(pauVar3[2] + 8));
  auVar1 = vadd_t(auVar1,pauVar3[4]);
  auVar1 = vadd_t(auVar1,*(undefined (*) [12])(pauVar3[5] + 4));
  auVar1 = vadd_t(auVar1,*(undefined (*) [12])(pauVar3[6] + 8));
  auVar1 = vadd_t(auVar1,pauVar3[8]);
  auVar1 = vadd_t(auVar1,*(undefined (*) [12])(pauVar3[9] + 4));
  uVar4 = vfim_s(0x3000);
  auVar1 = vscl_t(auVar1,uVar4);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = uVar2;
  param_2[3] = 0;
  return;
}

