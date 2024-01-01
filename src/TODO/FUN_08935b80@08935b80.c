#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08935b80(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_V7C;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_28;
  
  local_28 = 0;
  FUN_089d8634();
  uVar7 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar8 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar7);
  FUN_089d866c();
  iVar9 = local_28;
  if (iVar8 != 0) {
    FUN_089de2e4(iVar8,"12_Edit_man.gmo",0);
    iVar9 = iVar8;
  }
  *(int *)(param_1 + 0x1af0) = iVar9;
  iVar9 = *(int *)(iVar9 + 0x130);
  uVar7 = vmul_s(0,in_V7C);
  auVar3 = vrot_q(uVar7,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar7,2,0,1,0);
  auVar2 = vidt_q();
  *(int *)(iVar9 + 0x80) = auVar3._0_4_;
  *(int *)(iVar9 + 0x84) = auVar3._4_4_;
  *(int *)(iVar9 + 0x88) = auVar3._8_4_;
  *(int *)(iVar9 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar9 + 0x90) = auVar1._0_4_;
  *(int *)(iVar9 + 0x94) = auVar1._4_4_;
  *(int *)(iVar9 + 0x98) = auVar1._8_4_;
  *(int *)(iVar9 + 0x9c) = auVar1._12_4_;
  *(int *)(iVar9 + 0xa0) = auVar4._0_4_;
  *(int *)(iVar9 + 0xa4) = auVar4._4_4_;
  *(int *)(iVar9 + 0xa8) = auVar4._8_4_;
  *(int *)(iVar9 + 0xac) = auVar4._12_4_;
  *(int *)(iVar9 + 0xb0) = auVar2._0_4_;
  *(int *)(iVar9 + 0xb4) = auVar2._4_4_;
  *(int *)(iVar9 + 0xb8) = auVar2._8_4_;
  *(int *)(iVar9 + 0xbc) = auVar2._12_4_;
  iVar9 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x130);
  auVar1 = vscl_q(*(undefined (*) [16])(iVar9 + 0x80),0x3f800000);
  auVar2 = vscl_q(*(undefined (*) [16])(iVar9 + 0x90),0x3f800000);
  auVar3 = vscl_q(*(undefined (*) [16])(iVar9 + 0xa0),0x3f800000);
  *(int *)*(undefined (*) [16])(iVar9 + 0x80) = auVar1._0_4_;
  *(int *)(iVar9 + 0x84) = auVar1._4_4_;
  *(int *)(iVar9 + 0x88) = auVar1._8_4_;
  *(int *)(iVar9 + 0x8c) = auVar1._12_4_;
  *(int *)(iVar9 + 0x90) = auVar2._0_4_;
  *(int *)(iVar9 + 0x94) = auVar2._4_4_;
  *(int *)(iVar9 + 0x98) = auVar2._8_4_;
  *(int *)(iVar9 + 0x9c) = auVar2._12_4_;
  *(int *)(iVar9 + 0xa0) = auVar3._0_4_;
  *(int *)(iVar9 + 0xa4) = auVar3._4_4_;
  *(int *)(iVar9 + 0xa8) = auVar3._8_4_;
  *(int *)(iVar9 + 0xac) = auVar3._12_4_;
  *(undefined4 *)(*(int *)(param_1 + 0x1af0) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1af0) + 0x24) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1af0) + 0x28) = 0;
  iVar9 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
  (**(code **)(iVar9 + 0x34))(0x3f000000,*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar9 + 0x30))
  ;
  *(undefined *)(*(int *)(param_1 + 0x1af0) + 0xbc) = 1;
  local_40 = 0x3ecccccd;
  local_3c = 0x3ecccccd;
  local_38 = 0x3ecccccd;
  local_34 = 0x3f800000;
  FUN_089e0344(0x41000000,*(undefined4 *)(param_1 + 0x1af0),&local_40,0);
  iVar9 = *(int *)(param_1 + 0x1af0);
  iVar8 = *(int *)(iVar9 + 0x130);
  uVar7 = *(undefined4 *)(iVar9 + 0x24);
  uVar5 = *(undefined4 *)(iVar9 + 0x28);
  uVar6 = *(undefined4 *)(iVar9 + 0x2c);
  *(undefined4 *)(iVar8 + 0xb0) = *(undefined4 *)(iVar9 + 0x20);
  *(undefined4 *)(iVar8 + 0xb4) = uVar7;
  *(undefined4 *)(iVar8 + 0xb8) = uVar5;
  *(undefined4 *)(iVar8 + 0xbc) = uVar6;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1af0) + 0x130) + 0xbc) = 0x3f800000;
  *(undefined4 *)(*(int *)(param_1 + 0x1af0) + 0x6c) = 0x3f800000;
  uVar7 = FUN_089d9674();
  FUN_089d9914(uVar7,"12_editm_see_gauntlet.gmo");
  uVar7 = FUN_089d9674();
  FUN_089d9914(uVar7,"12_editm_see_gauntlet_push.gmo");
  FUN_089e0860(*(undefined4 *)(param_1 + 0x1af0));
  FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(param_1 + 0x1af0),"12_editm_see_gauntlet",1);
  iVar9 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
  (**(code **)(iVar9 + 0x34))(0x3f000000,*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar9 + 0x30))
  ;
  iVar9 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
  (**(code **)(iVar9 + 0x3c))(*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar9 + 0x38));
  return;
}

