#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088f6734(undefined4 *param_1,int param_2)

{
  FUN_088fc770();
  *param_1 = &DAT_08af43d4;
  param_1[0x20] = *(undefined4 *)(param_2 + 0x40);
  param_1[0x1c] = 1;
  return param_1;
}

