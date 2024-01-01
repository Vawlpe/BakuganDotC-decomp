#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08845f14(int param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined auStack_f0 [64];
  undefined auStack_b0 [64];
  undefined auStack_70 [64];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    uVar3 = FUN_0882d020(1);
    iVar4 = FUN_08845e7c(uVar3);
    if (iVar4 == 0) {
      uVar3 = FUN_0882d020(2);
      iVar4 = FUN_08845e7c(uVar3);
      if (iVar4 == 0) {
        uVar3 = FUN_0882d020(3);
        iVar4 = FUN_08845e7c(uVar3);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x10) = 100;
          return 1;
        }
      }
    }
    uVar3 = FUN_0882d020(1);
    iVar4 = FUN_08845e7c(uVar3);
    if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x10) = 10;
      return 0;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  case 1:
    iVar4 = FUN_0882d020(1);
    if (iVar4 == 0) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      local_1c = iVar4;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar1 = FUN_089d7d74(0x40,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x20) = uVar1;
      uVar1 = *(undefined4 *)(local_1c + 8);
      uVar3 = FUN_08845e7c();
      FUN_089b4c84(*(undefined4 *)(param_1 + 0x20),
                   "data/battle/arena_pho/arena_com_pho_%03d_%02d.lzs",uVar1,uVar3);
      uVar3 = FUN_089fce94();
      iVar4 = FUN_089fd150(uVar3,param_1,*(undefined4 *)(param_1 + 0x20),1,0,0);
      *(int *)(param_1 + 0x14) = iVar4;
      if (iVar4 != 0) {
        FUN_089fbac8(iVar4,10);
      }
      iVar5 = *(int *)(param_1 + 0x10);
    }
    iVar4 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x10) = iVar5 + 1;
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 0x14);
    break;
  default:
    return 1;
  case 10:
    uVar3 = FUN_0882d020(2);
    iVar4 = FUN_08845e7c(uVar3);
    if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x10) = 0x14;
      return 0;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  case 0xb:
    iVar4 = FUN_0882d020(2);
    if (iVar4 == 0) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      local_24 = iVar4;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar1 = FUN_089d7d74(0x40,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x24) = uVar1;
      uVar1 = *(undefined4 *)(local_24 + 8);
      uVar3 = FUN_08845e7c();
      FUN_089b4c84(*(undefined4 *)(param_1 + 0x24),
                   "data/battle/arena_pho/arena_com_pho_%03d_%02d.lzs",uVar1,uVar3);
      uVar3 = FUN_089fce94();
      iVar4 = FUN_089fd150(uVar3,param_1,*(undefined4 *)(param_1 + 0x24),1,0,0);
      *(int *)(param_1 + 0x18) = iVar4;
      if (iVar4 != 0) {
        FUN_089fbac8(iVar4,10);
      }
      iVar5 = *(int *)(param_1 + 0x10);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x10) = iVar5 + 1;
    goto LAB_08846288;
  case 0xc:
    iVar4 = *(int *)(param_1 + 0x18);
LAB_08846288:
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0x14;
      return 0;
    }
    iVar4 = FUN_089fbbe0();
    puVar6 = auStack_b0;
    if (iVar4 == 0) {
      return 0;
    }
    strcpy(puVar6,*(undefined4 *)(param_1 + 0x24));
    puVar2 = (undefined *)strrchr(puVar6,0x2e);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
    }
    iVar4 = strrchr(puVar6,0x2f);
    if (iVar4 != 0) {
      puVar6 = (undefined *)(iVar4 + 1);
    }
    local_28 = 0;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    if (iVar4 != 0) {
      uVar3 = FUN_089fbcb8(*(undefined4 *)(param_1 + 0x18));
      FUN_089f6cdc(iVar4,puVar6,uVar3,1);
      local_28 = iVar4;
    }
    *(int *)(param_1 + 0x30) = local_28;
    *(undefined4 *)(param_1 + 0x10) = 0x14;
    return 0;
  case 0x14:
    uVar3 = FUN_0882d020(3);
    iVar4 = FUN_08845e7c(uVar3);
    if (iVar4 < 1) {
      *(undefined4 *)(param_1 + 0x10) = 100;
      return 0;
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  case 0x15:
    iVar4 = FUN_0882d020(3);
    if (iVar4 == 0) {
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      local_2c = iVar4;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar1 = FUN_089d7d74(0x40,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      uVar1 = *(undefined4 *)(local_2c + 8);
      uVar3 = FUN_08845e7c();
      FUN_089b4c84(*(undefined4 *)(param_1 + 0x28),
                   "data/battle/arena_pho/arena_com_pho_%03d_%02d.lzs",uVar1,uVar3);
      uVar3 = FUN_089fce94();
      iVar4 = FUN_089fd150(uVar3,param_1,*(undefined4 *)(param_1 + 0x28),1,0,0);
      *(int *)(param_1 + 0x1c) = iVar4;
      if (iVar4 != 0) {
        FUN_089fbac8(iVar4,10);
      }
      iVar5 = *(int *)(param_1 + 0x10);
    }
    iVar4 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x10) = iVar5 + 1;
    goto LAB_08846464;
  case 0x16:
    iVar4 = *(int *)(param_1 + 0x1c);
LAB_08846464:
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 100;
      return 0;
    }
    iVar4 = FUN_089fbbe0();
    puVar6 = auStack_70;
    if (iVar4 == 0) {
      return 0;
    }
    strcpy(puVar6,*(undefined4 *)(param_1 + 0x28));
    puVar2 = (undefined *)strrchr(puVar6,0x2e);
    if (puVar2 != (undefined *)0x0) {
      *puVar2 = 0;
    }
    iVar4 = strrchr(puVar6,0x2f);
    if (iVar4 != 0) {
      puVar6 = (undefined *)(iVar4 + 1);
    }
    local_30 = 0;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    if (iVar4 != 0) {
      uVar3 = FUN_089fbcb8(*(undefined4 *)(param_1 + 0x1c));
      FUN_089f6cdc(iVar4,puVar6,uVar3,1);
      local_30 = iVar4;
    }
    *(int *)(param_1 + 0x34) = local_30;
    *(undefined4 *)(param_1 + 0x10) = 100;
    return 0;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 10;
  }
  else {
    iVar4 = FUN_089fbbe0();
    if (iVar4 != 0) {
      strcpy(auStack_f0,*(undefined4 *)(param_1 + 0x20));
      puVar6 = (undefined *)strrchr(auStack_f0,0x2e);
      if (puVar6 != (undefined *)0x0) {
        *puVar6 = 0;
      }
      iVar4 = strrchr(auStack_f0,0x2f);
      puVar6 = (undefined *)(iVar4 + 1);
      if (iVar4 == 0) {
        puVar6 = auStack_f0;
      }
      local_20 = 0;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      if (iVar4 != 0) {
        uVar3 = FUN_089fbcb8(*(undefined4 *)(param_1 + 0x14));
        FUN_089f6cdc(iVar4,puVar6,uVar3,1);
        local_20 = iVar4;
      }
      *(int *)(param_1 + 0x2c) = local_20;
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
  }
  return 0;
}

