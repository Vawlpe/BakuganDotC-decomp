#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08865154(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x264);
  uVar2 = 1;
  if (iVar1 < 4) {
    if (2 < iVar1) {
      uVar2 = 2;
    }
  }
  else if ((iVar1 < 5) && (iVar1 = FUN_0885fd08(param_1), iVar1 != 0)) {
    uVar2 = 3;
  }
  FUN_08862a84(param_1,uVar2,0,0);
  return;
}

