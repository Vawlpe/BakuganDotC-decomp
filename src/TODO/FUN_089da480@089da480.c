#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089da480(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x20) = &DAT_08af53c4;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    *(undefined **)(param_1 + 0x20) = &DAT_08af6fe8;
    FUN_089d8bf0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

