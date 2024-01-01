#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bcd18(int param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined auStack_d0 [64];
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined local_70 [32];
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_14;
  
  local_90 = 0;
  local_8c = 0;
  FUN_089b4c84(auStack_d0,"f%d_quest_%02d_00.ptlb",DAT_08b00bd4,DAT_08b00bd6);
  local_90 = FUN_089be054(DAT_08ac520c,auStack_d0);
  if (local_90 != 0) {
    local_8c = FUN_089be1b8(DAT_08ac520c,auStack_d0);
    FUN_088f613c(&local_90);
    local_88 = 0;
    local_84 = 0;
    local_80 = 0x42480000;
    FUN_089b4c84(auStack_d0,"f%d_quest_%02d_00.cptb",DAT_08b00bd4,DAT_08b00bd6);
    local_88 = FUN_089be054(DAT_08ac520c,auStack_d0);
    if (local_88 != 0) {
      local_84 = FUN_089be1b8(DAT_08ac520c,auStack_d0);
      FUN_088fbb78(&local_88);
      local_50 = 0x4079999a;
      local_4c = 0x46ea6000;
      local_40 = (undefined2 *)0x0;
      local_3c = 0;
      local_38 = 0x3e99999a;
      local_34 = 0x3f99999a;
      local_30 = 0x44160000;
      local_2c = 0x43480000;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      puVar2 = (undefined2 *)FUN_089d7d74(0x20,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      local_40 = (undefined2 *)0x0;
      if (puVar2 != (undefined2 *)0x0) {
        *(undefined **)(puVar2 + 2) = &DAT_08af6dc0;
        *puVar2 = 0xffff;
        *(undefined **)(puVar2 + 2) = &DAT_08af6de0;
        *(undefined4 *)(puVar2 + 8) = in_V72;
        *(undefined4 *)(puVar2 + 10) = in_V76;
        *(undefined4 *)(puVar2 + 0xc) = in_V7A;
        *(undefined4 *)(puVar2 + 0xe) = in_V7E;
        local_40 = puVar2;
      }
      *(undefined2 **)(param_1 + 0x5c8) = local_40;
      local_14 = 0;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar3 = FUN_089d7d74(0x50,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      iVar4 = local_14;
      if (iVar3 != 0) {
        FUN_088fa32c(iVar3,local_70);
        iVar4 = iVar3;
      }
      *(int *)(param_1 + 0x5c4) = iVar4;
      *(undefined4 *)(param_1 + 0x158) = 0x42340000;
      FUN_088bb320(param_1);
    }
  }
  return;
}

