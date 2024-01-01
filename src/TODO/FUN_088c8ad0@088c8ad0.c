#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c8ad0(undefined (**param_1) [12],undefined4 param_2,undefined4 *param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [12];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined (*pauVar7) [12];
  undefined (*pauVar8) [12];
  undefined (*pauVar9) [12];
  undefined (*pauVar10) [12];
  float fVar11;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
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
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  pauVar9 = *param_1;
  pauVar8 = (undefined (*) [12])(pauVar9[6] + 8);
  if (DAT_08b00eec == 0) {
    DAT_08b00eec = 1;
    DAT_08b00ee8 = 0.8;
  }
  if (DAT_08b00ee4 == 0) {
    DAT_08b00ee4 = 1;
    DAT_08b00ee0 = 10.0;
  }
  uStack_104 = *(undefined4 *)(pauVar9[3] + 8);
  auVar1 = vsub_t(*(undefined (*) [12])(pauVar9[2] + 8),*pauVar8);
  local_110 = auVar1._0_4_;
  uStack_10c = auVar1._4_4_;
  uStack_108 = auVar1._8_4_;
  fVar11 = DAT_08b00ee0 / (DAT_08b00ee8 * 2.0);
  auVar1 = vscl_t(auVar1,fVar11 * fVar11);
  auVar2 = vscl_t(*pauVar9,DAT_08b00ee0);
  local_f0 = auVar2._0_4_;
  uStack_ec = auVar2._4_4_;
  uStack_e8 = auVar2._8_4_;
  auVar1 = vsub_t(auVar1,auVar2);
  auVar1 = vscl_t(auVar1,0x3d088889);
  local_100 = auVar1._0_4_;
  uStack_fc = auVar1._4_4_;
  uStack_f8 = auVar1._8_4_;
  uVar4 = *(undefined4 *)pauVar9[1];
  auVar1 = vadd_t(*pauVar9,auVar1);
  *(int *)*pauVar9 = auVar1._0_4_;
  *(int *)(*pauVar9 + 4) = auVar1._4_4_;
  *(int *)(*pauVar9 + 8) = auVar1._8_4_;
  *(undefined4 *)pauVar9[1] = uVar4;
  auVar1 = vscl_t(*pauVar9,0x3d088889);
  local_e0 = auVar1._0_4_;
  uStack_dc = auVar1._4_4_;
  uStack_d8 = auVar1._8_4_;
  uVar4 = *(undefined4 *)(pauVar9[7] + 8);
  auVar1 = vadd_t(*pauVar8,auVar1);
  *(int *)*pauVar8 = auVar1._0_4_;
  *(int *)pauVar9[7] = auVar1._4_4_;
  *(int *)(pauVar9[7] + 4) = auVar1._8_4_;
  *(undefined4 *)(pauVar9[7] + 8) = uVar4;
  if (DAT_08b00eec == 0) {
    DAT_08b00eec = 1;
    DAT_08b00ee8 = 0.8;
  }
  if (DAT_08b00ee4 == 0) {
    DAT_08b00ee4 = 1;
    DAT_08b00ee0 = 10.0;
  }
  uStack_c4 = *(undefined4 *)pauVar9[5];
  pauVar10 = (undefined (*) [12])(pauVar9[5] + 4);
  auVar1 = vsub_t(pauVar9[4],*pauVar10);
  local_d0 = auVar1._0_4_;
  uStack_cc = auVar1._4_4_;
  uStack_c8 = auVar1._8_4_;
  fVar11 = DAT_08b00ee0 / (DAT_08b00ee8 * 2.0);
  auVar1 = vscl_t(auVar1,fVar11 * fVar11);
  pauVar7 = (undefined (*) [12])(pauVar9[1] + 4);
  auVar2 = vscl_t(*pauVar7,DAT_08b00ee0);
  local_b0 = auVar2._0_4_;
  uStack_ac = auVar2._4_4_;
  uStack_a8 = auVar2._8_4_;
  auVar1 = vsub_t(auVar1,auVar2);
  auVar1 = vscl_t(auVar1,0x3d088889);
  local_c0 = auVar1._0_4_;
  uStack_bc = auVar1._4_4_;
  uStack_b8 = auVar1._8_4_;
  uVar4 = *(undefined4 *)(pauVar9[2] + 4);
  auVar1 = vadd_t(*pauVar7,auVar1);
  *(int *)*pauVar7 = auVar1._0_4_;
  *(int *)(pauVar9[1] + 8) = auVar1._4_4_;
  *(int *)pauVar9[2] = auVar1._8_4_;
  *(undefined4 *)(pauVar9[2] + 4) = uVar4;
  auVar1 = vscl_t(*pauVar7,0x3d088889);
  local_a0 = auVar1._0_4_;
  uStack_9c = auVar1._4_4_;
  uStack_98 = auVar1._8_4_;
  uVar4 = *(undefined4 *)(pauVar9[6] + 4);
  auVar1 = vadd_t(*pauVar10,auVar1);
  *(int *)*pauVar10 = auVar1._0_4_;
  *(int *)(pauVar9[5] + 8) = auVar1._4_4_;
  *(int *)pauVar9[6] = auVar1._8_4_;
  *(undefined4 *)(pauVar9[6] + 4) = uVar4;
  iVar6 = FUN_088e1948();
  local_120 = *(undefined4 *)(iVar6 + 0x20);
  uStack_11c = *(undefined4 *)(iVar6 + 0x24);
  uStack_118 = *(undefined4 *)(iVar6 + 0x28);
  uStack_114 = *(undefined4 *)(iVar6 + 0x2c);
  FUN_088c6d3c(pauVar9[9] + 4,param_2,param_3,pauVar10,&local_120);
  uVar4 = *(undefined4 *)pauVar9[7];
  uVar3 = *(undefined4 *)(pauVar9[7] + 4);
  uVar5 = *(undefined4 *)(pauVar9[7] + 8);
  *param_3 = *(undefined4 *)*pauVar8;
  param_3[1] = uVar4;
  param_3[2] = uVar3;
  param_3[3] = uVar5;
  return;
}

