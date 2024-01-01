#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0887d950(int param_1,undefined4 param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  uint uVar6;
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  int iVar10;
  float fVar11;
  undefined (*pauVar12) [16];
  undefined (*pauVar13) [12];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 uVar17;
  
  if (0x3c < *(int *)(param_1 + 0xf4)) {
    FUN_08876ee0(param_1);
    return;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + -20.0;
    uVar6 = *(uint *)(param_1 + 0x70);
    uVar14 = *(undefined4 *)(param_1 + 0x78);
    auVar8._4_4_ = 0;
    auVar8._0_4_ = uVar6;
    auVar8._8_4_ = uVar14;
    auVar7._4_4_ = 0;
    auVar7._0_4_ = uVar6;
    auVar7._8_4_ = uVar14;
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar6;
    auVar1._8_4_ = uVar14;
    uVar14 = vdot_t(auVar1,auVar7);
    uVar17 = vcmp_s(8,uVar14,uVar6);
    vrsq_s(uVar14);
    uVar14 = vcmovt_s(in_V7D,(byte)uVar17 & 1);
    uVar14 = vmul_s(uVar14,0x41200000);
    auVar1 = vscl_t(auVar8,uVar14);
    fVar11 = 1.570796;
    if (*(float *)(param_1 + 0x10c) != 0.0) {
      fVar11 = -1.570796;
    }
    uVar14 = vmul_s(fVar11,in_V7C);
    auVar2._12_4_ = in_V7D;
    auVar2._0_12_ = auVar1;
    auVar2 = vmov_q(auVar2);
    auVar3 = vrot_q(uVar14,1,0,3,0);
    auVar4 = vrot_q(uVar14,2,0,1,0);
    uVar17 = vdot_t(auVar1,auVar3._0_12_);
    uVar15 = vdot_t(auVar1,auVar4._0_12_);
    pauVar12 = (undefined (*) [16])(param_1 + 0x80);
    uVar14 = vmul_s(fVar11 * 0.03,in_V7C);
    auVar3 = vmov_q(*pauVar12);
    auVar4 = vrot_q(uVar14,1,0,3,0);
    auVar5 = vrot_q(uVar14,2,0,1,0);
    uVar14 = vdot_t(*(undefined (*) [12])*pauVar12,auVar4._0_12_);
    uVar16 = vdot_t(*(undefined (*) [12])*pauVar12,auVar5._0_12_);
    *(undefined4 *)*pauVar12 = uVar14;
    *(int *)(param_1 + 0x84) = auVar3._4_4_;
    *(undefined4 *)(param_1 + 0x88) = uVar16;
    *(int *)(param_1 + 0x8c) = auVar3._12_4_;
    *(undefined4 *)(param_1 + 0xe0) = 0x3ca3d70a;
    uVar14 = *(undefined4 *)(param_1 + 0x6c);
    auVar9._4_4_ = auVar2._4_4_;
    auVar9._0_4_ = uVar17;
    auVar9._8_4_ = uVar15;
    auVar1 = vadd_t(*(undefined (*) [12])(param_1 + 0x60),auVar9);
    *(int *)*(undefined (*) [12])(param_1 + 0x60) = auVar1._0_4_;
    *(int *)(param_1 + 100) = auVar1._4_4_;
    *(int *)(param_1 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x6c) = uVar14;
  }
  else {
    iVar10 = FUN_0887979c(param_1,0xbb);
    if (iVar10 == 0) {
      FUN_08877af0(0x420c0000,0x42a00000,param_1,1,0);
      pauVar13 = (undefined (*) [12])(param_1 + 0x60);
      iVar10 = FUN_08878084(*(undefined4 *)(param_1 + 0xcc),param_1,pauVar13,
                            (undefined (*) [12])(param_1 + 0x70),param_2,3,0,0x31bf337e);
      if (iVar10 != 0) {
        FUN_08878cc4(param_1,0xbb,&DAT_08aba930);
        return;
      }
      uVar14 = *(undefined4 *)(param_1 + 0x6c);
      auVar1 = vadd_t(*pauVar13,*(undefined (*) [12])(param_1 + 0x70));
      *(int *)*pauVar13 = auVar1._0_4_;
      *(int *)(param_1 + 100) = auVar1._4_4_;
      *(int *)(param_1 + 0x68) = auVar1._8_4_;
      *(undefined4 *)(param_1 + 0x6c) = uVar14;
    }
  }
  return;
}

