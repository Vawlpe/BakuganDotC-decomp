#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c0584(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_089c8e28();
  if (DAT_08ac525c != 0) {
    FUN_08a2e348(DAT_08ac525c);
    uVar1 = FUN_08a2df8c(DAT_08ac525c);
    for (iVar2 = FUN_08a2e774(uVar1); iVar2 != 0; iVar2 = FUN_08a2e774(iVar2)) {
      iVar3 = FUN_08a2e754(iVar2);
      iVar4 = FUN_08a2e788(iVar2);
      if ((iVar4 == 0) && (iVar3 != 0)) {
        FUN_089c0444(param_1,iVar3);
      }
    }
    uVar1 = FUN_08a2df94(DAT_08ac525c);
    for (iVar2 = FUN_08a2e774(uVar1); iVar2 != 0; iVar2 = FUN_08a2e774(iVar2)) {
      iVar3 = FUN_08a2e754(iVar2);
      iVar4 = FUN_08a2e788(iVar2);
      if ((iVar4 == 0) && (iVar3 != 0)) {
        FUN_089c0444(param_1,iVar3);
      }
    }
    FUN_08a2e348(DAT_08ac525c);
  }
  return;
}

