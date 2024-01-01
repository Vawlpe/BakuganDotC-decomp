#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a5d0c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af2674;
    FUN_088246f4(DAT_08abd5b0,0xffffffff,param_1);
    FUN_088ab4c8(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

