#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a00808(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_089c9d1c();
  uVar2 = FUN_089c9e94(param_1);
  uVar3 = FUN_089c9d1c(param_1);
  iVar4 = FUN_089f7720(uVar2);
  if (iVar4 != 0) {
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        FUN_089e1090(iVar4,uVar3);
      }
    }
    else if (iVar1 < 2) {
      FUN_089e10a8(iVar4,uVar3);
    }
  }
  return 0;
}

