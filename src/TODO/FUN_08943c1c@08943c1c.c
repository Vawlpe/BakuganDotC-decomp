#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08943c1c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af4c9c;
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_089eafac(*(int *)(param_1 + 0x20),3);
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

