#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

ushort * FUN_089f8988(int param_1,uint param_2)

{
  ushort **ppuVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(ushort *)(param_1 + 0x84) != 0) {
    ppuVar1 = *(ushort ***)(param_1 + 0x80);
    do {
      iVar2 = iVar2 + 1;
      if (**ppuVar1 == param_2) {
        return *ppuVar1;
      }
      ppuVar1 = ppuVar1 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x84));
  }
  return (ushort *)0x0;
}

