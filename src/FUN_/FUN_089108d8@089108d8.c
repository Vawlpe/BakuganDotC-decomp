#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089108d8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x150) = param_2;
  bVar1 = false;
  switch(param_2) {
  case 6:
    iVar2 = FUN_0880d354();
    if (((iVar2 != 0) && (iVar2 = FUN_0881b22c(), iVar2 != 0)) && (*(int *)(param_1 + 0x24) == 0)) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    iVar2 = FUN_0881b254();
    *(undefined *)(*(int *)(iVar2 + 0xe4) + 0x3c) = 1;
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x50,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_089cdf1c(iVar4);
      iVar2 = iVar4;
    }
    *(int *)(param_1 + 0x24) = iVar2;
    FUN_089ce09c(iVar2,0,0);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x24);
  }
  return;
}

