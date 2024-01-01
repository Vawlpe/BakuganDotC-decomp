#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892b564(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1cf8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1cfc);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x1cf8) = 0;
    *(undefined4 *)(param_1 + 0x1cf8) = 0;
    iVar1 = *(int *)(param_1 + 0x1cfc);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x1cfc) = 0;
    *(undefined4 *)(param_1 + 0x1cfc) = 0;
  }
  return;
}

