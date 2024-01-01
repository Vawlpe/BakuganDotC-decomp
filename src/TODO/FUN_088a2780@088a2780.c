#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a2780(int param_1)

{
  int iVar1;
  
  FUN_088a1f90();
  iVar1 = *(int *)(param_1 + 0x32c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 800);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
    *(undefined4 *)(param_1 + 0x32c) = 0;
    iVar1 = *(int *)(param_1 + 800);
  }
  *(undefined *)(iVar1 + 0x680) = 0;
  return;
}

