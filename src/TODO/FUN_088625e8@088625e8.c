#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088625e8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0x134) = param_2;
  }
  if (*(int *)(param_1 + 0x208) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x208) + 0x134) = param_2;
  }
  return;
}

