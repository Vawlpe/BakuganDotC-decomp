#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893466c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = *(int *)(param_1 + 0x1c) + iVar1;
    iVar4 = *(int *)(iVar3 + 0x38);
    *(float *)(*(int *)(iVar3 + 0x88) + 100) =
         *(float *)(iVar4 + 100) + *(float *)(param_1 + 0x1a58) * *(float *)(iVar4 + 0x94);
    iVar3 = *(int *)(param_1 + 0x1c) + iVar1;
    iVar4 = *(int *)(iVar3 + 0x38);
    *(float *)(*(int *)(iVar3 + 200) + 100) =
         *(float *)(iVar4 + 100) + *(float *)(param_1 + 0x1a5c) * *(float *)(iVar4 + 0x94);
    iVar3 = *(int *)(param_1 + 0x1c) + iVar1;
    iVar4 = *(int *)(iVar3 + 0x38);
    iVar2 = iVar2 + 1;
    *(float *)(*(int *)(iVar3 + 0x50) + 100) =
         *(float *)(iVar4 + 100) + *(float *)(param_1 + 0x1a60) * *(float *)(iVar4 + 0x94);
    iVar3 = *(int *)(param_1 + 0x1c) + iVar1;
    iVar4 = *(int *)(iVar3 + 0x38);
    iVar1 = iVar1 + 4;
    *(float *)(*(int *)(iVar3 + 0x60) + 100) =
         *(float *)(iVar4 + 100) + *(float *)(param_1 + 0x1a64) * *(float *)(iVar4 + 0x94);
  } while (iVar2 < 4);
  return;
}

