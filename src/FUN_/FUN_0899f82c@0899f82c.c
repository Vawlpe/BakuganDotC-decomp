#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0899f82c(int param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined auVar10 [64];
  undefined auVar11 [64];
  undefined auVar12 [64];
  undefined auVar13 [64];
  undefined auVar14 [64];
  undefined auVar15 [64];
  undefined auVar16 [64];
  undefined auVar17 [64];
  undefined auVar18 [64];
  undefined auVar19 [64];
  undefined auVar20 [64];
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 in_V7C;
  undefined local_e0 [4];
  undefined4 local_dc;
  undefined local_d8 [4];
  undefined4 local_d4;
  undefined local_d0 [4];
  undefined4 local_cc;
  undefined local_b0 [4];
  undefined4 local_ac;
  undefined local_a8 [4];
  undefined4 local_a4;
  undefined local_a0 [4];
  undefined4 local_9c;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined local_60 [4];
  undefined4 local_5c;
  undefined local_58 [4];
  undefined4 local_54;
  undefined local_50 [4];
  undefined4 local_4c;
  
  iVar21 = FUN_08996448();
  if (iVar21 == 1) {
    return true;
  }
  if (param_2 == '\0') {
    cVar1 = *(char *)(param_1 + 0x2308);
    if (cVar1 < '\x01') {
      if (-1 < cVar1) {
        fVar24 = *(float *)(param_1 + 0x2300) + 0.0625;
        *(float *)(param_1 + 0x2300) = fVar24;
        fVar24 = fVar24 - 1.0;
        *(float *)(*(int *)(param_1 + 0x226c) + 0x20) =
             *(float *)(param_1 + 0x2314) + (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 0x2324);
        fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
        *(float *)(*(int *)(param_1 + 0x226c) + 0x24) =
             *(float *)(param_1 + 0x2318) + (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 9000);
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = FUN_0899a640(param_1,2,0);
        uVar23 = vmul_s(uVar23,in_V7C);
        auVar3 = vidt_q();
        auVar6 = vrot_q(uVar23,0,1,2,0);
        auVar7 = vrot_q(uVar23,0,3,1,0);
        auVar4 = vidt_q();
        *(int *)(iVar21 + 0x80) = auVar3._0_4_;
        *(int *)(iVar21 + 0x84) = auVar3._4_4_;
        *(int *)(iVar21 + 0x88) = auVar3._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar21 + 0x90) = auVar6._0_4_;
        *(int *)(iVar21 + 0x94) = auVar6._4_4_;
        *(int *)(iVar21 + 0x98) = auVar6._8_4_;
        *(int *)(iVar21 + 0x9c) = auVar6._12_4_;
        *(int *)(iVar21 + 0xa0) = auVar7._0_4_;
        *(int *)(iVar21 + 0xa4) = auVar7._4_4_;
        *(int *)(iVar21 + 0xa8) = auVar7._8_4_;
        *(int *)(iVar21 + 0xac) = auVar7._12_4_;
        *(int *)(iVar21 + 0xb0) = auVar4._0_4_;
        *(int *)(iVar21 + 0xb4) = auVar4._4_4_;
        *(int *)(iVar21 + 0xb8) = auVar4._8_4_;
        *(int *)(iVar21 + 0xbc) = auVar4._12_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
        fVar24 = *(float *)(param_1 + 0x2310) - (1.0 - fVar24 * fVar24) * 0.6;
        auVar3 = vscl_q(*(undefined (*) [16])(iVar21 + 0x80),fVar24);
        auVar4 = vscl_q(*(undefined (*) [16])(iVar21 + 0x90),fVar24);
        auVar6 = vscl_q(*(undefined (*) [16])(iVar21 + 0xa0),fVar24);
        *(int *)*(undefined (*) [16])(iVar21 + 0x80) = auVar3._0_4_;
        *(int *)(iVar21 + 0x84) = auVar3._4_4_;
        *(int *)(iVar21 + 0x88) = auVar3._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar21 + 0x90) = auVar4._0_4_;
        *(int *)(iVar21 + 0x94) = auVar4._4_4_;
        *(int *)(iVar21 + 0x98) = auVar4._8_4_;
        *(int *)(iVar21 + 0x9c) = auVar4._12_4_;
        *(int *)(iVar21 + 0xa0) = auVar6._0_4_;
        *(int *)(iVar21 + 0xa4) = auVar6._4_4_;
        *(int *)(iVar21 + 0xa8) = auVar6._8_4_;
        *(int *)(iVar21 + 0xac) = auVar6._12_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = FUN_0899a640(param_1,2,1);
        uVar23 = vmul_s(uVar23,in_V7C);
        auVar6 = vrot_q(uVar23,1,0,3,0);
        auVar3 = vidt_q();
        auVar7 = vrot_q(uVar23,2,0,1,0);
        auVar4 = vidt_q();
        auVar10._48_16_ = auVar4;
        auVar10._44_4_ = auVar7._12_4_;
        auVar10._40_4_ = auVar7._8_4_;
        auVar10._36_4_ = auVar7._4_4_;
        auVar10._32_4_ = auVar7._0_4_;
        auVar10._28_4_ = auVar3._12_4_;
        auVar10._24_4_ = auVar3._8_4_;
        auVar10._20_4_ = auVar3._4_4_;
        auVar10._16_4_ = auVar3._0_4_;
        auVar10._12_4_ = auVar6._12_4_;
        auVar10._8_4_ = auVar6._8_4_;
        auVar10._4_4_ = auVar6._4_4_;
        auVar10._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar10);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = FUN_0899a640(param_1,2,2);
        uVar23 = vmul_s(uVar23,in_V7C);
        auVar6 = vrot_q(uVar23,1,2,0,0);
        auVar7 = vrot_q(uVar23,3,1,0,0);
        auVar3 = vidt_q();
        auVar4 = vidt_q();
        auVar11._48_16_ = auVar4;
        auVar11._44_4_ = auVar3._12_4_;
        auVar11._40_4_ = auVar3._8_4_;
        auVar11._36_4_ = auVar3._4_4_;
        auVar11._32_4_ = auVar3._0_4_;
        auVar11._28_4_ = auVar7._12_4_;
        auVar11._24_4_ = auVar7._8_4_;
        auVar11._20_4_ = auVar7._4_4_;
        auVar11._16_4_ = auVar7._0_4_;
        auVar11._12_4_ = auVar6._12_4_;
        auVar11._8_4_ = auVar6._8_4_;
        auVar11._4_4_ = auVar6._4_4_;
        auVar11._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar11);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        if (1.0 <= *(float *)(param_1 + 0x2300)) {
          *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x20) = 0xc0800000;
          *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x24) = 0xc1a00000;
          *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
        }
        iVar21 = *(int *)(param_1 + 0x226c);
        iVar22 = *(int *)(iVar21 + 0x130);
        uVar23 = *(undefined4 *)(iVar21 + 0x24);
        uVar8 = *(undefined4 *)(iVar21 + 0x28);
        uVar9 = *(undefined4 *)(iVar21 + 0x2c);
        *(undefined4 *)(iVar22 + 0xb0) = *(undefined4 *)(iVar21 + 0x20);
        *(undefined4 *)(iVar22 + 0xb4) = uVar23;
        *(undefined4 *)(iVar22 + 0xb8) = uVar8;
        *(undefined4 *)(iVar22 + 0xbc) = uVar9;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
        return false;
      }
    }
    else {
      if (cVar1 < '\x02') {
        *(undefined4 *)(param_1 + 0x2300) = 0;
        uVar23 = FUN_0899a640(param_1,2,0);
        *(undefined4 *)(param_1 + 0x22b0) = uVar23;
        uVar23 = FUN_0899a640(param_1,2,1);
        *(undefined4 *)(param_1 + 0x22b4) = uVar23;
        uVar23 = FUN_0899a640(param_1,2,2);
        *(undefined4 *)(param_1 + 0x22b8) = uVar23;
        uVar23 = FUN_0899a640(param_1,2,0);
        *(undefined4 *)(param_1 + 0x22c0) = uVar23;
        uVar23 = FUN_0899a640(param_1,2,1);
        *(undefined4 *)(param_1 + 0x22c4) = uVar23;
        uVar23 = FUN_0899a640(param_1,2,2);
        *(undefined4 *)(param_1 + 0x22c8) = uVar23;
        uVar23 = FUN_0899a640(param_1,0,0);
        *(undefined4 *)(param_1 + 0x22e0) = uVar23;
        uVar23 = FUN_0899a640(param_1,0,1);
        *(undefined4 *)(param_1 + 0x22e4) = uVar23;
        uVar23 = FUN_0899a640(param_1,0,2);
        *(undefined4 *)(param_1 + 0x22e8) = uVar23;
        FUN_0899830c(*(undefined4 *)(param_1 + 0x22b0),*(undefined4 *)(param_1 + 0x22e0),local_e0,
                     param_1);
        *(undefined4 *)(param_1 + 0x22f0) = local_dc;
        *(undefined *)(param_1 + 0x230a) = local_e0[0];
        FUN_0899830c(*(undefined4 *)(param_1 + 0x22b4),*(undefined4 *)(param_1 + 0x22e4),local_d8,
                     param_1);
        *(undefined4 *)(param_1 + 0x22f4) = local_d4;
        *(undefined *)(param_1 + 0x230b) = local_d8[0];
        FUN_0899830c(*(undefined4 *)(param_1 + 0x22b8),*(undefined4 *)(param_1 + 0x22e8),local_d0,
                     param_1);
        *(undefined4 *)(param_1 + 0x22f8) = local_cc;
        *(undefined *)(param_1 + 0x230c) = local_d0[0];
        *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
        return false;
      }
      if (cVar1 < '\x03') {
        *(float *)(param_1 + 0x2300) = *(float *)(param_1 + 0x2300) + 0.0625;
        if (*(char *)(param_1 + 0x230a) == '\0') {
          fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b0) -
                                (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 0x22f0));
        }
        else {
          fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b0) +
                                (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 0x22f0));
        }
        *(undefined4 *)(param_1 + 0x2270) = uVar23;
        if (*(char *)(param_1 + 0x230b) == '\0') {
          fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b4) -
                                (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 0x22f4));
        }
        else {
          fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b4) +
                                (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 0x22f4));
        }
        *(undefined4 *)(param_1 + 0x2274) = uVar23;
        if (*(char *)(param_1 + 0x230c) == '\0') {
          fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b8) -
                                (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 0x22f8));
        }
        else {
          fVar24 = *(float *)(param_1 + 0x2300) - 1.0;
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b8) +
                                (1.0 - fVar24 * fVar24) * *(float *)(param_1 + 0x22f8));
        }
        bVar2 = 1.0 <= *(float *)(param_1 + 0x2300);
        *(undefined4 *)(param_1 + 0x2278) = uVar23;
        if (bVar2) {
          *(undefined4 *)(param_1 + 0x2270) = *(undefined4 *)(param_1 + 0x22e0);
          *(undefined4 *)(param_1 + 0x2274) = *(undefined4 *)(param_1 + 0x22e4);
          *(undefined4 *)(param_1 + 0x2278) = *(undefined4 *)(param_1 + 0x22e8);
          *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
        }
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2270),in_V7C);
        auVar3 = vidt_q();
        auVar6 = vrot_q(uVar23,0,1,2,0);
        auVar7 = vrot_q(uVar23,0,3,1,0);
        auVar4 = vidt_q();
        *(int *)(iVar21 + 0x80) = auVar3._0_4_;
        *(int *)(iVar21 + 0x84) = auVar3._4_4_;
        *(int *)(iVar21 + 0x88) = auVar3._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar21 + 0x90) = auVar6._0_4_;
        *(int *)(iVar21 + 0x94) = auVar6._4_4_;
        *(int *)(iVar21 + 0x98) = auVar6._8_4_;
        *(int *)(iVar21 + 0x9c) = auVar6._12_4_;
        *(int *)(iVar21 + 0xa0) = auVar7._0_4_;
        *(int *)(iVar21 + 0xa4) = auVar7._4_4_;
        *(int *)(iVar21 + 0xa8) = auVar7._8_4_;
        *(int *)(iVar21 + 0xac) = auVar7._12_4_;
        *(int *)(iVar21 + 0xb0) = auVar4._0_4_;
        *(int *)(iVar21 + 0xb4) = auVar4._4_4_;
        *(int *)(iVar21 + 0xb8) = auVar4._8_4_;
        *(int *)(iVar21 + 0xbc) = auVar4._12_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        auVar3 = vscl_q(*(undefined (*) [16])(iVar21 + 0x80),0x3f19999a);
        auVar4 = vscl_q(*(undefined (*) [16])(iVar21 + 0x90),0x3f19999a);
        auVar6 = vscl_q(*(undefined (*) [16])(iVar21 + 0xa0),0x3f19999a);
        *(int *)*(undefined (*) [16])(iVar21 + 0x80) = auVar3._0_4_;
        *(int *)(iVar21 + 0x84) = auVar3._4_4_;
        *(int *)(iVar21 + 0x88) = auVar3._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar21 + 0x90) = auVar4._0_4_;
        *(int *)(iVar21 + 0x94) = auVar4._4_4_;
        *(int *)(iVar21 + 0x98) = auVar4._8_4_;
        *(int *)(iVar21 + 0x9c) = auVar4._12_4_;
        *(int *)(iVar21 + 0xa0) = auVar6._0_4_;
        *(int *)(iVar21 + 0xa4) = auVar6._4_4_;
        *(int *)(iVar21 + 0xa8) = auVar6._8_4_;
        *(int *)(iVar21 + 0xac) = auVar6._12_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2274),in_V7C);
        auVar6 = vrot_q(uVar23,1,0,3,0);
        auVar3 = vidt_q();
        auVar7 = vrot_q(uVar23,2,0,1,0);
        auVar4 = vidt_q();
        auVar12._48_16_ = auVar4;
        auVar12._44_4_ = auVar7._12_4_;
        auVar12._40_4_ = auVar7._8_4_;
        auVar12._36_4_ = auVar7._4_4_;
        auVar12._32_4_ = auVar7._0_4_;
        auVar12._28_4_ = auVar3._12_4_;
        auVar12._24_4_ = auVar3._8_4_;
        auVar12._20_4_ = auVar3._4_4_;
        auVar12._16_4_ = auVar3._0_4_;
        auVar12._12_4_ = auVar6._12_4_;
        auVar12._8_4_ = auVar6._8_4_;
        auVar12._4_4_ = auVar6._4_4_;
        auVar12._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar12);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2278),in_V7C);
        auVar6 = vrot_q(uVar23,1,2,0,0);
        auVar7 = vrot_q(uVar23,3,1,0,0);
        auVar3 = vidt_q();
        auVar4 = vidt_q();
        auVar13._48_16_ = auVar4;
        auVar13._44_4_ = auVar3._12_4_;
        auVar13._40_4_ = auVar3._8_4_;
        auVar13._36_4_ = auVar3._4_4_;
        auVar13._32_4_ = auVar3._0_4_;
        auVar13._28_4_ = auVar7._12_4_;
        auVar13._24_4_ = auVar7._8_4_;
        auVar13._20_4_ = auVar7._4_4_;
        auVar13._16_4_ = auVar7._0_4_;
        auVar13._12_4_ = auVar6._12_4_;
        auVar13._8_4_ = auVar6._8_4_;
        auVar13._4_4_ = auVar6._4_4_;
        auVar13._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar13);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        iVar21 = *(int *)(param_1 + 0x226c);
        iVar22 = *(int *)(iVar21 + 0x130);
        uVar23 = *(undefined4 *)(iVar21 + 0x24);
        uVar8 = *(undefined4 *)(iVar21 + 0x28);
        uVar9 = *(undefined4 *)(iVar21 + 0x2c);
        *(undefined4 *)(iVar22 + 0xb0) = *(undefined4 *)(iVar21 + 0x20);
        *(undefined4 *)(iVar22 + 0xb4) = uVar23;
        *(undefined4 *)(iVar22 + 0xb8) = uVar8;
        *(undefined4 *)(iVar22 + 0xbc) = uVar9;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
        return bVar2;
      }
    }
    return true;
  }
  if (*(char *)(param_1 + 0x109f) == '\0') {
    cVar1 = *(char *)(param_1 + 0x2308);
    if (cVar1 < '\x02') {
      if (-1 < cVar1) {
        if (cVar1 < '\x01') {
          fVar24 = *(float *)(param_1 + 0x2270) + *(float *)(param_1 + 0x2280);
          *(undefined4 *)(param_1 + 0x2300) = 0;
          fVar25 = *(float *)(param_1 + 0x2274) + *(float *)(param_1 + 0x2284);
          *(float *)(param_1 + 0x22b0) = fVar24;
          fVar26 = *(float *)(param_1 + 0x2278) + *(float *)(param_1 + 0x2288);
          *(float *)(param_1 + 0x22c0) = fVar24;
          *(float *)(param_1 + 0x22b4) = fVar25;
          *(float *)(param_1 + 0x22c4) = fVar25;
          *(float *)(param_1 + 0x22b8) = fVar26;
          *(float *)(param_1 + 0x22c8) = fVar26;
          uVar23 = FUN_0899a640(param_1,2,0);
          *(undefined4 *)(param_1 + 0x22e0) = uVar23;
          uVar23 = FUN_0899a640(param_1,2,1);
          *(undefined4 *)(param_1 + 0x22e4) = uVar23;
          uVar23 = FUN_0899a640(param_1,2,2);
          *(undefined4 *)(param_1 + 0x22e8) = uVar23;
          FUN_0899830c(*(undefined4 *)(param_1 + 0x22b0),*(undefined4 *)(param_1 + 0x22e0),local_b0,
                       param_1);
          *(undefined4 *)(param_1 + 0x22f0) = local_ac;
          *(undefined *)(param_1 + 0x230a) = local_b0[0];
          FUN_0899830c(*(undefined4 *)(param_1 + 0x22b4),*(undefined4 *)(param_1 + 0x22e4),local_a8,
                       param_1);
          *(undefined4 *)(param_1 + 0x22f4) = local_a4;
          *(undefined *)(param_1 + 0x230b) = local_a8[0];
          FUN_0899830c(*(undefined4 *)(param_1 + 0x22b8),*(undefined4 *)(param_1 + 0x22e8),local_a0,
                       param_1);
          *(undefined4 *)(param_1 + 0x22f8) = local_9c;
          *(undefined *)(param_1 + 0x230c) = local_a0[0];
          *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
          return false;
        }
        *(float *)(param_1 + 0x2300) = *(float *)(param_1 + 0x2300) + 0.0625;
        if (*(char *)(param_1 + 0x230a) == '\0') {
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b0) -
                                *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                                *(float *)(param_1 + 0x22f0));
        }
        else {
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b0) +
                                *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                                *(float *)(param_1 + 0x22f0));
        }
        *(undefined4 *)(param_1 + 0x2270) = uVar23;
        if (*(char *)(param_1 + 0x230b) == '\0') {
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b4) -
                                *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                                *(float *)(param_1 + 0x22f4));
        }
        else {
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b4) +
                                *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                                *(float *)(param_1 + 0x22f4));
        }
        *(undefined4 *)(param_1 + 0x2274) = uVar23;
        if (*(char *)(param_1 + 0x230c) == '\0') {
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b8) -
                                *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                                *(float *)(param_1 + 0x22f8));
        }
        else {
          uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b8) +
                                *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                                *(float *)(param_1 + 0x22f8));
        }
        *(undefined4 *)(param_1 + 0x2278) = uVar23;
        if (1.0 <= *(float *)(param_1 + 0x2300)) {
          *(undefined4 *)(param_1 + 0x2270) = *(undefined4 *)(param_1 + 0x22e0);
          *(undefined4 *)(param_1 + 0x2274) = *(undefined4 *)(param_1 + 0x22e4);
          *(undefined4 *)(param_1 + 0x2278) = *(undefined4 *)(param_1 + 0x22e8);
          *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
        }
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2270),in_V7C);
        auVar3 = vidt_q();
        auVar6 = vrot_q(uVar23,0,1,2,0);
        auVar7 = vrot_q(uVar23,0,3,1,0);
        auVar4 = vidt_q();
        *(int *)(iVar21 + 0x80) = auVar3._0_4_;
        *(int *)(iVar21 + 0x84) = auVar3._4_4_;
        *(int *)(iVar21 + 0x88) = auVar3._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar21 + 0x90) = auVar6._0_4_;
        *(int *)(iVar21 + 0x94) = auVar6._4_4_;
        *(int *)(iVar21 + 0x98) = auVar6._8_4_;
        *(int *)(iVar21 + 0x9c) = auVar6._12_4_;
        *(int *)(iVar21 + 0xa0) = auVar7._0_4_;
        *(int *)(iVar21 + 0xa4) = auVar7._4_4_;
        *(int *)(iVar21 + 0xa8) = auVar7._8_4_;
        *(int *)(iVar21 + 0xac) = auVar7._12_4_;
        *(int *)(iVar21 + 0xb0) = auVar4._0_4_;
        *(int *)(iVar21 + 0xb4) = auVar4._4_4_;
        *(int *)(iVar21 + 0xb8) = auVar4._8_4_;
        *(int *)(iVar21 + 0xbc) = auVar4._12_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        auVar3 = vscl_q(*(undefined (*) [16])(iVar21 + 0x80),0x3f19999a);
        auVar4 = vscl_q(*(undefined (*) [16])(iVar21 + 0x90),0x3f19999a);
        auVar6 = vscl_q(*(undefined (*) [16])(iVar21 + 0xa0),0x3f19999a);
        *(int *)*(undefined (*) [16])(iVar21 + 0x80) = auVar3._0_4_;
        *(int *)(iVar21 + 0x84) = auVar3._4_4_;
        *(int *)(iVar21 + 0x88) = auVar3._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar21 + 0x90) = auVar4._0_4_;
        *(int *)(iVar21 + 0x94) = auVar4._4_4_;
        *(int *)(iVar21 + 0x98) = auVar4._8_4_;
        *(int *)(iVar21 + 0x9c) = auVar4._12_4_;
        *(int *)(iVar21 + 0xa0) = auVar6._0_4_;
        *(int *)(iVar21 + 0xa4) = auVar6._4_4_;
        *(int *)(iVar21 + 0xa8) = auVar6._8_4_;
        *(int *)(iVar21 + 0xac) = auVar6._12_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2274),in_V7C);
        auVar6 = vrot_q(uVar23,1,0,3,0);
        auVar3 = vidt_q();
        auVar7 = vrot_q(uVar23,2,0,1,0);
        auVar4 = vidt_q();
        auVar14._48_16_ = auVar4;
        auVar14._44_4_ = auVar7._12_4_;
        auVar14._40_4_ = auVar7._8_4_;
        auVar14._36_4_ = auVar7._4_4_;
        auVar14._32_4_ = auVar7._0_4_;
        auVar14._28_4_ = auVar3._12_4_;
        auVar14._24_4_ = auVar3._8_4_;
        auVar14._20_4_ = auVar3._4_4_;
        auVar14._16_4_ = auVar3._0_4_;
        auVar14._12_4_ = auVar6._12_4_;
        auVar14._8_4_ = auVar6._8_4_;
        auVar14._4_4_ = auVar6._4_4_;
        auVar14._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar14);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2278),in_V7C);
        auVar6 = vrot_q(uVar23,1,2,0,0);
        auVar7 = vrot_q(uVar23,3,1,0,0);
        auVar3 = vidt_q();
        auVar4 = vidt_q();
        auVar15._48_16_ = auVar4;
        auVar15._44_4_ = auVar3._12_4_;
        auVar15._40_4_ = auVar3._8_4_;
        auVar15._36_4_ = auVar3._4_4_;
        auVar15._32_4_ = auVar3._0_4_;
        auVar15._28_4_ = auVar7._12_4_;
        auVar15._24_4_ = auVar7._8_4_;
        auVar15._20_4_ = auVar7._4_4_;
        auVar15._16_4_ = auVar7._0_4_;
        auVar15._12_4_ = auVar6._12_4_;
        auVar15._8_4_ = auVar6._8_4_;
        auVar15._4_4_ = auVar6._4_4_;
        auVar15._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar15);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        iVar21 = *(int *)(param_1 + 0x226c);
        iVar22 = *(int *)(iVar21 + 0x130);
        uVar23 = *(undefined4 *)(iVar21 + 0x24);
        uVar8 = *(undefined4 *)(iVar21 + 0x28);
        uVar9 = *(undefined4 *)(iVar21 + 0x2c);
        *(undefined4 *)(iVar22 + 0xb0) = *(undefined4 *)(iVar21 + 0x20);
        *(undefined4 *)(iVar22 + 0xb4) = uVar23;
        *(undefined4 *)(iVar22 + 0xb8) = uVar8;
        *(undefined4 *)(iVar22 + 0xbc) = uVar9;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
        return false;
      }
    }
    else {
      if (cVar1 < '\x03') {
        *(undefined4 *)(param_1 + 0x2300) = 0;
        *(undefined4 *)(param_1 + 0x2314) = *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x20);
        *(undefined4 *)(param_1 + 0x2318) = *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x24);
        *(undefined4 *)(param_1 + 0x2310) = 0x3f19999a;
        if (*(char *)(param_1 + 0x109c) == '\0') {
          iVar21 = *(int *)(param_1 + 0x226c);
          *(undefined4 *)(param_1 + 0x231c) = *(undefined4 *)(iVar21 + 0x20);
          *(undefined4 *)(param_1 + 0x2320) = *(undefined4 *)(iVar21 + 0x24);
          FUN_089e07b0(iVar21,"afx_130m__CN_BA",0);
        }
        else {
          *(undefined4 *)(param_1 + 0x231c) = 0;
          *(undefined4 *)(param_1 + 0x2320) = 0;
        }
        *(float *)(param_1 + 0x2324) = *(float *)(param_1 + 0x231c) - *(float *)(param_1 + 0x2314);
        *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
        *(float *)(param_1 + 9000) = *(float *)(param_1 + 0x2320) - *(float *)(param_1 + 0x2318);
        return false;
      }
      if (cVar1 < '\x04') {
        fVar24 = *(float *)(param_1 + 0x2300) + 0.0625;
        *(float *)(param_1 + 0x2300) = fVar24;
        *(float *)(*(int *)(param_1 + 0x226c) + 0x20) =
             *(float *)(param_1 + 0x2314) + fVar24 * fVar24 * *(float *)(param_1 + 0x2324);
        *(float *)(*(int *)(param_1 + 0x226c) + 0x24) =
             *(float *)(param_1 + 0x2318) +
             *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
             *(float *)(param_1 + 9000);
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = FUN_0899a640(param_1,2,0);
        uVar23 = vmul_s(uVar23,in_V7C);
        auVar3 = vidt_q();
        auVar6 = vrot_q(uVar23,0,1,2,0);
        auVar7 = vrot_q(uVar23,0,3,1,0);
        auVar4 = vidt_q();
        *(int *)(iVar21 + 0x80) = auVar3._0_4_;
        *(int *)(iVar21 + 0x84) = auVar3._4_4_;
        *(int *)(iVar21 + 0x88) = auVar3._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
        *(int *)(iVar21 + 0x90) = auVar6._0_4_;
        *(int *)(iVar21 + 0x94) = auVar6._4_4_;
        *(int *)(iVar21 + 0x98) = auVar6._8_4_;
        *(int *)(iVar21 + 0x9c) = auVar6._12_4_;
        *(int *)(iVar21 + 0xa0) = auVar7._0_4_;
        *(int *)(iVar21 + 0xa4) = auVar7._4_4_;
        *(int *)(iVar21 + 0xa8) = auVar7._8_4_;
        *(int *)(iVar21 + 0xac) = auVar7._12_4_;
        *(int *)(iVar21 + 0xb0) = auVar4._0_4_;
        *(int *)(iVar21 + 0xb4) = auVar4._4_4_;
        *(int *)(iVar21 + 0xb8) = auVar4._8_4_;
        *(int *)(iVar21 + 0xbc) = auVar4._12_4_;
        if (*(char *)(param_1 + 0x109c) == '\0') {
          iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
          local_80 = *(float *)(param_1 + 0x2310) +
                     *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) * 2.4;
          local_74 = 0;
          auVar3 = vscl_q(*(undefined (*) [16])(iVar21 + 0x80),local_80);
          auVar4 = vscl_q(*(undefined (*) [16])(iVar21 + 0x90),local_80);
          auVar6 = vscl_q(*(undefined (*) [16])(iVar21 + 0xa0),local_80);
          *(int *)*(undefined (*) [16])(iVar21 + 0x80) = auVar3._0_4_;
          *(int *)(iVar21 + 0x84) = auVar3._4_4_;
          *(int *)(iVar21 + 0x88) = auVar3._8_4_;
          *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
          *(int *)(iVar21 + 0x90) = auVar4._0_4_;
          *(int *)(iVar21 + 0x94) = auVar4._4_4_;
          *(int *)(iVar21 + 0x98) = auVar4._8_4_;
          *(int *)(iVar21 + 0x9c) = auVar4._12_4_;
          *(int *)(iVar21 + 0xa0) = auVar6._0_4_;
          *(int *)(iVar21 + 0xa4) = auVar6._4_4_;
          *(int *)(iVar21 + 0xa8) = auVar6._8_4_;
          *(int *)(iVar21 + 0xac) = auVar6._12_4_;
          *(float *)(*(int *)(param_1 + 0x226c) + 0x6c) =
               1.0 - *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300);
          iVar21 = *(int *)(param_1 + 0x226c);
          local_7c = local_80;
          local_78 = local_80;
        }
        else {
          iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
          local_90 = *(float *)(param_1 + 0x2310) -
                     *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) * 0.6;
          local_84 = 0;
          auVar3 = vscl_q(*(undefined (*) [16])(iVar21 + 0x80),local_90);
          auVar4 = vscl_q(*(undefined (*) [16])(iVar21 + 0x90),local_90);
          auVar6 = vscl_q(*(undefined (*) [16])(iVar21 + 0xa0),local_90);
          *(int *)*(undefined (*) [16])(iVar21 + 0x80) = auVar3._0_4_;
          *(int *)(iVar21 + 0x84) = auVar3._4_4_;
          *(int *)(iVar21 + 0x88) = auVar3._8_4_;
          *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
          *(int *)(iVar21 + 0x90) = auVar4._0_4_;
          *(int *)(iVar21 + 0x94) = auVar4._4_4_;
          *(int *)(iVar21 + 0x98) = auVar4._8_4_;
          *(int *)(iVar21 + 0x9c) = auVar4._12_4_;
          *(int *)(iVar21 + 0xa0) = auVar6._0_4_;
          *(int *)(iVar21 + 0xa4) = auVar6._4_4_;
          *(int *)(iVar21 + 0xa8) = auVar6._8_4_;
          *(int *)(iVar21 + 0xac) = auVar6._12_4_;
          iVar21 = *(int *)(param_1 + 0x226c);
          local_8c = local_90;
          local_88 = local_90;
        }
        iVar21 = *(int *)(iVar21 + 0x130);
        uVar23 = FUN_0899a640(param_1,2,1);
        uVar23 = vmul_s(uVar23,in_V7C);
        auVar6 = vrot_q(uVar23,1,0,3,0);
        auVar3 = vidt_q();
        auVar7 = vrot_q(uVar23,2,0,1,0);
        auVar4 = vidt_q();
        auVar16._48_16_ = auVar4;
        auVar16._44_4_ = auVar7._12_4_;
        auVar16._40_4_ = auVar7._8_4_;
        auVar16._36_4_ = auVar7._4_4_;
        auVar16._32_4_ = auVar7._0_4_;
        auVar16._28_4_ = auVar3._12_4_;
        auVar16._24_4_ = auVar3._8_4_;
        auVar16._20_4_ = auVar3._4_4_;
        auVar16._16_4_ = auVar3._0_4_;
        auVar16._12_4_ = auVar6._12_4_;
        auVar16._8_4_ = auVar6._8_4_;
        auVar16._4_4_ = auVar6._4_4_;
        auVar16._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar16);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
        uVar23 = FUN_0899a640(param_1,2,2);
        uVar23 = vmul_s(uVar23,in_V7C);
        auVar6 = vrot_q(uVar23,1,2,0,0);
        auVar7 = vrot_q(uVar23,3,1,0,0);
        auVar3 = vidt_q();
        auVar4 = vidt_q();
        auVar17._48_16_ = auVar4;
        auVar17._44_4_ = auVar3._12_4_;
        auVar17._40_4_ = auVar3._8_4_;
        auVar17._36_4_ = auVar3._4_4_;
        auVar17._32_4_ = auVar3._0_4_;
        auVar17._28_4_ = auVar7._12_4_;
        auVar17._24_4_ = auVar7._8_4_;
        auVar17._20_4_ = auVar7._4_4_;
        auVar17._16_4_ = auVar7._0_4_;
        auVar17._12_4_ = auVar6._12_4_;
        auVar17._8_4_ = auVar6._8_4_;
        auVar17._4_4_ = auVar6._4_4_;
        auVar17._0_4_ = auVar6._0_4_;
        auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar17);
        *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
        *(int *)(iVar21 + 0x84) = auVar5._4_4_;
        *(int *)(iVar21 + 0x88) = auVar5._8_4_;
        *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
        *(int *)(iVar21 + 0x90) = auVar5._16_4_;
        *(int *)(iVar21 + 0x94) = auVar5._20_4_;
        *(int *)(iVar21 + 0x98) = auVar5._24_4_;
        *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
        *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
        *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
        *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
        *(int *)(iVar21 + 0xac) = auVar5._44_4_;
        *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
        *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
        *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
        *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
        bVar2 = 1.0 <= *(float *)(param_1 + 0x2300);
        if (bVar2) {
          *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x6c) = 0;
          *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
          iVar21 = *(int *)(param_1 + 0x226c);
        }
        else {
          iVar21 = *(int *)(param_1 + 0x226c);
        }
        iVar22 = *(int *)(iVar21 + 0x130);
        uVar23 = *(undefined4 *)(iVar21 + 0x24);
        uVar8 = *(undefined4 *)(iVar21 + 0x28);
        uVar9 = *(undefined4 *)(iVar21 + 0x2c);
        *(undefined4 *)(iVar22 + 0xb0) = *(undefined4 *)(iVar21 + 0x20);
        *(undefined4 *)(iVar22 + 0xb4) = uVar23;
        *(undefined4 *)(iVar22 + 0xb8) = uVar8;
        *(undefined4 *)(iVar22 + 0xbc) = uVar9;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
        return bVar2;
      }
    }
    return true;
  }
  cVar1 = *(char *)(param_1 + 0x2308);
  if ('\x01' < cVar1) {
    if (cVar1 < '\x03') {
      *(undefined4 *)(param_1 + 0x2300) = 0;
      *(undefined4 *)(param_1 + 0x2310) = 0x3f19999a;
      *(undefined4 *)(param_1 + 0x2314) = *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x20);
      *(undefined4 *)(param_1 + 0x2318) = *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x24);
      *(undefined4 *)(param_1 + 0x231c) = 0xc0800000;
      *(undefined4 *)(param_1 + 0x2320) = 0xc2480000;
      *(float *)(param_1 + 0x2324) = -4.0 - *(float *)(param_1 + 0x2314);
      *(float *)(param_1 + 9000) = -50.0 - *(float *)(param_1 + 0x2318);
      *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
      return false;
    }
    if (cVar1 < '\x04') {
      fVar24 = *(float *)(param_1 + 0x2300) + 0.0625;
      *(float *)(param_1 + 0x2300) = fVar24;
      *(float *)(*(int *)(param_1 + 0x226c) + 0x20) =
           *(float *)(param_1 + 0x2314) + fVar24 * fVar24 * *(float *)(param_1 + 0x2324);
      *(float *)(*(int *)(param_1 + 0x226c) + 0x24) =
           *(float *)(param_1 + 0x2318) +
           *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 9000);
      iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
      uVar23 = FUN_0899a640(param_1,3,0);
      uVar23 = vmul_s(uVar23,in_V7C);
      auVar3 = vidt_q();
      auVar6 = vrot_q(uVar23,0,1,2,0);
      auVar7 = vrot_q(uVar23,0,3,1,0);
      auVar4 = vidt_q();
      *(int *)(iVar21 + 0x80) = auVar3._0_4_;
      *(int *)(iVar21 + 0x84) = auVar3._4_4_;
      *(int *)(iVar21 + 0x88) = auVar3._8_4_;
      *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
      *(int *)(iVar21 + 0x90) = auVar6._0_4_;
      *(int *)(iVar21 + 0x94) = auVar6._4_4_;
      *(int *)(iVar21 + 0x98) = auVar6._8_4_;
      *(int *)(iVar21 + 0x9c) = auVar6._12_4_;
      *(int *)(iVar21 + 0xa0) = auVar7._0_4_;
      *(int *)(iVar21 + 0xa4) = auVar7._4_4_;
      *(int *)(iVar21 + 0xa8) = auVar7._8_4_;
      *(int *)(iVar21 + 0xac) = auVar7._12_4_;
      *(int *)(iVar21 + 0xb0) = auVar4._0_4_;
      *(int *)(iVar21 + 0xb4) = auVar4._4_4_;
      *(int *)(iVar21 + 0xb8) = auVar4._8_4_;
      *(int *)(iVar21 + 0xbc) = auVar4._12_4_;
      iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
      local_70 = *(float *)(param_1 + 0x2310) +
                 *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) * 0.6;
      local_64 = 0;
      auVar3 = vscl_q(*(undefined (*) [16])(iVar21 + 0x80),local_70);
      auVar4 = vscl_q(*(undefined (*) [16])(iVar21 + 0x90),local_70);
      auVar6 = vscl_q(*(undefined (*) [16])(iVar21 + 0xa0),local_70);
      *(int *)*(undefined (*) [16])(iVar21 + 0x80) = auVar3._0_4_;
      *(int *)(iVar21 + 0x84) = auVar3._4_4_;
      *(int *)(iVar21 + 0x88) = auVar3._8_4_;
      *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
      *(int *)(iVar21 + 0x90) = auVar4._0_4_;
      *(int *)(iVar21 + 0x94) = auVar4._4_4_;
      *(int *)(iVar21 + 0x98) = auVar4._8_4_;
      *(int *)(iVar21 + 0x9c) = auVar4._12_4_;
      *(int *)(iVar21 + 0xa0) = auVar6._0_4_;
      *(int *)(iVar21 + 0xa4) = auVar6._4_4_;
      *(int *)(iVar21 + 0xa8) = auVar6._8_4_;
      *(int *)(iVar21 + 0xac) = auVar6._12_4_;
      iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
      local_6c = local_70;
      local_68 = local_70;
      uVar23 = FUN_0899a640(param_1,3,1);
      uVar23 = vmul_s(uVar23,in_V7C);
      auVar6 = vrot_q(uVar23,1,0,3,0);
      auVar3 = vidt_q();
      auVar7 = vrot_q(uVar23,2,0,1,0);
      auVar4 = vidt_q();
      auVar5._48_16_ = auVar4;
      auVar5._44_4_ = auVar7._12_4_;
      auVar5._40_4_ = auVar7._8_4_;
      auVar5._36_4_ = auVar7._4_4_;
      auVar5._32_4_ = auVar7._0_4_;
      auVar5._28_4_ = auVar3._12_4_;
      auVar5._24_4_ = auVar3._8_4_;
      auVar5._20_4_ = auVar3._4_4_;
      auVar5._16_4_ = auVar3._0_4_;
      auVar5._12_4_ = auVar6._12_4_;
      auVar5._8_4_ = auVar6._8_4_;
      auVar5._4_4_ = auVar6._4_4_;
      auVar5._0_4_ = auVar6._0_4_;
      auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar5);
      *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
      *(int *)(iVar21 + 0x84) = auVar5._4_4_;
      *(int *)(iVar21 + 0x88) = auVar5._8_4_;
      *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
      *(int *)(iVar21 + 0x90) = auVar5._16_4_;
      *(int *)(iVar21 + 0x94) = auVar5._20_4_;
      *(int *)(iVar21 + 0x98) = auVar5._24_4_;
      *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
      *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
      *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
      *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
      *(int *)(iVar21 + 0xac) = auVar5._44_4_;
      *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
      *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
      *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
      *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
      iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
      uVar23 = FUN_0899a640(param_1,3,2);
      uVar23 = vmul_s(uVar23,in_V7C);
      auVar6 = vrot_q(uVar23,1,2,0,0);
      auVar7 = vrot_q(uVar23,3,1,0,0);
      auVar3 = vidt_q();
      auVar4 = vidt_q();
      auVar20._48_16_ = auVar4;
      auVar20._44_4_ = auVar3._12_4_;
      auVar20._40_4_ = auVar3._8_4_;
      auVar20._36_4_ = auVar3._4_4_;
      auVar20._32_4_ = auVar3._0_4_;
      auVar20._28_4_ = auVar7._12_4_;
      auVar20._24_4_ = auVar7._8_4_;
      auVar20._20_4_ = auVar7._4_4_;
      auVar20._16_4_ = auVar7._0_4_;
      auVar20._12_4_ = auVar6._12_4_;
      auVar20._8_4_ = auVar6._8_4_;
      auVar20._4_4_ = auVar6._4_4_;
      auVar20._0_4_ = auVar6._0_4_;
      auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar20);
      *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
      *(int *)(iVar21 + 0x84) = auVar5._4_4_;
      *(int *)(iVar21 + 0x88) = auVar5._8_4_;
      *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
      *(int *)(iVar21 + 0x90) = auVar5._16_4_;
      *(int *)(iVar21 + 0x94) = auVar5._20_4_;
      *(int *)(iVar21 + 0x98) = auVar5._24_4_;
      *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
      *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
      *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
      *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
      *(int *)(iVar21 + 0xac) = auVar5._44_4_;
      *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
      *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
      *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
      *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
      bVar2 = 1.0 <= *(float *)(param_1 + 0x2300);
      if (bVar2) {
        *(undefined4 *)(*(int *)(param_1 + 0x226c) + 0x6c) = 0;
        *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
        iVar21 = *(int *)(param_1 + 0x226c);
      }
      else {
        iVar21 = *(int *)(param_1 + 0x226c);
      }
      iVar22 = *(int *)(iVar21 + 0x130);
      uVar23 = *(undefined4 *)(iVar21 + 0x24);
      uVar8 = *(undefined4 *)(iVar21 + 0x28);
      uVar9 = *(undefined4 *)(iVar21 + 0x2c);
      *(undefined4 *)(iVar22 + 0xb0) = *(undefined4 *)(iVar21 + 0x20);
      *(undefined4 *)(iVar22 + 0xb4) = uVar23;
      *(undefined4 *)(iVar22 + 0xb8) = uVar8;
      *(undefined4 *)(iVar22 + 0xbc) = uVar9;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
      return bVar2;
    }
    return true;
  }
  if (cVar1 < '\0') {
    return true;
  }
  if (cVar1 < '\x01') {
    fVar24 = *(float *)(param_1 + 0x2270) + *(float *)(param_1 + 0x2280);
    *(undefined4 *)(param_1 + 0x2300) = 0;
    fVar25 = *(float *)(param_1 + 0x2274) + *(float *)(param_1 + 0x2284);
    *(float *)(param_1 + 0x22b0) = fVar24;
    fVar26 = *(float *)(param_1 + 0x2278) + *(float *)(param_1 + 0x2288);
    *(float *)(param_1 + 0x22c0) = fVar24;
    *(float *)(param_1 + 0x22b4) = fVar25;
    *(float *)(param_1 + 0x22c4) = fVar25;
    *(float *)(param_1 + 0x22b8) = fVar26;
    *(float *)(param_1 + 0x22c8) = fVar26;
    uVar23 = FUN_0899a640(param_1,3,0);
    *(undefined4 *)(param_1 + 0x22e0) = uVar23;
    uVar23 = FUN_0899a640(param_1,3,1);
    *(undefined4 *)(param_1 + 0x22e4) = uVar23;
    uVar23 = FUN_0899a640(param_1,3,2);
    *(undefined4 *)(param_1 + 0x22e8) = uVar23;
    FUN_0899830c(*(undefined4 *)(param_1 + 0x22b0),*(undefined4 *)(param_1 + 0x22e0),local_60,
                 param_1);
    *(undefined4 *)(param_1 + 0x22f0) = local_5c;
    *(undefined *)(param_1 + 0x230a) = local_60[0];
    FUN_0899830c(*(undefined4 *)(param_1 + 0x22b4),*(undefined4 *)(param_1 + 0x22e4),local_58,
                 param_1);
    *(undefined4 *)(param_1 + 0x22f4) = local_54;
    *(undefined *)(param_1 + 0x230b) = local_58[0];
    FUN_0899830c(*(undefined4 *)(param_1 + 0x22b8),*(undefined4 *)(param_1 + 0x22e8),local_50,
                 param_1);
    *(undefined4 *)(param_1 + 0x22f8) = local_4c;
    *(undefined *)(param_1 + 0x230c) = local_50[0];
    *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
    return false;
  }
  *(float *)(param_1 + 0x2300) = *(float *)(param_1 + 0x2300) + 0.0625;
  if (*(char *)(param_1 + 0x230a) == '\0') {
    uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b0) -
                          *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                          *(float *)(param_1 + 0x22f0));
  }
  else {
    uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b0) +
                          *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                          *(float *)(param_1 + 0x22f0));
  }
  *(undefined4 *)(param_1 + 0x2270) = uVar23;
  if (*(char *)(param_1 + 0x230b) == '\0') {
    uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b4) -
                          *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                          *(float *)(param_1 + 0x22f4));
  }
  else {
    uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b4) +
                          *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                          *(float *)(param_1 + 0x22f4));
  }
  *(undefined4 *)(param_1 + 0x2274) = uVar23;
  if (*(char *)(param_1 + 0x230c) == '\0') {
    uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b8) -
                          *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                          *(float *)(param_1 + 0x22f8));
  }
  else {
    uVar23 = FUN_089a4dc8(*(float *)(param_1 + 0x22b8) +
                          *(float *)(param_1 + 0x2300) * *(float *)(param_1 + 0x2300) *
                          *(float *)(param_1 + 0x22f8));
  }
  *(undefined4 *)(param_1 + 0x2278) = uVar23;
  if (1.0 <= *(float *)(param_1 + 0x2300)) {
    *(undefined4 *)(param_1 + 0x2270) = *(undefined4 *)(param_1 + 0x22e0);
    *(undefined4 *)(param_1 + 0x2274) = *(undefined4 *)(param_1 + 0x22e4);
    *(undefined4 *)(param_1 + 0x2278) = *(undefined4 *)(param_1 + 0x22e8);
    *(char *)(param_1 + 0x2308) = *(char *)(param_1 + 0x2308) + '\x01';
  }
  iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
  uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2270),in_V7C);
  auVar3 = vidt_q();
  auVar6 = vrot_q(uVar23,0,1,2,0);
  auVar7 = vrot_q(uVar23,0,3,1,0);
  auVar4 = vidt_q();
  *(int *)(iVar21 + 0x80) = auVar3._0_4_;
  *(int *)(iVar21 + 0x84) = auVar3._4_4_;
  *(int *)(iVar21 + 0x88) = auVar3._8_4_;
  *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar21 + 0x90) = auVar6._0_4_;
  *(int *)(iVar21 + 0x94) = auVar6._4_4_;
  *(int *)(iVar21 + 0x98) = auVar6._8_4_;
  *(int *)(iVar21 + 0x9c) = auVar6._12_4_;
  *(int *)(iVar21 + 0xa0) = auVar7._0_4_;
  *(int *)(iVar21 + 0xa4) = auVar7._4_4_;
  *(int *)(iVar21 + 0xa8) = auVar7._8_4_;
  *(int *)(iVar21 + 0xac) = auVar7._12_4_;
  *(int *)(iVar21 + 0xb0) = auVar4._0_4_;
  *(int *)(iVar21 + 0xb4) = auVar4._4_4_;
  *(int *)(iVar21 + 0xb8) = auVar4._8_4_;
  *(int *)(iVar21 + 0xbc) = auVar4._12_4_;
  iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
  auVar3 = vscl_q(*(undefined (*) [16])(iVar21 + 0x80),0x3f19999a);
  auVar4 = vscl_q(*(undefined (*) [16])(iVar21 + 0x90),0x3f19999a);
  auVar6 = vscl_q(*(undefined (*) [16])(iVar21 + 0xa0),0x3f19999a);
  *(int *)*(undefined (*) [16])(iVar21 + 0x80) = auVar3._0_4_;
  *(int *)(iVar21 + 0x84) = auVar3._4_4_;
  *(int *)(iVar21 + 0x88) = auVar3._8_4_;
  *(int *)(iVar21 + 0x8c) = auVar3._12_4_;
  *(int *)(iVar21 + 0x90) = auVar4._0_4_;
  *(int *)(iVar21 + 0x94) = auVar4._4_4_;
  *(int *)(iVar21 + 0x98) = auVar4._8_4_;
  *(int *)(iVar21 + 0x9c) = auVar4._12_4_;
  *(int *)(iVar21 + 0xa0) = auVar6._0_4_;
  *(int *)(iVar21 + 0xa4) = auVar6._4_4_;
  *(int *)(iVar21 + 0xa8) = auVar6._8_4_;
  *(int *)(iVar21 + 0xac) = auVar6._12_4_;
  iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
  uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2274),in_V7C);
  auVar6 = vrot_q(uVar23,1,0,3,0);
  auVar3 = vidt_q();
  auVar7 = vrot_q(uVar23,2,0,1,0);
  auVar4 = vidt_q();
  auVar18._48_16_ = auVar4;
  auVar18._44_4_ = auVar7._12_4_;
  auVar18._40_4_ = auVar7._8_4_;
  auVar18._36_4_ = auVar7._4_4_;
  auVar18._32_4_ = auVar7._0_4_;
  auVar18._28_4_ = auVar3._12_4_;
  auVar18._24_4_ = auVar3._8_4_;
  auVar18._20_4_ = auVar3._4_4_;
  auVar18._16_4_ = auVar3._0_4_;
  auVar18._12_4_ = auVar6._12_4_;
  auVar18._8_4_ = auVar6._8_4_;
  auVar18._4_4_ = auVar6._4_4_;
  auVar18._0_4_ = auVar6._0_4_;
  auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar18);
  *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
  *(int *)(iVar21 + 0x84) = auVar5._4_4_;
  *(int *)(iVar21 + 0x88) = auVar5._8_4_;
  *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
  *(int *)(iVar21 + 0x90) = auVar5._16_4_;
  *(int *)(iVar21 + 0x94) = auVar5._20_4_;
  *(int *)(iVar21 + 0x98) = auVar5._24_4_;
  *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
  *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
  *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
  *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
  *(int *)(iVar21 + 0xac) = auVar5._44_4_;
  *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
  *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
  *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
  *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
  iVar21 = *(int *)(*(int *)(param_1 + 0x226c) + 0x130);
  uVar23 = vmul_s(*(undefined4 *)(param_1 + 0x2278),in_V7C);
  auVar6 = vrot_q(uVar23,1,2,0,0);
  auVar7 = vrot_q(uVar23,3,1,0,0);
  auVar3 = vidt_q();
  auVar4 = vidt_q();
  auVar19._48_16_ = auVar4;
  auVar19._44_4_ = auVar3._12_4_;
  auVar19._40_4_ = auVar3._8_4_;
  auVar19._36_4_ = auVar3._4_4_;
  auVar19._32_4_ = auVar3._0_4_;
  auVar19._28_4_ = auVar7._12_4_;
  auVar19._24_4_ = auVar7._8_4_;
  auVar19._20_4_ = auVar7._4_4_;
  auVar19._16_4_ = auVar7._0_4_;
  auVar19._12_4_ = auVar6._12_4_;
  auVar19._8_4_ = auVar6._8_4_;
  auVar19._4_4_ = auVar6._4_4_;
  auVar19._0_4_ = auVar6._0_4_;
  auVar5 = vmmul_q(*(undefined (*) [64])(iVar21 + 0x80),auVar19);
  *(int *)*(undefined (*) [64])(iVar21 + 0x80) = auVar5._0_4_;
  *(int *)(iVar21 + 0x84) = auVar5._4_4_;
  *(int *)(iVar21 + 0x88) = auVar5._8_4_;
  *(int *)(iVar21 + 0x8c) = auVar5._12_4_;
  *(int *)(iVar21 + 0x90) = auVar5._16_4_;
  *(int *)(iVar21 + 0x94) = auVar5._20_4_;
  *(int *)(iVar21 + 0x98) = auVar5._24_4_;
  *(int *)(iVar21 + 0x9c) = auVar5._28_4_;
  *(int *)(iVar21 + 0xa0) = auVar5._32_4_;
  *(int *)(iVar21 + 0xa4) = auVar5._36_4_;
  *(int *)(iVar21 + 0xa8) = auVar5._40_4_;
  *(int *)(iVar21 + 0xac) = auVar5._44_4_;
  *(int *)(iVar21 + 0xb0) = auVar5._48_4_;
  *(int *)(iVar21 + 0xb4) = auVar5._52_4_;
  *(int *)(iVar21 + 0xb8) = auVar5._56_4_;
  *(int *)(iVar21 + 0xbc) = auVar5._60_4_;
  iVar21 = *(int *)(param_1 + 0x226c);
  iVar22 = *(int *)(iVar21 + 0x130);
  uVar23 = *(undefined4 *)(iVar21 + 0x24);
  uVar8 = *(undefined4 *)(iVar21 + 0x28);
  uVar9 = *(undefined4 *)(iVar21 + 0x2c);
  *(undefined4 *)(iVar22 + 0xb0) = *(undefined4 *)(iVar21 + 0x20);
  *(undefined4 *)(iVar22 + 0xb4) = uVar23;
  *(undefined4 *)(iVar22 + 0xb8) = uVar8;
  *(undefined4 *)(iVar22 + 0xbc) = uVar9;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x226c) + 0x130) + 0xbc) = 0x3f800000;
  return false;
}

