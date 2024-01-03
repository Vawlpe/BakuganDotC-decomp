#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884c830(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x1b);
  if (iVar2 < 1) {
    iVar2 = 1;
  }
  else if (5 < iVar2) {
    iVar2 = 5;
  }
  if ((*(int *)(DAT_08ac58c4 + 0x20) == 2) && (2 < iVar2)) {
    uVar3 = 1;
    iVar2 = FUN_0884c4a4(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_0884c570(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_0884c63c(param_1);
        if (iVar2 != 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

