#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2c054(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af6db0;
    FUN_089d87bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

