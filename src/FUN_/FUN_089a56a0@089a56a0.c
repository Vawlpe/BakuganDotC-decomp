#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a56a0(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined auStack_80 [64];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  param_2 = param_2 & 0xff;
  if (param_2 < 10) {
    FUN_089b4c84(auStack_80,"menu_all_button01");
    uVar1 = FUN_089f7720(auStack_80);
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x42000000;
    local_24 = 0x42000000;
    FUN_089f4060(param_1,&local_30);
    FUN_089f4a90(0,(float)param_2,param_1);
  }
  else {
    FUN_089b4c84(auStack_80,"menu_all_button02");
    uVar1 = FUN_089f7720(auStack_80);
    *(undefined4 *)(param_1 + 0xd4) = uVar1;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x42000000;
    local_34 = 0x42000000;
    FUN_089f4060(param_1,&local_40);
    FUN_089f4a90(0,(float)(param_2 - 10),param_1);
  }
  return;
}

