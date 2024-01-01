#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970eac(undefined4 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if (param_3 == -1) {
    FUN_089b4c84(auStack_50,"option_battle_t_07");
    uVar1 = FUN_089f7720(auStack_50);
    *(undefined4 *)(param_2 + 0xd4) = uVar1;
  }
  else {
    FUN_089b4c84(auStack_50,"option_battle_t_03");
    uVar1 = FUN_089f7720(auStack_50);
    *(undefined4 *)(param_2 + 0xd4) = uVar1;
    FUN_089f4a90(0,(float)(int)param_3,param_2);
  }
  return;
}

