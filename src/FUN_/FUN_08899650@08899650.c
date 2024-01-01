#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08899650(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x188) = &DAT_08af21a4;
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

