#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891c638(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(float *)(param_1 + 0x217c) =
       *(float *)(*(int *)(iVar1 + 0xd4) + 0x60) - *(float *)(*(int *)(iVar1 + 0xdc) + 0x60);
  *(float *)(param_1 + 0x2180) =
       (*(float *)(*(int *)(iVar1 + 0xd4) + 100) - *(float *)(*(int *)(iVar1 + 0xdc) + 100)) - 2.0;
  *(float *)(param_1 + 0x2184) =
       *(float *)(*(int *)(iVar1 + 0xd4) + 0x60) - *(float *)(*(int *)(iVar1 + 0xd8) + 0x60);
  *(float *)(param_1 + 0x2188) =
       (*(float *)(*(int *)(iVar1 + 0xd4) + 100) - *(float *)(*(int *)(iVar1 + 0xd8) + 100)) - 1.0;
  return;
}

