#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880948c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af14cc;
    if (DAT_08aac9c0 != 0) {
      FUN_089d8634(param_1);
      FUN_089d7fd8(DAT_08aac9c0,0,0);
      FUN_089d866c();
      DAT_08aac9c0 = 0;
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

