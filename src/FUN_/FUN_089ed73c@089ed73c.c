#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ed73c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x28) = &DAT_08af5734;
    FUN_089ed358(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

