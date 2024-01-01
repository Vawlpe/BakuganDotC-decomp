#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eb294(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    uVar1 = FUN_089f2178(*param_1);
    FUN_089f5084(iVar2,uVar1);
    *(undefined *)(param_1 + 2) = 1;
  }
  return;
}

