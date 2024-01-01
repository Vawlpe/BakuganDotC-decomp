#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a2e5f0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x14,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089d74cc(iVar2,0x10,param_2,1);
      iVar3 = iVar2;
    }
    *(int *)(param_1 + 0x10) = iVar3;
  }
  return;
}

