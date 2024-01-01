#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d8c98(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x38) == '\0') && (*(int *)(param_1 + 0x18) == 0)) {
    uVar1 = FUN_088d8bac(param_1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
  }
  return;
}

