#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f01b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_089efdc4();
  *(undefined4 *)(iVar1 + 0x90) = param_5;
  iVar1 = FUN_089eff14(param_1,param_2,param_3,param_4);
  *(undefined4 *)(iVar1 + 0x90) = param_5;
  iVar1 = FUN_089f0064(param_1,param_2,param_3,param_4);
  *(undefined4 *)(iVar1 + 0x90) = param_5;
  return;
}

