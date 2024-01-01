#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08876d00(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_089d8710(param_1,0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af2164;
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  FUN_08876be8(param_1,param_3);
  FUN_089d8984(param_1,&DAT_08b00870);
  return param_1;
}

