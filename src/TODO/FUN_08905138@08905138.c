#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08905138(int param_1,uint param_2)

{
  if (param_1 != 0) {
    FUN_08904f78(param_1);
    FUN_08908588(param_1 + 0x1ac,2);
    FUN_08904cd0(param_1 + 0x1a0,2);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

