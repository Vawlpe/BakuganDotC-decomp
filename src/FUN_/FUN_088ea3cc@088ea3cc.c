#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088ea3cc(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x1000;
  param_1[2] = 0x1000;
  param_1[3] = 0x1000;
  *(undefined *)(param_1 + 4) = 0;
  return param_1;
}

