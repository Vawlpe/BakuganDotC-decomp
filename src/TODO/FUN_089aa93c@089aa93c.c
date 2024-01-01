#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089aa93c(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined auVar8 [64];
  undefined uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined (*pauVar12) [64];
  int iVar13;
  float fVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 in_V7C;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  
  FUN_089a50c0(0);
  fVar14 = 1.256;
  puVar17 = local_60;
  uVar16 = 0xbfc90fdb;
  if (((int)*(char *)(*(int *)(param_1 + 0x20) + 8) & 0x80U) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x20) != 0) {
      if (*(char *)(param_1 + 0x680) == '\x01') {
        *(undefined4 *)(param_1 + 0x684) = 0x40800000;
      }
      goto LAB_089aa9d8;
    }
    iVar10 = *(int *)(param_1 + 0x20);
  }
  else {
    if (*(char *)(param_1 + 0x680) == '\0') {
      *(undefined4 *)(param_1 + 0x684) = 0x40800000;
    }
LAB_089aa9d8:
    iVar10 = *(int *)(param_1 + 0x20);
  }
  if (((int)*(char *)(iVar10 + 4) & 0x80U) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x20) + 4) & 0x20) == 0) {
      fVar24 = *(float *)(param_1 + 0x684);
      goto LAB_089aaa3c;
    }
    if (*(char *)(param_1 + 0x680) == '\x01') {
      *(undefined *)(param_1 + 0x681) = 1;
      *(undefined4 *)(param_1 + 0x684) = 0x40800000;
    }
  }
  else if (*(char *)(param_1 + 0x680) == '\0') {
    *(undefined4 *)(param_1 + 0x684) = 0x40800000;
    *(undefined *)(param_1 + 0x681) = 1;
  }
  fVar24 = *(float *)(param_1 + 0x684);
LAB_089aaa3c:
  *(float *)(param_1 + 0x688) = *(float *)(param_1 + 0x688) + 1.0 / fVar24;
  if (*(char *)(param_1 + 0x680) == '\0') {
    fVar24 = *(float *)(param_1 + 0x688) - 1.0;
    iVar10 = param_1 + *(char *)(param_1 + 0x75) * 0x28;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 0x14) + 0x60) =
         (float)(int)*(short *)(iVar10 + 0x154) +
         (1.0 - fVar24 * fVar24) * (float)(int)*(short *)(iVar10 + 0x158);
    fVar24 = *(float *)(param_1 + 0x688) - 1.0;
    iVar10 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14) + 0x60) =
         (float)(int)*(short *)(iVar10 + 0x154) +
         (1.0 - fVar24 * fVar24) * (float)(int)*(short *)(iVar10 + 0x158);
  }
  else {
    fVar24 = *(float *)(param_1 + 0x688) - 1.0;
    iVar10 = param_1 + *(char *)(param_1 + 0x75) * 0x28;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 0x14) + 0x60) =
         (float)(int)*(short *)(iVar10 + 0x154) -
         (1.0 - fVar24 * fVar24) * (float)(int)*(short *)(iVar10 + 0x158);
    fVar24 = *(float *)(param_1 + 0x688) - 1.0;
    iVar10 = param_1 + *(char *)(param_1 + 0x74) * 0x28;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14) + 0x60) =
         (float)(int)*(short *)(iVar10 + 0x154) -
         (1.0 - fVar24 * fVar24) * (float)(int)*(short *)(iVar10 + 0x158);
  }
  if (*(char *)(param_1 + 0x680) == '\0') {
    fVar24 = *(float *)(param_1 + 0x688) - 1.0;
    uVar22 = FUN_089a4dc8(*(float *)(param_1 + 0x654) + (1.0 - fVar24 * fVar24) * 1.256);
  }
  else {
    fVar24 = *(float *)(param_1 + 0x688) - 1.0;
    uVar22 = FUN_089a4dc8(*(float *)(param_1 + 0x654) - (1.0 - fVar24 * fVar24) * 1.256);
  }
  *(undefined4 *)(param_1 + 0x65c) = uVar22;
  iVar10 = *(int *)(param_1 + 0x6a8);
  uVar22 = *(undefined4 *)(iVar10 + 0x34);
  uVar23 = *(undefined4 *)(iVar10 + 0x38);
  uVar6 = *(undefined4 *)(iVar10 + 0x3c);
  *puVar17 = *(undefined4 *)(iVar10 + 0x30);
  puVar17[1] = uVar22;
  puVar17[2] = uVar23;
  puVar17[3] = uVar6;
  puVar11 = *(undefined4 **)(param_1 + 0x6a8);
  uVar22 = vmul_s(uVar16,in_V7C);
  auVar1 = vidt_q();
  auVar4 = vrot_q(uVar22,0,1,2,0);
  auVar5 = vrot_q(uVar22,0,3,1,0);
  auVar2 = vidt_q();
  *puVar11 = auVar1._0_4_;
  puVar11[1] = auVar1._4_4_;
  puVar11[2] = auVar1._8_4_;
  puVar11[3] = auVar1._12_4_;
  puVar11[4] = auVar4._0_4_;
  puVar11[5] = auVar4._4_4_;
  puVar11[6] = auVar4._8_4_;
  puVar11[7] = auVar4._12_4_;
  puVar11[8] = auVar5._0_4_;
  puVar11[9] = auVar5._4_4_;
  puVar11[10] = auVar5._8_4_;
  puVar11[0xb] = auVar5._12_4_;
  puVar11[0xc] = auVar2._0_4_;
  puVar11[0xd] = auVar2._4_4_;
  puVar11[0xe] = auVar2._8_4_;
  puVar11[0xf] = auVar2._12_4_;
  pauVar12 = *(undefined (**) [64])(param_1 + 0x6a8);
  uVar22 = vmul_s(*(undefined4 *)(param_1 + 0x65c),in_V7C);
  auVar4 = vrot_q(uVar22,1,0,3,0);
  auVar1 = vidt_q();
  auVar5 = vrot_q(uVar22,2,0,1,0);
  auVar2 = vidt_q();
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
  auVar3 = vmmul_q(*pauVar12,auVar3);
  *(int *)*pauVar12 = auVar3._0_4_;
  *(int *)(*pauVar12 + 4) = auVar3._4_4_;
  *(int *)(*pauVar12 + 8) = auVar3._8_4_;
  *(int *)(*pauVar12 + 0xc) = auVar3._12_4_;
  *(int *)(*pauVar12 + 0x10) = auVar3._16_4_;
  *(int *)(*pauVar12 + 0x14) = auVar3._20_4_;
  *(int *)(*pauVar12 + 0x18) = auVar3._24_4_;
  *(int *)(*pauVar12 + 0x1c) = auVar3._28_4_;
  *(int *)(*pauVar12 + 0x20) = auVar3._32_4_;
  *(int *)(*pauVar12 + 0x24) = auVar3._36_4_;
  *(int *)(*pauVar12 + 0x28) = auVar3._40_4_;
  *(int *)(*pauVar12 + 0x2c) = auVar3._44_4_;
  *(int *)(*pauVar12 + 0x30) = auVar3._48_4_;
  *(int *)(*pauVar12 + 0x34) = auVar3._52_4_;
  *(int *)(*pauVar12 + 0x38) = auVar3._56_4_;
  *(int *)(*pauVar12 + 0x3c) = auVar3._60_4_;
  iVar10 = *(int *)(param_1 + 0x6a8);
  uVar22 = puVar17[1];
  uVar23 = puVar17[2];
  uVar6 = puVar17[3];
  *(undefined4 *)(iVar10 + 0x30) = *puVar17;
  *(undefined4 *)(iVar10 + 0x34) = uVar22;
  *(undefined4 *)(iVar10 + 0x38) = uVar23;
  *(undefined4 *)(iVar10 + 0x3c) = uVar6;
  iVar20 = 0;
  puVar11 = &local_50;
  uVar22 = 0;
  iVar10 = param_1;
  iVar18 = param_1;
  iVar19 = param_1;
  do {
    if (*(int *)(iVar19 + 0x68c) != 0) {
      if (*(char *)(param_1 + 0x680) == '\0') {
        fVar24 = *(float *)(param_1 + 0x688) - 1.0;
        uVar23 = FUN_089a4dc8(*(float *)(iVar18 + 0x594) - (1.0 - fVar24 * fVar24) * fVar14);
      }
      else {
        fVar24 = *(float *)(param_1 + 0x688) - 1.0;
        uVar23 = FUN_089a4dc8(*(float *)(iVar18 + 0x594) + (1.0 - fVar24 * fVar24) * fVar14);
      }
      *(undefined4 *)(iVar18 + 0x58c) = uVar23;
      FUN_089a4d34(uVar23,*(undefined4 *)(iVar10 + 0x950),*(undefined4 *)(iVar10 + 0x958),uVar22,
                   uVar22,puVar11,0x46);
      *(undefined4 *)(*(int *)(iVar19 + 0x68c) + 0x20) = local_50;
      *(undefined4 *)(*(int *)(iVar19 + 0x68c) + 0x28) = local_4c;
      iVar13 = *(int *)(iVar19 + 0x68c);
      iVar15 = *(int *)(iVar13 + 0x130);
      uVar23 = *(undefined4 *)(iVar13 + 0x24);
      uVar6 = *(undefined4 *)(iVar13 + 0x28);
      uVar7 = *(undefined4 *)(iVar13 + 0x2c);
      *(undefined4 *)(iVar15 + 0xb0) = *(undefined4 *)(iVar13 + 0x20);
      *(undefined4 *)(iVar15 + 0xb4) = uVar23;
      *(undefined4 *)(iVar15 + 0xb8) = uVar6;
      *(undefined4 *)(iVar15 + 0xbc) = uVar7;
      *(undefined4 *)(*(int *)(*(int *)(iVar19 + 0x68c) + 0x130) + 0xbc) = 0x3f800000;
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 4;
    iVar18 = iVar18 + 0x28;
    iVar10 = iVar10 + 0x10;
  } while (iVar20 < 5);
  if (1.0 <= *(float *)(param_1 + 0x688)) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4 + 0x14) + 0x60) =
         (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0x75) * 0x28 + 0x156);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x74) * 4 + 0x14) + 0x60) =
         (float)(int)*(short *)(param_1 + *(char *)(param_1 + 0x74) * 0x28 + 0x156);
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x658);
    iVar10 = *(int *)(param_1 + 0x6a8);
    uVar22 = *(undefined4 *)(iVar10 + 0x34);
    uVar23 = *(undefined4 *)(iVar10 + 0x38);
    uVar6 = *(undefined4 *)(iVar10 + 0x3c);
    *puVar17 = *(undefined4 *)(iVar10 + 0x30);
    puVar17[1] = uVar22;
    puVar17[2] = uVar23;
    puVar17[3] = uVar6;
    puVar11 = *(undefined4 **)(param_1 + 0x6a8);
    uVar16 = vmul_s(uVar16,in_V7C);
    auVar1 = vidt_q();
    auVar4 = vrot_q(uVar16,0,1,2,0);
    auVar5 = vrot_q(uVar16,0,3,1,0);
    auVar2 = vidt_q();
    *puVar11 = auVar1._0_4_;
    puVar11[1] = auVar1._4_4_;
    puVar11[2] = auVar1._8_4_;
    puVar11[3] = auVar1._12_4_;
    puVar11[4] = auVar4._0_4_;
    puVar11[5] = auVar4._4_4_;
    puVar11[6] = auVar4._8_4_;
    puVar11[7] = auVar4._12_4_;
    puVar11[8] = auVar5._0_4_;
    puVar11[9] = auVar5._4_4_;
    puVar11[10] = auVar5._8_4_;
    puVar11[0xb] = auVar5._12_4_;
    puVar11[0xc] = auVar2._0_4_;
    puVar11[0xd] = auVar2._4_4_;
    puVar11[0xe] = auVar2._8_4_;
    puVar11[0xf] = auVar2._12_4_;
    pauVar12 = *(undefined (**) [64])(param_1 + 0x6a8);
    uVar16 = vmul_s(*(undefined4 *)(param_1 + 0x65c),in_V7C);
    auVar4 = vrot_q(uVar16,1,0,3,0);
    auVar1 = vidt_q();
    auVar5 = vrot_q(uVar16,2,0,1,0);
    auVar2 = vidt_q();
    auVar8._48_16_ = auVar2;
    auVar8._44_4_ = auVar5._12_4_;
    auVar8._40_4_ = auVar5._8_4_;
    auVar8._36_4_ = auVar5._4_4_;
    auVar8._32_4_ = auVar5._0_4_;
    auVar8._28_4_ = auVar1._12_4_;
    auVar8._24_4_ = auVar1._8_4_;
    auVar8._20_4_ = auVar1._4_4_;
    auVar8._16_4_ = auVar1._0_4_;
    auVar8._12_4_ = auVar4._12_4_;
    auVar8._8_4_ = auVar4._8_4_;
    auVar8._4_4_ = auVar4._4_4_;
    auVar8._0_4_ = auVar4._0_4_;
    auVar3 = vmmul_q(*pauVar12,auVar8);
    *(int *)*pauVar12 = auVar3._0_4_;
    *(int *)(*pauVar12 + 4) = auVar3._4_4_;
    *(int *)(*pauVar12 + 8) = auVar3._8_4_;
    *(int *)(*pauVar12 + 0xc) = auVar3._12_4_;
    *(int *)(*pauVar12 + 0x10) = auVar3._16_4_;
    *(int *)(*pauVar12 + 0x14) = auVar3._20_4_;
    *(int *)(*pauVar12 + 0x18) = auVar3._24_4_;
    *(int *)(*pauVar12 + 0x1c) = auVar3._28_4_;
    *(int *)(*pauVar12 + 0x20) = auVar3._32_4_;
    *(int *)(*pauVar12 + 0x24) = auVar3._36_4_;
    *(int *)(*pauVar12 + 0x28) = auVar3._40_4_;
    *(int *)(*pauVar12 + 0x2c) = auVar3._44_4_;
    *(int *)(*pauVar12 + 0x30) = auVar3._48_4_;
    *(int *)(*pauVar12 + 0x34) = auVar3._52_4_;
    *(int *)(*pauVar12 + 0x38) = auVar3._56_4_;
    *(int *)(*pauVar12 + 0x3c) = auVar3._60_4_;
    iVar10 = *(int *)(param_1 + 0x6a8);
    uVar16 = puVar17[1];
    uVar22 = puVar17[2];
    uVar23 = puVar17[3];
    *(undefined4 *)(iVar10 + 0x30) = *puVar17;
    *(undefined4 *)(iVar10 + 0x34) = uVar16;
    *(undefined4 *)(iVar10 + 0x38) = uVar22;
    *(undefined4 *)(iVar10 + 0x3c) = uVar23;
    uVar21 = 0;
    iVar10 = param_1;
    iVar18 = param_1;
    do {
      if (*(int *)(iVar18 + 0x68c) != 0) {
        uVar9 = *(undefined *)(param_1 + 0x74);
        *(undefined4 *)(iVar10 + 0x58c) = *(undefined4 *)(iVar10 + 0x590);
        uVar9 = FUN_089a602c(param_1,uVar21 & 0xff,uVar9);
        *(undefined *)(iVar10 + 0x594) = uVar9;
      }
      uVar21 = uVar21 + 1;
      iVar18 = iVar18 + 4;
      iVar10 = iVar10 + 0x28;
    } while ((int)uVar21 < 5);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa04) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0xbc);
    return 1;
  }
  return 0;
}

