#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08909df4(undefined4 param_1,int param_2)

{
  uint local_30 [4];
  uint local_20 [4];
  
  local_30[0] = 0x20;
  local_30[1] = 0x10;
  local_30[2] = 10;
  local_30[3] = 8;
  local_20[0] = 4;
  local_20[1] = 2;
  *(int *)(DAT_08ac5934 + 0x1c) = param_2;
  local_20[2] = 1;
  local_20[3] = 1;
  FUN_089ce1a4(DAT_08ac5928,local_30[param_2] & 0xffff);
  FUN_089ce1b4(DAT_08ac5928,local_20[param_2] & 0xffff);
  return;
}

