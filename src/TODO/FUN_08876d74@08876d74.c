#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08876d74(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af2164;
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x214));
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x214));
    }
    FUN_089d87bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

