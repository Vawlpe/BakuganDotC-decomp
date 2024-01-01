#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088245c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if ((((param_2 == -1) || (*(int *)(iVar1 + 0x16c) == param_2)) && (*(int *)(iVar1 + 0x160) == 0)
        ) && (*(int *)(iVar1 + 0x1fc) == 0)) {
      uVar3 = 1;
      FUN_089f5124(*(undefined4 *)(iVar1 + 0x214));
    }
  }
  return uVar3;
}

