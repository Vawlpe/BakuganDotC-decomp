#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e7b04(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088e7364(param_1,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(undefined *)(param_1 + 0x400) = 0;
  }
  return;
}

