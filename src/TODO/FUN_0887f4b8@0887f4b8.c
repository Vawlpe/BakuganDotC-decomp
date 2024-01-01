#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887f4b8(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined auVar11 [64];
  int iVar12;
  undefined (*pauVar13) [12];
  undefined (*pauVar14) [12];
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int local_1c;
  
  if (0xb4 < *(int *)(param_1 + 0xf4)) {
    FUN_089e07b0(*(undefined4 *)(param_1 + 0xb0),"_rocket",1);
    FUN_089de940(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x210),0);
    FUN_08876ee0(param_1);
    return;
  }
  pauVar14 = (undefined (*) [12])(param_1 + 0x60);
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0x3ca3d70a;
    iVar12 = FUN_08823f5c(DAT_08b00920,0xe4,pauVar14);
    *(int *)(param_1 + 0xc0) = iVar12;
    (**(code **)(*(int *)(iVar12 + 0x14) + 0x14))
              (iVar12 + *(short *)(*(int *)(iVar12 + 0x14) + 0x10));
    iVar12 = *(int *)(param_1 + 0xc0);
    iVar15 = *(int *)(param_1 + 0xb0);
    *(int *)(iVar12 + 0x1fc) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)(iVar12 + 0x200) = *(undefined4 *)(iVar15 + 0xc);
    }
    local_1c = 0;
    FUN_089d8634();
    uVar17 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar15 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar17);
    FUN_089d866c();
    iVar12 = local_1c;
    if (iVar15 != 0) {
      FUN_089de2e4(iVar15,"afx_139m_L.gmo",0);
      iVar12 = iVar15;
    }
    FUN_089e0b98(iVar12,*(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x14c));
    *(undefined4 *)(iVar12 + 0x60) = 0x3e4ccccd;
    *(undefined4 *)(iVar12 + 100) = 0x3e4ccccd;
    *(undefined4 *)(iVar12 + 0x68) = 0x3e4ccccd;
    *(undefined4 *)(iVar12 + 0x6c) = 0x3f800000;
    *(undefined *)(iVar12 + 0xbc) = 1;
    *(int *)(*(int *)(param_1 + 0xc0) + 0x210) = iVar12;
    FUN_089e07b0(*(undefined4 *)(param_1 + 0xb0),"_rocket",0);
    auVar4._8_8_ = *(undefined8 *)(param_1 + 0x30);
    auVar4._4_4_ = *(undefined4 *)(param_1 + 0x24);
    auVar4._0_4_ = *(undefined4 *)(param_1 + 0x20);
    auVar6._12_4_ = DAT_08b0093c;
    auVar6._8_4_ = DAT_08b00938;
    auVar6._4_4_ = DAT_08b00934;
    auVar6._0_4_ = DAT_08b00930;
    auVar6 = vtfm4_q(auVar4,auVar6);
    *(int *)(param_1 + 0x80) = auVar6._0_4_;
    *(int *)(param_1 + 0x84) = auVar6._4_4_;
    *(int *)(param_1 + 0x88) = auVar6._8_4_;
    *(int *)(param_1 + 0x8c) = auVar6._12_4_;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(float *)(param_1 + 0x104) = (1.0 - *(float *)(param_1 + 0x10c)) * 0.5 * 3.141593;
    FUN_08877060(param_1,0x1500029,0,0,0);
  }
  else {
    if ((0x14 < *(int *)(param_1 + 0xf4)) && (*(float *)(param_1 + 0xe0) < 0.2)) {
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) + 0.01;
    }
    if (*(float *)(param_1 + 0x20) < 35.0) {
      *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) + 0.5;
      fVar16 = *(float *)(param_1 + 0xe0);
    }
    else {
      fVar16 = *(float *)(param_1 + 0xe0);
    }
    uVar17 = vmul_s(*(undefined4 *)(param_1 + 0x104),in_V7C);
    auVar6 = vrot_q(uVar17,1,0,2,0);
    uStack_74 = auVar6._12_4_;
    auVar1 = vscl_t(auVar6._0_12_,(0.2 - fVar16) * 1500.0 + 100.0);
    local_80 = auVar1._0_4_;
    uStack_7c = auVar1._4_4_;
    uStack_78 = auVar1._8_4_;
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + 0.04;
    FUN_08877af0(*(undefined4 *)(param_1 + 0x20),
                 ((0.2 - *(float *)(param_1 + 0xe0)) * 500.0 + 80.0) -
                 (float)*(int *)(param_1 + 0xf4) * 0.5,param_1,0,&local_80);
    FUN_088787a0(param_1);
    iVar12 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar14,
                          (undefined (*) [12])(param_1 + 0x70),0x5b,3,0,0x31bf337e);
    if (iVar12 != 0) {
      FUN_08823f5c(DAT_08b00920,0xe6,&DAT_08aba930);
      FUN_089e07b0(*(undefined4 *)(param_1 + 0xb0),"_rocket",1);
      FUN_089de940(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x210),0);
      FUN_08877060(param_1,0x200098,0,0,0);
      FUN_08876ee0(param_1);
      return;
    }
    iVar12 = *(int *)(param_1 + 0xbc);
    pauVar13 = (undefined (*) [12])(param_1 + 0x80);
    uVar17 = *(undefined4 *)(param_1 + 0x84);
    uVar18 = *(undefined4 *)(param_1 + 0x88);
    uVar9 = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(iVar12 + 0x90) = *(undefined4 *)*pauVar13;
    *(undefined4 *)(iVar12 + 0x94) = uVar17;
    *(undefined4 *)(iVar12 + 0x98) = uVar18;
    *(undefined4 *)(iVar12 + 0x9c) = uVar9;
    uVar17 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar14,*(undefined (*) [12])(param_1 + 0x70));
    *(int *)*pauVar14 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar17;
    iVar12 = *(int *)(param_1 + 0xc0);
    uVar17 = *(undefined4 *)*pauVar14;
    uVar18 = *(undefined4 *)(param_1 + 100);
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    uVar10 = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(iVar12 + 0x60) = uVar17;
    *(undefined4 *)(iVar12 + 100) = uVar18;
    *(undefined4 *)(iVar12 + 0x68) = uVar9;
    *(undefined4 *)(iVar12 + 0x6c) = uVar10;
    iVar12 = *(int *)(param_1 + 0xc0);
    uVar18 = vdot_t(*pauVar13,*pauVar13);
    uVar17 = vcmp_s(8,uVar18,uVar17);
    vrsq_s(uVar18);
    uVar17 = vcmovt_s(in_V7D,(byte)uVar17 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar13,uVar17);
    auVar2._8_4_ = DAT_08b001a8;
    auVar2._4_4_ = DAT_08b001a4;
    auVar2._0_4_ = DAT_08b001a0;
    auVar2 = vcrsp_t(auVar2,auVar1);
    uVar17 = vdot_t(auVar2,auVar2);
    uVar18 = vcmp_s(8,uVar17,auVar2._0_4_);
    vrsq_s(uVar17);
    uVar17 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar2,uVar17);
    auVar3 = vcrsp_t(auVar1,auVar2);
    auVar6 = vidt_q();
    auVar4 = vidt_q();
    *(int *)(iVar12 + 0x20) = auVar2._0_4_;
    *(int *)(iVar12 + 0x24) = auVar2._4_4_;
    *(int *)(iVar12 + 0x28) = auVar2._8_4_;
    *(int *)(iVar12 + 0x2c) = auVar6._0_4_;
    *(int *)(iVar12 + 0x30) = auVar3._0_4_;
    *(int *)(iVar12 + 0x34) = auVar3._4_4_;
    *(int *)(iVar12 + 0x38) = auVar3._8_4_;
    *(int *)(iVar12 + 0x3c) = auVar6._4_4_;
    *(int *)(iVar12 + 0x40) = auVar1._0_4_;
    *(int *)(iVar12 + 0x44) = auVar1._4_4_;
    *(int *)(iVar12 + 0x48) = auVar1._8_4_;
    *(int *)(iVar12 + 0x4c) = auVar6._8_4_;
    *(int *)(iVar12 + 0x50) = auVar4._0_4_;
    *(int *)(iVar12 + 0x54) = auVar4._4_4_;
    *(int *)(iVar12 + 0x58) = auVar4._8_4_;
    *(int *)(iVar12 + 0x5c) = auVar4._12_4_;
    iVar12 = *(int *)(param_1 + 0xc0);
    uVar17 = vmul_s(*(undefined4 *)(param_1 + 0x10c),in_V7C);
    auVar7 = vrot_q(uVar17,1,2,0,0);
    auVar8 = vrot_q(uVar17,3,1,0,0);
    auVar6 = vidt_q();
    auVar4 = vidt_q();
    auVar5._60_4_ = *(undefined4 *)(iVar12 + 0x5c);
    auVar5._56_4_ = *(undefined4 *)(iVar12 + 0x4c);
    auVar5._52_4_ = *(undefined4 *)(iVar12 + 0x3c);
    auVar5._48_4_ = *(undefined4 *)(iVar12 + 0x2c);
    auVar5._44_4_ = *(undefined4 *)(iVar12 + 0x58);
    auVar5._40_4_ = *(undefined4 *)(iVar12 + 0x48);
    auVar5._36_4_ = *(undefined4 *)(iVar12 + 0x38);
    auVar5._32_4_ = *(undefined4 *)(iVar12 + 0x28);
    auVar5._28_4_ = *(undefined4 *)(iVar12 + 0x54);
    auVar5._24_4_ = *(undefined4 *)(iVar12 + 0x44);
    auVar5._20_4_ = *(undefined4 *)(iVar12 + 0x34);
    auVar5._16_4_ = *(undefined4 *)(iVar12 + 0x24);
    auVar5._12_4_ = *(undefined4 *)(iVar12 + 0x50);
    auVar5._8_4_ = *(undefined4 *)(iVar12 + 0x40);
    auVar5._4_4_ = *(undefined4 *)(iVar12 + 0x30);
    auVar5._0_4_ = *(undefined4 *)(iVar12 + 0x20);
    auVar11._60_4_ = auVar4._12_4_;
    auVar11._56_4_ = auVar6._12_4_;
    auVar11._52_4_ = auVar8._12_4_;
    auVar11._48_4_ = auVar7._12_4_;
    auVar11._44_4_ = auVar4._8_4_;
    auVar11._40_4_ = auVar6._8_4_;
    auVar11._36_4_ = auVar8._8_4_;
    auVar11._32_4_ = auVar7._8_4_;
    auVar11._28_4_ = auVar4._4_4_;
    auVar11._24_4_ = auVar6._4_4_;
    auVar11._20_4_ = auVar8._4_4_;
    auVar11._16_4_ = auVar7._4_4_;
    auVar11._12_4_ = auVar4._0_4_;
    auVar11._8_4_ = auVar6._0_4_;
    auVar11._4_4_ = auVar8._0_4_;
    auVar11._0_4_ = auVar7._0_4_;
    auVar5 = vmmul_q(auVar5,auVar11);
    *(undefined4 *)(iVar12 + 0x20) = auVar5._0_4_;
    *(int *)(iVar12 + 0x24) = auVar5._16_4_;
    *(int *)(iVar12 + 0x28) = auVar5._32_4_;
    *(int *)(iVar12 + 0x2c) = auVar5._48_4_;
    *(int *)(iVar12 + 0x30) = auVar5._4_4_;
    *(int *)(iVar12 + 0x34) = auVar5._20_4_;
    *(int *)(iVar12 + 0x38) = auVar5._36_4_;
    *(int *)(iVar12 + 0x3c) = auVar5._52_4_;
    *(int *)(iVar12 + 0x40) = auVar5._8_4_;
    *(int *)(iVar12 + 0x44) = auVar5._24_4_;
    *(int *)(iVar12 + 0x48) = auVar5._40_4_;
    *(int *)(iVar12 + 0x4c) = auVar5._56_4_;
    *(int *)(iVar12 + 0x50) = auVar5._12_4_;
    *(int *)(iVar12 + 0x54) = auVar5._28_4_;
    *(int *)(iVar12 + 0x58) = auVar5._44_4_;
    *(int *)(iVar12 + 0x5c) = auVar5._60_4_;
  }
  return;
}

