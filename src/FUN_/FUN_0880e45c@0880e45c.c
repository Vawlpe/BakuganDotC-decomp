#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880e45c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  uVar1 = FUN_089c9d1c();
  iVar2 = FUN_089c9da8(param_1);
  iVar3 = FUN_089c9da8(param_1);
  uVar6 = 0;
  puVar5 = (undefined4 *)0x0;
  if (uVar1 < 5) {
    if (uVar1 == 1) {
      puVar5 = (undefined4 *)FUN_089c9ed8(param_1,2);
    }
    else {
      uVar6 = FUN_089c9da8(param_1);
    }
  }
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      if (uVar1 == 4) {
        uVar4 = FUN_0880cc48();
        FUN_0880d62c(uVar4,iVar3,uVar6);
      }
      else if (uVar1 == 0) {
        uVar4 = FUN_0880cc48();
        FUN_0880d5cc(uVar4,iVar3,uVar6);
      }
      else {
        uVar6 = FUN_0880cc48();
        uVar6 = FUN_0880d4e4(uVar6,iVar3);
        *puVar5 = uVar6;
      }
    }
  }
  else if (iVar2 < 2) {
    if ((iVar3 == 0) && (uVar1 != 1)) {
      if ((int)uVar1 < 3) {
        if ((int)uVar1 < 1) {
          if ((int)uVar1 < 0) {
            return 0;
          }
        }
        else if ((int)uVar1 < 2) {
          return 0;
        }
        uVar4 = FUN_0880cc48();
        FUN_0880d0e8(uVar4,uVar6);
      }
      else if ((int)uVar1 < 4) {
        uVar4 = FUN_0880cc48();
        FUN_0880d808(uVar4,uVar6);
      }
    }
    else if (uVar1 == 4) {
      uVar4 = FUN_0880cc48();
      FUN_0880d70c(uVar4,iVar3,uVar6);
    }
    else if (uVar1 == 0) {
      uVar4 = FUN_0880cc48();
      FUN_0880cd9c(uVar4,iVar3,uVar6);
    }
    else {
      uVar6 = FUN_0880cc48();
      uVar6 = FUN_0880d0ac(uVar6,iVar3);
      *puVar5 = uVar6;
    }
  }
  else if (iVar2 < 3) {
    uVar6 = FUN_0880cc48();
    uVar6 = FUN_0880dba8(uVar6);
    *puVar5 = uVar6;
  }
  return 0;
}

