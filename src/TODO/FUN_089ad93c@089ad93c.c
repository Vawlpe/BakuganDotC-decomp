#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ad93c(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    FUN_089ad7b4(param_1,uVar1);
    uVar2 = uVar2 + 1;
    uVar1 = uVar2 & 0xff;
  } while ((int)uVar2 < 4);
  return;
}

