#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cefe0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088cedd8();
  if (iVar1 == 0) {
    uVar2 = FUN_089f2178(0x43160000);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_089f5084(*(int *)(param_1 + 0x18),uVar2);
    }
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 != 0) {
      uVar2 = FUN_089f2178(0x42c80000);
      FUN_089f5084(iVar1,uVar2);
    }
  }
  return;
}

