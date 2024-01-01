#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089bc984(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_089bb728(*(undefined4 *)(DAT_08ac51f8 + 4));
  if (*(char *)(param_1 + 0x14) == '\0') {
    if (*(char *)(param_1 + 0x17) == '\0') {
      uVar1 = 1;
    }
    else if (((*(int *)(param_1 + 0x10) == 0) && (uVar1 = 1, *(char *)(param_1 + 4) != '\0')) &&
            (*(char *)(param_1 + 5) == '\0')) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  FUN_089bb790(*(undefined4 *)(DAT_08ac51f8 + 4));
  return uVar1;
}

