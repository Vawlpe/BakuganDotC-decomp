#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899bac0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x40) != 0) {
    uVar2 = 1 << ((int)*(char *)(param_1 + 0x109c) & 0x1fU);
    uVar1 = 1;
    if (((*(byte *)(param_1 + 0x10b9) & uVar2) == 0) || ((*(byte *)(param_1 + 0x10ba) & uVar2) != 0)
       ) {
      uVar1 = 2;
    }
    return uVar1;
  }
  return 0;
}

