#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08904e5c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
    iVar1 = iVar2;
  }
  return;
}

