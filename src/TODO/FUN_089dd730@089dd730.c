#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089dd730(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_V05;
  undefined4 in_V06;
  undefined4 in_V09;
  undefined4 in_V0A;
  undefined4 in_V0D;
  undefined4 in_V0E;
  
  uVar3 = vuc2i_s(*param_2);
  uVar4 = vuc2i_s(*param_3);
  auVar1._12_4_ = in_V0D;
  auVar1._8_4_ = in_V09;
  auVar1._4_4_ = in_V05;
  auVar1._0_4_ = uVar3;
  auVar1 = vi2f_q(auVar1,0x1f);
  auVar2._12_4_ = in_V0E;
  auVar2._8_4_ = in_V0A;
  auVar2._4_4_ = in_V06;
  auVar2._0_4_ = uVar4;
  auVar2 = vi2f_q(auVar2,0x1f);
  auVar1 = vmul_q(auVar1,auVar2);
  uVar3 = viim_s(0xff);
  auVar1 = vscl_q(auVar1,uVar3);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar3 = vi2uc_q(auVar1);
  *param_1 = uVar3;
  return param_1;
}

