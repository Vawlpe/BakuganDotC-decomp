#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089acbd8(undefined4 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined auStack_50 [64];
  
  if (param_3 == '\0') {
    FUN_089b4c84(auStack_50,"option_sol01");
  }
  else {
    FUN_089b4c84(auStack_50,"option_sol00");
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x42c00000;
  local_54 = 0x42000000;
  FUN_089f4060(param_2,&local_60);
  return;
}

