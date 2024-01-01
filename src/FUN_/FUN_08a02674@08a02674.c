#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08a02674(uint param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_3 != 0) {
    do {
      iVar3 = 0x15b0;
      if (param_3 < 0x15b0) {
        iVar3 = param_3;
      }
      param_3 = param_3 - iVar3;
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
        uVar2 = uVar2 + bVar1;
        param_1 = param_1 + uVar2;
      } while (iVar3 != 0);
      uVar2 = uVar2 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    } while (param_3 != 0);
  }
  return uVar2 | param_1 << 0x10;
}

