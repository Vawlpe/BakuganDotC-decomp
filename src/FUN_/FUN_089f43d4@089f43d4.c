#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f43d4(float param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((-1 < *(int *)(param_2 + 0xe4)) && (*(int *)(param_2 + 0xe4) < 2)) {
    bVar1 = true;
  }
  if (!bVar1) {
    *(float *)(*(int *)(param_2 + 0x120) + 0x18) =
         *(float *)(*(int *)(param_2 + 0x120) + 0x18) +
         param_1 * *(float *)(*(int *)(param_2 + 0xd4) + 0xa4);
    **(undefined4 **)(param_2 + 0x120) = (*(undefined4 **)(param_2 + 0x120))[6];
    *(float *)(*(int *)(param_2 + 0x120) + 0x24) =
         *(float *)(*(int *)(param_2 + 0x120) + 0x24) -
         param_1 * *(float *)(*(int *)(param_2 + 0xd4) + 0xa4);
    *(undefined4 *)(*(int *)(param_2 + 0x120) + 0xc) =
         *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x24);
    *(float *)(*(int *)(param_2 + 0x120) + 0x10) =
         *(float *)(*(int *)(param_2 + 0x120) + 0x10) +
         param_1 * *(float *)(*(int *)(param_2 + 0xd4) + 0xa8);
    *(undefined4 *)(*(int *)(param_2 + 0x120) + 4) =
         *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x10);
    *(float *)(*(int *)(param_2 + 0x120) + 0x28) =
         *(float *)(*(int *)(param_2 + 0x120) + 0x28) -
         param_1 * *(float *)(*(int *)(param_2 + 0xd4) + 0xa8);
    *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x1c) =
         *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x28);
  }
  return;
}

