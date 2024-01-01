#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08854c60(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((DAT_08aba7a0 != 0) && (DAT_08aba7a4 != 0)) {
    iVar3 = FUN_089d76ac();
    if (iVar3 == 0) {
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar2 = FUN_089d7d74(0x170,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      iVar3 = 0;
      if (iVar2 != 0) {
        FUN_08854bec(iVar2);
        iVar3 = iVar2;
      }
    }
    else {
      FUN_08854bec(iVar3);
    }
    FUN_08a29b78(DAT_08aba7a0,iVar3,1000);
    FUN_08a29cd4(DAT_08aba7a0);
  }
  return iVar3;
}

