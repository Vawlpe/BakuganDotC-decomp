#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088290f0(undefined4 param_1,float param_2,float param_3,undefined4 param_4,
                 undefined (*param_5) [12],undefined (*param_6) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [12];
  undefined auVar11 [16];
  int iVar12;
  bool bVar13;
  undefined (*pauVar14) [12];
  undefined (*pauVar15) [12];
  int iVar16;
  uint uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 in_V73;
  undefined4 in_V77;
  undefined4 in_V7B;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar20;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  
  if (param_6 == (undefined (*) [12])0x0) {
    param_6 = (undefined (*) [12])&DAT_08b001a0;
    local_130 = in_V73;
    uStack_12c = in_V77;
    uStack_128 = in_V7B;
    uStack_124 = in_V7F;
  }
  else {
    bVar13 = false;
    if ((*(float *)*param_6 * *(float *)*param_6 +
         *(float *)((int)*param_6 + 8) * *(float *)((int)*param_6 + 8) < 1e-05) &&
       (bVar13 = false, 0.0001 < *(float *)((int)*param_6 + 4) * *(float *)((int)*param_6 + 4))) {
      bVar13 = true;
    }
    if (bVar13) {
      uVar18 = vcst_s(6);
      uVar18 = vmul_s(param_1,uVar18);
      auVar3 = vrot_q(uVar18,0,2,0,1);
      auVar2._12_4_ = DAT_08b0084c;
      auVar2._8_4_ = DAT_08b00848;
      auVar2._4_4_ = DAT_08b00844;
      auVar2._0_4_ = DAT_08b00840;
      auVar3 = vqmul_q(auVar2,auVar3);
      local_130 = auVar3._0_4_;
      uStack_12c = auVar3._4_4_;
      uStack_128 = auVar3._8_4_;
      uStack_124 = auVar3._12_4_;
    }
    else {
      uVar17 = *(uint *)((int)*param_6 + 8);
      fVar19 = -*(float *)*param_6;
      auVar10._4_4_ = 0;
      auVar10._0_4_ = uVar17;
      auVar10._8_4_ = fVar19;
      auVar9._4_4_ = 0;
      auVar9._0_4_ = uVar17;
      auVar9._8_4_ = fVar19;
      auVar1._4_4_ = 0;
      auVar1._0_4_ = uVar17;
      auVar1._8_4_ = fVar19;
      uVar18 = vdot_t(auVar1,auVar9);
      uVar20 = vcmp_s(8,uVar18,uVar17);
      vrsq_s(uVar18);
      uVar18 = vcmovt_s(in_V7D,(byte)uVar20 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar10,uVar18);
      uVar18 = FUN_08a05468(*(undefined4 *)((int)*param_6 + 4));
      uVar20 = vcst_s(6);
      uVar18 = vmul_s(uVar20,uVar18);
      uVar20 = vcos_s(uVar18);
      uVar18 = vsin_s(uVar18);
      auVar1 = vscl_t(auVar1,uVar18);
      uVar18 = vcst_s(6);
      uVar18 = vmul_s(param_1,uVar18);
      auVar3 = vrot_q(uVar18,0,2,0,1);
      auVar11._12_4_ = uVar20;
      auVar11._0_12_ = auVar1;
      auVar3 = vqmul_q(auVar11,auVar3);
      local_130 = auVar3._0_4_;
      uStack_12c = auVar3._4_4_;
      uStack_128 = auVar3._8_4_;
      uStack_124 = auVar3._12_4_;
    }
  }
  iVar16 = 0;
  do {
    iVar12 = FUN_08828b60(1,param_4);
    uVar18 = vrndf1_s();
    fVar19 = (float)vsub_s(uVar18,in_V7F);
    uVar18 = vmul_s((float)iVar16 * 6.283185 * 0.0625,in_V7C);
    auVar3 = vrot_q(uVar18,1,0,2,0);
    auVar1 = vscl_t(auVar3._0_12_,fVar19 * 0.1 + 1.0);
    pauVar14 = (undefined (*) [12])(iVar12 + 0x90);
    auVar5._4_4_ = uStack_12c;
    auVar5._0_4_ = local_130;
    auVar5._8_4_ = uStack_128;
    auVar5._12_4_ = uStack_124;
    auVar4._4_4_ = uStack_12c;
    auVar4._0_4_ = local_130;
    auVar4._8_4_ = uStack_128;
    auVar4._12_4_ = uStack_124;
    vpfxs(0x10,0x11,0x12,3);
    auVar2 = vmov_q(auVar4);
    uVar18 = vmov_s(in_V73);
    auVar3._12_4_ = uVar18;
    auVar3._8_4_ = auVar1._8_4_ * param_3;
    auVar3._4_4_ = auVar1._4_4_;
    auVar3._0_4_ = auVar1._0_4_ * param_2;
    auVar3 = vqmul_q(auVar5,auVar3);
    auVar3 = vqmul_q(auVar3,auVar2);
    *(int *)*pauVar14 = auVar3._0_4_;
    *(int *)(iVar12 + 0x94) = auVar3._4_4_;
    *(int *)(iVar12 + 0x98) = auVar3._8_4_;
    *(int *)(iVar12 + 0x9c) = auVar3._12_4_;
    pauVar15 = (undefined (*) [12])(iVar12 + 0x60);
    auVar6._8_4_ = 0x3fc00000;
    auVar6._0_8_ = 0x3fc000003fc00000;
    auVar1 = vmul_t(*param_6,auVar6);
    uVar18 = *(undefined4 *)(iVar12 + 0x6c);
    auVar1 = vadd_t(*pauVar15,auVar1);
    *(int *)*pauVar15 = auVar1._0_4_;
    *(int *)(iVar12 + 100) = auVar1._4_4_;
    *(int *)(iVar12 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(iVar12 + 0x6c) = uVar18;
    uVar18 = *(undefined4 *)(iVar12 + 0x6c);
    auVar1 = vadd_t(*pauVar15,*pauVar14);
    *(int *)*pauVar15 = auVar1._0_4_;
    *(int *)(iVar12 + 100) = auVar1._4_4_;
    *(int *)(iVar12 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(iVar12 + 0x6c) = uVar18;
    if (param_5 != (undefined (*) [12])0x0) {
      auVar8._8_4_ = 0x3f000000;
      auVar8._0_8_ = 0x3f0000003f000000;
      auVar1 = vmul_t(*param_5,auVar8);
      uVar18 = *(undefined4 *)(iVar12 + 0x9c);
      auVar1 = vadd_t(*pauVar14,auVar1);
      *(int *)*pauVar14 = auVar1._0_4_;
      *(int *)(iVar12 + 0x94) = auVar1._4_4_;
      *(int *)(iVar12 + 0x98) = auVar1._8_4_;
      *(undefined4 *)(iVar12 + 0x9c) = uVar18;
    }
    auVar7._8_4_ = 0x3c03126f;
    auVar7._0_8_ = 0x3c03126f3c03126f;
    auVar1 = vmul_t(*param_6,auVar7);
    *(int *)(iVar12 + 0x20) = auVar1._0_4_;
    *(int *)(iVar12 + 0x24) = auVar1._4_4_;
    *(int *)(iVar12 + 0x28) = auVar1._8_4_;
    *(undefined4 *)(iVar12 + 0x2c) = in_V7D;
    uVar18 = vrndf1_s();
    fVar19 = (float)vsub_s(uVar18,in_V7F);
    fVar19 = fVar19 * 2.5 + 2.2;
    *(float *)(iVar12 + 0x70) = fVar19;
    *(float *)(iVar12 + 0x74) = fVar19;
    *(float *)(iVar12 + 0x78) = fVar19;
    *(undefined4 *)(iVar12 + 0x7c) = 0;
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0x10);
  return;
}

