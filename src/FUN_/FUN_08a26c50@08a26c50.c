#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a26c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_90 [112];
  
  FUN_08a10068(auStack_90);
  iVar1 = FUN_08a26ba4(param_1,param_2,param_3,param_4,auStack_90);
  if ((iVar1 != 0) && (iVar1 = FUN_08a10608(auStack_90), iVar1 != 0)) {
    uVar2 = FUN_08a2682c(param_1,param_2,param_3,param_4,auStack_90);
    FUN_08a10580(auStack_90);
    return uVar2;
  }
  return 0;
}

