#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_088f28b4(undefined4 *param_1,undefined param_2,undefined4 param_3,undefined param_4,
            undefined param_5)

{
  *param_1 = &DAT_08af42d4;
  param_1[1] = param_3;
  *(undefined *)(param_1 + 2) = param_4;
  *(undefined *)((int)param_1 + 9) = 0;
  *(undefined *)((int)param_1 + 10) = param_5;
  *(undefined *)((int)param_1 + 0xb) = param_2;
  return param_1;
}

