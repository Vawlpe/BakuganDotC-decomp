#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a324e8(undefined4 param_1,undefined4 *param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 in_V74;
  
  uVar2 = vmul_s(param_2[3],param_1);
  auVar1._12_4_ = uVar2;
  auVar1._8_4_ = param_2[2];
  auVar1._4_4_ = param_2[1];
  auVar1._0_4_ = *param_2;
  auVar1 = vsat0_q(auVar1);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar2 = vi2uc_q(auVar1);
  return uVar2;
}

