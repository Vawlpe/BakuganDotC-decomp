#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08982bc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  
  memset_jak((undefined *)(param_1 + 0x74),0,0xa50);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x28);
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar5 = 0;
  iVar4 = param_1;
  do {
    *(uint *)(*(int *)(iVar2 + iVar5) + 0xd0) =
         *(uint *)(*(int *)(iVar2 + iVar5) + 0xd0) & 0xfffffffe;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar6 = uVar6 + 1;
    piVar3 = (int *)(iVar2 + iVar5);
    iVar5 = iVar5 + 4;
    *(undefined4 *)(iVar4 + 0xac4) = *(undefined4 *)(*piVar3 + 0x68);
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x41);
  uVar6 = 0;
  iVar4 = 0;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 4);
  uVar6 = 4;
  iVar4 = 0x10;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 5);
  local_40 = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = local_40;
  if (iVar2 != 0) {
    FUN_089f3aa8(iVar2);
    iVar4 = iVar2;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x104) = iVar4;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x104));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x104));
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x104);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  uVar6 = 0xd;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar5 = 0x34;
  iVar4 = param_1;
  do {
    iVar2 = *(int *)(iVar2 + iVar5);
    local_3c = *(undefined4 *)(iVar2 + 0x60);
    uVar7 = *(undefined4 *)(iVar2 + 100);
    uVar1 = FUN_089f7720("card_L_001");
    *(undefined4 *)(iVar2 + 0xd4) = uVar1;
    FUN_089f4924(0x43000000,0x43300000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    local_50 = 0;
    local_4c = 0;
    local_48 = 0x43000000;
    local_44 = 0x43300000;
    FUN_089f4060(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),&local_50);
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) = local_3c;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 100) = uVar7;
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    iVar2 = *(int *)(param_1 + 0x1c);
    piVar3 = (int *)(iVar2 + iVar5);
    uVar6 = uVar6 + 1;
    *(undefined4 *)(iVar4 + 0xc84) = *(undefined4 *)(*piVar3 + 0x60);
    iVar5 = iVar5 + 4;
    *(undefined4 *)(iVar4 + 0xc88) = *(undefined4 *)(*piVar3 + 100);
    iVar4 = iVar4 + 8;
  } while (uVar6 < 0x11);
  return;
}

