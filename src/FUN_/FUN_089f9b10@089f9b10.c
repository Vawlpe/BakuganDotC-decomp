#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089f9b10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x44));
  if ((*(char *)(param_1 + 0x49) != '\0') && (uVar1 = 0, *(char *)(param_1 + 0x4a) != '\0')) {
    uVar1 = 1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x44));
  return uVar1;
}

