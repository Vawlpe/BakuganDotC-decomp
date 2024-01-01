#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bf398(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08a2d690(iVar2,0x20);
    iVar3 = iVar2;
  }
  DAT_08af8270 = iVar3;
  FUN_089f6b38();
  FUN_089c8614(8);
  return param_1;
}

