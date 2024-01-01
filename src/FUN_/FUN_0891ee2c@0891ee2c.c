#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ee2c(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    FUN_089b1bd8();
  }
  else {
    uVar1 = FUN_0880cc48();
    iVar2 = FUN_0880d0ac(uVar1,0x2d);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_0880cc48();
      uVar1 = FUN_0880cc48();
      iVar4 = FUN_0880d0ac(uVar1,0x2d);
      iVar4 = *(int *)(*piVar3 + 0x464) - iVar4;
      iVar2 = 9999999;
      if ((iVar4 < 10000000) && (iVar2 = iVar4, iVar4 < 0)) {
        iVar2 = 0;
      }
      *(int *)(*piVar3 + 0x464) = iVar2;
    }
  }
  return;
}

