#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088aa3dc(int param_1)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  uint uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auVar7 [12];
  undefined auVar8 [12];
  undefined auVar9 [12];
  undefined auVar10 [16];
  int iVar11;
  undefined4 uVar12;
  undefined (*pauVar13) [16];
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  iVar11 = FUN_089ded10(param_1,1);
  *(int *)(param_1 + 0x168) = iVar11;
  puVar14 = (undefined4 *)(param_1 + 0x1e0);
  if (iVar11 == 0) {
    uVar12 = FUN_089ded10(param_1,0);
    *(undefined4 *)(param_1 + 0x168) = uVar12;
  }
  *(undefined4 *)(param_1 + 0x1c0) = in_V72;
  *(undefined4 *)(param_1 + 0x1c4) = in_V76;
  *(undefined4 *)(param_1 + 0x1c8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1cc) = in_V7E;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined *)(param_1 + 0x288) = 0;
  *(undefined *)(param_1 + 0x283) = 0;
  *(undefined *)(param_1 + 0x284) = 0;
  iVar11 = FUN_088a9614(param_1);
  pauVar13 = (undefined (*) [16])(iVar11 + 0x10);
  uVar3 = *(uint *)*pauVar13;
  uVar12 = *(undefined4 *)(iVar11 + 0x18);
  auVar1 = *(undefined (*) [12])*pauVar13;
  uVar6 = *(undefined4 *)(iVar11 + 0x1c);
  auVar10 = *pauVar13;
  pauVar13 = (undefined (*) [16])FUN_088a9614(param_1);
  fVar4 = *(float *)*pauVar13;
  uVar5 = *(undefined4 *)(*pauVar13 + 8);
  uVar16 = *(undefined4 *)(*pauVar13 + 0xc);
  auVar2 = *pauVar13;
  auVar1 = vsub_t(auVar1,*(undefined (*) [12])*pauVar13);
  *(float *)(param_1 + 0x20c) = auVar1._4_4_ * 0.5;
  auVar2 = vsub_q(auVar2,auVar10);
  uVar15 = vdot_t(auVar2._0_12_,auVar2._0_12_);
  uVar15 = vsqrt_s(uVar15);
  *(undefined4 *)(param_1 + 0x1f0) = uVar15;
  auVar10._4_4_ = 0;
  auVar10._0_4_ = fVar4;
  auVar10._8_4_ = uVar5;
  auVar10._12_4_ = uVar16;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = uVar3;
  auVar2._8_4_ = uVar12;
  auVar2._12_4_ = uVar6;
  auVar2 = vsub_q(auVar10,auVar2);
  uVar16 = vdot_t(auVar2._0_12_,auVar2._0_12_);
  uVar16 = vsqrt_s(uVar16);
  *(undefined4 *)(param_1 + 500) = uVar16;
  *puVar14 = in_V72;
  *(undefined4 *)(param_1 + 0x1e4) = in_V76;
  *(undefined4 *)(param_1 + 0x1e8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1ec) = in_V7E;
  if (fVar4 < 0.0) {
    auVar1._4_4_ = 0;
    auVar1._0_4_ = uVar3;
    auVar1._8_4_ = uVar12;
    auVar8._4_4_ = 0;
    auVar8._0_4_ = fVar4;
    auVar8._8_4_ = uVar5;
    auVar1 = vsub_t(auVar1,auVar8);
    *puVar14 = auVar1._0_4_;
    *(int *)(param_1 + 0x1e4) = auVar1._4_4_;
    *(int *)(param_1 + 0x1e8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x1ec) = uVar6;
  }
  else {
    auVar7._4_4_ = 0;
    auVar7._0_4_ = uVar3;
    auVar7._8_4_ = uVar12;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = fVar4;
    auVar9._8_4_ = uVar5;
    auVar1 = vadd_t(auVar7,auVar9);
    *puVar14 = auVar1._0_4_;
    *(int *)(param_1 + 0x1e4) = auVar1._4_4_;
    *(int *)(param_1 + 0x1e8) = auVar1._8_4_;
    *(undefined4 *)(param_1 + 0x1ec) = uVar6;
  }
  iVar11 = 0;
  puVar14 = (undefined4 *)(param_1 + 0x2c0);
  do {
    *puVar14 = in_V72;
    puVar14[1] = in_V76;
    puVar14[2] = in_V7A;
    puVar14[3] = in_V7E;
    iVar11 = iVar11 + 1;
    puVar14 = puVar14 + 4;
  } while (iVar11 < 4);
  *(undefined4 *)(param_1 + 0x28c) = 0;
  return;
}

