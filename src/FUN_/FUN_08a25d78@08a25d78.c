#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a25d78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_80 [112];
  
  FUN_08a10068(auStack_80);
  iVar1 = FUN_08a25aa8(param_1,param_2,auStack_80);
  if ((iVar1 != 0) && (iVar1 = FUN_08a10608(auStack_80), iVar1 != 0)) {
    uVar2 = FUN_08a25bd0(param_1,param_2,auStack_80);
    FUN_08a10580(auStack_80);
    return uVar2;
  }
  return 0;
}

