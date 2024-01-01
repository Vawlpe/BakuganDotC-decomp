#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089dd63c(undefined4 *param_1,undefined (*param_2) [16],int param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined auVar8 [16];
  
  uVar4 = *(undefined4 *)param_2[2];
  uVar5 = *(undefined4 *)(param_2[2] + 4);
  uVar6 = *(undefined4 *)(param_2[2] + 8);
  uVar7 = *(undefined4 *)(param_2[2] + 0xc);
  auVar1 = vscl_q(*param_2,*(undefined4 *)(param_3 + 8));
  auVar2 = vscl_q(param_2[1],*(undefined4 *)(param_3 + 0xc));
  vpfxd(5,5,1,1);
  auVar3 = vidt_q();
  auVar8._8_8_ = *(undefined8 *)param_2[1];
  auVar8._4_4_ = *(undefined4 *)(*param_2 + 4);
  auVar8._0_4_ = *(undefined4 *)*param_2;
  auVar3 = vtfm4_q(auVar8,auVar3);
  *param_1 = auVar1._0_4_;
  param_1[1] = auVar1._4_4_;
  param_1[2] = auVar1._8_4_;
  param_1[3] = auVar1._12_4_;
  param_1[4] = auVar2._0_4_;
  param_1[5] = auVar2._4_4_;
  param_1[6] = auVar2._8_4_;
  param_1[7] = auVar2._12_4_;
  param_1[8] = uVar4;
  param_1[9] = uVar5;
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = auVar3._0_4_;
  param_1[0xd] = auVar3._4_4_;
  param_1[0xe] = auVar3._8_4_;
  param_1[0xf] = auVar3._12_4_;
  return param_1;
}

