#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889b534(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    if (iVar1 == 0) {
      iVar1 = param_2[1];
    }
    else {
      (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),3);
      *param_2 = 0;
      iVar1 = param_2[1];
    }
    if (iVar1 == 0) {
      iVar1 = param_2[2];
    }
    else {
      (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),3);
      param_2[1] = 0;
      iVar1 = param_2[2];
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 4) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),3);
      param_2[2] = 0;
    }
  }
  return;
}

