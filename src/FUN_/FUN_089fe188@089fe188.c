#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fe188(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d90ac();
  *(undefined **)(param_1 + 0x20) = &DAT_08af590c;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089d74cc(iVar2,0x10b0,8,1);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  return param_1;
}

