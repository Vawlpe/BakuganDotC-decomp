#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined * FUN_088f4cdc(undefined *param_1,undefined param_2)

{
  *(undefined **)(param_1 + 0x14) = &DAT_08af43b4;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  memset_jak(param_1,0,0xc);
  memset_jak(param_1 + 0xc,0,6);
  return param_1;
}
