#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882b394(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint *puVar8;
  short sVar9;
  int iVar10;
  uint *puVar11;
  uint *local_90 [4];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  
  if (*(int *)(param_1 + 0x540) < 3) {
    uVar4 = FUN_089f2178(0xc2c80000);
    puVar5 = (undefined4 *)FUN_089f1308(uVar4);
    *puVar5 = 0x4c007800;
    puVar5[1] = 0x4d007800;
    local_70 = 0x43000000;
    local_6c = 0xc3000000;
    puVar5[2] = 0x42430000;
    local_68 = 0x45000000;
    puVar5[3] = 0x43c30000;
    local_64 = 0x45000000;
    puVar5[4] = 0x45450000;
    puVar5[5] = 0x46450000;
    puVar5[6] = 0xd4000000;
    puVar5[7] = 0xd503fcff;
    puVar5[8] = 0x15000000;
    puVar5[9] = 0x1603fcff;
    if (DAT_08ac5db0 == 0) {
      puVar5[10] = 0xd2000000;
      puVar5[0xb] = 0x9d000100;
      puVar5[0xc] = 0x9c088000;
    }
    else {
      puVar5[10] = 0xd2000000;
      puVar5[0xb] = 0x9d000100;
      puVar5[0xc] = 0x9c000000;
    }
    local_90[0] = puVar5 + 0xd;
    local_90[0] = (uint *)FUN_089f1418(local_90[0]);
    FUN_089f13c8(uVar4,local_90[0]);
    if (DAT_08af79b0 == 0) {
      DAT_08af79b0 = 1;
      DAT_08af79c0 = 0;
      DAT_08af79c4 = 0;
      DAT_08af79c8 = 0x43800000;
      DAT_08af79cc = 0x43800000;
    }
    FUN_089f2c2c(uVar4,&DAT_08af79c0,&DAT_08b001b0);
    local_90[0] = (uint *)FUN_089f1308(uVar4);
    if ((*(char *)(param_1 + 0x546) != '\0') && (1 < *(int *)(param_1 + 0x53c))) {
      local_90[0] = (uint *)FUN_0882b0b4(param_1,local_90[0],*(undefined4 *)(param_1 + 0x524));
    }
    uVar7 = DAT_08ac5c90;
    local_38 = &DAT_08af79c0;
    local_3c = &DAT_08b001b0;
    local_40 = 0x9d000200;
    local_44 = 0xd2000003;
    local_80 = DAT_08b00850;
    uStack_7c = DAT_08b00854;
    uStack_78 = DAT_08b00858;
    uStack_74 = DAT_08b0085c;
    DAT_08b00850 = *(undefined4 *)(param_1 + 0x10);
    DAT_08b00854 = *(undefined4 *)(param_1 + 0x14);
    DAT_08b00858 = *(undefined4 *)(param_1 + 0x18);
    DAT_08b0085c = *(undefined4 *)(param_1 + 0x1c);
    local_90[0] = (uint *)FUN_089f1490(local_90[0],*(undefined4 *)(param_1 + 0x528),1);
    DAT_08b00850 = local_80;
    DAT_08b00854 = uStack_7c;
    DAT_08b00858 = uStack_78;
    DAT_08b0085c = uStack_74;
    iVar10 = *(int *)(*(int *)(param_1 + 0x520) + 0x14);
    DAT_08ac5c90 = uVar7;
    (**(code **)(iVar10 + 0x44))
              (*(int *)(param_1 + 0x520) + (int)*(short *)(iVar10 + 0x40),local_90);
    puVar3 = local_38;
    puVar5 = local_3c;
    uVar2 = local_40;
    uVar7 = local_44;
    puVar11 = local_90[0] + 2;
    puVar8 = local_90[0] + 0x62;
    *local_90[0] = ((uint)puVar8 >> 0x18 & 0xf) << 0x10 | 0x10000000;
    local_90[0][1] = (uint)puVar8 & 0xffffff | 0x8000000;
    iVar10 = 0;
    puVar6 = puVar11;
    do {
      uVar1 = (ushort)iVar10 & 1;
      if (iVar10 < 0) {
        uVar1 = -uVar1;
      }
      *(ushort *)(puVar6 + 1) = ((short)(iVar10 / 2) + uVar1) * 0x20;
      uVar1 = (ushort)iVar10 & 1;
      if (iVar10 < 0) {
        sVar9 = uVar1 * -0x110;
      }
      else {
        sVar9 = uVar1 * 0x110;
      }
      *(short *)((int)puVar6 + 6) = sVar9;
      *(undefined2 *)(puVar6 + 2) = 0;
      iVar10 = iVar10 + 1;
      puVar6 = puVar6 + 3;
    } while (iVar10 < 0x20);
    *puVar8 = 0xd3000401;
    local_90[0][99] = 0x1280011c;
    puVar6 = local_90[0] + 100;
    if (puVar11 != (uint *)0x0) {
      *puVar6 = ((uint)puVar11 >> 0x18 & 0xf) << 0x10 | 0x10000000;
      local_90[0][0x65] = (uint)puVar11 & 0xffffff | 0x1000000;
      puVar6 = local_90[0] + 0x66;
    }
    *puVar6 = 0x4060020;
    puVar6[1] = 0xd3000000;
    local_90[0] = puVar6 + 2;
    if (1 < *(int *)(param_1 + 0x53c)) {
      *local_90[0] = 0xe030000;
      puVar6[3] = 0xc000000;
      puVar6[4] = 0xf000000;
      puVar6[5] = 0xc000000;
      local_90[0] = puVar6 + 6;
    }
    FUN_089f13c8(uVar4,local_90[0]);
    FUN_089f2c2c(uVar4,puVar3,puVar5);
    puVar5 = (undefined4 *)FUN_089f1308(uVar4);
    *puVar5 = 0x4c007100;
    puVar5[1] = 0x4d007780;
    local_60 = 0x43700000;
    local_5c = 0xc3080000;
    puVar5[2] = 0x42437000;
    local_58 = 0x45000000;
    local_54 = 0x45000000;
    puVar5[3] = 0x43c30800;
    puVar5[4] = 0x45450000;
    puVar5[5] = 0x46450000;
    puVar5[6] = 0xd4000000;
    puVar5[7] = 0xd5043ddf;
    puVar5[8] = 0x15000000;
    puVar5[9] = 0x16043ddf;
    if (DAT_08ac5db0 == 0) {
      puVar5[10] = uVar7;
      puVar5[0xb] = uVar2;
      puVar5[0xc] = 0x9c088000;
    }
    else {
      puVar5[10] = uVar7;
      puVar5[0xb] = uVar2;
      puVar5[0xc] = 0x9c000000;
    }
    local_90[0] = puVar5 + 0xd;
    FUN_089f13c8(uVar4,local_90[0]);
    if (*(char *)(param_1 + 0x547) != '\0') {
      uVar4 = FUN_089f2178(0x3e99999a);
      uVar7 = FUN_089f1308(uVar4);
      uVar7 = FUN_0882b218(param_1,uVar7,*(undefined4 *)(param_1 + 0x524));
      FUN_089f13c8(uVar4,uVar7);
    }
    if (DAT_08ab9f68 == *(int *)(param_1 + 0x53c)) {
      DAT_08ab9f6c = 0;
    }
    else {
      DAT_08ab9f68 = *(int *)(param_1 + 0x53c);
      DAT_08ab9f6c = 1;
    }
  }
  return;
}

