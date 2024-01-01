#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0887c7e4(int param_1)

{
  undefined auVar1 [64];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined4 uVar4;
  undefined auVar5 [12];
  undefined auVar6 [16];
  undefined auVar7 [36];
  undefined auVar8 [64];
  bool bVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  undefined (*pauVar15) [16];
  undefined (*pauVar16) [12];
  undefined (*pauVar17) [16];
  float fVar18;
  undefined4 uVar19;
  undefined4 in_V7D;
  undefined4 uVar20;
  
  iVar10 = *(int *)(param_1 + 0xf8);
  if (iVar10 < 1) {
    if (iVar10 < 0) {
      iVar10 = *(int *)(param_1 + 0xbc);
      goto LAB_0887c8f4;
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
LAB_0887c850:
    fVar18 = *(float *)(param_1 + 0x104) + (240.0 - *(float *)(param_1 + 0x104)) * 0.2;
    *(float *)(param_1 + 0x104) = fVar18;
    if (200.0 < fVar18) {
      *(undefined4 *)(param_1 + 0x104) = 0x43480000;
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xf8) + 1;
    }
  }
  else {
    if (iVar10 < 2) goto LAB_0887c850;
    if (2 < iVar10) {
      iVar10 = *(int *)(param_1 + 0xbc);
      goto LAB_0887c8f4;
    }
    if (*(int *)(param_1 + 0xf4) < 0x2e) {
      bVar9 = false;
      if ((2 < *(int *)(*(int *)(param_1 + 0xb0) + 0x140)) &&
         (bVar9 = false, *(int *)(*(int *)(param_1 + 0xb0) + 0x140) < 7)) {
        bVar9 = true;
      }
      if (bVar9) {
        *(undefined4 *)(param_1 + 0xf4) = 0x1c;
      }
    }
    else {
      pfVar11 = (float *)(*(int *)(param_1 + 0xbc) + 0xbc);
      *pfVar11 = *pfVar11 - 0.1;
      if (*(float *)(*(int *)(param_1 + 0xbc) + 0xbc) <= 0.0) {
        FUN_08876ee0(param_1);
        return;
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0xbc);
LAB_0887c8f4:
  *(undefined4 *)(iVar10 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x1d0) = 0x40000000;
  pauVar15 = (undefined (*) [16])(param_1 + 0x90);
  pauVar16 = (undefined (*) [12])(param_1 + 0xd0);
  pauVar17 = (undefined (*) [16])(param_1 + 0x70);
  if (DAT_08af7e00 == 0) {
    DAT_08af7e00 = 1;
    DAT_08af7e10 = 0x41900000;
    DAT_08af7e14 = 0xc1100000;
    DAT_08af7e18 = 0;
    DAT_08af7e1c = 0;
  }
  if (DAT_08af7e04 == 0) {
    DAT_08af7e04 = 1;
    DAT_08af7e20 = 0x3f800000;
    DAT_08af7e24 = 0xbe4ccccd;
    DAT_08af7e28 = 0;
    DAT_08af7e2c = 0;
  }
  puVar12 = (undefined4 *)(param_1 + 0x20);
  iVar10 = *(int *)(*(int *)(param_1 + 0xb0) + 0x130);
  iVar14 = *(int *)(param_1 + 200);
  auVar1._60_4_ = *(undefined4 *)(iVar10 + 0xbc);
  auVar1._56_4_ = *(undefined4 *)(iVar10 + 0xac);
  auVar1._52_4_ = *(undefined4 *)(iVar10 + 0x9c);
  auVar1._48_4_ = *(undefined4 *)(iVar10 + 0x8c);
  auVar1._44_4_ = *(undefined4 *)(iVar10 + 0xb8);
  auVar1._40_4_ = *(undefined4 *)(iVar10 + 0xa8);
  auVar1._36_4_ = *(undefined4 *)(iVar10 + 0x98);
  auVar1._32_4_ = *(undefined4 *)(iVar10 + 0x88);
  auVar1._28_4_ = *(undefined4 *)(iVar10 + 0xb4);
  auVar1._24_4_ = *(undefined4 *)(iVar10 + 0xa4);
  auVar1._20_4_ = *(undefined4 *)(iVar10 + 0x94);
  auVar1._16_4_ = *(undefined4 *)(iVar10 + 0x84);
  auVar1._12_4_ = *(undefined4 *)(iVar10 + 0xb0);
  auVar1._8_4_ = *(undefined4 *)(iVar10 + 0xa0);
  auVar1._4_4_ = *(undefined4 *)(iVar10 + 0x90);
  auVar1._0_4_ = *(undefined4 *)(iVar10 + 0x80);
  auVar8._60_4_ = *(undefined4 *)(iVar14 + 0xbc);
  auVar8._56_4_ = *(undefined4 *)(iVar14 + 0xac);
  auVar8._52_4_ = *(undefined4 *)(iVar14 + 0x9c);
  auVar8._48_4_ = *(undefined4 *)(iVar14 + 0x8c);
  auVar8._44_4_ = *(undefined4 *)(iVar14 + 0xb8);
  auVar8._40_4_ = *(undefined4 *)(iVar14 + 0xa8);
  auVar8._36_4_ = *(undefined4 *)(iVar14 + 0x98);
  auVar8._32_4_ = *(undefined4 *)(iVar14 + 0x88);
  auVar8._28_4_ = *(undefined4 *)(iVar14 + 0xb4);
  auVar8._24_4_ = *(undefined4 *)(iVar14 + 0xa4);
  auVar8._20_4_ = *(undefined4 *)(iVar14 + 0x94);
  auVar8._16_4_ = *(undefined4 *)(iVar14 + 0x84);
  auVar8._12_4_ = *(undefined4 *)(iVar14 + 0xb0);
  auVar8._8_4_ = *(undefined4 *)(iVar14 + 0xa0);
  auVar8._4_4_ = *(undefined4 *)(iVar14 + 0x90);
  auVar8._0_4_ = *(undefined4 *)(iVar14 + 0x80);
  auVar1 = vmmul_q(auVar1,auVar8);
  *puVar12 = auVar1._0_4_;
  *(int *)(param_1 + 0x24) = auVar1._16_4_;
  *(int *)(param_1 + 0x28) = auVar1._32_4_;
  *(int *)(param_1 + 0x2c) = auVar1._48_4_;
  *(int *)(param_1 + 0x30) = auVar1._4_4_;
  *(int *)(param_1 + 0x34) = auVar1._20_4_;
  *(int *)(param_1 + 0x38) = auVar1._36_4_;
  *(int *)(param_1 + 0x3c) = auVar1._52_4_;
  *(int *)(param_1 + 0x40) = auVar1._8_4_;
  *(int *)(param_1 + 0x44) = auVar1._24_4_;
  *(int *)(param_1 + 0x48) = auVar1._40_4_;
  *(int *)(param_1 + 0x4c) = auVar1._56_4_;
  *(int *)(param_1 + 0x50) = auVar1._12_4_;
  *(int *)(param_1 + 0x54) = auVar1._28_4_;
  *(int *)(param_1 + 0x58) = auVar1._44_4_;
  *(int *)(param_1 + 0x5c) = auVar1._60_4_;
  uVar19 = vfim_s(0x3c00);
  auVar6._8_8_ = *(undefined8 *)(param_1 + 0x30);
  auVar6._4_4_ = *(undefined4 *)(param_1 + 0x24);
  auVar6._0_4_ = *puVar12;
  auVar3._12_4_ = uVar19;
  auVar3._8_4_ = DAT_08af7e18;
  auVar3._4_4_ = DAT_08af7e14;
  auVar3._0_4_ = DAT_08af7e10;
  auVar3 = vtfm4_q(auVar6,auVar3);
  *(undefined4 *)(param_1 + 0x60) = auVar3._0_4_;
  *(int *)(param_1 + 100) = auVar3._4_4_;
  *(int *)(param_1 + 0x68) = auVar3._8_4_;
  *(int *)(param_1 + 0x6c) = auVar3._12_4_;
  auVar7._24_12_ = *(undefined (*) [12])(param_1 + 0x40);
  auVar7._20_4_ = *(undefined4 *)(param_1 + 0x38);
  auVar7._16_4_ = *(undefined4 *)(param_1 + 0x34);
  auVar7._12_4_ = *(undefined4 *)(param_1 + 0x30);
  auVar7._8_4_ = *(undefined4 *)(param_1 + 0x28);
  auVar7._4_4_ = *(undefined4 *)(param_1 + 0x24);
  auVar7._0_4_ = *puVar12;
  auVar2._8_4_ = DAT_08af7e28;
  auVar2._4_4_ = DAT_08af7e24;
  auVar2._0_4_ = DAT_08af7e20;
  auVar2 = vtfm3_t(auVar7,auVar2);
  *(int *)*pauVar15 = auVar2._0_4_;
  *(int *)(param_1 + 0x94) = auVar2._4_4_;
  *(int *)(param_1 + 0x98) = auVar2._8_4_;
  *(int *)(param_1 + 0x9c) = auVar3._12_4_;
  uVar19 = vdot_t(*(undefined (*) [12])*pauVar15,*(undefined (*) [12])*pauVar15);
  uVar20 = vcmp_s(8,uVar19,*(undefined4 *)*pauVar15);
  vrsq_s(uVar19);
  uVar19 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(*(undefined (*) [12])*pauVar15,uVar19);
  *(int *)*pauVar15 = auVar2._0_4_;
  *(int *)(param_1 + 0x94) = auVar2._4_4_;
  *(int *)(param_1 + 0x98) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0x9c) = in_V7D;
  iVar10 = FUN_088663a0(*(undefined4 *)(param_1 + 0xb4));
  if (iVar10 != 0) {
    auVar2 = vsub_t(*(undefined (*) [12])(iVar10 + 0x20),
                    *(undefined (*) [12])(*(int *)(param_1 + 0xb0) + 0x20));
    uVar19 = vdot_t(auVar2,auVar2);
    uVar20 = vcmp_s(8,uVar19,auVar2._0_4_);
    vrsq_s(uVar19);
    uVar19 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar2,uVar19);
    *(int *)(param_1 + 0x94) = auVar2._4_4_;
  }
  uVar19 = *(undefined4 *)(param_1 + 0x94);
  uVar20 = *(undefined4 *)(param_1 + 0x98);
  uVar4 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)*pauVar16 = *(undefined4 *)*pauVar15;
  *(undefined4 *)(param_1 + 0xd4) = uVar19;
  *(undefined4 *)(param_1 + 0xd8) = uVar20;
  *(undefined4 *)(param_1 + 0xdc) = uVar4;
  auVar2 = vscl_t(*pauVar16,*(float *)(param_1 + 0x104) * 12.0);
  *(int *)*pauVar16 = auVar2._0_4_;
  *(int *)(param_1 + 0xd4) = auVar2._4_4_;
  *(int *)(param_1 + 0xd8) = auVar2._8_4_;
  *(undefined4 *)(param_1 + 0xdc) = in_V7D;
  if (*(int *)(param_1 + 0xf4) == 0) {
    uVar19 = *(undefined4 *)(param_1 + 0x94);
    uVar20 = *(undefined4 *)(param_1 + 0x98);
    uVar4 = *(undefined4 *)(param_1 + 0x9c);
    *(undefined4 *)*pauVar17 = *(undefined4 *)*pauVar15;
    *(undefined4 *)(param_1 + 0x74) = uVar19;
    *(undefined4 *)(param_1 + 0x78) = uVar20;
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
    iVar10 = *(int *)(param_1 + 0xbc);
  }
  else {
    auVar3 = vsub_q(*pauVar15,*pauVar17);
    auVar3 = vscl_q(auVar3,0x3e4ccccd);
    auVar3 = vadd_q(*pauVar17,auVar3);
    *(int *)*pauVar17 = auVar3._0_4_;
    *(int *)(param_1 + 0x74) = auVar3._4_4_;
    *(int *)(param_1 + 0x78) = auVar3._8_4_;
    *(int *)(param_1 + 0x7c) = auVar3._12_4_;
    iVar10 = *(int *)(param_1 + 0xbc);
  }
  uVar19 = *(undefined4 *)(param_1 + 0x74);
  uVar20 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(iVar10 + 0x90) = *(undefined4 *)*pauVar17;
  *(undefined4 *)(iVar10 + 0x94) = uVar19;
  *(undefined4 *)(iVar10 + 0x98) = uVar20;
  *(undefined4 *)(iVar10 + 0x9c) = uVar4;
  if ((*(int *)(param_1 + 0xf4) < 0x34) &&
     (iVar10 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,(undefined4 *)(param_1 + 0x60),
                            pauVar16,0x34,0,1,0x31bf337e), iVar10 != 0)) {
    if (DAT_08aba940 == 0) {
      if ((*(uint *)(param_1 + 0xfc) & 1) != 0) {
        auVar2 = vscl_t(_DAT_08b00290,0x40400000);
        auVar5._8_4_ = DAT_08aba938;
        auVar5._4_4_ = DAT_08aba934;
        auVar5._0_4_ = DAT_08aba930;
        vadd_t(auVar5,auVar2);
        FUN_08824024(DAT_08b00920,0xa1);
        FUN_08877060(param_1,0x200099,0,0,0);
      }
    }
    else {
      uVar13 = *(uint *)(param_1 + 0x100);
      if ((int)uVar13 < 0) {
        uVar13 = -(uVar13 & 1);
      }
      else {
        uVar13 = uVar13 & 1;
      }
      if (uVar13 == 0) {
        FUN_08824024(DAT_08b00920,0xa1,&DAT_08aba930,pauVar17);
        FUN_08877060(param_1,0x200099,0,0,0);
      }
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + 1;
  }
  FUN_088787a0(param_1);
  return;
}

