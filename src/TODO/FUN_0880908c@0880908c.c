#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880908c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08aac9b0 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x20,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_08808c30(iVar2);
      iVar3 = iVar2;
    }
    DAT_08aac9b0 = iVar3;
    FUN_089bfbf0(iVar3,0);
    FUN_08809070(DAT_08aac9b0,1);
  }
  else {
    FUN_08809070(DAT_08aac9b0,1);
  }
  return;
}

