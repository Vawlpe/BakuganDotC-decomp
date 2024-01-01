#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08850260(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *local_40;
  uint local_3c;
  uint local_38;
  
  uVar2 = FUN_089f2178(0);
  FUN_08826370(uVar2);
  local_40 = (uint *)FUN_089f1308(uVar2);
  puVar1 = DAT_08ac5c74;
  *local_40 = *DAT_08ac5c74 & 0xffffff | 0xcf000000;
  local_3c = puVar1[1];
  local_40[1] = local_3c >> 8 | 0xcd000000;
  local_38 = puVar1[2];
  local_40[2] = local_38 >> 8 | 0xce000000;
  local_40 = local_40 + 3;
  puVar3 = (undefined4 *)FUN_089f1490(local_40,DAT_08ac5c90,1);
  *puVar3 = 0x19000001;
  local_40 = puVar3 + 1;
  if (DAT_08aba77f == '\0') {
    FUN_088acbdc(&local_40);
  }
  else {
    FUN_089e0cf4(&local_40,*(undefined4 *)(param_1 + 0x468),1);
    uVar5 = 0;
    if (DAT_08abd5bc != (undefined4 *)0x0) {
      uVar5 = *DAT_08abd5bc;
    }
    FUN_089e0cf4(&local_40,uVar5,1);
  }
  FUN_089f13c8(uVar2,local_40);
  if (0.0001 < *(float *)(param_1 + 0x50c)) {
    FUN_089f2ddc(uVar2,param_1 + 0x500);
  }
  uVar2 = FUN_089f2178(0x3f800000);
  DAT_08ac601d = DAT_08aba780;
  DAT_08ab9eb8 = DAT_08aba780;
  if (DAT_08aba77f != '\0') {
    FUN_0882634c(uVar2);
    *(undefined4 *)(DAT_08ac5c90 + 0x154) = 0x42a00000;
    FUN_08826304(uVar2);
    FUN_089f50a0(*(undefined4 *)(param_1 + 0x438),uVar2,DAT_08ac5c90,0);
    *(undefined4 *)(DAT_08ac5c90 + 0x154) = 0;
  }
  local_40 = (uint *)FUN_089f1308(uVar2);
  puVar3 = (undefined4 *)FUN_089f1490(local_40,DAT_08ac5c90,1);
  *puVar3 = 0x19000001;
  local_40 = puVar3 + 1;
  if (DAT_08aba77f == '\0') {
    if (*(int *)(param_1 + 0x440) != 5) {
      uVar5 = *(undefined4 *)(param_1 + 0x45c);
      goto LAB_088504f8;
    }
    iVar4 = FUN_088660e0();
    if (iVar4 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x45c);
    }
    else {
      (**(code **)(*(int *)(iVar4 + 0x14) + 0x44))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x40),&local_40);
      iVar4 = FUN_08860344(iVar4);
      if (iVar4 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x45c);
      }
      else {
        (**(code **)(*(int *)(iVar4 + 0x14) + 0x44))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x40),&local_40);
        uVar5 = *(undefined4 *)(param_1 + 0x45c);
      }
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x45c);
LAB_088504f8:
    FUN_089e0cf4(&local_40,uVar5,1);
    local_40 = (uint *)FUN_0884b364(param_1,local_40,param_1 + 0x474);
    uVar5 = *(undefined4 *)(param_1 + 0x45c);
  }
  FUN_089e2574(&local_40,uVar5,1);
  FUN_089e2574(&local_40,*(undefined4 *)(param_1 + 0x474),1);
  *(undefined4 *)(DAT_08ac5c90 + 0x154) = 0x42480000;
  local_40 = (uint *)FUN_089e3014(DAT_08ac5c90,local_40,4);
  FUN_089f13c8(uVar2,local_40);
  FUN_089f0a74(uVar2);
  if ((*(byte *)(*(int *)(param_1 + 0x43c) + 4) & 0x20) != 0) {
    DAT_08aba790 = DAT_08aba790 == '\0';
  }
  *(undefined4 *)(DAT_08ac5c90 + 0x154) = 0;
  FUN_089f50a0(*(undefined4 *)(param_1 + 0x434),uVar2,DAT_08ac5c90,0);
  FUN_08824ab8(*(undefined4 *)(param_1 + 0x4d4),uVar2,DAT_08ac5c90);
  FUN_089f50a0(*(undefined4 *)(param_1 + 0x4d4),uVar2,DAT_08ac5c90,0);
  FUN_08824ab8(*(undefined4 *)(param_1 + 0x4d8),uVar2,DAT_08ac5c90);
  FUN_089f50a0(*(undefined4 *)(param_1 + 0x4d8),uVar2,DAT_08ac5c90,0);
  FUN_088262bc(uVar2);
  DAT_08ac601d = 1;
  DAT_08ab9eb8 = 1;
  if (DAT_08aba77f != '\0') {
    local_40 = (uint *)FUN_089f1308(uVar2);
    puVar3 = (undefined4 *)FUN_089f1490(local_40,DAT_08ac5c90,1);
    *puVar3 = 0x19000001;
    local_40 = puVar3 + 1;
    FUN_089e2574(&local_40,*(undefined4 *)(param_1 + 0x468),1);
    uVar5 = 0;
    if (DAT_08abd5bc != (undefined4 *)0x0) {
      uVar5 = *DAT_08abd5bc;
    }
    FUN_089e2574(&local_40,uVar5,1);
    *local_40 = 0x19000000;
    local_40 = local_40 + 1;
    FUN_089f13c8(uVar2);
  }
  iVar4 = FUN_088660e0();
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x564);
  }
  else {
    if (*(int *)(iVar4 + 0x570) == 0) {
      iVar4 = FUN_0889da6c();
      if (iVar4 == 0) {
        uVar2 = FUN_089f2178(0x3ff33333);
        FUN_089f1458(uVar2);
        FUN_089f303c(uVar2,&DAT_08a666ae,&DAT_08a666b8,1,2);
        FUN_089f303c(uVar2,&DAT_08a666b2,&DAT_08a666c0,1,3);
      }
    }
    else {
      iVar4 = FUN_0882c13c();
      if (iVar4 != 0) {
        uVar2 = FUN_089f2178(0x42dc0000);
        FUN_089f1458(uVar2);
        iVar4 = FUN_0882c15c();
        FUN_089f303c(uVar2,&DAT_08a666c8,iVar4 + 0x534,2,1);
        iVar4 = *(int *)(param_1 + 0x564);
        goto LAB_08850770;
      }
    }
    iVar4 = *(int *)(param_1 + 0x564);
  }
LAB_08850770:
  if (iVar4 != 0) {
    uVar2 = FUN_089f2178(0x43160000);
    FUN_089f1458(uVar2);
    FUN_089f303c(uVar2,&DAT_08a666ce,param_1 + 0x57c,2,1);
  }
  uVar2 = FUN_088500fc(0x40000000,param_1);
  FUN_0888b95c(uVar2);
  FUN_089f8a64(param_1 + 0x488);
  uVar2 = FUN_089f2178(0x40400000);
  FUN_089f5084(*(undefined4 *)(param_1 + 0x430),uVar2);
  uVar2 = FUN_089f2178(0x44834000);
  if (0.0 < *(float *)(param_1 + 0x4fc)) {
    FUN_089f2ddc(uVar2,param_1 + 0x4f0);
  }
  return;
}

