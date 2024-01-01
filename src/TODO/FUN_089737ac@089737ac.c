#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089737ac(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x51c);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x51c) = 0;
    *(undefined4 *)(param_1 + 0x51c) = 0;
  }
  return;
}

