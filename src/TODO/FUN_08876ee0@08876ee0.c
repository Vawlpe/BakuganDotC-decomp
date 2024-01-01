#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08876ee0(int param_1)

{
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0xf4);
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x214));
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_089f5124(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x214));
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  return;
}

