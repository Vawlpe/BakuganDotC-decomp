#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880a5f0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af1574;
    if (DAT_08aac9c8 != 0) {
      FUN_089d8634(param_1);
      FUN_089d7fd8(DAT_08aac9c8,0,0);
      FUN_089d866c();
      DAT_08aac9c8 = 0;
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

