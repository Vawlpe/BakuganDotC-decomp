#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888d0bc(int param_1)

{
  int iVar1;
  
  FUN_0888d008();
  iVar1 = *(int *)(param_1 + *(int *)(param_1 + 0x91c) * 4 + 0x920);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x48) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x48) + 8));
  }
  *(undefined4 *)(param_1 + 0x91c) = 4;
  return;
}

