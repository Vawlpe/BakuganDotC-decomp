#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08940e18(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_08940d48(param_1,0,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af4c34;
  (*(code *)PTR_FUN_08af4c48)(param_1 + DAT_08af4c44,param_2,param_3);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}

