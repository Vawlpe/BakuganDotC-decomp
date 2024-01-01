#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894499c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    uVar1 = FUN_089f2178(0x41200000);
    FUN_089f5084(iVar2,uVar1);
  }
  iVar2 = 0;
  do {
    iVar3 = *(int *)(param_1 + 0x8c);
    if (iVar3 != 0) {
      uVar1 = FUN_089f2178(0x41a00000);
      FUN_089f5084(iVar3,uVar1);
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 0x14);
  return;
}

