#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08854d44(int param_1)

{
  int iVar1;
  
  if ((DAT_08aba7a0 != 0) && (DAT_08aba7a4 != 0)) {
    iVar1 = FUN_089d774c(DAT_08aba7a4,param_1);
    if (iVar1 == 0) {
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 0x168) + 0xc))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x168) + 8),3);
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x168) + 0xc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x168) + 8),2);
    }
    iVar1 = FUN_08a29da4(DAT_08aba7a0,param_1);
    if (iVar1 != 0) {
      FUN_08a29cd4(DAT_08aba7a0);
    }
  }
  return;
}

