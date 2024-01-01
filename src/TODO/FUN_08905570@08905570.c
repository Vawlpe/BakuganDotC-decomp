#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08905570(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  iVar1 = FUN_08905550(param_1,param_2,param_1,0xffffffff);
  if (iVar1 != 0) {
    return 0x15;
  }
  iVar1 = FUN_089054c0(param_1);
  if (iVar1 != 0) {
    return 0x27;
  }
  iVar1 = FUN_08905508(param_1);
  if (iVar1 != 0) {
    uVar2 = 0x26;
  }
  return uVar2;
}

