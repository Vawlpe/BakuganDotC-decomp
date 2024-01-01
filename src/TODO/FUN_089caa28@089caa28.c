#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089caa28(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_089c9ed8(param_1,2);
  iVar2 = FUN_089c9da8(param_1);
  uVar3 = 2;
  if (*piVar1 == iVar2) {
    uVar3 = 0;
  }
  return uVar3;
}

