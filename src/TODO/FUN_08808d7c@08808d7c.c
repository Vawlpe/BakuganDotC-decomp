#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08808d7c(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0xc) = &DAT_08af145c;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    DAT_08aac9b0 = 0;
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

