#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fed58(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xa8) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0xd4) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xac) + 0xd8) = param_3;
  FUN_089ff4f4();
  return;
}

