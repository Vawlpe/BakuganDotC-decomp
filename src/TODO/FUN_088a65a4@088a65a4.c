#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a65a4(int param_1,undefined4 param_2)

{
  FUN_088ab2d0();
  *(undefined **)(param_1 + 0x14) = &DAT_08af2714;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0;
  *(undefined *)(param_1 + 0xbc) = 1;
  *(undefined *)(param_1 + 0x330) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x328) = param_2;
  return param_1;
}

