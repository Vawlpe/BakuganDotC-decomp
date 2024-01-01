#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fbb78(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_08abfc50;
  if (DAT_08abfc50 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x18,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_088fbadc(iVar3,param_1);
      iVar1 = iVar3;
    }
  }
  DAT_08abfc50 = iVar1;
  return;
}

