#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08879b9c(int param_1,undefined4 param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [16];
  undefined auVar5 [64];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined auVar9 [64];
  int iVar11;
  undefined (*pauVar12) [16];
  undefined4 uVar13;
  undefined (*pauVar14) [12];
  undefined (*pauVar15) [12];
  undefined (*pauVar16) [16];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined (*local_38) [12];
  undefined auVar10 [64];
  
  if (60.0 < (float)*(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    uVar13 = 0x3f860a92;
    pauVar16 = (undefined (*) [16])(param_1 + 0x80);
    if (*(float *)(param_1 + 0x10c) != 0.0) {
      uVar13 = 0xbf860a92;
    }
    uVar18 = vmul_s(uVar13,in_V7C);
    auVar4 = vmov_q(*pauVar16);
    auVar6 = vrot_q(uVar18,1,0,3,0);
    uVar13 = auVar6._0_4_;
    auVar7 = vrot_q(uVar18,2,0,1,0);
    uVar18 = vdot_t(*(undefined (*) [12])*pauVar16,auVar6._0_12_);
    uVar17 = vdot_t(*(undefined (*) [12])*pauVar16,auVar7._0_12_);
    *(undefined4 *)*pauVar16 = uVar18;
    *(int *)(param_1 + 0x84) = auVar4._4_4_;
    *(undefined4 *)(param_1 + 0x88) = uVar17;
    *(int *)(param_1 + 0x8c) = auVar4._12_4_;
    *(undefined4 *)(param_1 + 0xe0) = 0x3e570a3d;
    iVar11 = FUN_08824024(DAT_08b00920,0xb3,param_1 + 0x60,pauVar16);
    pauVar12 = (undefined (*) [16])(iVar11 + 0x20);
    uVar18 = vdot_t(*(undefined (*) [12])*pauVar16,*(undefined (*) [12])*pauVar16);
    uVar13 = vcmp_s(8,uVar18,uVar13);
    vrsq_s(uVar18);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*(undefined (*) [12])*pauVar16,uVar13);
    auVar3._8_4_ = DAT_08b001a8;
    auVar3._4_4_ = DAT_08b001a4;
    auVar3._0_4_ = DAT_08b001a0;
    auVar2 = vcrsp_t(auVar3,auVar1);
    uVar13 = vdot_t(auVar2,auVar2);
    uVar18 = vcmp_s(8,uVar13,auVar2._0_4_);
    vrsq_s(uVar13);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(auVar2,uVar13);
    auVar3 = vcrsp_t(auVar1,auVar2);
    auVar4 = vidt_q();
    auVar6 = vidt_q();
    *(int *)*pauVar12 = auVar2._0_4_;
    *(int *)(iVar11 + 0x24) = auVar2._4_4_;
    *(int *)(iVar11 + 0x28) = auVar2._8_4_;
    *(int *)(iVar11 + 0x2c) = auVar4._0_4_;
    *(int *)(iVar11 + 0x30) = auVar3._0_4_;
    *(int *)(iVar11 + 0x34) = auVar3._4_4_;
    *(int *)(iVar11 + 0x38) = auVar3._8_4_;
    *(int *)(iVar11 + 0x3c) = auVar4._4_4_;
    *(int *)(iVar11 + 0x40) = auVar1._0_4_;
    *(int *)(iVar11 + 0x44) = auVar1._4_4_;
    *(int *)(iVar11 + 0x48) = auVar1._8_4_;
    *(int *)(iVar11 + 0x4c) = auVar4._8_4_;
    *(int *)(iVar11 + 0x50) = auVar6._0_4_;
    *(int *)(iVar11 + 0x54) = auVar6._4_4_;
    *(int *)(iVar11 + 0x58) = auVar6._8_4_;
    *(int *)(iVar11 + 0x5c) = auVar6._12_4_;
    auVar4 = vscl_q(*pauVar12,0x3fc00000);
    auVar6 = vscl_q(*(undefined (*) [16])(iVar11 + 0x30),0x3fc00000);
    auVar7 = vscl_q(*(undefined (*) [16])(iVar11 + 0x40),0xbfc00000);
    *(int *)*pauVar12 = auVar4._0_4_;
    *(int *)(iVar11 + 0x24) = auVar4._4_4_;
    *(int *)(iVar11 + 0x28) = auVar4._8_4_;
    *(int *)(iVar11 + 0x2c) = auVar4._12_4_;
    *(int *)(iVar11 + 0x30) = auVar6._0_4_;
    *(int *)(iVar11 + 0x34) = auVar6._4_4_;
    *(int *)(iVar11 + 0x38) = auVar6._8_4_;
    *(int *)(iVar11 + 0x3c) = auVar6._12_4_;
    *(int *)(iVar11 + 0x40) = auVar7._0_4_;
    *(int *)(iVar11 + 0x44) = auVar7._4_4_;
    *(int *)(iVar11 + 0x48) = auVar7._8_4_;
    *(int *)(iVar11 + 0x4c) = auVar7._12_4_;
    auVar5._60_4_ = *(undefined4 *)(iVar11 + 0x5c);
    auVar5._56_4_ = *(undefined4 *)(iVar11 + 0x4c);
    auVar5._52_4_ = *(undefined4 *)(iVar11 + 0x3c);
    auVar5._48_4_ = *(undefined4 *)(iVar11 + 0x2c);
    auVar5._44_4_ = *(undefined4 *)(iVar11 + 0x58);
    auVar5._40_4_ = *(undefined4 *)(iVar11 + 0x48);
    auVar5._36_4_ = *(undefined4 *)(iVar11 + 0x38);
    auVar5._32_4_ = *(undefined4 *)(iVar11 + 0x28);
    auVar5._28_4_ = *(undefined4 *)(iVar11 + 0x54);
    auVar5._24_4_ = *(undefined4 *)(iVar11 + 0x44);
    auVar5._20_4_ = *(undefined4 *)(iVar11 + 0x34);
    auVar5._16_4_ = *(undefined4 *)(iVar11 + 0x24);
    auVar5._12_4_ = *(undefined4 *)(iVar11 + 0x50);
    auVar5._8_4_ = *(undefined4 *)(iVar11 + 0x40);
    auVar5._4_4_ = *(undefined4 *)(iVar11 + 0x30);
    auVar5._0_4_ = *(undefined4 *)*pauVar12;
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
    auVar5 = vmmul_q(auVar5,auVar8);
    uVar13 = auVar5._0_4_;
    *(undefined4 *)*pauVar12 = uVar13;
    *(int *)(iVar11 + 0x24) = auVar5._16_4_;
    *(int *)(iVar11 + 0x28) = auVar5._32_4_;
    *(int *)(iVar11 + 0x2c) = auVar5._48_4_;
    *(int *)(iVar11 + 0x30) = auVar5._4_4_;
    *(int *)(iVar11 + 0x34) = auVar5._20_4_;
    *(int *)(iVar11 + 0x38) = auVar5._36_4_;
    *(int *)(iVar11 + 0x3c) = auVar5._52_4_;
    *(int *)(iVar11 + 0x40) = auVar5._8_4_;
    *(int *)(iVar11 + 0x44) = auVar5._24_4_;
    *(int *)(iVar11 + 0x48) = auVar5._40_4_;
    *(int *)(iVar11 + 0x4c) = auVar5._56_4_;
    *(int *)(iVar11 + 0x50) = auVar5._12_4_;
    *(int *)(iVar11 + 0x54) = auVar5._28_4_;
    *(int *)(iVar11 + 0x58) = auVar5._44_4_;
    *(int *)(iVar11 + 0x5c) = auVar5._60_4_;
    iVar11 = *(int *)(param_1 + 0xbc);
    local_38 = (undefined (*) [12])&DAT_08b001a0;
  }
  else {
    iVar11 = FUN_0887979c(param_1,0xb8);
    if (iVar11 != 0) {
      return;
    }
    FUN_08877af0(0x420c0000,0x42700000,param_1,1,0);
    pauVar15 = (undefined (*) [12])(param_1 + 0x60);
    pauVar14 = (undefined (*) [12])(param_1 + 0x70);
    iVar11 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar15,pauVar14,param_2,3,0,
                          0x31bf337e);
    if (iVar11 != 0) {
      FUN_08878cc4(param_1,0xb8,&DAT_08aba930);
      return;
    }
    local_70 = *(undefined4 *)*pauVar15;
    uStack_6c = *(undefined4 *)(param_1 + 100);
    uStack_68 = *(undefined4 *)(param_1 + 0x68);
    uStack_64 = *(undefined4 *)(param_1 + 0x6c);
    uVar13 = *(undefined4 *)*pauVar14;
    auVar1 = vscl_t(*pauVar14,0x3ea8f5c3);
    local_60 = auVar1._0_4_;
    uStack_5c = auVar1._4_4_;
    uStack_58 = auVar1._8_4_;
    iVar11 = 0;
    local_38 = (undefined (*) [12])&DAT_08b001a0;
    do {
      FUN_08823f5c(DAT_08b00920,0xb2,&local_70);
      auVar1._4_4_ = uStack_6c;
      auVar1._0_4_ = local_70;
      auVar1._8_4_ = uStack_68;
      auVar2._4_4_ = uStack_5c;
      auVar2._0_4_ = local_60;
      auVar2._8_4_ = uStack_58;
      auVar1 = vadd_t(auVar1,auVar2);
      local_70 = auVar1._0_4_;
      uStack_6c = auVar1._4_4_;
      uStack_68 = auVar1._8_4_;
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    if (0.1 < *(float *)(param_1 + 0xe0)) {
      *(float *)(param_1 + 0xe0) = *(float *)(param_1 + 0xe0) - 0.02;
    }
    uVar18 = *(undefined4 *)(param_1 + 0x6c);
    auVar1 = vadd_t(*pauVar15,*pauVar14);
    *(int *)*pauVar15 = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar18;
    iVar11 = *(int *)(param_1 + 0xbc);
  }
  pauVar14 = (undefined (*) [12])(param_1 + 0x80);
  uVar18 = vdot_t(*pauVar14,*pauVar14);
  uVar13 = vcmp_s(8,uVar18,uVar13);
  vrsq_s(uVar18);
  uVar13 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(*pauVar14,uVar13);
  auVar2 = vcrsp_t(*local_38,auVar1);
  uVar13 = vdot_t(auVar2,auVar2);
  uVar18 = vcmp_s(8,uVar13,auVar2._0_4_);
  vrsq_s(uVar13);
  uVar13 = vcmovt_s(in_V7D,(byte)uVar18 & 1);
  vpfxd(4,4,4,5);
  auVar2 = vscl_t(auVar2,uVar13);
  auVar3 = vcrsp_t(auVar1,auVar2);
  auVar4 = vidt_q();
  auVar6 = vidt_q();
  *(int *)(iVar11 + 0x20) = auVar2._0_4_;
  *(int *)(iVar11 + 0x24) = auVar2._4_4_;
  *(int *)(iVar11 + 0x28) = auVar2._8_4_;
  *(int *)(iVar11 + 0x2c) = auVar4._0_4_;
  *(int *)(iVar11 + 0x30) = auVar3._0_4_;
  *(int *)(iVar11 + 0x34) = auVar3._4_4_;
  *(int *)(iVar11 + 0x38) = auVar3._8_4_;
  *(int *)(iVar11 + 0x3c) = auVar4._4_4_;
  *(int *)(iVar11 + 0x40) = auVar1._0_4_;
  *(int *)(iVar11 + 0x44) = auVar1._4_4_;
  *(int *)(iVar11 + 0x48) = auVar1._8_4_;
  *(int *)(iVar11 + 0x4c) = auVar4._8_4_;
  *(int *)(iVar11 + 0x50) = auVar6._0_4_;
  *(int *)(iVar11 + 0x54) = auVar6._4_4_;
  *(int *)(iVar11 + 0x58) = auVar6._8_4_;
  *(int *)(iVar11 + 0x5c) = auVar6._12_4_;
  iVar11 = *(int *)(param_1 + 0xbc);
  auVar9._60_4_ = *(undefined4 *)(iVar11 + 0x5c);
  auVar9._56_4_ = *(undefined4 *)(iVar11 + 0x4c);
  auVar9._52_4_ = *(undefined4 *)(iVar11 + 0x3c);
  auVar9._48_4_ = *(undefined4 *)(iVar11 + 0x2c);
  auVar9._44_4_ = *(undefined4 *)(iVar11 + 0x58);
  auVar9._40_4_ = *(undefined4 *)(iVar11 + 0x48);
  auVar9._36_4_ = *(undefined4 *)(iVar11 + 0x38);
  auVar9._32_4_ = *(undefined4 *)(iVar11 + 0x28);
  auVar9._28_4_ = *(undefined4 *)(iVar11 + 0x54);
  auVar9._24_4_ = *(undefined4 *)(iVar11 + 0x44);
  auVar9._20_4_ = *(undefined4 *)(iVar11 + 0x34);
  auVar9._16_4_ = *(undefined4 *)(iVar11 + 0x24);
  auVar9._12_4_ = *(undefined4 *)(iVar11 + 0x50);
  auVar9._8_4_ = *(undefined4 *)(iVar11 + 0x40);
  auVar9._4_4_ = *(undefined4 *)(iVar11 + 0x30);
  auVar9._0_4_ = *(undefined4 *)(iVar11 + 0x20);
  auVar10._60_4_ = DAT_08b0082c;
  auVar10._56_4_ = DAT_08b0081c;
  auVar10._52_4_ = DAT_08b0080c;
  auVar10._48_4_ = DAT_08b007fc;
  auVar10._44_4_ = DAT_08b00828;
  auVar10._40_4_ = DAT_08b00818;
  auVar10._36_4_ = DAT_08b00808;
  auVar10._32_4_ = DAT_08b007f8;
  auVar10._28_4_ = DAT_08b00824;
  auVar10._24_4_ = DAT_08b00814;
  auVar10._20_4_ = DAT_08b00804;
  auVar10._16_4_ = DAT_08b007f4;
  auVar10._12_4_ = DAT_08b00820;
  auVar10._8_4_ = DAT_08b00810;
  auVar10._4_4_ = DAT_08b00800;
  auVar10._0_4_ = DAT_08b007f0;
  auVar5 = vmmul_q(auVar9,auVar10);
  *(undefined4 *)(iVar11 + 0x20) = auVar5._0_4_;
  *(int *)(iVar11 + 0x24) = auVar5._16_4_;
  *(int *)(iVar11 + 0x28) = auVar5._32_4_;
  *(int *)(iVar11 + 0x2c) = auVar5._48_4_;
  *(int *)(iVar11 + 0x30) = auVar5._4_4_;
  *(int *)(iVar11 + 0x34) = auVar5._20_4_;
  *(int *)(iVar11 + 0x38) = auVar5._36_4_;
  *(int *)(iVar11 + 0x3c) = auVar5._52_4_;
  *(int *)(iVar11 + 0x40) = auVar5._8_4_;
  *(int *)(iVar11 + 0x44) = auVar5._24_4_;
  *(int *)(iVar11 + 0x48) = auVar5._40_4_;
  *(int *)(iVar11 + 0x4c) = auVar5._56_4_;
  *(int *)(iVar11 + 0x50) = auVar5._12_4_;
  *(int *)(iVar11 + 0x54) = auVar5._28_4_;
  *(int *)(iVar11 + 0x58) = auVar5._44_4_;
  *(int *)(iVar11 + 0x5c) = auVar5._60_4_;
  return;
}

