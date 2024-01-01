#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089be598(int param_1,undefined4 param_2,undefined4 param_3,undefined param_4)

{
  undefined4 uVar1;
  
  memset_jak(param_1 + 0x29,0,0xfee);
  *(undefined4 *)(param_1 + 8) = 0xfee;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = FUN_089be500(param_2);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined *)(param_1 + 0x28) = param_4;
  return;
}

