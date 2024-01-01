#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d8ff0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_08ac5bc0;
  if (DAT_08ac5bc0 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x24,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar1 = 0;
    if (iVar3 != 0) {
      FUN_089d8b38(iVar3,0);
      iVar1 = iVar3;
    }
  }
  DAT_08ac5bc0 = iVar1;
  if (param_1 != 0) {
    FUN_089d8c60(param_1,DAT_08ac5bc0,1);
  }
  return;
}

