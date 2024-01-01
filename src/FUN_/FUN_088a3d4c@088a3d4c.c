#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a3d4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  local_a0 = *param_1;
  local_9c = param_1[1];
  local_98 = param_1[2];
  local_94 = param_1[3];
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x390,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    local_b0 = *param_1;
    uStack_ac = param_1[1];
    uStack_a8 = param_1[2];
    uStack_a4 = param_1[3];
    FUN_088a3b10(iVar2,&local_b0);
    iVar3 = iVar2;
  }
  *(undefined4 *)(iVar3 + 0x34) = local_94;
  *(undefined4 *)(iVar3 + 0x204) = 100;
  *(undefined4 *)(iVar3 + 0x200) = 100;
  *(undefined4 *)(iVar3 + 0x360) = param_4;
  *(undefined4 *)(iVar3 + 0x354) = param_2;
  *(undefined4 *)(iVar3 + 0x358) = param_5;
  *(undefined4 *)(iVar3 + 0x340) = param_6;
  FUN_088aca0c(iVar3);
  FUN_089e0a70(iVar3,&LAB_088a3af8,0);
  *(undefined4 *)(iVar3 + 0x350) = param_3;
  FUN_088a3cf8(iVar3,1);
  local_b0 = *param_7;
  uStack_ac = param_7[1];
  uStack_a8 = param_7[2];
  uStack_a4 = param_7[3];
  *(undefined4 *)(iVar3 + 0x330) = local_b0;
  *(undefined4 *)(iVar3 + 0x334) = uStack_ac;
  *(undefined4 *)(iVar3 + 0x338) = uStack_a8;
  *(undefined4 *)(iVar3 + 0x33c) = uStack_a4;
  iVar2 = FUN_08855008(*(undefined4 *)(iVar3 + 0x358));
  *(int *)(iVar3 + 0x324) = iVar2;
  FUN_088a3d08(iVar3);
  *(undefined *)(iVar3 + 0x385) = *(undefined *)(iVar2 + 0xa41);
  iVar2 = FUN_089df79c(iVar3,"fz_crystal02_Z1");
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0xfc | 2;
    *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0x1f | 0xa0;
    *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) & 0xfc | 2;
  }
  iVar2 = FUN_089df79c(iVar3,"fz_crystal02_break__BA_Z2");
  if (iVar2 == 0) {
    iVar2 = *(int *)(iVar3 + 0x350);
  }
  else {
    *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0xfc | 2;
    iVar2 = *(int *)(iVar3 + 0x350);
  }
  if (iVar2 != 0) {
    FUN_088598a8(&local_90,*(undefined4 *)(iVar3 + 0x350));
    local_80 = local_90;
    uStack_7c = uStack_8c;
    uStack_78 = uStack_88;
    uStack_74 = uStack_84;
    FUN_089e0460(iVar3,&local_80,0);
  }
  iVar2 = FUN_0889da6c();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar3 + 0x60) = 0x3d8f5c29;
    *(undefined4 *)(iVar3 + 100) = 0x3ca3d70a;
    *(undefined4 *)(iVar3 + 0x68) = 0x3e2e147b;
    *(undefined4 *)(iVar3 + 0x6c) = 0x3f800000;
    local_70 = 0x3ee66666;
    local_6c = 0x3ee66666;
    local_68 = 0x3f0ccccd;
    local_64 = 0x3f800000;
    *(undefined4 *)(iVar3 + 0x70) = 0x3ee66666;
    *(undefined4 *)(iVar3 + 0x74) = 0x3ee66666;
    *(undefined4 *)(iVar3 + 0x78) = 0x3f0ccccd;
    *(undefined4 *)(iVar3 + 0x7c) = 0x3f800000;
  }
  *(undefined4 *)(iVar3 + 0x6c) = 0;
  (**(code **)(*(int *)(iVar3 + 0x14) + 0x3c))(iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0x38));
  iVar2 = FUN_088b3134();
  if (((iVar2 == 1) && (iVar2 = FUN_089c9b48(5,DAT_08ac58c8), iVar2 != 0)) &&
     (*(char *)(iVar3 + 0x385) != '\0')) {
    uVar1 = FUN_0884b268();
    FUN_0884dcb0(0x44a28000,0x43480000,0x42200000,uVar1,iVar3,0,0,0);
  }
  return;
}

