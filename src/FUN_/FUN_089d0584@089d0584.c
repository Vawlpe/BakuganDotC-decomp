#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d0584(int param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    FUN_089bb728(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xf4) = 0;
    FUN_089bb790(*(undefined4 *)(param_1 + 8));
  }
  else if (0 < param_3) {
    FUN_089bb728(*(undefined4 *)(param_1 + 8));
    memcpy_jak(*(undefined4 *)(param_1 + 0xf0),param_2,param_3);
    *(int *)(param_1 + 0xf4) = param_3;
    FUN_089bb790(*(undefined4 *)(param_1 + 8));
  }
  return;
}

