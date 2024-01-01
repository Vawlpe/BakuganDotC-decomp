#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884e4b4(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(DAT_08ac58c4 + 0x20) != 1) {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,7);
    if ((iVar2 < 1) || (2 < iVar2)) {
      iVar2 = 0;
      do {
        iVar5 = FUN_0884e0f8(param_1,iVar2);
        if (iVar5 == 1) {
          uVar1 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880d70c(uVar1,iVar2 + 0x1f,1);
        }
        else if (iVar5 == 2) {
          uVar1 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880d70c(uVar1,iVar2 + 0x23,1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
    else {
      iVar2 = 0;
      iVar5 = 0;
      do {
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        iVar3 = FUN_0880d0ac(uVar1,iVar5 + 3);
        if (0 < iVar3) {
          iVar2 = iVar2 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = 0;
      } while (iVar5 < 4);
      iVar5 = 0;
      do {
        iVar4 = FUN_0884d134(param_1,iVar3);
        if (iVar4 == 0) {
          iVar5 = iVar5 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      iVar3 = 0;
      do {
        iVar4 = FUN_0884d134(param_1,iVar3);
        if (iVar4 == 0) {
          if (iVar2 != iVar5) {
            uVar1 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880d70c(uVar1,iVar3 + 0x1f,1);
          }
        }
        else {
          uVar1 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880d70c(uVar1,iVar3 + 0x23,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
    }
  }
  return;
}

