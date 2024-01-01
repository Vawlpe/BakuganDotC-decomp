#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882c394(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x46c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  FUN_089d7a58(*(undefined4 *)(param_1 + 0x468));
  iVar1 = *(int *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x468) = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x4c8) = 0;
  }
  FUN_089d7a58(*(undefined4 *)(param_1 + 0x4c4));
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  return;
}

