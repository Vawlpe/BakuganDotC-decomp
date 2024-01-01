#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08973db8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  memset_jak(param_1 + 0x74,0,0x410);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x20);
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
    *(undefined4 *)(iVar4 + 0x484) = *(undefined4 *)(*piVar3 + 0x68);
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x19);
  FUN_089f43d4(0x3f000000,*(undefined4 *)(iVar2 + 0x48));
  FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x4c));
  uVar6 = 3;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar2 = 0xc;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(iVar4 + iVar2));
    uVar6 = uVar6 + 1;
    iVar2 = iVar2 + 4;
    iVar4 = *(int *)(param_1 + 0x1c);
  } while (uVar6 < 9);
  uVar6 = 0xd;
  piVar3 = (int *)(iVar4 + 0x34);
  iVar4 = param_1;
  do {
    iVar2 = *piVar3;
    uVar6 = uVar6 + 1;
    piVar3 = piVar3 + 1;
    *(undefined4 *)(iVar4 + 0x4ec) = *(undefined4 *)(iVar2 + 0x60);
    iVar4 = iVar4 + 4;
  } while (uVar6 < 0x12);
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
  *(int *)(*(int *)(param_1 + 0x1c) + 100) = iVar4;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 100));
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 100);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  return;
}

