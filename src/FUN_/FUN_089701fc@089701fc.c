#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089701fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  memset_jak(param_1 + 0x78,0,0x938);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x3a);
  uVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar5 = 0;
  iVar2 = param_1;
  do {
    *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) =
         *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) & 0xfffffffe;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0;
    iVar3 = *(int *)(param_1 + 0x1c);
    piVar4 = (int *)(iVar3 + iVar5);
    uVar6 = uVar6 + 1;
    *(undefined4 *)(iVar2 + 0x9b0) = *(undefined4 *)(*piVar4 + 0x68);
    iVar5 = iVar5 + 4;
    *(undefined4 *)(iVar2 + 0xa9c) = *(undefined4 *)(*piVar4 + 100);
    iVar2 = iVar2 + 4;
  } while (uVar6 < 0x3a);
  uVar6 = 0x30;
  iVar2 = 0xc0;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    uVar6 = uVar6 + 1;
    iVar2 = iVar2 + 4;
  } while (uVar6 < 0x35);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar2 = 0;
  if (iVar3 != 0) {
    FUN_089f3aa8(iVar3);
    iVar2 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0xe8) = iVar2;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe8));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xd0),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xe8));
  iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0xe8);
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  return;
}

