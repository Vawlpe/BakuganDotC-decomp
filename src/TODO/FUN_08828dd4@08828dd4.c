#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08828dd4(undefined4 param_1,undefined (*param_2) [12],undefined (*param_3) [12])

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [12];
  undefined auVar6 [12];
  undefined auVar7 [12];
  undefined auVar8 [12];
  int iVar9;
  bool bVar10;
  undefined (*pauVar11) [12];
  undefined (*pauVar12) [12];
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 in_V73;
  undefined4 in_V77;
  undefined4 in_V7B;
  undefined4 in_V7C;
  undefined4 in_V7D;
  undefined4 in_V7F;
  undefined4 uVar17;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  
  local_c0 = in_V73;
  uStack_bc = in_V77;
  uStack_b8 = in_V7B;
  uStack_b4 = in_V7F;
  if (param_3 == (undefined (*) [12])0x0) {
    param_3 = (undefined (*) [12])&DAT_08b001a0;
  }
  else {
    bVar10 = false;
    if ((*(float *)*param_3 * *(float *)*param_3 +
         *(float *)((int)*param_3 + 8) * *(float *)((int)*param_3 + 8) < 1e-05) &&
       (bVar10 = false, 0.0001 < *(float *)((int)*param_3 + 4) * *(float *)((int)*param_3 + 4))) {
      bVar10 = true;
    }
    if (!bVar10) {
      uVar14 = *(uint *)((int)*param_3 + 8);
      fVar16 = -*(float *)*param_3;
      auVar8._4_4_ = 0;
      auVar8._0_4_ = uVar14;
      auVar8._8_4_ = fVar16;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = uVar14;
      auVar7._8_4_ = fVar16;
      auVar1._4_4_ = 0;
      auVar1._0_4_ = uVar14;
      auVar1._8_4_ = fVar16;
      uVar15 = vdot_t(auVar1,auVar7);
      uVar17 = vcmp_s(8,uVar15,uVar14);
      vrsq_s(uVar15);
      uVar15 = vcmovt_s(in_V7D,(byte)uVar17 & 1);
      vpfxd(4,4,4,5);
      auVar1 = vscl_t(auVar8,uVar15);
      uVar15 = FUN_08a05468(*(undefined4 *)((int)*param_3 + 4));
      uVar17 = vcst_s(6);
      uVar15 = vmul_s(uVar17,uVar15);
      uStack_b4 = vcos_s(uVar15);
      uVar15 = vsin_s(uVar15);
      auVar1 = vscl_t(auVar1,uVar15);
      local_c0 = auVar1._0_4_;
      uStack_bc = auVar1._4_4_;
      uStack_b8 = auVar1._8_4_;
    }
  }
  iVar13 = 0;
  do {
    iVar9 = FUN_08828b60(1,param_1);
    uVar15 = vrndf1_s();
    fVar16 = (float)vsub_s(uVar15,in_V7F);
    uVar15 = vmul_s((float)iVar13 * 6.283185 * 0.33334,in_V7C);
    auVar3 = vrot_q(uVar15,1,0,2,0);
    auVar1 = vscl_t(auVar3._0_12_,fVar16 * 0.1 + 0.1);
    pauVar11 = (undefined (*) [12])(iVar9 + 0x90);
    auVar4._4_4_ = uStack_bc;
    auVar4._0_4_ = local_c0;
    auVar4._8_4_ = uStack_b8;
    auVar4._12_4_ = uStack_b4;
    auVar2._4_4_ = uStack_bc;
    auVar2._0_4_ = local_c0;
    auVar2._8_4_ = uStack_b8;
    auVar2._12_4_ = uStack_b4;
    vpfxs(0x10,0x11,0x12,3);
    auVar2 = vmov_q(auVar2);
    uVar15 = vmov_s(in_V73);
    auVar3._12_4_ = uVar15;
    auVar3._8_4_ = auVar1._8_4_;
    auVar3._4_4_ = auVar1._4_4_;
    auVar3._0_4_ = auVar1._0_4_;
    auVar3 = vqmul_q(auVar4,auVar3);
    auVar3 = vqmul_q(auVar3,auVar2);
    *(int *)*pauVar11 = auVar3._0_4_;
    *(int *)(iVar9 + 0x94) = auVar3._4_4_;
    *(int *)(iVar9 + 0x98) = auVar3._8_4_;
    *(int *)(iVar9 + 0x9c) = auVar3._12_4_;
    pauVar12 = (undefined (*) [12])(iVar9 + 0x60);
    auVar5._8_4_ = 0x3fc00000;
    auVar5._0_8_ = 0x3fc000003fc00000;
    auVar1 = vmul_t(*param_3,auVar5);
    uVar15 = *(undefined4 *)(iVar9 + 0x6c);
    auVar1 = vadd_t(*pauVar12,auVar1);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(iVar9 + 100) = auVar1._4_4_;
    *(int *)(iVar9 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(iVar9 + 0x6c) = uVar15;
    uVar15 = *(undefined4 *)(iVar9 + 0x6c);
    auVar1 = vadd_t(*pauVar12,*pauVar11);
    *(int *)*pauVar12 = auVar1._0_4_;
    *(int *)(iVar9 + 100) = auVar1._4_4_;
    *(int *)(iVar9 + 0x68) = auVar1._8_4_;
    *(undefined4 *)(iVar9 + 0x6c) = uVar15;
    if (param_2 != (undefined (*) [12])0x0) {
      uVar15 = *(undefined4 *)(iVar9 + 0x9c);
      auVar1 = vadd_t(*pauVar11,*param_2);
      *(int *)*pauVar11 = auVar1._0_4_;
      *(int *)(iVar9 + 0x94) = auVar1._4_4_;
      *(int *)(iVar9 + 0x98) = auVar1._8_4_;
      *(undefined4 *)(iVar9 + 0x9c) = uVar15;
    }
    auVar6._8_4_ = 0x3c03126f;
    auVar6._0_8_ = 0x3c03126f3c03126f;
    auVar1 = vmul_t(*param_3,auVar6);
    *(int *)(iVar9 + 0x20) = auVar1._0_4_;
    *(int *)(iVar9 + 0x24) = auVar1._4_4_;
    *(int *)(iVar9 + 0x28) = auVar1._8_4_;
    *(undefined4 *)(iVar9 + 0x2c) = in_V7D;
    uVar15 = vrndf1_s();
    fVar16 = (float)vsub_s(uVar15,in_V7F);
    fVar16 = fVar16 * 1.5 + 2.0;
    *(float *)(iVar9 + 0x70) = fVar16;
    *(float *)(iVar9 + 0x74) = fVar16;
    *(float *)(iVar9 + 0x78) = fVar16;
    *(undefined4 *)(iVar9 + 0x7c) = 0;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 3);
  return;
}

