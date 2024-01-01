#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088549dc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_08aba7a4;
  if (DAT_08aba7a0 == 0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_08a298a0(iVar2,param_1);
      iVar3 = iVar2;
    }
    DAT_08aba7a0 = iVar3;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0x14,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_089d74cc(iVar2,0x170,param_1,1);
      iVar3 = iVar2;
    }
  }
  DAT_08aba7a4 = iVar3;
  return;
}

