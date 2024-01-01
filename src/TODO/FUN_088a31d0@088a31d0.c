#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a31d0(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  undefined auVar7 [64];
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_V7C;
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
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  fVar9 = *(float *)(param_1 + 0x3f0) + 0.03;
  *(float *)(param_1 + 0x3f0) = fVar9;
  if (3.141593 < fVar9) {
    *(float *)(param_1 + 0x3f0) = *(float *)(param_1 + 0x3f0) - 6.283185;
  }
  else if (*(float *)(param_1 + 0x3f0) <= -3.141593) {
    *(float *)(param_1 + 0x3f0) = *(float *)(param_1 + 0x3f0) + 6.283185;
  }
  uVar10 = vmul_s(*(undefined4 *)(param_1 + 0x3f0),in_V7C);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar10,0,1,2,0);
  auVar5 = vrot_q(uVar10,0,3,1,0);
  auVar2 = vidt_q();
  auVar7._4_4_ = uStack_7c;
  auVar7._0_4_ = local_80;
  auVar7._8_4_ = uStack_78;
  auVar7._12_4_ = uStack_74;
  auVar7._16_4_ = local_70;
  auVar7._20_4_ = uStack_6c;
  auVar7._24_4_ = uStack_68;
  auVar7._28_4_ = uStack_64;
  auVar7._32_4_ = local_60;
  auVar7._36_4_ = uStack_5c;
  auVar7._40_4_ = uStack_58;
  auVar7._44_4_ = uStack_54;
  auVar7._48_4_ = local_50;
  auVar7._52_4_ = uStack_4c;
  auVar7._56_4_ = uStack_48;
  auVar7._60_4_ = uStack_44;
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
  auVar3 = vmmul_q(auVar7,auVar3);
  uVar10 = vmul_s(*(undefined4 *)(param_1 + 0x3f0),in_V7C);
  auVar4 = vrot_q(uVar10,1,2,0,0);
  auVar5 = vrot_q(uVar10,3,1,0,0);
  auVar1 = vidt_q();
  auVar2 = vidt_q();
  auVar6._48_16_ = auVar2;
  auVar6._44_4_ = auVar1._12_4_;
  auVar6._40_4_ = auVar1._8_4_;
  auVar6._36_4_ = auVar1._4_4_;
  auVar6._32_4_ = auVar1._0_4_;
  auVar6._28_4_ = auVar5._12_4_;
  auVar6._24_4_ = auVar5._8_4_;
  auVar6._20_4_ = auVar5._4_4_;
  auVar6._16_4_ = auVar5._0_4_;
  auVar6._12_4_ = auVar4._12_4_;
  auVar6._8_4_ = auVar4._8_4_;
  auVar6._4_4_ = auVar4._4_4_;
  auVar6._0_4_ = auVar4._0_4_;
  vmmul_q(auVar3,auVar6);
  uVar10 = vmul_s(*(undefined4 *)(param_1 + 0x3f0),in_V7C);
  auVar2 = vrot_q(uVar10,1,0,3,0);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar10,2,0,1,0);
  vidt_q();
  if (*(int *)(param_1 + 0x324) != 0) {
    iVar8 = *(int *)(param_1 + 0x324);
    *(int *)(iVar8 + 0x80) = auVar2._0_4_;
    *(int *)(iVar8 + 0x84) = auVar2._4_4_;
    *(int *)(iVar8 + 0x88) = auVar2._8_4_;
    *(int *)(iVar8 + 0x8c) = auVar2._12_4_;
    *(int *)(iVar8 + 0x90) = auVar1._0_4_;
    *(int *)(iVar8 + 0x94) = auVar1._4_4_;
    *(int *)(iVar8 + 0x98) = auVar1._8_4_;
    *(int *)(iVar8 + 0x9c) = auVar1._12_4_;
    *(int *)(iVar8 + 0xa0) = auVar4._0_4_;
    *(int *)(iVar8 + 0xa4) = auVar4._4_4_;
    *(int *)(iVar8 + 0xa8) = auVar4._8_4_;
    *(int *)(iVar8 + 0xac) = auVar4._12_4_;
  }
  FUN_088a250c(param_1);
  FUN_088ac81c(param_1);
  iVar8 = *(int *)(param_1 + 0x3e4);
  if (iVar8 < 2) {
    if (-1 < iVar8) {
      if (iVar8 < 1) {
        *(undefined *)(param_1 + 0x281) = 1;
        *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
      }
      *(undefined4 *)(param_1 + 0x228) = 0;
      fVar9 = *(float *)(param_1 + 0x238) * 0.0;
      *(float *)(param_1 + 0x6c) = fVar9;
      if (fVar9 < 0.3) {
        if (*(int *)(param_1 + 800) == 0) {
          iVar8 = *(int *)(param_1 + 0x154);
        }
        else {
          *(undefined *)(*(int *)(param_1 + 800) + 0x4c1) = 1;
          iVar8 = *(int *)(param_1 + 0x154);
        }
        if (iVar8 == 0) {
          iVar8 = *(int *)(param_1 + 0x3e4);
        }
        else {
          *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
          FUN_088b3410(*(undefined4 *)(param_1 + 0x154));
          *(undefined4 *)(param_1 + 0x154) = 0;
          iVar8 = *(int *)(param_1 + 0x3e4);
        }
        *(int *)(param_1 + 0x3e4) = iVar8 + 1;
        *(undefined4 *)(param_1 + 1000) = 0x3c;
      }
    }
  }
  else if (iVar8 < 3) {
    iVar8 = *(int *)(param_1 + 1000) + -1;
    *(int *)(param_1 + 1000) = iVar8;
    if (iVar8 < 1) {
      *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
    }
  }
  else if (iVar8 < 4) {
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
    if (*(int *)(param_1 + 800) != 0) {
      *(undefined *)(*(int *)(param_1 + 800) + 0x4c1) = 1;
    }
    if (*(int *)(param_1 + 0x154) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
      FUN_088b3410(*(undefined4 *)(param_1 + 0x154));
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    *(undefined4 *)(param_1 + 100) = 0x3eb33333;
    *(undefined4 *)(param_1 + 0x68) = 0x3e20c49c;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f333333;
    local_30 = 0x3ee66666;
    local_2c = 0x3f266666;
    local_28 = 0x3f59999a;
    local_24 = 0x3f800000;
    FUN_089e0460(param_1,&local_30,0);
    FUN_088a3194(param_1);
    *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + 1;
  }
  return;
}

