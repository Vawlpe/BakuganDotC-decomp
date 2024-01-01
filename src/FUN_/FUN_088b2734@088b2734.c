#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2734(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x3a) == '\0') && (*(int *)(param_1 + 0x18) == 0)) {
    uVar1 = FUN_088b2334(param_1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return;
}

