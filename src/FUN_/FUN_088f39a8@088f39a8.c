#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_088f39a8(undefined4 *param_1,undefined4 param_2,undefined param_3,undefined param_4,
            undefined param_5)

{
  *param_1 = &DAT_08af437c;
  param_1[1] = param_2;
  *(undefined *)(param_1 + 2) = param_3;
  *(undefined *)((int)param_1 + 9) = 0;
  *(undefined *)((int)param_1 + 10) = param_4;
  *(undefined *)((int)param_1 + 0xb) = param_5;
  return param_1;
}

