#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e1d44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x4d0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x418);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    iVar1 = *(int *)(param_1 + 0x418);
  }
  *(undefined *)(param_1 + 0x4a8) = 0;
  if (iVar1 != 0) {
    FUN_088b8838();
  }
  if (*(int *)(param_1 + 0x4a4) != 0) {
    FUN_088b7808(*(int *)(param_1 + 0x4a4),0);
  }
  *(undefined *)(param_1 + 0x4aa) = 0;
  return;
}

