#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08a29520(undefined4 param_1,undefined4 *param_2,undefined (*param_3) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = vcst_s(6);
  uVar2 = vmul_s(uVar2,param_1);
  uVar3 = vcos_s(uVar2);
  uVar2 = vsin_s(uVar2);
  auVar1 = vscl_t(*param_3,uVar2);
  *param_2 = auVar1._0_4_;
  param_2[1] = auVar1._4_4_;
  param_2[2] = auVar1._8_4_;
  param_2[3] = uVar3;
  return param_2;
}

