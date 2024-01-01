#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f937c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_08ac6180;
  if (DAT_08ac6180 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x108,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_089f9474(iVar3);
      iVar1 = iVar3;
    }
  }
  DAT_08ac6180 = iVar1;
  return DAT_08ac6180;
}

