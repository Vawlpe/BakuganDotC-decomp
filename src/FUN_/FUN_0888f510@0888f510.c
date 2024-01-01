#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888f510(int param_1,float *param_2,float *param_3)

{
  undefined auVar1 [12];
  undefined auVar2 [16];
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 in_V7C;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0 [12];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float *local_3c;
  
  puVar6 = &local_c0;
  puVar7 = &local_c0;
  iVar5 = *(int *)(param_1 + 0x1a0);
  local_c0 = *(undefined4 *)(iVar5 + 0x20);
  uStack_bc = *(undefined4 *)(iVar5 + 0x24);
  uStack_b8 = *(undefined4 *)(iVar5 + 0x28);
  uStack_b4 = *(undefined4 *)(iVar5 + 0x2c);
  fVar11 = 0.0;
  iVar9 = 0;
  iVar5 = 0;
  local_3c = param_2;
  do {
    fVar10 = (float)iVar5;
    iVar5 = iVar5 + 1;
    *(float *)((int)puVar6 + 0x24) = fVar10 * 0.125 * 6.283185;
    puVar6 = (undefined4 *)((int)puVar6 + 4);
  } while (iVar5 < 8);
  iVar5 = 0;
  do {
    uVar3 = FUN_089bed14(8);
    uVar3 = uVar3 & 0xff;
    uVar4 = FUN_089bed14(8);
    uVar4 = uVar4 & 0xff;
    if (uVar3 != uVar4) {
      fVar10 = local_a0[uVar3 + 1];
      local_a0[uVar3 + 1] = local_a0[uVar4 + 1];
      local_a0[uVar4 + 1] = fVar10;
    }
    iVar5 = iVar5 + 1;
    iVar8 = 0;
  } while (iVar5 < 8);
  do {
    local_a0[0] = *param_3 + *(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 8);
    uVar12 = vmul_s(*(undefined4 *)((int)puVar7 + 0x24),in_V7C);
    auVar2 = vrot_q(uVar12,1,0,2,0);
    uStack_a4 = auVar2._12_4_;
    auVar1 = vscl_t(auVar2._0_12_,*param_3);
    local_b0 = auVar1._0_4_;
    uStack_ac = auVar1._4_4_;
    uStack_a8 = auVar1._8_4_;
    local_70 = local_c0;
    uStack_6c = uStack_bc;
    uStack_68 = uStack_b8;
    uStack_64 = uStack_b4;
    local_60 = local_b0;
    uStack_5c = uStack_ac;
    uStack_58 = uStack_a8;
    uStack_54 = uStack_a4;
    iVar5 = FUN_0888ec9c(param_1,&local_70,&local_60,local_a0);
    if (iVar5 == 0) {
      local_a0[0] = *param_3 + *(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 8);
    }
    if ((fVar11 <= local_a0[0]) &&
       (iVar9 = iVar9 + 1, fVar11 = local_a0[0],
       *param_3 + *(float *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x4bc) + 8) <= local_a0[0]))
    break;
    iVar8 = iVar8 + 1;
    puVar7 = (undefined4 *)((int)puVar7 + 4);
    local_a0[0] = fVar11;
  } while (iVar8 < 8);
  if (0 < iVar9) {
    *local_3c = local_a0[iVar9];
    *param_3 = local_a0[0];
  }
  return;
}

