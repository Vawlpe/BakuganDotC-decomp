#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a13d88(undefined4 *param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = vcst_s(6);
  auVar1 = vscl_t(*param_2,uVar5);
  auVar4 = vcos_t(auVar1);
  auVar3 = vsin_t(auVar1);
  auVar1 = vcrs_t(auVar4,auVar4);
  auVar2 = vcrs_t(auVar3,auVar3);
  uVar5 = vmul_s(auVar1._0_4_,auVar4._0_4_);
  uVar6 = vmul_s(auVar2._0_4_,auVar3._0_4_);
  auVar1 = vmul_t(auVar1,auVar3);
  auVar2 = vmul_t(auVar2,auVar4);
  uVar5 = vadd_s(uVar5,uVar6);
  vpfxt(0,0x11,0x12,3);
  auVar1 = vadd_t(auVar1,auVar2);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = uVar5;
  return param_1;
}

