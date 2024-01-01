#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a24b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x328) == 0) {
    iVar1 = FUN_088243d8(DAT_08abd5b0,99,param_1 + 0x390);
    *(int *)(param_1 + 0x328) = iVar1;
    *(undefined4 *)(iVar1 + 0x1d0) = 0x3fd9999a;
    *(undefined4 *)(*(int *)(param_1 + 0x328) + 0xd8) = 7;
  }
  return;
}

