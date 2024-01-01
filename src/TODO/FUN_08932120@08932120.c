#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08932120(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  short sVar10;
  float fVar11;
  uint uVar12;
  undefined4 in_V74;
  uint *local_60 [4];
  float local_50;
  float local_4c;
  float local_3c;
  float local_38;
  float local_28;
  float local_24;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar5 = FUN_089f2178(0x42480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar5);
    uVar5 = FUN_089f2178(0x43480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar5);
    uVar5 = FUN_089f2178(0x43960000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),4);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar5);
  }
  if (*(int *)(param_1 + 0x1a84) != 0) {
    uVar5 = FUN_089f2178(0x42700000);
    local_60[0] = (uint *)FUN_089f1308(uVar5);
    local_60[0] = (uint *)FUN_089f1490(local_60[0],*(undefined4 *)(param_1 + 0x1a7c),1);
    local_4c = 0.0;
    fVar11 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0001) {
      local_50 = 10000.0;
      uVar12 = 0xcf000000;
      local_4c = local_50;
    }
    else {
      fVar11 = (1.0 - fVar11) * 800.0 + 1.0;
      local_50 = fVar11 + 20000.0;
      if (0.0 < fVar11) {
        local_4c = 1.0 / fVar11;
      }
      else if (fVar11 < 0.0) {
        local_4c = 1.0 / fVar11;
      }
      auVar1._12_4_ = DAT_08b0019c;
      auVar1._8_4_ = DAT_08b00198;
      auVar1._4_4_ = DAT_08b00194;
      auVar1._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar1);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar12 = vi2uc_q(auVar1);
      uVar12 = uVar12 & 0xffffff | 0xcf000000;
    }
    *local_60[0] = uVar12;
    local_60[0][1] = (uint)local_50 >> 8 | 0xcd000000;
    local_60[0][2] = (uint)local_4c >> 8 | 0xce000000;
    local_60[0] = local_60[0] + 3;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1a84) + 0x14);
    (**(code **)(iVar6 + 0x44))(*(int *)(param_1 + 0x1a84) + (int)*(short *)(iVar6 + 0x40),local_60)
    ;
    puVar9 = local_60[0] + 2;
    puVar7 = local_60[0] + 0x62;
    *local_60[0] = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    local_60[0][1] = (uint)puVar7 & 0xffffff | 0x8000000;
    iVar6 = 0;
    puVar8 = puVar9;
    do {
      uVar4 = (ushort)iVar6 & 1;
      if (iVar6 < 0) {
        uVar4 = -uVar4;
      }
      *(ushort *)(puVar8 + 1) = ((short)(iVar6 / 2) + uVar4) * 0x20;
      uVar4 = (ushort)iVar6 & 1;
      if (iVar6 < 0) {
        sVar10 = uVar4 * -0x110;
      }
      else {
        sVar10 = uVar4 * 0x110;
      }
      *(short *)((int)puVar8 + 6) = sVar10;
      *(undefined2 *)(puVar8 + 2) = 0;
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar6 < 0x20);
    *puVar7 = 0xd3000401;
    local_60[0][99] = 0x1280011c;
    puVar8 = local_60[0] + 100;
    if (puVar9 != (uint *)0x0) {
      *puVar8 = ((uint)puVar9 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      local_60[0][0x65] = (uint)puVar9 & 0xffffff | 0x1000000;
      puVar8 = local_60[0] + 0x66;
    }
    *puVar8 = 0x4060020;
    puVar8[1] = 0xd3000000;
    local_60[0] = puVar8 + 2;
    FUN_089f13c8(uVar5);
  }
  if (*(int *)(param_1 + 0x1a80) != 0) {
    uVar5 = FUN_089f2178(0x42a00000);
    local_60[0] = (uint *)FUN_089f1308(uVar5);
    local_60[0] = (uint *)FUN_089f1490(local_60[0],*(undefined4 *)(param_1 + 0x1a7c),1);
    local_38 = 0.0;
    fVar11 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0001) {
      local_3c = 10000.0;
      uVar12 = 0xcf000000;
      local_38 = local_3c;
    }
    else {
      fVar11 = (1.0 - fVar11) * 800.0 + 1.0;
      local_3c = fVar11 + 20000.0;
      if (0.0 < fVar11) {
        local_38 = 1.0 / fVar11;
      }
      else if (fVar11 < 0.0) {
        local_38 = 1.0 / fVar11;
      }
      auVar2._12_4_ = DAT_08b0019c;
      auVar2._8_4_ = DAT_08b00198;
      auVar2._4_4_ = DAT_08b00194;
      auVar2._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar2);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar12 = vi2uc_q(auVar1);
      uVar12 = uVar12 & 0xffffff | 0xcf000000;
    }
    *local_60[0] = uVar12;
    local_60[0][1] = (uint)local_3c >> 8 | 0xcd000000;
    local_60[0][2] = (uint)local_38 >> 8 | 0xce000000;
    local_60[0] = local_60[0] + 3;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1a80) + 0x14);
    (**(code **)(iVar6 + 0x44))(*(int *)(param_1 + 0x1a80) + (int)*(short *)(iVar6 + 0x40),local_60)
    ;
    puVar9 = local_60[0] + 2;
    puVar7 = local_60[0] + 0x62;
    *local_60[0] = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    local_60[0][1] = (uint)puVar7 & 0xffffff | 0x8000000;
    iVar6 = 0;
    puVar8 = puVar9;
    do {
      uVar4 = (ushort)iVar6 & 1;
      if (iVar6 < 0) {
        uVar4 = -uVar4;
      }
      *(ushort *)(puVar8 + 1) = ((short)(iVar6 / 2) + uVar4) * 0x20;
      uVar4 = (ushort)iVar6 & 1;
      if (iVar6 < 0) {
        sVar10 = uVar4 * -0x110;
      }
      else {
        sVar10 = uVar4 * 0x110;
      }
      *(short *)((int)puVar8 + 6) = sVar10;
      *(undefined2 *)(puVar8 + 2) = 0;
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar6 < 0x20);
    *puVar7 = 0xd3000401;
    local_60[0][99] = 0x1280011c;
    puVar8 = local_60[0] + 100;
    if (puVar9 != (uint *)0x0) {
      *puVar8 = ((uint)puVar9 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      local_60[0][0x65] = (uint)puVar9 & 0xffffff | 0x1000000;
      puVar8 = local_60[0] + 0x66;
    }
    *puVar8 = 0x4060020;
    puVar8[1] = 0xd3000000;
    local_60[0] = puVar8 + 2;
    FUN_089f13c8(uVar5);
  }
  if (*(int *)(param_1 + 0x1af0) != 0) {
    uVar5 = FUN_089f2178(0x42b40000);
    local_60[0] = (uint *)FUN_089f1308(uVar5);
    local_60[0] = (uint *)FUN_089f1490(local_60[0],*(int *)(param_1 + 0x1a7c) + 0x2a0,1);
    local_24 = 0.0;
    fVar11 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0001) {
      local_24 = 10000.0;
      uVar12 = 0xcf000000;
      local_28 = local_24;
    }
    else {
      fVar11 = (1.0 - fVar11) * 800.0 + 1.0;
      if (0.0 < fVar11) {
        local_24 = 1.0 / fVar11;
      }
      else if (fVar11 < 0.0) {
        local_24 = 1.0 / fVar11;
      }
      auVar3._12_4_ = DAT_08b0019c;
      auVar3._8_4_ = DAT_08b00198;
      auVar3._4_4_ = DAT_08b00194;
      auVar3._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar3);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar12 = vi2uc_q(auVar1);
      uVar12 = uVar12 & 0xffffff | 0xcf000000;
      local_28 = fVar11 + 20000.0;
    }
    *local_60[0] = uVar12;
    local_60[0][1] = (uint)local_28 >> 8 | 0xcd000000;
    local_60[0][2] = (uint)local_24 >> 8 | 0xce000000;
    local_60[0] = local_60[0] + 3;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1af0) + 0x14);
    (**(code **)(iVar6 + 0x44))(*(int *)(param_1 + 0x1af0) + (int)*(short *)(iVar6 + 0x40),local_60)
    ;
    FUN_089f13c8(uVar5,local_60[0]);
  }
  FUN_08931f78(param_1);
  FUN_0893204c(param_1);
  return;
}

