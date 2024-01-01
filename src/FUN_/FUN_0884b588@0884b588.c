#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884b588(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_08aba778 == 0) {
    iVar1 = FUN_0880d354();
    if ((iVar1 != 0) && (iVar1 = FUN_0880d2e0(), iVar1 != 0)) {
      uVar2 = FUN_0880cc48();
      iVar1 = FUN_0880d7e0(uVar2,0x4880);
      if (iVar1 != 0) {
        return;
      }
    }
    if ((param_2 != 0) && (iVar1 = FUN_089bf93c(0x14a,1), iVar1 == 0)) {
      FUN_089c87e4(0);
      FUN_089c879c(0x3f800000,0);
      FUN_0884b4d4(param_1,0);
      FUN_08848f94(param_2,param_3,param_4);
      if (param_4 == 0) {
        FUN_0884b558(0);
      }
    }
  }
  return;
}

