#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08931bb8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a80);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1a84);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x1a80) = 0;
    *(undefined4 *)(param_1 + 0x1a80) = 0;
    iVar1 = *(int *)(param_1 + 0x1a84);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1af0);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x1a84) = 0;
    *(undefined4 *)(param_1 + 0x1a84) = 0;
    iVar1 = *(int *)(param_1 + 0x1af0);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x1af0) = 0;
    *(undefined4 *)(param_1 + 0x1af0) = 0;
  }
  return;
}

