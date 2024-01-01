#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08930d7c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1cb8) != '\0') {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18);
    if (*(char *)(param_1 + 0x1cb9) == '\0') {
      cVar1 = FUN_089a91a0(0x3f99999a,0x3f800000,0x41800000,0,uVar2,param_1 + 0x168,7);
      *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) =
           *(undefined4 *)((*(int **)(param_1 + 0x1c))[6] + 0xbc);
      iVar3 = (*(int **)(param_1 + 0x1c))[6];
      *(float *)(**(int **)(param_1 + 0x1c) + 0x60) =
           *(float *)(iVar3 + 0x60) + *(float *)(param_1 + 0x1cc0) * *(float *)(iVar3 + 0x90);
      iVar3 = (*(int **)(param_1 + 0x1c))[6];
      *(float *)(**(int **)(param_1 + 0x1c) + 100) =
           *(float *)(iVar3 + 100) + *(float *)(param_1 + 0x1cc4) * *(float *)(iVar3 + 0x94);
      iVar3 = (*(undefined4 **)(param_1 + 0x1c))[6];
      FUN_089a51fc(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),0,
                   **(undefined4 **)(param_1 + 0x1c));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0xbc) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0x60) =
           *(float *)(iVar3 + 0x60) + *(float *)(param_1 + 0x1cc8) * *(float *)(iVar3 + 0x90);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 100) =
           *(float *)(iVar3 + 100) + *(float *)(param_1 + 0x1ccc) * *(float *)(iVar3 + 0x94);
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      FUN_089a51fc(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c));
    }
    else {
      cVar1 = FUN_089a91a0(0x3f99999a,0x3f800000,0x41800000,*(char *)(param_1 + 0x1cb9),uVar2,
                           param_1 + 0x168,1);
      *(undefined4 *)(**(int **)(param_1 + 0x1c) + 0xbc) =
           *(undefined4 *)((*(int **)(param_1 + 0x1c))[6] + 0xbc);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x1c) + 0xbc) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0xbc);
    }
    if (cVar1 != '\0') {
      *(undefined *)(param_1 + 0x1cb8) = 0;
    }
  }
  return;
}

