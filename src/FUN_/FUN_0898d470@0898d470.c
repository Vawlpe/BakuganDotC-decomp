#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0898d470(int param_1,char param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  undefined auVar7 [64];
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 in_V7C;
  
  cVar9 = '\0';
  if (*(char *)(param_1 + 0xe7b) == '\0') {
    fVar15 = 16.0;
  }
  else {
    fVar15 = 8.0;
  }
  iVar11 = 0;
  cVar13 = '\0';
  iVar10 = param_1;
  do {
    if (*(int *)(iVar10 + 0x1208) != 0) {
      cVar13 = cVar13 + '\x01';
    }
    iVar11 = iVar11 + 1;
    iVar10 = iVar10 + 4;
  } while (iVar11 < 6);
  if (cVar13 == '\0') {
    return true;
  }
  if (param_2 == '\0') {
    iVar12 = 0;
    iVar10 = param_1;
    iVar11 = param_1;
    do {
      if (*(int *)(iVar10 + 0x1208) != 0) {
        fVar14 = *(float *)(param_1 + 0x12ac);
        fVar16 = *(float *)(iVar11 + 0x10ec) + 1.0 / fVar15;
        *(float *)(iVar11 + 0x10ec) = fVar16;
        fVar16 = fVar16 - 1.0;
        *(float *)(*(int *)(iVar10 + 0x1208) + 0x6c) =
             *(float *)(iVar11 + 0x10f0) + (1.0 - fVar16 * fVar16);
        iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
        uVar17 = vmul_s(0x4048f5c3,in_V7C);
        auVar4 = vrot_q(uVar17,1,0,3,0);
        auVar1 = vidt_q();
        auVar5 = vrot_q(uVar17,2,0,1,0);
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
        iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
        uVar17 = vmul_s(0x80000000,in_V7C);
        auVar1 = vidt_q();
        auVar4 = vrot_q(uVar17,0,1,2,0);
        auVar5 = vrot_q(uVar17,0,3,1,0);
        auVar2 = vidt_q();
        auVar6._48_16_ = auVar2;
        auVar6._44_4_ = auVar5._12_4_;
        auVar6._40_4_ = auVar5._8_4_;
        auVar6._36_4_ = auVar5._4_4_;
        auVar6._32_4_ = auVar5._0_4_;
        auVar6._28_4_ = auVar4._12_4_;
        auVar6._24_4_ = auVar4._8_4_;
        auVar6._20_4_ = auVar4._4_4_;
        auVar6._16_4_ = auVar4._0_4_;
        auVar6._12_4_ = auVar1._12_4_;
        auVar6._8_4_ = auVar1._8_4_;
        auVar6._4_4_ = auVar1._4_4_;
        auVar6._0_4_ = auVar1._0_4_;
        auVar3 = vmmul_q(*(undefined (*) [64])(iVar8 + 0x80),auVar6);
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
        fVar16 = *(float *)(iVar11 + 0x10ec) - 1.0;
        fVar16 = *(float *)(iVar11 + 0x10f4) - (1.0 - fVar16 * fVar16) * (0.12 - fVar14);
        *(float *)(iVar10 + 0x1294) = fVar16;
        iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
        auVar1 = vscl_q(*(undefined (*) [16])(iVar8 + 0x80),fVar16);
        auVar2 = vscl_q(*(undefined (*) [16])(iVar8 + 0x90),fVar16);
        auVar4 = vscl_q(*(undefined (*) [16])(iVar8 + 0xa0),fVar16);
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
        if (1.0 <= *(float *)(iVar11 + 0x10ec)) {
          *(undefined4 *)(*(int *)(iVar10 + 0x1208) + 0x6c) = 0x3f800000;
          iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
          uVar17 = vmul_s(0x4048f5c3,in_V7C);
          auVar4 = vrot_q(uVar17,1,0,3,0);
          auVar1 = vidt_q();
          auVar5 = vrot_q(uVar17,2,0,1,0);
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
          iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
          uVar17 = vmul_s(0x80000000,in_V7C);
          auVar1 = vidt_q();
          auVar4 = vrot_q(uVar17,0,1,2,0);
          auVar5 = vrot_q(uVar17,0,3,1,0);
          auVar2 = vidt_q();
          auVar7._48_16_ = auVar2;
          auVar7._44_4_ = auVar5._12_4_;
          auVar7._40_4_ = auVar5._8_4_;
          auVar7._36_4_ = auVar5._4_4_;
          auVar7._32_4_ = auVar5._0_4_;
          auVar7._28_4_ = auVar4._12_4_;
          auVar7._24_4_ = auVar4._8_4_;
          auVar7._20_4_ = auVar4._4_4_;
          auVar7._16_4_ = auVar4._0_4_;
          auVar7._12_4_ = auVar1._12_4_;
          auVar7._8_4_ = auVar1._8_4_;
          auVar7._4_4_ = auVar1._4_4_;
          auVar7._0_4_ = auVar1._0_4_;
          auVar3 = vmmul_q(*(undefined (*) [64])(iVar8 + 0x80),auVar7);
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
          *(float *)(iVar10 + 0x1294) = fVar14;
          iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
          auVar1 = vscl_q(*(undefined (*) [16])(iVar8 + 0x80),fVar14);
          auVar2 = vscl_q(*(undefined (*) [16])(iVar8 + 0x90),fVar14);
          auVar4 = vscl_q(*(undefined (*) [16])(iVar8 + 0xa0),fVar14);
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
          cVar9 = cVar9 + '\x01';
        }
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 4;
      iVar11 = iVar11 + 0x28;
    } while (iVar12 < 6);
    return cVar9 != '\0';
  }
  iVar12 = 0;
  iVar10 = param_1;
  iVar11 = param_1;
  do {
    if (*(int *)(iVar10 + 0x1208) != 0) {
      fVar14 = *(float *)(param_1 + 0x12ac);
      fVar16 = *(float *)(iVar11 + 0x10ec) + 1.0 / fVar15;
      *(float *)(iVar11 + 0x10ec) = fVar16;
      *(float *)(*(int *)(iVar10 + 0x1208) + 0x6c) = *(float *)(iVar11 + 0x10f0) - fVar16 * fVar16;
      iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
      uVar17 = vmul_s(0x4048f5c3,in_V7C);
      auVar4 = vrot_q(uVar17,1,0,3,0);
      auVar1 = vidt_q();
      auVar5 = vrot_q(uVar17,2,0,1,0);
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
      iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
      uVar17 = vmul_s(0x80000000,in_V7C);
      auVar1 = vidt_q();
      auVar4 = vrot_q(uVar17,0,1,2,0);
      auVar5 = vrot_q(uVar17,0,3,1,0);
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
      fVar14 = *(float *)(iVar11 + 0x10f4) +
               *(float *)(iVar11 + 0x10ec) * *(float *)(iVar11 + 0x10ec) * (0.12 - fVar14);
      *(float *)(iVar10 + 0x1294) = fVar14;
      iVar8 = *(int *)(*(int *)(iVar10 + 0x1208) + 0x130);
      auVar1 = vscl_q(*(undefined (*) [16])(iVar8 + 0x80),fVar14);
      auVar2 = vscl_q(*(undefined (*) [16])(iVar8 + 0x90),fVar14);
      auVar4 = vscl_q(*(undefined (*) [16])(iVar8 + 0xa0),fVar14);
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
      if (1.0 <= *(float *)(iVar11 + 0x10ec)) {
        cVar9 = cVar9 + '\x01';
        *(undefined4 *)(*(int *)(iVar10 + 0x1208) + 0x6c) = 0;
      }
    }
    iVar12 = iVar12 + 1;
    iVar10 = iVar10 + 4;
    iVar11 = iVar11 + 0x28;
  } while (iVar12 < 6);
  return cVar9 != '\0';
}

