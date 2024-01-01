#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885bbe0(int param_1,undefined4 *param_2,undefined param_3)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  FUN_0885b894(param_1,&local_20,param_3);
  *(undefined **)(param_1 + 0x14) = &DAT_08af6098;
  *(undefined4 *)(param_1 + 0x268) = 2;
  *(undefined4 *)(param_1 + 8) = 0x22;
  *(undefined *)(param_1 + 0x680) = 0;
  return param_1;
}

