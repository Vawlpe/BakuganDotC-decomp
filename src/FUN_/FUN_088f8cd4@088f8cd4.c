#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f8cd4(undefined4 *param_1,uint param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &DAT_08af6e98;
    FUN_088fc3ac(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

