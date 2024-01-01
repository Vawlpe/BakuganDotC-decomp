#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880d228(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_08aac9e0;
  if (DAT_08aac9e0 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0xc,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_0880c71c(iVar3);
      iVar1 = iVar3;
    }
  }
  DAT_08aac9e0 = iVar1;
  FUN_0880c7e0(DAT_08aac9e4);
  FUN_0880ceb8(DAT_08aac9e0);
  FUN_0880d11c(DAT_08aac9e0,0);
  return;
}

