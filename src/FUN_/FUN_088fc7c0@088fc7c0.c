#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fc7c0(undefined4 param_1,int param_2)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [12];
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7D;
  undefined4 in_V7E;
  undefined4 uVar13;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  local_f0 = *(undefined4 *)(param_2 + 0x60);
  uStack_ec = *(undefined4 *)(param_2 + 100);
  uStack_e8 = *(undefined4 *)(param_2 + 0x68);
  uStack_e4 = *(undefined4 *)(param_2 + 0x6c);
  local_e0 = *(undefined4 *)(param_2 + 0x20);
  uStack_dc = *(undefined4 *)(param_2 + 0x24);
  uStack_d8 = *(undefined4 *)(param_2 + 0x28);
  uStack_d4 = *(undefined4 *)(param_2 + 0x2c);
  pauVar9 = (undefined (*) [12])(param_2 + 0x30);
  local_d0 = *(undefined4 *)*pauVar9;
  uStack_cc = *(undefined4 *)(param_2 + 0x34);
  uStack_c8 = *(undefined4 *)(param_2 + 0x38);
  uStack_c4 = *(undefined4 *)(param_2 + 0x3c);
  FUN_088fc600(param_2,&local_f0);
  auVar1._4_4_ = uStack_ec;
  auVar1._0_4_ = local_f0;
  auVar1._8_4_ = uStack_e8;
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])(*(int *)(param_2 + 4) + 0x10));
  local_90 = auVar1._0_4_;
  uStack_8c = auVar1._4_4_;
  uStack_88 = auVar1._8_4_;
  uStack_84 = uStack_e4;
  fVar10 = (float)vdot_t(auVar1,auVar1);
  if (fVar10 <= 0.01) {
    local_c0 = DAT_08abfe30;
    uStack_bc = DAT_08abfe34;
    uStack_b8 = DAT_08abfe38;
    iVar7 = *(int *)(param_2 + 4);
  }
  else {
    uVar11 = vdot_t(auVar1,auVar1);
    uVar13 = vcmp_s(8,uVar11,local_90);
    vrsq_s(uVar11);
    uVar11 = vcmovt_s(in_V7D,(byte)uVar13 & 1);
    vpfxd(4,4,4,5);
    auVar1 = vscl_t(auVar1,uVar11);
    local_c0 = auVar1._0_4_;
    uStack_bc = auVar1._4_4_;
    uStack_b8 = auVar1._8_4_;
    iVar7 = *(int *)(param_2 + 4);
  }
  auVar4._4_4_ = uStack_bc;
  auVar4._0_4_ = local_c0;
  auVar4._8_4_ = uStack_b8;
  auVar1 = vscl_t(auVar4,*(undefined4 *)(iVar7 + 0x44));
  local_c0 = auVar1._0_4_;
  uStack_bc = auVar1._4_4_;
  uStack_b8 = auVar1._8_4_;
  auVar2._4_4_ = uStack_ec;
  auVar2._0_4_ = local_f0;
  auVar2._8_4_ = uStack_e8;
  auVar1 = vadd_t(auVar2,auVar1);
  local_f0 = auVar1._0_4_;
  uStack_ec = auVar1._4_4_;
  uStack_e8 = auVar1._8_4_;
  iVar7 = *(int *)(param_2 + 4);
  local_b0 = in_V72;
  uStack_ac = in_V76;
  uStack_a8 = in_V7A;
  uStack_a4 = in_V7E;
  if (*(int *)(iVar7 + 0x34) == 0) {
    iVar7 = 0;
  }
  else {
    iVar8 = **(int **)(iVar7 + 0x34);
    iVar7 = (**(code **)(iVar8 + 0x14))
                      (param_1,(int)*(int **)(iVar7 + 0x34) + (int)*(short *)(iVar8 + 0x10),
                       &local_b0,&local_f0,iVar7 + 0x10);
  }
  if (iVar7 != 0) {
    auVar5._4_4_ = uStack_ac;
    auVar5._0_4_ = local_b0;
    auVar5._8_4_ = uStack_a8;
    auVar3._4_4_ = uStack_ec;
    auVar3._0_4_ = local_f0;
    auVar3._8_4_ = uStack_e8;
    auVar1 = vsub_t(auVar5,auVar3);
    uVar11 = vdot_t(auVar1,auVar1);
    fVar12 = (float)vsqrt_s(uVar11);
    fVar10 = *(float *)(*(int *)(param_2 + 4) + 0x44);
    if ((fVar10 * 2.0 <= fVar12) || (fVar12 <= 1e-05)) {
      *(undefined4 *)(param_2 + 0x60) = local_b0;
      *(undefined4 *)(param_2 + 100) = uStack_ac;
      *(undefined4 *)(param_2 + 0x68) = uStack_a8;
      *(undefined4 *)(param_2 + 0x6c) = uStack_a4;
      uVar6 = DAT_08abfddc;
      uVar13 = DAT_08abfdd8;
      uVar11 = DAT_08abfdd4;
      *(undefined4 *)(param_2 + 0x20) = DAT_08abfdd0;
      *(undefined4 *)(param_2 + 0x24) = uVar11;
      *(undefined4 *)(param_2 + 0x28) = uVar13;
      *(undefined4 *)(param_2 + 0x2c) = uVar6;
      uVar6 = DAT_08abfddc;
      uVar13 = DAT_08abfdd8;
      uVar11 = DAT_08abfdd4;
      *(undefined4 *)*pauVar9 = DAT_08abfdd0;
      *(undefined4 *)(param_2 + 0x34) = uVar11;
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      *(undefined4 *)(param_2 + 0x3c) = uVar6;
    }
    else {
      auVar1 = vscl_t(auVar1,1.0 / fVar12);
      auVar1 = vscl_t(auVar1,(fVar12 * 0.2 + 0.03) * fVar10 * 5.0);
      uVar11 = *(undefined4 *)(param_2 + 0x3c);
      auVar1 = vadd_t(*pauVar9,auVar1);
      *(int *)*pauVar9 = auVar1._0_4_;
      *(int *)(param_2 + 0x34) = auVar1._4_4_;
      *(int *)(param_2 + 0x38) = auVar1._8_4_;
      *(undefined4 *)(param_2 + 0x3c) = uVar11;
    }
  }
  return;
}

