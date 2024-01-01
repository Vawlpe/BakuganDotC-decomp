#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089d6790(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_089d5814();
  if (iVar1 != 0) {
    DAT_08ac5b9c = 1;
    DAT_08ac5b98 = 1;
    DAT_08ac5b94 = param_1;
    _WIP_Init__LoopThingIdk_Step(0xd,0,0);
  }
  return iVar1 != 0;
}

