#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b6fc0(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [64];
  undefined auVar8 [12];
  char cVar9;
  int iVar10;
  undefined (*pauVar11) [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 in_V7C;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    if (*(int *)(param_1 + 0x5c) + 0x50 <= *(int *)(param_1 + 0x50)) {
      FUN_088b6748(param_1);
      return;
    }
    goto LAB_088b7484;
  }
  switch(*(undefined4 *)(param_1 + 0x54)) {
  case 0:
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar10 = DONE_NotZero_DAT_08AC5258();
      if (iVar10 == 0) {
        cVar9 = *(char *)(param_1 + 0x75);
      }
      else {
        uVar17 = DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar17,0x200198,param_1 + 0x20,0,1);
        cVar9 = *(char *)(param_1 + 0x75);
      }
    }
    else {
      iVar10 = DONE_NotZero_DAT_08AC5258();
      if (iVar10 == 0) {
        cVar9 = *(char *)(param_1 + 0x75);
      }
      else {
        uVar17 = DONE_Get_DAT_08AC5258();
        FUN_089c00c4(uVar17,0x200197,param_1 + 0x20,0,1);
        cVar9 = *(char *)(param_1 + 0x75);
      }
    }
    if (cVar9 == '\0') {
      *(undefined4 *)(param_1 + 0x54) = 5;
      goto LAB_088b7484;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  case 1:
    iVar10 = *(int *)(param_1 + 0x70) + 1;
    *(int *)(param_1 + 0x70) = iVar10;
    if (iVar10 < 0x14) {
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x3c);
      uVar17 = vmul_s((float)*(int *)(param_1 + 0x70) * 0.05 * 3.141593 * 0.9,in_V7C);
      fVar13 = (float)vsin_s(uVar17);
      *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) + fVar13 * 250.0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 5;
    }
LAB_088b7484:
    cVar9 = *(char *)(param_1 + 0x74);
    break;
  case 5:
    if (*(int *)(param_1 + 0x50) < 0x1f) goto LAB_088b7484;
    *(undefined4 *)(param_1 + 0x54) = 10;
    goto LAB_088b7174;
  case 10:
LAB_088b7174:
    iVar10 = *(int *)(param_1 + 0x6c);
    *(int *)(param_1 + 0x6c) = iVar10 + -1;
    if (iVar10 < 0) {
      FUN_088b6748(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x6c) < 0x5a) {
      *(undefined *)(param_1 + 0x74) = 1;
    }
    iVar10 = FUN_088b6908(param_1);
    if (iVar10 == 0) {
      cVar9 = *(char *)(param_1 + 0x74);
      break;
    }
    *(undefined *)(param_1 + 0x74) = 0;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if ((DAT_08b00958 & 1) == 0) {
      uVar17 = 0xbfc90fdb;
    }
    else {
      uVar17 = 0x3fc90fdb;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar17;
    fVar13 = (float)FUN_089bedc4(0x3f20d97c);
    *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
    *(float *)(param_1 + 100) = fVar13 + 0.6283185;
    goto LAB_088b7484;
  case 0xb:
    iVar10 = *(int *)(param_1 + 0x40);
    auVar1._4_4_ = *(float *)(iVar10 + 0x24) + 100.0;
    auVar1._0_4_ = *(undefined4 *)(iVar10 + 0x20);
    auVar1._8_4_ = *(undefined4 *)(iVar10 + 0x28);
    pauVar11 = (undefined (*) [12])(param_1 + 0x20);
    auVar1 = vsub_t(auVar1,*pauVar11);
    fVar13 = auVar1._0_4_;
    fVar14 = auVar1._8_4_;
    fVar16 = (float)vdot_t(auVar1,auVar1);
    if (fVar16 < 6400.0) {
      FUN_088b6a40(param_1);
      FUN_088b6748(param_1);
      return;
    }
    fVar12 = (float)atan2f(fVar14,fVar13);
    fVar12 = fVar12 + *(float *)(param_1 + 0x60) * *(float *)(param_1 + 0x68);
    fVar13 = (float)atan2f(auVar1._4_4_,SQRT(fVar13 * fVar13 + fVar14 * fVar14));
    fVar13 = fVar13 + *(float *)(param_1 + 100) * *(float *)(param_1 + 0x68);
    uVar17 = vmul_s(fVar13,in_V7C);
    fVar14 = (float)vcos_s(uVar17);
    uVar17 = vmul_s(fVar12,in_V7C);
    fVar15 = (float)vcos_s(uVar17);
    uVar17 = vmul_s(fVar13,in_V7C);
    uVar17 = vsin_s(uVar17);
    uVar18 = vmul_s(fVar12,in_V7C);
    fVar13 = (float)vsin_s(uVar18);
    if (*(float *)(param_1 + 0x58) < 60.0) {
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + 2.0;
    }
    if (SQRT(fVar16) * 1.5 < *(float *)(param_1 + 0x58)) {
      *(float *)(param_1 + 0x58) = SQRT(fVar16) * 1.5;
    }
    auVar8._4_4_ = uVar17;
    auVar8._0_4_ = fVar15 * fVar14;
    auVar8._8_4_ = fVar13 * fVar14;
    auVar1 = vscl_t(auVar8,*(undefined4 *)(param_1 + 0x58));
    uVar17 = *(undefined4 *)(param_1 + 0x2c);
    auVar1 = vadd_t(*pauVar11,auVar1);
    *(int *)*pauVar11 = auVar1._0_4_;
    *(int *)(param_1 + 0x24) = auVar1._4_4_;
    *(int *)(param_1 + 0x28) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x2c) = uVar17;
    fVar13 = *(float *)(param_1 + 0x68) - 0.03;
    *(float *)(param_1 + 0x68) = fVar13;
    if (0.0 <= fVar13) goto LAB_088b7484;
    *(undefined4 *)(param_1 + 0x68) = 0;
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
    cVar9 = *(char *)(param_1 + 0x74);
    break;
  default:
    cVar9 = *(char *)(param_1 + 0x74);
  }
  if (cVar9 == '\0') {
    iVar10 = *(int *)(param_1 + 0x4c);
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar10 = *(int *)(param_1 + 0x4c);
    }
    else {
      if ((*(uint *)(param_1 + 0x50) & 1) == 0) {
        *(uint *)(*(int *)(param_1 + 0x48) + 0xd0) = *(uint *)(*(int *)(param_1 + 0x48) + 0xd0) | 1;
      }
      else {
        *(uint *)(*(int *)(param_1 + 0x48) + 0xd0) =
             *(uint *)(*(int *)(param_1 + 0x48) + 0xd0) & 0xfffffffe;
      }
      iVar10 = *(int *)(param_1 + 0x4c);
    }
    if (iVar10 == 0) {
      iVar10 = *(int *)(param_1 + 0x4c);
    }
    else {
      *(byte *)(*(int *)(param_1 + 0x4c) + 0xb8) = (byte)*(undefined4 *)(param_1 + 0x50) & 1;
      iVar10 = *(int *)(param_1 + 0x4c);
    }
  }
  if (iVar10 == 0) {
    iVar10 = *(int *)(param_1 + 0x50);
  }
  else {
    iVar10 = *(int *)(*(int *)(param_1 + 0x4c) + 0x130);
    auVar4 = vmidt_q();
    uVar18 = vmov_s(0x41200000);
    uVar19 = vmov_s(0x41200000);
    uVar20 = vmov_s(0x41200000);
    uVar17 = vmul_s((float)*(int *)(param_1 + 0x50) * 0.1,in_V7C);
    auVar5 = vrot_q(uVar17,1,0,3,0);
    auVar2 = vidt_q();
    auVar6 = vrot_q(uVar17,2,0,1,0);
    auVar3 = vidt_q();
    auVar7._60_4_ = auVar4._60_4_;
    auVar7._56_4_ = auVar4._44_4_;
    auVar7._52_4_ = auVar4._28_4_;
    auVar7._48_4_ = auVar4._12_4_;
    auVar7._44_4_ = auVar4._56_4_;
    auVar7._40_4_ = uVar20;
    auVar7._36_4_ = auVar4._24_4_;
    auVar7._32_4_ = auVar4._8_4_;
    auVar7._28_4_ = auVar4._52_4_;
    auVar7._24_4_ = auVar4._36_4_;
    auVar7._20_4_ = uVar19;
    auVar7._16_4_ = auVar4._4_4_;
    auVar7._12_4_ = auVar4._48_4_;
    auVar7._8_4_ = auVar4._32_4_;
    auVar7._4_4_ = auVar4._16_4_;
    auVar7._0_4_ = uVar18;
    auVar4._48_16_ = auVar3;
    auVar4._44_4_ = auVar6._12_4_;
    auVar4._40_4_ = auVar6._8_4_;
    auVar4._36_4_ = auVar6._4_4_;
    auVar4._32_4_ = auVar6._0_4_;
    auVar4._28_4_ = auVar2._12_4_;
    auVar4._24_4_ = auVar2._8_4_;
    auVar4._20_4_ = auVar2._4_4_;
    auVar4._16_4_ = auVar2._0_4_;
    auVar4._12_4_ = auVar5._12_4_;
    auVar4._8_4_ = auVar5._8_4_;
    auVar4._4_4_ = auVar5._4_4_;
    auVar4._0_4_ = auVar5._0_4_;
    auVar4 = vmmul_q(auVar7,auVar4);
    *(int *)(iVar10 + 0x80) = auVar4._0_4_;
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
    iVar10 = *(int *)(*(int *)(param_1 + 0x4c) + 0x130);
    uVar17 = *(undefined4 *)(param_1 + 0x24);
    uVar18 = *(undefined4 *)(param_1 + 0x28);
    uVar19 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar10 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar10 + 0xb4) = uVar17;
    *(undefined4 *)(iVar10 + 0xb8) = uVar18;
    *(undefined4 *)(iVar10 + 0xbc) = uVar19;
    iVar10 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar10 + 1;
  return;
}

