#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089569d4(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  DAT_08ac3410 = 0;
  if (DAT_08ac0e78 == 0x19a) {
    uVar3 = FUN_0880cc48();
    FUN_0880cd9c(uVar3,3,0xffffffff);
    uVar3 = FUN_0880cc48();
    FUN_0880cd9c(uVar3,4,0xffffffff);
    uVar3 = FUN_0880cc48();
    FUN_0880cd9c(uVar3,5,0xffffffff);
    uVar3 = FUN_0880cc48();
    FUN_0880cd9c(uVar3,6,0xffffffff);
    iVar4 = FUN_0880d354();
    if (iVar4 != 0) {
      uVar3 = FUN_0880cc48();
      FUN_0880cd9c(uVar3,3,0);
      uVar3 = FUN_0880cc48();
      FUN_0880cd9c(uVar3,4,0);
    }
    uVar9 = 0;
    iVar4 = 0;
    iVar8 = 0;
    do {
      uVar7 = 0;
      iVar6 = 0;
      do {
        iVar5 = FUN_0880cc48();
        if (*(int *)(iVar5 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 4) + iVar4 + iVar6 + 0xf8) = 0xff;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar7 < 2);
      uVar7 = 0;
      iVar6 = 0;
      do {
        iVar5 = FUN_0880cc48();
        if (*(int *)(iVar5 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 4) + iVar4 + iVar6 + 0xd8) = 0xff;
        }
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 4;
      } while (uVar7 < 2);
      iVar6 = FUN_0880cc48();
      if (*(int *)(iVar6 + 4) != 0) {
        *(undefined4 *)(*(int *)(iVar6 + 4) + iVar8 + 0x118) = 100;
      }
      uVar9 = uVar9 + 1;
      iVar4 = iVar4 + 8;
      iVar8 = iVar8 + 4;
    } while (uVar9 < 4);
  }
  uVar3 = FUN_0880cc48();
  uVar2 = FUN_0880d0ac(uVar3,0x16);
  *(undefined *)(param_1 + 0x4cda) = uVar2;
  uVar9 = 0;
  do {
    uVar3 = FUN_0880cc48();
    uVar2 = FUN_0880d0ac(uVar3,uVar9 + 3);
    iVar4 = param_1 + uVar9;
    uVar9 = uVar9 + 1;
    *(undefined *)(iVar4 + 0x4cdd) = uVar2;
  } while (uVar9 < 4);
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined *)(param_1 + 0x75) = 0;
  *(undefined *)(param_1 + 0x4cdb) = 0;
  *(undefined *)(param_1 + 0x4cdc) = 0;
  iVar4 = FUN_0880d354();
  if (iVar4 == 0) {
    uVar9 = 0;
    do {
      cVar1 = *(char *)(param_1 + uVar9 + 0x4cdd);
      if (cVar1 == -1) break;
      uVar2 = FUN_0895647c(param_1,1,cVar1);
      *(char *)(param_1 + 0x4cdb) = (char)uVar9;
      uVar9 = uVar9 + 1;
      *(undefined *)(param_1 + 0x74) = uVar2;
    } while (uVar9 < 4);
    *(char *)(param_1 + 0x4cdc) = (char)uVar9;
  }
  else {
    *(char *)(param_1 + 0x4cdc) = (char)uVar9;
  }
  uVar9 = 0;
  iVar4 = param_1;
  do {
    *(undefined4 *)(iVar4 + 0x4ce4) = 0xbf800000;
    *(undefined4 *)(iVar4 + 0x4ce8) = 0xbf800000;
    uVar9 = uVar9 + 1;
    iVar4 = iVar4 + 8;
  } while (uVar9 < 4);
  memset_jak(param_1 + 0x4d08,0,0x10);
  memset_jak(param_1 + 0x4d18,0,0x10);
  memset_jak(param_1 + 0x4d28,0,4);
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x550,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = FUN_08a02cb4(iVar4 + DAT_08af1178,2,0x2a0,FUN_089e2910,0);
    }
    *(undefined4 *)(param_1 + 0x4d28) = uVar3;
  }
  else {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0xa90,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    uVar3 = 0;
    if (iVar4 != 0) {
      uVar3 = FUN_08a02cb4(iVar4 + DAT_08af1178,4,0x2a0,FUN_089e2910,0);
    }
    *(undefined4 *)(param_1 + 0x4d28) = uVar3;
  }
  memset_jak(param_1 + 0x4f34,0,0x30);
  memset_jak(param_1 + 0x4f74,0,4);
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    uVar2 = 2;
    iVar4 = FUN_0880d354();
    if (iVar4 != 0) {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0x4f75) = uVar2;
  }
  else {
    iVar4 = FUN_0880d354();
    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0x4f75) = 2;
      *(undefined *)(param_1 + 0x4f76) = 3;
      *(undefined *)(param_1 + 0x4f77) = 4;
    }
    else {
      *(undefined *)(param_1 + 0x4f75) = 1;
      *(undefined *)(param_1 + 0x4f76) = 5;
      *(undefined *)(param_1 + 0x4f77) = 6;
    }
  }
  if (DAT_08ac0e78 == 0x136) {
    *(undefined *)(param_1 + 0x4f80) = 1;
  }
  else {
    *(undefined *)(param_1 + 0x4f80) = 0;
  }
  memset_jak(param_1 + 0x4f84,0,0xc);
  *(undefined4 *)(param_1 + 0x4f8c) = 0x3f800000;
  memset_jak(param_1 + 0x4fb0,0,4);
  if (DAT_08ac0e78 == 300) {
    FUN_089564e4();
  }
  FUN_08956598(param_1);
  return;
}

