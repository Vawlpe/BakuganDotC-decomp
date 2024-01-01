#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0883071c(float param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (3.141593 < param_1) {
    param_1 = param_1 - 6.283185;
  }
  else if (param_1 <= -3.141593) {
    param_1 = param_1 + 6.283185;
  }
  uVar2 = 0;
  iVar1 = FUN_0883063c(param_1,0,param_2,param_2,0);
  if (iVar1 == 0) {
    uVar2 = 2;
    iVar1 = FUN_0883063c(param_1,0x3fc90fdb,param_2);
    if (iVar1 == 0) {
      uVar2 = 1;
      iVar1 = FUN_0883063c(param_1,0xbfc90fdb,param_2);
      if (iVar1 != 0) {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}

