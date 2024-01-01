#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089edf88(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089edbc8();
  *(undefined **)(param_1 + 0x50) = &DAT_08af577c;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x50,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089ed6c8(iVar2,0);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x60) = iVar3;
  FUN_089ed7b0(iVar3,0x1e0,0x110);
  return param_1;
}

