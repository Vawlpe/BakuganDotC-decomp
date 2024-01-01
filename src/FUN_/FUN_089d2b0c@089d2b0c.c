#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d2b0c(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_089bb668(*param_1,3);
      *param_1 = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

