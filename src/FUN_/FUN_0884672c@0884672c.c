#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884672c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af1834;
    *(undefined4 *)(DAT_08ac58c4 + 0x2c) = 0;
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

