#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df430(int param_1)

{
  FUN_088e05dc(param_1,0,0);
  FUN_088df254(param_1,0);
  if (*(int *)(param_1 + 0x164) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x164) + 0xc) = 0;
  }
  if (*(int *)(param_1 + 0x35c) != 0) {
    FUN_088e05dc(param_1,9,0);
  }
  return;
}

