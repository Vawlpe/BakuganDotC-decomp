#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881a3f0(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x20) = &DAT_08af1684;
    FUN_089e520c(param_1 + 0x30,2);
    FUN_089d8bf0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}
