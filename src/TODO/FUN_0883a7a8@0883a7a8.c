#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0883a7a8(undefined4 param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int aiStack_90 [24];
  int local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  memcpy_jak(aiStack_90,&DAT_08ab9fa0,0x60);
  local_30[0] = 0;
  local_30[1] = 4;
  local_30[2] = 1;
  local_30[3] = 2;
  local_20 = 3;
  local_1c = 5;
  local_18 = 0;
  if (param_4 != '\0') {
    param_3 = local_30[param_3];
  }
  iVar2 = aiStack_90[param_3 * 4 + 1];
  iVar1 = aiStack_90[param_3 * 4 + 2];
  *(float *)(param_2 + 0xb0) = (float)aiStack_90[param_3 * 4] * 0.00390625;
  *(float *)(param_2 + 0xb4) = (float)iVar2 * 0.00390625;
  *(float *)(param_2 + 0xb8) = (float)iVar1 * 0.00390625;
  *(undefined4 *)(param_2 + 0xbc) = 0x3f800000;
  FUN_089f4a90(0,(float)param_3,param_2);
  return;
}

