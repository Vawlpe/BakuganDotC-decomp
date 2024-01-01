#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0885fc80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (*(char *)(param_1 + 0x158) != '\0') {
    iVar1 = FUN_0880d354();
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      iVar1 = FUN_0881b22c();
      if (iVar1 != 0) {
        iVar3 = *(int *)(param_1 + 0x150);
        uVar2 = _DONE_GetPtr_DAT_08AB0300();
        iVar1 = FUN_0881b66c(uVar2);
        if (iVar3 == iVar1) {
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

