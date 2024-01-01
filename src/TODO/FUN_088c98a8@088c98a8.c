#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c98a8(int param_1)

{
  FUN_088c983c(param_1,1);
  if (*(int *)(param_1 + 0x130) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x130) + 0x16c) = 2;
  }
  if (*(int *)(param_1 + 300) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 300) + 0x16c) = 0;
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x16c) = 3;
  }
  *(undefined *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x48) = 4;
  return;
}

