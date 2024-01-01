#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882487c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    if ((param_3 == -1) || (*(int *)(iVar1 + 0x16c) == param_3)) {
      if (param_4 == 0) {
        *(undefined4 *)(iVar1 + 0xbc) = param_1;
      }
      else if (*(int *)(iVar1 + 0x1fc) == param_4) {
        *(undefined4 *)(iVar1 + 0xbc) = param_1;
      }
    }
  }
  return;
}

