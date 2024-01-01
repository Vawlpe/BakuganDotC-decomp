#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a0efb8(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  int local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = param_1;
  local_1c = param_2;
  FUN_08a0f3cc(&local_20,&local_40);
  FUN_08a0f0fc(local_40,local_3c,local_38,
               (uint)((local_30 & 0x3fffffff) != 0) | local_30 >> 0x1e | local_2c << 2);
  return;
}

