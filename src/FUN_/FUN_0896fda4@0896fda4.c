#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896fda4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xbbc);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0xbbc) = 0;
  }
  return;
}

