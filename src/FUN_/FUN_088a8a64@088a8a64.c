#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a8a64(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_V7C;
  undefined4 local_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  float local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_28;
  
  FUN_088ab2d0();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2864;
  FUN_088a8f2c(&local_40,*(int *)(param_1 + 0x130) + 0xb0,0x3fbf2500);
  iVar7 = FUN_088a9614(param_1);
  local_3c = local_3c + -*(float *)(iVar7 + 4);
  fVar8 = 1.570796 - *(float *)(param_3 + 0xc);
  if (3.141593 < fVar8) {
    fVar8 = fVar8 - 6.283185;
  }
  else if (fVar8 <= -3.141593) {
    fVar8 = fVar8 + 6.283185;
  }
  *(float *)(param_1 + 0x34) = fVar8;
  iVar7 = *(int *)(param_1 + 0x130);
  auVar3 = vmidt_q();
  uVar10 = vmov_s(*(undefined4 *)(param_1 + 0x40));
  uVar11 = vmov_s(*(undefined4 *)(param_1 + 0x44));
  uVar12 = vmov_s(*(undefined4 *)(param_1 + 0x48));
  uVar9 = vmul_s(fVar8,in_V7C);
  auVar4 = vrot_q(uVar9,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar9,2,0,1,0);
  auVar2 = vidt_q();
  auVar6._60_4_ = auVar3._60_4_;
  auVar6._56_4_ = auVar3._44_4_;
  auVar6._52_4_ = auVar3._28_4_;
  auVar6._48_4_ = auVar3._12_4_;
  auVar6._44_4_ = auVar3._56_4_;
  auVar6._40_4_ = uVar12;
  auVar6._36_4_ = auVar3._24_4_;
  auVar6._32_4_ = auVar3._8_4_;
  auVar6._28_4_ = auVar3._52_4_;
  auVar6._24_4_ = auVar3._36_4_;
  auVar6._20_4_ = uVar11;
  auVar6._16_4_ = auVar3._4_4_;
  auVar6._12_4_ = auVar3._48_4_;
  auVar6._8_4_ = auVar3._32_4_;
  auVar6._4_4_ = auVar3._16_4_;
  auVar6._0_4_ = uVar10;
  auVar3._48_16_ = auVar2;
  auVar3._44_4_ = auVar5._12_4_;
  auVar3._40_4_ = auVar5._8_4_;
  auVar3._36_4_ = auVar5._4_4_;
  auVar3._32_4_ = auVar5._0_4_;
  auVar3._28_4_ = auVar1._12_4_;
  auVar3._24_4_ = auVar1._8_4_;
  auVar3._20_4_ = auVar1._4_4_;
  auVar3._16_4_ = auVar1._0_4_;
  auVar3._12_4_ = auVar4._12_4_;
  auVar3._8_4_ = auVar4._8_4_;
  auVar3._4_4_ = auVar4._4_4_;
  auVar3._0_4_ = auVar4._0_4_;
  auVar3 = vmmul_q(auVar6,auVar3);
  *(int *)(iVar7 + 0x80) = auVar3._0_4_;
  *(int *)(iVar7 + 0x84) = auVar3._4_4_;
  *(int *)(iVar7 + 0x88) = auVar3._8_4_;
  *(int *)(iVar7 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar7 + 0x90) = auVar3._16_4_;
  *(int *)(iVar7 + 0x94) = auVar3._20_4_;
  *(int *)(iVar7 + 0x98) = auVar3._24_4_;
  *(int *)(iVar7 + 0x9c) = auVar3._28_4_;
  *(int *)(iVar7 + 0xa0) = auVar3._32_4_;
  *(int *)(iVar7 + 0xa4) = auVar3._36_4_;
  *(int *)(iVar7 + 0xa8) = auVar3._40_4_;
  *(int *)(iVar7 + 0xac) = auVar3._44_4_;
  *(int *)(iVar7 + 0xb0) = auVar3._48_4_;
  *(int *)(iVar7 + 0xb4) = auVar3._52_4_;
  *(int *)(iVar7 + 0xb8) = auVar3._56_4_;
  *(int *)(iVar7 + 0xbc) = auVar3._60_4_;
  *(float *)(param_1 + 0x24) = local_3c;
  iVar7 = *(int *)(param_1 + 0x130);
  uVar9 = *(undefined4 *)(param_1 + 0x24);
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  uVar11 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar7 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(iVar7 + 0xb4) = uVar9;
  *(undefined4 *)(iVar7 + 0xb8) = uVar10;
  *(undefined4 *)(iVar7 + 0xbc) = uVar11;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 800) = 0;
  local_28 = 0;
  FUN_089d8634();
  uVar9 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(0x680,0,0);
  FUN_089d816c(uVar9);
  FUN_089d866c();
  if (iVar7 != 0) {
    local_50 = local_40;
    fStack_4c = local_3c;
    uStack_48 = uStack_38;
    uStack_44 = uStack_34;
    FUN_0885ba48(iVar7,&local_50);
    local_28 = iVar7;
  }
  *(int *)(param_1 + 800) = local_28;
  *(undefined *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x21c) = param_4;
  return param_1;
}

