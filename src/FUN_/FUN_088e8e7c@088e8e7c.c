#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e8e7c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088e7364(param_1,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3b0) < 1) {
      *(undefined4 *)(param_1 + 0x3a0) = 0;
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
    }
    else {
      *(int *)(param_1 + 0x3b0) = *(int *)(param_1 + 0x3b0) + -1;
    }
    FUN_088def24(0x3e4ccccd,param_1,0,0,0);
  }
  return;
}

