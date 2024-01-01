#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e34f0(int param_1,int param_2,undefined (*param_3) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 in_V7D;
  undefined4 uVar3;
  
  uVar2 = FUN_089e35f8();
  FUN_089bee7c(param_2,uVar2,param_3);
  auVar1 = vsub_t(*(undefined (*) [12])(param_1 + 0x50),*param_3);
  uVar2 = vdot_t(auVar1,auVar1);
  uVar3 = vcmp_s(8,uVar2,*(undefined4 *)*param_3);
  vrsq_s(uVar2);
  uVar2 = vcmovt_s(in_V7D,(byte)uVar3 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar1,uVar2);
  uVar2 = vdot_t(*(undefined (*) [12])(param_1 + 0x70),auVar1);
  *(undefined4 *)(param_2 + 8) = uVar2;
  return;
}

