#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089efdc4(undefined4 param_1,undefined4 *param_2,undefined (*param_3) [16],
                 undefined4 *param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [64];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auVar5 [64];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 in_V74;
  
  FUN_089d8634();
  uVar6 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar6);
  FUN_089d866c();
  iVar8 = 0;
  if (iVar7 != 0) {
    FUN_089efae0(iVar7);
    iVar8 = iVar7;
  }
  auVar1 = vsat0_q(*param_3);
  auVar1 = vscl_q(auVar1,in_V74);
  auVar1 = vf2iz_q(auVar1,0x17);
  uVar6 = vi2uc_q(auVar1);
  *(undefined4 *)(iVar8 + 0x84) = uVar6;
  *(undefined4 *)(iVar8 + 0x8c) = 2;
  puVar9 = (undefined4 *)(iVar8 + 0x20);
  auVar2 = vmidt_q();
  *puVar9 = auVar2._0_4_;
  *(int *)(iVar8 + 0x24) = auVar2._16_4_;
  *(int *)(iVar8 + 0x28) = auVar2._32_4_;
  *(int *)(iVar8 + 0x2c) = auVar2._48_4_;
  *(int *)(iVar8 + 0x30) = auVar2._4_4_;
  *(int *)(iVar8 + 0x34) = auVar2._20_4_;
  *(int *)(iVar8 + 0x38) = auVar2._36_4_;
  *(int *)(iVar8 + 0x3c) = auVar2._52_4_;
  *(int *)(iVar8 + 0x40) = auVar2._8_4_;
  *(int *)(iVar8 + 0x44) = auVar2._24_4_;
  *(int *)(iVar8 + 0x48) = auVar2._40_4_;
  *(int *)(iVar8 + 0x4c) = auVar2._56_4_;
  *(int *)(iVar8 + 0x50) = auVar2._12_4_;
  *(int *)(iVar8 + 0x54) = auVar2._28_4_;
  *(int *)(iVar8 + 0x58) = auVar2._44_4_;
  *(int *)(iVar8 + 0x5c) = auVar2._60_4_;
  *(undefined4 *)(iVar8 + 0x48) = param_1;
  *(undefined4 *)(iVar8 + 0x34) = param_1;
  *(undefined4 *)(iVar8 + 0x20) = param_1;
  uVar6 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar8 + 0x50) = *param_2;
  *(undefined4 *)(iVar8 + 0x54) = uVar6;
  *(undefined4 *)(iVar8 + 0x58) = uVar3;
  *(undefined4 *)(iVar8 + 0x5c) = uVar4;
  *(undefined4 *)(iVar8 + 0x5c) = 0x3f800000;
  if (param_4 != (undefined4 *)0x0) {
    auVar2._60_4_ = param_4[0xf];
    auVar2._56_4_ = param_4[0xb];
    auVar2._52_4_ = param_4[7];
    auVar2._48_4_ = param_4[3];
    auVar2._44_4_ = param_4[0xe];
    auVar2._40_4_ = param_4[10];
    auVar2._36_4_ = param_4[6];
    auVar2._32_4_ = param_4[2];
    auVar2._28_4_ = param_4[0xd];
    auVar2._24_4_ = param_4[9];
    auVar2._20_4_ = param_4[5];
    auVar2._16_4_ = param_4[1];
    auVar2._12_4_ = param_4[0xc];
    auVar2._8_4_ = param_4[8];
    auVar2._4_4_ = param_4[4];
    auVar2._0_4_ = *param_4;
    auVar5._60_4_ = *(undefined4 *)(iVar8 + 0x5c);
    auVar5._56_4_ = *(undefined4 *)(iVar8 + 0x4c);
    auVar5._52_4_ = *(undefined4 *)(iVar8 + 0x3c);
    auVar5._48_4_ = *(undefined4 *)(iVar8 + 0x2c);
    auVar5._44_4_ = *(undefined4 *)(iVar8 + 0x58);
    auVar5._40_4_ = *(undefined4 *)(iVar8 + 0x48);
    auVar5._36_4_ = *(undefined4 *)(iVar8 + 0x38);
    auVar5._32_4_ = *(undefined4 *)(iVar8 + 0x28);
    auVar5._28_4_ = *(undefined4 *)(iVar8 + 0x54);
    auVar5._24_4_ = *(undefined4 *)(iVar8 + 0x44);
    auVar5._20_4_ = *(undefined4 *)(iVar8 + 0x34);
    auVar5._16_4_ = *(undefined4 *)(iVar8 + 0x24);
    auVar5._12_4_ = *(undefined4 *)(iVar8 + 0x50);
    auVar5._8_4_ = *(undefined4 *)(iVar8 + 0x40);
    auVar5._4_4_ = *(undefined4 *)(iVar8 + 0x30);
    auVar5._0_4_ = *puVar9;
    auVar2 = vmmul_q(auVar2,auVar5);
    *puVar9 = auVar2._0_4_;
    *(int *)(iVar8 + 0x24) = auVar2._16_4_;
    *(int *)(iVar8 + 0x28) = auVar2._32_4_;
    *(int *)(iVar8 + 0x2c) = auVar2._48_4_;
    *(int *)(iVar8 + 0x30) = auVar2._4_4_;
    *(int *)(iVar8 + 0x34) = auVar2._20_4_;
    *(int *)(iVar8 + 0x38) = auVar2._36_4_;
    *(int *)(iVar8 + 0x3c) = auVar2._52_4_;
    *(int *)(iVar8 + 0x40) = auVar2._8_4_;
    *(int *)(iVar8 + 0x44) = auVar2._24_4_;
    *(int *)(iVar8 + 0x48) = auVar2._40_4_;
    *(int *)(iVar8 + 0x4c) = auVar2._56_4_;
    *(int *)(iVar8 + 0x50) = auVar2._12_4_;
    *(int *)(iVar8 + 0x54) = auVar2._28_4_;
    *(int *)(iVar8 + 0x58) = auVar2._44_4_;
    *(int *)(iVar8 + 0x5c) = auVar2._60_4_;
  }
  *(undefined *)(iVar8 + 0x88) = 1;
  return;
}

