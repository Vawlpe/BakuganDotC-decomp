#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088652c8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_2 + 0x5fc) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x600) = 0x3f000000;
  *(undefined4 *)(param_2 + 0x604) = *param_3;
  *(undefined4 *)(param_2 + 0x608) = param_3[2];
  *(undefined4 *)(param_2 + 0x60c) = param_1;
  return;
}

