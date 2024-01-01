#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d97b0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 0x24);
  if (uVar1 == 0) {
    if (param_2 != 0) {
      (**(code **)(*(int *)(param_2 + 0x20) + 0xc))
                (param_2 + *(short *)(*(int *)(param_2 + 0x20) + 8),3);
    }
  }
  else {
    iVar2 = *(int *)(param_2 + 0x20);
    if (uVar1 < 2) {
      (**(code **)(iVar2 + 0xc))(param_2 + *(short *)(iVar2 + 8),2);
    }
    else {
      (**(code **)(iVar2 + 0xc))(param_2 + *(short *)(iVar2 + 8),2);
      if (uVar1 - 0x10 != 0) {
        FUN_089d8634();
        FUN_089d7fd8(uVar1 - 0x10,0,0);
        FUN_089d866c();
      }
    }
  }
  return;
}

