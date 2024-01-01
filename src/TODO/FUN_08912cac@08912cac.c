#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08912cac(int param_1)

{
  undefined auVar1 [16];
  ushort uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  uint uVar11;
  undefined4 in_V74;
  uint *local_30 [4];
  float local_20;
  float local_1c;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_089f8a64(param_1 + 0x54);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar3 = FUN_089f2178(0x42480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar3);
    uVar3 = FUN_089f2178(0x428c0000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar3);
  }
  if (*(int *)(param_1 + 0x13dc) != 0) {
    uVar3 = FUN_089f2178(0x42700000);
    local_30[0] = (uint *)FUN_089f1308(uVar3);
    local_30[0] = (uint *)FUN_089f1490(local_30[0],*(undefined4 *)(param_1 + 0x13e0),1);
    local_1c = 0.0;
    fVar10 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar10 = 1.0;
    }
    if (fVar10 <= 0.0001) {
      local_20 = 10000.0;
      uVar11 = 0xcf000000;
      local_1c = local_20;
    }
    else {
      fVar10 = (1.0 - fVar10) * 800.0 + 1.0;
      local_20 = fVar10 + 20000.0;
      if (0.0 < fVar10) {
        local_1c = 1.0 / fVar10;
      }
      else if (fVar10 < 0.0) {
        local_1c = 1.0 / fVar10;
      }
      auVar1._12_4_ = DAT_08b0019c;
      auVar1._8_4_ = DAT_08b00198;
      auVar1._4_4_ = DAT_08b00194;
      auVar1._0_4_ = DAT_08b00190;
      auVar1 = vsat0_q(auVar1);
      auVar1 = vscl_q(auVar1,in_V74);
      auVar1 = vf2iz_q(auVar1,0x17);
      uVar11 = vi2uc_q(auVar1);
      uVar11 = uVar11 & 0xffffff | 0xcf000000;
    }
    *local_30[0] = uVar11;
    local_30[0][1] = (uint)local_20 >> 8 | 0xcd000000;
    local_30[0][2] = (uint)local_1c >> 8 | 0xce000000;
    uVar11 = *(uint *)(param_1 + 0x1668);
    iVar9 = *(int *)(param_1 + 0x1670);
    uVar8 = (*(int *)(param_1 + 0x1674) + *(int *)(param_1 + 0x166c) + -1) * 0x400;
    local_30[0][3] = *(int *)(param_1 + 0x166c) << 10 | 0xd4000000U | uVar11;
    uVar11 = (iVar9 + uVar11) - 1;
    local_30[0][4] = uVar8 | 0xd5000000 | uVar11;
    local_30[0][5] = 0x15000000;
    local_30[0][6] = uVar8 | 0x16000000 | uVar11;
    local_30[0] = local_30[0] + 7;
    iVar9 = *(int *)(*(int *)(param_1 + 0x13dc) + 0x14);
    (**(code **)(iVar9 + 0x44))(*(int *)(param_1 + 0x13dc) + (int)*(short *)(iVar9 + 0x40),local_30)
    ;
    *local_30[0] = 0xd4000000;
    local_30[0][1] = 0xd5043ddf;
    local_30[0][2] = 0x15000000;
    puVar6 = local_30[0] + 6;
    puVar4 = local_30[0] + 0x66;
    local_30[0][3] = 0x16043ddf;
    local_30[0][4] = ((uint)puVar4 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    local_30[0][5] = (uint)puVar4 & 0xffffff | 0x8000000;
    iVar9 = 0;
    puVar5 = puVar6;
    do {
      uVar2 = (ushort)iVar9 & 1;
      if (iVar9 < 0) {
        uVar2 = -uVar2;
      }
      *(ushort *)(puVar5 + 1) = ((short)(iVar9 / 2) + uVar2) * 0x20;
      uVar2 = (ushort)iVar9 & 1;
      if (iVar9 < 0) {
        sVar7 = uVar2 * -0x110;
      }
      else {
        sVar7 = uVar2 * 0x110;
      }
      *(short *)((int)puVar5 + 6) = sVar7;
      *(undefined2 *)(puVar5 + 2) = 0;
      iVar9 = iVar9 + 1;
      puVar5 = puVar5 + 3;
    } while (iVar9 < 0x20);
    *puVar4 = 0xd3000401;
    local_30[0][0x67] = 0x1280011c;
    puVar5 = local_30[0] + 0x68;
    if (puVar6 != (uint *)0x0) {
      *puVar5 = ((uint)puVar6 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      local_30[0][0x69] = (uint)puVar6 & 0xffffff | 0x1000000;
      puVar5 = local_30[0] + 0x6a;
    }
    *puVar5 = 0x4060020;
    puVar5[1] = 0xd3000000;
    local_30[0] = puVar5 + 2;
    FUN_089f13c8(uVar3);
  }
  FUN_08912c04(param_1);
  return;
}

