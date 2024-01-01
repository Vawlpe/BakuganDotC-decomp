#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c5f18(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  iVar1 = 0;
  iVar2 = param_1;
  if (param_2 == -1) {
    do {
      if ((*(short *)(iVar2 + 0x9f0) != 0) && (*(int *)(iVar2 + 0x9e0) == -1)) {
        uVar3 = 0;
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x430;
    } while (iVar1 < 0x20);
  }
  else {
    uVar3 = 0;
    iVar1 = 0;
    do {
      if ((*(short *)(iVar2 + 0x9f0) != 0) && (*(int *)(iVar2 + 0x9fc) == param_2)) {
        uVar3 = 1;
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x430;
    } while (iVar1 < 0x20);
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return uVar3;
}

