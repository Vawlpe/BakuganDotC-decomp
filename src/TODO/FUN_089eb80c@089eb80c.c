#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eb80c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af56e4;
    FUN_08816a50();
    FUN_089ebc7c();
    FUN_089eab80();
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

