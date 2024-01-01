#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08848028(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [12];
  undefined auVar3 [16];
  undefined auVar4 [12];
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  int iVar9;
  undefined (*pauVar10) [16];
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined local_90 [12];
  undefined4 local_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  
  if (*(int *)(param_1 + 0x328) < 1) {
    fVar11 = *(float *)(param_1 + 0x32c) - 0.1;
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    *(float *)(param_1 + 0x32c) = fVar11;
  }
  else {
    fVar11 = *(float *)(param_1 + 0x32c) + 0.0625;
    if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    *(float *)(param_1 + 0x32c) = fVar11;
    fVar11 = *(float *)(param_1 + 0x330) + 0.01666667;
    if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    *(float *)(param_1 + 0x330) = fVar11;
    *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + -1;
  }
  if (0.0001 <= *(float *)(param_1 + 0x32c)) {
    uVar14 = vmul_s(*(float *)(param_1 + 0x32c) * 3.141593,in_V7C);
    local_50 = (float)vcos_s(uVar14);
    fVar13 = (1.0 - local_50) * 0.5;
    uVar14 = vmul_s(*(float *)(param_1 + 0x330) * 3.141593,in_V7C);
    local_4c = (float)vcos_s(uVar14);
    fVar11 = (1.0 - local_4c) * 0.5;
    uVar14 = 0x437a0000;
    local_6c = fVar11 * 200.0 + -80.0;
    if (*(int *)(*(int *)(param_1 + 0x2a0) + 8) == 10) {
      uVar14 = 0x43e10000;
      local_6c = local_6c * 1.8 + 40.0;
    }
    iVar9 = *(int *)(param_1 + 0x2a0);
    local_80 = *(undefined4 *)(iVar9 + 0x20);
    uStack_78 = *(undefined4 *)(iVar9 + 0x28);
    uStack_74 = *(undefined4 *)(iVar9 + 0x2c);
    local_7c = *(float *)(iVar9 + 0x24) +
               *(float *)(*(int *)(*(int *)(param_1 + 0x2a0) + 0x4bc) + 4) * 0.4;
    uVar15 = vmul_s(*(float *)(*(int *)(param_1 + 0x2a0) + 0x34) +
                    (fVar11 * -55.0 + 25.0) * 0.01745329,in_V7C);
    auVar3 = vrot_q(uVar15,1,0,2,0);
    uStack_64 = auVar3._12_4_;
    auVar2 = vscl_t(auVar3._0_12_,uVar14);
    auVar4._4_4_ = local_7c;
    auVar4._0_4_ = local_80;
    auVar4._8_4_ = uStack_78;
    auVar2 = vadd_t(auVar2,auVar4);
    local_70 = auVar2._0_4_;
    uStack_68 = auVar2._8_4_;
    local_6c = auVar2._4_4_ + local_6c;
    uVar15 = vmul_s(*(undefined4 *)(*(int *)(param_1 + 0x2a0) + 0x34),in_V7C);
    auVar3 = vrot_q(uVar15,1,0,2,0);
    uStack_54 = auVar3._12_4_;
    auVar2 = vscl_t(auVar3._0_12_,uVar14);
    local_60 = auVar2._0_4_;
    uStack_5c = auVar2._4_4_;
    uStack_58 = auVar2._8_4_;
    FUN_089dedf8(*(undefined4 *)(param_1 + 0x2a0),local_90,"Bip01");
    auVar2._4_4_ = uStack_5c;
    auVar2._0_4_ = local_60;
    auVar2._8_4_ = uStack_58;
    auVar2 = vadd_t(auVar2,local_90);
    auVar5._4_4_ = local_7c;
    auVar5._0_4_ = local_80;
    auVar5._8_4_ = uStack_78;
    auVar5._12_4_ = uStack_74;
    auVar1._4_4_ = local_7c;
    auVar1._0_4_ = local_80;
    auVar1._8_4_ = uStack_78;
    auVar1._12_4_ = uStack_74;
    auVar8._12_4_ = uStack_54;
    auVar8._0_12_ = auVar2;
    auVar3 = vsub_q(auVar8,auVar1);
    auVar3 = vscl_q(auVar3,fVar11 * *(float *)(param_1 + 0x33c));
    auVar3 = vadd_q(auVar5,auVar3);
    fVar11 = *(float *)(param_1 + 0x340);
    fVar12 = *(float *)(param_1 + 0x33c);
    pauVar10 = (undefined (*) [16])(param_1 + 0x50);
    auVar7._4_4_ = local_6c;
    auVar7._0_4_ = local_70;
    auVar7._8_4_ = uStack_68;
    auVar7._12_4_ = uStack_64;
    auVar1 = vsub_q(auVar7,*pauVar10);
    auVar1 = vscl_q(auVar1,fVar13);
    auVar1 = vadd_q(*pauVar10,auVar1);
    *(int *)*pauVar10 = auVar1._0_4_;
    *(int *)(param_1 + 0x54) = auVar1._4_4_;
    *(int *)(param_1 + 0x58) = auVar1._8_4_;
    *(int *)(param_1 + 0x5c) = auVar1._12_4_;
    pauVar10 = (undefined (*) [16])(param_1 + 0x60);
    auVar6._4_4_ = auVar3._4_4_ + fVar11 * fVar12;
    auVar6._0_4_ = auVar3._0_4_;
    auVar6._8_4_ = auVar3._8_4_;
    auVar6._12_4_ = auVar3._12_4_;
    auVar3 = vsub_q(auVar6,*pauVar10);
    auVar3 = vscl_q(auVar3,fVar13);
    auVar3 = vadd_q(*pauVar10,auVar3);
    *(int *)*pauVar10 = auVar3._0_4_;
    *(int *)(param_1 + 100) = auVar3._4_4_;
    *(int *)(param_1 + 0x68) = auVar3._8_4_;
    *(int *)(param_1 + 0x6c) = auVar3._12_4_;
    pauVar10 = (undefined (*) [16])(param_1 + 0x80);
    auVar3._12_4_ = DAT_08b001ac;
    auVar3._8_4_ = DAT_08b001a8;
    auVar3._4_4_ = DAT_08b001a4;
    auVar3._0_4_ = DAT_08b001a0;
    auVar3 = vsub_q(auVar3,*pauVar10);
    auVar3 = vscl_q(auVar3,fVar13);
    auVar3 = vadd_q(*pauVar10,auVar3);
    *(int *)*pauVar10 = auVar3._0_4_;
    *(int *)(param_1 + 0x84) = auVar3._4_4_;
    *(int *)(param_1 + 0x88) = auVar3._8_4_;
    *(int *)(param_1 + 0x8c) = auVar3._12_4_;
    uVar14 = vdot_t(*(undefined (*) [12])*pauVar10,*(undefined (*) [12])*pauVar10);
    uVar15 = vcmp_s(8,uVar14,*(undefined4 *)*pauVar10);
    vrsq_s(uVar14);
    uVar14 = vcmovt_s(in_V7D,(byte)uVar15 & 1);
    vpfxd(4,4,4,5);
    auVar2 = vscl_t(*(undefined (*) [12])*pauVar10,uVar14);
    *(int *)*pauVar10 = auVar2._0_4_;
    *(int *)(param_1 + 0x84) = auVar2._4_4_;
    *(int *)(param_1 + 0x88) = auVar2._8_4_;
    *(undefined4 *)(param_1 + 0x8c) = in_V7D;
  }
  return;
}

