#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cc460(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 < 4) {
    if (param_2 < 1) {
      if (-1 < param_2) {
        FUN_089d8634();
        uVar1 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar2 = FUN_089d7d74(0x14,0,0);
        FUN_089d816c(uVar1);
        FUN_089d866c();
        iVar3 = 0;
        if (iVar2 != 0) {
          FUN_08a01168(iVar2);
          iVar3 = iVar2;
        }
      }
    }
    else if (param_2 < 2) {
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar2 = FUN_089d7d74(0x20,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      iVar3 = 0;
      if (iVar2 != 0) {
        FUN_089cc868(iVar2);
        iVar3 = iVar2;
      }
    }
    if (iVar3 != 0) {
      *(int *)(DAT_08ac58e0 + param_2 * 4 + 8) = iVar3;
    }
    uVar1 = _DONE_GetPtr_DAT_08AC51F8();
    FUN_089bca20(uVar1);
  }
  return;
}

