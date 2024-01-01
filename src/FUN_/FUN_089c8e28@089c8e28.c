#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c8e28(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_089c1254();
  if (iVar1 != 0) {
    iVar1 = FUN_089c127c();
    *(undefined *)(iVar1 + 0x18) = 0;
  }
  iVar1 = FUN_089c1254();
  if (iVar1 != 0) {
    uVar2 = FUN_089c127c();
    FUN_089c1840(uVar2);
  }
  if (DAT_08ac58b0 != 0) {
    FUN_08a30170();
    uVar2 = FUN_08a2ff68(DAT_08ac58b0);
    iVar1 = FUN_08a3044c(uVar2);
    while (iVar1 != 0) {
      iVar3 = FUN_08a30434(iVar1);
      iVar1 = FUN_08a3044c(iVar1);
      if (iVar3 != 0) {
        FUN_08a2e348(iVar3);
        uVar2 = FUN_08a2df8c(iVar3);
        iVar4 = FUN_08a2e774(uVar2);
        while (iVar4 != 0) {
          iVar5 = FUN_08a2e754(iVar4);
          iVar4 = FUN_08a2e774(iVar4);
          if (iVar5 == 0) break;
          *(undefined *)(iVar5 + 0x31) = 1;
          *(undefined4 *)(iVar5 + 8) = 0;
          *(undefined *)(iVar5 + 0x32) = 1;
        }
        if (DAT_08ac58b0 != 0) {
          FUN_08a2ff70(DAT_08ac58b0,iVar3);
        }
        if (iVar3 != 0) {
          FUN_08a2de00(iVar3,3);
        }
      }
    }
    if (DAT_08ac58b0 != 0) {
      FUN_08a2fe50(DAT_08ac58b0,3);
      DAT_08ac58b0 = 0;
    }
  }
  return;
}

