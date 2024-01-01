#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fa054(int param_1,short param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [64];
  undefined auVar9 [12];
  undefined auVar10 [36];
  undefined auVar11 [64];
  int iVar12;
  int iVar13;
  undefined (*pauVar14) [16];
  int iVar15;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar13 = DAT_08abfc50;
  iVar15 = (int)param_2;
  if (iVar15 != -1) {
    iVar12 = FUN_088fbf38(DAT_08abfc50,iVar15);
    if (iVar12 != 0) {
      iVar12 = FUN_088fc034(iVar13,iVar15,*(undefined4 *)(iVar13 + 0xc));
      if (iVar12 == 0) {
        iVar13 = FUN_088fc134(iVar13,iVar15,*(undefined4 *)(iVar13 + 0xc));
        if (iVar13 == 0) {
          if ((*(int *)(param_1 + 0x38) == 0) || (*(int *)(*(int *)(param_1 + 0x38) + 0x70) != 0)) {
            FUN_088f9e7c(param_1);
          }
        }
        else {
          pauVar14 = (undefined (*) [16])(iVar13 + 0x10);
          vpfxs(3,2,0x11,0x10);
          auVar1 = vmov_q(*pauVar14);
          vpfxs(0x12,3,0,0x11);
          auVar2 = vmov_q(*pauVar14);
          vpfxs(1,0x10,3,0x12);
          auVar3 = vmov_q(*pauVar14);
          vpfxs(3,2,0x11,0);
          auVar4 = vmov_q(*pauVar14);
          vpfxs(0x12,3,0,1);
          auVar5 = vmov_q(*pauVar14);
          vpfxs(1,0x10,3,2);
          auVar6 = vmov_q(*pauVar14);
          vpfxs(0x10,0x11,0x12,3);
          auVar7 = vmov_q(*pauVar14);
          auVar8._48_16_ = auVar7;
          auVar8._44_4_ = auVar6._12_4_;
          auVar8._40_4_ = auVar6._8_4_;
          auVar8._36_4_ = auVar6._4_4_;
          auVar8._32_4_ = auVar6._0_4_;
          auVar8._28_4_ = auVar5._12_4_;
          auVar8._24_4_ = auVar5._8_4_;
          auVar8._20_4_ = auVar5._4_4_;
          auVar8._16_4_ = auVar5._0_4_;
          auVar8._12_4_ = auVar4._12_4_;
          auVar8._8_4_ = auVar4._8_4_;
          auVar8._4_4_ = auVar4._4_4_;
          auVar8._0_4_ = auVar4._0_4_;
          auVar11._48_16_ = *pauVar14;
          auVar11._44_4_ = auVar3._12_4_;
          auVar11._40_4_ = auVar3._8_4_;
          auVar11._36_4_ = auVar3._4_4_;
          auVar11._32_4_ = auVar3._0_4_;
          auVar11._28_4_ = auVar2._12_4_;
          auVar11._24_4_ = auVar2._8_4_;
          auVar11._20_4_ = auVar2._4_4_;
          auVar11._16_4_ = auVar2._0_4_;
          auVar11._12_4_ = auVar1._12_4_;
          auVar11._8_4_ = auVar1._8_4_;
          auVar11._4_4_ = auVar1._4_4_;
          auVar11._0_4_ = auVar1._0_4_;
          auVar8 = vmmul_q(auVar8,auVar11);
          local_70 = auVar8._0_4_;
          uStack_6c = auVar8._4_4_;
          uStack_68 = auVar8._8_4_;
          local_60 = auVar8._16_4_;
          uStack_5c = auVar8._20_4_;
          uStack_58 = auVar8._24_4_;
          local_50 = auVar8._32_4_;
          uStack_4c = auVar8._36_4_;
          uStack_48 = auVar8._40_4_;
          auVar1 = vidt_q();
          local_74 = auVar1._0_4_;
          uStack_54 = auVar1._4_4_;
          uStack_44 = auVar1._8_4_;
          auVar1 = vidt_q();
          local_40 = auVar1._0_4_;
          uStack_3c = auVar1._4_4_;
          uStack_38 = auVar1._8_4_;
          uStack_34 = auVar1._12_4_;
          auVar10._24_12_ = auVar8._32_12_;
          auVar10._20_4_ = uStack_58;
          auVar10._16_4_ = uStack_5c;
          auVar10._12_4_ = local_60;
          auVar10._8_4_ = uStack_68;
          auVar10._4_4_ = uStack_6c;
          auVar10._0_4_ = local_70;
          auVar9._8_4_ = DAT_08abfbf8;
          auVar9._4_4_ = DAT_08abfbf4;
          auVar9._0_4_ = DAT_08abfbf0;
          auVar9 = vtfm3_t(auVar10,auVar9);
          local_80 = auVar9._0_4_;
          local_7c = auVar9._4_4_;
          local_78 = auVar9._8_4_;
          uStack_64 = local_74;
          local_30 = local_80;
          local_2c = local_7c;
          local_28 = local_78;
          local_24 = local_74;
          FUN_088f9cdc(param_1,iVar13,&local_80);
        }
      }
      else {
        FUN_088f9b58(param_1,iVar12);
      }
    }
  }
  return;
}

