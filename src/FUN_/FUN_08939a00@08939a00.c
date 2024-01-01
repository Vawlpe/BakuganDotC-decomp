#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08939a00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 8) + 100) =
       *(float *)(iVar1 + 100) - *(float *)(iVar1 + 0x94) * *(float *)(param_1 + 0x5f4);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x10) + 100) =
       *(float *)(iVar1 + 100) + *(float *)(iVar1 + 0x94) * *(float *)(param_1 + 0x5fc);
  return;
}

