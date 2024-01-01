#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08889298(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xe0);
  uVar1 = 0xffffffff;
  if ((uVar2 != 0xffffffff) && (uVar1 = uVar2 & 3, (int)uVar2 < 0)) {
    uVar1 = -(-uVar2 & 3);
  }
  return uVar1;
}

