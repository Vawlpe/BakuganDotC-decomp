#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c90fc(int param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [36];
  undefined auVar4 [16];
  int iVar5;
  undefined (*pauVar6) [12];
  undefined4 uVar7;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar5 = FUN_088e1948();
  local_a0 = *(undefined4 *)(iVar5 + 0x20);
  uStack_9c = *(undefined4 *)(iVar5 + 0x24);
  uStack_98 = *(undefined4 *)(iVar5 + 0x28);
  uStack_94 = *(undefined4 *)(iVar5 + 0x2c);
  FUN_089dedf8(iVar5,&local_b0,"Bip01_Head");
  local_a0 = local_b0;
  uStack_9c = local_ac;
  uStack_98 = local_a8;
  uStack_94 = local_a4;
  pauVar6 = (undefined (*) [12])(param_1 + 0x10);
  auVar1._4_4_ = local_ac;
  auVar1._0_4_ = local_b0;
  auVar1._8_4_ = local_a8;
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])(param_2 + 0x20));
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(param_1 + 0x14) = auVar1._4_4_;
  *(int *)(param_1 + 0x18) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x1c) = local_a4;
  auVar1 = vscl_t(*pauVar6,0x3f000000);
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(param_1 + 0x14) = auVar1._4_4_;
  *(int *)(param_1 + 0x18) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x1c) = in_V7D;
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  auVar1 = vadd_t(*pauVar6,*(undefined (*) [12])(param_2 + 0x20));
  *(int *)*pauVar6 = auVar1._0_4_;
  *(int *)(param_1 + 0x14) = auVar1._4_4_;
  *(int *)(param_1 + 0x18) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  uVar7 = vmul_s(*(undefined4 *)(iVar5 + 0x34),in_V7C);
  auVar2 = vrot_q(uVar7,1,0,3,0);
  local_80 = auVar2._0_4_;
  local_70 = auVar2._4_4_;
  local_60 = auVar2._8_4_;
  auVar2 = vidt_q();
  uStack_7c = auVar2._0_4_;
  uStack_6c = auVar2._4_4_;
  uStack_5c = auVar2._8_4_;
  auVar2 = vrot_q(uVar7,2,0,1,0);
  uStack_78 = auVar2._0_4_;
  uStack_68 = auVar2._4_4_;
  uStack_58 = auVar2._8_4_;
  auVar2 = vidt_q();
  uStack_44 = auVar2._12_4_;
  auVar1 = vzero_t();
  uStack_74 = auVar1._0_4_;
  uStack_64 = auVar1._4_4_;
  uStack_54 = auVar1._8_4_;
  auVar3._32_4_ = uStack_58;
  auVar3._28_4_ = uStack_5c;
  auVar3._24_4_ = local_60;
  auVar3._20_4_ = uStack_68;
  auVar3._16_4_ = uStack_6c;
  auVar3._12_4_ = local_70;
  auVar3._8_4_ = uStack_78;
  auVar3._4_4_ = uStack_7c;
  auVar3._0_4_ = local_80;
  auVar1 = vtfm3_t(auVar3,auVar2._0_12_);
  auVar1 = vneg_t(auVar1);
  local_50 = auVar1._0_4_;
  uStack_4c = auVar1._4_4_;
  uStack_48 = auVar1._8_4_;
  auVar2._12_4_ = uStack_6c;
  auVar2._8_4_ = local_70;
  auVar4._8_4_ = 0x3ecccccd;
  auVar4._0_8_ = 0xbf19999a;
  auVar4._12_4_ = 0;
  auVar2._4_4_ = uStack_7c;
  auVar2._0_4_ = local_80;
  auVar2 = vtfm4_q(auVar2,auVar4);
  auVar1 = vscl_t(auVar2._0_12_,0x41f00000);
  local_90 = auVar1._0_4_;
  uStack_8c = auVar1._4_4_;
  uStack_88 = auVar1._8_4_;
  local_a4 = *(undefined4 *)(param_1 + 0x1c);
  auVar1 = vadd_t(*pauVar6,auVar1);
  local_b0 = auVar1._0_4_;
  local_ac = auVar1._4_4_;
  local_a8 = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x20) = local_b0;
  *(undefined4 *)(param_1 + 0x24) = local_ac;
  *(undefined4 *)(param_1 + 0x28) = local_a8;
  *(undefined4 *)(param_1 + 0x2c) = local_a4;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + 5.0;
  FUN_088ccf50(param_1,param_2);
  return;
}
