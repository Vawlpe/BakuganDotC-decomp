#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898b780(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  uint uVar14;
  undefined4 in_V74;
  uint *local_a0 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_64;
  float local_60;
  float local_50;
  float local_4c;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar4 = FUN_089f2178(0x42480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x43480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x43960000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),4);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x43c80000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),8);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
  }
  iVar12 = 0;
  iVar11 = param_1;
  do {
    if (*(char *)(iVar11 + 0xe88) != '\0') {
      local_80 = 0;
      local_7c = 0;
      local_78 = 0x43f00000;
      local_74 = 0x43880000;
      if (iVar12 == 0) {
        uVar4 = FUN_089f2178(0x437a0000);
      }
      else {
        uVar4 = FUN_089f2178(0x43af0000);
      }
      uVar5 = FUN_089f1308(uVar4);
      uVar5 = FUN_089f1418(uVar5);
      uVar5 = FUN_089e3014(DAT_08ac5c8c,uVar5,0xffffffff);
      uVar5 = FUN_089f202c(uVar5,&DAT_08b00190,0,1);
      local_84 = *(undefined4 *)(iVar11 + 0xe8c);
      local_90 = 0;
      local_8c = 0;
      local_88 = 0;
      uVar5 = FUN_089f2c88(uVar4,uVar5,&local_80,&local_90);
      FUN_089f13c8(uVar4,uVar5);
    }
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 0x10;
  } while (iVar12 < 2);
  uVar4 = FUN_089f2178(0x42400000);
  local_a0[0] = (uint *)FUN_089f1308(uVar4);
  iVar12 = 0;
  iVar11 = param_1;
  do {
    if ((*(int *)(iVar11 + 0x1208) != 0) && (*(char *)(param_1 + iVar12 + 0x1220) == '\0')) {
      local_a0[0] = (uint *)FUN_089f1490(local_a0[0],*(undefined4 *)(iVar11 + 0x11f0),1);
      fVar13 = DAT_08b0019c;
      if (1.0 < DAT_08b0019c) {
        fVar13 = 1.0;
      }
      if (fVar13 <= 0.0001) {
        uVar14 = 0xcf000000;
        local_60 = 10000.0;
        local_64 = 10000.0;
      }
      else {
        fVar13 = (1.0 - fVar13) * 800.0 + 1.0;
        if (0.0 < fVar13) {
          local_60 = 1.0 / fVar13;
        }
        else if (fVar13 < 0.0) {
          local_60 = 1.0 / fVar13;
        }
        else {
          local_60 = 0.0;
        }
        auVar1._12_4_ = DAT_08b0019c;
        auVar1._8_4_ = DAT_08b00198;
        auVar1._4_4_ = DAT_08b00194;
        auVar1._0_4_ = DAT_08b00190;
        auVar1 = vsat0_q(auVar1);
        auVar1 = vscl_q(auVar1,in_V74);
        auVar1 = vf2iz_q(auVar1,0x17);
        uVar14 = vi2uc_q(auVar1);
        uVar14 = uVar14 & 0xffffff | 0xcf000000;
        local_64 = fVar13 + 20000.0;
      }
      *local_a0[0] = uVar14;
      local_a0[0][1] = (uint)local_64 >> 8 | 0xcd000000;
      local_a0[0][2] = (uint)local_60 >> 8 | 0xce000000;
      local_a0[0] = local_a0[0] + 3;
      iVar8 = *(int *)(*(int *)(iVar11 + 0x1208) + 0x14);
      (**(code **)(iVar8 + 0x44))
                (*(int *)(iVar11 + 0x1208) + (int)*(short *)(iVar8 + 0x40),local_a0);
    }
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 4;
  } while (iVar12 < 6);
  puVar9 = local_a0[0] + 2;
  puVar6 = local_a0[0] + 0x62;
  *local_a0[0] = ((uint)puVar6 >> 0x18 & 0xf) << 0x10 | 0x10000000;
  local_a0[0][1] = (uint)puVar6 & 0xffffff | 0x8000000;
  iVar11 = 0;
  puVar7 = puVar9;
  do {
    uVar3 = (ushort)iVar11 & 1;
    if (iVar11 < 0) {
      uVar3 = -uVar3;
    }
    *(ushort *)(puVar7 + 1) = ((short)(iVar11 / 2) + uVar3) * 0x20;
    uVar3 = (ushort)iVar11 & 1;
    if (iVar11 < 0) {
      sVar10 = uVar3 * -0x110;
    }
    else {
      sVar10 = uVar3 * 0x110;
    }
    *(short *)((int)puVar7 + 6) = sVar10;
    *(undefined2 *)(puVar7 + 2) = 0;
    iVar11 = iVar11 + 1;
    puVar7 = puVar7 + 3;
  } while (iVar11 < 0x20);
  *puVar6 = 0xd3000401;
  local_a0[0][99] = 0x1280011c;
  puVar7 = local_a0[0] + 100;
  if (puVar9 != (uint *)0x0) {
    *puVar7 = ((uint)puVar9 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    local_a0[0][0x65] = (uint)puVar9 & 0xffffff | 0x1000000;
    puVar7 = local_a0[0] + 0x66;
  }
  *puVar7 = 0x4060020;
  puVar7[1] = 0xd3000000;
  local_a0[0] = puVar7 + 2;
  FUN_089f13c8(uVar4);
  uVar4 = FUN_089f2178(0x43c30000);
  local_a0[0] = (uint *)FUN_089f1308(uVar4);
  iVar12 = 0;
  iVar11 = param_1;
  do {
    if ((*(int *)(iVar11 + 0x1208) != 0) && (*(char *)(param_1 + iVar12 + 0x1220) == '\x01')) {
      local_a0[0] = (uint *)FUN_089f1490(local_a0[0],*(undefined4 *)(iVar11 + 0x11f0),1);
      fVar13 = DAT_08b0019c;
      if (1.0 < DAT_08b0019c) {
        fVar13 = 1.0;
      }
      if (fVar13 <= 0.0001) {
        local_4c = 10000.0;
        uVar14 = 0xcf000000;
        local_50 = local_4c;
      }
      else {
        fVar13 = (1.0 - fVar13) * 800.0 + 1.0;
        if (0.0 < fVar13) {
          local_4c = 1.0 / fVar13;
        }
        else if (fVar13 < 0.0) {
          local_4c = 1.0 / fVar13;
        }
        else {
          local_4c = 0.0;
        }
        auVar2._12_4_ = DAT_08b0019c;
        auVar2._8_4_ = DAT_08b00198;
        auVar2._4_4_ = DAT_08b00194;
        auVar2._0_4_ = DAT_08b00190;
        auVar1 = vsat0_q(auVar2);
        auVar1 = vscl_q(auVar1,in_V74);
        auVar1 = vf2iz_q(auVar1,0x17);
        uVar14 = vi2uc_q(auVar1);
        uVar14 = uVar14 & 0xffffff | 0xcf000000;
        local_50 = fVar13 + 20000.0;
      }
      *local_a0[0] = uVar14;
      local_a0[0][1] = (uint)local_50 >> 8 | 0xcd000000;
      local_a0[0][2] = (uint)local_4c >> 8 | 0xce000000;
      local_a0[0] = local_a0[0] + 3;
      iVar8 = *(int *)(*(int *)(iVar11 + 0x1208) + 0x14);
      (**(code **)(iVar8 + 0x44))
                (*(int *)(iVar11 + 0x1208) + (int)*(short *)(iVar8 + 0x40),local_a0);
    }
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + 4;
  } while (iVar12 < 6);
  FUN_089f13c8(uVar4,local_a0[0]);
  FUN_0898b6ac(param_1);
  return;
}

