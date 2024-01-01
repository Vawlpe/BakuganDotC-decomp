#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885bcf4(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af1c94;
    if (*(int *)(param_1 + 0x6cc) != 0) {
      FUN_0888ccac(*(int *)(param_1 + 0x6cc),3);
      *(undefined4 *)(param_1 + 0x6cc) = 0;
    }
    FUN_08899a48(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

