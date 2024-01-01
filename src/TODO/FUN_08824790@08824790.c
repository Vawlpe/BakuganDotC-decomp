#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08824790(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if ((param_2 == -1) || (*(int *)(iVar1 + 0x16c) == param_2)) {
      if (param_3 == 0) {
        *(undefined4 *)(iVar1 + 0x170) = param_4;
      }
      else if (*(int *)(iVar1 + 0x160) == param_3) {
        *(undefined4 *)(iVar1 + 0x170) = param_4;
      }
    }
  }
  return;
}

