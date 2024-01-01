#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08835b30(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x688) != 0) && (iVar1 = FUN_0882c548(param_1), iVar1 != 0)) {
    iVar1 = *(int *)(iVar1 + 0x580);
    if (*(int *)(param_1 + 0x908) != iVar1) {
      *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + (iVar1 - *(int *)(param_1 + 0x908));
      *(int *)(param_1 + 0x908) = iVar1;
    }
    FUN_08835254(param_1);
    if (*(float *)(param_1 + 0x8b8) == *(float *)(param_1 + 0x8b4)) {
      if (*(float *)(param_1 + 0x8c0) == *(float *)(param_1 + 0x8bc)) {
        return;
      }
      iVar1 = *(int *)(param_1 + 0x688);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x688);
    }
    *(float *)(iVar1 + 0x70) = *(float *)(param_1 + 0x8b4);
    *(undefined4 *)(*(int *)(param_1 + 0x68c) + 0x70) = *(undefined4 *)(param_1 + 0x8b4);
    *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_1 + 0x8b4);
    *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_1 + 0x8bc);
  }
  return;
}

