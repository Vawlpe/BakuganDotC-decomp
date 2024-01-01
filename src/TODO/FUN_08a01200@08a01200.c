#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a01200(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x10) = &DAT_08af5a14;
    if (DAT_08ac6230 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ac6230,0,0);
      FUN_089d866c();
      DAT_08ac6230 = 0;
    }
    FUN_089bfac4(0);
    FUN_089cbce8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

