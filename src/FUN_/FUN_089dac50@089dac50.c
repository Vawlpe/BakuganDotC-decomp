#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dac50(undefined4 param_1,int param_2,int param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar6 [16];
  undefined auVar8 [16];
  undefined4 in_V00;
  undefined4 uVar9;
  undefined auVar5 [16];
  undefined auVar7 [16];
  
  auVar1._12_4_ = *(undefined4 *)(param_2 + 0x30);
  auVar1._8_4_ = *(undefined4 *)(param_2 + 0x24);
  auVar1._4_4_ = *(undefined4 *)(param_2 + 0x18);
  auVar1._0_4_ = *(undefined4 *)(param_2 + 0xc);
  auVar2._12_4_ = *(undefined4 *)(param_2 + 0x28);
  auVar2._8_4_ = *(undefined4 *)(param_2 + 0x1c);
  auVar2._4_4_ = *(undefined4 *)(param_2 + 0x10);
  auVar2._0_4_ = *(undefined4 *)(param_2 + 4);
  auVar1 = vadd_q(auVar1,auVar2);
  auVar4._12_4_ = *(undefined4 *)(param_3 + 0x2c);
  auVar4._8_4_ = *(undefined4 *)(param_3 + 0x20);
  auVar4._4_4_ = *(undefined4 *)(param_3 + 0x14);
  auVar4._0_4_ = *(undefined4 *)(param_3 + 8);
  auVar5._12_4_ = *(undefined4 *)(param_3 + 0x28);
  auVar5._8_4_ = *(undefined4 *)(param_3 + 0x1c);
  auVar5._4_4_ = *(undefined4 *)(param_3 + 0x10);
  auVar5._0_4_ = *(undefined4 *)(param_3 + 4);
  auVar2 = vadd_q(auVar4,auVar5);
  uVar9 = vocp_s(param_1);
  vpfxt(4,4,4,4);
  vscl_q(auVar1,in_V00);
  vpfxt(4,4,4,4);
  vscl_q(auVar2,in_V00);
  uVar3 = vmul_p(CONCAT44(param_1,uVar9),CONCAT44(param_1,uVar9));
  vpfxs(0,1,1,0);
  vpfxt(2,3,2,3);
  auVar6._8_8_ = uVar3;
  auVar6._4_4_ = param_1;
  auVar6._0_4_ = uVar9;
  auVar7._8_8_ = uVar3;
  auVar7._4_4_ = param_1;
  auVar7._0_4_ = uVar9;
  auVar1 = vmul_q(auVar6,auVar7);
  auVar8._12_4_ = *(undefined4 *)(param_3 + 0x10);
  auVar8._8_4_ = *(undefined4 *)(param_3 + 4);
  auVar8._4_4_ = *(undefined4 *)(param_2 + 0x10);
  auVar8._0_4_ = *(undefined4 *)(param_2 + 4);
  vtfm4_q(auVar8,auVar1);
  return;
}

