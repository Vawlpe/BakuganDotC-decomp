#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08816868(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_08aae3a8;
  if (DAT_08aae3a8 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x48,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_088165d8(iVar2);
      iVar3 = iVar2;
    }
  }
  DAT_08aae3a8 = iVar3;
  iVar3 = FUN_089eac08();
  if (iVar3 == 0) {
    FUN_089eaa70();
  }
  return;
}

