#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b38fc(undefined4 param_1,int param_2,float *param_3,float *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  local_2c = param_4[1];
  local_28 = param_4[2];
  local_c = *param_3 - *param_4;
  local_30 = (*param_4 + *param_3) * 0.5;
  local_24 = 0;
  local_10 = 0;
  local_8 = param_3[1] - local_2c;
  local_14 = param_2;
  do {
    local_20 = param_2;
    local_1c = param_5;
    local_18 = param_1;
    uVar1 = FUN_088b3888(local_c,local_8,param_1,param_2,&local_30,param_5);
    *(undefined4 *)(local_14 + 0x20) = uVar1;
    local_10 = local_10 + 1;
    local_14 = local_14 + 4;
    param_2 = local_20;
    param_5 = local_1c;
    param_1 = local_18;
  } while (local_10 < 2);
  return;
}

