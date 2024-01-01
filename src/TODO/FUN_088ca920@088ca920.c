#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ca920(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = WeirdBuff;
  iVar2 = FUN_089bfa40(100);
  if ((iVar2 == 0) || (iVar2 = FUN_089bf2d4(iVar2,1), iVar2 == 0)) {
    if (DAT_08abea25 != '\0') {
      FUN_088c9798(param_1);
    }
    iVar2 = 0;
    do {
      iVar3 = FUN_088c9908(param_1,uVar1);
      iVar2 = iVar2 + 1;
      if (iVar3 != 0) {
        return;
      }
    } while (iVar2 < 1);
  }
  return;
}

