#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08917928(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x914);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x918);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x914) = 0;
    *(undefined4 *)(param_1 + 0x914) = 0;
    iVar1 = *(int *)(param_1 + 0x918);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x918) = 0;
    *(undefined4 *)(param_1 + 0x918) = 0;
  }
  return;
}

