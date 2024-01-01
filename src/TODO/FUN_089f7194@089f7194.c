#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089f7194(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_089befc8(param_2);
  iVar3 = 0;
  uVar2 = 1;
  if (iVar1 == 0) {
    return 0;
  }
  if (0 < iVar1) {
    do {
      if ((param_2 & uVar2) != 0) {
        iVar3 = iVar3 + 1;
      }
      uVar2 = uVar2 << 1;
    } while (iVar3 < iVar1);
  }
  if (iVar1 < 2) {
    uVar2 = (int)uVar2 >> 1;
  }
  return uVar2;
}

