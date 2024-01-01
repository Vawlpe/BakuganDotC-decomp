#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089c2fbc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_089c2848();
  if ((iVar1 != 0) && (iVar2 = FUN_089fce78(), iVar2 != 0)) {
    uVar3 = FUN_089fce94();
    iVar1 = FUN_089fd350(uVar3,iVar1);
    if ((iVar1 != 0) && (iVar1 = FUN_089c2b10(1), iVar1 != 0)) {
      uVar3 = FUN_089c2b48(1);
      iVar1 = FUN_089c32e0(uVar3);
      if (iVar1 == -1) {
        uVar3 = FUN_089c2b48(1);
        iVar4 = FUN_089c357c(uVar3,param_1,0,0);
      }
      else {
        FUN_089c879c(0,1);
      }
      if (iVar4 == 0) {
        FUN_089c8734(1,param_1,0,0);
      }
    }
  }
  return iVar4;
}

