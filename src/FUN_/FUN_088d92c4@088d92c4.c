#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d92c4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af3314;
    *(undefined **)(param_1 + 0x160) = &DAT_08af33b4;
    if (param_1 != -0x140) {
      *(undefined **)(param_1 + 0x160) = &DAT_08af6e10;
    }
    FUN_089de34c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

