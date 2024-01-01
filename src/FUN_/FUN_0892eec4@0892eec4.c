#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892eec4(int param_1,undefined param_2,undefined param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  memset_jak(param_1 + 0x1cb8,0,4);
  *(undefined *)(param_1 + 0x1cb9) = param_3;
  *(undefined *)(param_1 + 0x1cb8) = param_2;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18);
  if (*(char *)(param_1 + 0x1cb9) == '\0') {
    FUN_0892c8e0(uVar1,*(undefined *)(param_1 + *(char *)(param_1 + 0x75) * 0xc + 0x1ba4));
    FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18));
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc) = 0;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x128) = 2;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x60) =
         *(float *)(param_1 + 0x1784) - 32.0;
    FUN_089a54cc(0x3f99999a,0,param_3,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),
                 param_1 + 0x168,7);
    FUN_0892c8a0(**(undefined4 **)(param_1 + 0x1c),
                 *(undefined *)(param_1 + *(char *)(param_1 + 0x75) * 0xc + 0x1ba4));
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) = *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 1;
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0x128) = 2;
    *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) =
         *(undefined4 *)((*(int **)(param_1 + 0x1c))[6] + 0xbc);
    iVar2 = (*(int **)(param_1 + 0x1c))[6];
    *(float *)(**(int **)(param_1 + 0x1c) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(param_1 + 0x1cc0) * *(float *)(iVar2 + 0x90);
    iVar2 = (*(int **)(param_1 + 0x1c))[6];
    *(float *)(**(int **)(param_1 + 0x1c) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(param_1 + 0x1cc4) * *(float *)(iVar2 + 0x94);
    *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) =
         *(uint *)(**(int **)(param_1 + 0x1c) + 0xd0) | 0x20;
    iVar2 = (*(undefined4 **)(param_1 + 0x1c))[6];
    FUN_089a51fc(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),0,
                 **(undefined4 **)(param_1 + 0x1c));
    FUN_0892c920(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c),
                 *(undefined *)(param_1 + *(char *)(param_1 + 0x75) * 0xc + 0x1ba4));
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x128) = 2;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0xbc) =
         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x60) =
         *(float *)(iVar2 + 0x60) + *(float *)(param_1 + 0x1cc8) * *(float *)(iVar2 + 0x90);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 100) =
         *(float *)(iVar2 + 100) + *(float *)(param_1 + 0x1ccc) * *(float *)(iVar2 + 0x94);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x1c);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
    FUN_089a51fc(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),0,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c));
  }
  else {
    FUN_089a5408(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90),param_3,uVar1,
                 param_1 + 0x168,1);
  }
  return;
}

