#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fdad0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x2c) = &DAT_08af45cc;
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}
