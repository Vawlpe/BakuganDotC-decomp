#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881b018(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_089bf6e8(0x7d2,100);
  if (DAT_08ab0300 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(4,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ab0300 = piVar2;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0xf0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_0881aeb0(iVar3);
      iVar4 = iVar3;
    }
    *DAT_08ab0300 = iVar4;
  }
  return;
}

