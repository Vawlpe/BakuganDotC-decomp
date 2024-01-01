#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e5c90(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af3b74;
    if (*(int *)(param_1 + 0x418) != 0) {
      FUN_088e9a64(*(int *)(param_1 + 0x418),3);
      *(undefined4 *)(param_1 + 0x418) = 0;
    }
    FUN_088e5bec(param_1,0xffffffff,1,1);
    FUN_088dca30(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

