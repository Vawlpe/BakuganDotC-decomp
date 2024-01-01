#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c6890(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar2 = 0;
  iVar1 = param_1;
  do {
    iVar2 = iVar2 + 1;
    if (*(int *)(iVar1 + 0x1d0) == param_2) {
      uVar3 = 1;
      break;
    }
    iVar1 = iVar1 + 0x20;
  } while (iVar2 < 0x20);
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return uVar3;
}

