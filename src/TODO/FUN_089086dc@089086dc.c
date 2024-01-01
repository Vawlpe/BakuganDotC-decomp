#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089086dc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    param_1[1] = 0;
  }
  else {
    do {
      iVar2 = *(int *)(iVar1 + 4);
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      iVar1 = iVar2;
    } while (iVar2 != 0);
    param_1[1] = 0;
  }
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

