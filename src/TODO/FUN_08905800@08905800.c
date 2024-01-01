#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08905800(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af46a4;
    FUN_089d8928(param_1 + 0x60);
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_08904f78();
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_08905138(*(int *)(param_1 + 0x10),3);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

