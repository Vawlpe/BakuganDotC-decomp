#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a20cbc(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0x80450001;
  if (DAT_08af13ac != -1) {
    uVar1 = FUN_08a29204();
    uVar1 = uVar1 >> (param_1 & 0x1f) & 1;
  }
  return uVar1;
}

