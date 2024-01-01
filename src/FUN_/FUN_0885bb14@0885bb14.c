#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0885bb14(int param_1,undefined4 *param_2)

{
  undefined4 local_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined local_30 [4];
  float local_2c;
  
  local_40 = *param_2;
  fStack_3c = (float)param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  FUN_0885b894(0x428c0000,0x42480000,param_1,&local_40,0,5);
  *(undefined **)(param_1 + 0x14) = &DAT_08af5f10;
  FUN_0889d57c(param_1 + 0x20,local_30);
  local_2c = local_2c + 300.0;
  FUN_088a8f2c(&local_40,local_30,0x3fbf2100);
  *(float *)(param_1 + 0x24) = fStack_3c + 100.0;
  *(undefined4 *)(param_1 + 0x268) = 1;
  return param_1;
}

