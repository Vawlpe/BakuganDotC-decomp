#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f3dd4(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  uVar2 = param_2[0x49];
  local_30 = *param_2;
  local_1c = &DAT_08af5394;
  local_2c = param_2[1];
  local_28 = param_2[2];
  local_24 = param_2[3];
  local_20 = param_2[4];
  FUN_089f3bec(param_2,param_1);
  FUN_089d8a70(&local_30,param_2);
  FUN_089d8a9c(&local_30);
  param_2[0x49] = uVar2;
  uVar1 = *(uint *)(param_1 + 0xe4);
  if (uVar1 < 5) {
    if (((uVar1 == 2) || (uVar1 == 3)) || (uVar1 == 4)) {
      param_2[0x48] = param_2 + 0x3c;
    }
    else {
      FUN_089f3eb8(param_2,uVar1);
    }
  }
  FUN_089d87bc(&local_30,2);
  return;
}

