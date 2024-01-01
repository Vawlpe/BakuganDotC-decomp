#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d8334(int param_1)

{
  FUN_088d935c();
  FUN_088d82c0(param_1);
  if ((-1 < (int)*(uint *)(param_1 + 0x16c)) && (*(uint *)(param_1 + 0x16c) < 3)) {
    (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    FUN_089dfdb0(param_1);
  }
  return;
}

