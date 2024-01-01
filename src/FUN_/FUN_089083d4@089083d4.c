#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089083d4(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    while (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 4);
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      iVar1 = iVar2;
    }
    if (param_2 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(param_2,0,0);
      FUN_089d866c();
    }
  }
  return;
}

