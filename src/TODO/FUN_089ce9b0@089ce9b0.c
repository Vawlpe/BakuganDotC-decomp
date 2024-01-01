#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ce9b0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08ac5934 != 0) {
    FUN_089ce934(DAT_08ac5934,3);
    DAT_08ac5934 = 0;
  }
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089ce8c0(iVar2);
    iVar3 = iVar2;
  }
  DAT_08ac5934 = iVar3;
  FUN_089cef2c();
  FUN_089f21e8();
  return;
}

