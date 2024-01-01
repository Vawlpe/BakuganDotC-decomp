#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08957078(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_40[0] = 0;
  local_40[2] = 0;
  local_40[1] = 0xc2200000;
  local_40[3] = 0xc2200000;
  local_30 = 0;
  local_2c = 0xc2200000;
  local_28 = 0;
  local_24 = 0xc2200000;
  local_20 = 0;
  local_1c = 0xc2200000;
  param_3 = param_3 & 0xff;
  local_18 = 0;
  local_14 = 0xc2200000;
  if (*(char *)(param_2 + 0x4cda) < '\x03') {
    uVar1 = local_40[param_3 * 2 + 1];
    *param_1 = local_40[param_3 * 2];
    param_1[1] = uVar1;
    return;
  }
  uVar1 = local_40[param_3 * 2 + 5];
  *param_1 = local_40[param_3 * 2 + 4];
  param_1[1] = uVar1;
  return;
}

