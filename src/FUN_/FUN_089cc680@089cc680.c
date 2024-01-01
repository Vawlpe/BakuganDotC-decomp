#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cc680(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_08af52f4;
    iVar1 = *(int *)(DAT_08ac5908 + 0x5d4);
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(DAT_08ac5908 + 0x5d4) = 0;
    }
    if (DAT_08ac5908 != 0) {
      FUN_089d8634(param_1);
      FUN_089d7fd8(DAT_08ac5908,0,0);
      FUN_089d866c();
      DAT_08ac5908 = 0;
    }
    FUN_089cbce8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

