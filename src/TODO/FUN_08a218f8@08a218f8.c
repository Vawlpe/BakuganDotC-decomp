#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a218f8(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    puVar2 = &DAT_08afdcc4;
    uVar3 = 0;
    DAT_08afdcc0 = param_1;
    do {
      uVar3 = uVar3 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (uVar3 < 0x80);
    uVar1 = 0;
  }
  return uVar1;
}

