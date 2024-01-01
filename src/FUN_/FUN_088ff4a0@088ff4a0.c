#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088ff4a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x4d4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x4d4) + 0x30);
  }
  return uVar1;
}

