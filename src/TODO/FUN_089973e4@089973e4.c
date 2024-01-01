#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089973e4(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  short sVar10;
  float fVar11;
  uint uVar12;
  undefined4 in_V74;
  uint *local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_34;
  float local_30;
  float local_20;
  float local_1c;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0890a520(param_1);
    uVar4 = FUN_089f2178(0x42480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),1);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x43480000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),2);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
    uVar4 = FUN_089f2178(0x43c80000);
    FUN_089f5474(*(undefined4 *)(param_1 + 0x18),4);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar4);
  }
  if (*(int *)(param_1 + 0x1f04) != 0) {
    uVar4 = FUN_089f2178(0x41a00000);
    local_70[0] = (uint *)FUN_089f1308(uVar4);
    local_70[0] = (uint *)FUN_089f1490(local_70[0],param_1 + 0x1f10,1);
    local_30 = 0.0;
    fVar11 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0001) {
      local_34 = 10000.0;
      uVar12 = 0xcf000000;
      local_30 = local_34;
    }
    else {
      fVar11 = (1.0 - fVar11) * 800.0 + 1.0;
      local_34 = fVar11 + 20000.0;
      if (0.0 < fVar11) {
        local_30 = 1.0 / fVar11;
      }
      else if (fVar11 < 0.0) {
        local_30 = 1.0 / fVar11;
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
    *local_70[0] = uVar12;
    local_70[0][1] = (uint)local_34 >> 8 | 0xcd000000;
    local_70[0][2] = (uint)local_30 >> 8 | 0xce000000;
    local_70[0] = local_70[0] + 3;
    iVar6 = *(int *)(*(int *)(param_1 + 0x1f04) + 0x14);
    (**(code **)(iVar6 + 0x44))(*(int *)(param_1 + 0x1f04) + (int)*(short *)(iVar6 + 0x40),local_70)
    ;
    puVar9 = local_70[0] + 2;
    puVar7 = local_70[0] + 0x62;
    *local_70[0] = ((uint)puVar7 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    local_70[0][1] = (uint)puVar7 & 0xffffff | 0x8000000;
    iVar6 = 0;
    puVar8 = puVar9;
    do {
      uVar3 = (ushort)iVar6 & 1;
      if (iVar6 < 0) {
        uVar3 = -uVar3;
      }
      *(ushort *)(puVar8 + 1) = ((short)(iVar6 / 2) + uVar3) * 0x20;
      uVar3 = (ushort)iVar6 & 1;
      if (iVar6 < 0) {
        sVar10 = uVar3 * -0x110;
      }
      else {
        sVar10 = uVar3 * 0x110;
      }
      *(short *)((int)puVar8 + 6) = sVar10;
      *(undefined2 *)(puVar8 + 2) = 0;
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar6 < 0x20);
    *puVar7 = 0xd3000401;
    local_70[0][99] = 0x1280011c;
    puVar8 = local_70[0] + 100;
    if (puVar9 != (uint *)0x0) {
      *puVar8 = ((uint)puVar9 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      local_70[0][0x65] = (uint)puVar9 & 0xffffff | 0x1000000;
      puVar8 = local_70[0] + 0x66;
    }
    *puVar8 = 0x4060020;
    puVar8[1] = 0xd3000000;
    local_70[0] = puVar8 + 2;
    FUN_089f13c8(uVar4);
  }
  if (*(int *)(param_1 + 0x226c) != 0) {
    uVar4 = FUN_089f2178(0x42700000);
    local_70[0] = (uint *)FUN_089f1308(uVar4);
    local_70[0] = (uint *)FUN_089f1490(local_70[0],param_1 + 0x1f10,1);
    local_1c = 0.0;
    fVar11 = DAT_08b0019c;
    if (1.0 < DAT_08b0019c) {
      fVar11 = 1.0;
    }
    if (fVar11 <= 0.0001) {
      local_1c = 10000.0;
      uVar12 = 0xcf000000;
      local_20 = local_1c;
    }
    else {
      fVar11 = (1.0 - fVar11) * 800.0 + 1.0;
      if (0.0 < fVar11) {
        local_1c = 1.0 / fVar11;
      }
      else if (fVar11 < 0.0) {
        local_1c = 1.0 / fVar11;
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
      local_20 = fVar11 + 20000.0;
    }
    *local_70[0] = uVar12;
    local_70[0][1] = (uint)local_20 >> 8 | 0xcd000000;
    local_70[0][2] = (uint)local_1c >> 8 | 0xce000000;
    local_70[0] = local_70[0] + 3;
    iVar6 = *(int *)(*(int *)(param_1 + 0x226c) + 0x14);
    (**(code **)(iVar6 + 0x44))(*(int *)(param_1 + 0x226c) + (int)*(short *)(iVar6 + 0x40),local_70)
    ;
    FUN_089f13c8(uVar4,local_70[0]);
  }
  if (*(char *)(param_1 + 0x10c0) != '\0') {
    local_50 = 0;
    local_4c = 0;
    local_48 = 0x43f00000;
    local_44 = 0x43880000;
    uVar4 = FUN_089f2178(0x43960000);
    uVar5 = FUN_089f1308(uVar4);
    uVar5 = FUN_089f1418(uVar5);
    uVar5 = FUN_089e3014(DAT_08ac5c8c,uVar5,0xffffffff);
    uVar5 = FUN_089f202c(uVar5,&DAT_08b00190,0,1);
    local_54 = *(undefined4 *)(param_1 + 0x10c4);
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    uVar5 = FUN_089f2c88(uVar4,uVar5,&local_50,&local_60);
    FUN_089f13c8(uVar4,uVar5);
  }
  FUN_089972cc(param_1);
  FUN_089a46cc();
  return;
}

