#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887719c(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5
                 )

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [64];
  undefined auVar4 [16];
  undefined4 uVar5;
  undefined auVar6 [36];
  undefined auVar7 [64];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [12];
  undefined auVar12 [12];
  undefined auVar13 [16];
  int iVar14;
  int iVar15;
  undefined (*pauVar16) [12];
  uint uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined (*pauVar20) [12];
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 in_V72;
  undefined4 in_V73;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar24;
  
  puVar18 = (undefined4 *)(param_1 + 0x20);
  puVar19 = (undefined4 *)(param_1 + 0x60);
  if (param_3 != (undefined4 *)0x0) {
    uVar23 = param_3[1];
    uVar24 = param_3[2];
    uVar5 = param_3[3];
    *(undefined4 *)(param_1 + 0x80) = *param_3;
    *(undefined4 *)(param_1 + 0x84) = uVar23;
    *(undefined4 *)(param_1 + 0x88) = uVar24;
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
  }
  if (param_4 == 0) {
    auVar3 = vmidt_q();
    *puVar18 = auVar3._0_4_;
    *(int *)(param_1 + 0x24) = auVar3._16_4_;
    *(int *)(param_1 + 0x28) = auVar3._32_4_;
    *(int *)(param_1 + 0x2c) = auVar3._48_4_;
    *(int *)(param_1 + 0x30) = auVar3._4_4_;
    *(int *)(param_1 + 0x34) = auVar3._20_4_;
    *(int *)(param_1 + 0x38) = auVar3._36_4_;
    *(int *)(param_1 + 0x3c) = auVar3._52_4_;
    *(int *)(param_1 + 0x40) = auVar3._8_4_;
    *(int *)(param_1 + 0x44) = auVar3._24_4_;
    *(int *)(param_1 + 0x48) = auVar3._40_4_;
    *(int *)(param_1 + 0x4c) = auVar3._56_4_;
    *(int *)(param_1 + 0x50) = auVar3._12_4_;
    *(int *)(param_1 + 0x54) = auVar3._28_4_;
    *(int *)(param_1 + 0x58) = auVar3._44_4_;
    *(int *)(param_1 + 0x5c) = auVar3._60_4_;
  }
  else {
    pauVar20 = (undefined (*) [12])(param_1 + 0x80);
    if (*(short *)(param_4 + 6) < 0) {
      auVar3 = vmidt_q();
      *puVar18 = auVar3._0_4_;
      *(int *)(param_1 + 0x24) = auVar3._16_4_;
      *(int *)(param_1 + 0x28) = auVar3._32_4_;
      *(int *)(param_1 + 0x2c) = auVar3._48_4_;
      *(int *)(param_1 + 0x30) = auVar3._4_4_;
      *(int *)(param_1 + 0x34) = auVar3._20_4_;
      *(int *)(param_1 + 0x38) = auVar3._36_4_;
      *(int *)(param_1 + 0x3c) = auVar3._52_4_;
      *(int *)(param_1 + 0x40) = auVar3._8_4_;
      *(int *)(param_1 + 0x44) = auVar3._24_4_;
      *(int *)(param_1 + 0x48) = auVar3._40_4_;
      *(int *)(param_1 + 0x4c) = auVar3._56_4_;
      *(int *)(param_1 + 0x50) = auVar3._12_4_;
      *(int *)(param_1 + 0x54) = auVar3._28_4_;
      *(int *)(param_1 + 0x58) = auVar3._44_4_;
      *(int *)(param_1 + 0x5c) = auVar3._60_4_;
      pauVar16 = (undefined (*) [12])(param_1 + 0x50);
      iVar14 = *(int *)(param_1 + 0xb0);
      uVar23 = *(undefined4 *)(iVar14 + 0x24);
      uVar24 = *(undefined4 *)(iVar14 + 0x28);
      uVar5 = *(undefined4 *)(iVar14 + 0x2c);
      *(undefined4 *)*pauVar16 = *(undefined4 *)(iVar14 + 0x20);
      *(undefined4 *)(param_1 + 0x54) = uVar23;
      *(undefined4 *)(param_1 + 0x58) = uVar24;
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
      uVar23 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x34),in_V7C);
      auVar4 = vrot_q(uVar23,1,0,2,0);
      *(int *)*pauVar20 = auVar4._0_4_;
      *(int *)(param_1 + 0x84) = auVar4._4_4_;
      *(int *)(param_1 + 0x88) = auVar4._8_4_;
      *(int *)(param_1 + 0x8c) = auVar4._12_4_;
      auVar1 = vscl_t(*pauVar20,*(undefined4 *)(param_4 + 0x10));
      uVar23 = *(undefined4 *)(param_1 + 0x5c);
      auVar1 = vadd_t(*pauVar16,auVar1);
      *(int *)*pauVar16 = auVar1._0_4_;
      *(int *)(param_1 + 0x54) = auVar1._4_4_;
      *(int *)(param_1 + 0x58) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x5c) = uVar23;
      *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + *(float *)(param_4 + 0xc);
    }
    else {
      iVar14 = FUN_089ded10(*(undefined4 *)(param_1 + 0xb0),(int)*(short *)(param_4 + 6));
      *(int *)(param_1 + 200) = iVar14;
      iVar15 = *(int *)(*(int *)(param_1 + 0xb0) + 0x130);
      auVar3._60_4_ = *(undefined4 *)(iVar15 + 0xbc);
      auVar3._56_4_ = *(undefined4 *)(iVar15 + 0xac);
      auVar3._52_4_ = *(undefined4 *)(iVar15 + 0x9c);
      auVar3._48_4_ = *(undefined4 *)(iVar15 + 0x8c);
      auVar3._44_4_ = *(undefined4 *)(iVar15 + 0xb8);
      auVar3._40_4_ = *(undefined4 *)(iVar15 + 0xa8);
      auVar3._36_4_ = *(undefined4 *)(iVar15 + 0x98);
      auVar3._32_4_ = *(undefined4 *)(iVar15 + 0x88);
      auVar3._28_4_ = *(undefined4 *)(iVar15 + 0xb4);
      auVar3._24_4_ = *(undefined4 *)(iVar15 + 0xa4);
      auVar3._20_4_ = *(undefined4 *)(iVar15 + 0x94);
      auVar3._16_4_ = *(undefined4 *)(iVar15 + 0x84);
      auVar3._12_4_ = *(undefined4 *)(iVar15 + 0xb0);
      auVar3._8_4_ = *(undefined4 *)(iVar15 + 0xa0);
      auVar3._4_4_ = *(undefined4 *)(iVar15 + 0x90);
      auVar3._0_4_ = *(undefined4 *)(iVar15 + 0x80);
      auVar7._60_4_ = *(undefined4 *)(iVar14 + 0xbc);
      auVar7._56_4_ = *(undefined4 *)(iVar14 + 0xac);
      auVar7._52_4_ = *(undefined4 *)(iVar14 + 0x9c);
      auVar7._48_4_ = *(undefined4 *)(iVar14 + 0x8c);
      auVar7._44_4_ = *(undefined4 *)(iVar14 + 0xb8);
      auVar7._40_4_ = *(undefined4 *)(iVar14 + 0xa8);
      auVar7._36_4_ = *(undefined4 *)(iVar14 + 0x98);
      auVar7._32_4_ = *(undefined4 *)(iVar14 + 0x88);
      auVar7._28_4_ = *(undefined4 *)(iVar14 + 0xb4);
      auVar7._24_4_ = *(undefined4 *)(iVar14 + 0xa4);
      auVar7._20_4_ = *(undefined4 *)(iVar14 + 0x94);
      auVar7._16_4_ = *(undefined4 *)(iVar14 + 0x84);
      auVar7._12_4_ = *(undefined4 *)(iVar14 + 0xb0);
      auVar7._8_4_ = *(undefined4 *)(iVar14 + 0xa0);
      auVar7._4_4_ = *(undefined4 *)(iVar14 + 0x90);
      auVar7._0_4_ = *(undefined4 *)(iVar14 + 0x80);
      auVar3 = vmmul_q(auVar3,auVar7);
      *puVar18 = auVar3._0_4_;
      *(int *)(param_1 + 0x24) = auVar3._16_4_;
      *(int *)(param_1 + 0x28) = auVar3._32_4_;
      *(int *)(param_1 + 0x2c) = auVar3._48_4_;
      *(int *)(param_1 + 0x30) = auVar3._4_4_;
      *(int *)(param_1 + 0x34) = auVar3._20_4_;
      *(int *)(param_1 + 0x38) = auVar3._36_4_;
      *(int *)(param_1 + 0x3c) = auVar3._52_4_;
      *(int *)(param_1 + 0x40) = auVar3._8_4_;
      *(int *)(param_1 + 0x44) = auVar3._24_4_;
      *(int *)(param_1 + 0x48) = auVar3._40_4_;
      *(int *)(param_1 + 0x4c) = auVar3._56_4_;
      *(int *)(param_1 + 0x50) = auVar3._12_4_;
      *(int *)(param_1 + 0x54) = auVar3._28_4_;
      *(int *)(param_1 + 0x58) = auVar3._44_4_;
      *(int *)(param_1 + 0x5c) = auVar3._60_4_;
      if (*(float *)(param_4 + 0x10) != 0.0) {
        auVar1._4_4_ = in_V76;
        auVar1._0_4_ = *(undefined4 *)(param_4 + 0x10);
        auVar1._8_4_ = in_V7A;
        auVar6._24_12_ = *(undefined (*) [12])(param_1 + 0x40);
        auVar6._20_4_ = *(undefined4 *)(param_1 + 0x38);
        auVar6._16_4_ = *(undefined4 *)(param_1 + 0x34);
        auVar6._12_4_ = *(undefined4 *)(param_1 + 0x30);
        auVar6._8_4_ = *(undefined4 *)(param_1 + 0x28);
        auVar6._4_4_ = *(undefined4 *)(param_1 + 0x24);
        auVar6._0_4_ = *puVar18;
        auVar1 = vtfm3_t(auVar6,auVar1);
        uVar23 = *(undefined4 *)(param_1 + 0x5c);
        auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x50),auVar1);
        *(int *)*(undefined (*) [12])(param_1 + 0x50) = auVar1._0_4_;
        *(int *)(param_1 + 0x54) = auVar1._4_4_;
        *(int *)(param_1 + 0x58) = auVar1._8_4_;
        *(undefined4 *)(param_1 + 0x5c) = uVar23;
      }
      uVar23 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x34),in_V7C);
      auVar4 = vrot_q(uVar23,1,0,2,0);
      *(int *)*pauVar20 = auVar4._0_4_;
      *(int *)(param_1 + 0x84) = auVar4._4_4_;
      *(int *)(param_1 + 0x88) = auVar4._8_4_;
      *(int *)(param_1 + 0x8c) = auVar4._12_4_;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    if (param_4 == 0) {
      *puVar19 = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x5c);
    }
    else {
      *puVar19 = *(undefined4 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x5c);
    }
  }
  else {
    uVar23 = param_2[1];
    uVar24 = param_2[2];
    uVar5 = param_2[3];
    *puVar19 = *param_2;
    *(undefined4 *)(param_1 + 100) = uVar23;
    *(undefined4 *)(param_1 + 0x68) = uVar24;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
  }
  if (param_3 == (undefined4 *)0x0) {
    iVar14 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4));
    pauVar20 = (undefined (*) [12])(param_1 + 0x80);
    if ((int)(((((int)(char)(&DAT_08a68306)[*(int *)(param_1 + 0xb8) * 4] & 0xf0U) >> 4 ^ 8) - 8) *
             0x1000000) >> 0x18 == 0) {
      uVar23 = *(undefined4 *)(iVar14 + 0x2c);
      auVar8._4_4_ = *(float *)(iVar14 + 0x24) + 80.0;
      auVar8._0_4_ = *(undefined4 *)(iVar14 + 0x20);
      auVar8._8_4_ = *(undefined4 *)(iVar14 + 0x28);
      auVar9._4_4_ = *(undefined4 *)(param_1 + 100);
      auVar9._0_4_ = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x20);
      auVar9._8_4_ = *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x28);
      auVar1 = vsub_t(auVar8,auVar9);
      *(int *)*pauVar20 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = uVar23;
      uVar23 = vdot_t(*pauVar20,*pauVar20);
      uVar24 = vcmp_s(8,uVar23,*(undefined4 *)*pauVar20);
      vrsq_s(uVar23);
      uVar23 = vcmovt_s(in_V7D,(byte)uVar24 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar20,uVar23);
      *(int *)*pauVar20 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = in_V7D;
      fVar21 = (float)atan2f(*(undefined4 *)(param_1 + 0x84),
                             SQRT(*(float *)(param_1 + 0x80) * *(float *)(param_1 + 0x80) +
                                  *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x88)));
      fVar22 = 0.6108652;
      if (0.6108652 < ABS(fVar21)) {
        if (fVar21 <= 0.0) {
          fVar22 = -0.6108652;
        }
        vpfxs(0x12,1,0,3);
        auVar1 = vmov_t(*pauVar20);
        uVar17 = auVar1._0_4_;
        uVar23 = auVar1._8_4_;
        auVar12._4_4_ = 0;
        auVar12._0_4_ = uVar17;
        auVar12._8_4_ = uVar23;
        auVar11._4_4_ = 0;
        auVar11._0_4_ = uVar17;
        auVar11._8_4_ = uVar23;
        auVar10._4_4_ = 0;
        auVar10._0_4_ = uVar17;
        auVar10._8_4_ = uVar23;
        uVar23 = vdot_t(auVar10,auVar11);
        uVar24 = vcmp_s(8,uVar23,uVar17);
        vrsq_s(uVar23);
        uVar23 = vcmovt_s(in_V7D,(byte)uVar24 & 1);
        vpfxd(4,4,4,5);
        auVar1 = vscl_t(auVar12,uVar23);
        uVar23 = vcst_s(6);
        uVar23 = vmul_s(uVar23,fVar22 - fVar21);
        uVar24 = vcos_s(uVar23);
        uVar23 = vsin_s(uVar23);
        auVar1 = vscl_t(auVar1,uVar23);
        auVar13._12_4_ = uVar24;
        auVar13._0_12_ = auVar1;
        auVar2._12_4_ = uVar24;
        auVar2._0_12_ = auVar1;
        vpfxs(0x10,0x11,0x12,3);
        auVar2 = vmov_q(auVar2);
        uVar23 = vmov_s(in_V73);
        auVar4._12_4_ = uVar23;
        auVar4._8_4_ = *(undefined4 *)(param_1 + 0x88);
        auVar4._4_4_ = *(undefined4 *)(param_1 + 0x84);
        auVar4._0_4_ = *(undefined4 *)*pauVar20;
        auVar4 = vqmul_q(auVar13,auVar4);
        auVar4 = vqmul_q(auVar4,auVar2);
        *(int *)*pauVar20 = auVar4._0_4_;
        *(int *)(param_1 + 0x84) = auVar4._4_4_;
        *(int *)(param_1 + 0x88) = auVar4._8_4_;
        *(int *)(param_1 + 0x8c) = auVar4._12_4_;
      }
    }
    else {
      uVar23 = *(undefined4 *)(iVar14 + 0x24);
      uVar24 = *(undefined4 *)(iVar14 + 0x28);
      uVar5 = *(undefined4 *)(iVar14 + 0x2c);
      *(undefined4 *)*pauVar20 = *(undefined4 *)(iVar14 + 0x20);
      *(undefined4 *)(param_1 + 0x84) = uVar23;
      *(undefined4 *)(param_1 + 0x88) = uVar24;
      *(undefined4 *)(param_1 + 0x8c) = uVar5;
      uVar23 = *(undefined4 *)(param_1 + 0x8c);
      auVar1 = vsub_t(*pauVar20,*(undefined (*) [12])(*(int *)(param_1 + 0xb0) + 0x20));
      *(int *)*pauVar20 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = uVar23;
      uVar23 = vdot_t(*pauVar20,*pauVar20);
      uVar24 = vcmp_s(8,uVar23,*(undefined4 *)*pauVar20);
      vrsq_s(uVar23);
      uVar23 = vcmovt_s(in_V7D,(byte)uVar24 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(*pauVar20,uVar23);
      *(int *)*pauVar20 = auVar1._0_4_;
      *(int *)(param_1 + 0x84) = auVar1._4_4_;
      *(int *)(param_1 + 0x88) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x8c) = in_V7D;
    }
  }
  if (param_4 == 0) {
    iVar14 = *(int *)(param_1 + 0xb8);
  }
  else {
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_4 + 8);
    iVar14 = *(int *)(param_1 + 0xb8);
  }
  uVar17 = (int)*(short *)(&DAT_08a68304 + iVar14 * 4) & 0x3ff;
  *(undefined4 *)(param_1 + 0xd0) = in_V72;
  *(undefined4 *)(param_1 + 0xd4) = in_V76;
  *(undefined4 *)(param_1 + 0xd8) = in_V7A;
  *(undefined4 *)(param_1 + 0xdc) = in_V7E;
  if (uVar17 == 0) {
    FUN_08876e10(param_1);
    goto LAB_08877888;
  }
  *(float *)(param_1 + 0xcc) = (float)(uint)(byte)(&DAT_08a68307)[*(int *)(param_1 + 0xb8) * 4];
  iVar14 = FUN_0880d354();
  if ((iVar14 != 0) &&
     ((((uVar17 == 0xed || (uVar17 == 0xe8)) || (uVar17 == 0xd1)) || (uVar17 == 0xa5)))) {
    uVar17 = uVar17 + 1;
  }
  iVar14 = FUN_088244ac(param_5,uVar17,puVar19,(undefined4 *)(param_1 + 0x80));
  iVar15 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xbc) = iVar14;
  *(int *)(iVar14 + 0x1fc) = iVar15;
  if (iVar15 != 0) {
    *(undefined4 *)(iVar14 + 0x200) = *(undefined4 *)(iVar15 + 0xc);
  }
  if ((uVar17 == 0x80) || (uVar17 == 0x81)) {
    iVar14 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
    fVar22 = *(float *)(*(int *)(param_1 + 0xb0) + 0x17c) * 0.00666667;
    if ((iVar14 == 0x14) || ((iVar14 == 0x11 || (iVar14 == 4)))) {
      fVar22 = fVar22 * 0.7;
    }
    *(float *)(*(int *)(param_1 + 0xbc) + 0x1d0) = fVar22 * 0.8;
    *(float *)(param_1 + 0xcc) = fVar22 * 100.0;
    iVar14 = *(int *)(*(int *)(param_1 + 0xb0) + 0x14);
    iVar15 = *(int *)(param_1 + 0xbc);
    uVar23 = (**(code **)(iVar14 + 0xa4))(*(int *)(param_1 + 0xb0) + (int)*(short *)(iVar14 + 0xa0))
    ;
    *(undefined4 *)(iVar15 + 0xd8) = uVar23;
    iVar15 = *(int *)(param_1 + 0xbc);
    iVar14 = *(int *)(*(int *)(param_1 + 0xb0) + 0x14);
    iVar14 = (**(code **)(iVar14 + 0xa4))(*(int *)(param_1 + 0xb0) + (int)*(short *)(iVar14 + 0xa0))
    ;
    *(undefined4 *)(iVar15 + 0x1d4) = *(undefined4 *)(&DAT_08a68a90 + iVar14 * 4);
    uVar23 = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_08876f38(*(undefined4 *)(param_1 + 0xb0));
    *(undefined4 *)(param_1 + 0xb8) = uVar23;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x8c);
  FUN_08876e10(param_1);
  if (*(int *)(param_1 + 0xbc) == 0) goto LAB_08877888;
  if ((int)((((int)(char)(&DAT_08a68306)[*(int *)(param_1 + 0xb8) * 4] & 0xfU ^ 8) - 8) * 0x1000000)
      >> 0x18 == 0) {
    iVar14 = *(int *)(param_1 + 0xbc);
  }
  else if (*(char *)(*(int *)(param_1 + 0xb0) + 0x464) == '\0') {
    iVar14 = *(int *)(param_1 + 0xbc);
  }
  else {
    iVar14 = *(int *)(param_1 + 0xb8);
    if (iVar14 < 0x3b) {
      if (iVar14 < 0x3a) goto LAB_08877828;
      *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) * 2.0;
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x1d0) = 0x41700000;
    }
    else if (iVar14 < 0x3c) {
      *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) * 4.0;
    }
    else {
LAB_08877828:
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + 60.0;
      *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) * 2.5;
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x1d0) = 0x3fc00000;
    }
    iVar14 = *(int *)(param_1 + 0xbc);
  }
  (**(code **)(*(int *)(iVar14 + 0x14) + 0x14))(iVar14 + *(short *)(*(int *)(iVar14 + 0x14) + 0x10))
  ;
LAB_08877888:
  iVar14 = FUN_08860188(*(undefined4 *)(param_1 + 0xb0));
  if (iVar14 == 0) {
    FUN_08877060(param_1,*(undefined4 *)(param_1 + 0x150),puVar19,0,0);
  }
  else {
    FUN_08877060(param_1,*(undefined4 *)(param_1 + 0x150),*(int *)(param_1 + 0xb0) + 0x20,0,0);
  }
  return;
}

