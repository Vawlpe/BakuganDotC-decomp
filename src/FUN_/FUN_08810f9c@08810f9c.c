#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810f9c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_089c9da8();
  iVar2 = FUN_089c9da8(param_1);
  if (iVar2 == -1) {
    iVar2 = 0x11;
  }
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      iVar1 = FUN_0884b248();
      if (iVar1 == 0) {
        FUN_089c879c(0x3f800000,0);
        FUN_089c8734(0,iVar2,1,0);
      }
      else {
        uVar3 = FUN_0884b268();
        FUN_0884e0a8(0x3fc00000,uVar3,iVar2);
      }
    }
  }
  else if (iVar1 < 2) {
    FUN_089c879c(0x3f800000,0);
  }
  return 0;
}

