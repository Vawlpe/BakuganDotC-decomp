#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088798e4(int param_1,undefined4 param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [64];
  undefined auVar8 [64];
  int iVar9;
  undefined (*pauVar10) [16];
  undefined (*pauVar11) [12];
  undefined (*pauVar12) [12];
  undefined4 in_V00;
  undefined4 uVar13;
  undefined4 in_V7D;
  undefined4 uVar14;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  if (0x1e < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    pauVar11 = (undefined (*) [12])(param_1 + 0x80);
    iVar9 = FUN_08824024(DAT_08b00920,0xb3,param_1 + 0x60,pauVar11);
    pauVar10 = (undefined (*) [16])(iVar9 + 0x20);
    uVar13 = vdot_t(*pauVar11,*pauVar11);
    uVar14 = vcmp_s(8,uVar13,in_V00);
    vrsq_s(uVar13);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar14 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(*pauVar11,uVar13);
    auVar4._8_4_ = DAT_08b001a8;
    auVar4._4_4_ = DAT_08b001a4;
    auVar4._0_4_ = DAT_08b001a0;
    auVar3 = vcrsp_t(auVar4,auVar1);
    uVar13 = vdot_t(auVar3,auVar3);
    uVar14 = vcmp_s(8,uVar13,auVar3._0_4_);
    vrsq_s(uVar13);
    uVar13 = vcmovt_s(in_V7D,(byte)uVar14 & 1);
    vpfxd(4,4,4,5);
    auVar3 = vscl_t(auVar3,uVar13);
    auVar4 = vcrsp_t(auVar1,auVar3);
    auVar5 = vidt_q();
    auVar6 = vidt_q();
    *(int *)*pauVar10 = auVar3._0_4_;
    *(int *)(iVar9 + 0x24) = auVar3._4_4_;
    *(int *)(iVar9 + 0x28) = auVar3._8_4_;
    *(int *)(iVar9 + 0x2c) = auVar5._0_4_;
    *(int *)(iVar9 + 0x30) = auVar4._0_4_;
    *(int *)(iVar9 + 0x34) = auVar4._4_4_;
    *(int *)(iVar9 + 0x38) = auVar4._8_4_;
    *(int *)(iVar9 + 0x3c) = auVar5._4_4_;
    *(int *)(iVar9 + 0x40) = auVar1._0_4_;
    *(int *)(iVar9 + 0x44) = auVar1._4_4_;
    *(int *)(iVar9 + 0x48) = auVar1._8_4_;
    *(int *)(iVar9 + 0x4c) = auVar5._8_4_;
    *(int *)(iVar9 + 0x50) = auVar6._0_4_;
    *(int *)(iVar9 + 0x54) = auVar6._4_4_;
    *(int *)(iVar9 + 0x58) = auVar6._8_4_;
    *(int *)(iVar9 + 0x5c) = auVar6._12_4_;
    auVar5 = vscl_q(*pauVar10,0x3f800000);
    auVar6 = vscl_q(*(undefined (*) [16])(iVar9 + 0x30),0x3f800000);
    auVar2 = vscl_q(*(undefined (*) [16])(iVar9 + 0x40),0xbf800000);
    *(int *)*pauVar10 = auVar5._0_4_;
    *(int *)(iVar9 + 0x24) = auVar5._4_4_;
    *(int *)(iVar9 + 0x28) = auVar5._8_4_;
    *(int *)(iVar9 + 0x2c) = auVar5._12_4_;
    *(int *)(iVar9 + 0x30) = auVar6._0_4_;
    *(int *)(iVar9 + 0x34) = auVar6._4_4_;
    *(int *)(iVar9 + 0x38) = auVar6._8_4_;
    *(int *)(iVar9 + 0x3c) = auVar6._12_4_;
    *(int *)(iVar9 + 0x40) = auVar2._0_4_;
    *(int *)(iVar9 + 0x44) = auVar2._4_4_;
    *(int *)(iVar9 + 0x48) = auVar2._8_4_;
    *(int *)(iVar9 + 0x4c) = auVar2._12_4_;
    auVar7._60_4_ = *(undefined4 *)(iVar9 + 0x5c);
    auVar7._56_4_ = *(undefined4 *)(iVar9 + 0x4c);
    auVar7._52_4_ = *(undefined4 *)(iVar9 + 0x3c);
    auVar7._48_4_ = *(undefined4 *)(iVar9 + 0x2c);
    auVar7._44_4_ = *(undefined4 *)(iVar9 + 0x58);
    auVar7._40_4_ = *(undefined4 *)(iVar9 + 0x48);
    auVar7._36_4_ = *(undefined4 *)(iVar9 + 0x38);
    auVar7._32_4_ = *(undefined4 *)(iVar9 + 0x28);
    auVar7._28_4_ = *(undefined4 *)(iVar9 + 0x54);
    auVar7._24_4_ = *(undefined4 *)(iVar9 + 0x44);
    auVar7._20_4_ = *(undefined4 *)(iVar9 + 0x34);
    auVar7._16_4_ = *(undefined4 *)(iVar9 + 0x24);
    auVar7._12_4_ = *(undefined4 *)(iVar9 + 0x50);
    auVar7._8_4_ = *(undefined4 *)(iVar9 + 0x40);
    auVar7._4_4_ = *(undefined4 *)(iVar9 + 0x30);
    auVar7._0_4_ = *(undefined4 *)*pauVar10;
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
    auVar7 = vmmul_q(auVar7,auVar8);
    *(int *)*pauVar10 = auVar7._0_4_;
    *(int *)(iVar9 + 0x24) = auVar7._16_4_;
    *(int *)(iVar9 + 0x28) = auVar7._32_4_;
    *(int *)(iVar9 + 0x2c) = auVar7._48_4_;
    *(int *)(iVar9 + 0x30) = auVar7._4_4_;
    *(int *)(iVar9 + 0x34) = auVar7._20_4_;
    *(int *)(iVar9 + 0x38) = auVar7._36_4_;
    *(int *)(iVar9 + 0x3c) = auVar7._52_4_;
    *(int *)(iVar9 + 0x40) = auVar7._8_4_;
    *(int *)(iVar9 + 0x44) = auVar7._24_4_;
    *(int *)(iVar9 + 0x48) = auVar7._40_4_;
    *(int *)(iVar9 + 0x4c) = auVar7._56_4_;
    *(int *)(iVar9 + 0x50) = auVar7._12_4_;
    *(int *)(iVar9 + 0x54) = auVar7._28_4_;
    *(int *)(iVar9 + 0x58) = auVar7._44_4_;
    *(int *)(iVar9 + 0x5c) = auVar7._60_4_;
  }
  else {
    iVar9 = FUN_0887979c(param_1,0xb8);
    if (iVar9 == 0) {
      FUN_08877af0(0x42c80000,0x42700000,param_1,1,0);
      pauVar12 = (undefined (*) [12])(param_1 + 0x60);
      pauVar11 = (undefined (*) [12])(param_1 + 0x70);
      iVar9 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar12,pauVar11,param_2,3,0,
                           0x31bf337e);
      if (iVar9 != 0) {
        FUN_08878cc4(param_1,0xb8,&DAT_08aba930);
        return;
      }
      local_50 = *(undefined4 *)*pauVar12;
      uStack_4c = *(undefined4 *)(param_1 + 100);
      uStack_48 = *(undefined4 *)(param_1 + 0x68);
      uStack_44 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vscl_t(*pauVar11,0x3e4ccccd);
      local_40 = auVar1._0_4_;
      uStack_3c = auVar1._4_4_;
      uStack_38 = auVar1._8_4_;
      iVar9 = 0;
      do {
        FUN_08823f5c(DAT_08b00920,0xb2,&local_50);
        auVar1._4_4_ = uStack_4c;
        auVar1._0_4_ = local_50;
        auVar1._8_4_ = uStack_48;
        auVar3._4_4_ = uStack_3c;
        auVar3._0_4_ = local_40;
        auVar3._8_4_ = uStack_38;
        auVar1 = vadd_t(auVar1,auVar3);
        local_50 = auVar1._0_4_;
        uStack_4c = auVar1._4_4_;
        uStack_48 = auVar1._8_4_;
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
      uVar13 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar12,*pauVar11);
      *(int *)*pauVar12 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar13;
    }
  }
  return;
}

