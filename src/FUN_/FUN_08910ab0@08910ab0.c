#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08910ab0(int param_1)

{
  int iVar1;
  
  *(float *)(*(int *)(param_1 + 0x18) + 0x70) = *(float *)(*(int *)(param_1 + 0x18) + 0x70) - 0.2;
  *(float *)(param_1 + 0x148) = *(float *)(param_1 + 0x148) * 1.1;
  iVar1 = *(int *)(param_1 + 0x168);
  *(int *)(param_1 + 0x168) = iVar1 + 1;
  if (5 < iVar1) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x70) = 0;
    FUN_089bf6e8(0xbba,100);
    *(undefined4 *)(param_1 + 0x28) = 6;
  }
  return;
}

