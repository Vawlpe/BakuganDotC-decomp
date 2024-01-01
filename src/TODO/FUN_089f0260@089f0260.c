#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f0260(undefined (*param_1) [12],undefined (*param_2) [12],undefined (*param_3) [16],
                 undefined4 *param_4)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [64];
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 in_V74;
  undefined4 in_V7D;
  
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar6 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  iVar7 = 0;
  if (iVar6 != 0) {
    FUN_089efae0(iVar6);
    iVar7 = iVar6;
  }
  auVar2 = vsat0_q(*param_3);
  auVar2 = vscl_q(auVar2,in_V74);
  auVar2 = vf2iz_q(auVar2,0x17);
  uVar5 = vi2uc_q(auVar2);
  *(undefined4 *)(iVar7 + 0x84) = uVar5;
  *(undefined4 *)(iVar7 + 0x8c) = 5;
  puVar8 = (undefined4 *)(iVar7 + 0x20);
  auVar3 = vmidt_q();
  *puVar8 = auVar3._0_4_;
  *(int *)(iVar7 + 0x24) = auVar3._16_4_;
  *(int *)(iVar7 + 0x28) = auVar3._32_4_;
  *(int *)(iVar7 + 0x2c) = auVar3._48_4_;
  *(int *)(iVar7 + 0x30) = auVar3._4_4_;
  *(int *)(iVar7 + 0x34) = auVar3._20_4_;
  *(int *)(iVar7 + 0x38) = auVar3._36_4_;
  *(int *)(iVar7 + 0x3c) = auVar3._52_4_;
  *(int *)(iVar7 + 0x40) = auVar3._8_4_;
  *(int *)(iVar7 + 0x44) = auVar3._24_4_;
  *(int *)(iVar7 + 0x48) = auVar3._40_4_;
  *(int *)(iVar7 + 0x4c) = auVar3._56_4_;
  *(int *)(iVar7 + 0x50) = auVar3._12_4_;
  *(int *)(iVar7 + 0x54) = auVar3._28_4_;
  *(int *)(iVar7 + 0x58) = auVar3._44_4_;
  *(int *)(iVar7 + 0x5c) = auVar3._60_4_;
  auVar1 = vsub_t(*param_2,*param_1);
  *(int *)(iVar7 + 0x20) = auVar1._0_4_;
  *(int *)(iVar7 + 0x34) = auVar1._4_4_;
  *(int *)(iVar7 + 0x48) = auVar1._8_4_;
  auVar1 = vadd_t(*param_1,*param_2);
  auVar1 = vscl_t(auVar1,0x3f000000);
  *(int *)(iVar7 + 0x50) = auVar1._0_4_;
  *(int *)(iVar7 + 0x54) = auVar1._4_4_;
  *(int *)(iVar7 + 0x58) = auVar1._8_4_;
  *(undefined4 *)(iVar7 + 0x5c) = in_V7D;
  *(undefined4 *)(iVar7 + 0x5c) = 0x3f800000;
  if (param_4 != (undefined4 *)0x0) {
    auVar3._60_4_ = param_4[0xf];
    auVar3._56_4_ = param_4[0xb];
    auVar3._52_4_ = param_4[7];
    auVar3._48_4_ = param_4[3];
    auVar3._44_4_ = param_4[0xe];
    auVar3._40_4_ = param_4[10];
    auVar3._36_4_ = param_4[6];
    auVar3._32_4_ = param_4[2];
    auVar3._28_4_ = param_4[0xd];
    auVar3._24_4_ = param_4[9];
    auVar3._20_4_ = param_4[5];
    auVar3._16_4_ = param_4[1];
    auVar3._12_4_ = param_4[0xc];
    auVar3._8_4_ = param_4[8];
    auVar3._4_4_ = param_4[4];
    auVar3._0_4_ = *param_4;
    auVar4._60_4_ = *(undefined4 *)(iVar7 + 0x5c);
    auVar4._56_4_ = *(undefined4 *)(iVar7 + 0x4c);
    auVar4._52_4_ = *(undefined4 *)(iVar7 + 0x3c);
    auVar4._48_4_ = *(undefined4 *)(iVar7 + 0x2c);
    auVar4._44_4_ = *(undefined4 *)(iVar7 + 0x58);
    auVar4._40_4_ = *(undefined4 *)(iVar7 + 0x48);
    auVar4._36_4_ = *(undefined4 *)(iVar7 + 0x38);
    auVar4._32_4_ = *(undefined4 *)(iVar7 + 0x28);
    auVar4._28_4_ = *(undefined4 *)(iVar7 + 0x54);
    auVar4._24_4_ = *(undefined4 *)(iVar7 + 0x44);
    auVar4._20_4_ = *(undefined4 *)(iVar7 + 0x34);
    auVar4._16_4_ = *(undefined4 *)(iVar7 + 0x24);
    auVar4._12_4_ = *(undefined4 *)(iVar7 + 0x50);
    auVar4._8_4_ = *(undefined4 *)(iVar7 + 0x40);
    auVar4._4_4_ = *(undefined4 *)(iVar7 + 0x30);
    auVar4._0_4_ = *puVar8;
    auVar3 = vmmul_q(auVar3,auVar4);
    *puVar8 = auVar3._0_4_;
    *(int *)(iVar7 + 0x24) = auVar3._16_4_;
    *(int *)(iVar7 + 0x28) = auVar3._32_4_;
    *(int *)(iVar7 + 0x2c) = auVar3._48_4_;
    *(int *)(iVar7 + 0x30) = auVar3._4_4_;
    *(int *)(iVar7 + 0x34) = auVar3._20_4_;
    *(int *)(iVar7 + 0x38) = auVar3._36_4_;
    *(int *)(iVar7 + 0x3c) = auVar3._52_4_;
    *(int *)(iVar7 + 0x40) = auVar3._8_4_;
    *(int *)(iVar7 + 0x44) = auVar3._24_4_;
    *(int *)(iVar7 + 0x48) = auVar3._40_4_;
    *(int *)(iVar7 + 0x4c) = auVar3._56_4_;
    *(int *)(iVar7 + 0x50) = auVar3._12_4_;
    *(int *)(iVar7 + 0x54) = auVar3._28_4_;
    *(int *)(iVar7 + 0x58) = auVar3._44_4_;
    *(int *)(iVar7 + 0x5c) = auVar3._60_4_;
  }
  *(undefined *)(iVar7 + 0x88) = 1;
  return;
}

