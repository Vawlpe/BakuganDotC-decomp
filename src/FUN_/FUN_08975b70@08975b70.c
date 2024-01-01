#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08975b70(int param_1,char param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
  
  memset_jak(param_1 + 0x524,0,0x28);
  if (param_2 == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x20) = 0x42200000;
    *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x544) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0;
    iVar8 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
    uVar10 = vmul_s(0,in_V7C);
    auVar4 = vrot_q(uVar10,1,0,3,0);
    auVar1 = vidt_q();
    auVar5 = vrot_q(uVar10,2,0,1,0);
    auVar2 = vidt_q();
    *(int *)(iVar8 + 0x80) = auVar4._0_4_;
    *(int *)(iVar8 + 0x84) = auVar4._4_4_;
    *(int *)(iVar8 + 0x88) = auVar4._8_4_;
    *(int *)(iVar8 + 0x8c) = auVar4._12_4_;
    *(int *)(iVar8 + 0x90) = auVar1._0_4_;
    *(int *)(iVar8 + 0x94) = auVar1._4_4_;
    *(int *)(iVar8 + 0x98) = auVar1._8_4_;
    *(int *)(iVar8 + 0x9c) = auVar1._12_4_;
    *(int *)(iVar8 + 0xa0) = auVar5._0_4_;
    *(int *)(iVar8 + 0xa4) = auVar5._4_4_;
    *(int *)(iVar8 + 0xa8) = auVar5._8_4_;
    *(int *)(iVar8 + 0xac) = auVar5._12_4_;
    *(int *)(iVar8 + 0xb0) = auVar2._0_4_;
    *(int *)(iVar8 + 0xb4) = auVar2._4_4_;
    *(int *)(iVar8 + 0xb8) = auVar2._8_4_;
    *(int *)(iVar8 + 0xbc) = auVar2._12_4_;
    iVar8 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
    uVar10 = vmul_s(0x3f000000,in_V7C);
    auVar1 = vidt_q();
    auVar4 = vrot_q(uVar10,0,1,2,0);
    auVar5 = vrot_q(uVar10,0,3,1,0);
    auVar2 = vidt_q();
    auVar3._48_16_ = auVar2;
    auVar3._44_4_ = auVar5._12_4_;
    auVar3._40_4_ = auVar5._8_4_;
    auVar3._36_4_ = auVar5._4_4_;
    auVar3._32_4_ = auVar5._0_4_;
    auVar3._28_4_ = auVar4._12_4_;
    auVar3._24_4_ = auVar4._8_4_;
    auVar3._20_4_ = auVar4._4_4_;
    auVar3._16_4_ = auVar4._0_4_;
    auVar3._12_4_ = auVar1._12_4_;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3._4_4_ = auVar1._4_4_;
    auVar3._0_4_ = auVar1._0_4_;
    auVar3 = vmmul_q(*(undefined (*) [64])(iVar8 + 0x80),auVar3);
    *(int *)*(undefined (*) [64])(iVar8 + 0x80) = auVar3._0_4_;
    *(int *)(iVar8 + 0x84) = auVar3._4_4_;
    *(int *)(iVar8 + 0x88) = auVar3._8_4_;
    *(int *)(iVar8 + 0x8c) = auVar3._12_4_;
    *(int *)(iVar8 + 0x90) = auVar3._16_4_;
    *(int *)(iVar8 + 0x94) = auVar3._20_4_;
    *(int *)(iVar8 + 0x98) = auVar3._24_4_;
    *(int *)(iVar8 + 0x9c) = auVar3._28_4_;
    *(int *)(iVar8 + 0xa0) = auVar3._32_4_;
    *(int *)(iVar8 + 0xa4) = auVar3._36_4_;
    *(int *)(iVar8 + 0xa8) = auVar3._40_4_;
    *(int *)(iVar8 + 0xac) = auVar3._44_4_;
    *(int *)(iVar8 + 0xb0) = auVar3._48_4_;
    *(int *)(iVar8 + 0xb4) = auVar3._52_4_;
    *(int *)(iVar8 + 0xb8) = auVar3._56_4_;
    *(int *)(iVar8 + 0xbc) = auVar3._60_4_;
    iVar8 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
    auVar1 = vscl_q(*(undefined (*) [16])(iVar8 + 0x80),0x3f99999a);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar8 + 0x90),0x3f99999a);
    auVar4 = vscl_q(*(undefined (*) [16])(iVar8 + 0xa0),0x3f99999a);
    *(int *)*(undefined (*) [16])(iVar8 + 0x80) = auVar1._0_4_;
    *(int *)(iVar8 + 0x84) = auVar1._4_4_;
    *(int *)(iVar8 + 0x88) = auVar1._8_4_;
    *(int *)(iVar8 + 0x8c) = auVar1._12_4_;
    *(int *)(iVar8 + 0x90) = auVar2._0_4_;
    *(int *)(iVar8 + 0x94) = auVar2._4_4_;
    *(int *)(iVar8 + 0x98) = auVar2._8_4_;
    *(int *)(iVar8 + 0x9c) = auVar2._12_4_;
    *(int *)(iVar8 + 0xa0) = auVar4._0_4_;
    *(int *)(iVar8 + 0xa4) = auVar4._4_4_;
    *(int *)(iVar8 + 0xa8) = auVar4._8_4_;
    *(int *)(iVar8 + 0xac) = auVar4._12_4_;
    iVar8 = *(int *)(param_1 + 0x51c);
    iVar9 = *(int *)(iVar8 + 0x130);
    uVar10 = *(undefined4 *)(iVar8 + 0x24);
    uVar6 = *(undefined4 *)(iVar8 + 0x28);
    uVar7 = *(undefined4 *)(iVar8 + 0x2c);
    *(undefined4 *)(iVar9 + 0xb0) = *(undefined4 *)(iVar8 + 0x20);
    *(undefined4 *)(iVar9 + 0xb4) = uVar10;
    *(undefined4 *)(iVar9 + 0xb8) = uVar6;
    *(undefined4 *)(iVar9 + 0xbc) = uVar7;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x51c) + 0x130) + 0xbc) = 0x3f800000;
    iVar8 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar8 + 0x34))
              (0x42c80000,*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar8 + 0x30));
    iVar8 = *(int *)(*(int *)(param_1 + 0x51c) + 0x14);
    (**(code **)(iVar8 + 0x3c))(*(int *)(param_1 + 0x51c) + (int)*(short *)(iVar8 + 0x38));
  }
  else {
    *(undefined4 *)(param_1 + 0x544) = 0x3f800000;
    *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x540) = 0;
  }
  return;
}

