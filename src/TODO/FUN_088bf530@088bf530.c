#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088bf530(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_088bf4cc(param_1,param_2);
  uVar2 = (uint)*(ushort *)(iVar1 + 4);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      uVar3 = (uint)(&DAT_08b00bdc)[(int)uVar2 >> 5] >> (-(-uVar2 & 0x1f) & 0x1f) & 1;
    }
    else {
      uVar3 = (uint)(&DAT_08b00bdc)[(int)uVar2 >> 5] >> (uVar2 & 0x1f) & 1;
    }
  }
  if (uVar3 == 0) {
    uVar2 = (uint)*(ushort *)(iVar1 + 2);
    uVar3 = 0;
    if (uVar2 != 0) {
      if ((int)uVar2 < 0) {
        uVar3 = (uint)(&DAT_08b00bdc)[(int)uVar2 >> 5] >> (-(-uVar2 & 0x1f) & 0x1f) & 1;
      }
      else {
        uVar3 = (uint)(&DAT_08b00bdc)[(int)uVar2 >> 5] >> (uVar2 & 0x1f) & 1;
      }
    }
    if (uVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

