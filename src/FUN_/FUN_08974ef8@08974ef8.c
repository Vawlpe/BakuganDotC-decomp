#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08974ef8(int param_1,char param_2)

{
  bool bVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined auVar9 [64];
  int iVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 in_V7C;
  
  if (param_2 == '\0') {
    fVar12 = *(float *)(param_1 + 0x540) + 1.0 / *(float *)(param_1 + 0x54c);
    *(float *)(param_1 + 0x540) = fVar12;
    fVar12 = fVar12 - 1.0;
    *(float *)(*(int *)(param_1 + 0x51c) + 0x6c) =
         *(float *)(param_1 + 0x544) + (1.0 - fVar12 * fVar12);
    iVar10 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
    fVar12 = *(float *)(param_1 + 0x540) - 1.0;
    uVar13 = vmul_s(*(float *)(param_1 + 0x548) - (1.0 - fVar12 * fVar12) * 0.5,in_V7C);
    auVar5 = vrot_q(uVar13,1,0,3,0);
    auVar2 = vidt_q();
    auVar6 = vrot_q(uVar13,2,0,1,0);
    auVar3 = vidt_q();
    *(int *)(iVar10 + 0x80) = auVar5._0_4_;
    *(int *)(iVar10 + 0x84) = auVar5._4_4_;
    *(int *)(iVar10 + 0x88) = auVar5._8_4_;
    *(int *)(iVar10 + 0x8c) = auVar5._12_4_;
    *(int *)(iVar10 + 0x90) = auVar2._0_4_;
    *(int *)(iVar10 + 0x94) = auVar2._4_4_;
    *(int *)(iVar10 + 0x98) = auVar2._8_4_;
    *(int *)(iVar10 + 0x9c) = auVar2._12_4_;
    *(int *)(iVar10 + 0xa0) = auVar6._0_4_;
    *(int *)(iVar10 + 0xa4) = auVar6._4_4_;
    *(int *)(iVar10 + 0xa8) = auVar6._8_4_;
    *(int *)(iVar10 + 0xac) = auVar6._12_4_;
    *(int *)(iVar10 + 0xb0) = auVar3._0_4_;
    *(int *)(iVar10 + 0xb4) = auVar3._4_4_;
    *(int *)(iVar10 + 0xb8) = auVar3._8_4_;
    *(int *)(iVar10 + 0xbc) = auVar3._12_4_;
    fVar12 = *(float *)(param_1 + 0x540) - 1.0;
    *(float *)(*(int *)(param_1 + 0x51c) + 0x20) =
         (float)(int)*(short *)(param_1 + 0x538) -
         (1.0 - fVar12 * fVar12) * (float)(int)*(short *)(param_1 + 0x53c);
    bVar1 = 1.0 <= *(float *)(param_1 + 0x540);
    if (bVar1) {
      *(undefined4 *)(*(int *)(param_1 + 0x51c) + 0x6c) = 0x3f800000;
      iVar10 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
      uVar13 = vmul_s(0,in_V7C);
      auVar5 = vrot_q(uVar13,1,0,3,0);
      auVar2 = vidt_q();
      auVar6 = vrot_q(uVar13,2,0,1,0);
      auVar3 = vidt_q();
      *(int *)(iVar10 + 0x80) = auVar5._0_4_;
      *(int *)(iVar10 + 0x84) = auVar5._4_4_;
      *(int *)(iVar10 + 0x88) = auVar5._8_4_;
      *(int *)(iVar10 + 0x8c) = auVar5._12_4_;
      *(int *)(iVar10 + 0x90) = auVar2._0_4_;
      *(int *)(iVar10 + 0x94) = auVar2._4_4_;
      *(int *)(iVar10 + 0x98) = auVar2._8_4_;
      *(int *)(iVar10 + 0x9c) = auVar2._12_4_;
      *(int *)(iVar10 + 0xa0) = auVar6._0_4_;
      *(int *)(iVar10 + 0xa4) = auVar6._4_4_;
      *(int *)(iVar10 + 0xa8) = auVar6._8_4_;
      *(int *)(iVar10 + 0xac) = auVar6._12_4_;
      *(int *)(iVar10 + 0xb0) = auVar3._0_4_;
      *(int *)(iVar10 + 0xb4) = auVar3._4_4_;
      *(int *)(iVar10 + 0xb8) = auVar3._8_4_;
      *(int *)(iVar10 + 0xbc) = auVar3._12_4_;
      *(float *)(*(int *)(param_1 + 0x51c) + 0x20) = (float)(int)*(short *)(param_1 + 0x53a);
      iVar10 = *(int *)(param_1 + 0x51c);
    }
    else {
      iVar10 = *(int *)(param_1 + 0x51c);
    }
    iVar10 = *(int *)(iVar10 + 0x130);
    uVar13 = vmul_s(0x3f000000,in_V7C);
    auVar2 = vidt_q();
    auVar5 = vrot_q(uVar13,0,1,2,0);
    auVar6 = vrot_q(uVar13,0,3,1,0);
    auVar3 = vidt_q();
    auVar9._48_16_ = auVar3;
    auVar9._44_4_ = auVar6._12_4_;
    auVar9._40_4_ = auVar6._8_4_;
    auVar9._36_4_ = auVar6._4_4_;
    auVar9._32_4_ = auVar6._0_4_;
    auVar9._28_4_ = auVar5._12_4_;
    auVar9._24_4_ = auVar5._8_4_;
    auVar9._20_4_ = auVar5._4_4_;
    auVar9._16_4_ = auVar5._0_4_;
    auVar9._12_4_ = auVar2._12_4_;
    auVar9._8_4_ = auVar2._8_4_;
    auVar9._4_4_ = auVar2._4_4_;
    auVar9._0_4_ = auVar2._0_4_;
    auVar4 = vmmul_q(*(undefined (*) [64])(iVar10 + 0x80),auVar9);
    *(int *)*(undefined (*) [64])(iVar10 + 0x80) = auVar4._0_4_;
    *(int *)(iVar10 + 0x84) = auVar4._4_4_;
    *(int *)(iVar10 + 0x88) = auVar4._8_4_;
    *(int *)(iVar10 + 0x8c) = auVar4._12_4_;
    *(int *)(iVar10 + 0x90) = auVar4._16_4_;
    *(int *)(iVar10 + 0x94) = auVar4._20_4_;
    *(int *)(iVar10 + 0x98) = auVar4._24_4_;
    *(int *)(iVar10 + 0x9c) = auVar4._28_4_;
    *(int *)(iVar10 + 0xa0) = auVar4._32_4_;
    *(int *)(iVar10 + 0xa4) = auVar4._36_4_;
    *(int *)(iVar10 + 0xa8) = auVar4._40_4_;
    *(int *)(iVar10 + 0xac) = auVar4._44_4_;
    *(int *)(iVar10 + 0xb0) = auVar4._48_4_;
    *(int *)(iVar10 + 0xb4) = auVar4._52_4_;
    *(int *)(iVar10 + 0xb8) = auVar4._56_4_;
    *(int *)(iVar10 + 0xbc) = auVar4._60_4_;
    iVar10 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar10 + 0x80),0x3f99999a);
    auVar3 = vscl_q(*(undefined (*) [16])(iVar10 + 0x90),0x3f99999a);
    auVar5 = vscl_q(*(undefined (*) [16])(iVar10 + 0xa0),0x3f99999a);
    *(int *)*(undefined (*) [16])(iVar10 + 0x80) = auVar2._0_4_;
    *(int *)(iVar10 + 0x84) = auVar2._4_4_;
    *(int *)(iVar10 + 0x88) = auVar2._8_4_;
    *(int *)(iVar10 + 0x8c) = auVar2._12_4_;
    *(int *)(iVar10 + 0x90) = auVar3._0_4_;
    *(int *)(iVar10 + 0x94) = auVar3._4_4_;
    *(int *)(iVar10 + 0x98) = auVar3._8_4_;
    *(int *)(iVar10 + 0x9c) = auVar3._12_4_;
    *(int *)(iVar10 + 0xa0) = auVar5._0_4_;
    *(int *)(iVar10 + 0xa4) = auVar5._4_4_;
    *(int *)(iVar10 + 0xa8) = auVar5._8_4_;
    *(int *)(iVar10 + 0xac) = auVar5._12_4_;
    iVar10 = *(int *)(param_1 + 0x51c);
    iVar11 = *(int *)(iVar10 + 0x130);
    uVar13 = *(undefined4 *)(iVar10 + 0x24);
    uVar7 = *(undefined4 *)(iVar10 + 0x28);
    uVar8 = *(undefined4 *)(iVar10 + 0x2c);
    *(undefined4 *)(iVar11 + 0xb0) = *(undefined4 *)(iVar10 + 0x20);
    *(undefined4 *)(iVar11 + 0xb4) = uVar13;
    *(undefined4 *)(iVar11 + 0xb8) = uVar7;
    *(undefined4 *)(iVar11 + 0xbc) = uVar8;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x51c) + 0x130) + 0xbc) = 0x3f800000;
    return bVar1;
  }
  fVar12 = *(float *)(param_1 + 0x540) + 1.0 / *(float *)(param_1 + 0x54c);
  *(float *)(param_1 + 0x540) = fVar12;
  *(float *)(*(int *)(param_1 + 0x51c) + 0x6c) = *(float *)(param_1 + 0x544) - fVar12 * fVar12;
  iVar10 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
  uVar13 = vmul_s(*(float *)(param_1 + 0x548) +
                  *(float *)(param_1 + 0x540) * *(float *)(param_1 + 0x540) * 0.5,in_V7C);
  auVar5 = vrot_q(uVar13,1,0,3,0);
  auVar2 = vidt_q();
  auVar6 = vrot_q(uVar13,2,0,1,0);
  auVar3 = vidt_q();
  *(int *)(iVar10 + 0x80) = auVar5._0_4_;
  *(int *)(iVar10 + 0x84) = auVar5._4_4_;
  *(int *)(iVar10 + 0x88) = auVar5._8_4_;
  *(int *)(iVar10 + 0x8c) = auVar5._12_4_;
  *(int *)(iVar10 + 0x90) = auVar2._0_4_;
  *(int *)(iVar10 + 0x94) = auVar2._4_4_;
  *(int *)(iVar10 + 0x98) = auVar2._8_4_;
  *(int *)(iVar10 + 0x9c) = auVar2._12_4_;
  *(int *)(iVar10 + 0xa0) = auVar6._0_4_;
  *(int *)(iVar10 + 0xa4) = auVar6._4_4_;
  *(int *)(iVar10 + 0xa8) = auVar6._8_4_;
  *(int *)(iVar10 + 0xac) = auVar6._12_4_;
  *(int *)(iVar10 + 0xb0) = auVar3._0_4_;
  *(int *)(iVar10 + 0xb4) = auVar3._4_4_;
  *(int *)(iVar10 + 0xb8) = auVar3._8_4_;
  *(int *)(iVar10 + 0xbc) = auVar3._12_4_;
  *(float *)(*(int *)(param_1 + 0x51c) + 0x20) =
       (float)(int)*(short *)(param_1 + 0x538) +
       *(float *)(param_1 + 0x540) * *(float *)(param_1 + 0x540) *
       (float)(int)*(short *)(param_1 + 0x53c);
  fVar12 = *(float *)(param_1 + 0x540);
  iVar10 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
  uVar13 = vmul_s(0x3f000000,in_V7C);
  auVar2 = vidt_q();
  auVar5 = vrot_q(uVar13,0,1,2,0);
  auVar6 = vrot_q(uVar13,0,3,1,0);
  auVar3 = vidt_q();
  auVar4._48_16_ = auVar3;
  auVar4._44_4_ = auVar6._12_4_;
  auVar4._40_4_ = auVar6._8_4_;
  auVar4._36_4_ = auVar6._4_4_;
  auVar4._32_4_ = auVar6._0_4_;
  auVar4._28_4_ = auVar5._12_4_;
  auVar4._24_4_ = auVar5._8_4_;
  auVar4._20_4_ = auVar5._4_4_;
  auVar4._16_4_ = auVar5._0_4_;
  auVar4._12_4_ = auVar2._12_4_;
  auVar4._8_4_ = auVar2._8_4_;
  auVar4._4_4_ = auVar2._4_4_;
  auVar4._0_4_ = auVar2._0_4_;
  auVar4 = vmmul_q(*(undefined (*) [64])(iVar10 + 0x80),auVar4);
  *(int *)*(undefined (*) [64])(iVar10 + 0x80) = auVar4._0_4_;
  *(int *)(iVar10 + 0x84) = auVar4._4_4_;
  *(int *)(iVar10 + 0x88) = auVar4._8_4_;
  *(int *)(iVar10 + 0x8c) = auVar4._12_4_;
  *(int *)(iVar10 + 0x90) = auVar4._16_4_;
  *(int *)(iVar10 + 0x94) = auVar4._20_4_;
  *(int *)(iVar10 + 0x98) = auVar4._24_4_;
  *(int *)(iVar10 + 0x9c) = auVar4._28_4_;
  *(int *)(iVar10 + 0xa0) = auVar4._32_4_;
  *(int *)(iVar10 + 0xa4) = auVar4._36_4_;
  *(int *)(iVar10 + 0xa8) = auVar4._40_4_;
  *(int *)(iVar10 + 0xac) = auVar4._44_4_;
  *(int *)(iVar10 + 0xb0) = auVar4._48_4_;
  *(int *)(iVar10 + 0xb4) = auVar4._52_4_;
  *(int *)(iVar10 + 0xb8) = auVar4._56_4_;
  *(int *)(iVar10 + 0xbc) = auVar4._60_4_;
  iVar10 = *(int *)(*(int *)(param_1 + 0x51c) + 0x130);
  auVar2 = vscl_q(*(undefined (*) [16])(iVar10 + 0x80),0x3f99999a);
  auVar3 = vscl_q(*(undefined (*) [16])(iVar10 + 0x90),0x3f99999a);
  auVar5 = vscl_q(*(undefined (*) [16])(iVar10 + 0xa0),0x3f99999a);
  *(int *)*(undefined (*) [16])(iVar10 + 0x80) = auVar2._0_4_;
  *(int *)(iVar10 + 0x84) = auVar2._4_4_;
  *(int *)(iVar10 + 0x88) = auVar2._8_4_;
  *(int *)(iVar10 + 0x8c) = auVar2._12_4_;
  *(int *)(iVar10 + 0x90) = auVar3._0_4_;
  *(int *)(iVar10 + 0x94) = auVar3._4_4_;
  *(int *)(iVar10 + 0x98) = auVar3._8_4_;
  *(int *)(iVar10 + 0x9c) = auVar3._12_4_;
  *(int *)(iVar10 + 0xa0) = auVar5._0_4_;
  *(int *)(iVar10 + 0xa4) = auVar5._4_4_;
  *(int *)(iVar10 + 0xa8) = auVar5._8_4_;
  *(int *)(iVar10 + 0xac) = auVar5._12_4_;
  iVar10 = *(int *)(param_1 + 0x51c);
  iVar11 = *(int *)(iVar10 + 0x130);
  uVar13 = *(undefined4 *)(iVar10 + 0x24);
  uVar7 = *(undefined4 *)(iVar10 + 0x28);
  uVar8 = *(undefined4 *)(iVar10 + 0x2c);
  *(undefined4 *)(iVar11 + 0xb0) = *(undefined4 *)(iVar10 + 0x20);
  *(undefined4 *)(iVar11 + 0xb4) = uVar13;
  *(undefined4 *)(iVar11 + 0xb8) = uVar7;
  *(undefined4 *)(iVar11 + 0xbc) = uVar8;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x51c) + 0x130) + 0xbc) = 0x3f800000;
  return 1.0 <= fVar12;
}

