#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fe558(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af591c;
    FUN_089fd80c();
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

