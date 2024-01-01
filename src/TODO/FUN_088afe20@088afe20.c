#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088afe20(int param_1,int param_2,undefined4 param_3,undefined (*param_4) [12],int param_5)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  undefined auVar3 [12];
  undefined auVar4 [12];
  undefined auVar5 [12];
  undefined auVar6 [16];
  int iVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined4 local_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  local_c0 = (float)param_5;
  local_b4 = 0;
  local_bc = local_c0;
  local_b8 = local_c0;
  FUN_088ab38c(param_1,(&PTR_DAT_08abd600)[param_2],&local_c0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af29a4;
  *(int *)(param_1 + 0x324) = param_2;
  *(undefined4 *)(param_1 + 0x328) = param_3;
  iVar7 = FUN_088a9614(param_1);
  local_b0 = *(uint *)(iVar7 + 0x10);
  local_ac = *(undefined4 *)(iVar7 + 0x14);
  uStack_a8 = *(undefined4 *)(iVar7 + 0x18);
  uStack_a4 = *(undefined4 *)(iVar7 + 0x1c);
  pfVar8 = (float *)FUN_088a9614(param_1);
  local_a0 = *pfVar8;
  fStack_98 = pfVar8[2];
  fStack_94 = pfVar8[3];
  local_ac = 0;
  local_9c = 0;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = local_a0;
  auVar6._8_4_ = fStack_98;
  auVar6._12_4_ = fStack_94;
  auVar2._4_4_ = 0;
  auVar2._0_4_ = local_b0;
  auVar2._8_4_ = uStack_a8;
  auVar2._12_4_ = uStack_a4;
  auVar2 = vsub_q(auVar6,auVar2);
  uVar13 = vdot_t(auVar2._0_12_,auVar2._0_12_);
  uVar13 = vsqrt_s(uVar13);
  *(undefined4 *)(param_1 + 500) = uVar13;
  puVar9 = (undefined4 *)(param_1 + 0x1e0);
  *puVar9 = in_V72;
  *(undefined4 *)(param_1 + 0x1e4) = in_V76;
  *(undefined4 *)(param_1 + 0x1e8) = in_V7A;
  *(undefined4 *)(param_1 + 0x1ec) = in_V7E;
  if (local_a0 < 0.0) {
    auVar1._4_4_ = 0;
    auVar1._0_4_ = local_b0;
    auVar1._8_4_ = uStack_a8;
    auVar4._4_4_ = 0;
    auVar4._0_4_ = local_a0;
    auVar4._8_4_ = fStack_98;
    auVar1 = vsub_t(auVar1,auVar4);
    local_80 = auVar1._0_4_;
    uStack_7c = auVar1._4_4_;
    uStack_78 = auVar1._8_4_;
    uStack_74 = uStack_a4;
    *puVar9 = local_80;
    *(undefined4 *)(param_1 + 0x1e4) = uStack_7c;
    *(undefined4 *)(param_1 + 0x1e8) = uStack_78;
    *(undefined4 *)(param_1 + 0x1ec) = uStack_a4;
  }
  else {
    auVar3._4_4_ = 0;
    auVar3._0_4_ = local_b0;
    auVar3._8_4_ = uStack_a8;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = local_a0;
    auVar5._8_4_ = fStack_98;
    auVar1 = vadd_t(auVar3,auVar5);
    local_70 = auVar1._0_4_;
    uStack_6c = auVar1._4_4_;
    uStack_68 = auVar1._8_4_;
    uStack_64 = uStack_a4;
    *puVar9 = local_70;
    *(undefined4 *)(param_1 + 0x1e4) = uStack_6c;
    *(undefined4 *)(param_1 + 0x1e8) = uStack_68;
    *(undefined4 *)(param_1 + 0x1ec) = uStack_a4;
  }
  uVar13 = vdot_t(*param_4,*param_4);
  fVar12 = (float)vsqrt_s(uVar13);
  fVar12 = (fVar12 / *(float *)(param_1 + 500)) * 0.8;
  fVar10 = (*(float *)*param_4 / *(float *)(param_1 + 0x1e0)) * 0.9;
  fVar11 = (*(float *)(*param_4 + 8) / *(float *)(param_1 + 0x1e8)) * 0.9;
  if (fVar10 < 0.4) {
    local_90 = 0.4;
  }
  else {
    local_90 = 1.2;
    if (fVar10 <= 1.2) {
      local_90 = fVar10;
    }
  }
  if (fVar12 < 0.4) {
    local_8c = 0.4;
  }
  else {
    local_8c = 1.1;
    if (fVar12 <= 1.1) {
      local_8c = fVar12;
    }
  }
  if (fVar11 < 0.4) {
    local_88 = 0.4;
  }
  else {
    local_88 = 1.2;
    if (fVar11 <= 1.2) {
      local_88 = fVar11;
    }
  }
  iVar7 = *(int *)(param_1 + 0x328);
  if (iVar7 < 7) {
    if (5 < iVar7) {
      local_58 = 0x3f800000;
      local_5c = 0x3f800000;
      local_60 = 0x3f800000;
      local_54 = 0;
      local_90 = 1.0;
      local_8c = 1.0;
      local_88 = 1.0;
    }
  }
  else if (iVar7 == 0x7f) {
    local_90 = 0.5;
  }
  local_84 = 0;
  *(float *)(param_1 + 0x40) = local_90;
  *(float *)(param_1 + 0x44) = local_8c;
  *(float *)(param_1 + 0x48) = local_88;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  iVar7 = *(int *)(param_1 + 0x130);
  *(undefined4 *)(iVar7 + 0x80) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(iVar7 + 0x94) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar7 + 0xa8) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x330) = 0x3f800000;
  *(undefined *)(param_1 + 0x334) = 0;
  *(undefined *)(param_1 + 0x335) = 0;
  *(undefined4 *)(param_1 + 0x338) = 0x3f800000;
  if (*(int *)(param_1 + 0x324) == 0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xbc) = 1;
    *(undefined4 *)(param_1 + 0x60) = 0x3e99999a;
    *(undefined4 *)(param_1 + 100) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x68) = 0x3e99999a;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 800) = 0;
  FUN_0889d514(param_1);
  return param_1;
}

