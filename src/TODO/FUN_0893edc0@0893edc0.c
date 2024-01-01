#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893edc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x7f8) = 0;
  if (*(char *)(param_1 + 0x74) == '\0') {
    memset_jak((undefined *)(param_1 + 0x78),0,0x28);
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) = *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 1;
    FUN_089f46dc(**(undefined4 **)(param_1 + 0x1c));
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
         *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 0x20;
    FUN_089a51fc(0x3f800000,0x3f800000,0,**(undefined4 **)(param_1 + 0x1c));
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) = 0x3f800000;
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x60) =
         *(undefined4 *)((*(int **)(param_1 + 0x1c))[*(char *)(param_1 + 0x75) + 1] + 0x60);
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 100) =
         *(undefined4 *)((*(int **)(param_1 + 0x1c))[*(char *)(param_1 + 0x75) + 1] + 100);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
  }
  else {
    memset_jak((undefined *)(param_1 + 0x640),0,0x28);
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x94));
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x94));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x94) + 0xbc) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x94) + 0x60) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x2c) + 0x60);
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x94) + 100) =
         *(undefined4 *)
          (*(int *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x76) * 4 + 0x2c) + 100);
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
         *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) & 0xfffffffe;
  }
  iVar3 = 1;
  iVar2 = 4;
  iVar1 = param_1 + 4;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(iVar1 + 0x730);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 0xb);
  iVar3 = 0x14;
  iVar2 = 0x50;
  iVar1 = param_1 + 0x50;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(iVar1 + 0x730);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 0x1e);
  iVar3 = 0xb;
  iVar2 = 0x2c;
  iVar1 = param_1 + 0x2c;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(iVar1 + 0x730);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 0xd);
  iVar3 = 0x20;
  iVar2 = 0x80;
  iVar1 = param_1 + 0x80;
  do {
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    iVar3 = iVar3 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) =
         *(undefined4 *)(iVar1 + 0x730);
    iVar2 = iVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 0x22);
  return;
}

