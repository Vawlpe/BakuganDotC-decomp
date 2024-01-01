#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a3c8c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x6a0);
  iVar2 = 0;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    *(undefined4 *)(param_1 + 0x6a0) = 0;
    *(undefined4 *)(param_1 + 0x6a0) = 0;
    iVar2 = 0;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x68c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 0x68c) = 0;
      *(undefined4 *)(param_1 + 0x68c) = 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 5);
  return;
}

