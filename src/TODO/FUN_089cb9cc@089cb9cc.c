#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cb9cc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x58,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089ffe04(iVar2,DAT_08b01130);
    iVar3 = iVar2;
  }
  FUN_089c973c(iVar3,param_1);
  if (DAT_08b01130 == 0) {
    DAT_08b01130 = iVar3;
  }
  return iVar3;
}

