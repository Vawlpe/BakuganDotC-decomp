#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b93b8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = false;
  iVar2 = FUN_0884b248();
  if (iVar2 != 0) {
    if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_0880d354();
      if (iVar2 != 0) {
        bVar1 = true;
      }
    }
  }
  if (bVar1) {
    uVar3 = FUN_088b9284(param_1,param_2);
  }
  return uVar3;
}

