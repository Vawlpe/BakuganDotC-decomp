#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880a52c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af1574;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar2 = FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08aac9c8 = uVar2;
  memset_jak(uVar2,0,4);
  iVar3 = FUN_0880d2e0();
  if (iVar3 != 0) {
    uVar1 = FUN_0880cc48();
    FUN_0880cd9c(uVar1,1,0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_08816868();
  return param_1;
}

