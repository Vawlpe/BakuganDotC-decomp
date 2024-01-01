#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_08a13e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = param_2;
  auVar1._0_4_ = param_1;
  auVar1._8_4_ = param_3;
  auVar1._12_4_ = param_4;
  auVar1 = vsat0_q(auVar1);
  uVar2 = viim_s(0xff);
  auVar1 = vscl_q(auVar1,uVar2);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar2 = vi2uc_q(auVar1);
  *param_5 = uVar2;
  return param_5;
}

