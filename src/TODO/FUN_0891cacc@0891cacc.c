#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891cacc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  memset_jak((undefined *)(param_1 + 0x7c),0,0x1d88);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x3c);
  uVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar5 = 0;
  iVar4 = param_1;
  do {
    *(uint *)(*(int *)(iVar2 + iVar5) + 0xd0) =
         *(uint *)(*(int *)(iVar2 + iVar5) + 0xd0) & 0xfffffffe;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    iVar2 = *(int *)(param_1 + 0x1c);
    uVar6 = uVar6 + 1;
    piVar3 = (int *)(iVar2 + iVar5);
    iVar5 = iVar5 + 4;
    *(undefined4 *)(iVar4 + 0x1e04) = *(undefined4 *)(*piVar3 + 0x68);
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0xbc);
  uVar6 = 0xb4;
  iVar4 = 0x2d0;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0xb6);
  uVar6 = 0xb7;
  iVar4 = 0x2dc;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0xb9);
  uVar6 = 0xb6;
  iVar4 = 0x2d8;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0xb7);
  uVar6 = 0x86;
  iVar4 = 0x218;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x8c);
  uVar6 = 0x8d;
  iVar4 = 0x234;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x93);
  uVar6 = 0x96;
  iVar4 = 600;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x9c);
  uVar6 = 0x8c;
  iVar4 = 0x230;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x8d);
  uVar6 = 0x70;
  iVar4 = 0x1c0;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x74);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar2 != 0) {
    FUN_089f3aa8(iVar2);
    iVar4 = iVar2;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x2f0) = iVar4;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2d8),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2f0));
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2f0);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  FUN_0891c638(param_1);
  FUN_0891c6d8(param_1);
  FUN_0891c820(param_1);
  FUN_0891ca14(param_1);
  FUN_0891ca48(param_1);
  return;
}

