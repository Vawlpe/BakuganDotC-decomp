#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889cf44(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  
  local_1c = param_2[1];
  fVar2 = param_2[4] - local_1c;
  fVar1 = param_2[3] - *param_2;
  local_18 = param_2[2];
  local_20 = (*param_2 + param_2[3]) * 0.5;
  local_c = 0.5;
  local_14 = 0;
  local_10 = param_1;
  FUN_0889ce8c(fVar1,fVar2,param_1,&local_20);
  local_18 = param_2[5];
  local_14 = 0x40490fdb;
  FUN_0889ce8c(fVar1,fVar2,param_1,&local_20);
  local_20 = *param_2;
  fVar1 = param_2[5] - param_2[2];
  local_18 = (param_2[2] + param_2[5]) * local_c;
  local_14 = 0x3fc90fdb;
  FUN_0889ce8c(fVar1,fVar2,param_1,&local_20);
  local_20 = param_2[3];
  local_14 = 0xbfc90fdb;
  FUN_0889ce8c(fVar1,fVar2,param_1,&local_20);
  return;
}

