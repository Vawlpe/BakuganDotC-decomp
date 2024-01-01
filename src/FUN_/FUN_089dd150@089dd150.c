#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dd150(uint **param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_c0 [7];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined auStack_80 [64];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  puVar3 = local_c0;
  uVar7 = 0;
  iVar5 = 0;
  if (DAT_08ac5c4c == 0) {
    puVar2 = param_1[9];
    if ((puVar2[8] & 0x1000000) == 0) {
      return;
    }
    uVar6 = (uint)*(ushort *)((int)puVar2 + 10);
    puVar1 = (undefined *)puVar2[3];
    uVar7 = puVar2[10];
    iVar5 = FUN_08a10868(param_1[10]);
    local_34 = uVar6 & 0xf00;
    local_30 = uVar6 & 0xf;
  }
  else {
    local_34 = DAT_08ac5c4c & 0xf00;
    local_30 = DAT_08ac5c4c & 0xf;
    puVar1 = (undefined *)0x0;
    uVar6 = DAT_08ac5c4c;
    if ((DAT_08ac5c4c & 0x4000) != 0) {
      puVar1 = &DAT_08af82e0;
    }
  }
  local_c0[0] = 0x3f800000;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0x3f800000;
  local_c0[6] = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0x3f800000;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0x3f800000;
  if (iVar5 != 0) {
    FUN_089dd63c(local_c0,local_c0,iVar5);
  }
  if (uVar7 != 0) {
    FUN_089dd63c(local_c0,local_c0,uVar7);
  }
  if (puVar1 != (undefined *)0x0) {
    FUN_089dd5c4(local_c0,local_c0,puVar1);
  }
  if (local_34 != 0) {
    puVar2 = param_1[4] + 0x20;
    puVar4 = param_1[5] + 0x20;
    if (local_34 == 0x100) {
      puVar2 = &DAT_08aa5240;
    }
    if (*(short *)(param_1[5] + 7) != 0) {
      puVar4 = &DAT_08aa5240;
    }
    FUN_089dd5c4(auStack_80,puVar2,puVar4);
    if ((uVar6 & 0x8000) != 0) {
      FUN_089dd6cc(auStack_80,auStack_80);
    }
    FUN_089dd5c4(local_c0,local_c0,auStack_80);
  }
  if (local_30 == 0) {
    FUN_089dd63c(local_c0,local_c0,param_1[4] + 0x1c);
    puVar2 = *param_1;
  }
  else if (local_30 == 2) {
    if (*(short *)(param_1[5] + 7) == 0) {
      FUN_089dd600(local_c0,local_c0,param_1[4] + 0x18);
      puVar2 = *param_1;
    }
    else {
      puVar2 = *param_1;
    }
  }
  else {
    puVar2 = *param_1;
  }
  *param_1 = puVar2 + 1;
  *puVar2 = 0x40000000;
  iVar5 = 0;
  do {
    local_40 = *puVar3;
    puVar2 = *param_1;
    *param_1 = puVar2 + 1;
    *puVar2 = local_40 >> 8 | 0x41000000;
    local_3c = puVar3[1];
    puVar2 = *param_1;
    *param_1 = puVar2 + 1;
    *puVar2 = local_3c >> 8 | 0x41000000;
    local_38 = puVar3[3];
    puVar2 = *param_1;
    *param_1 = puVar2 + 1;
    *puVar2 = local_38 >> 8 | 0x41000000;
    iVar5 = iVar5 + 1;
    puVar3 = puVar3 + 4;
  } while (iVar5 < 4);
  return;
}

