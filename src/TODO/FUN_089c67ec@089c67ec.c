#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c67ec(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 != 0xffffffff) {
    FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
    iVar2 = 0;
    iVar1 = param_1;
    do {
      if ((*(int *)(iVar1 + 0x1d0) != 0) && (param_2 == (*(int *)(iVar1 + 0x1d8) >> 0x14 & 0x7fU)))
      {
        uVar3 = 1;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < 0x20);
    FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  }
  return uVar3;
}

