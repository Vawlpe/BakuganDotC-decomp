#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088831bc(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [64];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined (*pauVar9) [16];
  undefined (*pauVar10) [12];
  float fVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  if (120.0 < (float)*(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    pauVar9 = (undefined (*) [16])(param_1 + 0x80);
    if (*(int *)(param_1 + 0xb8) == 0x3e) {
      iVar12 = (int)*(float *)(param_1 + 0x10c);
      *(undefined4 *)(param_1 + 0xe0) = 0x3da3d70a;
      if (iVar12 < 1) {
        if (-1 < iVar12) {
          *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + 0.2;
        }
      }
      else if (iVar12 < 2) {
        uVar15 = vmul_s(0xbeb2b8c2,in_V7C);
        auVar4 = vmov_q(*pauVar9);
        auVar5 = vrot_q(uVar15,1,0,3,0);
        auVar7 = vrot_q(uVar15,2,0,1,0);
        uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
        uVar13 = vdot_t(*(undefined (*) [12])*pauVar9,auVar7._0_12_);
        *(undefined4 *)*pauVar9 = uVar15;
        *(int *)(param_1 + 0x84) = auVar4._4_4_;
        *(undefined4 *)(param_1 + 0x88) = uVar13;
        *(int *)(param_1 + 0x8c) = auVar4._12_4_;
      }
      else if (iVar12 < 3) {
        uVar15 = vmul_s(0x3eb2b8c2,in_V7C);
        auVar4 = vmov_q(*pauVar9);
        auVar5 = vrot_q(uVar15,1,0,3,0);
        auVar7 = vrot_q(uVar15,2,0,1,0);
        uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
        uVar13 = vdot_t(*(undefined (*) [12])*pauVar9,auVar7._0_12_);
        *(undefined4 *)*pauVar9 = uVar15;
        *(int *)(param_1 + 0x84) = auVar4._4_4_;
        *(undefined4 *)(param_1 + 0x88) = uVar13;
        *(int *)(param_1 + 0x8c) = auVar4._12_4_;
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0x41a00000;
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + 0.4;
    }
    else {
      iVar12 = (int)*(float *)(param_1 + 0x10c);
      if (iVar12 < 1) {
        if (-1 < iVar12) {
          *(float *)(param_1 + 100) = *(float *)(param_1 + 100) - 20.0;
        }
      }
      else if (iVar12 < 2) {
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + 0.2;
        uVar15 = vmul_s(0xbf32b8c2,in_V7C);
        auVar4 = vmov_q(*pauVar9);
        auVar5 = vrot_q(uVar15,1,0,3,0);
        auVar7 = vrot_q(uVar15,2,0,1,0);
        uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
        uVar13 = vdot_t(*(undefined (*) [12])*pauVar9,auVar7._0_12_);
        *(undefined4 *)*pauVar9 = uVar15;
        *(int *)(param_1 + 0x84) = auVar4._4_4_;
        *(undefined4 *)(param_1 + 0x88) = uVar13;
        *(int *)(param_1 + 0x8c) = auVar4._12_4_;
      }
      else if (iVar12 < 3) {
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + 0.2;
        uVar15 = vmul_s(0x3f32b8c2,in_V7C);
        auVar4 = vmov_q(*pauVar9);
        auVar5 = vrot_q(uVar15,1,0,3,0);
        auVar7 = vrot_q(uVar15,2,0,1,0);
        uVar15 = vdot_t(*(undefined (*) [12])*pauVar9,auVar5._0_12_);
        uVar13 = vdot_t(*(undefined (*) [12])*pauVar9,auVar7._0_12_);
        *(undefined4 *)*pauVar9 = uVar15;
        *(int *)(param_1 + 0x84) = auVar4._4_4_;
        *(undefined4 *)(param_1 + 0x88) = uVar13;
        *(int *)(param_1 + 0x8c) = auVar4._12_4_;
      }
      *(undefined4 *)(param_1 + 0x20) = 0x42200000;
      *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + 0.3;
      auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x70),0x41a00000);
      local_50 = auVar1._0_4_;
      uStack_4c = auVar1._4_4_;
      uStack_48 = auVar1._8_4_;
      uVar15 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x60),auVar1);
      *(int *)*(undefined (*) [12])(param_1 + 0x60) = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar15;
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
    uVar15 = *(undefined4 *)*pauVar9;
    uVar13 = vdot_t(*(undefined (*) [12])*pauVar9,*(undefined (*) [12])*pauVar9);
    uVar14 = vcmp_s(8,uVar13,uVar15);
    vrsq_s(uVar13);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar14 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar9,uVar13);
    *(int *)*pauVar9 = auVar1._0_4_;
    *(int *)(param_1 + 0x84) = auVar1._4_4_;
    *(int *)(param_1 + 0x88) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
    uVar13 = FUN_089bee58();
    *(undefined4 *)(param_1 + 0x104) = uVar13;
  }
  else {
    if ((*(int *)(param_1 + 0xb8) != 0x3e) || (30.0 <= (float)*(int *)(param_1 + 0xf4))) {
      fVar11 = *(float *)(param_1 + 0xe0) - 0.01;
      if ((int)fVar11 < 1) {
        fVar11 = 0.0;
      }
      *(float *)(param_1 + 0xe0) = fVar11;
    }
    else if ((0xc < *(int *)(param_1 + 0xf4)) && (*(float *)(param_1 + 0xe0) < 0.3)) {
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) + 0.04;
    }
    if (*(float *)(param_1 + 0x20) < 30.0) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + 1.0;
      fVar11 = *(float *)(param_1 + 0xe0);
    }
    else {
      fVar11 = *(float *)(param_1 + 0xe0);
    }
    uVar15 = vmul_s(*(undefined4 *)(param_1 + 0x104),in_V7C);
    auVar4 = vrot_q(uVar15,1,0,2,0);
    uStack_54 = auVar4._12_4_;
    auVar1 = vscl_t(auVar4._0_12_,(0.2 - fVar11) * 1500.0 + 100.0);
    uVar15 = auVar1._0_4_;
    uStack_5c = auVar1._4_4_;
    uStack_58 = auVar1._8_4_;
    local_60 = uVar15;
    fVar11 = (float)FUN_089bedc4(0x3d75c28f);
    *(float *)(param_1 + 0x104) = fVar11 + 0.02 + *(float *)(param_1 + 0x104);
    if (*(int *)(param_1 + 0xb8) == 0x3f) {
      FUN_08877af0(*(undefined4 *)(param_1 + 0x20),0x42a00000,param_1,1,0);
    }
    else {
      FUN_08877af0(*(undefined4 *)(param_1 + 0x20),(0.3 - *(float *)(param_1 + 0xe0)) * 500.0 + 80.0
                   ,param_1,0,&local_60);
    }
    uVar13 = 0x61;
    uVar14 = 0xc5;
    if (*(int *)(param_1 + 0xb8) == 0x3f) {
      uVar13 = 0x62;
      uVar14 = 0x9b;
    }
    iVar12 = FUN_0887979c(param_1,uVar14);
    if (iVar12 != 0) {
      return;
    }
    pauVar10 = (undefined (*) [12])(param_1 + 0x60);
    iVar12 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar10,
                          (undefined (*) [12])(param_1 + 0x70),uVar13,3,0,0x31bf337e);
    if (iVar12 != 0) {
      FUN_08878cc4(param_1,uVar14,&DAT_08aba930);
      return;
    }
    uVar13 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar10,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar10 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar13;
  }
  pauVar10 = (undefined (*) [12])(param_1 + 0x80);
  iVar12 = *(int *)(param_1 + 0xbc);
  uVar13 = vdot_t(*pauVar10,*pauVar10);
  uVar15 = vcmp_s(8,uVar13,uVar15);
  vrsq_s(uVar13);
  uVar15 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar10,uVar15);
  auVar2._8_4_ = DAT_08b001a8;
  auVar2._4_4_ = DAT_08b001a4;
  auVar2._0_4_ = DAT_08b001a0;
  auVar2 = vcrsp_t(auVar2,auVar1);
  uVar15 = vdot_t(auVar2,auVar2);
  uVar13 = vcmp_s(8,uVar15,auVar2._0_4_);
  vrsq_s(uVar15);
  uVar15 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar15);
  auVar3 = vcrsp_t(auVar1,auVar2);
  auVar4 = vidt_q();
  auVar5 = vidt_q();
  *(int *)(iVar12 + 0x20) = auVar2._0_4_;
  *(int *)(iVar12 + 0x24) = auVar2._4_4_;
  *(int *)(iVar12 + 0x28) = auVar2._8_4_;
  *(int *)(iVar12 + 0x2c) = auVar4._0_4_;
  *(int *)(iVar12 + 0x30) = auVar3._0_4_;
  *(int *)(iVar12 + 0x34) = auVar3._4_4_;
  *(int *)(iVar12 + 0x38) = auVar3._8_4_;
  *(int *)(iVar12 + 0x3c) = auVar4._4_4_;
  *(int *)(iVar12 + 0x40) = auVar1._0_4_;
  *(int *)(iVar12 + 0x44) = auVar1._4_4_;
  *(int *)(iVar12 + 0x48) = auVar1._8_4_;
  *(int *)(iVar12 + 0x4c) = auVar4._8_4_;
  *(int *)(iVar12 + 0x50) = auVar5._0_4_;
  *(int *)(iVar12 + 0x54) = auVar5._4_4_;
  *(int *)(iVar12 + 0x58) = auVar5._8_4_;
  *(int *)(iVar12 + 0x5c) = auVar5._12_4_;
  iVar12 = *(int *)(param_1 + 0xbc);
  auVar6._60_4_ = *(undefined4 *)(iVar12 + 0x5c);
  auVar6._56_4_ = *(undefined4 *)(iVar12 + 0x4c);
  auVar6._52_4_ = *(undefined4 *)(iVar12 + 0x3c);
  auVar6._48_4_ = *(undefined4 *)(iVar12 + 0x2c);
  auVar6._44_4_ = *(undefined4 *)(iVar12 + 0x58);
  auVar6._40_4_ = *(undefined4 *)(iVar12 + 0x48);
  auVar6._36_4_ = *(undefined4 *)(iVar12 + 0x38);
  auVar6._32_4_ = *(undefined4 *)(iVar12 + 0x28);
  auVar6._28_4_ = *(undefined4 *)(iVar12 + 0x54);
  auVar6._24_4_ = *(undefined4 *)(iVar12 + 0x44);
  auVar6._20_4_ = *(undefined4 *)(iVar12 + 0x34);
  auVar6._16_4_ = *(undefined4 *)(iVar12 + 0x24);
  auVar6._12_4_ = *(undefined4 *)(iVar12 + 0x50);
  auVar6._8_4_ = *(undefined4 *)(iVar12 + 0x40);
  auVar6._4_4_ = *(undefined4 *)(iVar12 + 0x30);
  auVar6._0_4_ = *(undefined4 *)(iVar12 + 0x20);
  auVar8._60_4_ = DAT_08b0082c;
  auVar8._56_4_ = DAT_08b0081c;
  auVar8._52_4_ = DAT_08b0080c;
  auVar8._48_4_ = DAT_08b007fc;
  auVar8._44_4_ = DAT_08b00828;
  auVar8._40_4_ = DAT_08b00818;
  auVar8._36_4_ = DAT_08b00808;
  auVar8._32_4_ = DAT_08b007f8;
  auVar8._28_4_ = DAT_08b00824;
  auVar8._24_4_ = DAT_08b00814;
  auVar8._20_4_ = DAT_08b00804;
  auVar8._16_4_ = DAT_08b007f4;
  auVar8._12_4_ = DAT_08b00820;
  auVar8._8_4_ = DAT_08b00810;
  auVar8._4_4_ = DAT_08b00800;
  auVar8._0_4_ = DAT_08b007f0;
  auVar6 = vmmul_q(auVar6,auVar8);
  *(undefined4 *)(iVar12 + 0x20) = auVar6._0_4_;
  *(int *)(iVar12 + 0x24) = auVar6._16_4_;
  *(int *)(iVar12 + 0x28) = auVar6._32_4_;
  *(int *)(iVar12 + 0x2c) = auVar6._48_4_;
  *(int *)(iVar12 + 0x30) = auVar6._4_4_;
  *(int *)(iVar12 + 0x34) = auVar6._20_4_;
  *(int *)(iVar12 + 0x38) = auVar6._36_4_;
  *(int *)(iVar12 + 0x3c) = auVar6._52_4_;
  *(int *)(iVar12 + 0x40) = auVar6._8_4_;
  *(int *)(iVar12 + 0x44) = auVar6._24_4_;
  *(int *)(iVar12 + 0x48) = auVar6._40_4_;
  *(int *)(iVar12 + 0x4c) = auVar6._56_4_;
  *(int *)(iVar12 + 0x50) = auVar6._12_4_;
  *(int *)(iVar12 + 0x54) = auVar6._28_4_;
  *(int *)(iVar12 + 0x58) = auVar6._44_4_;
  *(int *)(iVar12 + 0x5c) = auVar6._60_4_;
  return;
}

