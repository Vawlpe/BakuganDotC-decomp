#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ff320(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x14) = param_1;
    (**(code **)(*(int *)(param_2 + 0xc) + 0x14))
              (param_2 + *(short *)(*(int *)(param_2 + 0xc) + 0x10));
    (**(code **)(*(int *)(param_2 + 0xc) + 0x14))
              (param_2 + *(short *)(*(int *)(param_2 + 0xc) + 0x10));
    (**(code **)(*(int *)(param_2 + 0xc) + 0x14))
              (param_2 + *(short *)(*(int *)(param_2 + 0xc) + 0x10));
  }
  return;
}

