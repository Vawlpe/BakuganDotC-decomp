#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893d980(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  memset_jak((undefined *)(param_1 + 0x78),0,0x6b8);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x3f);
  uVar5 = 0;
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  iVar4 = 0;
  iVar1 = param_1;
  do {
    *(uint *)(*(int *)((int)puVar2 + iVar4) + 0xd0) =
         *(uint *)(*(int *)((int)puVar2 + iVar4) + 0xd0) & 0xfffffffe;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0;
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    uVar5 = uVar5 + 1;
    piVar3 = (int *)((int)puVar2 + iVar4);
    iVar4 = iVar4 + 4;
    *(undefined4 *)(iVar1 + 0x730) = *(undefined4 *)(*piVar3 + 0x68);
    iVar1 = iVar1 + 4;
  } while (uVar5 < 0x2b);
  FUN_089f43d4(0x3f000000,*puVar2);
  FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x94));
  uVar5 = 0x14;
  iVar1 = 0x50;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    uVar5 = uVar5 + 1;
    iVar1 = iVar1 + 4;
  } while (uVar5 < 0x1e);
  uVar5 = 1;
  iVar1 = 4;
  do {
    FUN_089f43d4(0x3f000000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1));
    uVar5 = uVar5 + 1;
    iVar1 = iVar1 + 4;
  } while (uVar5 < 0xb);
  return;
}

