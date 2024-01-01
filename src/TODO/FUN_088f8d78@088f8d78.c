#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f8d78(int param_1)

{
  undefined auVar1 [12];
  float fVar2;
  float fVar3;
  undefined auVar4 [12];
  undefined4 uVar5;
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined4 *puVar9;
  undefined (*pauVar10) [12];
  float fVar11;
  undefined4 uVar12;
  undefined4 in_V7D;
  undefined4 uVar13;
  
  puVar9 = (undefined4 *)FUN_088f8d48();
  pauVar10 = (undefined (*) [12])(param_1 + 0x40);
  uVar12 = puVar9[1];
  uVar13 = puVar9[2];
  uVar5 = puVar9[3];
  *(undefined4 *)*pauVar10 = *puVar9;
  *(undefined4 *)(param_1 + 0x44) = uVar12;
  *(undefined4 *)(param_1 + 0x48) = uVar13;
  *(undefined4 *)(param_1 + 0x4c) = uVar5;
  auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 4) + 0x10),
                  **(undefined (**) [12])(param_1 + 4));
  fVar2 = auVar1._0_4_;
  fVar3 = auVar1._8_4_;
  if (DAT_08b00944 == 0) {
    DAT_08b00944 = 1;
    DAT_08b00940 = 0;
  }
  fVar11 = fVar2;
  if (fVar2 < 0.0) {
    fVar11 = -fVar2;
  }
  if (fVar11 <= 0.0001) {
    if (DAT_08b00944 == 0) {
      DAT_08b00944 = 1;
      DAT_08b00940 = 0;
    }
    fVar11 = fVar3;
    if (fVar3 < 0.0) {
      fVar11 = -fVar3;
    }
    if (fVar11 <= 0.0001) {
      return;
    }
  }
  auVar7._4_4_ = 0;
  auVar7._0_4_ = fVar2;
  auVar7._8_4_ = fVar3;
  auVar4._4_4_ = 0;
  auVar4._0_4_ = fVar2;
  auVar4._8_4_ = fVar3;
  auVar1._4_4_ = 0;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar3;
  uVar12 = vdot_t(auVar1,auVar4);
  uVar13 = vcmp_s(8,uVar12,fVar2);
  vrsq_s(uVar12);
  uVar12 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
  vpfxd(4,4,4,5);
  auVar1 = vscl_t(auVar7,uVar12);
  auVar4 = vscl_t(auVar1,*(undefined4 *)(param_1 + 0x78));
  auVar6._8_4_ = DAT_08abfab8;
  auVar6._4_4_ = DAT_08abfab4;
  auVar6._0_4_ = DAT_08abfab0;
  auVar1 = vcrsp_t(auVar1,auVar6);
  auVar1 = vscl_t(auVar1,*(undefined4 *)(param_1 + 0x70));
  auVar1 = vadd_t(auVar4,auVar1);
  uVar12 = *(undefined4 *)(param_1 + 0x4c);
  auVar8._4_4_ = auVar1._4_4_ + *(float *)(param_1 + 0x74);
  auVar8._0_4_ = auVar1._0_4_;
  auVar8._8_4_ = auVar1._8_4_;
  auVar1 = vadd_t(*pauVar10,auVar8);
  *(int *)*pauVar10 = auVar1._0_4_;
  *(int *)(param_1 + 0x44) = auVar1._4_4_;
  *(int *)(param_1 + 0x48) = auVar1._8_4_;
  *(undefined4 *)(param_1 + 0x4c) = uVar12;
  return;
}

