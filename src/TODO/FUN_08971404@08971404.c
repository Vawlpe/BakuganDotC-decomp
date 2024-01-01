#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08971404(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = 0;
  do {
    FUN_08971104(param_1,uVar1);
    uVar2 = uVar2 + 1;
    uVar1 = uVar2 & 0xff;
  } while ((int)uVar2 < 4);
  return;
}

