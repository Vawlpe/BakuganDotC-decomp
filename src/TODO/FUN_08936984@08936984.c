#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08936984(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_089a5278();
  *(undefined4 *)(param_1 + 0xca8) = 0;
  if (*(char *)(param_1 + 0x74) == '\0') {
    FUN_089a535c(param_1 + 0x348);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0x128) = 2;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0xbc) = 0x3f800000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
    *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x38) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 100) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x38) + 100);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 0x68) =
         *(undefined4 *)(param_1 + 0xa20);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xec),param_1 + 0x9b0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    FUN_089a535c(param_1 + 0x690);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 0x128) = 2;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 0xbc) = 0x3f800000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x9c);
    *(undefined4 *)(iVar1 + 0xc0) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 0xc4) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 200) = 0x3e99999a;
    *(undefined4 *)(iVar1 + 0xcc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x9c) + 0x68) =
         *(undefined4 *)(param_1 + 0xa74);
    FUN_089a5794(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x9c),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xec),param_1 + 0x9b0);
  }
  iVar5 = 0x26;
  iVar4 = 0x98;
  iVar1 = param_1 + 0x98;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4);
    if (*(char *)(param_1 + 0x74) == '\0') {
      FUN_08934310(param_1,uVar2,0);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar3 + 0xc0) = 0;
      *(undefined4 *)(iVar3 + 0xc4) = 0;
      *(undefined4 *)(iVar3 + 200) = 0;
      *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
    }
    else {
      FUN_08934310(param_1,uVar2,1);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar3 + 0xc0) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0xc4) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 200) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0xcc) = 0x3f800000;
    }
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x27);
  iVar5 = 0x2f;
  iVar4 = 0xbc;
  iVar1 = param_1 + 0xbc;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x30);
  iVar5 = 0xe;
  iVar4 = 0x38;
  iVar1 = param_1 + 0x38;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x12);
  iVar5 = 0x2a;
  iVar4 = 0xa8;
  iVar1 = param_1 + 0xa8;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x2e);
  iVar5 = 0x22;
  iVar4 = 0x88;
  iVar1 = param_1 + 0x88;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x26);
  iVar5 = 0x32;
  iVar4 = 200;
  iVar1 = param_1 + 200;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x36);
  iVar5 = 0x18;
  iVar4 = 0x60;
  iVar1 = param_1 + 0x60;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x1c);
  iVar5 = 10;
  iVar4 = 0x28;
  iVar1 = param_1 + 0x28;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0xe);
  iVar5 = 0x14;
  iVar4 = 0x50;
  iVar1 = param_1 + 0x50;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    iVar5 = iVar5 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x68) =
         *(undefined4 *)(iVar1 + 0x9d8);
    iVar4 = iVar4 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar5 < 0x18);
  return;
}

