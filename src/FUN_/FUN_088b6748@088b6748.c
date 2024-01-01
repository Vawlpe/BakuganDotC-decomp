#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b6748(int param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_08824658(DAT_08b00b98,0xffffffff,param_1 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_089de940(*(int *)(param_1 + 0x4c),0);
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return;
}

