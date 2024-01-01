#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ebf10(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0x1f];
    if (iVar1 == 0) {
      iVar1 = param_1[0x1d];
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x28) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x28) + 8),3);
      param_1[0x1f] = 0;
      iVar1 = param_1[0x1d];
    }
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      FUN_089eafac(iVar1,3);
      param_1[0x1d] = 0;
      iVar1 = *param_1;
    }
    if (iVar1 == 0) {
      iVar1 = param_1[6];
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *param_1 = 0;
      iVar1 = param_1[6];
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[6] = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

