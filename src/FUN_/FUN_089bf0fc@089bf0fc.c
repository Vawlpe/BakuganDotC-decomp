#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf0fc(undefined4 param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 in_V7D;
  
  auVar1 = vsub_t(*param_2,*(undefined (*) [12])(DAT_08ac5c90 + 0x50));
  uVar2 = vdot_t(auVar1,auVar1);
  uVar2 = vrsq_s(uVar2);
  uVar2 = vmul_s(uVar2,param_1);
  auVar1 = vscl_t(auVar1,uVar2);
  auVar1 = vadd_t(auVar1,*param_2);
  DAT_08af8260 = auVar1._0_4_;
  DAT_08af8264 = auVar1._4_4_;
  DAT_08af8268 = auVar1._8_4_;
  DAT_08af826c = in_V7D;
  return;
}

