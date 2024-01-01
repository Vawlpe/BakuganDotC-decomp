#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088efd08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined param_7,undefined param_8)

{
  undefined auStack_a0 [128];
  
  *(undefined4 *)(param_1 + 0x288) = param_4;
  FUN_088efb94();
  FUN_088efc94(param_1);
  FUN_089b4c84(auStack_a0,"cmd_f%d_%02d.cut",param_7,param_8);
  FUN_088ef0bc(param_1,param_6,0,auStack_a0);
  return;
}

