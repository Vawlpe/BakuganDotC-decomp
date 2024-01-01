#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c6914(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar2 = 0;
  iVar1 = param_1;
  while ((*(int *)(iVar1 + 0x1d0) == 0 || (*(int *)(iVar1 + 0x1d8) != param_2))) {
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x20;
    if (0x1f < iVar2) {
LAB_089c697c:
      FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
      return uVar3;
    }
  }
  uVar3 = 1;
  goto LAB_089c697c;
}

