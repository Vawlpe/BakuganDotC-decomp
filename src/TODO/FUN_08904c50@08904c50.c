#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08904c50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_089d8710(param_1,0);
  *(undefined **)(param_1 + 0x14) = &DAT_08af6fb8;
  memcpy_jak(param_1 + 0x18,param_2,0x10);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x18);
  uVar1 = FUN_08904bc0(param_1,*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  return param_1;
}

