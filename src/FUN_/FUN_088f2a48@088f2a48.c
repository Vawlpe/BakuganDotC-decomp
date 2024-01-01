#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_088f2a48(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined param_4)

{
  *param_1 = &DAT_08af430c;
  param_1[1] = param_2;
  *(undefined2 *)(param_1 + 2) = param_3;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined *)(param_1 + 3) = param_4;
  return param_1;
}

