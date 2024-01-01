#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08877904(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0888380c(param_1,param_4);
  if (iVar1 == 0) {
    FUN_0887719c(param_1,param_2,param_3,param_4,DAT_08b00920);
    *(undefined *)(param_1 + 0xf0) = 0;
  }
  else {
    FUN_0887719c(param_1,param_2,param_3,param_4,DAT_08abd5b0);
    *(undefined *)(param_1 + 0xf0) = 1;
  }
  return;
}

